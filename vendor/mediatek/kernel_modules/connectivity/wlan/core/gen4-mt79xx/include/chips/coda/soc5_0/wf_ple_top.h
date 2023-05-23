/* SPDX-License-Identifier: GPL-2.0 OR BSD-3-Clause */
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

#ifndef __WF_PLE_TOP_REGS_H__
#define __WF_PLE_TOP_REGS_H__

#ifdef __cplusplus
extern "C" {
#endif


//****************************************************************************
//
//                     WF_PLE_TOP CR Definitions
//
//****************************************************************************

#define WF_PLE_TOP_BASE                                        0x820C0000

#define WF_PLE_TOP_GC_ADDR                                     (WF_PLE_TOP_BASE + 0x00) // 0000
#define WF_PLE_TOP_PBUF_CTRL_ADDR                              (WF_PLE_TOP_BASE + 0x04) // 0004
#define WF_PLE_TOP_FREEPG_START_END_ADDR                       (WF_PLE_TOP_BASE + 0x08) // 0008
#define WF_PLE_TOP_PG_HIF_GROUP_ADDR                           (WF_PLE_TOP_BASE + 0x0c) // 000C
#define WF_PLE_TOP_PG_HIF_WMTXD_GROUP_ADDR                     (WF_PLE_TOP_BASE + 0x10) // 0010
#define WF_PLE_TOP_PG_HIF_TXCMD_GROUP_ADDR                     (WF_PLE_TOP_BASE + 0x14) // 0014
#define WF_PLE_TOP_PG_CPU_GROUP_ADDR                           (WF_PLE_TOP_BASE + 0x18) // 0018
#define WF_PLE_TOP_VOW_CONTROL_ADDR                            (WF_PLE_TOP_BASE + 0x1c) // 001C
#define WF_PLE_TOP_SRAM_MBIST_DELSEL1_ADDR                     (WF_PLE_TOP_BASE + 0x20) // 0020
#define WF_PLE_TOP_SRAM_MBIST_DELSEL2_ADDR                     (WF_PLE_TOP_BASE + 0x24) // 0024
#define WF_PLE_TOP_SRAM_MBIST_DELSEL3_ADDR                     (WF_PLE_TOP_BASE + 0x28) // 0028
#define WF_PLE_TOP_SRAM_MBIST_DELSEL4_ADDR                     (WF_PLE_TOP_BASE + 0x2c) // 002C
#define WF_PLE_TOP_SRAM_MBIST_DELSEL5_ADDR                     (WF_PLE_TOP_BASE + 0x30) // 0030
#define WF_PLE_TOP_SRAM_MBIST_DELSEL6_ADDR                     (WF_PLE_TOP_BASE + 0x34) // 0034
#define WF_PLE_TOP_SRAM_MBIST_DELSEL7_ADDR                     (WF_PLE_TOP_BASE + 0x38) // 0038
#define WF_PLE_TOP_SRAM_MBIST_DELSEL8_ADDR                     (WF_PLE_TOP_BASE + 0x3c) // 003C
#define WF_PLE_TOP_SRAM_MBIST_DELSEL9_ADDR                     (WF_PLE_TOP_BASE + 0x40) // 0040
#define WF_PLE_TOP_SRAM_MBIST_DELSEL10_ADDR                    (WF_PLE_TOP_BASE + 0x44) // 0044
#define WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR                        (WF_PLE_TOP_BASE + 0x48) // 0048
#define WF_PLE_TOP_INT_N9_EN_MASK_ADDR                         (WF_PLE_TOP_BASE + 0x80) // 0080
#define WF_PLE_TOP_INT_N9_ERR_MASK_ADDR                        (WF_PLE_TOP_BASE + 0x84) // 0084
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR                      (WF_PLE_TOP_BASE + 0x88) // 0088
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_ADDR                     (WF_PLE_TOP_BASE + 0x8c) // 008C
#define WF_PLE_TOP_HOST_REPORT0_ADDR                           (WF_PLE_TOP_BASE + 0x90) // 0090
#define WF_PLE_TOP_HOST_REPORT1_ADDR                           (WF_PLE_TOP_BASE + 0x94) // 0094
#define WF_PLE_TOP_HOST_REPORT2_ADDR                           (WF_PLE_TOP_BASE + 0x98) // 0098
#define WF_PLE_TOP_RELEASE_CTRL_0_ADDR                         (WF_PLE_TOP_BASE + 0x9c) // 009C
#define WF_PLE_TOP_RELEASE_CTRL_1_ADDR                         (WF_PLE_TOP_BASE + 0xA0) // 00A0
#define WF_PLE_TOP_RELEASE_CTRL_3_ADDR                         (WF_PLE_TOP_BASE + 0xa8) // 00A8
#define WF_PLE_TOP_BLK_MODE_RATE_LMT_ADDR                      (WF_PLE_TOP_BASE + 0xac) // 00AC
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR                     (WF_PLE_TOP_BASE + 0xb0) // 00B0
#define WF_PLE_TOP_PLE_DELAY_TX_CTRL_ADDR                      (WF_PLE_TOP_BASE + 0xb4) // 00B4
#define WF_PLE_TOP_PLE_STATION_REDIR_CTRL_ADDR                 (WF_PLE_TOP_BASE + 0xb8) // 00B8
#define WF_PLE_TOP_MACTX_LENGTH_LIMIT_ADDR                     (WF_PLE_TOP_BASE + 0xBC) // 00BC
#define WF_PLE_TOP_TXS_BUF_PAUSE_ADDR                          (WF_PLE_TOP_BASE + 0xc0) // 00C0
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_ADDR                       (WF_PLE_TOP_BASE + 0xd0) // 00D0
#define WF_PLE_TOP_FSM_IDLE_WD_EN_ADDR                         (WF_PLE_TOP_BASE + 0xd4) // 00D4
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_ADDR                     (WF_PLE_TOP_BASE + 0xd8) // 00D8
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_ADDR                       (WF_PLE_TOP_BASE + 0xdc) // 00DC
#define WF_PLE_TOP_STATION_PAUSE0_ADDR                         (WF_PLE_TOP_BASE + 0x100) // 0100
#define WF_PLE_TOP_DIS_STA_MAP0_ADDR                           (WF_PLE_TOP_BASE + 0x140) // 0140
#define WF_PLE_TOP_STATION_REDIR0_ADDR                         (WF_PLE_TOP_BASE + 0x180) // 0180
#define WF_PLE_TOP_TWT_STA_MAP0_ADDR                           (WF_PLE_TOP_BASE + 0x1C0) // 01C0
#define WF_PLE_TOP_TWT_TX_CTRL0_ADDR                           (WF_PLE_TOP_BASE + 0x200) // 0200
#define WF_PLE_TOP_BSS_DBDC_CTRL_ADDR                          (WF_PLE_TOP_BASE + 0x208) // 0208
#define WF_PLE_TOP_VOW_CTRL1_ADDR                              (WF_PLE_TOP_BASE + 0x20c) // 020C
#define WF_PLE_TOP_EN_UMAC_L1_DCM_ADDR                         (WF_PLE_TOP_BASE + 0x238) // 0238
#define WF_PLE_TOP_PCIE_POWER_CTRL_ADDR                        (WF_PLE_TOP_BASE + 0x23c) // 023C
#define WF_PLE_TOP_TIMEOUT_CTRL_ADDR                           (WF_PLE_TOP_BASE + 0x280) // 0280
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_ADDR                        (WF_PLE_TOP_BASE + 0x284) // 0284
#define WF_PLE_TOP_PLE_FUNC_CTRL_1_ADDR                        (WF_PLE_TOP_BASE + 0x288) // 0288
#define WF_PLE_TOP_PORT_SER_CTRL_ADDR                          (WF_PLE_TOP_BASE + 0x290) // 0290
#define WF_PLE_TOP_MACTX_SER_CTRL_ADDR                         (WF_PLE_TOP_BASE + 0x294) // 0294
#define WF_PLE_TOP_DRR_SER_CTRL_ADDR                           (WF_PLE_TOP_BASE + 0x298) // 0298
#define WF_PLE_TOP_INT_N9_STS_ADDR                             (WF_PLE_TOP_BASE + 0x300) // 0300
#define WF_PLE_TOP_INT_N9_ERR_STS_ADDR                         (WF_PLE_TOP_BASE + 0x304) // 0304
#define WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR                       (WF_PLE_TOP_BASE + 0x308) // 0308
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_ADDR                      (WF_PLE_TOP_BASE + 0x30c) // 030C
#define WF_PLE_TOP_C_GET_FID_0_ADDR                            (WF_PLE_TOP_BASE + 0x310) // 0310
#define WF_PLE_TOP_C_GET_FID_1_ADDR                            (WF_PLE_TOP_BASE + 0x314) // 0314
#define WF_PLE_TOP_TO_N9_INT_ADDR                              (WF_PLE_TOP_BASE + 0x318) // 0318
#define WF_PLE_TOP_C_EN_QUEUE_0_ADDR                           (WF_PLE_TOP_BASE + 0x320) // 0320
#define WF_PLE_TOP_C_EN_QUEUE_1_ADDR                           (WF_PLE_TOP_BASE + 0x324) // 0324
#define WF_PLE_TOP_C_EN_QUEUE_2_ADDR                           (WF_PLE_TOP_BASE + 0x328) // 0328
#define WF_PLE_TOP_C_DE_QUEUE_0_ADDR                           (WF_PLE_TOP_BASE + 0x330) // 0330
#define WF_PLE_TOP_C_DE_QUEUE_1_ADDR                           (WF_PLE_TOP_BASE + 0x334) // 0334
#define WF_PLE_TOP_C_DE_QUEUE_2_ADDR                           (WF_PLE_TOP_BASE + 0x338) // 0338
#define WF_PLE_TOP_C_DE_QUEUE_3_ADDR                           (WF_PLE_TOP_BASE + 0x33c) // 033C
#define WF_PLE_TOP_C_DE_QUEUE_4_ADDR                           (WF_PLE_TOP_BASE + 0x340) // 0340
#define WF_PLE_TOP_ALLOCATE_0_ADDR                             (WF_PLE_TOP_BASE + 0x350) // 0350
#define WF_PLE_TOP_ALLOCATE_1_ADDR                             (WF_PLE_TOP_BASE + 0x354) // 0354
#define WF_PLE_TOP_ALLOCATE_2_ADDR                             (WF_PLE_TOP_BASE + 0x358) // 0358
#define WF_PLE_TOP_QUEUE_EMPTY_ADDR                            (WF_PLE_TOP_BASE + 0x360) // 0360
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR                        (WF_PLE_TOP_BASE + 0x364) // 0364
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR                 (WF_PLE_TOP_BASE + 0x368) // 0368
#define WF_PLE_TOP_DRR_CHNL_EMPTY_ADDR                         (WF_PLE_TOP_BASE + 0x374) // 0374
#define WF_PLE_TOP_FREEPG_CNT_ADDR                             (WF_PLE_TOP_BASE + 0x380) // 0380
#define WF_PLE_TOP_FREEPG_HEAD_TAIL_ADDR                       (WF_PLE_TOP_BASE + 0x384) // 0384
#define WF_PLE_TOP_HIF_PG_INFO_ADDR                            (WF_PLE_TOP_BASE + 0x388) // 0388
#define WF_PLE_TOP_HIF_WMTXD_PG_INFO_ADDR                      (WF_PLE_TOP_BASE + 0x38c) // 038C
#define WF_PLE_TOP_HIF_TXCMD_PG_INFO_ADDR                      (WF_PLE_TOP_BASE + 0x390) // 0390
#define WF_PLE_TOP_CPU_PG_INFO_ADDR                            (WF_PLE_TOP_BASE + 0x394) // 0394
#define WF_PLE_TOP_PLE_LOG_0_ADDR                              (WF_PLE_TOP_BASE + 0x3a0) // 03A0
#define WF_PLE_TOP_PLE_LOG_1_ADDR                              (WF_PLE_TOP_BASE + 0x3a4) // 03A4
#define WF_PLE_TOP_PLE_LOG_2_ADDR                              (WF_PLE_TOP_BASE + 0x3a8) // 03A8
#define WF_PLE_TOP_PLE_LOG_3_ADDR                              (WF_PLE_TOP_BASE + 0x3ac) // 03AC
#define WF_PLE_TOP_WMMAC_PGCNT_0_ADDR                          (WF_PLE_TOP_BASE + 0x3b0) // 03B0
#define WF_PLE_TOP_WMMAC_PGCNT_1_ADDR                          (WF_PLE_TOP_BASE + 0x3b4) // 03B4
#define WF_PLE_TOP_WMMAC_PGCNT_2_ADDR                          (WF_PLE_TOP_BASE + 0x3b8) // 03B8
#define WF_PLE_TOP_WMMAC_PGCNT_3_ADDR                          (WF_PLE_TOP_BASE + 0x3bc) // 03BC
#define WF_PLE_TOP_WMMAC_PGCNT_4_ADDR                          (WF_PLE_TOP_BASE + 0x3c0) // 03C0
#define WF_PLE_TOP_WMMAC_PGCNT_5_ADDR                          (WF_PLE_TOP_BASE + 0x3c4) // 03C4
#define WF_PLE_TOP_WMMAC_PGCNT_6_ADDR                          (WF_PLE_TOP_BASE + 0x3c8) // 03C8
#define WF_PLE_TOP_WMMAC_PGCNT_7_ADDR                          (WF_PLE_TOP_BASE + 0x3cc) // 03CC
#define WF_PLE_TOP_RL_BUF_CTRL_0_ADDR                          (WF_PLE_TOP_BASE + 0x3d0) // 03D0
#define WF_PLE_TOP_RL_BUF_CTRL_1_ADDR                          (WF_PLE_TOP_BASE + 0x3d4) // 03D4
#define WF_PLE_TOP_FL_QUE_CTRL_0_ADDR                          (WF_PLE_TOP_BASE + 0x3e0) // 03E0
#define WF_PLE_TOP_FL_QUE_CTRL_1_ADDR                          (WF_PLE_TOP_BASE + 0x3e4) // 03E4
#define WF_PLE_TOP_FL_QUE_CTRL_2_ADDR                          (WF_PLE_TOP_BASE + 0x3e8) // 03E8
#define WF_PLE_TOP_FL_QUE_CTRL_3_ADDR                          (WF_PLE_TOP_BASE + 0x3ec) // 03EC
#define WF_PLE_TOP_PL_QUE_CTRL_0_ADDR                          (WF_PLE_TOP_BASE + 0x3f0) // 03F0
#define WF_PLE_TOP_HIF_ENQ_PKT_NUM_ADDR                        (WF_PLE_TOP_BASE + 0x400) // 0400
#define WF_PLE_TOP_CPU_ENQ_PKT_NUM_ADDR                        (WF_PLE_TOP_BASE + 0x404) // 0404
#define WF_PLE_TOP_RLS_MSDU_PKT_NUM_ADDR                       (WF_PLE_TOP_BASE + 0x408) // 0408
#define WF_PLE_TOP_HOST_REPORT_NUM_ADDR                        (WF_PLE_TOP_BASE + 0x40c) // 040C
#define WF_PLE_TOP_UMAC_DBG_CTRL_ADDR                          (WF_PLE_TOP_BASE + 0x410) // 0410
#define WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_ADDR                     (WF_PLE_TOP_BASE + 0x414) // 0414
#define WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_ADDR                     (WF_PLE_TOP_BASE + 0x418) // 0418
#define WF_PLE_TOP_FUNC_ACT_CNT_1_ADDR                         (WF_PLE_TOP_BASE + 0x424) // 0424
#define WF_PLE_TOP_SRAM_MBIST_BACKGROUND_ADDR                  (WF_PLE_TOP_BASE + 0x430) // 0430
#define WF_PLE_TOP_SRAM_MBIST_BSEL_ADDR                        (WF_PLE_TOP_BASE + 0x434) // 0434
#define WF_PLE_TOP_SRAM_MBIST_DONE_ADDR                        (WF_PLE_TOP_BASE + 0x438) // 0438
#define WF_PLE_TOP_SRAM_MBIST_FAIL_ADDR                        (WF_PLE_TOP_BASE + 0x43c) // 043C
#define WF_PLE_TOP_SRAM_AWT_HDEN_CTRL_ADDR                     (WF_PLE_TOP_BASE + 0x440) // 0440
#define WF_PLE_TOP_DRR_TABLE_WDATA0_ADDR                       (WF_PLE_TOP_BASE + 0x450) // 0450
#define WF_PLE_TOP_DRR_TABLE_RDATA0_ADDR                       (WF_PLE_TOP_BASE + 0x470) // 0470
#define WF_PLE_TOP_DRR_TABLE_CTRL_ADDR                         (WF_PLE_TOP_BASE + 0x490) // 0490
#define WF_PLE_TOP_DRR_HW_SRCHCMD_FULL_ADDR                    (WF_PLE_TOP_BASE + 0x4c0) // 04C0
#define WF_PLE_TOP_TWT_DBG_ADDR                                (WF_PLE_TOP_BASE + 0x4d0) // 04D0
#define WF_PLE_TOP_VOW_DBG_SEL_ADDR                            (WF_PLE_TOP_BASE + 0x4d4) // 04D4
#define WF_PLE_TOP_AIRTIME_DBG_INFO0_ADDR                      (WF_PLE_TOP_BASE + 0x4d8) // 04D8
#define WF_PLE_TOP_AIRTIME_DBG_INFO1_ADDR                      (WF_PLE_TOP_BASE + 0x4dc) // 04DC
#define WF_PLE_TOP_AC0_QUEUE_EMPTY0_ADDR                       (WF_PLE_TOP_BASE + 0x500) // 0500
#define WF_PLE_TOP_AC1_QUEUE_EMPTY0_ADDR                       (WF_PLE_TOP_BASE + 0x540) // 0540
#define WF_PLE_TOP_AC2_QUEUE_EMPTY0_ADDR                       (WF_PLE_TOP_BASE + 0x580) // 0580
#define WF_PLE_TOP_AC3_QUEUE_EMPTY0_ADDR                       (WF_PLE_TOP_BASE + 0x5C0) // 05C0
#define WF_PLE_TOP_PEEK_CR_00_ADDR                             (WF_PLE_TOP_BASE + 0x600) // 0600
#define WF_PLE_TOP_PEEK_CR_01_ADDR                             (WF_PLE_TOP_BASE + 0x604) // 0604
#define WF_PLE_TOP_PEEK_CR_02_ADDR                             (WF_PLE_TOP_BASE + 0x608) // 0608
#define WF_PLE_TOP_PEEK_CR_03_ADDR                             (WF_PLE_TOP_BASE + 0x60C) // 060C
#define WF_PLE_TOP_PEEK_CR_04_ADDR                             (WF_PLE_TOP_BASE + 0x610) // 0610
#define WF_PLE_TOP_PEEK_CR_05_ADDR                             (WF_PLE_TOP_BASE + 0x614) // 0614
#define WF_PLE_TOP_PEEK_CR_06_ADDR                             (WF_PLE_TOP_BASE + 0x618) // 0618
#define WF_PLE_TOP_PEEK_CR_07_ADDR                             (WF_PLE_TOP_BASE + 0x61c) // 061C
#define WF_PLE_TOP_PEEK_CR_08_ADDR                             (WF_PLE_TOP_BASE + 0x620) // 0620
#define WF_PLE_TOP_PEEK_CR_09_ADDR                             (WF_PLE_TOP_BASE + 0x624) // 0624
#define WF_PLE_TOP_PEEK_CR_10_ADDR                             (WF_PLE_TOP_BASE + 0x628) // 0628
#define WF_PLE_TOP_PEEK_CR_11_ADDR                             (WF_PLE_TOP_BASE + 0x62c) // 062C
#define WF_PLE_TOP_AMSDU_GC_ADDR                               (WF_PLE_TOP_BASE + 0x1000) // 1000
#define WF_PLE_TOP_AMSDU_TXD_COMP_MAP_0_ADDR                   (WF_PLE_TOP_BASE + 0x1004) // 1004
#define WF_PLE_TOP_AMSDU_TXD_COMP_MAP_1_ADDR                   (WF_PLE_TOP_BASE + 0x1008) // 1008
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_ADDR                  (WF_PLE_TOP_BASE + 0x100c) // 100C
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_ADDR                   (WF_PLE_TOP_BASE + 0x1010) // 1010
#define WF_PLE_TOP_AMSDU_PEEK_CR_00_ADDR                       (WF_PLE_TOP_BASE + 0x10d0) // 10D0
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_ADDR                       (WF_PLE_TOP_BASE + 0x10d4) // 10D4
#define WF_PLE_TOP_AMSDU_PACK_1_MSDU_CNT_ADDR                  (WF_PLE_TOP_BASE + 0x10e0) // 10E0
#define WF_PLE_TOP_AMSDU_PACK_2_MSDU_CNT_ADDR                  (WF_PLE_TOP_BASE + 0x10e4) // 10E4
#define WF_PLE_TOP_AMSDU_PACK_3_MSDU_CNT_ADDR                  (WF_PLE_TOP_BASE + 0x10e8) // 10E8
#define WF_PLE_TOP_AMSDU_PACK_4_MSDU_CNT_ADDR                  (WF_PLE_TOP_BASE + 0x10ec) // 10EC
#define WF_PLE_TOP_AMSDU_PACK_5_MSDU_CNT_ADDR                  (WF_PLE_TOP_BASE + 0x10f0) // 10F0
#define WF_PLE_TOP_AMSDU_PACK_6_MSDU_CNT_ADDR                  (WF_PLE_TOP_BASE + 0x10f4) // 10F4
#define WF_PLE_TOP_AMSDU_PACK_7_MSDU_CNT_ADDR                  (WF_PLE_TOP_BASE + 0x10f8) // 10F8
#define WF_PLE_TOP_AMSDU_PACK_8_MSDU_CNT_ADDR                  (WF_PLE_TOP_BASE + 0x10fc) // 10FC
#define WF_PLE_TOP_AMSDU_AC0_QUEUE_EMPTY0_ADDR                 (WF_PLE_TOP_BASE + 0x1100) // 1100
#define WF_PLE_TOP_AMSDU_AC1_QUEUE_EMPTY0_ADDR                 (WF_PLE_TOP_BASE + 0x1140) // 1140
#define WF_PLE_TOP_AMSDU_AC2_QUEUE_EMPTY0_ADDR                 (WF_PLE_TOP_BASE + 0x1180) // 1180
#define WF_PLE_TOP_AMSDU_AC3_QUEUE_EMPTY0_ADDR                 (WF_PLE_TOP_BASE + 0x11C0) // 11C0
#define WF_PLE_TOP_CFG_DBDC_CTRL0_ADDR                         (WF_PLE_TOP_BASE + 0x2008) // 2008
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_ADDR                 (WF_PLE_TOP_BASE + 0x2480) // 2480
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_1_ADDR                 (WF_PLE_TOP_BASE + 0x2484) // 2484
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_2_ADDR                 (WF_PLE_TOP_BASE + 0x2488) // 2488
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_3_ADDR                 (WF_PLE_TOP_BASE + 0x248c) // 248C
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_4_ADDR                 (WF_PLE_TOP_BASE + 0x2490) // 2490
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_ADDR                 (WF_PLE_TOP_BASE + 0x2494) // 2494
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_6_ADDR                 (WF_PLE_TOP_BASE + 0x2498) // 2498
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_ADDR                   (WF_PLE_TOP_BASE + 0x25c0) // 25C0
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_1_ADDR                   (WF_PLE_TOP_BASE + 0x25c4) // 25C4
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_2_ADDR                   (WF_PLE_TOP_BASE + 0x25c8) // 25C8
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_3_ADDR                   (WF_PLE_TOP_BASE + 0x25cc) // 25CC
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_ADDR                    (WF_PLE_TOP_BASE + 0x25e0) // 25E0
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_1_ADDR                    (WF_PLE_TOP_BASE + 0x25e4) // 25E4
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_2_ADDR                    (WF_PLE_TOP_BASE + 0x25e8) // 25E8
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_3_ADDR                    (WF_PLE_TOP_BASE + 0x25ec) // 25EC
#define WF_PLE_TOP_SYSRAM_MBIST_CTRL_ADDR                      (WF_PLE_TOP_BASE + 0x3004) // 3004
#define WF_PLE_TOP_SYSRAM_MBIST_DEBUG_ADDR                     (WF_PLE_TOP_BASE + 0x3008) // 3008
#define WF_PLE_TOP_SYSRAM_MBIST_MODE_ADDR                      (WF_PLE_TOP_BASE + 0x300C) // 300C
#define WF_PLE_TOP_SYSRAM_MBIST_HOLDB_ADDR                     (WF_PLE_TOP_BASE + 0x3010) // 3010
#define WF_PLE_TOP_SYSRAM_MBIST_DONE_ADDR                      (WF_PLE_TOP_BASE + 0x3014) // 3014
#define WF_PLE_TOP_SYSRAM_MBIST_FAIL_ADDR                      (WF_PLE_TOP_BASE + 0x3018) // 3018
#define WF_PLE_TOP_SYSRAM_MBIST_SLEEP_TEST_ADDR                (WF_PLE_TOP_BASE + 0x301C) // 301C
#define WF_PLE_TOP_SYSRAM_MBIST_SLEEP_INV_ADDR                 (WF_PLE_TOP_BASE + 0x3020) // 3020
#define WF_PLE_TOP_SYSRAM_MBIST_SLEEP_W_ADDR                   (WF_PLE_TOP_BASE + 0x3024) // 3024
#define WF_PLE_TOP_SYSRAM_MBIST_SLEEP_R_ADDR                   (WF_PLE_TOP_BASE + 0x3028) // 3028
#define WF_PLE_TOP_SYSRAM_AWT_HDEN_ADDR                        (WF_PLE_TOP_BASE + 0x302C) // 302C
#define WF_PLE_TOP_SYSRAM_DBG_SEL_ADDR                         (WF_PLE_TOP_BASE + 0x3030) // 3030
#define WF_PLE_TOP_SYSRAM_DELSEL_ADDR                          (WF_PLE_TOP_BASE + 0x3070) // 3070
#define WF_PLE_TOP_SYSRAM_DELSEL_1_ADDR                        (WF_PLE_TOP_BASE + 0x3074) // 3074
#define WF_PLE_TOP_SYSRAM_DELSEL_2_ADDR                        (WF_PLE_TOP_BASE + 0x3078) // 3078
#define WF_PLE_TOP_SYSRAM_DELSEL_3_ADDR                        (WF_PLE_TOP_BASE + 0x307C) // 307C
#define WF_PLE_TOP_SYSRAM_OUTRAN_ERR_FLAG_ADDR                 (WF_PLE_TOP_BASE + 0x3080) // 3080




/* =====================================================================================

  ---GC (0x820C0000 + 0x00)---

    ALL_RESET[0]                 - (RW) Resets PLE logic and register
    LOGIC_RESET[1]               - (RW) Resets PLE logic circuit
    INIT_DONE[2]                 - (RO) PLE control SRAM initialization indicator
    UMAC_CFG_LOGIC_RESET[3]      - (RW) Resets PF/MDP/SEC/UWTBL logic circuit
    RESERVED4[15..4]             - (RO) Reserved bits
    SRAM_MBIST_G1_RESET[16]      - (RW) Reset control of group 1 SRAM MBIST
    SRAM_MBIST_G2_RESET[17]      - (RW) Reset control of group 2 SRAM MBIST
    DIS_PLE_DYN_CKG[18]          - (RW) Disable control of wf_ple_top dynamic clock gating function
    RESERVED19[31..19]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_GC_DIS_PLE_DYN_CKG_ADDR                     WF_PLE_TOP_GC_ADDR
#define WF_PLE_TOP_GC_DIS_PLE_DYN_CKG_MASK                     0x00040000                // DIS_PLE_DYN_CKG[18]
#define WF_PLE_TOP_GC_DIS_PLE_DYN_CKG_SHFT                     18
#define WF_PLE_TOP_GC_SRAM_MBIST_G2_RESET_ADDR                 WF_PLE_TOP_GC_ADDR
#define WF_PLE_TOP_GC_SRAM_MBIST_G2_RESET_MASK                 0x00020000                // SRAM_MBIST_G2_RESET[17]
#define WF_PLE_TOP_GC_SRAM_MBIST_G2_RESET_SHFT                 17
#define WF_PLE_TOP_GC_SRAM_MBIST_G1_RESET_ADDR                 WF_PLE_TOP_GC_ADDR
#define WF_PLE_TOP_GC_SRAM_MBIST_G1_RESET_MASK                 0x00010000                // SRAM_MBIST_G1_RESET[16]
#define WF_PLE_TOP_GC_SRAM_MBIST_G1_RESET_SHFT                 16
#define WF_PLE_TOP_GC_UMAC_CFG_LOGIC_RESET_ADDR                WF_PLE_TOP_GC_ADDR
#define WF_PLE_TOP_GC_UMAC_CFG_LOGIC_RESET_MASK                0x00000008                // UMAC_CFG_LOGIC_RESET[3]
#define WF_PLE_TOP_GC_UMAC_CFG_LOGIC_RESET_SHFT                3
#define WF_PLE_TOP_GC_INIT_DONE_ADDR                           WF_PLE_TOP_GC_ADDR
#define WF_PLE_TOP_GC_INIT_DONE_MASK                           0x00000004                // INIT_DONE[2]
#define WF_PLE_TOP_GC_INIT_DONE_SHFT                           2
#define WF_PLE_TOP_GC_LOGIC_RESET_ADDR                         WF_PLE_TOP_GC_ADDR
#define WF_PLE_TOP_GC_LOGIC_RESET_MASK                         0x00000002                // LOGIC_RESET[1]
#define WF_PLE_TOP_GC_LOGIC_RESET_SHFT                         1
#define WF_PLE_TOP_GC_ALL_RESET_ADDR                           WF_PLE_TOP_GC_ADDR
#define WF_PLE_TOP_GC_ALL_RESET_MASK                           0x00000001                // ALL_RESET[0]
#define WF_PLE_TOP_GC_ALL_RESET_SHFT                           0

/* =====================================================================================

  ---PBUF_CTRL (0x820C0000 + 0x04)---

    TOTAL_PAGE_NUM[11..0]        - (RW) Total page number
                                     Set the total page before release PLE logic reset, and must not be changed after release logic reset.
    RESERVED12[16..12]           - (RO) Reserved bits
    PBUF_OFFSET[25..17]          - (RW) Packet buffer offset
                                     Set up the buffer offset before releasing PLE logic reset; it should not be changed after logic reset is released.
    RESERVED26[30..26]           - (RO) Reserved bits
    PAGE_SIZE_CFG[31]            - (RW) Configures page size
                                     Set up the page size before releasing PLE logic reset; it should not be changed after logic reset is released.

 =====================================================================================*/
#define WF_PLE_TOP_PBUF_CTRL_PAGE_SIZE_CFG_ADDR                WF_PLE_TOP_PBUF_CTRL_ADDR
#define WF_PLE_TOP_PBUF_CTRL_PAGE_SIZE_CFG_MASK                0x80000000                // PAGE_SIZE_CFG[31]
#define WF_PLE_TOP_PBUF_CTRL_PAGE_SIZE_CFG_SHFT                31
#define WF_PLE_TOP_PBUF_CTRL_PBUF_OFFSET_ADDR                  WF_PLE_TOP_PBUF_CTRL_ADDR
#define WF_PLE_TOP_PBUF_CTRL_PBUF_OFFSET_MASK                  0x03FE0000                // PBUF_OFFSET[25..17]
#define WF_PLE_TOP_PBUF_CTRL_PBUF_OFFSET_SHFT                  17
#define WF_PLE_TOP_PBUF_CTRL_TOTAL_PAGE_NUM_ADDR               WF_PLE_TOP_PBUF_CTRL_ADDR
#define WF_PLE_TOP_PBUF_CTRL_TOTAL_PAGE_NUM_MASK               0x00000FFF                // TOTAL_PAGE_NUM[11..0]
#define WF_PLE_TOP_PBUF_CTRL_TOTAL_PAGE_NUM_SHFT               0

/* =====================================================================================

  ---FREEPG_START_END (0x820C0000 + 0x08)---

    FREEPG_START[11..0]          - (RW) Start page for free page list
                                     Set start page before release PLE logic reset, and must not be changed after release logic reset.
    RESERVED12[15..12]           - (RO) Reserved bits
    FREEPG_END[27..16]           - (RW) End page for free page list
                                     Set end page before release PLE logic reset, and must not be changed after release logic reset.
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_FREEPG_START_END_FREEPG_END_ADDR            WF_PLE_TOP_FREEPG_START_END_ADDR
#define WF_PLE_TOP_FREEPG_START_END_FREEPG_END_MASK            0x0FFF0000                // FREEPG_END[27..16]
#define WF_PLE_TOP_FREEPG_START_END_FREEPG_END_SHFT            16
#define WF_PLE_TOP_FREEPG_START_END_FREEPG_START_ADDR          WF_PLE_TOP_FREEPG_START_END_ADDR
#define WF_PLE_TOP_FREEPG_START_END_FREEPG_START_MASK          0x00000FFF                // FREEPG_START[11..0]
#define WF_PLE_TOP_FREEPG_START_END_FREEPG_START_SHFT          0

/* =====================================================================================

  ---PG_HIF_GROUP (0x820C0000 + 0x0c)---

    HIF_MIN_QUOTA[11..0]         - (RW) Min. quota of HIF group
                                     Set the quota before release PLE logic reset ,and must not be changed after release logic reset.
    RESERVED12[15..12]           - (RO) Reserved bits
    HIF_MAX_QUOTA[27..16]        - (RW) Max. quota of HIF group
                                     Set up the quota before releasing PLE logic reset; it should not be changed after logic reset is released.
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_PG_HIF_GROUP_HIF_MAX_QUOTA_ADDR             WF_PLE_TOP_PG_HIF_GROUP_ADDR
#define WF_PLE_TOP_PG_HIF_GROUP_HIF_MAX_QUOTA_MASK             0x0FFF0000                // HIF_MAX_QUOTA[27..16]
#define WF_PLE_TOP_PG_HIF_GROUP_HIF_MAX_QUOTA_SHFT             16
#define WF_PLE_TOP_PG_HIF_GROUP_HIF_MIN_QUOTA_ADDR             WF_PLE_TOP_PG_HIF_GROUP_ADDR
#define WF_PLE_TOP_PG_HIF_GROUP_HIF_MIN_QUOTA_MASK             0x00000FFF                // HIF_MIN_QUOTA[11..0]
#define WF_PLE_TOP_PG_HIF_GROUP_HIF_MIN_QUOTA_SHFT             0

/* =====================================================================================

  ---PG_HIF_WMTXD_GROUP (0x820C0000 + 0x10)---

    HIF_WMTXD_MIN_QUOTA[11..0]   - (RW) Min. quota of HIF WMCPU TXD group
                                     Set the quota before release PLE logic reset ,and must not be changed after release logic reset.
    RESERVED12[15..12]           - (RO) Reserved bits
    HIF_WMTXD_MAX_QUOTA[27..16]  - (RW) Max. quota of HIF WMCPU TXD group
                                     Set up the quota before releasing PLE logic reset; it should not be changed after logic reset is released.
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_PG_HIF_WMTXD_GROUP_HIF_WMTXD_MAX_QUOTA_ADDR WF_PLE_TOP_PG_HIF_WMTXD_GROUP_ADDR
#define WF_PLE_TOP_PG_HIF_WMTXD_GROUP_HIF_WMTXD_MAX_QUOTA_MASK 0x0FFF0000                // HIF_WMTXD_MAX_QUOTA[27..16]
#define WF_PLE_TOP_PG_HIF_WMTXD_GROUP_HIF_WMTXD_MAX_QUOTA_SHFT 16
#define WF_PLE_TOP_PG_HIF_WMTXD_GROUP_HIF_WMTXD_MIN_QUOTA_ADDR WF_PLE_TOP_PG_HIF_WMTXD_GROUP_ADDR
#define WF_PLE_TOP_PG_HIF_WMTXD_GROUP_HIF_WMTXD_MIN_QUOTA_MASK 0x00000FFF                // HIF_WMTXD_MIN_QUOTA[11..0]
#define WF_PLE_TOP_PG_HIF_WMTXD_GROUP_HIF_WMTXD_MIN_QUOTA_SHFT 0

/* =====================================================================================

  ---PG_HIF_TXCMD_GROUP (0x820C0000 + 0x14)---

    HIF_TXCMD_MIN_QUOTA[11..0]   - (RW) Min. quota of HIF TXCMD group
                                     Set the quota before release PLE logic reset ,and must not be changed after release logic reset.
    RESERVED12[15..12]           - (RO) Reserved bits
    HIF_TXCMD_MAX_QUOTA[27..16]  - (RW) Max. quota of HIF TXCMD group
                                     Set up the quota before releasing PLE logic reset; it should not be changed after logic reset is released.
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_PG_HIF_TXCMD_GROUP_HIF_TXCMD_MAX_QUOTA_ADDR WF_PLE_TOP_PG_HIF_TXCMD_GROUP_ADDR
#define WF_PLE_TOP_PG_HIF_TXCMD_GROUP_HIF_TXCMD_MAX_QUOTA_MASK 0x0FFF0000                // HIF_TXCMD_MAX_QUOTA[27..16]
#define WF_PLE_TOP_PG_HIF_TXCMD_GROUP_HIF_TXCMD_MAX_QUOTA_SHFT 16
#define WF_PLE_TOP_PG_HIF_TXCMD_GROUP_HIF_TXCMD_MIN_QUOTA_ADDR WF_PLE_TOP_PG_HIF_TXCMD_GROUP_ADDR
#define WF_PLE_TOP_PG_HIF_TXCMD_GROUP_HIF_TXCMD_MIN_QUOTA_MASK 0x00000FFF                // HIF_TXCMD_MIN_QUOTA[11..0]
#define WF_PLE_TOP_PG_HIF_TXCMD_GROUP_HIF_TXCMD_MIN_QUOTA_SHFT 0

/* =====================================================================================

  ---PG_CPU_GROUP (0x820C0000 + 0x18)---

    CPU_MIN_QUOTA[11..0]         - (RW) Min. quota of CPU group
                                     Set up the quota before releasing PLE logic reset; it should not be changed after logic reset is released.
    RESERVED12[15..12]           - (RO) Reserved bits
    CPU_MAX_QUOTA[27..16]        - (RW) Max. quota of CPU group
                                     Set up the quota before releasing PLE logic reset; it should not be changed after logic reset is released.
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_PG_CPU_GROUP_CPU_MAX_QUOTA_ADDR             WF_PLE_TOP_PG_CPU_GROUP_ADDR
#define WF_PLE_TOP_PG_CPU_GROUP_CPU_MAX_QUOTA_MASK             0x0FFF0000                // CPU_MAX_QUOTA[27..16]
#define WF_PLE_TOP_PG_CPU_GROUP_CPU_MAX_QUOTA_SHFT             16
#define WF_PLE_TOP_PG_CPU_GROUP_CPU_MIN_QUOTA_ADDR             WF_PLE_TOP_PG_CPU_GROUP_ADDR
#define WF_PLE_TOP_PG_CPU_GROUP_CPU_MIN_QUOTA_MASK             0x00000FFF                // CPU_MIN_QUOTA[11..0]
#define WF_PLE_TOP_PG_CPU_GROUP_CPU_MIN_QUOTA_SHFT             0

/* =====================================================================================

  ---VOW_CONTROL (0x820C0000 + 0x1c)---

    RESERVED0[19..0]             - (RO) Reserved bits
    DBDC1_SEARCH_RULE[20]        - (RW) Priority for HW search if internal collision occurs
    DBDC0_SEARCH_RULE[21]        - (RW) Priority for HW search if internal collision occcurs
    RESERVED22[25..22]           - (RO) Reserved bits
    DRR_LOGIC_RESET[26]          - (RW) DRR logic reset control
    DIS_WTBL_PS_IGNORE[27]       - (RW) Disable control of the function that STA with WTBL PS ignore in TXQ busy
    ENABLE_TXOP_NO_CHANGE_BSS_GROUP[28] - (RW) HW cannot change BW group In TXOP burst.
    RESERVED29[31..29]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_VOW_CONTROL_ENABLE_TXOP_NO_CHANGE_BSS_GROUP_ADDR WF_PLE_TOP_VOW_CONTROL_ADDR
#define WF_PLE_TOP_VOW_CONTROL_ENABLE_TXOP_NO_CHANGE_BSS_GROUP_MASK 0x10000000                // ENABLE_TXOP_NO_CHANGE_BSS_GROUP[28]
#define WF_PLE_TOP_VOW_CONTROL_ENABLE_TXOP_NO_CHANGE_BSS_GROUP_SHFT 28
#define WF_PLE_TOP_VOW_CONTROL_DIS_WTBL_PS_IGNORE_ADDR         WF_PLE_TOP_VOW_CONTROL_ADDR
#define WF_PLE_TOP_VOW_CONTROL_DIS_WTBL_PS_IGNORE_MASK         0x08000000                // DIS_WTBL_PS_IGNORE[27]
#define WF_PLE_TOP_VOW_CONTROL_DIS_WTBL_PS_IGNORE_SHFT         27
#define WF_PLE_TOP_VOW_CONTROL_DRR_LOGIC_RESET_ADDR            WF_PLE_TOP_VOW_CONTROL_ADDR
#define WF_PLE_TOP_VOW_CONTROL_DRR_LOGIC_RESET_MASK            0x04000000                // DRR_LOGIC_RESET[26]
#define WF_PLE_TOP_VOW_CONTROL_DRR_LOGIC_RESET_SHFT            26
#define WF_PLE_TOP_VOW_CONTROL_DBDC0_SEARCH_RULE_ADDR          WF_PLE_TOP_VOW_CONTROL_ADDR
#define WF_PLE_TOP_VOW_CONTROL_DBDC0_SEARCH_RULE_MASK          0x00200000                // DBDC0_SEARCH_RULE[21]
#define WF_PLE_TOP_VOW_CONTROL_DBDC0_SEARCH_RULE_SHFT          21
#define WF_PLE_TOP_VOW_CONTROL_DBDC1_SEARCH_RULE_ADDR          WF_PLE_TOP_VOW_CONTROL_ADDR
#define WF_PLE_TOP_VOW_CONTROL_DBDC1_SEARCH_RULE_MASK          0x00100000                // DBDC1_SEARCH_RULE[20]
#define WF_PLE_TOP_VOW_CONTROL_DBDC1_SEARCH_RULE_SHFT          20

/* =====================================================================================

  ---SRAM_MBIST_DELSEL1 (0x820C0000 + 0x20)---

    SRAM1_MBIST_DELSEL[31..0]    - (RW) MBIST delsel setting of SRAM1

 =====================================================================================*/
#define WF_PLE_TOP_SRAM_MBIST_DELSEL1_SRAM1_MBIST_DELSEL_ADDR  WF_PLE_TOP_SRAM_MBIST_DELSEL1_ADDR
#define WF_PLE_TOP_SRAM_MBIST_DELSEL1_SRAM1_MBIST_DELSEL_MASK  0xFFFFFFFF                // SRAM1_MBIST_DELSEL[31..0]
#define WF_PLE_TOP_SRAM_MBIST_DELSEL1_SRAM1_MBIST_DELSEL_SHFT  0

/* =====================================================================================

  ---SRAM_MBIST_DELSEL2 (0x820C0000 + 0x24)---

    SRAM2_MBIST_DELSEL[31..0]    - (RW) MBIST delsel setting of SRAM2

 =====================================================================================*/
#define WF_PLE_TOP_SRAM_MBIST_DELSEL2_SRAM2_MBIST_DELSEL_ADDR  WF_PLE_TOP_SRAM_MBIST_DELSEL2_ADDR
#define WF_PLE_TOP_SRAM_MBIST_DELSEL2_SRAM2_MBIST_DELSEL_MASK  0xFFFFFFFF                // SRAM2_MBIST_DELSEL[31..0]
#define WF_PLE_TOP_SRAM_MBIST_DELSEL2_SRAM2_MBIST_DELSEL_SHFT  0

/* =====================================================================================

  ---SRAM_MBIST_DELSEL3 (0x820C0000 + 0x28)---

    SRAM3_MBIST_DELSEL[31..0]    - (RW) MBIST delsel setting of SRAM3

 =====================================================================================*/
#define WF_PLE_TOP_SRAM_MBIST_DELSEL3_SRAM3_MBIST_DELSEL_ADDR  WF_PLE_TOP_SRAM_MBIST_DELSEL3_ADDR
#define WF_PLE_TOP_SRAM_MBIST_DELSEL3_SRAM3_MBIST_DELSEL_MASK  0xFFFFFFFF                // SRAM3_MBIST_DELSEL[31..0]
#define WF_PLE_TOP_SRAM_MBIST_DELSEL3_SRAM3_MBIST_DELSEL_SHFT  0

/* =====================================================================================

  ---SRAM_MBIST_DELSEL4 (0x820C0000 + 0x2c)---

    SRAM4_MBIST_DELSEL[31..0]    - (RW) MBIST delsel setting of SRAM4

 =====================================================================================*/
#define WF_PLE_TOP_SRAM_MBIST_DELSEL4_SRAM4_MBIST_DELSEL_ADDR  WF_PLE_TOP_SRAM_MBIST_DELSEL4_ADDR
#define WF_PLE_TOP_SRAM_MBIST_DELSEL4_SRAM4_MBIST_DELSEL_MASK  0xFFFFFFFF                // SRAM4_MBIST_DELSEL[31..0]
#define WF_PLE_TOP_SRAM_MBIST_DELSEL4_SRAM4_MBIST_DELSEL_SHFT  0

/* =====================================================================================

  ---SRAM_MBIST_DELSEL5 (0x820C0000 + 0x30)---

    SRAM5_MBIST_DELSEL[31..0]    - (RW) MBIST delsel setting of SRAM5

 =====================================================================================*/
#define WF_PLE_TOP_SRAM_MBIST_DELSEL5_SRAM5_MBIST_DELSEL_ADDR  WF_PLE_TOP_SRAM_MBIST_DELSEL5_ADDR
#define WF_PLE_TOP_SRAM_MBIST_DELSEL5_SRAM5_MBIST_DELSEL_MASK  0xFFFFFFFF                // SRAM5_MBIST_DELSEL[31..0]
#define WF_PLE_TOP_SRAM_MBIST_DELSEL5_SRAM5_MBIST_DELSEL_SHFT  0

/* =====================================================================================

  ---SRAM_MBIST_DELSEL6 (0x820C0000 + 0x34)---

    SRAM6_MBIST_DELSEL[31..0]    - (RW) MBIST delsel setting of SRAM6

 =====================================================================================*/
#define WF_PLE_TOP_SRAM_MBIST_DELSEL6_SRAM6_MBIST_DELSEL_ADDR  WF_PLE_TOP_SRAM_MBIST_DELSEL6_ADDR
#define WF_PLE_TOP_SRAM_MBIST_DELSEL6_SRAM6_MBIST_DELSEL_MASK  0xFFFFFFFF                // SRAM6_MBIST_DELSEL[31..0]
#define WF_PLE_TOP_SRAM_MBIST_DELSEL6_SRAM6_MBIST_DELSEL_SHFT  0

/* =====================================================================================

  ---SRAM_MBIST_DELSEL7 (0x820C0000 + 0x38)---

    SRAM7_MBIST_DELSEL[31..0]    - (RW) MBIST delsel setting of SRAM7

 =====================================================================================*/
#define WF_PLE_TOP_SRAM_MBIST_DELSEL7_SRAM7_MBIST_DELSEL_ADDR  WF_PLE_TOP_SRAM_MBIST_DELSEL7_ADDR
#define WF_PLE_TOP_SRAM_MBIST_DELSEL7_SRAM7_MBIST_DELSEL_MASK  0xFFFFFFFF                // SRAM7_MBIST_DELSEL[31..0]
#define WF_PLE_TOP_SRAM_MBIST_DELSEL7_SRAM7_MBIST_DELSEL_SHFT  0

/* =====================================================================================

  ---SRAM_MBIST_DELSEL8 (0x820C0000 + 0x3c)---

    SRAM8_MBIST_DELSEL[31..0]    - (RW) MBIST delsel setting of SRAM8

 =====================================================================================*/
#define WF_PLE_TOP_SRAM_MBIST_DELSEL8_SRAM8_MBIST_DELSEL_ADDR  WF_PLE_TOP_SRAM_MBIST_DELSEL8_ADDR
#define WF_PLE_TOP_SRAM_MBIST_DELSEL8_SRAM8_MBIST_DELSEL_MASK  0xFFFFFFFF                // SRAM8_MBIST_DELSEL[31..0]
#define WF_PLE_TOP_SRAM_MBIST_DELSEL8_SRAM8_MBIST_DELSEL_SHFT  0

/* =====================================================================================

  ---SRAM_MBIST_DELSEL9 (0x820C0000 + 0x40)---

    SRAM9_MBIST_DELSEL[31..0]    - (RW) MBIST delsel setting of SRAM9

 =====================================================================================*/
#define WF_PLE_TOP_SRAM_MBIST_DELSEL9_SRAM9_MBIST_DELSEL_ADDR  WF_PLE_TOP_SRAM_MBIST_DELSEL9_ADDR
#define WF_PLE_TOP_SRAM_MBIST_DELSEL9_SRAM9_MBIST_DELSEL_MASK  0xFFFFFFFF                // SRAM9_MBIST_DELSEL[31..0]
#define WF_PLE_TOP_SRAM_MBIST_DELSEL9_SRAM9_MBIST_DELSEL_SHFT  0

/* =====================================================================================

  ---SRAM_MBIST_DELSEL10 (0x820C0000 + 0x44)---

    SRAM10_MBIST_DELSEL[31..0]   - (RW) MBIST delsel setting of SRAM10

 =====================================================================================*/
#define WF_PLE_TOP_SRAM_MBIST_DELSEL10_SRAM10_MBIST_DELSEL_ADDR WF_PLE_TOP_SRAM_MBIST_DELSEL10_ADDR
#define WF_PLE_TOP_SRAM_MBIST_DELSEL10_SRAM10_MBIST_DELSEL_MASK 0xFFFFFFFF                // SRAM10_MBIST_DELSEL[31..0]
#define WF_PLE_TOP_SRAM_MBIST_DELSEL10_SRAM10_MBIST_DELSEL_SHFT 0

/* =====================================================================================

  ---SRAM_MBIST_CTRL (0x820C0000 + 0x48)---

    G1_MBIST_MODE[0]             - (RW) Control register for mbist_mode of group 1 MBIST
    G2_MBIST_MODE[1]             - (RW) Control register for mbist_mode of group 2 MBIST
    RESERVED2[3..2]              - (RO) Reserved bits
    G1_MBIST_HOLDB[4]            - (RW) Control register for mbist_holdb of group 1 MBIST
    G2_MBIST_HOLDB[5]            - (RW) Control register for mbist_holdb of group 2 MBIST
    RESERVED6[7..6]              - (RO) Reserved bits
    G1_MBIST_DEBUG[8]            - (RW) Control register for mbist_debug of group 1 MBIST
    G2_MBIST_DEBUG[9]            - (RW) Control register for mbist_debug of group 2 MBIST
    G1_MBIST_USE_DEFAULT_DELSEL[10] - (RW) Control register for default DELSEL value of group 1 memory
    G2_MBIST_USE_DEFAULT_DELSEL[11] - (RW) Control register for default DELSEL value of group 2 memory
    MBIST_DIAG_SEL[16..12]       - (RW) Selection register for mbist_diag_scan_out
    RESERVED17[19..17]           - (RO) Reserved bits
    UMAC_MBIST_DIAG_SEL[20]      - (RW) Selection register for UMAC mbist_diag_scan_out (PLE or PSE)
    RESERVED21[23..21]           - (RO) Reserved bits
    G1_MBIST_SLEEP_TEST[24]      - (RW) Control register for sleep_test of group 1 MBIST
    G1_MBIST_SLEEP_INV[25]       - (RW) Control register for sleep_inv of group 1 MBIST
    G1_MBIST_SLEEP_W[26]         - (RW) Control register for sleep_w of group 1 MBIST
    G1_MBIST_SLEEP_R[27]         - (RW) Control register for sleep_r of group 1 MBIST
    G2_MBIST_SLEEP_TEST[28]      - (RW) Control register for sleep_test of group 2 MBIST
    G2_MBIST_SLEEP_INV[29]       - (RW) Control register for sleep_inv of group 2 MBIST
    G2_MBIST_SLEEP_W[30]         - (RW) Control register for sleep_w of group 2 MBIST
    G2_MBIST_SLEEP_R[31]         - (RW) Control register for sleep_r of group 2 MBIST

 =====================================================================================*/
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_SLEEP_R_ADDR       WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_SLEEP_R_MASK       0x80000000                // G2_MBIST_SLEEP_R[31]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_SLEEP_R_SHFT       31
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_SLEEP_W_ADDR       WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_SLEEP_W_MASK       0x40000000                // G2_MBIST_SLEEP_W[30]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_SLEEP_W_SHFT       30
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_SLEEP_INV_ADDR     WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_SLEEP_INV_MASK     0x20000000                // G2_MBIST_SLEEP_INV[29]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_SLEEP_INV_SHFT     29
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_SLEEP_TEST_ADDR    WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_SLEEP_TEST_MASK    0x10000000                // G2_MBIST_SLEEP_TEST[28]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_SLEEP_TEST_SHFT    28
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_SLEEP_R_ADDR       WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_SLEEP_R_MASK       0x08000000                // G1_MBIST_SLEEP_R[27]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_SLEEP_R_SHFT       27
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_SLEEP_W_ADDR       WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_SLEEP_W_MASK       0x04000000                // G1_MBIST_SLEEP_W[26]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_SLEEP_W_SHFT       26
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_SLEEP_INV_ADDR     WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_SLEEP_INV_MASK     0x02000000                // G1_MBIST_SLEEP_INV[25]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_SLEEP_INV_SHFT     25
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_SLEEP_TEST_ADDR    WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_SLEEP_TEST_MASK    0x01000000                // G1_MBIST_SLEEP_TEST[24]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_SLEEP_TEST_SHFT    24
#define WF_PLE_TOP_SRAM_MBIST_CTRL_UMAC_MBIST_DIAG_SEL_ADDR    WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_UMAC_MBIST_DIAG_SEL_MASK    0x00100000                // UMAC_MBIST_DIAG_SEL[20]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_UMAC_MBIST_DIAG_SEL_SHFT    20
#define WF_PLE_TOP_SRAM_MBIST_CTRL_MBIST_DIAG_SEL_ADDR         WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_MBIST_DIAG_SEL_MASK         0x0001F000                // MBIST_DIAG_SEL[16..12]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_MBIST_DIAG_SEL_SHFT         12
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_USE_DEFAULT_DELSEL_ADDR WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_USE_DEFAULT_DELSEL_MASK 0x00000800                // G2_MBIST_USE_DEFAULT_DELSEL[11]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_USE_DEFAULT_DELSEL_SHFT 11
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_USE_DEFAULT_DELSEL_ADDR WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_USE_DEFAULT_DELSEL_MASK 0x00000400                // G1_MBIST_USE_DEFAULT_DELSEL[10]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_USE_DEFAULT_DELSEL_SHFT 10
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_DEBUG_ADDR         WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_DEBUG_MASK         0x00000200                // G2_MBIST_DEBUG[9]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_DEBUG_SHFT         9
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_DEBUG_ADDR         WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_DEBUG_MASK         0x00000100                // G1_MBIST_DEBUG[8]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_DEBUG_SHFT         8
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_HOLDB_ADDR         WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_HOLDB_MASK         0x00000020                // G2_MBIST_HOLDB[5]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_HOLDB_SHFT         5
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_HOLDB_ADDR         WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_HOLDB_MASK         0x00000010                // G1_MBIST_HOLDB[4]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_HOLDB_SHFT         4
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_MODE_ADDR          WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_MODE_MASK          0x00000002                // G2_MBIST_MODE[1]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G2_MBIST_MODE_SHFT          1
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_MODE_ADDR          WF_PLE_TOP_SRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_MODE_MASK          0x00000001                // G1_MBIST_MODE[0]
#define WF_PLE_TOP_SRAM_MBIST_CTRL_G1_MBIST_MODE_SHFT          0

/* =====================================================================================

  ---INT_N9_EN_MASK (0x820C0000 + 0x80)---

    EN_CPU_Q0_NE[0]              - (RW) Enable control of interrupt for CPU queue 0 not empty
    EN_CPU_Q1_NE[1]              - (RW) Enable control of interrupt for CPU queue 1 not empty
    EN_CPU_Q2_NE[2]              - (RW) Enable control of interrupt for CPU queue 2 not empty
    EN_CPU_Q3_NE[3]              - (RW) Enable control of interrupt for CPU queue 3 not empty
    RESERVED4[15..4]             - (RO) Reserved bits
    EN_TOGGLE_INT[16]            - (RW) Enable control of interrupt for data toggle of N9 toggle register (0xf0)
    RESERVED17[17]               - (RO) Reserved bits
    EN_UMAC_SYSRAM_OUTRAN_ERROR_INT[18] - (RW) Enable control of interrupt for UMAC SYSRAM out range error
    RESERVED19[19]               - (RO) Reserved bits
    EN_AC_NONEMPTY_INT[20]       - (RW) Enable control of AC queue empty fail interrupt
    EN_AC_EMPTY_INT[21]          - (RW) Enable control of AC queue empty raise interrupt
    EN_AC_ENQ_LMAC_INT[22]       - (RW) Enable control of AC enqueue interrupt
    RESERVED23[23]               - (RO) Reserved bits
    EN_DBDC0_NONEMPTY_INT[24]    - (RW) Enable control of DBDC0 queue empty fail interrupt
    EN_DBDC0_EMPTY_INT[25]       - (RW) Enable control of DBDC0 queue empty raise interrupt
    EN_DBDC0_ENQ_LMAC_INT[26]    - (RW) Enable control of DBDC0 enqueue interrupt
    RESERVED27[27]               - (RO) Reserved bits
    EN_DBDC1_NONEMPTY_INT[28]    - (RW) Enable control of DBDC1 queue empty fail interrupt
    EN_DBDC1_EMPTY_INT[29]       - (RW) Enable control of DBDC1 queue empty raise interrupt
    EN_DBDC1_ENQ_LMAC_INT[30]    - (RW) Enable control of DBDC1 enqueue interrupt
    RESERVED31[31]               - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC1_ENQ_LMAC_INT_ADDR   WF_PLE_TOP_INT_N9_EN_MASK_ADDR
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC1_ENQ_LMAC_INT_MASK   0x40000000                // EN_DBDC1_ENQ_LMAC_INT[30]
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC1_ENQ_LMAC_INT_SHFT   30
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC1_EMPTY_INT_ADDR      WF_PLE_TOP_INT_N9_EN_MASK_ADDR
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC1_EMPTY_INT_MASK      0x20000000                // EN_DBDC1_EMPTY_INT[29]
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC1_EMPTY_INT_SHFT      29
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC1_NONEMPTY_INT_ADDR   WF_PLE_TOP_INT_N9_EN_MASK_ADDR
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC1_NONEMPTY_INT_MASK   0x10000000                // EN_DBDC1_NONEMPTY_INT[28]
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC1_NONEMPTY_INT_SHFT   28
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC0_ENQ_LMAC_INT_ADDR   WF_PLE_TOP_INT_N9_EN_MASK_ADDR
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC0_ENQ_LMAC_INT_MASK   0x04000000                // EN_DBDC0_ENQ_LMAC_INT[26]
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC0_ENQ_LMAC_INT_SHFT   26
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC0_EMPTY_INT_ADDR      WF_PLE_TOP_INT_N9_EN_MASK_ADDR
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC0_EMPTY_INT_MASK      0x02000000                // EN_DBDC0_EMPTY_INT[25]
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC0_EMPTY_INT_SHFT      25
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC0_NONEMPTY_INT_ADDR   WF_PLE_TOP_INT_N9_EN_MASK_ADDR
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC0_NONEMPTY_INT_MASK   0x01000000                // EN_DBDC0_NONEMPTY_INT[24]
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_DBDC0_NONEMPTY_INT_SHFT   24
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_AC_ENQ_LMAC_INT_ADDR      WF_PLE_TOP_INT_N9_EN_MASK_ADDR
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_AC_ENQ_LMAC_INT_MASK      0x00400000                // EN_AC_ENQ_LMAC_INT[22]
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_AC_ENQ_LMAC_INT_SHFT      22
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_AC_EMPTY_INT_ADDR         WF_PLE_TOP_INT_N9_EN_MASK_ADDR
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_AC_EMPTY_INT_MASK         0x00200000                // EN_AC_EMPTY_INT[21]
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_AC_EMPTY_INT_SHFT         21
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_AC_NONEMPTY_INT_ADDR      WF_PLE_TOP_INT_N9_EN_MASK_ADDR
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_AC_NONEMPTY_INT_MASK      0x00100000                // EN_AC_NONEMPTY_INT[20]
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_AC_NONEMPTY_INT_SHFT      20
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_UMAC_SYSRAM_OUTRAN_ERROR_INT_ADDR WF_PLE_TOP_INT_N9_EN_MASK_ADDR
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_UMAC_SYSRAM_OUTRAN_ERROR_INT_MASK 0x00040000                // EN_UMAC_SYSRAM_OUTRAN_ERROR_INT[18]
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_UMAC_SYSRAM_OUTRAN_ERROR_INT_SHFT 18
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_TOGGLE_INT_ADDR           WF_PLE_TOP_INT_N9_EN_MASK_ADDR
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_TOGGLE_INT_MASK           0x00010000                // EN_TOGGLE_INT[16]
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_TOGGLE_INT_SHFT           16
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_CPU_Q3_NE_ADDR            WF_PLE_TOP_INT_N9_EN_MASK_ADDR
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_CPU_Q3_NE_MASK            0x00000008                // EN_CPU_Q3_NE[3]
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_CPU_Q3_NE_SHFT            3
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_CPU_Q2_NE_ADDR            WF_PLE_TOP_INT_N9_EN_MASK_ADDR
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_CPU_Q2_NE_MASK            0x00000004                // EN_CPU_Q2_NE[2]
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_CPU_Q2_NE_SHFT            2
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_CPU_Q1_NE_ADDR            WF_PLE_TOP_INT_N9_EN_MASK_ADDR
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_CPU_Q1_NE_MASK            0x00000002                // EN_CPU_Q1_NE[1]
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_CPU_Q1_NE_SHFT            1
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_CPU_Q0_NE_ADDR            WF_PLE_TOP_INT_N9_EN_MASK_ADDR
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_CPU_Q0_NE_MASK            0x00000001                // EN_CPU_Q0_NE[0]
#define WF_PLE_TOP_INT_N9_EN_MASK_EN_CPU_Q0_NE_SHFT            0

/* =====================================================================================

  ---INT_N9_ERR_MASK (0x820C0000 + 0x84)---

    EN_Q_CMD_ERR_P0[0]           - (RW) Enables queue command error interrupt status of port 0
    EN_Q_CMD_ERR_P1[1]           - (RW) Enables queue command error interrupt status of port 1
    EN_Q_CMD_ERR_P2[2]           - (RW) Enables queue command error interrupt status of port 2
    EN_PAGE_UDF_P0[3]            - (RW) Enables page underflow interrupt status of port 0
    EN_PAGE_UDF_P1[4]            - (RW) Enables page underflow interrupt status of port 1
    EN_PAGE_UDF_P2[5]            - (RW) Enables page underflow interrupt status of port 2
    EN_DOUBLE_RLS_ERR[6]         - (RW) Enable double release error interrupt.
    EN_MDP_D_OPER_ERR[7]         - (RW) Enable MDP data operation error interrupt.
    EN_MDP_HANG_ERR[8]           - (RW) Enable MDP FSM hang error interrupt.
    RESERVED9[9]                 - (RO) Reserved bits
    EN_DATA_OPER_ERR_P0[10]      - (RW) Enables data operation error of port 0
    EN_DATA_OPER_ERR_P1[11]      - (RW) Enables data operation error of port 1
    EN_DATA_OPER_ERR_P2[12]      - (RW) Enables data operation error of port 2
    EN_FL_HANG_ERR[13]           - (RW) Enables frame link FSM hang error interrupt
    EN_PL_HANG_ERR[14]           - (RW) Enables page link FSM hang error interrupt
    EN_HIF_HANG_ERR[15]          - (RW) Enables HIF port FSM hang error interrupt
    EN_CPU_HANG_ERR[16]          - (RW) Enables CPU port FSM hang error interrupt
    EN_LMAC_HANG_ERR[17]         - (RW) Enables LMAC port FSM hang error interrupt
    EN_FREE_HEAD_TAIL_ERR[18]    - (RW) Enable free head/tail error interrupt.
    EN_QSTRUCT_ERR[19]           - (RW) Enable queue struct data error interrupt.
    EN_BN0_MACTX_HANG_ERR[20]    - (RW) Enable BN0 MACTX Ctrl FSM Hang error interrupt.
    EN_BN1_MACTX_HANG_ERR[21]    - (RW) Enable BN1 MACTX Ctrl FSM Hang error interrupt.
    EN_BN0_TXCMD_HANG_ERR[22]    - (RW) Enable BN0 TXCMD Ctrl FSM Hang error interrupt.
    EN_BN1_TXCMD_HANG_ERR[23]    - (RW) Enable BN1 TXCMD Ctrl FSM Hang error interrupt.
    EN_DRR_SRCH_DBDC0_ERR[24]    - (RW) Enable DRR DBDC0 sta search error interrupt.
    EN_DRR_SRCH_DBDC1_ERR[25]    - (RW) Enable DRR DBDC1 sta search error interrupt.
    EN_DRR_FL_ERR[26]            - (RW) Enable DRR forward link access error interrupt.
    EN_DRR_BL_ERR[27]            - (RW) Enable DRR backward link access error interrupt.
    EN_DRR_RL_ERR[28]            - (RW) Enable DRR relay link access error interrupt.
    EN_DRR_CHRG_STA_ERR[29]      - (RW) Enable DRR wlanid error when charge interrupt.
    EN_DRR_STA_WLANID_ERR[30]    - (RW) Enable DRR wlanid error when add/remove sta interrupt.
    EN_DRR_STA_WMMID_ERR[31]     - (RW) Enable DRR wmmid error when add/remove sta interrupt.

 =====================================================================================*/
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_STA_WMMID_ERR_ADDR   WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_STA_WMMID_ERR_MASK   0x80000000                // EN_DRR_STA_WMMID_ERR[31]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_STA_WMMID_ERR_SHFT   31
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_STA_WLANID_ERR_ADDR  WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_STA_WLANID_ERR_MASK  0x40000000                // EN_DRR_STA_WLANID_ERR[30]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_STA_WLANID_ERR_SHFT  30
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_CHRG_STA_ERR_ADDR    WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_CHRG_STA_ERR_MASK    0x20000000                // EN_DRR_CHRG_STA_ERR[29]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_CHRG_STA_ERR_SHFT    29
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_RL_ERR_ADDR          WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_RL_ERR_MASK          0x10000000                // EN_DRR_RL_ERR[28]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_RL_ERR_SHFT          28
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_BL_ERR_ADDR          WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_BL_ERR_MASK          0x08000000                // EN_DRR_BL_ERR[27]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_BL_ERR_SHFT          27
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_FL_ERR_ADDR          WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_FL_ERR_MASK          0x04000000                // EN_DRR_FL_ERR[26]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_FL_ERR_SHFT          26
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_SRCH_DBDC1_ERR_ADDR  WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_SRCH_DBDC1_ERR_MASK  0x02000000                // EN_DRR_SRCH_DBDC1_ERR[25]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_SRCH_DBDC1_ERR_SHFT  25
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_SRCH_DBDC0_ERR_ADDR  WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_SRCH_DBDC0_ERR_MASK  0x01000000                // EN_DRR_SRCH_DBDC0_ERR[24]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DRR_SRCH_DBDC0_ERR_SHFT  24
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_BN1_TXCMD_HANG_ERR_ADDR  WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_BN1_TXCMD_HANG_ERR_MASK  0x00800000                // EN_BN1_TXCMD_HANG_ERR[23]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_BN1_TXCMD_HANG_ERR_SHFT  23
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_BN0_TXCMD_HANG_ERR_ADDR  WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_BN0_TXCMD_HANG_ERR_MASK  0x00400000                // EN_BN0_TXCMD_HANG_ERR[22]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_BN0_TXCMD_HANG_ERR_SHFT  22
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_BN1_MACTX_HANG_ERR_ADDR  WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_BN1_MACTX_HANG_ERR_MASK  0x00200000                // EN_BN1_MACTX_HANG_ERR[21]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_BN1_MACTX_HANG_ERR_SHFT  21
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_BN0_MACTX_HANG_ERR_ADDR  WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_BN0_MACTX_HANG_ERR_MASK  0x00100000                // EN_BN0_MACTX_HANG_ERR[20]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_BN0_MACTX_HANG_ERR_SHFT  20
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_QSTRUCT_ERR_ADDR         WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_QSTRUCT_ERR_MASK         0x00080000                // EN_QSTRUCT_ERR[19]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_QSTRUCT_ERR_SHFT         19
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_FREE_HEAD_TAIL_ERR_ADDR  WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_FREE_HEAD_TAIL_ERR_MASK  0x00040000                // EN_FREE_HEAD_TAIL_ERR[18]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_FREE_HEAD_TAIL_ERR_SHFT  18
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_LMAC_HANG_ERR_ADDR       WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_LMAC_HANG_ERR_MASK       0x00020000                // EN_LMAC_HANG_ERR[17]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_LMAC_HANG_ERR_SHFT       17
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_CPU_HANG_ERR_ADDR        WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_CPU_HANG_ERR_MASK        0x00010000                // EN_CPU_HANG_ERR[16]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_CPU_HANG_ERR_SHFT        16
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_HIF_HANG_ERR_ADDR        WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_HIF_HANG_ERR_MASK        0x00008000                // EN_HIF_HANG_ERR[15]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_HIF_HANG_ERR_SHFT        15
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_PL_HANG_ERR_ADDR         WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_PL_HANG_ERR_MASK         0x00004000                // EN_PL_HANG_ERR[14]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_PL_HANG_ERR_SHFT         14
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_FL_HANG_ERR_ADDR         WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_FL_HANG_ERR_MASK         0x00002000                // EN_FL_HANG_ERR[13]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_FL_HANG_ERR_SHFT         13
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DATA_OPER_ERR_P2_ADDR    WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DATA_OPER_ERR_P2_MASK    0x00001000                // EN_DATA_OPER_ERR_P2[12]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DATA_OPER_ERR_P2_SHFT    12
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DATA_OPER_ERR_P1_ADDR    WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DATA_OPER_ERR_P1_MASK    0x00000800                // EN_DATA_OPER_ERR_P1[11]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DATA_OPER_ERR_P1_SHFT    11
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DATA_OPER_ERR_P0_ADDR    WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DATA_OPER_ERR_P0_MASK    0x00000400                // EN_DATA_OPER_ERR_P0[10]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DATA_OPER_ERR_P0_SHFT    10
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_MDP_HANG_ERR_ADDR        WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_MDP_HANG_ERR_MASK        0x00000100                // EN_MDP_HANG_ERR[8]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_MDP_HANG_ERR_SHFT        8
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_MDP_D_OPER_ERR_ADDR      WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_MDP_D_OPER_ERR_MASK      0x00000080                // EN_MDP_D_OPER_ERR[7]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_MDP_D_OPER_ERR_SHFT      7
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DOUBLE_RLS_ERR_ADDR      WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DOUBLE_RLS_ERR_MASK      0x00000040                // EN_DOUBLE_RLS_ERR[6]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_DOUBLE_RLS_ERR_SHFT      6
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_PAGE_UDF_P2_ADDR         WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_PAGE_UDF_P2_MASK         0x00000020                // EN_PAGE_UDF_P2[5]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_PAGE_UDF_P2_SHFT         5
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_PAGE_UDF_P1_ADDR         WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_PAGE_UDF_P1_MASK         0x00000010                // EN_PAGE_UDF_P1[4]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_PAGE_UDF_P1_SHFT         4
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_PAGE_UDF_P0_ADDR         WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_PAGE_UDF_P0_MASK         0x00000008                // EN_PAGE_UDF_P0[3]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_PAGE_UDF_P0_SHFT         3
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_Q_CMD_ERR_P2_ADDR        WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_Q_CMD_ERR_P2_MASK        0x00000004                // EN_Q_CMD_ERR_P2[2]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_Q_CMD_ERR_P2_SHFT        2
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_Q_CMD_ERR_P1_ADDR        WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_Q_CMD_ERR_P1_MASK        0x00000002                // EN_Q_CMD_ERR_P1[1]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_Q_CMD_ERR_P1_SHFT        1
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_Q_CMD_ERR_P0_ADDR        WF_PLE_TOP_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_Q_CMD_ERR_P0_MASK        0x00000001                // EN_Q_CMD_ERR_P0[0]
#define WF_PLE_TOP_INT_N9_ERR_MASK_EN_Q_CMD_ERR_P0_SHFT        0

/* =====================================================================================

  ---INT_N9_ERR_MASK_1 (0x820C0000 + 0x88)---

    EN_BN0_MDP_TDP_HANG_ERR[0]   - (RW) Enables Band0 MDP TDP FSM hang error interrupt
    EN_MDP_RDP_HANG_ERR[1]       - (RW) Enables MDP RDP FSM hang error interrupt
    EN_BN0_MDP_TIOC_HANG_ERR[2]  - (RW) Enables Band0 MDP TIOC FSM hang error interrupt
    EN_BN0_MDP_RIOC_HANG_ERR[3]  - (RW) Enables Band0 MDP RIOC FSM hang error interrupt
    EN_PF_HANG_ERR[4]            - (RW) Enables PF FSM hang error interrupt
    EN_SEC0_HANG_ERR[5]          - (RW) Enables SEC 0 FSM hang error interrupt
    EN_SEC1_HANG_ERR[6]          - (RW) Enables SEC 1 FSM hang error interrupt
    EN_BN1_MDP_TDP_HANG_ERR[7]   - (RW) Enables Band1 MDP TDP FSM hang error interrupt
    EN_BN1_MDP_TIOC_HANG_ERR[8]  - (RW) Enables Band1 MDP TIOC FSM hang error interrupt
    EN_BN1_MDP_RIOC_HANG_ERR[9]  - (RW) Enables Band1 MDP RIOC FSM hang error interrupt
    EN_MDP_RDP_WB_HANG_ERR[10]   - (RW) Enables MDP RDP Wait buffer FSM hang error interrupt
    EN_UWTBL_HANG_ERR[11]        - (RW) Enables UWTBL FSM hang error interrupt
    EN_BN0_PREDL_ARB_HANG_ERR[12] - (RW) Enables Band0 PREDL ARB FSM hang error interrupt
    EN_BN0_PREDL_TXCMD_HANG_ERR[13] - (RW) Enables Band0 PREDL TXCMD parser FSM hang error interrupt
    EN_BN1_PREDL_ARB_HANG_ERR[14] - (RW) Enables Band1 PREDL ARB FSM hang error interrupt
    EN_BN1_PREDL_TXCMD_HANG_ERR[15] - (RW) Enables Band1 PREDL TXCMD parser FSM hang error interrupt
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN1_PREDL_TXCMD_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN1_PREDL_TXCMD_HANG_ERR_MASK 0x00008000                // EN_BN1_PREDL_TXCMD_HANG_ERR[15]
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN1_PREDL_TXCMD_HANG_ERR_SHFT 15
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN1_PREDL_ARB_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN1_PREDL_ARB_HANG_ERR_MASK 0x00004000                // EN_BN1_PREDL_ARB_HANG_ERR[14]
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN1_PREDL_ARB_HANG_ERR_SHFT 14
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN0_PREDL_TXCMD_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN0_PREDL_TXCMD_HANG_ERR_MASK 0x00002000                // EN_BN0_PREDL_TXCMD_HANG_ERR[13]
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN0_PREDL_TXCMD_HANG_ERR_SHFT 13
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN0_PREDL_ARB_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN0_PREDL_ARB_HANG_ERR_MASK 0x00001000                // EN_BN0_PREDL_ARB_HANG_ERR[12]
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN0_PREDL_ARB_HANG_ERR_SHFT 12
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_UWTBL_HANG_ERR_ADDR    WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_UWTBL_HANG_ERR_MASK    0x00000800                // EN_UWTBL_HANG_ERR[11]
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_UWTBL_HANG_ERR_SHFT    11
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_MDP_RDP_WB_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_MDP_RDP_WB_HANG_ERR_MASK 0x00000400                // EN_MDP_RDP_WB_HANG_ERR[10]
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_MDP_RDP_WB_HANG_ERR_SHFT 10
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN1_MDP_RIOC_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN1_MDP_RIOC_HANG_ERR_MASK 0x00000200                // EN_BN1_MDP_RIOC_HANG_ERR[9]
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN1_MDP_RIOC_HANG_ERR_SHFT 9
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN1_MDP_TIOC_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN1_MDP_TIOC_HANG_ERR_MASK 0x00000100                // EN_BN1_MDP_TIOC_HANG_ERR[8]
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN1_MDP_TIOC_HANG_ERR_SHFT 8
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN1_MDP_TDP_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN1_MDP_TDP_HANG_ERR_MASK 0x00000080                // EN_BN1_MDP_TDP_HANG_ERR[7]
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN1_MDP_TDP_HANG_ERR_SHFT 7
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_SEC1_HANG_ERR_ADDR     WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_SEC1_HANG_ERR_MASK     0x00000040                // EN_SEC1_HANG_ERR[6]
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_SEC1_HANG_ERR_SHFT     6
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_SEC0_HANG_ERR_ADDR     WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_SEC0_HANG_ERR_MASK     0x00000020                // EN_SEC0_HANG_ERR[5]
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_SEC0_HANG_ERR_SHFT     5
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_PF_HANG_ERR_ADDR       WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_PF_HANG_ERR_MASK       0x00000010                // EN_PF_HANG_ERR[4]
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_PF_HANG_ERR_SHFT       4
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN0_MDP_RIOC_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN0_MDP_RIOC_HANG_ERR_MASK 0x00000008                // EN_BN0_MDP_RIOC_HANG_ERR[3]
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN0_MDP_RIOC_HANG_ERR_SHFT 3
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN0_MDP_TIOC_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN0_MDP_TIOC_HANG_ERR_MASK 0x00000004                // EN_BN0_MDP_TIOC_HANG_ERR[2]
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN0_MDP_TIOC_HANG_ERR_SHFT 2
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_MDP_RDP_HANG_ERR_ADDR  WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_MDP_RDP_HANG_ERR_MASK  0x00000002                // EN_MDP_RDP_HANG_ERR[1]
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_MDP_RDP_HANG_ERR_SHFT  1
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN0_MDP_TDP_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_MASK_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN0_MDP_TDP_HANG_ERR_MASK 0x00000001                // EN_BN0_MDP_TDP_HANG_ERR[0]
#define WF_PLE_TOP_INT_N9_ERR_MASK_1_EN_BN0_MDP_TDP_HANG_ERR_SHFT 0

/* =====================================================================================

  ---N9_BSS_PS_INT_MASK (0x820C0000 + 0x8c)---

    EN_BSSID0_NONEMPTY_INT[0]    - (RW) Enable control of BSSID0 queue empty fall
    EN_BSSID1_NONEMPTY_INT[1]    - (RW) Enable control of BSSID1 queue empty fall
    EN_BSSID2_NONEMPTY_INT[2]    - (RW) Enable control of BSSID2 queue empty fall
    EN_BSSID3_NONEMPTY_INT[3]    - (RW) Enable control of BSSID3 queue empty fall
    RESERVED4[7..4]              - (RO) Reserved bits
    EN_BSSID0_EMPTY_INT[8]       - (RW) Enable control of BSSID0 queue empty raise
    EN_BSSID1_EMPTY_INT[9]       - (RW) Enable control of BSSID1 queue empty raise
    EN_BSSID2_EMPTY_INT[10]      - (RW) Enable control of BSSID2 queue empty raise
    EN_BSSID3_EMPTY_INT[11]      - (RW) Enable control of BSSID3 queue empty raise
    RESERVED12[15..12]           - (RO) Reserved bits
    EN_BSSID0_ENQ_LMAC_INT[16]   - (RW) Enable control of BSSID0 enqueue interrupt
    EN_BSSID1_ENQ_LMAC_INT[17]   - (RW) Enable control of BSSID1 enqueue interrupt
    EN_BSSID2_ENQ_LMAC_INT[18]   - (RW) Enable control of BSSID2 enqueue interrupt
    EN_BSSID3_ENQ_LMAC_INT[19]   - (RW) Enable control of BSSID3 enqueue interrupt
    RESERVED20[31..20]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID3_ENQ_LMAC_INT_ADDR WF_PLE_TOP_N9_BSS_PS_INT_MASK_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID3_ENQ_LMAC_INT_MASK 0x00080000                // EN_BSSID3_ENQ_LMAC_INT[19]
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID3_ENQ_LMAC_INT_SHFT 19
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID2_ENQ_LMAC_INT_ADDR WF_PLE_TOP_N9_BSS_PS_INT_MASK_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID2_ENQ_LMAC_INT_MASK 0x00040000                // EN_BSSID2_ENQ_LMAC_INT[18]
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID2_ENQ_LMAC_INT_SHFT 18
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID1_ENQ_LMAC_INT_ADDR WF_PLE_TOP_N9_BSS_PS_INT_MASK_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID1_ENQ_LMAC_INT_MASK 0x00020000                // EN_BSSID1_ENQ_LMAC_INT[17]
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID1_ENQ_LMAC_INT_SHFT 17
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID0_ENQ_LMAC_INT_ADDR WF_PLE_TOP_N9_BSS_PS_INT_MASK_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID0_ENQ_LMAC_INT_MASK 0x00010000                // EN_BSSID0_ENQ_LMAC_INT[16]
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID0_ENQ_LMAC_INT_SHFT 16
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID3_EMPTY_INT_ADDR WF_PLE_TOP_N9_BSS_PS_INT_MASK_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID3_EMPTY_INT_MASK 0x00000800                // EN_BSSID3_EMPTY_INT[11]
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID3_EMPTY_INT_SHFT 11
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID2_EMPTY_INT_ADDR WF_PLE_TOP_N9_BSS_PS_INT_MASK_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID2_EMPTY_INT_MASK 0x00000400                // EN_BSSID2_EMPTY_INT[10]
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID2_EMPTY_INT_SHFT 10
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID1_EMPTY_INT_ADDR WF_PLE_TOP_N9_BSS_PS_INT_MASK_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID1_EMPTY_INT_MASK 0x00000200                // EN_BSSID1_EMPTY_INT[9]
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID1_EMPTY_INT_SHFT 9
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID0_EMPTY_INT_ADDR WF_PLE_TOP_N9_BSS_PS_INT_MASK_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID0_EMPTY_INT_MASK 0x00000100                // EN_BSSID0_EMPTY_INT[8]
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID0_EMPTY_INT_SHFT 8
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID3_NONEMPTY_INT_ADDR WF_PLE_TOP_N9_BSS_PS_INT_MASK_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID3_NONEMPTY_INT_MASK 0x00000008                // EN_BSSID3_NONEMPTY_INT[3]
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID3_NONEMPTY_INT_SHFT 3
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID2_NONEMPTY_INT_ADDR WF_PLE_TOP_N9_BSS_PS_INT_MASK_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID2_NONEMPTY_INT_MASK 0x00000004                // EN_BSSID2_NONEMPTY_INT[2]
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID2_NONEMPTY_INT_SHFT 2
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID1_NONEMPTY_INT_ADDR WF_PLE_TOP_N9_BSS_PS_INT_MASK_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID1_NONEMPTY_INT_MASK 0x00000002                // EN_BSSID1_NONEMPTY_INT[1]
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID1_NONEMPTY_INT_SHFT 1
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID0_NONEMPTY_INT_ADDR WF_PLE_TOP_N9_BSS_PS_INT_MASK_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID0_NONEMPTY_INT_MASK 0x00000001                // EN_BSSID0_NONEMPTY_INT[0]
#define WF_PLE_TOP_N9_BSS_PS_INT_MASK_EN_BSSID0_NONEMPTY_INT_SHFT 0

/* =====================================================================================

  ---HOST_REPORT0 (0x820C0000 + 0x90)---

    RESERVED0[0]                 - (RO) Reserved bits
    DIS_HOST_RPT[1]              - (RW) Disables host report function
    HOST_RPT_VER0_EN[2]          - (RW) Enable control for host report roll back to Version 2(MT7915 E1 used).
    HOST_RPT_TX_LATENCY[3]       - (RW) Enable host report TX latency
    WMCPU_MSDU_ID_NUM[5..4]      - (RW) Configuration of WMCPU MSDU ID usage.
    DIS_BN0_HIF_RPT_AGG[6]       - (RW) BN0 HIF Host report aggregation function
    RESERVED7[7]                 - (RO) Reserved bits
    HOST_RPT_PACK_TH[15..8]      - (RW) The buffer threshold for packing host report. The buffer size less then the MSDU numbers of a MPDU, would let MSDU_ID lose.
    HOST_RPT_QID[22..16]         - (RW) PSE Queue ID control for host report.
    HOST_RPT_PID[23]             - (RW) PSE Port ID control for host report.
    WMCPU_RPT_QID[30..24]        - (RW) PSE Queue ID control for WMCPU report.
    WMCPU_RPT_PID[31]            - (RW) PSE Port ID control for WMCPU report.

 =====================================================================================*/
#define WF_PLE_TOP_HOST_REPORT0_WMCPU_RPT_PID_ADDR             WF_PLE_TOP_HOST_REPORT0_ADDR
#define WF_PLE_TOP_HOST_REPORT0_WMCPU_RPT_PID_MASK             0x80000000                // WMCPU_RPT_PID[31]
#define WF_PLE_TOP_HOST_REPORT0_WMCPU_RPT_PID_SHFT             31
#define WF_PLE_TOP_HOST_REPORT0_WMCPU_RPT_QID_ADDR             WF_PLE_TOP_HOST_REPORT0_ADDR
#define WF_PLE_TOP_HOST_REPORT0_WMCPU_RPT_QID_MASK             0x7F000000                // WMCPU_RPT_QID[30..24]
#define WF_PLE_TOP_HOST_REPORT0_WMCPU_RPT_QID_SHFT             24
#define WF_PLE_TOP_HOST_REPORT0_HOST_RPT_PID_ADDR              WF_PLE_TOP_HOST_REPORT0_ADDR
#define WF_PLE_TOP_HOST_REPORT0_HOST_RPT_PID_MASK              0x00800000                // HOST_RPT_PID[23]
#define WF_PLE_TOP_HOST_REPORT0_HOST_RPT_PID_SHFT              23
#define WF_PLE_TOP_HOST_REPORT0_HOST_RPT_QID_ADDR              WF_PLE_TOP_HOST_REPORT0_ADDR
#define WF_PLE_TOP_HOST_REPORT0_HOST_RPT_QID_MASK              0x007F0000                // HOST_RPT_QID[22..16]
#define WF_PLE_TOP_HOST_REPORT0_HOST_RPT_QID_SHFT              16
#define WF_PLE_TOP_HOST_REPORT0_HOST_RPT_PACK_TH_ADDR          WF_PLE_TOP_HOST_REPORT0_ADDR
#define WF_PLE_TOP_HOST_REPORT0_HOST_RPT_PACK_TH_MASK          0x0000FF00                // HOST_RPT_PACK_TH[15..8]
#define WF_PLE_TOP_HOST_REPORT0_HOST_RPT_PACK_TH_SHFT          8
#define WF_PLE_TOP_HOST_REPORT0_DIS_BN0_HIF_RPT_AGG_ADDR       WF_PLE_TOP_HOST_REPORT0_ADDR
#define WF_PLE_TOP_HOST_REPORT0_DIS_BN0_HIF_RPT_AGG_MASK       0x00000040                // DIS_BN0_HIF_RPT_AGG[6]
#define WF_PLE_TOP_HOST_REPORT0_DIS_BN0_HIF_RPT_AGG_SHFT       6
#define WF_PLE_TOP_HOST_REPORT0_WMCPU_MSDU_ID_NUM_ADDR         WF_PLE_TOP_HOST_REPORT0_ADDR
#define WF_PLE_TOP_HOST_REPORT0_WMCPU_MSDU_ID_NUM_MASK         0x00000030                // WMCPU_MSDU_ID_NUM[5..4]
#define WF_PLE_TOP_HOST_REPORT0_WMCPU_MSDU_ID_NUM_SHFT         4
#define WF_PLE_TOP_HOST_REPORT0_HOST_RPT_TX_LATENCY_ADDR       WF_PLE_TOP_HOST_REPORT0_ADDR
#define WF_PLE_TOP_HOST_REPORT0_HOST_RPT_TX_LATENCY_MASK       0x00000008                // HOST_RPT_TX_LATENCY[3]
#define WF_PLE_TOP_HOST_REPORT0_HOST_RPT_TX_LATENCY_SHFT       3
#define WF_PLE_TOP_HOST_REPORT0_HOST_RPT_VER0_EN_ADDR          WF_PLE_TOP_HOST_REPORT0_ADDR
#define WF_PLE_TOP_HOST_REPORT0_HOST_RPT_VER0_EN_MASK          0x00000004                // HOST_RPT_VER0_EN[2]
#define WF_PLE_TOP_HOST_REPORT0_HOST_RPT_VER0_EN_SHFT          2
#define WF_PLE_TOP_HOST_REPORT0_DIS_HOST_RPT_ADDR              WF_PLE_TOP_HOST_REPORT0_ADDR
#define WF_PLE_TOP_HOST_REPORT0_DIS_HOST_RPT_MASK              0x00000002                // DIS_HOST_RPT[1]
#define WF_PLE_TOP_HOST_REPORT0_DIS_HOST_RPT_SHFT              1

/* =====================================================================================

  ---HOST_REPORT1 (0x820C0000 + 0x94)---

    RESERVED0[7..0]              - (RO) Reserved bits
    MD_RPT_QID[14..8]            - (RW) PSE Queue ID control for MD CPU host report.
    MD_RPT_PID[15]               - (RW) PSE Port ID control for MD CPU host report.
    HOST_RPT_PG_SIZE[19..16]     - (RW) Setting of host report used PSE page size.
    DIS_WMCPU_RPT_AGG[20]        - (RW) WMCPU Host report aggregation function
    DIS_MD_HIF_RPT_AGG[21]       - (RW) MD HIF Host report aggregation function
    DIS_BN1_HIF_RPT_AGG[22]      - (RW) BN1 HIF Host report aggregation function
    DIS_RLS4_RPT_AGG[23]         - (RW) RLS4 Host report aggregation function
    RLS4_RPT_QID[30..24]         - (RW) PSE Queue ID control for SW RLS4 host report.
    RLS4_RPT_PID[31]             - (RW) PSE Port ID control for SW RLS4 host report.

 =====================================================================================*/
#define WF_PLE_TOP_HOST_REPORT1_RLS4_RPT_PID_ADDR              WF_PLE_TOP_HOST_REPORT1_ADDR
#define WF_PLE_TOP_HOST_REPORT1_RLS4_RPT_PID_MASK              0x80000000                // RLS4_RPT_PID[31]
#define WF_PLE_TOP_HOST_REPORT1_RLS4_RPT_PID_SHFT              31
#define WF_PLE_TOP_HOST_REPORT1_RLS4_RPT_QID_ADDR              WF_PLE_TOP_HOST_REPORT1_ADDR
#define WF_PLE_TOP_HOST_REPORT1_RLS4_RPT_QID_MASK              0x7F000000                // RLS4_RPT_QID[30..24]
#define WF_PLE_TOP_HOST_REPORT1_RLS4_RPT_QID_SHFT              24
#define WF_PLE_TOP_HOST_REPORT1_DIS_RLS4_RPT_AGG_ADDR          WF_PLE_TOP_HOST_REPORT1_ADDR
#define WF_PLE_TOP_HOST_REPORT1_DIS_RLS4_RPT_AGG_MASK          0x00800000                // DIS_RLS4_RPT_AGG[23]
#define WF_PLE_TOP_HOST_REPORT1_DIS_RLS4_RPT_AGG_SHFT          23
#define WF_PLE_TOP_HOST_REPORT1_DIS_BN1_HIF_RPT_AGG_ADDR       WF_PLE_TOP_HOST_REPORT1_ADDR
#define WF_PLE_TOP_HOST_REPORT1_DIS_BN1_HIF_RPT_AGG_MASK       0x00400000                // DIS_BN1_HIF_RPT_AGG[22]
#define WF_PLE_TOP_HOST_REPORT1_DIS_BN1_HIF_RPT_AGG_SHFT       22
#define WF_PLE_TOP_HOST_REPORT1_DIS_MD_HIF_RPT_AGG_ADDR        WF_PLE_TOP_HOST_REPORT1_ADDR
#define WF_PLE_TOP_HOST_REPORT1_DIS_MD_HIF_RPT_AGG_MASK        0x00200000                // DIS_MD_HIF_RPT_AGG[21]
#define WF_PLE_TOP_HOST_REPORT1_DIS_MD_HIF_RPT_AGG_SHFT        21
#define WF_PLE_TOP_HOST_REPORT1_DIS_WMCPU_RPT_AGG_ADDR         WF_PLE_TOP_HOST_REPORT1_ADDR
#define WF_PLE_TOP_HOST_REPORT1_DIS_WMCPU_RPT_AGG_MASK         0x00100000                // DIS_WMCPU_RPT_AGG[20]
#define WF_PLE_TOP_HOST_REPORT1_DIS_WMCPU_RPT_AGG_SHFT         20
#define WF_PLE_TOP_HOST_REPORT1_HOST_RPT_PG_SIZE_ADDR          WF_PLE_TOP_HOST_REPORT1_ADDR
#define WF_PLE_TOP_HOST_REPORT1_HOST_RPT_PG_SIZE_MASK          0x000F0000                // HOST_RPT_PG_SIZE[19..16]
#define WF_PLE_TOP_HOST_REPORT1_HOST_RPT_PG_SIZE_SHFT          16
#define WF_PLE_TOP_HOST_REPORT1_MD_RPT_PID_ADDR                WF_PLE_TOP_HOST_REPORT1_ADDR
#define WF_PLE_TOP_HOST_REPORT1_MD_RPT_PID_MASK                0x00008000                // MD_RPT_PID[15]
#define WF_PLE_TOP_HOST_REPORT1_MD_RPT_PID_SHFT                15
#define WF_PLE_TOP_HOST_REPORT1_MD_RPT_QID_ADDR                WF_PLE_TOP_HOST_REPORT1_ADDR
#define WF_PLE_TOP_HOST_REPORT1_MD_RPT_QID_MASK                0x00007F00                // MD_RPT_QID[14..8]
#define WF_PLE_TOP_HOST_REPORT1_MD_RPT_QID_SHFT                8

/* =====================================================================================

  ---HOST_REPORT2 (0x820C0000 + 0x98)---

    BN1_HOST_RPT_QID[6..0]       - (RW) PSE Queue ID control for BN1 Host report.
    BN1_HOST_RPT_PID[7]          - (RW) PSE Port ID control for BN1 Host report.
    BN1_MD_RPT_QID[14..8]        - (RW) PSE Queue ID control for BN1 MD CPU host report.
    BN1_MD_RPT_PID[15]           - (RW) PSE Port ID control for BN1 MD CPU host report.
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_HOST_REPORT2_BN1_MD_RPT_PID_ADDR            WF_PLE_TOP_HOST_REPORT2_ADDR
#define WF_PLE_TOP_HOST_REPORT2_BN1_MD_RPT_PID_MASK            0x00008000                // BN1_MD_RPT_PID[15]
#define WF_PLE_TOP_HOST_REPORT2_BN1_MD_RPT_PID_SHFT            15
#define WF_PLE_TOP_HOST_REPORT2_BN1_MD_RPT_QID_ADDR            WF_PLE_TOP_HOST_REPORT2_ADDR
#define WF_PLE_TOP_HOST_REPORT2_BN1_MD_RPT_QID_MASK            0x00007F00                // BN1_MD_RPT_QID[14..8]
#define WF_PLE_TOP_HOST_REPORT2_BN1_MD_RPT_QID_SHFT            8
#define WF_PLE_TOP_HOST_REPORT2_BN1_HOST_RPT_PID_ADDR          WF_PLE_TOP_HOST_REPORT2_ADDR
#define WF_PLE_TOP_HOST_REPORT2_BN1_HOST_RPT_PID_MASK          0x00000080                // BN1_HOST_RPT_PID[7]
#define WF_PLE_TOP_HOST_REPORT2_BN1_HOST_RPT_PID_SHFT          7
#define WF_PLE_TOP_HOST_REPORT2_BN1_HOST_RPT_QID_ADDR          WF_PLE_TOP_HOST_REPORT2_ADDR
#define WF_PLE_TOP_HOST_REPORT2_BN1_HOST_RPT_QID_MASK          0x0000007F                // BN1_HOST_RPT_QID[6..0]
#define WF_PLE_TOP_HOST_REPORT2_BN1_HOST_RPT_QID_SHFT          0

/* =====================================================================================

  ---RELEASE_CTRL_0 (0x820C0000 + 0x9c)---

    NOR_RLS_QID[6..0]            - (RW) Normal TX packet release DST QID
    RESERVED7[7]                 - (RO) Reserved bits
    NOR_RLS_PID[9..8]            - (RW) Normal TX packet release DST PID
    RESERVED10[15..10]           - (RO) Reserved bits
    DROP_RLS_QID[22..16]         - (RW) Drop packet release DST QID
    RESERVED23[23]               - (RO) Reserved bits
    DROP_RLS_PID[25..24]         - (RW) Drop packet release DST PID
    RESERVED26[31..26]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_RELEASE_CTRL_0_DROP_RLS_PID_ADDR            WF_PLE_TOP_RELEASE_CTRL_0_ADDR
#define WF_PLE_TOP_RELEASE_CTRL_0_DROP_RLS_PID_MASK            0x03000000                // DROP_RLS_PID[25..24]
#define WF_PLE_TOP_RELEASE_CTRL_0_DROP_RLS_PID_SHFT            24
#define WF_PLE_TOP_RELEASE_CTRL_0_DROP_RLS_QID_ADDR            WF_PLE_TOP_RELEASE_CTRL_0_ADDR
#define WF_PLE_TOP_RELEASE_CTRL_0_DROP_RLS_QID_MASK            0x007F0000                // DROP_RLS_QID[22..16]
#define WF_PLE_TOP_RELEASE_CTRL_0_DROP_RLS_QID_SHFT            16
#define WF_PLE_TOP_RELEASE_CTRL_0_NOR_RLS_PID_ADDR             WF_PLE_TOP_RELEASE_CTRL_0_ADDR
#define WF_PLE_TOP_RELEASE_CTRL_0_NOR_RLS_PID_MASK             0x00000300                // NOR_RLS_PID[9..8]
#define WF_PLE_TOP_RELEASE_CTRL_0_NOR_RLS_PID_SHFT             8
#define WF_PLE_TOP_RELEASE_CTRL_0_NOR_RLS_QID_ADDR             WF_PLE_TOP_RELEASE_CTRL_0_ADDR
#define WF_PLE_TOP_RELEASE_CTRL_0_NOR_RLS_QID_MASK             0x0000007F                // NOR_RLS_QID[6..0]
#define WF_PLE_TOP_RELEASE_CTRL_0_NOR_RLS_QID_SHFT             0

/* =====================================================================================

  ---RELEASE_CTRL_1 (0x820C0000 + 0xA0)---

    BCN0_RLS_QID[6..0]           - (RW) Beacon 0 packet release DST QID
    RESERVED7[7]                 - (RO) Reserved bits
    BCN0_RLS_PID[9..8]           - (RW) Beacon 0 packet release DST PID
    RESERVED10[15..10]           - (RO) Reserved bits
    BCN1_RLS_QID[22..16]         - (RW) Beacon 1 packet release DST QID
    RESERVED23[23]               - (RO) Reserved bits
    BCN1_RLS_PID[25..24]         - (RW) Beacon 1 packet release DST PID
    RESERVED26[31..26]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_RELEASE_CTRL_1_BCN1_RLS_PID_ADDR            WF_PLE_TOP_RELEASE_CTRL_1_ADDR
#define WF_PLE_TOP_RELEASE_CTRL_1_BCN1_RLS_PID_MASK            0x03000000                // BCN1_RLS_PID[25..24]
#define WF_PLE_TOP_RELEASE_CTRL_1_BCN1_RLS_PID_SHFT            24
#define WF_PLE_TOP_RELEASE_CTRL_1_BCN1_RLS_QID_ADDR            WF_PLE_TOP_RELEASE_CTRL_1_ADDR
#define WF_PLE_TOP_RELEASE_CTRL_1_BCN1_RLS_QID_MASK            0x007F0000                // BCN1_RLS_QID[22..16]
#define WF_PLE_TOP_RELEASE_CTRL_1_BCN1_RLS_QID_SHFT            16
#define WF_PLE_TOP_RELEASE_CTRL_1_BCN0_RLS_PID_ADDR            WF_PLE_TOP_RELEASE_CTRL_1_ADDR
#define WF_PLE_TOP_RELEASE_CTRL_1_BCN0_RLS_PID_MASK            0x00000300                // BCN0_RLS_PID[9..8]
#define WF_PLE_TOP_RELEASE_CTRL_1_BCN0_RLS_PID_SHFT            8
#define WF_PLE_TOP_RELEASE_CTRL_1_BCN0_RLS_QID_ADDR            WF_PLE_TOP_RELEASE_CTRL_1_ADDR
#define WF_PLE_TOP_RELEASE_CTRL_1_BCN0_RLS_QID_MASK            0x0000007F                // BCN0_RLS_QID[6..0]
#define WF_PLE_TOP_RELEASE_CTRL_1_BCN0_RLS_QID_SHFT            0

/* =====================================================================================

  ---RELEASE_CTRL_3 (0x820C0000 + 0xa8)---

    RLS_FREE_DONE_PG_SIZE[3..0]  - (RW) Page size configuration of Free done event(host report).
    RESERVED4[31..4]             - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_RELEASE_CTRL_3_RLS_FREE_DONE_PG_SIZE_ADDR   WF_PLE_TOP_RELEASE_CTRL_3_ADDR
#define WF_PLE_TOP_RELEASE_CTRL_3_RLS_FREE_DONE_PG_SIZE_MASK   0x0000000F                // RLS_FREE_DONE_PG_SIZE[3..0]
#define WF_PLE_TOP_RELEASE_CTRL_3_RLS_FREE_DONE_PG_SIZE_SHFT   0

/* =====================================================================================

  ---BLK_MODE_RATE_LMT (0x820C0000 + 0xac)---

    BN0_MACTX_BLK_RATE_LMT[15..0] - (RW) TX Rate limitaion of CutThrough data block mode. The rate less then the limitation would turn on block mode.
    BN1_MACTX_BLK_RATE_LMT[31..16] - (RW) TX Rate limitaion of CutThrough data block mode. The rate less then the limitation would turn on block mode.

 =====================================================================================*/
#define WF_PLE_TOP_BLK_MODE_RATE_LMT_BN1_MACTX_BLK_RATE_LMT_ADDR WF_PLE_TOP_BLK_MODE_RATE_LMT_ADDR
#define WF_PLE_TOP_BLK_MODE_RATE_LMT_BN1_MACTX_BLK_RATE_LMT_MASK 0xFFFF0000                // BN1_MACTX_BLK_RATE_LMT[31..16]
#define WF_PLE_TOP_BLK_MODE_RATE_LMT_BN1_MACTX_BLK_RATE_LMT_SHFT 16
#define WF_PLE_TOP_BLK_MODE_RATE_LMT_BN0_MACTX_BLK_RATE_LMT_ADDR WF_PLE_TOP_BLK_MODE_RATE_LMT_ADDR
#define WF_PLE_TOP_BLK_MODE_RATE_LMT_BN0_MACTX_BLK_RATE_LMT_MASK 0x0000FFFF                // BN0_MACTX_BLK_RATE_LMT[15..0]
#define WF_PLE_TOP_BLK_MODE_RATE_LMT_BN0_MACTX_BLK_RATE_LMT_SHFT 0

/* =====================================================================================

  ---PLE_MODULE_CKG_DIS (0x820C0000 + 0xb0)---

    DIS_FL_DYN_CKG[0]            - (RW) Disable control of PLE frame link module dynamic clock gating function
    DIS_PL_DYN_CKG[1]            - (RW) Disable control of PLE page link module dynamic clock gating function
    DIS_CPU_PORT_DYN_CKG[2]      - (RW) Disable control of PLE CPU port module dynamic clock gating function
    DIS_HIF_PORT_DYN_CKG[3]      - (RW) Disable control of PLE HIF port module dynamic clock gating function
    DIS_WF_PORT_DYN_CKG[4]       - (RW) Disable control of PLE LMAC module dynamic clock gating function
    DIS_RLS_DYN_CKG[5]           - (RW) Disable control of PLE release module dynamic clock gating function
    DIS_RL_DYN_CKG[6]            - (RW) Disable control of PLE relay information module dynamic clock gating function
    DIS_MACTX_DYN_CKG[7]         - (RW) Disable control of PLE MACTX module dynamic clock gating function
    DIS_PSEPORT_DYN_CKG[8]       - (RW) Disable control of PLE PSE port module dynamic clock gating function
    DIS_CSR_DYN_CKG[9]           - (RW) Disable control of PLE CR module dynamic clock gating function
    DIS_CPU_WRAP_DYN_CKG[10]     - (RW) Disable control of PLE CPU_WRAP module dynamic clock gating function
    DIS_DBG_DYN_CKG[11]          - (RW) Disable control of PLE debug module dynamic clock gating function
    DIS_AMSDU_PORT_DYN_CKG[12]   - (RW) Disable control of PLE AMSDU port module dynamic clock gating function
    RESERVED13[15..13]           - (RO) Reserved bits
    DIS_UWTBL_DYN_CKG[16]        - (RW) Disable control of UWTBL module dynamic clock gating function
    DIS_MDP_DYN_CKG[17]          - (RW) Disable control of MDP module dynamic clock gating function
    DIS_SEC_DYN_CKG[18]          - (RW) Disable control of SEC module dynamic clock gating function
    DIS_PF_DYN_CKG[19]           - (RW) Disable control of PF module dynamic clock gating function
    DIS_MUCOP_DYN_CKG[20]        - (RW) Disable control of MUCOP module dynamic clock gating function
    RESERVED21[31..21]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_MUCOP_DYN_CKG_ADDR   WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_MUCOP_DYN_CKG_MASK   0x00100000                // DIS_MUCOP_DYN_CKG[20]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_MUCOP_DYN_CKG_SHFT   20
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_PF_DYN_CKG_ADDR      WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_PF_DYN_CKG_MASK      0x00080000                // DIS_PF_DYN_CKG[19]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_PF_DYN_CKG_SHFT      19
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_SEC_DYN_CKG_ADDR     WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_SEC_DYN_CKG_MASK     0x00040000                // DIS_SEC_DYN_CKG[18]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_SEC_DYN_CKG_SHFT     18
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_MDP_DYN_CKG_ADDR     WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_MDP_DYN_CKG_MASK     0x00020000                // DIS_MDP_DYN_CKG[17]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_MDP_DYN_CKG_SHFT     17
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_UWTBL_DYN_CKG_ADDR   WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_UWTBL_DYN_CKG_MASK   0x00010000                // DIS_UWTBL_DYN_CKG[16]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_UWTBL_DYN_CKG_SHFT   16
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_AMSDU_PORT_DYN_CKG_ADDR WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_AMSDU_PORT_DYN_CKG_MASK 0x00001000                // DIS_AMSDU_PORT_DYN_CKG[12]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_AMSDU_PORT_DYN_CKG_SHFT 12
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_DBG_DYN_CKG_ADDR     WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_DBG_DYN_CKG_MASK     0x00000800                // DIS_DBG_DYN_CKG[11]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_DBG_DYN_CKG_SHFT     11
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_CPU_WRAP_DYN_CKG_ADDR WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_CPU_WRAP_DYN_CKG_MASK 0x00000400                // DIS_CPU_WRAP_DYN_CKG[10]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_CPU_WRAP_DYN_CKG_SHFT 10
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_CSR_DYN_CKG_ADDR     WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_CSR_DYN_CKG_MASK     0x00000200                // DIS_CSR_DYN_CKG[9]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_CSR_DYN_CKG_SHFT     9
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_PSEPORT_DYN_CKG_ADDR WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_PSEPORT_DYN_CKG_MASK 0x00000100                // DIS_PSEPORT_DYN_CKG[8]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_PSEPORT_DYN_CKG_SHFT 8
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_MACTX_DYN_CKG_ADDR   WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_MACTX_DYN_CKG_MASK   0x00000080                // DIS_MACTX_DYN_CKG[7]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_MACTX_DYN_CKG_SHFT   7
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_RL_DYN_CKG_ADDR      WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_RL_DYN_CKG_MASK      0x00000040                // DIS_RL_DYN_CKG[6]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_RL_DYN_CKG_SHFT      6
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_RLS_DYN_CKG_ADDR     WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_RLS_DYN_CKG_MASK     0x00000020                // DIS_RLS_DYN_CKG[5]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_RLS_DYN_CKG_SHFT     5
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_WF_PORT_DYN_CKG_ADDR WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_WF_PORT_DYN_CKG_MASK 0x00000010                // DIS_WF_PORT_DYN_CKG[4]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_WF_PORT_DYN_CKG_SHFT 4
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_HIF_PORT_DYN_CKG_ADDR WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_HIF_PORT_DYN_CKG_MASK 0x00000008                // DIS_HIF_PORT_DYN_CKG[3]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_HIF_PORT_DYN_CKG_SHFT 3
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_CPU_PORT_DYN_CKG_ADDR WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_CPU_PORT_DYN_CKG_MASK 0x00000004                // DIS_CPU_PORT_DYN_CKG[2]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_CPU_PORT_DYN_CKG_SHFT 2
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_PL_DYN_CKG_ADDR      WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_PL_DYN_CKG_MASK      0x00000002                // DIS_PL_DYN_CKG[1]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_PL_DYN_CKG_SHFT      1
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_FL_DYN_CKG_ADDR      WF_PLE_TOP_PLE_MODULE_CKG_DIS_ADDR
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_FL_DYN_CKG_MASK      0x00000001                // DIS_FL_DYN_CKG[0]
#define WF_PLE_TOP_PLE_MODULE_CKG_DIS_DIS_FL_DYN_CKG_SHFT      0

/* =====================================================================================

  ---PLE_DELAY_TX_CTRL (0x820C0000 + 0xb4)---

    DELAY_TX_PAGE_TH[11..0]      - (RW) Delay TX function is used to delay TXD be LMAC used. If the total pages of TXD large than page threshold, the delay TX would be released. LMAC would use TXD to TX.
    RESERVED12[15..12]           - (RO) Reserved bits
    DELAY_TX_TIMEOUT_TH[23..16]  - (RW) Delay TX function is used to delay TXD be LMAC used. IF no more enqueue event in the time out threshold, the delay TX would be released. LMAC can use TXD to TX. (unit is 32us).
    RESERVED24[31..24]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_PLE_DELAY_TX_CTRL_DELAY_TX_TIMEOUT_TH_ADDR  WF_PLE_TOP_PLE_DELAY_TX_CTRL_ADDR
#define WF_PLE_TOP_PLE_DELAY_TX_CTRL_DELAY_TX_TIMEOUT_TH_MASK  0x00FF0000                // DELAY_TX_TIMEOUT_TH[23..16]
#define WF_PLE_TOP_PLE_DELAY_TX_CTRL_DELAY_TX_TIMEOUT_TH_SHFT  16
#define WF_PLE_TOP_PLE_DELAY_TX_CTRL_DELAY_TX_PAGE_TH_ADDR     WF_PLE_TOP_PLE_DELAY_TX_CTRL_ADDR
#define WF_PLE_TOP_PLE_DELAY_TX_CTRL_DELAY_TX_PAGE_TH_MASK     0x00000FFF                // DELAY_TX_PAGE_TH[11..0]
#define WF_PLE_TOP_PLE_DELAY_TX_CTRL_DELAY_TX_PAGE_TH_SHFT     0

/* =====================================================================================

  ---PLE_STATION_REDIR_CTRL (0x820C0000 + 0xb8)---

    STA_REDIR_QID[4..0]          - (RW) Destitaion queue for Redirection function.
    RESERVED5[5]                 - (RO) Reserved bits
    STA_REDIR_PID[7..6]          - (RW) Destitaion port for Redirection function.
    STA_REDIR_PASUE_TXD[8]       - (RW) Pause TXD download for avoid race condition, when station redirection function turn off.
    RESERVED9[31..9]             - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_PLE_STATION_REDIR_CTRL_STA_REDIR_PASUE_TXD_ADDR WF_PLE_TOP_PLE_STATION_REDIR_CTRL_ADDR
#define WF_PLE_TOP_PLE_STATION_REDIR_CTRL_STA_REDIR_PASUE_TXD_MASK 0x00000100                // STA_REDIR_PASUE_TXD[8]
#define WF_PLE_TOP_PLE_STATION_REDIR_CTRL_STA_REDIR_PASUE_TXD_SHFT 8
#define WF_PLE_TOP_PLE_STATION_REDIR_CTRL_STA_REDIR_PID_ADDR   WF_PLE_TOP_PLE_STATION_REDIR_CTRL_ADDR
#define WF_PLE_TOP_PLE_STATION_REDIR_CTRL_STA_REDIR_PID_MASK   0x000000C0                // STA_REDIR_PID[7..6]
#define WF_PLE_TOP_PLE_STATION_REDIR_CTRL_STA_REDIR_PID_SHFT   6
#define WF_PLE_TOP_PLE_STATION_REDIR_CTRL_STA_REDIR_QID_ADDR   WF_PLE_TOP_PLE_STATION_REDIR_CTRL_ADDR
#define WF_PLE_TOP_PLE_STATION_REDIR_CTRL_STA_REDIR_QID_MASK   0x0000001F                // STA_REDIR_QID[4..0]
#define WF_PLE_TOP_PLE_STATION_REDIR_CTRL_STA_REDIR_QID_SHFT   0

/* =====================================================================================

  ---MACTX_LENGTH_LIMIT (0x820C0000 + 0xBC)---

    MACTX_LENGTH_LIMIT_BAND0[15..0] - (RW) MACTX download length limit of band0
    MACTX_LENGTH_LIMIT_BAND1[31..16] - (RW) MACTX download length limit of band1

 =====================================================================================*/
#define WF_PLE_TOP_MACTX_LENGTH_LIMIT_MACTX_LENGTH_LIMIT_BAND1_ADDR WF_PLE_TOP_MACTX_LENGTH_LIMIT_ADDR
#define WF_PLE_TOP_MACTX_LENGTH_LIMIT_MACTX_LENGTH_LIMIT_BAND1_MASK 0xFFFF0000                // MACTX_LENGTH_LIMIT_BAND1[31..16]
#define WF_PLE_TOP_MACTX_LENGTH_LIMIT_MACTX_LENGTH_LIMIT_BAND1_SHFT 16
#define WF_PLE_TOP_MACTX_LENGTH_LIMIT_MACTX_LENGTH_LIMIT_BAND0_ADDR WF_PLE_TOP_MACTX_LENGTH_LIMIT_ADDR
#define WF_PLE_TOP_MACTX_LENGTH_LIMIT_MACTX_LENGTH_LIMIT_BAND0_MASK 0x0000FFFF                // MACTX_LENGTH_LIMIT_BAND0[15..0]
#define WF_PLE_TOP_MACTX_LENGTH_LIMIT_MACTX_LENGTH_LIMIT_BAND0_SHFT 0

/* =====================================================================================

  ---TXS_BUF_PAUSE (0x820C0000 + 0xc0)---

    EN_PAUSE_AC00_QUEUE[0]       - (RW) Pause control of WMM0 AC0 queue.
    EN_PAUSE_AC01_QUEUE[1]       - (RW) Pause control of WMM0 AC1 queue.
    EN_PAUSE_AC02_QUEUE[2]       - (RW) Pause control of WMM0 AC2 queue.
    EN_PAUSE_AC03_QUEUE[3]       - (RW) Pause control of WMM0 AC3 queue.
    EN_PAUSE_AC10_QUEUE[4]       - (RW) Pause control of WMM1 AC0 queue.
    EN_PAUSE_AC11_QUEUE[5]       - (RW) Pause control of WMM1 AC1 queue.
    EN_PAUSE_AC12_QUEUE[6]       - (RW) Pause control of WMM1 AC2 queue.
    EN_PAUSE_AC13_QUEUE[7]       - (RW) Pause control of WMM1 AC3 queue.
    EN_PAUSE_AC20_QUEUE[8]       - (RW) Pause control of WMM2 AC0 queue.
    EN_PAUSE_AC21_QUEUE[9]       - (RW) Pause control of WMM2 AC1 queue.
    EN_PAUSE_AC22_QUEUE[10]      - (RW) Pause control of WMM2 AC2 queue.
    EN_PAUSE_AC23_QUEUE[11]      - (RW) Pause control of WMM2 AC3 queue.
    EN_PAUSE_AC30_QUEUE[12]      - (RW) Pause control of WMM3 AC0 queue.
    EN_PAUSE_AC31_QUEUE[13]      - (RW) Pause control of WMM3 AC1 queue.
    EN_PAUSE_AC32_QUEUE[14]      - (RW) Pause control of WMM3 AC2 queue.
    EN_PAUSE_AC33_QUEUE[15]      - (RW) Pause control of WMM3 AC3 queue.
    EN_PAUSE_ALTX_0_QUEUE[16]    - (RW) Pause control of ALTX queue 0.
    EN_PAUSE_BMC_0_QUEUE[17]     - (RW) Pause control of BMC queue 0.
    EN_PAUSE_BCN_0_QUEUE[18]     - (RW) Pause control of BCN queue 0.
    EN_PAUSE_PSMP_0_QUEUE[19]    - (RW) Pause control of PSMP queue 0.
    EN_PAUSE_ALTX_1_QUEUE[20]    - (RW) Pause control of ALTX queue 1.
    EN_PAUSE_BMC_1_QUEUE[21]     - (RW) Pause control of BMC queue 1.
    EN_PAUSE_BCN_1_QUEUE[22]     - (RW) Pause control of BCN queue 1.
    EN_PAUSE_PSMP_1_QUEUE[23]    - (RW) Pause control of PSMP queue 1.
    EN_PAUSE_NAF_QUEUE[24]       - (RW) Pause control of NAF queue.
    EN_PAUSE_NBCN_QUEUE[25]      - (RW) Pause control of NBCN queue.
    RESERVED26[30..26]           - (RO) Reserved bits
    PSE_TXS_BUF_VALID[31]        - (RO) PSE TXS buffer status.

 =====================================================================================*/
#define WF_PLE_TOP_TXS_BUF_PAUSE_PSE_TXS_BUF_VALID_ADDR        WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_PSE_TXS_BUF_VALID_MASK        0x80000000                // PSE_TXS_BUF_VALID[31]
#define WF_PLE_TOP_TXS_BUF_PAUSE_PSE_TXS_BUF_VALID_SHFT        31
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_NBCN_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_NBCN_QUEUE_MASK      0x02000000                // EN_PAUSE_NBCN_QUEUE[25]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_NBCN_QUEUE_SHFT      25
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_NAF_QUEUE_ADDR       WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_NAF_QUEUE_MASK       0x01000000                // EN_PAUSE_NAF_QUEUE[24]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_NAF_QUEUE_SHFT       24
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_PSMP_1_QUEUE_ADDR    WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_PSMP_1_QUEUE_MASK    0x00800000                // EN_PAUSE_PSMP_1_QUEUE[23]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_PSMP_1_QUEUE_SHFT    23
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_BCN_1_QUEUE_ADDR     WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_BCN_1_QUEUE_MASK     0x00400000                // EN_PAUSE_BCN_1_QUEUE[22]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_BCN_1_QUEUE_SHFT     22
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_BMC_1_QUEUE_ADDR     WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_BMC_1_QUEUE_MASK     0x00200000                // EN_PAUSE_BMC_1_QUEUE[21]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_BMC_1_QUEUE_SHFT     21
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_ALTX_1_QUEUE_ADDR    WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_ALTX_1_QUEUE_MASK    0x00100000                // EN_PAUSE_ALTX_1_QUEUE[20]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_ALTX_1_QUEUE_SHFT    20
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_PSMP_0_QUEUE_ADDR    WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_PSMP_0_QUEUE_MASK    0x00080000                // EN_PAUSE_PSMP_0_QUEUE[19]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_PSMP_0_QUEUE_SHFT    19
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_BCN_0_QUEUE_ADDR     WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_BCN_0_QUEUE_MASK     0x00040000                // EN_PAUSE_BCN_0_QUEUE[18]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_BCN_0_QUEUE_SHFT     18
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_BMC_0_QUEUE_ADDR     WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_BMC_0_QUEUE_MASK     0x00020000                // EN_PAUSE_BMC_0_QUEUE[17]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_BMC_0_QUEUE_SHFT     17
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_ALTX_0_QUEUE_ADDR    WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_ALTX_0_QUEUE_MASK    0x00010000                // EN_PAUSE_ALTX_0_QUEUE[16]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_ALTX_0_QUEUE_SHFT    16
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC33_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC33_QUEUE_MASK      0x00008000                // EN_PAUSE_AC33_QUEUE[15]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC33_QUEUE_SHFT      15
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC32_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC32_QUEUE_MASK      0x00004000                // EN_PAUSE_AC32_QUEUE[14]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC32_QUEUE_SHFT      14
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC31_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC31_QUEUE_MASK      0x00002000                // EN_PAUSE_AC31_QUEUE[13]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC31_QUEUE_SHFT      13
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC30_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC30_QUEUE_MASK      0x00001000                // EN_PAUSE_AC30_QUEUE[12]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC30_QUEUE_SHFT      12
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC23_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC23_QUEUE_MASK      0x00000800                // EN_PAUSE_AC23_QUEUE[11]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC23_QUEUE_SHFT      11
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC22_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC22_QUEUE_MASK      0x00000400                // EN_PAUSE_AC22_QUEUE[10]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC22_QUEUE_SHFT      10
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC21_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC21_QUEUE_MASK      0x00000200                // EN_PAUSE_AC21_QUEUE[9]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC21_QUEUE_SHFT      9
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC20_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC20_QUEUE_MASK      0x00000100                // EN_PAUSE_AC20_QUEUE[8]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC20_QUEUE_SHFT      8
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC13_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC13_QUEUE_MASK      0x00000080                // EN_PAUSE_AC13_QUEUE[7]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC13_QUEUE_SHFT      7
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC12_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC12_QUEUE_MASK      0x00000040                // EN_PAUSE_AC12_QUEUE[6]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC12_QUEUE_SHFT      6
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC11_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC11_QUEUE_MASK      0x00000020                // EN_PAUSE_AC11_QUEUE[5]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC11_QUEUE_SHFT      5
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC10_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC10_QUEUE_MASK      0x00000010                // EN_PAUSE_AC10_QUEUE[4]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC10_QUEUE_SHFT      4
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC03_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC03_QUEUE_MASK      0x00000008                // EN_PAUSE_AC03_QUEUE[3]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC03_QUEUE_SHFT      3
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC02_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC02_QUEUE_MASK      0x00000004                // EN_PAUSE_AC02_QUEUE[2]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC02_QUEUE_SHFT      2
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC01_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC01_QUEUE_MASK      0x00000002                // EN_PAUSE_AC01_QUEUE[1]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC01_QUEUE_SHFT      1
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC00_QUEUE_ADDR      WF_PLE_TOP_TXS_BUF_PAUSE_ADDR
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC00_QUEUE_MASK      0x00000001                // EN_PAUSE_AC00_QUEUE[0]
#define WF_PLE_TOP_TXS_BUF_PAUSE_EN_PAUSE_AC00_QUEUE_SHFT      0

/* =====================================================================================

  ---FSM_IDLE_WD_CTRL (0x820C0000 + 0xd0)---

    FL_IDLE_WD_TO_TH[7..0]       - (RW) Watchdog timeout threshold for frame link FSM not returning to IDLE
    PL_IDLE_WD_TO_TH[15..8]      - (RW) Watchdog timeout threshold for page link FSM not returning to IDLE
    PORT_IDLE_WD_TO_TH[23..16]   - (RW) Watchdog timeout threshold for port oper FSM not returning to IDLE
                                     (Including HIF/CPU/LMAC port)
    MACTX_IDLE_WD_TO_TH[31..24]  - (RW) Watchdog timeout threshold for MACTX FSM not returning to IDLE

 =====================================================================================*/
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_MACTX_IDLE_WD_TO_TH_ADDR   WF_PLE_TOP_FSM_IDLE_WD_CTRL_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_MACTX_IDLE_WD_TO_TH_MASK   0xFF000000                // MACTX_IDLE_WD_TO_TH[31..24]
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_MACTX_IDLE_WD_TO_TH_SHFT   24
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_PORT_IDLE_WD_TO_TH_ADDR    WF_PLE_TOP_FSM_IDLE_WD_CTRL_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_PORT_IDLE_WD_TO_TH_MASK    0x00FF0000                // PORT_IDLE_WD_TO_TH[23..16]
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_PORT_IDLE_WD_TO_TH_SHFT    16
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_PL_IDLE_WD_TO_TH_ADDR      WF_PLE_TOP_FSM_IDLE_WD_CTRL_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_PL_IDLE_WD_TO_TH_MASK      0x0000FF00                // PL_IDLE_WD_TO_TH[15..8]
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_PL_IDLE_WD_TO_TH_SHFT      8
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_FL_IDLE_WD_TO_TH_ADDR      WF_PLE_TOP_FSM_IDLE_WD_CTRL_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_FL_IDLE_WD_TO_TH_MASK      0x000000FF                // FL_IDLE_WD_TO_TH[7..0]
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_FL_IDLE_WD_TO_TH_SHFT      0

/* =====================================================================================

  ---FSM_IDLE_WD_EN (0x820C0000 + 0xd4)---

    EN_FL_IDLE_WD_TO[0]          - (RW) Enables watchdog for frame link FSM not returning to IDLE
    EN_PL_IDLE_WD_TO[1]          - (RW) Enables watchdog for page link FSM not returning to IDLE
    EN_CPU_PORT_IDLE_WD_TO[2]    - (RW) Enables watchdog for CPU port oper FSM not returning to IDLE
    EN_HIF_PORT_IDLE_WD_TO[3]    - (RW) Enables watchdog for HIF port oper FSM not returning to IDLE
    EN_LMAC_PORT_IDLE_WD_TO[4]   - (RW) Enables watchdog for LMAC port oper FSM not returning to IDLE
    EN_AMSDU_PORT_IDLE_WD_TO[5]  - (RW) Enables watchdog for AMSDU port FSM not returning to IDLE
    EN_HW_AMSDU_IDLE_WD_TO[6]    - (RW) Enables watchdog for HW AMSDU FSM not returning to IDLE
    RESERVED7[7]                 - (RO) Reserved bits
    EN_MACTX0_IDLE_WD_TO[8]      - (RW) Enables watchdog for MACTX 0 FSM not returning to IDLE
    EN_MACTX2_IDLE_WD_TO[9]      - (RW) Enables watchdog for MACTX 1 FSM not returning to IDLE
    EN_MACTX1_IDLE_WD_TO[10]     - (RW) Enables watchdog for MACTX 2 FSM not returning to IDLE
    EN_MACTX3_IDLE_WD_TO[11]     - (RW) Enables watchdog for MACTX 3 FSM not returning to IDLE
    EN_MDP_IDLE_WD_TO[12]        - (RW) Enables watchdog for MDP port oper FSM not returning to IDLE
    EN_PREDL_ARB_IDLE_WD_TO[13]  - (RW) Enables watchdog for Predl arbitrator FSM not returning to IDLE
    EN_PREDL_TXCMD_IDLE_WD_TO[14] - (RW) Enables watchdog for Predl TXCMD parser FSM not returning to IDLE
    RESERVED15[31..15]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_PREDL_TXCMD_IDLE_WD_TO_ADDR WF_PLE_TOP_FSM_IDLE_WD_EN_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_PREDL_TXCMD_IDLE_WD_TO_MASK 0x00004000                // EN_PREDL_TXCMD_IDLE_WD_TO[14]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_PREDL_TXCMD_IDLE_WD_TO_SHFT 14
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_PREDL_ARB_IDLE_WD_TO_ADDR WF_PLE_TOP_FSM_IDLE_WD_EN_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_PREDL_ARB_IDLE_WD_TO_MASK 0x00002000                // EN_PREDL_ARB_IDLE_WD_TO[13]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_PREDL_ARB_IDLE_WD_TO_SHFT 13
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_MDP_IDLE_WD_TO_ADDR       WF_PLE_TOP_FSM_IDLE_WD_EN_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_MDP_IDLE_WD_TO_MASK       0x00001000                // EN_MDP_IDLE_WD_TO[12]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_MDP_IDLE_WD_TO_SHFT       12
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_MACTX3_IDLE_WD_TO_ADDR    WF_PLE_TOP_FSM_IDLE_WD_EN_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_MACTX3_IDLE_WD_TO_MASK    0x00000800                // EN_MACTX3_IDLE_WD_TO[11]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_MACTX3_IDLE_WD_TO_SHFT    11
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_MACTX1_IDLE_WD_TO_ADDR    WF_PLE_TOP_FSM_IDLE_WD_EN_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_MACTX1_IDLE_WD_TO_MASK    0x00000400                // EN_MACTX1_IDLE_WD_TO[10]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_MACTX1_IDLE_WD_TO_SHFT    10
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_MACTX2_IDLE_WD_TO_ADDR    WF_PLE_TOP_FSM_IDLE_WD_EN_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_MACTX2_IDLE_WD_TO_MASK    0x00000200                // EN_MACTX2_IDLE_WD_TO[9]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_MACTX2_IDLE_WD_TO_SHFT    9
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_MACTX0_IDLE_WD_TO_ADDR    WF_PLE_TOP_FSM_IDLE_WD_EN_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_MACTX0_IDLE_WD_TO_MASK    0x00000100                // EN_MACTX0_IDLE_WD_TO[8]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_MACTX0_IDLE_WD_TO_SHFT    8
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_HW_AMSDU_IDLE_WD_TO_ADDR  WF_PLE_TOP_FSM_IDLE_WD_EN_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_HW_AMSDU_IDLE_WD_TO_MASK  0x00000040                // EN_HW_AMSDU_IDLE_WD_TO[6]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_HW_AMSDU_IDLE_WD_TO_SHFT  6
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_AMSDU_PORT_IDLE_WD_TO_ADDR WF_PLE_TOP_FSM_IDLE_WD_EN_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_AMSDU_PORT_IDLE_WD_TO_MASK 0x00000020                // EN_AMSDU_PORT_IDLE_WD_TO[5]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_AMSDU_PORT_IDLE_WD_TO_SHFT 5
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_LMAC_PORT_IDLE_WD_TO_ADDR WF_PLE_TOP_FSM_IDLE_WD_EN_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_LMAC_PORT_IDLE_WD_TO_MASK 0x00000010                // EN_LMAC_PORT_IDLE_WD_TO[4]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_LMAC_PORT_IDLE_WD_TO_SHFT 4
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_HIF_PORT_IDLE_WD_TO_ADDR  WF_PLE_TOP_FSM_IDLE_WD_EN_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_HIF_PORT_IDLE_WD_TO_MASK  0x00000008                // EN_HIF_PORT_IDLE_WD_TO[3]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_HIF_PORT_IDLE_WD_TO_SHFT  3
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_CPU_PORT_IDLE_WD_TO_ADDR  WF_PLE_TOP_FSM_IDLE_WD_EN_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_CPU_PORT_IDLE_WD_TO_MASK  0x00000004                // EN_CPU_PORT_IDLE_WD_TO[2]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_CPU_PORT_IDLE_WD_TO_SHFT  2
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_PL_IDLE_WD_TO_ADDR        WF_PLE_TOP_FSM_IDLE_WD_EN_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_PL_IDLE_WD_TO_MASK        0x00000002                // EN_PL_IDLE_WD_TO[1]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_PL_IDLE_WD_TO_SHFT        1
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_FL_IDLE_WD_TO_ADDR        WF_PLE_TOP_FSM_IDLE_WD_EN_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_FL_IDLE_WD_TO_MASK        0x00000001                // EN_FL_IDLE_WD_TO[0]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_EN_FL_IDLE_WD_TO_SHFT        0

/* =====================================================================================

  ---FSM_IDLE_WD_CTRL_1 (0x820C0000 + 0xd8)---

    MDP_IDLE_WD_TO_TH[7..0]      - (RW) Watchdog timeout threshold for MDP FSM not returning to IDLE
                                     (Including MDP TDP/RDP/TIOC/RIOC)
    PF_IDLE_WD_TO_TH[15..8]      - (RW) Watchdog timeout threshold for PF FSM not returning to IDLE
    SEC_IDLE_WD_TO_TH[23..16]    - (RW) Watchdog timeout threshold for SEC FSM not returning to IDLE
                                     (Including SEC0/SEC1)
    MDP_RDP_WB_IDLE_WD_TO_TH[31..24] - (RW) Watchdog timeout threshold for MDP RDP Wait buffer allocate FSM not returning to IDLE

 =====================================================================================*/
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_MDP_RDP_WB_IDLE_WD_TO_TH_ADDR WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_MDP_RDP_WB_IDLE_WD_TO_TH_MASK 0xFF000000                // MDP_RDP_WB_IDLE_WD_TO_TH[31..24]
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_MDP_RDP_WB_IDLE_WD_TO_TH_SHFT 24
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_SEC_IDLE_WD_TO_TH_ADDR   WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_SEC_IDLE_WD_TO_TH_MASK   0x00FF0000                // SEC_IDLE_WD_TO_TH[23..16]
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_SEC_IDLE_WD_TO_TH_SHFT   16
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_PF_IDLE_WD_TO_TH_ADDR    WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_PF_IDLE_WD_TO_TH_MASK    0x0000FF00                // PF_IDLE_WD_TO_TH[15..8]
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_PF_IDLE_WD_TO_TH_SHFT    8
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_MDP_IDLE_WD_TO_TH_ADDR   WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_MDP_IDLE_WD_TO_TH_MASK   0x000000FF                // MDP_IDLE_WD_TO_TH[7..0]
#define WF_PLE_TOP_FSM_IDLE_WD_CTRL_1_MDP_IDLE_WD_TO_TH_SHFT   0

/* =====================================================================================

  ---FSM_IDLE_WD_EN_1 (0x820C0000 + 0xdc)---

    EN_BN0_MDP_TDP_IDLE_WD_TO[0] - (RW) Enables watchdog for Band0 MDP TDP FSM not returning to IDLE
    EN_MDP_RDP_IDLE_WD_TO[1]     - (RW) Enables watchdog for MDP RDP FSM not returning to IDLE
    EN_BN0_MDP_TIOC_IDLE_WD_TO[2] - (RW) Enables watchdog for Band0 MDP TIOC FSM not returning to IDLE
    EN_BN0_MDP_RIOC_IDLE_WD_TO[3] - (RW) Enables watchdog for Band0 MDP RIOC FSM not returning to IDLE
    EN_PF_IDLE_WD_TO[4]          - (RW) Enables watchdog for PF FSM not returning to IDLE
    EN_SEC0_IDLE_WD_TO[5]        - (RW) Enables watchdog for SEC0 FSM not returning to IDLE
    EN_SEC1_IDLE_WD_TO[6]        - (RW) Enables watchdog for SEC1 FSM not returning to IDLE
    EN_BN1_MDP_TDP_IDLE_WD_TO[7] - (RW) Enables watchdog for Band1 MDP TDP FSM not returning to IDLE
    EN_BN1_MDP_TIOC_IDLE_WD_TO[8] - (RW) Enables watchdog for Band1 MDP TIOC FSM not returning to IDLE
    EN_BN1_MDP_RIOC_IDLE_WD_TO[9] - (RW) Enables watchdog for Band1 MDP RIOC FSM not returning to IDLE
    EN_MDP_RDP_WB_IDLE_WD_TO[10] - (RW) Enables watchdog for MDP RDP Wait buffer allocate FSM not returning to IDLE
    EN_UWTBL_IDLE_WD_TO[11]      - (RW) Enables watchdog for UWTBL FSM not returning to IDLE
    RESERVED12[15..12]           - (RO) Reserved bits
    UWTBL_IDLE_WD_TO_TH[23..16]  - (RW) Watchdog timeout threshold for UWTBL FSM not returning to IDLE
    RESERVED24[31..24]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_UWTBL_IDLE_WD_TO_TH_ADDR   WF_PLE_TOP_FSM_IDLE_WD_EN_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_UWTBL_IDLE_WD_TO_TH_MASK   0x00FF0000                // UWTBL_IDLE_WD_TO_TH[23..16]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_UWTBL_IDLE_WD_TO_TH_SHFT   16
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_UWTBL_IDLE_WD_TO_ADDR   WF_PLE_TOP_FSM_IDLE_WD_EN_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_UWTBL_IDLE_WD_TO_MASK   0x00000800                // EN_UWTBL_IDLE_WD_TO[11]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_UWTBL_IDLE_WD_TO_SHFT   11
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_MDP_RDP_WB_IDLE_WD_TO_ADDR WF_PLE_TOP_FSM_IDLE_WD_EN_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_MDP_RDP_WB_IDLE_WD_TO_MASK 0x00000400                // EN_MDP_RDP_WB_IDLE_WD_TO[10]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_MDP_RDP_WB_IDLE_WD_TO_SHFT 10
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN1_MDP_RIOC_IDLE_WD_TO_ADDR WF_PLE_TOP_FSM_IDLE_WD_EN_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN1_MDP_RIOC_IDLE_WD_TO_MASK 0x00000200                // EN_BN1_MDP_RIOC_IDLE_WD_TO[9]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN1_MDP_RIOC_IDLE_WD_TO_SHFT 9
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN1_MDP_TIOC_IDLE_WD_TO_ADDR WF_PLE_TOP_FSM_IDLE_WD_EN_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN1_MDP_TIOC_IDLE_WD_TO_MASK 0x00000100                // EN_BN1_MDP_TIOC_IDLE_WD_TO[8]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN1_MDP_TIOC_IDLE_WD_TO_SHFT 8
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN1_MDP_TDP_IDLE_WD_TO_ADDR WF_PLE_TOP_FSM_IDLE_WD_EN_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN1_MDP_TDP_IDLE_WD_TO_MASK 0x00000080                // EN_BN1_MDP_TDP_IDLE_WD_TO[7]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN1_MDP_TDP_IDLE_WD_TO_SHFT 7
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_SEC1_IDLE_WD_TO_ADDR    WF_PLE_TOP_FSM_IDLE_WD_EN_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_SEC1_IDLE_WD_TO_MASK    0x00000040                // EN_SEC1_IDLE_WD_TO[6]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_SEC1_IDLE_WD_TO_SHFT    6
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_SEC0_IDLE_WD_TO_ADDR    WF_PLE_TOP_FSM_IDLE_WD_EN_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_SEC0_IDLE_WD_TO_MASK    0x00000020                // EN_SEC0_IDLE_WD_TO[5]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_SEC0_IDLE_WD_TO_SHFT    5
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_PF_IDLE_WD_TO_ADDR      WF_PLE_TOP_FSM_IDLE_WD_EN_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_PF_IDLE_WD_TO_MASK      0x00000010                // EN_PF_IDLE_WD_TO[4]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_PF_IDLE_WD_TO_SHFT      4
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN0_MDP_RIOC_IDLE_WD_TO_ADDR WF_PLE_TOP_FSM_IDLE_WD_EN_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN0_MDP_RIOC_IDLE_WD_TO_MASK 0x00000008                // EN_BN0_MDP_RIOC_IDLE_WD_TO[3]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN0_MDP_RIOC_IDLE_WD_TO_SHFT 3
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN0_MDP_TIOC_IDLE_WD_TO_ADDR WF_PLE_TOP_FSM_IDLE_WD_EN_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN0_MDP_TIOC_IDLE_WD_TO_MASK 0x00000004                // EN_BN0_MDP_TIOC_IDLE_WD_TO[2]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN0_MDP_TIOC_IDLE_WD_TO_SHFT 2
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_MDP_RDP_IDLE_WD_TO_ADDR WF_PLE_TOP_FSM_IDLE_WD_EN_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_MDP_RDP_IDLE_WD_TO_MASK 0x00000002                // EN_MDP_RDP_IDLE_WD_TO[1]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_MDP_RDP_IDLE_WD_TO_SHFT 1
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN0_MDP_TDP_IDLE_WD_TO_ADDR WF_PLE_TOP_FSM_IDLE_WD_EN_1_ADDR
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN0_MDP_TDP_IDLE_WD_TO_MASK 0x00000001                // EN_BN0_MDP_TDP_IDLE_WD_TO[0]
#define WF_PLE_TOP_FSM_IDLE_WD_EN_1_EN_BN0_MDP_TDP_IDLE_WD_TO_SHFT 0

/* =====================================================================================

  ---STATION_PAUSE0 (0x820C0000 + 0x100)---

    STATION_PAUSE_0[7..0]        - (RW) SW can stop station TX by this setting for STA0~STA7.
    STATION_PAUSE_0_1[15..8]     - (RW) SW can stop station TX by this setting for STA8~STA15
    STATION_PAUSE_0_2[31..16]    - (RW) SW can stop station TX by this setting for STA16~STA31

 =====================================================================================*/
#define WF_PLE_TOP_STATION_PAUSE0_STATION_PAUSE_0_2_ADDR       WF_PLE_TOP_STATION_PAUSE0_ADDR
#define WF_PLE_TOP_STATION_PAUSE0_STATION_PAUSE_0_2_MASK       0xFFFF0000                // STATION_PAUSE_0_2[31..16]
#define WF_PLE_TOP_STATION_PAUSE0_STATION_PAUSE_0_2_SHFT       16
#define WF_PLE_TOP_STATION_PAUSE0_STATION_PAUSE_0_1_ADDR       WF_PLE_TOP_STATION_PAUSE0_ADDR
#define WF_PLE_TOP_STATION_PAUSE0_STATION_PAUSE_0_1_MASK       0x0000FF00                // STATION_PAUSE_0_1[15..8]
#define WF_PLE_TOP_STATION_PAUSE0_STATION_PAUSE_0_1_SHFT       8
#define WF_PLE_TOP_STATION_PAUSE0_STATION_PAUSE_0_ADDR         WF_PLE_TOP_STATION_PAUSE0_ADDR
#define WF_PLE_TOP_STATION_PAUSE0_STATION_PAUSE_0_MASK         0x000000FF                // STATION_PAUSE_0[7..0]
#define WF_PLE_TOP_STATION_PAUSE0_STATION_PAUSE_0_SHFT         0

/* =====================================================================================

  ---DIS_STA_MAP0 (0x820C0000 + 0x140)---

    DIS_STA_MAP_0[7..0]          - (RW) Disable map for STA 0~7 TX
    DIS_STA_MAP_0_1[15..8]       - (RW) Disable map for STA 8~15 TX
    DIS_STA_MAP_0_2[31..16]      - (RW) Disable map for STA 16~31 TX

 =====================================================================================*/
#define WF_PLE_TOP_DIS_STA_MAP0_DIS_STA_MAP_0_2_ADDR           WF_PLE_TOP_DIS_STA_MAP0_ADDR
#define WF_PLE_TOP_DIS_STA_MAP0_DIS_STA_MAP_0_2_MASK           0xFFFF0000                // DIS_STA_MAP_0_2[31..16]
#define WF_PLE_TOP_DIS_STA_MAP0_DIS_STA_MAP_0_2_SHFT           16
#define WF_PLE_TOP_DIS_STA_MAP0_DIS_STA_MAP_0_1_ADDR           WF_PLE_TOP_DIS_STA_MAP0_ADDR
#define WF_PLE_TOP_DIS_STA_MAP0_DIS_STA_MAP_0_1_MASK           0x0000FF00                // DIS_STA_MAP_0_1[15..8]
#define WF_PLE_TOP_DIS_STA_MAP0_DIS_STA_MAP_0_1_SHFT           8
#define WF_PLE_TOP_DIS_STA_MAP0_DIS_STA_MAP_0_ADDR             WF_PLE_TOP_DIS_STA_MAP0_ADDR
#define WF_PLE_TOP_DIS_STA_MAP0_DIS_STA_MAP_0_MASK             0x000000FF                // DIS_STA_MAP_0[7..0]
#define WF_PLE_TOP_DIS_STA_MAP0_DIS_STA_MAP_0_SHFT             0

/* =====================================================================================

  ---STATION_REDIR0 (0x820C0000 + 0x180)---

    STATION_REDIR_0[7..0]        - (RW) SW can redirection to designed port/queue by this setting for STA0~STA7.
    STATION_REDIR_0_1[15..8]     - (RW) SW can redirection to designed port/queue by this setting for STA8~STA15.
    STATION_REDIR_0_2[31..16]    - (RW) SW can redirection to designed port/queue by this setting for STA16~STA31.

 =====================================================================================*/
#define WF_PLE_TOP_STATION_REDIR0_STATION_REDIR_0_2_ADDR       WF_PLE_TOP_STATION_REDIR0_ADDR
#define WF_PLE_TOP_STATION_REDIR0_STATION_REDIR_0_2_MASK       0xFFFF0000                // STATION_REDIR_0_2[31..16]
#define WF_PLE_TOP_STATION_REDIR0_STATION_REDIR_0_2_SHFT       16
#define WF_PLE_TOP_STATION_REDIR0_STATION_REDIR_0_1_ADDR       WF_PLE_TOP_STATION_REDIR0_ADDR
#define WF_PLE_TOP_STATION_REDIR0_STATION_REDIR_0_1_MASK       0x0000FF00                // STATION_REDIR_0_1[15..8]
#define WF_PLE_TOP_STATION_REDIR0_STATION_REDIR_0_1_SHFT       8
#define WF_PLE_TOP_STATION_REDIR0_STATION_REDIR_0_ADDR         WF_PLE_TOP_STATION_REDIR0_ADDR
#define WF_PLE_TOP_STATION_REDIR0_STATION_REDIR_0_MASK         0x000000FF                // STATION_REDIR_0[7..0]
#define WF_PLE_TOP_STATION_REDIR0_STATION_REDIR_0_SHFT         0

/* =====================================================================================

  ---TWT_STA_MAP0 (0x820C0000 + 0x1C0)---

    TWT_STA_MAP_0[7..0]          - (RW) TWT map for STA 0~7 TX
    TWT_STA_MAP_0_1[15..8]       - (RW) TWT map for STA 8~15 TX
    TWT_STA_MAP_0_2[31..16]      - (RW) TWT map for STA 16~31 TX

 =====================================================================================*/
#define WF_PLE_TOP_TWT_STA_MAP0_TWT_STA_MAP_0_2_ADDR           WF_PLE_TOP_TWT_STA_MAP0_ADDR
#define WF_PLE_TOP_TWT_STA_MAP0_TWT_STA_MAP_0_2_MASK           0xFFFF0000                // TWT_STA_MAP_0_2[31..16]
#define WF_PLE_TOP_TWT_STA_MAP0_TWT_STA_MAP_0_2_SHFT           16
#define WF_PLE_TOP_TWT_STA_MAP0_TWT_STA_MAP_0_1_ADDR           WF_PLE_TOP_TWT_STA_MAP0_ADDR
#define WF_PLE_TOP_TWT_STA_MAP0_TWT_STA_MAP_0_1_MASK           0x0000FF00                // TWT_STA_MAP_0_1[15..8]
#define WF_PLE_TOP_TWT_STA_MAP0_TWT_STA_MAP_0_1_SHFT           8
#define WF_PLE_TOP_TWT_STA_MAP0_TWT_STA_MAP_0_ADDR             WF_PLE_TOP_TWT_STA_MAP0_ADDR
#define WF_PLE_TOP_TWT_STA_MAP0_TWT_STA_MAP_0_MASK             0x000000FF                // TWT_STA_MAP_0[7..0]
#define WF_PLE_TOP_TWT_STA_MAP0_TWT_STA_MAP_0_SHFT             0

/* =====================================================================================

  ---TWT_TX_CTRL0 (0x820C0000 + 0x200)---

    en_twt_stop_tx_ctrl_0[0]     - (RW) Enable TWT non-acitve period TX control function.
    en_twt_stop_tx_ctrl_1[1]     - (RW) Enable TWT non-acitve period TX control function.
    en_twt_stop_tx_ctrl_2[2]     - (RW) Enable TWT non-acitve period TX control function.
    en_twt_stop_tx_ctrl_3[3]     - (RW) Enable TWT non-acitve period TX control function.
    RESERVED4[31..4]             - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_TWT_TX_CTRL0_en_twt_stop_tx_ctrl_3_ADDR     WF_PLE_TOP_TWT_TX_CTRL0_ADDR
#define WF_PLE_TOP_TWT_TX_CTRL0_en_twt_stop_tx_ctrl_3_MASK     0x00000008                // en_twt_stop_tx_ctrl_3[3]
#define WF_PLE_TOP_TWT_TX_CTRL0_en_twt_stop_tx_ctrl_3_SHFT     3
#define WF_PLE_TOP_TWT_TX_CTRL0_en_twt_stop_tx_ctrl_2_ADDR     WF_PLE_TOP_TWT_TX_CTRL0_ADDR
#define WF_PLE_TOP_TWT_TX_CTRL0_en_twt_stop_tx_ctrl_2_MASK     0x00000004                // en_twt_stop_tx_ctrl_2[2]
#define WF_PLE_TOP_TWT_TX_CTRL0_en_twt_stop_tx_ctrl_2_SHFT     2
#define WF_PLE_TOP_TWT_TX_CTRL0_en_twt_stop_tx_ctrl_1_ADDR     WF_PLE_TOP_TWT_TX_CTRL0_ADDR
#define WF_PLE_TOP_TWT_TX_CTRL0_en_twt_stop_tx_ctrl_1_MASK     0x00000002                // en_twt_stop_tx_ctrl_1[1]
#define WF_PLE_TOP_TWT_TX_CTRL0_en_twt_stop_tx_ctrl_1_SHFT     1
#define WF_PLE_TOP_TWT_TX_CTRL0_en_twt_stop_tx_ctrl_0_ADDR     WF_PLE_TOP_TWT_TX_CTRL0_ADDR
#define WF_PLE_TOP_TWT_TX_CTRL0_en_twt_stop_tx_ctrl_0_MASK     0x00000001                // en_twt_stop_tx_ctrl_0[0]
#define WF_PLE_TOP_TWT_TX_CTRL0_en_twt_stop_tx_ctrl_0_SHFT     0

/* =====================================================================================

  ---BSS_DBDC_CTRL (0x820C0000 + 0x208)---

    BSS_BAND_SEL[15..0]          - (RW) Select band of each BSS
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_BSS_DBDC_CTRL_BSS_BAND_SEL_ADDR             WF_PLE_TOP_BSS_DBDC_CTRL_ADDR
#define WF_PLE_TOP_BSS_DBDC_CTRL_BSS_BAND_SEL_MASK             0x0000FFFF                // BSS_BAND_SEL[15..0]
#define WF_PLE_TOP_BSS_DBDC_CTRL_BSS_BAND_SEL_SHFT             0

/* =====================================================================================

  ---VOW_CTRL1 (0x820C0000 + 0x20c)---

    RESERVED0[0]                 - (RO) Reserved bits
    EN_BSSID_CHECK[1]            - (RW) Enable control of check BSSID's trap state in search station
    EN_LOCK_STA[2]               - (RW) Lock mode for RTS retry same sta until RTS drop
    RESERVED3[7..3]              - (RO) Reserved bits
    DIS_BSSID0_TRAP_IGNORE[8]    - (RW) Disable control of the function that STA with BSSID0 trap ignore in TXQ busy
    DIS_BSSID1_TRAP_IGNORE[9]    - (RW) Disable control of the function that STA with BSSID1 trap ignore in TXQ busy
    DIS_BSSID2_TRAP_IGNORE[10]   - (RW) Disable control of the function that STA with BSSID2 trap ignore in TXQ busy
    DIS_BSSID3_TRAP_IGNORE[11]   - (RW) Disable control of the function that STA with BSSID3 trap ignore in TXQ busy
    RESERVED12[31..12]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_VOW_CTRL1_DIS_BSSID3_TRAP_IGNORE_ADDR       WF_PLE_TOP_VOW_CTRL1_ADDR
#define WF_PLE_TOP_VOW_CTRL1_DIS_BSSID3_TRAP_IGNORE_MASK       0x00000800                // DIS_BSSID3_TRAP_IGNORE[11]
#define WF_PLE_TOP_VOW_CTRL1_DIS_BSSID3_TRAP_IGNORE_SHFT       11
#define WF_PLE_TOP_VOW_CTRL1_DIS_BSSID2_TRAP_IGNORE_ADDR       WF_PLE_TOP_VOW_CTRL1_ADDR
#define WF_PLE_TOP_VOW_CTRL1_DIS_BSSID2_TRAP_IGNORE_MASK       0x00000400                // DIS_BSSID2_TRAP_IGNORE[10]
#define WF_PLE_TOP_VOW_CTRL1_DIS_BSSID2_TRAP_IGNORE_SHFT       10
#define WF_PLE_TOP_VOW_CTRL1_DIS_BSSID1_TRAP_IGNORE_ADDR       WF_PLE_TOP_VOW_CTRL1_ADDR
#define WF_PLE_TOP_VOW_CTRL1_DIS_BSSID1_TRAP_IGNORE_MASK       0x00000200                // DIS_BSSID1_TRAP_IGNORE[9]
#define WF_PLE_TOP_VOW_CTRL1_DIS_BSSID1_TRAP_IGNORE_SHFT       9
#define WF_PLE_TOP_VOW_CTRL1_DIS_BSSID0_TRAP_IGNORE_ADDR       WF_PLE_TOP_VOW_CTRL1_ADDR
#define WF_PLE_TOP_VOW_CTRL1_DIS_BSSID0_TRAP_IGNORE_MASK       0x00000100                // DIS_BSSID0_TRAP_IGNORE[8]
#define WF_PLE_TOP_VOW_CTRL1_DIS_BSSID0_TRAP_IGNORE_SHFT       8
#define WF_PLE_TOP_VOW_CTRL1_EN_LOCK_STA_ADDR                  WF_PLE_TOP_VOW_CTRL1_ADDR
#define WF_PLE_TOP_VOW_CTRL1_EN_LOCK_STA_MASK                  0x00000004                // EN_LOCK_STA[2]
#define WF_PLE_TOP_VOW_CTRL1_EN_LOCK_STA_SHFT                  2
#define WF_PLE_TOP_VOW_CTRL1_EN_BSSID_CHECK_ADDR               WF_PLE_TOP_VOW_CTRL1_ADDR
#define WF_PLE_TOP_VOW_CTRL1_EN_BSSID_CHECK_MASK               0x00000002                // EN_BSSID_CHECK[1]
#define WF_PLE_TOP_VOW_CTRL1_EN_BSSID_CHECK_SHFT               1

/* =====================================================================================

  ---EN_UMAC_L1_DCM (0x820C0000 + 0x238)---

    UMAC_DCM_KEEP_HIGH_SPEED[0]  - (RW) UMAC L1 DCM control
    RESERVED1[22..1]             - (RO) Reserved bits
    DCM_IDLE_CNT_DOWN_UNIT[23]   - (RW) UMAC L1 DCM idle count down time unit select.
    DCM_IDLE_CNT_DOWN_VALUE[31..24] - (RW) UMAC L1 DCM idle count down value.

 =====================================================================================*/
#define WF_PLE_TOP_EN_UMAC_L1_DCM_DCM_IDLE_CNT_DOWN_VALUE_ADDR WF_PLE_TOP_EN_UMAC_L1_DCM_ADDR
#define WF_PLE_TOP_EN_UMAC_L1_DCM_DCM_IDLE_CNT_DOWN_VALUE_MASK 0xFF000000                // DCM_IDLE_CNT_DOWN_VALUE[31..24]
#define WF_PLE_TOP_EN_UMAC_L1_DCM_DCM_IDLE_CNT_DOWN_VALUE_SHFT 24
#define WF_PLE_TOP_EN_UMAC_L1_DCM_DCM_IDLE_CNT_DOWN_UNIT_ADDR  WF_PLE_TOP_EN_UMAC_L1_DCM_ADDR
#define WF_PLE_TOP_EN_UMAC_L1_DCM_DCM_IDLE_CNT_DOWN_UNIT_MASK  0x00800000                // DCM_IDLE_CNT_DOWN_UNIT[23]
#define WF_PLE_TOP_EN_UMAC_L1_DCM_DCM_IDLE_CNT_DOWN_UNIT_SHFT  23
#define WF_PLE_TOP_EN_UMAC_L1_DCM_UMAC_DCM_KEEP_HIGH_SPEED_ADDR WF_PLE_TOP_EN_UMAC_L1_DCM_ADDR
#define WF_PLE_TOP_EN_UMAC_L1_DCM_UMAC_DCM_KEEP_HIGH_SPEED_MASK 0x00000001                // UMAC_DCM_KEEP_HIGH_SPEED[0]
#define WF_PLE_TOP_EN_UMAC_L1_DCM_UMAC_DCM_KEEP_HIGH_SPEED_SHFT 0

/* =====================================================================================

  ---PCIE_POWER_CTRL (0x820C0000 + 0x23c)---

    DIS_UMAC_PCIE_POWER_CTRL[11..0] - (RW) MAC PCIE power control.
                                     Bit[0] : TXD in Queue & ARB TX start & not pause condition
                                     Bit[1] : PSE RX Data buffer under threshold
                                     Bit[2] : report active
                                     Bit[3] : RX NAV countdown less threshold & TXD in Queue & ARB TX start  & not pause condition
                                     Bit[4] : RX ppdu length large than threshold.
    RESERVED12[30..12]           - (RO) Reserved bits
    EN_UMAC_PCIE_POWER_CTRL_GLO[31] - (RW) MAC PCIE power global control.

 =====================================================================================*/
#define WF_PLE_TOP_PCIE_POWER_CTRL_EN_UMAC_PCIE_POWER_CTRL_GLO_ADDR WF_PLE_TOP_PCIE_POWER_CTRL_ADDR
#define WF_PLE_TOP_PCIE_POWER_CTRL_EN_UMAC_PCIE_POWER_CTRL_GLO_MASK 0x80000000                // EN_UMAC_PCIE_POWER_CTRL_GLO[31]
#define WF_PLE_TOP_PCIE_POWER_CTRL_EN_UMAC_PCIE_POWER_CTRL_GLO_SHFT 31
#define WF_PLE_TOP_PCIE_POWER_CTRL_DIS_UMAC_PCIE_POWER_CTRL_ADDR WF_PLE_TOP_PCIE_POWER_CTRL_ADDR
#define WF_PLE_TOP_PCIE_POWER_CTRL_DIS_UMAC_PCIE_POWER_CTRL_MASK 0x00000FFF                // DIS_UMAC_PCIE_POWER_CTRL[11..0]
#define WF_PLE_TOP_PCIE_POWER_CTRL_DIS_UMAC_PCIE_POWER_CTRL_SHFT 0

/* =====================================================================================

  ---TIMEOUT_CTRL (0x820C0000 + 0x280)---

    RESERVED0[7..0]              - (RO) Reserved bits
    HOST_REPORT_TO_CTRL[15..8]   - (RW) HOST report timeout control register
    APB_WD_TO_CTRL[23..16]       - (RW) APB pready watch dog timeout control register
    RESERVED24[31..24]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_TIMEOUT_CTRL_APB_WD_TO_CTRL_ADDR            WF_PLE_TOP_TIMEOUT_CTRL_ADDR
#define WF_PLE_TOP_TIMEOUT_CTRL_APB_WD_TO_CTRL_MASK            0x00FF0000                // APB_WD_TO_CTRL[23..16]
#define WF_PLE_TOP_TIMEOUT_CTRL_APB_WD_TO_CTRL_SHFT            16
#define WF_PLE_TOP_TIMEOUT_CTRL_HOST_REPORT_TO_CTRL_ADDR       WF_PLE_TOP_TIMEOUT_CTRL_ADDR
#define WF_PLE_TOP_TIMEOUT_CTRL_HOST_REPORT_TO_CTRL_MASK       0x0000FF00                // HOST_REPORT_TO_CTRL[15..8]
#define WF_PLE_TOP_TIMEOUT_CTRL_HOST_REPORT_TO_CTRL_SHFT       8

/* =====================================================================================

  ---PLE_FUNC_CTRL_0 (0x820C0000 + 0x284)---

    MACTX_REQ_DEASSERT[0]        - (RW) Enable of DeAsser MACTX REQ.(Normal operation must be zero.)
    MACTX_ABORT_DEASSERT[1]      - (RW) Enable of DeAsser MACTX ABORT.(Normal operation must be zero.)
    MPDU_DONE_CNT_IN_NO_TX_REQ[2] - (RW) MPDU done mode for LMAC no TX request
    MPDU_DONE_CNT_IN_NO_ADD[3]   - (RW) MPDU done mode for LMAC no add
    ACK_LMAC_NO_FID_ADD[4]       - (RW) MACTX ack mode for LMAC no add any fid for TX
    RESERVED5[5]                 - (RO) Reserved bits
    DIS_STA_RLS_TO_1F[6]         - (RW) Release port setting of disable STA function
    RESERVED7[7]                 - (RO) Reserved bits
    MACTX_REQ_ASSERT[8]          - (RW) Enable of Asser MACTX REQ.(Normal operation must be zero.)
    MACTX_ABORT_ASSERT[9]        - (RW) Enable of Asser MACTX ABORT.(Normal operation must be zero.)
    RESERVED10[21..10]           - (RO) Reserved bits
    DIS_AUTORATE_TXP_REQ[22]     - (RW) Disable auto rate TXP request function
    LATER_PKT_PRE_CUT_1US[23]    - (RW) Pre cut 1us air time for later packet.
    TXP_REQ_CNTDOWN_TH[27..24]   - (RW) Threshold of air time count down for TXP request
    TXP_REQ_HSPEED_DL_NUM[29..28] - (RW) Packet number of high speed TXP request issue, by pre-cut more micro-second
    TXP_REQ_HSPEED_CUT_US[31..30] - (RW) Number of pre-cut micro-second for high speed packet

 =====================================================================================*/
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_TXP_REQ_HSPEED_CUT_US_ADDR  WF_PLE_TOP_PLE_FUNC_CTRL_0_ADDR
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_TXP_REQ_HSPEED_CUT_US_MASK  0xC0000000                // TXP_REQ_HSPEED_CUT_US[31..30]
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_TXP_REQ_HSPEED_CUT_US_SHFT  30
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_TXP_REQ_HSPEED_DL_NUM_ADDR  WF_PLE_TOP_PLE_FUNC_CTRL_0_ADDR
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_TXP_REQ_HSPEED_DL_NUM_MASK  0x30000000                // TXP_REQ_HSPEED_DL_NUM[29..28]
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_TXP_REQ_HSPEED_DL_NUM_SHFT  28
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_TXP_REQ_CNTDOWN_TH_ADDR     WF_PLE_TOP_PLE_FUNC_CTRL_0_ADDR
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_TXP_REQ_CNTDOWN_TH_MASK     0x0F000000                // TXP_REQ_CNTDOWN_TH[27..24]
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_TXP_REQ_CNTDOWN_TH_SHFT     24
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_LATER_PKT_PRE_CUT_1US_ADDR  WF_PLE_TOP_PLE_FUNC_CTRL_0_ADDR
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_LATER_PKT_PRE_CUT_1US_MASK  0x00800000                // LATER_PKT_PRE_CUT_1US[23]
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_LATER_PKT_PRE_CUT_1US_SHFT  23
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_DIS_AUTORATE_TXP_REQ_ADDR   WF_PLE_TOP_PLE_FUNC_CTRL_0_ADDR
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_DIS_AUTORATE_TXP_REQ_MASK   0x00400000                // DIS_AUTORATE_TXP_REQ[22]
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_DIS_AUTORATE_TXP_REQ_SHFT   22
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MACTX_ABORT_ASSERT_ADDR     WF_PLE_TOP_PLE_FUNC_CTRL_0_ADDR
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MACTX_ABORT_ASSERT_MASK     0x00000200                // MACTX_ABORT_ASSERT[9]
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MACTX_ABORT_ASSERT_SHFT     9
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MACTX_REQ_ASSERT_ADDR       WF_PLE_TOP_PLE_FUNC_CTRL_0_ADDR
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MACTX_REQ_ASSERT_MASK       0x00000100                // MACTX_REQ_ASSERT[8]
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MACTX_REQ_ASSERT_SHFT       8
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_DIS_STA_RLS_TO_1F_ADDR      WF_PLE_TOP_PLE_FUNC_CTRL_0_ADDR
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_DIS_STA_RLS_TO_1F_MASK      0x00000040                // DIS_STA_RLS_TO_1F[6]
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_DIS_STA_RLS_TO_1F_SHFT      6
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_ACK_LMAC_NO_FID_ADD_ADDR    WF_PLE_TOP_PLE_FUNC_CTRL_0_ADDR
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_ACK_LMAC_NO_FID_ADD_MASK    0x00000010                // ACK_LMAC_NO_FID_ADD[4]
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_ACK_LMAC_NO_FID_ADD_SHFT    4
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MPDU_DONE_CNT_IN_NO_ADD_ADDR WF_PLE_TOP_PLE_FUNC_CTRL_0_ADDR
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MPDU_DONE_CNT_IN_NO_ADD_MASK 0x00000008                // MPDU_DONE_CNT_IN_NO_ADD[3]
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MPDU_DONE_CNT_IN_NO_ADD_SHFT 3
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MPDU_DONE_CNT_IN_NO_TX_REQ_ADDR WF_PLE_TOP_PLE_FUNC_CTRL_0_ADDR
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MPDU_DONE_CNT_IN_NO_TX_REQ_MASK 0x00000004                // MPDU_DONE_CNT_IN_NO_TX_REQ[2]
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MPDU_DONE_CNT_IN_NO_TX_REQ_SHFT 2
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MACTX_ABORT_DEASSERT_ADDR   WF_PLE_TOP_PLE_FUNC_CTRL_0_ADDR
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MACTX_ABORT_DEASSERT_MASK   0x00000002                // MACTX_ABORT_DEASSERT[1]
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MACTX_ABORT_DEASSERT_SHFT   1
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MACTX_REQ_DEASSERT_ADDR     WF_PLE_TOP_PLE_FUNC_CTRL_0_ADDR
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MACTX_REQ_DEASSERT_MASK     0x00000001                // MACTX_REQ_DEASSERT[0]
#define WF_PLE_TOP_PLE_FUNC_CTRL_0_MACTX_REQ_DEASSERT_SHFT     0

/* =====================================================================================

  ---PLE_FUNC_CTRL_1 (0x820C0000 + 0x288)---

    RESERVED0[21..0]             - (RO) Reserved bits
    PREDL_REQ_NORMAL_PRI[22]     - (RW) Pre-download TXP request priority control
    RESERVED23[31..23]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_PLE_FUNC_CTRL_1_PREDL_REQ_NORMAL_PRI_ADDR   WF_PLE_TOP_PLE_FUNC_CTRL_1_ADDR
#define WF_PLE_TOP_PLE_FUNC_CTRL_1_PREDL_REQ_NORMAL_PRI_MASK   0x00400000                // PREDL_REQ_NORMAL_PRI[22]
#define WF_PLE_TOP_PLE_FUNC_CTRL_1_PREDL_REQ_NORMAL_PRI_SHFT   22

/* =====================================================================================

  ---PORT_SER_CTRL (0x820C0000 + 0x290)---

    EN_HIF_PORT_ALLOC_BLOCKING[0] - (RW) Enable HIF/AMSDU port allocate operation blocking.
    EN_CPU_PORT_ALLOC_BLOCKING[1] - (RW) Enable CPU port allocate operation blocking.
    EN_WF_PORT_ALLOC_BLOCKING[2] - (RW) Enable LMAC port allocate operation blocking.
    RESERVED3[7..3]              - (RO) Reserved bits
    EN_HIF_PORT_D_OPR_BLOCKING[8] - (RW) Enable HIF/AMSDU/MDP/PREDL port data operation blocking.
    EN_CPU_PORT_D_OPR_BLOCKING[9] - (RW) Enable CPU port data operation blocking.
    EN_WF_PORT_D_OPR_BLOCKING[10] - (RW) Enable LMAC port data operation blocking.
    RESERVED11[15..11]           - (RO) Reserved bits
    EN_HIF_PORT_Q_OPR_BLOCKING[16] - (RW) Enable HIF/AMSDU port queue operation blocking.
    EN_CPU_PORT_Q_OPR_BLOCKING[17] - (RW) Enable CPU port queue operation blocking.
    EN_WF_PORT_Q_OPR_BLOCKING[18] - (RW) Enable LMAC port queue operation blocking.
    RESERVED19[31..19]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_PORT_SER_CTRL_EN_WF_PORT_Q_OPR_BLOCKING_ADDR WF_PLE_TOP_PORT_SER_CTRL_ADDR
#define WF_PLE_TOP_PORT_SER_CTRL_EN_WF_PORT_Q_OPR_BLOCKING_MASK 0x00040000                // EN_WF_PORT_Q_OPR_BLOCKING[18]
#define WF_PLE_TOP_PORT_SER_CTRL_EN_WF_PORT_Q_OPR_BLOCKING_SHFT 18
#define WF_PLE_TOP_PORT_SER_CTRL_EN_CPU_PORT_Q_OPR_BLOCKING_ADDR WF_PLE_TOP_PORT_SER_CTRL_ADDR
#define WF_PLE_TOP_PORT_SER_CTRL_EN_CPU_PORT_Q_OPR_BLOCKING_MASK 0x00020000                // EN_CPU_PORT_Q_OPR_BLOCKING[17]
#define WF_PLE_TOP_PORT_SER_CTRL_EN_CPU_PORT_Q_OPR_BLOCKING_SHFT 17
#define WF_PLE_TOP_PORT_SER_CTRL_EN_HIF_PORT_Q_OPR_BLOCKING_ADDR WF_PLE_TOP_PORT_SER_CTRL_ADDR
#define WF_PLE_TOP_PORT_SER_CTRL_EN_HIF_PORT_Q_OPR_BLOCKING_MASK 0x00010000                // EN_HIF_PORT_Q_OPR_BLOCKING[16]
#define WF_PLE_TOP_PORT_SER_CTRL_EN_HIF_PORT_Q_OPR_BLOCKING_SHFT 16
#define WF_PLE_TOP_PORT_SER_CTRL_EN_WF_PORT_D_OPR_BLOCKING_ADDR WF_PLE_TOP_PORT_SER_CTRL_ADDR
#define WF_PLE_TOP_PORT_SER_CTRL_EN_WF_PORT_D_OPR_BLOCKING_MASK 0x00000400                // EN_WF_PORT_D_OPR_BLOCKING[10]
#define WF_PLE_TOP_PORT_SER_CTRL_EN_WF_PORT_D_OPR_BLOCKING_SHFT 10
#define WF_PLE_TOP_PORT_SER_CTRL_EN_CPU_PORT_D_OPR_BLOCKING_ADDR WF_PLE_TOP_PORT_SER_CTRL_ADDR
#define WF_PLE_TOP_PORT_SER_CTRL_EN_CPU_PORT_D_OPR_BLOCKING_MASK 0x00000200                // EN_CPU_PORT_D_OPR_BLOCKING[9]
#define WF_PLE_TOP_PORT_SER_CTRL_EN_CPU_PORT_D_OPR_BLOCKING_SHFT 9
#define WF_PLE_TOP_PORT_SER_CTRL_EN_HIF_PORT_D_OPR_BLOCKING_ADDR WF_PLE_TOP_PORT_SER_CTRL_ADDR
#define WF_PLE_TOP_PORT_SER_CTRL_EN_HIF_PORT_D_OPR_BLOCKING_MASK 0x00000100                // EN_HIF_PORT_D_OPR_BLOCKING[8]
#define WF_PLE_TOP_PORT_SER_CTRL_EN_HIF_PORT_D_OPR_BLOCKING_SHFT 8
#define WF_PLE_TOP_PORT_SER_CTRL_EN_WF_PORT_ALLOC_BLOCKING_ADDR WF_PLE_TOP_PORT_SER_CTRL_ADDR
#define WF_PLE_TOP_PORT_SER_CTRL_EN_WF_PORT_ALLOC_BLOCKING_MASK 0x00000004                // EN_WF_PORT_ALLOC_BLOCKING[2]
#define WF_PLE_TOP_PORT_SER_CTRL_EN_WF_PORT_ALLOC_BLOCKING_SHFT 2
#define WF_PLE_TOP_PORT_SER_CTRL_EN_CPU_PORT_ALLOC_BLOCKING_ADDR WF_PLE_TOP_PORT_SER_CTRL_ADDR
#define WF_PLE_TOP_PORT_SER_CTRL_EN_CPU_PORT_ALLOC_BLOCKING_MASK 0x00000002                // EN_CPU_PORT_ALLOC_BLOCKING[1]
#define WF_PLE_TOP_PORT_SER_CTRL_EN_CPU_PORT_ALLOC_BLOCKING_SHFT 1
#define WF_PLE_TOP_PORT_SER_CTRL_EN_HIF_PORT_ALLOC_BLOCKING_ADDR WF_PLE_TOP_PORT_SER_CTRL_ADDR
#define WF_PLE_TOP_PORT_SER_CTRL_EN_HIF_PORT_ALLOC_BLOCKING_MASK 0x00000001                // EN_HIF_PORT_ALLOC_BLOCKING[0]
#define WF_PLE_TOP_PORT_SER_CTRL_EN_HIF_PORT_ALLOC_BLOCKING_SHFT 0

/* =====================================================================================

  ---MACTX_SER_CTRL (0x820C0000 + 0x294)---

    EN_MACTX_G0_BLOCKING[0]      - (RW) Enable MACTX group  0 operation blocking.
    RESERVED1[7..1]              - (RO) Reserved bits
    EN_MACTX_G1_BLOCKING[8]      - (RW) Enable MACTX group  1 operation blocking.
    RESERVED9[15..9]             - (RO) Reserved bits
    EN_MACTX_G2_BLOCKING[16]     - (RW) Enable MACTX group 2 operation blocking.
    RESERVED17[23..17]           - (RO) Reserved bits
    EN_MACTX_G3_BLOCKING[24]     - (RW) Enable MACTX group 3 operation blocking.
    RESERVED25[31..25]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_MACTX_SER_CTRL_EN_MACTX_G3_BLOCKING_ADDR    WF_PLE_TOP_MACTX_SER_CTRL_ADDR
#define WF_PLE_TOP_MACTX_SER_CTRL_EN_MACTX_G3_BLOCKING_MASK    0x01000000                // EN_MACTX_G3_BLOCKING[24]
#define WF_PLE_TOP_MACTX_SER_CTRL_EN_MACTX_G3_BLOCKING_SHFT    24
#define WF_PLE_TOP_MACTX_SER_CTRL_EN_MACTX_G2_BLOCKING_ADDR    WF_PLE_TOP_MACTX_SER_CTRL_ADDR
#define WF_PLE_TOP_MACTX_SER_CTRL_EN_MACTX_G2_BLOCKING_MASK    0x00010000                // EN_MACTX_G2_BLOCKING[16]
#define WF_PLE_TOP_MACTX_SER_CTRL_EN_MACTX_G2_BLOCKING_SHFT    16
#define WF_PLE_TOP_MACTX_SER_CTRL_EN_MACTX_G1_BLOCKING_ADDR    WF_PLE_TOP_MACTX_SER_CTRL_ADDR
#define WF_PLE_TOP_MACTX_SER_CTRL_EN_MACTX_G1_BLOCKING_MASK    0x00000100                // EN_MACTX_G1_BLOCKING[8]
#define WF_PLE_TOP_MACTX_SER_CTRL_EN_MACTX_G1_BLOCKING_SHFT    8
#define WF_PLE_TOP_MACTX_SER_CTRL_EN_MACTX_G0_BLOCKING_ADDR    WF_PLE_TOP_MACTX_SER_CTRL_ADDR
#define WF_PLE_TOP_MACTX_SER_CTRL_EN_MACTX_G0_BLOCKING_MASK    0x00000001                // EN_MACTX_G0_BLOCKING[0]
#define WF_PLE_TOP_MACTX_SER_CTRL_EN_MACTX_G0_BLOCKING_SHFT    0

/* =====================================================================================

  ---DRR_SER_CTRL (0x820C0000 + 0x298)---

    EN_DRR_CHARGE_BLOCKING[0]    - (RW) Enable DRR charge operation blocking.
    RESERVED1[3..1]              - (RO) Reserved bits
    EN_DRR_SRCH_0_BLOCKING[4]    - (RW) Enable DRR search 0 operation blocking.
    EN_DRR_SRCH_1_BLOCKING[5]    - (RW) Enable DRR search 1 operation blocking.
    RESERVED6[7..6]              - (RO) Reserved bits
    EN_DRR_RDG_0_BLOCKING[8]     - (RW) Enable DRR RDG 0 operation blocking.
    EN_DRR_RDG_1_BLOCKING[9]     - (RW) Enable DRR RDG 1 operation blocking.
    RESERVED10[31..10]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_DRR_SER_CTRL_EN_DRR_RDG_1_BLOCKING_ADDR     WF_PLE_TOP_DRR_SER_CTRL_ADDR
#define WF_PLE_TOP_DRR_SER_CTRL_EN_DRR_RDG_1_BLOCKING_MASK     0x00000200                // EN_DRR_RDG_1_BLOCKING[9]
#define WF_PLE_TOP_DRR_SER_CTRL_EN_DRR_RDG_1_BLOCKING_SHFT     9
#define WF_PLE_TOP_DRR_SER_CTRL_EN_DRR_RDG_0_BLOCKING_ADDR     WF_PLE_TOP_DRR_SER_CTRL_ADDR
#define WF_PLE_TOP_DRR_SER_CTRL_EN_DRR_RDG_0_BLOCKING_MASK     0x00000100                // EN_DRR_RDG_0_BLOCKING[8]
#define WF_PLE_TOP_DRR_SER_CTRL_EN_DRR_RDG_0_BLOCKING_SHFT     8
#define WF_PLE_TOP_DRR_SER_CTRL_EN_DRR_SRCH_1_BLOCKING_ADDR    WF_PLE_TOP_DRR_SER_CTRL_ADDR
#define WF_PLE_TOP_DRR_SER_CTRL_EN_DRR_SRCH_1_BLOCKING_MASK    0x00000020                // EN_DRR_SRCH_1_BLOCKING[5]
#define WF_PLE_TOP_DRR_SER_CTRL_EN_DRR_SRCH_1_BLOCKING_SHFT    5
#define WF_PLE_TOP_DRR_SER_CTRL_EN_DRR_SRCH_0_BLOCKING_ADDR    WF_PLE_TOP_DRR_SER_CTRL_ADDR
#define WF_PLE_TOP_DRR_SER_CTRL_EN_DRR_SRCH_0_BLOCKING_MASK    0x00000010                // EN_DRR_SRCH_0_BLOCKING[4]
#define WF_PLE_TOP_DRR_SER_CTRL_EN_DRR_SRCH_0_BLOCKING_SHFT    4
#define WF_PLE_TOP_DRR_SER_CTRL_EN_DRR_CHARGE_BLOCKING_ADDR    WF_PLE_TOP_DRR_SER_CTRL_ADDR
#define WF_PLE_TOP_DRR_SER_CTRL_EN_DRR_CHARGE_BLOCKING_MASK    0x00000001                // EN_DRR_CHARGE_BLOCKING[0]
#define WF_PLE_TOP_DRR_SER_CTRL_EN_DRR_CHARGE_BLOCKING_SHFT    0

/* =====================================================================================

  ---INT_N9_STS (0x820C0000 + 0x300)---

    CPU_Q0_NE[0]                 - (W1C) CPU queue 0 not empty interrupt status
    CPU_Q1_NE[1]                 - (W1C) CPU queue 1 not empty interrupt status
    CPU_Q2_NE[2]                 - (W1C) CPU queue 2 not empty interrupt status
    CPU_Q3_NE[3]                 - (W1C) CPU queue 3 not empty interrupt status
    RESERVED4[12..4]             - (RO) Reserved bits
    ERROR_INT[13]                - (RO) Error condition interrupt status, define by 0x28
    ERROR_INT_1[14]              - (RO) Error condition interrupt status 1, define by 0xd8
    AMSDU_ERROR_INT[15]          - (RO) HW AMSDU Error condition interrupt status, define by 0x1028
    DATA_TOGGLE[16]              - (W1C) Interrupt status of data toggle of N9 toggle register (0xf0)
    RESERVED17[17]               - (RO) Reserved bits
    UMAC_SYSRAM_OUTRAN_ERROR_INT[18] - (W1C) Interrupt status of UMAC SYSRAM out range error
    RESERVED19[19]               - (RO) Reserved bits
    AC_NONEMPTY_INT[20]          - (W1C) AC queue empty fail interrupt status
    AC_EMPTY_INT[21]             - (W1C) AC queue empty raise interrupt status
    AC_ENQ_LMAC_INT[22]          - (W1C) AC enqueue interrupt status
    RESERVED23[23]               - (RO) Reserved bits
    DBDC0_NONEMPTY_INT[24]       - (W1C) DBDC0 queue empty fail interrupt status
    DBDC0_EMPTY_INT[25]          - (W1C) DBDC0 queue empty raise interrupt status
    DBDC0_ENQ_LMAC_INT[26]       - (W1C) DBDC0 enqueue interrupt status
    RESERVED27[27]               - (RO) Reserved bits
    DBDC1_NONEMPTY_INT[28]       - (W1C) DBDC1 queue empty fail interrupt status
    DBDC1_EMPTY_INT[29]          - (W1C) DBDC1 queue empty raise interrupt status
    DBDC1_ENQ_LMAC_INT[30]       - (W1C) DBDC1 enqueue interrupt status
    RESERVED31[31]               - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_INT_N9_STS_DBDC1_ENQ_LMAC_INT_ADDR          WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_DBDC1_ENQ_LMAC_INT_MASK          0x40000000                // DBDC1_ENQ_LMAC_INT[30]
#define WF_PLE_TOP_INT_N9_STS_DBDC1_ENQ_LMAC_INT_SHFT          30
#define WF_PLE_TOP_INT_N9_STS_DBDC1_EMPTY_INT_ADDR             WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_DBDC1_EMPTY_INT_MASK             0x20000000                // DBDC1_EMPTY_INT[29]
#define WF_PLE_TOP_INT_N9_STS_DBDC1_EMPTY_INT_SHFT             29
#define WF_PLE_TOP_INT_N9_STS_DBDC1_NONEMPTY_INT_ADDR          WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_DBDC1_NONEMPTY_INT_MASK          0x10000000                // DBDC1_NONEMPTY_INT[28]
#define WF_PLE_TOP_INT_N9_STS_DBDC1_NONEMPTY_INT_SHFT          28
#define WF_PLE_TOP_INT_N9_STS_DBDC0_ENQ_LMAC_INT_ADDR          WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_DBDC0_ENQ_LMAC_INT_MASK          0x04000000                // DBDC0_ENQ_LMAC_INT[26]
#define WF_PLE_TOP_INT_N9_STS_DBDC0_ENQ_LMAC_INT_SHFT          26
#define WF_PLE_TOP_INT_N9_STS_DBDC0_EMPTY_INT_ADDR             WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_DBDC0_EMPTY_INT_MASK             0x02000000                // DBDC0_EMPTY_INT[25]
#define WF_PLE_TOP_INT_N9_STS_DBDC0_EMPTY_INT_SHFT             25
#define WF_PLE_TOP_INT_N9_STS_DBDC0_NONEMPTY_INT_ADDR          WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_DBDC0_NONEMPTY_INT_MASK          0x01000000                // DBDC0_NONEMPTY_INT[24]
#define WF_PLE_TOP_INT_N9_STS_DBDC0_NONEMPTY_INT_SHFT          24
#define WF_PLE_TOP_INT_N9_STS_AC_ENQ_LMAC_INT_ADDR             WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_AC_ENQ_LMAC_INT_MASK             0x00400000                // AC_ENQ_LMAC_INT[22]
#define WF_PLE_TOP_INT_N9_STS_AC_ENQ_LMAC_INT_SHFT             22
#define WF_PLE_TOP_INT_N9_STS_AC_EMPTY_INT_ADDR                WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_AC_EMPTY_INT_MASK                0x00200000                // AC_EMPTY_INT[21]
#define WF_PLE_TOP_INT_N9_STS_AC_EMPTY_INT_SHFT                21
#define WF_PLE_TOP_INT_N9_STS_AC_NONEMPTY_INT_ADDR             WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_AC_NONEMPTY_INT_MASK             0x00100000                // AC_NONEMPTY_INT[20]
#define WF_PLE_TOP_INT_N9_STS_AC_NONEMPTY_INT_SHFT             20
#define WF_PLE_TOP_INT_N9_STS_UMAC_SYSRAM_OUTRAN_ERROR_INT_ADDR WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_UMAC_SYSRAM_OUTRAN_ERROR_INT_MASK 0x00040000                // UMAC_SYSRAM_OUTRAN_ERROR_INT[18]
#define WF_PLE_TOP_INT_N9_STS_UMAC_SYSRAM_OUTRAN_ERROR_INT_SHFT 18
#define WF_PLE_TOP_INT_N9_STS_DATA_TOGGLE_ADDR                 WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_DATA_TOGGLE_MASK                 0x00010000                // DATA_TOGGLE[16]
#define WF_PLE_TOP_INT_N9_STS_DATA_TOGGLE_SHFT                 16
#define WF_PLE_TOP_INT_N9_STS_AMSDU_ERROR_INT_ADDR             WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_AMSDU_ERROR_INT_MASK             0x00008000                // AMSDU_ERROR_INT[15]
#define WF_PLE_TOP_INT_N9_STS_AMSDU_ERROR_INT_SHFT             15
#define WF_PLE_TOP_INT_N9_STS_ERROR_INT_1_ADDR                 WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_ERROR_INT_1_MASK                 0x00004000                // ERROR_INT_1[14]
#define WF_PLE_TOP_INT_N9_STS_ERROR_INT_1_SHFT                 14
#define WF_PLE_TOP_INT_N9_STS_ERROR_INT_ADDR                   WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_ERROR_INT_MASK                   0x00002000                // ERROR_INT[13]
#define WF_PLE_TOP_INT_N9_STS_ERROR_INT_SHFT                   13
#define WF_PLE_TOP_INT_N9_STS_CPU_Q3_NE_ADDR                   WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_CPU_Q3_NE_MASK                   0x00000008                // CPU_Q3_NE[3]
#define WF_PLE_TOP_INT_N9_STS_CPU_Q3_NE_SHFT                   3
#define WF_PLE_TOP_INT_N9_STS_CPU_Q2_NE_ADDR                   WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_CPU_Q2_NE_MASK                   0x00000004                // CPU_Q2_NE[2]
#define WF_PLE_TOP_INT_N9_STS_CPU_Q2_NE_SHFT                   2
#define WF_PLE_TOP_INT_N9_STS_CPU_Q1_NE_ADDR                   WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_CPU_Q1_NE_MASK                   0x00000002                // CPU_Q1_NE[1]
#define WF_PLE_TOP_INT_N9_STS_CPU_Q1_NE_SHFT                   1
#define WF_PLE_TOP_INT_N9_STS_CPU_Q0_NE_ADDR                   WF_PLE_TOP_INT_N9_STS_ADDR
#define WF_PLE_TOP_INT_N9_STS_CPU_Q0_NE_MASK                   0x00000001                // CPU_Q0_NE[0]
#define WF_PLE_TOP_INT_N9_STS_CPU_Q0_NE_SHFT                   0

/* =====================================================================================

  ---INT_N9_ERR_STS (0x820C0000 + 0x304)---

    Q_CMD_ERR_P0[0]              - (W1C) Queue command error interrupt status of port 0. Avoid unclear error flag,  please clear flag when logic reset.
    Q_CMD_ERR_P1[1]              - (W1C) Queue command error interrupt status of port 1. Avoid unclear error flag,  please clear flag when logic reset.
    Q_CMD_ERR_P2[2]              - (W1C) Queue command error interrupt status of port 2. Avoid unclear error flag,  please clear flag when logic reset.
    PAGE_UDF_P0[3]               - (W1C) Page underflow interrupt status of port 0. Avoid unclear error flag,  please clear flag when logic reset.
    PAGE_UDF_P1[4]               - (W1C) Page underflow interrupt status of port 1. Avoid unclear error flag,  please clear flag when logic reset.
    PAGE_UDF_P2[5]               - (W1C) Page underflow interrupt status of port 2. Avoid unclear error flag,  please clear flag when logic reset.
    DOUBLE_RLS_ERR[6]            - (W1C) Double release error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    MDP_D_OPER_ERR[7]            - (W1C) MDP data operation error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    MDP_HANG_ERR[8]              - (W1C) MDP FSM Hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    RESERVED9[9]                 - (RO) Reserved bits
    DATA_OPER_ERR_P0[10]         - (W1C) Data operation error of port 0. Avoid unclear error flag,  please clear flag when logic reset.
    DATA_OPER_ERR_P1[11]         - (W1C) Data operation error of port 1. Avoid unclear error flag,  please clear flag when logic reset.
    DATA_OPER_ERR_P2[12]         - (W1C) Data operation error of port 2. Avoid unclear error flag,  please clear flag when logic reset.
    FL_HANG_ERR[13]              - (W1C) Frame link FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    PL_HANG_ERR[14]              - (W1C) Page link FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    HIF_HANG_ERR[15]             - (W1C) HIF port FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    CPU_HANG_ERR[16]             - (W1C) CPU port FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    LMAC_HANG_ERR[17]            - (W1C) LMAC port FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    FREE_HEAD_TAIL_ERR[18]       - (W1C) Free head/tail error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    QSTRUCT_ERR[19]              - (W1C) Queue struct data error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    BN0_MACTX_HANG_ERR[20]       - (W1C) BN0 MACTX Ctrl FSM Hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    BN1_MACTX_HANG_ERR[21]       - (W1C) BN1 MACTX Ctrl FSM Hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    BN0_TXCMD_HANG_ERR[22]       - (W1C) BN0 TXCMD Ctrl FSM Hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    BN1_TXCMD_HANG_ERR[23]       - (W1C) BN1 TXCMD Ctrl FSM Hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    DRR_SRCH_DBDC0_ERR[24]       - (W1C) DRR DBDC0 sta serach error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    DRR_SRCH_DBDC1_ERR[25]       - (W1C) DRR DBDC1 sta serach error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    DRR_FL_ERR[26]               - (W1C) DRR forward link access error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    DRR_BL_ERR[27]               - (W1C) DRR backward link access error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    DRR_RL_ERR[28]               - (W1C) DRR relay link access error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    DRR_CHRG_STA_ERR[29]         - (W1C) DRR charge wlanid error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    DRR_STA_WLANID_ERR[30]       - (W1C) DRR wlanid error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    DRR_STA_WMMID_ERR[31]        - (W1C) DRR wmmid error interrupt. Avoid unclear error flag,  please clear flag when logic reset.

 =====================================================================================*/
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_STA_WMMID_ERR_ADDR       WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_STA_WMMID_ERR_MASK       0x80000000                // DRR_STA_WMMID_ERR[31]
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_STA_WMMID_ERR_SHFT       31
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_STA_WLANID_ERR_ADDR      WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_STA_WLANID_ERR_MASK      0x40000000                // DRR_STA_WLANID_ERR[30]
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_STA_WLANID_ERR_SHFT      30
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_CHRG_STA_ERR_ADDR        WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_CHRG_STA_ERR_MASK        0x20000000                // DRR_CHRG_STA_ERR[29]
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_CHRG_STA_ERR_SHFT        29
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_RL_ERR_ADDR              WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_RL_ERR_MASK              0x10000000                // DRR_RL_ERR[28]
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_RL_ERR_SHFT              28
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_BL_ERR_ADDR              WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_BL_ERR_MASK              0x08000000                // DRR_BL_ERR[27]
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_BL_ERR_SHFT              27
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_FL_ERR_ADDR              WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_FL_ERR_MASK              0x04000000                // DRR_FL_ERR[26]
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_FL_ERR_SHFT              26
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_SRCH_DBDC1_ERR_ADDR      WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_SRCH_DBDC1_ERR_MASK      0x02000000                // DRR_SRCH_DBDC1_ERR[25]
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_SRCH_DBDC1_ERR_SHFT      25
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_SRCH_DBDC0_ERR_ADDR      WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_SRCH_DBDC0_ERR_MASK      0x01000000                // DRR_SRCH_DBDC0_ERR[24]
#define WF_PLE_TOP_INT_N9_ERR_STS_DRR_SRCH_DBDC0_ERR_SHFT      24
#define WF_PLE_TOP_INT_N9_ERR_STS_BN1_TXCMD_HANG_ERR_ADDR      WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_BN1_TXCMD_HANG_ERR_MASK      0x00800000                // BN1_TXCMD_HANG_ERR[23]
#define WF_PLE_TOP_INT_N9_ERR_STS_BN1_TXCMD_HANG_ERR_SHFT      23
#define WF_PLE_TOP_INT_N9_ERR_STS_BN0_TXCMD_HANG_ERR_ADDR      WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_BN0_TXCMD_HANG_ERR_MASK      0x00400000                // BN0_TXCMD_HANG_ERR[22]
#define WF_PLE_TOP_INT_N9_ERR_STS_BN0_TXCMD_HANG_ERR_SHFT      22
#define WF_PLE_TOP_INT_N9_ERR_STS_BN1_MACTX_HANG_ERR_ADDR      WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_BN1_MACTX_HANG_ERR_MASK      0x00200000                // BN1_MACTX_HANG_ERR[21]
#define WF_PLE_TOP_INT_N9_ERR_STS_BN1_MACTX_HANG_ERR_SHFT      21
#define WF_PLE_TOP_INT_N9_ERR_STS_BN0_MACTX_HANG_ERR_ADDR      WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_BN0_MACTX_HANG_ERR_MASK      0x00100000                // BN0_MACTX_HANG_ERR[20]
#define WF_PLE_TOP_INT_N9_ERR_STS_BN0_MACTX_HANG_ERR_SHFT      20
#define WF_PLE_TOP_INT_N9_ERR_STS_QSTRUCT_ERR_ADDR             WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_QSTRUCT_ERR_MASK             0x00080000                // QSTRUCT_ERR[19]
#define WF_PLE_TOP_INT_N9_ERR_STS_QSTRUCT_ERR_SHFT             19
#define WF_PLE_TOP_INT_N9_ERR_STS_FREE_HEAD_TAIL_ERR_ADDR      WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_FREE_HEAD_TAIL_ERR_MASK      0x00040000                // FREE_HEAD_TAIL_ERR[18]
#define WF_PLE_TOP_INT_N9_ERR_STS_FREE_HEAD_TAIL_ERR_SHFT      18
#define WF_PLE_TOP_INT_N9_ERR_STS_LMAC_HANG_ERR_ADDR           WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_LMAC_HANG_ERR_MASK           0x00020000                // LMAC_HANG_ERR[17]
#define WF_PLE_TOP_INT_N9_ERR_STS_LMAC_HANG_ERR_SHFT           17
#define WF_PLE_TOP_INT_N9_ERR_STS_CPU_HANG_ERR_ADDR            WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_CPU_HANG_ERR_MASK            0x00010000                // CPU_HANG_ERR[16]
#define WF_PLE_TOP_INT_N9_ERR_STS_CPU_HANG_ERR_SHFT            16
#define WF_PLE_TOP_INT_N9_ERR_STS_HIF_HANG_ERR_ADDR            WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_HIF_HANG_ERR_MASK            0x00008000                // HIF_HANG_ERR[15]
#define WF_PLE_TOP_INT_N9_ERR_STS_HIF_HANG_ERR_SHFT            15
#define WF_PLE_TOP_INT_N9_ERR_STS_PL_HANG_ERR_ADDR             WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_PL_HANG_ERR_MASK             0x00004000                // PL_HANG_ERR[14]
#define WF_PLE_TOP_INT_N9_ERR_STS_PL_HANG_ERR_SHFT             14
#define WF_PLE_TOP_INT_N9_ERR_STS_FL_HANG_ERR_ADDR             WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_FL_HANG_ERR_MASK             0x00002000                // FL_HANG_ERR[13]
#define WF_PLE_TOP_INT_N9_ERR_STS_FL_HANG_ERR_SHFT             13
#define WF_PLE_TOP_INT_N9_ERR_STS_DATA_OPER_ERR_P2_ADDR        WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_DATA_OPER_ERR_P2_MASK        0x00001000                // DATA_OPER_ERR_P2[12]
#define WF_PLE_TOP_INT_N9_ERR_STS_DATA_OPER_ERR_P2_SHFT        12
#define WF_PLE_TOP_INT_N9_ERR_STS_DATA_OPER_ERR_P1_ADDR        WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_DATA_OPER_ERR_P1_MASK        0x00000800                // DATA_OPER_ERR_P1[11]
#define WF_PLE_TOP_INT_N9_ERR_STS_DATA_OPER_ERR_P1_SHFT        11
#define WF_PLE_TOP_INT_N9_ERR_STS_DATA_OPER_ERR_P0_ADDR        WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_DATA_OPER_ERR_P0_MASK        0x00000400                // DATA_OPER_ERR_P0[10]
#define WF_PLE_TOP_INT_N9_ERR_STS_DATA_OPER_ERR_P0_SHFT        10
#define WF_PLE_TOP_INT_N9_ERR_STS_MDP_HANG_ERR_ADDR            WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_MDP_HANG_ERR_MASK            0x00000100                // MDP_HANG_ERR[8]
#define WF_PLE_TOP_INT_N9_ERR_STS_MDP_HANG_ERR_SHFT            8
#define WF_PLE_TOP_INT_N9_ERR_STS_MDP_D_OPER_ERR_ADDR          WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_MDP_D_OPER_ERR_MASK          0x00000080                // MDP_D_OPER_ERR[7]
#define WF_PLE_TOP_INT_N9_ERR_STS_MDP_D_OPER_ERR_SHFT          7
#define WF_PLE_TOP_INT_N9_ERR_STS_DOUBLE_RLS_ERR_ADDR          WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_DOUBLE_RLS_ERR_MASK          0x00000040                // DOUBLE_RLS_ERR[6]
#define WF_PLE_TOP_INT_N9_ERR_STS_DOUBLE_RLS_ERR_SHFT          6
#define WF_PLE_TOP_INT_N9_ERR_STS_PAGE_UDF_P2_ADDR             WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_PAGE_UDF_P2_MASK             0x00000020                // PAGE_UDF_P2[5]
#define WF_PLE_TOP_INT_N9_ERR_STS_PAGE_UDF_P2_SHFT             5
#define WF_PLE_TOP_INT_N9_ERR_STS_PAGE_UDF_P1_ADDR             WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_PAGE_UDF_P1_MASK             0x00000010                // PAGE_UDF_P1[4]
#define WF_PLE_TOP_INT_N9_ERR_STS_PAGE_UDF_P1_SHFT             4
#define WF_PLE_TOP_INT_N9_ERR_STS_PAGE_UDF_P0_ADDR             WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_PAGE_UDF_P0_MASK             0x00000008                // PAGE_UDF_P0[3]
#define WF_PLE_TOP_INT_N9_ERR_STS_PAGE_UDF_P0_SHFT             3
#define WF_PLE_TOP_INT_N9_ERR_STS_Q_CMD_ERR_P2_ADDR            WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_Q_CMD_ERR_P2_MASK            0x00000004                // Q_CMD_ERR_P2[2]
#define WF_PLE_TOP_INT_N9_ERR_STS_Q_CMD_ERR_P2_SHFT            2
#define WF_PLE_TOP_INT_N9_ERR_STS_Q_CMD_ERR_P1_ADDR            WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_Q_CMD_ERR_P1_MASK            0x00000002                // Q_CMD_ERR_P1[1]
#define WF_PLE_TOP_INT_N9_ERR_STS_Q_CMD_ERR_P1_SHFT            1
#define WF_PLE_TOP_INT_N9_ERR_STS_Q_CMD_ERR_P0_ADDR            WF_PLE_TOP_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_Q_CMD_ERR_P0_MASK            0x00000001                // Q_CMD_ERR_P0[0]
#define WF_PLE_TOP_INT_N9_ERR_STS_Q_CMD_ERR_P0_SHFT            0

/* =====================================================================================

  ---INT_N9_ERR_STS_1 (0x820C0000 + 0x308)---

    BN0_MDP_TDP_HANG_ERR[0]      - (W1C) BN0 MDP TDP FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    MDP_RDP_HANG_ERR[1]          - (W1C) MDP RDP FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    BN0_MDP_TIOC_HANG_ERR[2]     - (W1C) BN0 MDP TIOC FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    BN0_MDP_RIOC_HANG_ERR[3]     - (W1C) BN0 MDP RIOC FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    PF_HANG_ERR[4]               - (W1C) PF FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    SEC0_HANG_ERR[5]             - (W1C) SEC 0 FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    SEC1_HANG_ERR[6]             - (W1C) SEC 1 FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    BN1_MDP_TDP_HANG_ERR[7]      - (W1C) BN1 MDP TDP FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    BN1_MDP_TIOC_HANG_ERR[8]     - (W1C) BN1 MDP TIOC FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    BN1_MDP_RIOC_HANG_ERR[9]     - (W1C) BN1 MDP RIOC FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    MDP_RDP_WB_HANG_ERR[10]      - (W1C) MDP RDP wait buffer FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    UWTBL_HANG_ERR[11]           - (W1C) UWTBL FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    BN0_RPEDL_ARB_HANG_ERR[12]   - (W1C) BN0 PREDL ARB hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    BN0_PREDL_TXCMD_HANG_ERR[13] - (W1C) BN0 PREDL TXCDM FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    BN1_RPEDL_ARB_HANG_ERR[14]   - (W1C) BN1 PREDL ARB hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    BN1_PREDL_TXCMD_HANG_ERR[15] - (W1C) BN1 PREDL TXCDM FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN1_PREDL_TXCMD_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN1_PREDL_TXCMD_HANG_ERR_MASK 0x00008000                // BN1_PREDL_TXCMD_HANG_ERR[15]
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN1_PREDL_TXCMD_HANG_ERR_SHFT 15
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN1_RPEDL_ARB_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN1_RPEDL_ARB_HANG_ERR_MASK 0x00004000                // BN1_RPEDL_ARB_HANG_ERR[14]
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN1_RPEDL_ARB_HANG_ERR_SHFT 14
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN0_PREDL_TXCMD_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN0_PREDL_TXCMD_HANG_ERR_MASK 0x00002000                // BN0_PREDL_TXCMD_HANG_ERR[13]
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN0_PREDL_TXCMD_HANG_ERR_SHFT 13
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN0_RPEDL_ARB_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN0_RPEDL_ARB_HANG_ERR_MASK 0x00001000                // BN0_RPEDL_ARB_HANG_ERR[12]
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN0_RPEDL_ARB_HANG_ERR_SHFT 12
#define WF_PLE_TOP_INT_N9_ERR_STS_1_UWTBL_HANG_ERR_ADDR        WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_1_UWTBL_HANG_ERR_MASK        0x00000800                // UWTBL_HANG_ERR[11]
#define WF_PLE_TOP_INT_N9_ERR_STS_1_UWTBL_HANG_ERR_SHFT        11
#define WF_PLE_TOP_INT_N9_ERR_STS_1_MDP_RDP_WB_HANG_ERR_ADDR   WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_1_MDP_RDP_WB_HANG_ERR_MASK   0x00000400                // MDP_RDP_WB_HANG_ERR[10]
#define WF_PLE_TOP_INT_N9_ERR_STS_1_MDP_RDP_WB_HANG_ERR_SHFT   10
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN1_MDP_RIOC_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN1_MDP_RIOC_HANG_ERR_MASK 0x00000200                // BN1_MDP_RIOC_HANG_ERR[9]
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN1_MDP_RIOC_HANG_ERR_SHFT 9
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN1_MDP_TIOC_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN1_MDP_TIOC_HANG_ERR_MASK 0x00000100                // BN1_MDP_TIOC_HANG_ERR[8]
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN1_MDP_TIOC_HANG_ERR_SHFT 8
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN1_MDP_TDP_HANG_ERR_ADDR  WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN1_MDP_TDP_HANG_ERR_MASK  0x00000080                // BN1_MDP_TDP_HANG_ERR[7]
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN1_MDP_TDP_HANG_ERR_SHFT  7
#define WF_PLE_TOP_INT_N9_ERR_STS_1_SEC1_HANG_ERR_ADDR         WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_1_SEC1_HANG_ERR_MASK         0x00000040                // SEC1_HANG_ERR[6]
#define WF_PLE_TOP_INT_N9_ERR_STS_1_SEC1_HANG_ERR_SHFT         6
#define WF_PLE_TOP_INT_N9_ERR_STS_1_SEC0_HANG_ERR_ADDR         WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_1_SEC0_HANG_ERR_MASK         0x00000020                // SEC0_HANG_ERR[5]
#define WF_PLE_TOP_INT_N9_ERR_STS_1_SEC0_HANG_ERR_SHFT         5
#define WF_PLE_TOP_INT_N9_ERR_STS_1_PF_HANG_ERR_ADDR           WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_1_PF_HANG_ERR_MASK           0x00000010                // PF_HANG_ERR[4]
#define WF_PLE_TOP_INT_N9_ERR_STS_1_PF_HANG_ERR_SHFT           4
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN0_MDP_RIOC_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN0_MDP_RIOC_HANG_ERR_MASK 0x00000008                // BN0_MDP_RIOC_HANG_ERR[3]
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN0_MDP_RIOC_HANG_ERR_SHFT 3
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN0_MDP_TIOC_HANG_ERR_ADDR WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN0_MDP_TIOC_HANG_ERR_MASK 0x00000004                // BN0_MDP_TIOC_HANG_ERR[2]
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN0_MDP_TIOC_HANG_ERR_SHFT 2
#define WF_PLE_TOP_INT_N9_ERR_STS_1_MDP_RDP_HANG_ERR_ADDR      WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_1_MDP_RDP_HANG_ERR_MASK      0x00000002                // MDP_RDP_HANG_ERR[1]
#define WF_PLE_TOP_INT_N9_ERR_STS_1_MDP_RDP_HANG_ERR_SHFT      1
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN0_MDP_TDP_HANG_ERR_ADDR  WF_PLE_TOP_INT_N9_ERR_STS_1_ADDR
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN0_MDP_TDP_HANG_ERR_MASK  0x00000001                // BN0_MDP_TDP_HANG_ERR[0]
#define WF_PLE_TOP_INT_N9_ERR_STS_1_BN0_MDP_TDP_HANG_ERR_SHFT  0

/* =====================================================================================

  ---N9_BSS_PS_INT_STS (0x820C0000 + 0x30c)---

    BSSID0_NONEMPTY_INT[0]       - (W1C) BSSID0 queue empty fall interrupt status
    BSSID1_NONEMPTY_INT[1]       - (W1C) BSSID1 queue empty fall interrupt status
    BSSID2_NONEMPTY_INT[2]       - (W1C) BSSID2 queue empty fall interrupt status
    BSSID3_NONEMPTY_INT[3]       - (W1C) BSSID3 queue empty fall interrupt status
    RESERVED4[7..4]              - (RO) Reserved bits
    BSSID0_EMPTY_INT[8]          - (W1C) BSSID0 queue empty raise interrupt status
    BSSID1_EMPTY_INT[9]          - (W1C) BSSID1 queue empty raise interrupt status
    BSSID2_EMPTY_INT[10]         - (W1C) BSSID2 queue empty raise interrupt status
    BSSID3_EMPTY_INT[11]         - (W1C) BSSID3 queue empty raise interrupt status
    RESERVED12[15..12]           - (RO) Reserved bits
    BSSID0_ENQ_LMAC_INT[16]      - (W1C) BSSID0 enqueue interrupt status
    BSSID1_ENQ_LMAC_INT[17]      - (W1C) BSSID1 enqueue interrupt status
    BSSID2_ENQ_LMAC_INT[18]      - (W1C) BSSID2 enqueue interrupt status
    BSSID3_ENQ_LMAC_INT[19]      - (W1C) BSSID3 enqueue interrupt status
    RESERVED20[31..20]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID3_ENQ_LMAC_INT_ADDR  WF_PLE_TOP_N9_BSS_PS_INT_STS_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID3_ENQ_LMAC_INT_MASK  0x00080000                // BSSID3_ENQ_LMAC_INT[19]
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID3_ENQ_LMAC_INT_SHFT  19
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID2_ENQ_LMAC_INT_ADDR  WF_PLE_TOP_N9_BSS_PS_INT_STS_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID2_ENQ_LMAC_INT_MASK  0x00040000                // BSSID2_ENQ_LMAC_INT[18]
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID2_ENQ_LMAC_INT_SHFT  18
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID1_ENQ_LMAC_INT_ADDR  WF_PLE_TOP_N9_BSS_PS_INT_STS_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID1_ENQ_LMAC_INT_MASK  0x00020000                // BSSID1_ENQ_LMAC_INT[17]
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID1_ENQ_LMAC_INT_SHFT  17
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID0_ENQ_LMAC_INT_ADDR  WF_PLE_TOP_N9_BSS_PS_INT_STS_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID0_ENQ_LMAC_INT_MASK  0x00010000                // BSSID0_ENQ_LMAC_INT[16]
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID0_ENQ_LMAC_INT_SHFT  16
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID3_EMPTY_INT_ADDR     WF_PLE_TOP_N9_BSS_PS_INT_STS_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID3_EMPTY_INT_MASK     0x00000800                // BSSID3_EMPTY_INT[11]
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID3_EMPTY_INT_SHFT     11
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID2_EMPTY_INT_ADDR     WF_PLE_TOP_N9_BSS_PS_INT_STS_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID2_EMPTY_INT_MASK     0x00000400                // BSSID2_EMPTY_INT[10]
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID2_EMPTY_INT_SHFT     10
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID1_EMPTY_INT_ADDR     WF_PLE_TOP_N9_BSS_PS_INT_STS_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID1_EMPTY_INT_MASK     0x00000200                // BSSID1_EMPTY_INT[9]
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID1_EMPTY_INT_SHFT     9
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID0_EMPTY_INT_ADDR     WF_PLE_TOP_N9_BSS_PS_INT_STS_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID0_EMPTY_INT_MASK     0x00000100                // BSSID0_EMPTY_INT[8]
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID0_EMPTY_INT_SHFT     8
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID3_NONEMPTY_INT_ADDR  WF_PLE_TOP_N9_BSS_PS_INT_STS_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID3_NONEMPTY_INT_MASK  0x00000008                // BSSID3_NONEMPTY_INT[3]
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID3_NONEMPTY_INT_SHFT  3
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID2_NONEMPTY_INT_ADDR  WF_PLE_TOP_N9_BSS_PS_INT_STS_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID2_NONEMPTY_INT_MASK  0x00000004                // BSSID2_NONEMPTY_INT[2]
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID2_NONEMPTY_INT_SHFT  2
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID1_NONEMPTY_INT_ADDR  WF_PLE_TOP_N9_BSS_PS_INT_STS_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID1_NONEMPTY_INT_MASK  0x00000002                // BSSID1_NONEMPTY_INT[1]
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID1_NONEMPTY_INT_SHFT  1
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID0_NONEMPTY_INT_ADDR  WF_PLE_TOP_N9_BSS_PS_INT_STS_ADDR
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID0_NONEMPTY_INT_MASK  0x00000001                // BSSID0_NONEMPTY_INT[0]
#define WF_PLE_TOP_N9_BSS_PS_INT_STS_BSSID0_NONEMPTY_INT_SHFT  0

/* =====================================================================================

  ---C_GET_FID_0 (0x820C0000 + 0x310)---

    GET_SRC_WLANID[9..0]         - (RW) Source WLAN ID for get frame ID.
    RESERVED10[11..10]           - (RO) Reserved bits
    GET_SRC_TGID[12]             - (RW) Source TX Group ID for get frame ID.
    RESERVED13[13]               - (RO) Reserved bits
    GET_SRC_PID[15..14]          - (RW) Source port ID for get frame ID.
    GET_FRAME_TYPE[19..16]       - (RW) GET_SUB_TYPE
    RESERVED20[23..20]           - (RO) Reserved bits
    GET_SRC_QID[30..24]          - (RW) Source Queue ID for get frame ID.
    EXECUTE[31]                  - (A0) Executes command

 =====================================================================================*/
#define WF_PLE_TOP_C_GET_FID_0_EXECUTE_ADDR                    WF_PLE_TOP_C_GET_FID_0_ADDR
#define WF_PLE_TOP_C_GET_FID_0_EXECUTE_MASK                    0x80000000                // EXECUTE[31]
#define WF_PLE_TOP_C_GET_FID_0_EXECUTE_SHFT                    31
#define WF_PLE_TOP_C_GET_FID_0_GET_SRC_QID_ADDR                WF_PLE_TOP_C_GET_FID_0_ADDR
#define WF_PLE_TOP_C_GET_FID_0_GET_SRC_QID_MASK                0x7F000000                // GET_SRC_QID[30..24]
#define WF_PLE_TOP_C_GET_FID_0_GET_SRC_QID_SHFT                24
#define WF_PLE_TOP_C_GET_FID_0_GET_FRAME_TYPE_ADDR             WF_PLE_TOP_C_GET_FID_0_ADDR
#define WF_PLE_TOP_C_GET_FID_0_GET_FRAME_TYPE_MASK             0x000F0000                // GET_FRAME_TYPE[19..16]
#define WF_PLE_TOP_C_GET_FID_0_GET_FRAME_TYPE_SHFT             16
#define WF_PLE_TOP_C_GET_FID_0_GET_SRC_PID_ADDR                WF_PLE_TOP_C_GET_FID_0_ADDR
#define WF_PLE_TOP_C_GET_FID_0_GET_SRC_PID_MASK                0x0000C000                // GET_SRC_PID[15..14]
#define WF_PLE_TOP_C_GET_FID_0_GET_SRC_PID_SHFT                14
#define WF_PLE_TOP_C_GET_FID_0_GET_SRC_TGID_ADDR               WF_PLE_TOP_C_GET_FID_0_ADDR
#define WF_PLE_TOP_C_GET_FID_0_GET_SRC_TGID_MASK               0x00001000                // GET_SRC_TGID[12]
#define WF_PLE_TOP_C_GET_FID_0_GET_SRC_TGID_SHFT               12
#define WF_PLE_TOP_C_GET_FID_0_GET_SRC_WLANID_ADDR             WF_PLE_TOP_C_GET_FID_0_ADDR
#define WF_PLE_TOP_C_GET_FID_0_GET_SRC_WLANID_MASK             0x000003FF                // GET_SRC_WLANID[9..0]
#define WF_PLE_TOP_C_GET_FID_0_GET_SRC_WLANID_SHFT             0

/* =====================================================================================

  ---C_GET_FID_1 (0x820C0000 + 0x314)---

    GET_RETURN_FID[11..0]        - (RO) Return frame ID
    RESERVED12[14..12]           - (RO) Reserved bits
    END[15]                      - (RO) Return frame ID is end FID.
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_C_GET_FID_1_END_ADDR                        WF_PLE_TOP_C_GET_FID_1_ADDR
#define WF_PLE_TOP_C_GET_FID_1_END_MASK                        0x00008000                // END[15]
#define WF_PLE_TOP_C_GET_FID_1_END_SHFT                        15
#define WF_PLE_TOP_C_GET_FID_1_GET_RETURN_FID_ADDR             WF_PLE_TOP_C_GET_FID_1_ADDR
#define WF_PLE_TOP_C_GET_FID_1_GET_RETURN_FID_MASK             0x00000FFF                // GET_RETURN_FID[11..0]
#define WF_PLE_TOP_C_GET_FID_1_GET_RETURN_FID_SHFT             0

/* =====================================================================================

  ---TO_N9_INT (0x820C0000 + 0x318)---

    CR4_CMD[30..0]               - (RW) Command for N9
    TOGGLE[31]                   - (RW) When this bit is toggled, HW will send interrupt to N9.

 =====================================================================================*/
#define WF_PLE_TOP_TO_N9_INT_TOGGLE_ADDR                       WF_PLE_TOP_TO_N9_INT_ADDR
#define WF_PLE_TOP_TO_N9_INT_TOGGLE_MASK                       0x80000000                // TOGGLE[31]
#define WF_PLE_TOP_TO_N9_INT_TOGGLE_SHFT                       31
#define WF_PLE_TOP_TO_N9_INT_CR4_CMD_ADDR                      WF_PLE_TOP_TO_N9_INT_ADDR
#define WF_PLE_TOP_TO_N9_INT_CR4_CMD_MASK                      0x7FFFFFFF                // CR4_CMD[30..0]
#define WF_PLE_TOP_TO_N9_INT_CR4_CMD_SHFT                      0

/* =====================================================================================

  ---C_EN_QUEUE_0 (0x820C0000 + 0x320)---

    DST_WLANID[9..0]             - (RW) Destination WLANID for enqueue
    RESERVED10[11..10]           - (RO) Reserved bits
    DST_TGID[12]                 - (RW) Destination TX Group ID for enqueue
    RESERVED13[13]               - (RO) Reserved bits
    DST_PID[15..14]              - (RW) Destination port ID for enqueue
    SUB_TYPE[19..16]             - (RW) Sub-type of enqueue command
    RESERVED20[22..20]           - (RO) Reserved bits
    DELAY_ENQ[23]                - (RW) Delay enqueue
    ENQ_DST_QID[30..24]          - (RW) Destination queue ID for enqueue
    EXECUTE[31]                  - (A0) Executes command

 =====================================================================================*/
#define WF_PLE_TOP_C_EN_QUEUE_0_EXECUTE_ADDR                   WF_PLE_TOP_C_EN_QUEUE_0_ADDR
#define WF_PLE_TOP_C_EN_QUEUE_0_EXECUTE_MASK                   0x80000000                // EXECUTE[31]
#define WF_PLE_TOP_C_EN_QUEUE_0_EXECUTE_SHFT                   31
#define WF_PLE_TOP_C_EN_QUEUE_0_ENQ_DST_QID_ADDR               WF_PLE_TOP_C_EN_QUEUE_0_ADDR
#define WF_PLE_TOP_C_EN_QUEUE_0_ENQ_DST_QID_MASK               0x7F000000                // ENQ_DST_QID[30..24]
#define WF_PLE_TOP_C_EN_QUEUE_0_ENQ_DST_QID_SHFT               24
#define WF_PLE_TOP_C_EN_QUEUE_0_DELAY_ENQ_ADDR                 WF_PLE_TOP_C_EN_QUEUE_0_ADDR
#define WF_PLE_TOP_C_EN_QUEUE_0_DELAY_ENQ_MASK                 0x00800000                // DELAY_ENQ[23]
#define WF_PLE_TOP_C_EN_QUEUE_0_DELAY_ENQ_SHFT                 23
#define WF_PLE_TOP_C_EN_QUEUE_0_SUB_TYPE_ADDR                  WF_PLE_TOP_C_EN_QUEUE_0_ADDR
#define WF_PLE_TOP_C_EN_QUEUE_0_SUB_TYPE_MASK                  0x000F0000                // SUB_TYPE[19..16]
#define WF_PLE_TOP_C_EN_QUEUE_0_SUB_TYPE_SHFT                  16
#define WF_PLE_TOP_C_EN_QUEUE_0_DST_PID_ADDR                   WF_PLE_TOP_C_EN_QUEUE_0_ADDR
#define WF_PLE_TOP_C_EN_QUEUE_0_DST_PID_MASK                   0x0000C000                // DST_PID[15..14]
#define WF_PLE_TOP_C_EN_QUEUE_0_DST_PID_SHFT                   14
#define WF_PLE_TOP_C_EN_QUEUE_0_DST_TGID_ADDR                  WF_PLE_TOP_C_EN_QUEUE_0_ADDR
#define WF_PLE_TOP_C_EN_QUEUE_0_DST_TGID_MASK                  0x00001000                // DST_TGID[12]
#define WF_PLE_TOP_C_EN_QUEUE_0_DST_TGID_SHFT                  12
#define WF_PLE_TOP_C_EN_QUEUE_0_DST_WLANID_ADDR                WF_PLE_TOP_C_EN_QUEUE_0_ADDR
#define WF_PLE_TOP_C_EN_QUEUE_0_DST_WLANID_MASK                0x000003FF                // DST_WLANID[9..0]
#define WF_PLE_TOP_C_EN_QUEUE_0_DST_WLANID_SHFT                0

/* =====================================================================================

  ---C_EN_QUEUE_1 (0x820C0000 + 0x324)---

    CUR_LIST_FID_START[11..0]    - (RW) Start frame ID of enqueue operation list, enqueue FID of enqueue operation
    RESERVED12[15..12]           - (RO) Reserved bits
    CUR_LIST_FID_END[27..16]     - (RW) End frame ID of enqueue operation list
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_C_EN_QUEUE_1_CUR_LIST_FID_END_ADDR          WF_PLE_TOP_C_EN_QUEUE_1_ADDR
#define WF_PLE_TOP_C_EN_QUEUE_1_CUR_LIST_FID_END_MASK          0x0FFF0000                // CUR_LIST_FID_END[27..16]
#define WF_PLE_TOP_C_EN_QUEUE_1_CUR_LIST_FID_END_SHFT          16
#define WF_PLE_TOP_C_EN_QUEUE_1_CUR_LIST_FID_START_ADDR        WF_PLE_TOP_C_EN_QUEUE_1_ADDR
#define WF_PLE_TOP_C_EN_QUEUE_1_CUR_LIST_FID_START_MASK        0x00000FFF                // CUR_LIST_FID_START[11..0]
#define WF_PLE_TOP_C_EN_QUEUE_1_CUR_LIST_FID_START_SHFT        0

/* =====================================================================================

  ---C_EN_QUEUE_2 (0x820C0000 + 0x328)---

    TARGET_FID[11..0]            - (RW) Target reference FID for enqueue operation
    RESERVED12[31..12]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_C_EN_QUEUE_2_TARGET_FID_ADDR                WF_PLE_TOP_C_EN_QUEUE_2_ADDR
#define WF_PLE_TOP_C_EN_QUEUE_2_TARGET_FID_MASK                0x00000FFF                // TARGET_FID[11..0]
#define WF_PLE_TOP_C_EN_QUEUE_2_TARGET_FID_SHFT                0

/* =====================================================================================

  ---C_DE_QUEUE_0 (0x820C0000 + 0x330)---

    SRC_WLANID[9..0]             - (RW) Source WLAN ID for dequeue command
    RESERVED10[11..10]           - (RO) Reserved bits
    SRC_TGID[12]                 - (RW) Source TX Group ID for  dequeue command
    RESERVED13[13]               - (RO) Reserved bits
    SRC_PID[15..14]              - (RW) Source port ID for dequeue command
    DEQ_SUB_TYPE[19..16]         - (RW) Dequeue subtype of dequeue command
    ENQ_SUB_TYPE[22..20]         - (RW) Enqueue subtype of enqueue command
                                     Only valid in Deq&Enq type.
    ENQ_VLD[23]                  - (RW) Deq&Enq command valid
    SRC_QID[30..24]              - (RW) Source queue ID for dequeue command
    EXECUTE[31]                  - (A0) Executes dequeue command

 =====================================================================================*/
#define WF_PLE_TOP_C_DE_QUEUE_0_EXECUTE_ADDR                   WF_PLE_TOP_C_DE_QUEUE_0_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_0_EXECUTE_MASK                   0x80000000                // EXECUTE[31]
#define WF_PLE_TOP_C_DE_QUEUE_0_EXECUTE_SHFT                   31
#define WF_PLE_TOP_C_DE_QUEUE_0_SRC_QID_ADDR                   WF_PLE_TOP_C_DE_QUEUE_0_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_0_SRC_QID_MASK                   0x7F000000                // SRC_QID[30..24]
#define WF_PLE_TOP_C_DE_QUEUE_0_SRC_QID_SHFT                   24
#define WF_PLE_TOP_C_DE_QUEUE_0_ENQ_VLD_ADDR                   WF_PLE_TOP_C_DE_QUEUE_0_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_0_ENQ_VLD_MASK                   0x00800000                // ENQ_VLD[23]
#define WF_PLE_TOP_C_DE_QUEUE_0_ENQ_VLD_SHFT                   23
#define WF_PLE_TOP_C_DE_QUEUE_0_ENQ_SUB_TYPE_ADDR              WF_PLE_TOP_C_DE_QUEUE_0_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_0_ENQ_SUB_TYPE_MASK              0x00700000                // ENQ_SUB_TYPE[22..20]
#define WF_PLE_TOP_C_DE_QUEUE_0_ENQ_SUB_TYPE_SHFT              20
#define WF_PLE_TOP_C_DE_QUEUE_0_DEQ_SUB_TYPE_ADDR              WF_PLE_TOP_C_DE_QUEUE_0_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_0_DEQ_SUB_TYPE_MASK              0x000F0000                // DEQ_SUB_TYPE[19..16]
#define WF_PLE_TOP_C_DE_QUEUE_0_DEQ_SUB_TYPE_SHFT              16
#define WF_PLE_TOP_C_DE_QUEUE_0_SRC_PID_ADDR                   WF_PLE_TOP_C_DE_QUEUE_0_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_0_SRC_PID_MASK                   0x0000C000                // SRC_PID[15..14]
#define WF_PLE_TOP_C_DE_QUEUE_0_SRC_PID_SHFT                   14
#define WF_PLE_TOP_C_DE_QUEUE_0_SRC_TGID_ADDR                  WF_PLE_TOP_C_DE_QUEUE_0_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_0_SRC_TGID_MASK                  0x00001000                // SRC_TGID[12]
#define WF_PLE_TOP_C_DE_QUEUE_0_SRC_TGID_SHFT                  12
#define WF_PLE_TOP_C_DE_QUEUE_0_SRC_WLANID_ADDR                WF_PLE_TOP_C_DE_QUEUE_0_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_0_SRC_WLANID_MASK                0x000003FF                // SRC_WLANID[9..0]
#define WF_PLE_TOP_C_DE_QUEUE_0_SRC_WLANID_SHFT                0

/* =====================================================================================

  ---C_DE_QUEUE_1 (0x820C0000 + 0x334)---

    CUR_LIST_FID_START[11..0]    - (RW) Start frame ID of dequeue operation list, enqueue start FID of enqueue operation
                                     Only valid in Deq&Enq type.
    RESERVED12[15..12]           - (RO) Reserved bits
    CUR_LIST_FID_END[27..16]     - (RW) End framd ID of dequeue operation list, enqueue end FID of enqueue operation
                                     Only valid in Deq&Enq type.
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_C_DE_QUEUE_1_CUR_LIST_FID_END_ADDR          WF_PLE_TOP_C_DE_QUEUE_1_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_1_CUR_LIST_FID_END_MASK          0x0FFF0000                // CUR_LIST_FID_END[27..16]
#define WF_PLE_TOP_C_DE_QUEUE_1_CUR_LIST_FID_END_SHFT          16
#define WF_PLE_TOP_C_DE_QUEUE_1_CUR_LIST_FID_START_ADDR        WF_PLE_TOP_C_DE_QUEUE_1_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_1_CUR_LIST_FID_START_MASK        0x00000FFF                // CUR_LIST_FID_START[11..0]
#define WF_PLE_TOP_C_DE_QUEUE_1_CUR_LIST_FID_START_SHFT        0

/* =====================================================================================

  ---C_DE_QUEUE_2 (0x820C0000 + 0x338)---

    DEQ_ENQ_DST_WLANID[9..0]     - (RW) Destination WLAN ID for enqueue command
                                     Only valid in Deq&Enq type.
    RESERVED10[11..10]           - (RO) Reserved bits
    DEQ_ENQ_DST_TGID[12]         - (RW) Destination TX Group ID for enqueue command
                                     Only valid in Deq&Enq type.
    RESERVED13[13]               - (RO) Reserved bits
    DEQ_ENQ_DST_PID[15..14]      - (RW) Destination port ID for enqueue command
                                     OInly valid in Deq&Enq type.
    RESERVED16[23..16]           - (RO) Reserved bits
    DEQ_ENQ_DST_QID[30..24]      - (RW) Destination queue ID for enqueue command
                                     Only valid in Deq&Enq type.
    RESERVED31[31]               - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_C_DE_QUEUE_2_DEQ_ENQ_DST_QID_ADDR           WF_PLE_TOP_C_DE_QUEUE_2_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_2_DEQ_ENQ_DST_QID_MASK           0x7F000000                // DEQ_ENQ_DST_QID[30..24]
#define WF_PLE_TOP_C_DE_QUEUE_2_DEQ_ENQ_DST_QID_SHFT           24
#define WF_PLE_TOP_C_DE_QUEUE_2_DEQ_ENQ_DST_PID_ADDR           WF_PLE_TOP_C_DE_QUEUE_2_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_2_DEQ_ENQ_DST_PID_MASK           0x0000C000                // DEQ_ENQ_DST_PID[15..14]
#define WF_PLE_TOP_C_DE_QUEUE_2_DEQ_ENQ_DST_PID_SHFT           14
#define WF_PLE_TOP_C_DE_QUEUE_2_DEQ_ENQ_DST_TGID_ADDR          WF_PLE_TOP_C_DE_QUEUE_2_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_2_DEQ_ENQ_DST_TGID_MASK          0x00001000                // DEQ_ENQ_DST_TGID[12]
#define WF_PLE_TOP_C_DE_QUEUE_2_DEQ_ENQ_DST_TGID_SHFT          12
#define WF_PLE_TOP_C_DE_QUEUE_2_DEQ_ENQ_DST_WLANID_ADDR        WF_PLE_TOP_C_DE_QUEUE_2_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_2_DEQ_ENQ_DST_WLANID_MASK        0x000003FF                // DEQ_ENQ_DST_WLANID[9..0]
#define WF_PLE_TOP_C_DE_QUEUE_2_DEQ_ENQ_DST_WLANID_SHFT        0

/* =====================================================================================

  ---C_DE_QUEUE_3 (0x820C0000 + 0x33c)---

    DEQ_HEAD_FID[11..0]          - (RO) Head FID got from dequeue command
    RESERVED12[14..12]           - (RO) Reserved bits
    DEQ_EMPTY[15]                - (RO) Queue empty after dequeue command is executed
    DEQ_TAIL_FID[27..16]         - (RO) Last FID got from dequeue command
    RESERVED28[30..28]           - (RO) Reserved bits
    BUSY[31]                     - (RO) Dequeue execute busy

 =====================================================================================*/
#define WF_PLE_TOP_C_DE_QUEUE_3_BUSY_ADDR                      WF_PLE_TOP_C_DE_QUEUE_3_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_3_BUSY_MASK                      0x80000000                // BUSY[31]
#define WF_PLE_TOP_C_DE_QUEUE_3_BUSY_SHFT                      31
#define WF_PLE_TOP_C_DE_QUEUE_3_DEQ_TAIL_FID_ADDR              WF_PLE_TOP_C_DE_QUEUE_3_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_3_DEQ_TAIL_FID_MASK              0x0FFF0000                // DEQ_TAIL_FID[27..16]
#define WF_PLE_TOP_C_DE_QUEUE_3_DEQ_TAIL_FID_SHFT              16
#define WF_PLE_TOP_C_DE_QUEUE_3_DEQ_EMPTY_ADDR                 WF_PLE_TOP_C_DE_QUEUE_3_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_3_DEQ_EMPTY_MASK                 0x00008000                // DEQ_EMPTY[15]
#define WF_PLE_TOP_C_DE_QUEUE_3_DEQ_EMPTY_SHFT                 15
#define WF_PLE_TOP_C_DE_QUEUE_3_DEQ_HEAD_FID_ADDR              WF_PLE_TOP_C_DE_QUEUE_3_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_3_DEQ_HEAD_FID_MASK              0x00000FFF                // DEQ_HEAD_FID[11..0]
#define WF_PLE_TOP_C_DE_QUEUE_3_DEQ_HEAD_FID_SHFT              0

/* =====================================================================================

  ---C_DE_QUEUE_4 (0x820C0000 + 0x340)---

    DEQ_ENQ_REF_FID[11..0]       - (RW) Reference frame ID for enqueue command
                                     Only valid in Deq&Enq type.
    RESERVED12[31..12]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_C_DE_QUEUE_4_DEQ_ENQ_REF_FID_ADDR           WF_PLE_TOP_C_DE_QUEUE_4_ADDR
#define WF_PLE_TOP_C_DE_QUEUE_4_DEQ_ENQ_REF_FID_MASK           0x00000FFF                // DEQ_ENQ_REF_FID[11..0]
#define WF_PLE_TOP_C_DE_QUEUE_4_DEQ_ENQ_REF_FID_SHFT           0

/* =====================================================================================

  ---ALLOCATE_0 (0x820C0000 + 0x350)---

    ALLOCATE_FRAME_LENGTH[13..0] - (RW) Allocate frame length
                                     Unit: DW (4 bytes)
    RESERVED14[15..14]           - (RO) Reserved bits
    ALLOCATE_QID[20..16]         - (RW) QID used for allocate buffer
    RESERVED21[30..21]           - (RO) Reserved bits
    EXECUTE[31]                  - (A0) Executes allocate buffer command

 =====================================================================================*/
#define WF_PLE_TOP_ALLOCATE_0_EXECUTE_ADDR                     WF_PLE_TOP_ALLOCATE_0_ADDR
#define WF_PLE_TOP_ALLOCATE_0_EXECUTE_MASK                     0x80000000                // EXECUTE[31]
#define WF_PLE_TOP_ALLOCATE_0_EXECUTE_SHFT                     31
#define WF_PLE_TOP_ALLOCATE_0_ALLOCATE_QID_ADDR                WF_PLE_TOP_ALLOCATE_0_ADDR
#define WF_PLE_TOP_ALLOCATE_0_ALLOCATE_QID_MASK                0x001F0000                // ALLOCATE_QID[20..16]
#define WF_PLE_TOP_ALLOCATE_0_ALLOCATE_QID_SHFT                16
#define WF_PLE_TOP_ALLOCATE_0_ALLOCATE_FRAME_LENGTH_ADDR       WF_PLE_TOP_ALLOCATE_0_ADDR
#define WF_PLE_TOP_ALLOCATE_0_ALLOCATE_FRAME_LENGTH_MASK       0x00003FFF                // ALLOCATE_FRAME_LENGTH[13..0]
#define WF_PLE_TOP_ALLOCATE_0_ALLOCATE_FRAME_LENGTH_SHFT       0

/* =====================================================================================

  ---ALLOCATE_1 (0x820C0000 + 0x354)---

    ALLOCATE_FID[11..0]          - (RO) Return frame ID for allocate buffer command
    RESERVED12[30..12]           - (RO) Reserved bits
    EXECUTE[31]                  - (RO) Execute status of allocate buffer command

 =====================================================================================*/
#define WF_PLE_TOP_ALLOCATE_1_EXECUTE_ADDR                     WF_PLE_TOP_ALLOCATE_1_ADDR
#define WF_PLE_TOP_ALLOCATE_1_EXECUTE_MASK                     0x80000000                // EXECUTE[31]
#define WF_PLE_TOP_ALLOCATE_1_EXECUTE_SHFT                     31
#define WF_PLE_TOP_ALLOCATE_1_ALLOCATE_FID_ADDR                WF_PLE_TOP_ALLOCATE_1_ADDR
#define WF_PLE_TOP_ALLOCATE_1_ALLOCATE_FID_MASK                0x00000FFF                // ALLOCATE_FID[11..0]
#define WF_PLE_TOP_ALLOCATE_1_ALLOCATE_FID_SHFT                0

/* =====================================================================================

  ---ALLOCATE_2 (0x820C0000 + 0x358)---

    CPU_TXBYTE_COUNT[15..0]      - (RW) TX data byte count
                                     This value should be the same as the first two bytes of TXD in PLE.
    CPU_MSDU_ID0_bit15_8[23..16] - (RW) MSDU_ID0 Bit15-Bit8
                                     This value should be the same as the DW8[15:8] of TXD in PLE.
    CPU_PKT_FT[25..24]           - (RW) TXD's PKT_FT
                                     This value should be the same as the DW0[24:23] of TXD in PLE.
    RESERVED26[31..26]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_ALLOCATE_2_CPU_PKT_FT_ADDR                  WF_PLE_TOP_ALLOCATE_2_ADDR
#define WF_PLE_TOP_ALLOCATE_2_CPU_PKT_FT_MASK                  0x03000000                // CPU_PKT_FT[25..24]
#define WF_PLE_TOP_ALLOCATE_2_CPU_PKT_FT_SHFT                  24
#define WF_PLE_TOP_ALLOCATE_2_CPU_MSDU_ID0_bit15_8_ADDR        WF_PLE_TOP_ALLOCATE_2_ADDR
#define WF_PLE_TOP_ALLOCATE_2_CPU_MSDU_ID0_bit15_8_MASK        0x00FF0000                // CPU_MSDU_ID0_bit15_8[23..16]
#define WF_PLE_TOP_ALLOCATE_2_CPU_MSDU_ID0_bit15_8_SHFT        16
#define WF_PLE_TOP_ALLOCATE_2_CPU_TXBYTE_COUNT_ADDR            WF_PLE_TOP_ALLOCATE_2_ADDR
#define WF_PLE_TOP_ALLOCATE_2_CPU_TXBYTE_COUNT_MASK            0x0000FFFF                // CPU_TXBYTE_COUNT[15..0]
#define WF_PLE_TOP_ALLOCATE_2_CPU_TXBYTE_COUNT_SHFT            0

/* =====================================================================================

  ---QUEUE_EMPTY (0x820C0000 + 0x360)---

    CPU_Q0_EMPTY[0]              - (RO) CPU queue 0 empty status
    CPU_Q1_EMPTY[1]              - (RO) CPU queue 1 empty status
    CPU_Q2_EMPTY[2]              - (RO) CPU queue 2 empty status
    CPU_Q3_EMPTY[3]              - (RO) CPU queue 3 empty status
    RESERVED4[7..4]              - (RO) Reserved bits
    ALTX_0_EMPTY[8]              - (RO) ALTX queue 0 empty status
    BMC_0_EMPTY[9]               - (RO) BMC queue 0 empty status
    BCN_0_EMPTY[10]              - (RO) BCN queue 0 empty status
    PSMP_0_EMPTY[11]             - (RO) PSMP queue 0 empty status
    ALTX_1_EMPTY[12]             - (RO) ALTX queue 1 empty status
    BMC_1_EMPTY[13]              - (RO) BMC queue 1 empty status
    BCN_1_EMPTY[14]              - (RO) BCN queue 1 empty status
    PSMP_1_EMPTY[15]             - (RO) PSMP queue 1 empty status
    NAF_EMPTY[16]                - (RO) NAF queue  empty status
    NBCN_EMPTY[17]               - (RO) NBCN queue empty status
    RESERVED18[19..18]           - (RO) Reserved bits
    FIX_FID_EMPTY[20]            - (RO) FIX_FID queue empty status
    AMSDU_PNSN_EMPTY[21]         - (RO) AMSDU_PNSN queue empty status
    RESERVED22[23..22]           - (RO) Reserved bits
    ALL_AC_EMPTY[24]             - (RO) All AC queue empty status
    RESERVED25[27..25]           - (RO) Reserved bits
    RLS4_Q_EMTPY[28]             - (RO) Release 4 queue empty status
    RLS3_Q_EMTPY[29]             - (RO) Release 3 queue empty status
    RLS2_Q_EMTPY[30]             - (RO) Release 2 queue empty status
    RLS_Q_EMTPY[31]              - (RO) Release queue empty status

 =====================================================================================*/
#define WF_PLE_TOP_QUEUE_EMPTY_RLS_Q_EMTPY_ADDR                WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_RLS_Q_EMTPY_MASK                0x80000000                // RLS_Q_EMTPY[31]
#define WF_PLE_TOP_QUEUE_EMPTY_RLS_Q_EMTPY_SHFT                31
#define WF_PLE_TOP_QUEUE_EMPTY_RLS2_Q_EMTPY_ADDR               WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_RLS2_Q_EMTPY_MASK               0x40000000                // RLS2_Q_EMTPY[30]
#define WF_PLE_TOP_QUEUE_EMPTY_RLS2_Q_EMTPY_SHFT               30
#define WF_PLE_TOP_QUEUE_EMPTY_RLS3_Q_EMTPY_ADDR               WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_RLS3_Q_EMTPY_MASK               0x20000000                // RLS3_Q_EMTPY[29]
#define WF_PLE_TOP_QUEUE_EMPTY_RLS3_Q_EMTPY_SHFT               29
#define WF_PLE_TOP_QUEUE_EMPTY_RLS4_Q_EMTPY_ADDR               WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_RLS4_Q_EMTPY_MASK               0x10000000                // RLS4_Q_EMTPY[28]
#define WF_PLE_TOP_QUEUE_EMPTY_RLS4_Q_EMTPY_SHFT               28
#define WF_PLE_TOP_QUEUE_EMPTY_ALL_AC_EMPTY_ADDR               WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_ALL_AC_EMPTY_MASK               0x01000000                // ALL_AC_EMPTY[24]
#define WF_PLE_TOP_QUEUE_EMPTY_ALL_AC_EMPTY_SHFT               24
#define WF_PLE_TOP_QUEUE_EMPTY_AMSDU_PNSN_EMPTY_ADDR           WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_AMSDU_PNSN_EMPTY_MASK           0x00200000                // AMSDU_PNSN_EMPTY[21]
#define WF_PLE_TOP_QUEUE_EMPTY_AMSDU_PNSN_EMPTY_SHFT           21
#define WF_PLE_TOP_QUEUE_EMPTY_FIX_FID_EMPTY_ADDR              WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_FIX_FID_EMPTY_MASK              0x00100000                // FIX_FID_EMPTY[20]
#define WF_PLE_TOP_QUEUE_EMPTY_FIX_FID_EMPTY_SHFT              20
#define WF_PLE_TOP_QUEUE_EMPTY_NBCN_EMPTY_ADDR                 WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_NBCN_EMPTY_MASK                 0x00020000                // NBCN_EMPTY[17]
#define WF_PLE_TOP_QUEUE_EMPTY_NBCN_EMPTY_SHFT                 17
#define WF_PLE_TOP_QUEUE_EMPTY_NAF_EMPTY_ADDR                  WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_NAF_EMPTY_MASK                  0x00010000                // NAF_EMPTY[16]
#define WF_PLE_TOP_QUEUE_EMPTY_NAF_EMPTY_SHFT                  16
#define WF_PLE_TOP_QUEUE_EMPTY_PSMP_1_EMPTY_ADDR               WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_PSMP_1_EMPTY_MASK               0x00008000                // PSMP_1_EMPTY[15]
#define WF_PLE_TOP_QUEUE_EMPTY_PSMP_1_EMPTY_SHFT               15
#define WF_PLE_TOP_QUEUE_EMPTY_BCN_1_EMPTY_ADDR                WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_BCN_1_EMPTY_MASK                0x00004000                // BCN_1_EMPTY[14]
#define WF_PLE_TOP_QUEUE_EMPTY_BCN_1_EMPTY_SHFT                14
#define WF_PLE_TOP_QUEUE_EMPTY_BMC_1_EMPTY_ADDR                WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_BMC_1_EMPTY_MASK                0x00002000                // BMC_1_EMPTY[13]
#define WF_PLE_TOP_QUEUE_EMPTY_BMC_1_EMPTY_SHFT                13
#define WF_PLE_TOP_QUEUE_EMPTY_ALTX_1_EMPTY_ADDR               WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_ALTX_1_EMPTY_MASK               0x00001000                // ALTX_1_EMPTY[12]
#define WF_PLE_TOP_QUEUE_EMPTY_ALTX_1_EMPTY_SHFT               12
#define WF_PLE_TOP_QUEUE_EMPTY_PSMP_0_EMPTY_ADDR               WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_PSMP_0_EMPTY_MASK               0x00000800                // PSMP_0_EMPTY[11]
#define WF_PLE_TOP_QUEUE_EMPTY_PSMP_0_EMPTY_SHFT               11
#define WF_PLE_TOP_QUEUE_EMPTY_BCN_0_EMPTY_ADDR                WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_BCN_0_EMPTY_MASK                0x00000400                // BCN_0_EMPTY[10]
#define WF_PLE_TOP_QUEUE_EMPTY_BCN_0_EMPTY_SHFT                10
#define WF_PLE_TOP_QUEUE_EMPTY_BMC_0_EMPTY_ADDR                WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_BMC_0_EMPTY_MASK                0x00000200                // BMC_0_EMPTY[9]
#define WF_PLE_TOP_QUEUE_EMPTY_BMC_0_EMPTY_SHFT                9
#define WF_PLE_TOP_QUEUE_EMPTY_ALTX_0_EMPTY_ADDR               WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_ALTX_0_EMPTY_MASK               0x00000100                // ALTX_0_EMPTY[8]
#define WF_PLE_TOP_QUEUE_EMPTY_ALTX_0_EMPTY_SHFT               8
#define WF_PLE_TOP_QUEUE_EMPTY_CPU_Q3_EMPTY_ADDR               WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_CPU_Q3_EMPTY_MASK               0x00000008                // CPU_Q3_EMPTY[3]
#define WF_PLE_TOP_QUEUE_EMPTY_CPU_Q3_EMPTY_SHFT               3
#define WF_PLE_TOP_QUEUE_EMPTY_CPU_Q2_EMPTY_ADDR               WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_CPU_Q2_EMPTY_MASK               0x00000004                // CPU_Q2_EMPTY[2]
#define WF_PLE_TOP_QUEUE_EMPTY_CPU_Q2_EMPTY_SHFT               2
#define WF_PLE_TOP_QUEUE_EMPTY_CPU_Q1_EMPTY_ADDR               WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_CPU_Q1_EMPTY_MASK               0x00000002                // CPU_Q1_EMPTY[1]
#define WF_PLE_TOP_QUEUE_EMPTY_CPU_Q1_EMPTY_SHFT               1
#define WF_PLE_TOP_QUEUE_EMPTY_CPU_Q0_EMPTY_ADDR               WF_PLE_TOP_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_QUEUE_EMPTY_CPU_Q0_EMPTY_MASK               0x00000001                // CPU_Q0_EMPTY[0]
#define WF_PLE_TOP_QUEUE_EMPTY_CPU_Q0_EMPTY_SHFT               0

/* =====================================================================================

  ---TXD_QUEUE_EMPTY (0x820C0000 + 0x364)---

    AC00_EMPTY[0]                - (RO) WMM0 AC0 queue empty status
    AC01_EMPTY[1]                - (RO) WMM0 AC1 queue empty status
    AC02_EMPTY[2]                - (RO) WMM0 AC2 queue empty status
    AC03_EMPTY[3]                - (RO) WMM0 AC3 queue empty status
    AC10_EMPTY[4]                - (RO) WMM1 AC0 queue empty status
    AC11_EMPTY[5]                - (RO) WMM1 AC1 queue empty status
    AC12_EMPTY[6]                - (RO) WMM1 AC2 queue empty status
    AC13_EMPTY[7]                - (RO) WMM1 AC3 queue empty status
    AC20_EMPTY[8]                - (RO) WMM2 AC0 queue empty status
    AC21_EMPTY[9]                - (RO) WMM2 AC1 queue empty status
    AC22_EMPTY[10]               - (RO) WMM2 AC2 queue empty status
    AC23_EMPTY[11]               - (RO) WMM2 AC3 queue empty status
    AC30_EMPTY[12]               - (RO) WMM3 AC0 queue empty status
    AC31_EMPTY[13]               - (RO) WMM3 AC1 queue empty status
    AC32_EMPTY[14]               - (RO) WMM3 AC2 queue empty status
    AC33_EMPTY[15]               - (RO) WMM3 AC3 queue empty status
    ALTX_0_EMPTY[16]             - (RO) ALTX queue 0 empty status
    BMC_0_EMPTY[17]              - (RO) BMC queue 0 empty status
    BCN_0_EMPTY[18]              - (RO) BCN queue 0 empty status
    PSMP_0_EMPTY[19]             - (RO) PSMP queue 0 empty status
    ALTX_1_EMPTY[20]             - (RO) ALTX queue 1 empty status
    BMC_1_EMPTY[21]              - (RO) BMC queue 1 empty status
    BCN_1_EMPTY[22]              - (RO) BCN queue 1 empty status
    PSMP_1_EMPTY[23]             - (RO) PSMP queue 1 empty status
    NAF_EMPTY[24]                - (RO) NAF queue  empty status
    NBCN_EMPTY[25]               - (RO) NBCN queue empty status
    RESERVED26[31..26]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_NBCN_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_NBCN_EMPTY_MASK             0x02000000                // NBCN_EMPTY[25]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_NBCN_EMPTY_SHFT             25
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_NAF_EMPTY_ADDR              WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_NAF_EMPTY_MASK              0x01000000                // NAF_EMPTY[24]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_NAF_EMPTY_SHFT              24
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_PSMP_1_EMPTY_ADDR           WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_PSMP_1_EMPTY_MASK           0x00800000                // PSMP_1_EMPTY[23]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_PSMP_1_EMPTY_SHFT           23
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_BCN_1_EMPTY_ADDR            WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_BCN_1_EMPTY_MASK            0x00400000                // BCN_1_EMPTY[22]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_BCN_1_EMPTY_SHFT            22
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_BMC_1_EMPTY_ADDR            WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_BMC_1_EMPTY_MASK            0x00200000                // BMC_1_EMPTY[21]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_BMC_1_EMPTY_SHFT            21
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_ALTX_1_EMPTY_ADDR           WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_ALTX_1_EMPTY_MASK           0x00100000                // ALTX_1_EMPTY[20]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_ALTX_1_EMPTY_SHFT           20
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_PSMP_0_EMPTY_ADDR           WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_PSMP_0_EMPTY_MASK           0x00080000                // PSMP_0_EMPTY[19]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_PSMP_0_EMPTY_SHFT           19
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_BCN_0_EMPTY_ADDR            WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_BCN_0_EMPTY_MASK            0x00040000                // BCN_0_EMPTY[18]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_BCN_0_EMPTY_SHFT            18
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_BMC_0_EMPTY_ADDR            WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_BMC_0_EMPTY_MASK            0x00020000                // BMC_0_EMPTY[17]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_BMC_0_EMPTY_SHFT            17
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_ALTX_0_EMPTY_ADDR           WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_ALTX_0_EMPTY_MASK           0x00010000                // ALTX_0_EMPTY[16]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_ALTX_0_EMPTY_SHFT           16
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC33_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC33_EMPTY_MASK             0x00008000                // AC33_EMPTY[15]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC33_EMPTY_SHFT             15
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC32_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC32_EMPTY_MASK             0x00004000                // AC32_EMPTY[14]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC32_EMPTY_SHFT             14
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC31_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC31_EMPTY_MASK             0x00002000                // AC31_EMPTY[13]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC31_EMPTY_SHFT             13
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC30_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC30_EMPTY_MASK             0x00001000                // AC30_EMPTY[12]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC30_EMPTY_SHFT             12
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC23_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC23_EMPTY_MASK             0x00000800                // AC23_EMPTY[11]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC23_EMPTY_SHFT             11
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC22_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC22_EMPTY_MASK             0x00000400                // AC22_EMPTY[10]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC22_EMPTY_SHFT             10
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC21_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC21_EMPTY_MASK             0x00000200                // AC21_EMPTY[9]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC21_EMPTY_SHFT             9
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC20_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC20_EMPTY_MASK             0x00000100                // AC20_EMPTY[8]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC20_EMPTY_SHFT             8
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC13_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC13_EMPTY_MASK             0x00000080                // AC13_EMPTY[7]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC13_EMPTY_SHFT             7
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC12_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC12_EMPTY_MASK             0x00000040                // AC12_EMPTY[6]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC12_EMPTY_SHFT             6
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC11_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC11_EMPTY_MASK             0x00000020                // AC11_EMPTY[5]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC11_EMPTY_SHFT             5
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC10_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC10_EMPTY_MASK             0x00000010                // AC10_EMPTY[4]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC10_EMPTY_SHFT             4
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC03_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC03_EMPTY_MASK             0x00000008                // AC03_EMPTY[3]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC03_EMPTY_SHFT             3
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC02_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC02_EMPTY_MASK             0x00000004                // AC02_EMPTY[2]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC02_EMPTY_SHFT             2
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC01_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC01_EMPTY_MASK             0x00000002                // AC01_EMPTY[1]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC01_EMPTY_SHFT             1
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC00_EMPTY_ADDR             WF_PLE_TOP_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC00_EMPTY_MASK             0x00000001                // AC00_EMPTY[0]
#define WF_PLE_TOP_TXD_QUEUE_EMPTY_AC00_EMPTY_SHFT             0

/* =====================================================================================

  ---NATIVE_TXD_QUEUE_EMPTY (0x820C0000 + 0x368)---

    AC00_EMPTY[0]                - (RO) WMM0 AC0 queue empty status
    AC01_EMPTY[1]                - (RO) WMM0 AC1 queue empty status
    AC02_EMPTY[2]                - (RO) WMM0 AC2 queue empty status
    AC03_EMPTY[3]                - (RO) WMM0 AC3 queue empty status
    AC10_EMPTY[4]                - (RO) WMM1 AC0 queue empty status
    AC11_EMPTY[5]                - (RO) WMM1 AC1 queue empty status
    AC12_EMPTY[6]                - (RO) WMM1 AC2 queue empty status
    AC13_EMPTY[7]                - (RO) WMM1 AC3 queue empty status
    AC20_EMPTY[8]                - (RO) WMM2 AC0 queue empty status
    AC21_EMPTY[9]                - (RO) WMM2 AC1 queue empty status
    AC22_EMPTY[10]               - (RO) WMM2 AC2 queue empty status
    AC23_EMPTY[11]               - (RO) WMM2 AC3 queue empty status
    AC30_EMPTY[12]               - (RO) WMM3 AC0 queue empty status
    AC31_EMPTY[13]               - (RO) WMM3 AC1 queue empty status
    AC32_EMPTY[14]               - (RO) WMM3 AC2 queue empty status
    AC33_EMPTY[15]               - (RO) WMM3 AC3 queue empty status
    ALTX_0_EMPTY[16]             - (RO) ALTX queue 0 empty status
    BMC_0_EMPTY[17]              - (RO) BMC queue 0 empty status
    BCN_0_EMPTY[18]              - (RO) BCN queue 0 empty status
    PSMP_0_EMPTY[19]             - (RO) PSMP queue 0 empty status
    ALTX_1_EMPTY[20]             - (RO) ALTX queue 1 empty status
    BMC_1_EMPTY[21]              - (RO) BMC queue 1 empty status
    BCN_1_EMPTY[22]              - (RO) BCN queue 1 empty status
    PSMP_1_EMPTY[23]             - (RO) PSMP queue 1 empty status
    NAF_EMPTY[24]                - (RO) NAF queue  empty status
    NBCN_EMPTY[25]               - (RO) NBCN queue empty status
    RESERVED26[31..26]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_NBCN_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_NBCN_EMPTY_MASK      0x02000000                // NBCN_EMPTY[25]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_NBCN_EMPTY_SHFT      25
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_NAF_EMPTY_ADDR       WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_NAF_EMPTY_MASK       0x01000000                // NAF_EMPTY[24]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_NAF_EMPTY_SHFT       24
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_PSMP_1_EMPTY_ADDR    WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_PSMP_1_EMPTY_MASK    0x00800000                // PSMP_1_EMPTY[23]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_PSMP_1_EMPTY_SHFT    23
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_BCN_1_EMPTY_ADDR     WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_BCN_1_EMPTY_MASK     0x00400000                // BCN_1_EMPTY[22]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_BCN_1_EMPTY_SHFT     22
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_BMC_1_EMPTY_ADDR     WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_BMC_1_EMPTY_MASK     0x00200000                // BMC_1_EMPTY[21]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_BMC_1_EMPTY_SHFT     21
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ALTX_1_EMPTY_ADDR    WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ALTX_1_EMPTY_MASK    0x00100000                // ALTX_1_EMPTY[20]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ALTX_1_EMPTY_SHFT    20
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_PSMP_0_EMPTY_ADDR    WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_PSMP_0_EMPTY_MASK    0x00080000                // PSMP_0_EMPTY[19]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_PSMP_0_EMPTY_SHFT    19
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_BCN_0_EMPTY_ADDR     WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_BCN_0_EMPTY_MASK     0x00040000                // BCN_0_EMPTY[18]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_BCN_0_EMPTY_SHFT     18
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_BMC_0_EMPTY_ADDR     WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_BMC_0_EMPTY_MASK     0x00020000                // BMC_0_EMPTY[17]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_BMC_0_EMPTY_SHFT     17
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ALTX_0_EMPTY_ADDR    WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ALTX_0_EMPTY_MASK    0x00010000                // ALTX_0_EMPTY[16]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ALTX_0_EMPTY_SHFT    16
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC33_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC33_EMPTY_MASK      0x00008000                // AC33_EMPTY[15]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC33_EMPTY_SHFT      15
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC32_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC32_EMPTY_MASK      0x00004000                // AC32_EMPTY[14]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC32_EMPTY_SHFT      14
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC31_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC31_EMPTY_MASK      0x00002000                // AC31_EMPTY[13]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC31_EMPTY_SHFT      13
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC30_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC30_EMPTY_MASK      0x00001000                // AC30_EMPTY[12]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC30_EMPTY_SHFT      12
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC23_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC23_EMPTY_MASK      0x00000800                // AC23_EMPTY[11]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC23_EMPTY_SHFT      11
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC22_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC22_EMPTY_MASK      0x00000400                // AC22_EMPTY[10]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC22_EMPTY_SHFT      10
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC21_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC21_EMPTY_MASK      0x00000200                // AC21_EMPTY[9]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC21_EMPTY_SHFT      9
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC20_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC20_EMPTY_MASK      0x00000100                // AC20_EMPTY[8]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC20_EMPTY_SHFT      8
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC13_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC13_EMPTY_MASK      0x00000080                // AC13_EMPTY[7]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC13_EMPTY_SHFT      7
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC12_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC12_EMPTY_MASK      0x00000040                // AC12_EMPTY[6]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC12_EMPTY_SHFT      6
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC11_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC11_EMPTY_MASK      0x00000020                // AC11_EMPTY[5]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC11_EMPTY_SHFT      5
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC10_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC10_EMPTY_MASK      0x00000010                // AC10_EMPTY[4]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC10_EMPTY_SHFT      4
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC03_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC03_EMPTY_MASK      0x00000008                // AC03_EMPTY[3]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC03_EMPTY_SHFT      3
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC02_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC02_EMPTY_MASK      0x00000004                // AC02_EMPTY[2]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC02_EMPTY_SHFT      2
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC01_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC01_EMPTY_MASK      0x00000002                // AC01_EMPTY[1]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC01_EMPTY_SHFT      1
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC00_EMPTY_ADDR      WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_ADDR
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC00_EMPTY_MASK      0x00000001                // AC00_EMPTY[0]
#define WF_PLE_TOP_NATIVE_TXD_QUEUE_EMPTY_AC00_EMPTY_SHFT      0

/* =====================================================================================

  ---DRR_CHNL_EMPTY (0x820C0000 + 0x374)---

    WMM_STA_DL_EMPTY[15..0]      - (RO) Indicate emptiness of 16 DL station link
    WMM_STA_UL_EMPTY[31..16]     - (RO) Indicate emptiness of 16 UL station link

 =====================================================================================*/
#define WF_PLE_TOP_DRR_CHNL_EMPTY_WMM_STA_UL_EMPTY_ADDR        WF_PLE_TOP_DRR_CHNL_EMPTY_ADDR
#define WF_PLE_TOP_DRR_CHNL_EMPTY_WMM_STA_UL_EMPTY_MASK        0xFFFF0000                // WMM_STA_UL_EMPTY[31..16]
#define WF_PLE_TOP_DRR_CHNL_EMPTY_WMM_STA_UL_EMPTY_SHFT        16
#define WF_PLE_TOP_DRR_CHNL_EMPTY_WMM_STA_DL_EMPTY_ADDR        WF_PLE_TOP_DRR_CHNL_EMPTY_ADDR
#define WF_PLE_TOP_DRR_CHNL_EMPTY_WMM_STA_DL_EMPTY_MASK        0x0000FFFF                // WMM_STA_DL_EMPTY[15..0]
#define WF_PLE_TOP_DRR_CHNL_EMPTY_WMM_STA_DL_EMPTY_SHFT        0

/* =====================================================================================

  ---FREEPG_CNT (0x820C0000 + 0x380)---

    FREEPG_CNT[11..0]            - (RO) Total page number of free
    RESERVED12[15..12]           - (RO) Reserved bits
    FFA_CNT[27..16]              - (RO) Free page numbers of free for all
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_FREEPG_CNT_FFA_CNT_ADDR                     WF_PLE_TOP_FREEPG_CNT_ADDR
#define WF_PLE_TOP_FREEPG_CNT_FFA_CNT_MASK                     0x0FFF0000                // FFA_CNT[27..16]
#define WF_PLE_TOP_FREEPG_CNT_FFA_CNT_SHFT                     16
#define WF_PLE_TOP_FREEPG_CNT_FREEPG_CNT_ADDR                  WF_PLE_TOP_FREEPG_CNT_ADDR
#define WF_PLE_TOP_FREEPG_CNT_FREEPG_CNT_MASK                  0x00000FFF                // FREEPG_CNT[11..0]
#define WF_PLE_TOP_FREEPG_CNT_FREEPG_CNT_SHFT                  0

/* =====================================================================================

  ---FREEPG_HEAD_TAIL (0x820C0000 + 0x384)---

    FREEPG_HEAD[11..0]           - (RO) Head page of free page list
    RESERVED12[15..12]           - (RO) Reserved bits
    FREEPG_TAIL[27..16]          - (RO) Tail page of free page list
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_FREEPG_HEAD_TAIL_FREEPG_TAIL_ADDR           WF_PLE_TOP_FREEPG_HEAD_TAIL_ADDR
#define WF_PLE_TOP_FREEPG_HEAD_TAIL_FREEPG_TAIL_MASK           0x0FFF0000                // FREEPG_TAIL[27..16]
#define WF_PLE_TOP_FREEPG_HEAD_TAIL_FREEPG_TAIL_SHFT           16
#define WF_PLE_TOP_FREEPG_HEAD_TAIL_FREEPG_HEAD_ADDR           WF_PLE_TOP_FREEPG_HEAD_TAIL_ADDR
#define WF_PLE_TOP_FREEPG_HEAD_TAIL_FREEPG_HEAD_MASK           0x00000FFF                // FREEPG_HEAD[11..0]
#define WF_PLE_TOP_FREEPG_HEAD_TAIL_FREEPG_HEAD_SHFT           0

/* =====================================================================================

  ---HIF_PG_INFO (0x820C0000 + 0x388)---

    HIF_RSV_CNT[11..0]           - (RO) Reserved pages of HIF group
    RESERVED12[15..12]           - (RO) Reserved bits
    HIF_SRC_CNT[27..16]          - (RO) Used pages of HIF group
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_HIF_PG_INFO_HIF_SRC_CNT_ADDR                WF_PLE_TOP_HIF_PG_INFO_ADDR
#define WF_PLE_TOP_HIF_PG_INFO_HIF_SRC_CNT_MASK                0x0FFF0000                // HIF_SRC_CNT[27..16]
#define WF_PLE_TOP_HIF_PG_INFO_HIF_SRC_CNT_SHFT                16
#define WF_PLE_TOP_HIF_PG_INFO_HIF_RSV_CNT_ADDR                WF_PLE_TOP_HIF_PG_INFO_ADDR
#define WF_PLE_TOP_HIF_PG_INFO_HIF_RSV_CNT_MASK                0x00000FFF                // HIF_RSV_CNT[11..0]
#define WF_PLE_TOP_HIF_PG_INFO_HIF_RSV_CNT_SHFT                0

/* =====================================================================================

  ---HIF_WMTXD_PG_INFO (0x820C0000 + 0x38c)---

    HIF_WMTXD_RSV_CNT[11..0]     - (RO) Reserved pages of HIF WMCPU TXD group
    RESERVED12[15..12]           - (RO) Reserved bits
    HIF_WMTXD_SRC_CNT[27..16]    - (RO) Used pages of HIF WMCPU TXD group
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_HIF_WMTXD_PG_INFO_HIF_WMTXD_SRC_CNT_ADDR    WF_PLE_TOP_HIF_WMTXD_PG_INFO_ADDR
#define WF_PLE_TOP_HIF_WMTXD_PG_INFO_HIF_WMTXD_SRC_CNT_MASK    0x0FFF0000                // HIF_WMTXD_SRC_CNT[27..16]
#define WF_PLE_TOP_HIF_WMTXD_PG_INFO_HIF_WMTXD_SRC_CNT_SHFT    16
#define WF_PLE_TOP_HIF_WMTXD_PG_INFO_HIF_WMTXD_RSV_CNT_ADDR    WF_PLE_TOP_HIF_WMTXD_PG_INFO_ADDR
#define WF_PLE_TOP_HIF_WMTXD_PG_INFO_HIF_WMTXD_RSV_CNT_MASK    0x00000FFF                // HIF_WMTXD_RSV_CNT[11..0]
#define WF_PLE_TOP_HIF_WMTXD_PG_INFO_HIF_WMTXD_RSV_CNT_SHFT    0

/* =====================================================================================

  ---HIF_TXCMD_PG_INFO (0x820C0000 + 0x390)---

    HIF_TXCMD_RSV_CNT[11..0]     - (RO) Reserved pages of HIF TXCMD group
    RESERVED12[15..12]           - (RO) Reserved bits
    HIF_TXCMD_SRC_CNT[27..16]    - (RO) Used pages of HIF TXCMD group
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_HIF_TXCMD_PG_INFO_HIF_TXCMD_SRC_CNT_ADDR    WF_PLE_TOP_HIF_TXCMD_PG_INFO_ADDR
#define WF_PLE_TOP_HIF_TXCMD_PG_INFO_HIF_TXCMD_SRC_CNT_MASK    0x0FFF0000                // HIF_TXCMD_SRC_CNT[27..16]
#define WF_PLE_TOP_HIF_TXCMD_PG_INFO_HIF_TXCMD_SRC_CNT_SHFT    16
#define WF_PLE_TOP_HIF_TXCMD_PG_INFO_HIF_TXCMD_RSV_CNT_ADDR    WF_PLE_TOP_HIF_TXCMD_PG_INFO_ADDR
#define WF_PLE_TOP_HIF_TXCMD_PG_INFO_HIF_TXCMD_RSV_CNT_MASK    0x00000FFF                // HIF_TXCMD_RSV_CNT[11..0]
#define WF_PLE_TOP_HIF_TXCMD_PG_INFO_HIF_TXCMD_RSV_CNT_SHFT    0

/* =====================================================================================

  ---CPU_PG_INFO (0x820C0000 + 0x394)---

    CPU_RSV_CNT[11..0]           - (RO) Reserved pages of CPU group
    RESERVED12[15..12]           - (RO) Reserved bits
    CPU_SRC_CNT[27..16]          - (RO) Used pages of CPU group
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_CPU_PG_INFO_CPU_SRC_CNT_ADDR                WF_PLE_TOP_CPU_PG_INFO_ADDR
#define WF_PLE_TOP_CPU_PG_INFO_CPU_SRC_CNT_MASK                0x0FFF0000                // CPU_SRC_CNT[27..16]
#define WF_PLE_TOP_CPU_PG_INFO_CPU_SRC_CNT_SHFT                16
#define WF_PLE_TOP_CPU_PG_INFO_CPU_RSV_CNT_ADDR                WF_PLE_TOP_CPU_PG_INFO_ADDR
#define WF_PLE_TOP_CPU_PG_INFO_CPU_RSV_CNT_MASK                0x00000FFF                // CPU_RSV_CNT[11..0]
#define WF_PLE_TOP_CPU_PG_INFO_CPU_RSV_CNT_SHFT                0

/* =====================================================================================

  ---PLE_LOG_0 (0x820C0000 + 0x3a0)---

    PLE_LOG_0[31..0]             - (RW) Reserve for WIFI LP reset usage

 =====================================================================================*/
#define WF_PLE_TOP_PLE_LOG_0_PLE_LOG_0_ADDR                    WF_PLE_TOP_PLE_LOG_0_ADDR
#define WF_PLE_TOP_PLE_LOG_0_PLE_LOG_0_MASK                    0xFFFFFFFF                // PLE_LOG_0[31..0]
#define WF_PLE_TOP_PLE_LOG_0_PLE_LOG_0_SHFT                    0

/* =====================================================================================

  ---PLE_LOG_1 (0x820C0000 + 0x3a4)---

    PLE_LOG_1[31..0]             - (RW) Log message for SW

 =====================================================================================*/
#define WF_PLE_TOP_PLE_LOG_1_PLE_LOG_1_ADDR                    WF_PLE_TOP_PLE_LOG_1_ADDR
#define WF_PLE_TOP_PLE_LOG_1_PLE_LOG_1_MASK                    0xFFFFFFFF                // PLE_LOG_1[31..0]
#define WF_PLE_TOP_PLE_LOG_1_PLE_LOG_1_SHFT                    0

/* =====================================================================================

  ---PLE_LOG_2 (0x820C0000 + 0x3a8)---

    PLE_LOG_2[31..0]             - (RW) Log message for SW

 =====================================================================================*/
#define WF_PLE_TOP_PLE_LOG_2_PLE_LOG_2_ADDR                    WF_PLE_TOP_PLE_LOG_2_ADDR
#define WF_PLE_TOP_PLE_LOG_2_PLE_LOG_2_MASK                    0xFFFFFFFF                // PLE_LOG_2[31..0]
#define WF_PLE_TOP_PLE_LOG_2_PLE_LOG_2_SHFT                    0

/* =====================================================================================

  ---PLE_LOG_3 (0x820C0000 + 0x3ac)---

    PLE_LOG_3[31..0]             - (RW) Log message for SW

 =====================================================================================*/
#define WF_PLE_TOP_PLE_LOG_3_PLE_LOG_3_ADDR                    WF_PLE_TOP_PLE_LOG_3_ADDR
#define WF_PLE_TOP_PLE_LOG_3_PLE_LOG_3_MASK                    0xFFFFFFFF                // PLE_LOG_3[31..0]
#define WF_PLE_TOP_PLE_LOG_3_PLE_LOG_3_SHFT                    0

/* =====================================================================================

  ---WMMAC_PGCNT_0 (0x820C0000 + 0x3b0)---

    WMMAC_00_PGCNT[11..0]        - (RO) WMMAC 00 used page count
    RESERVED12[15..12]           - (RO) Reserved bits
    WMMAC_01_PGCNT[27..16]       - (RO) WMMAC 01 used page count
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_WMMAC_PGCNT_0_WMMAC_01_PGCNT_ADDR           WF_PLE_TOP_WMMAC_PGCNT_0_ADDR
#define WF_PLE_TOP_WMMAC_PGCNT_0_WMMAC_01_PGCNT_MASK           0x0FFF0000                // WMMAC_01_PGCNT[27..16]
#define WF_PLE_TOP_WMMAC_PGCNT_0_WMMAC_01_PGCNT_SHFT           16
#define WF_PLE_TOP_WMMAC_PGCNT_0_WMMAC_00_PGCNT_ADDR           WF_PLE_TOP_WMMAC_PGCNT_0_ADDR
#define WF_PLE_TOP_WMMAC_PGCNT_0_WMMAC_00_PGCNT_MASK           0x00000FFF                // WMMAC_00_PGCNT[11..0]
#define WF_PLE_TOP_WMMAC_PGCNT_0_WMMAC_00_PGCNT_SHFT           0

/* =====================================================================================

  ---WMMAC_PGCNT_1 (0x820C0000 + 0x3b4)---

    WMMAC_02_PGCNT[11..0]        - (RO) WMMAC 02 used page count
    RESERVED12[15..12]           - (RO) Reserved bits
    WMMAC_03_PGCNT[27..16]       - (RO) WMMAC 03 used page count
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_WMMAC_PGCNT_1_WMMAC_03_PGCNT_ADDR           WF_PLE_TOP_WMMAC_PGCNT_1_ADDR
#define WF_PLE_TOP_WMMAC_PGCNT_1_WMMAC_03_PGCNT_MASK           0x0FFF0000                // WMMAC_03_PGCNT[27..16]
#define WF_PLE_TOP_WMMAC_PGCNT_1_WMMAC_03_PGCNT_SHFT           16
#define WF_PLE_TOP_WMMAC_PGCNT_1_WMMAC_02_PGCNT_ADDR           WF_PLE_TOP_WMMAC_PGCNT_1_ADDR
#define WF_PLE_TOP_WMMAC_PGCNT_1_WMMAC_02_PGCNT_MASK           0x00000FFF                // WMMAC_02_PGCNT[11..0]
#define WF_PLE_TOP_WMMAC_PGCNT_1_WMMAC_02_PGCNT_SHFT           0

/* =====================================================================================

  ---WMMAC_PGCNT_2 (0x820C0000 + 0x3b8)---

    WMMAC_10_PGCNT[11..0]        - (RO) WMMAC 10 used page count
    RESERVED12[15..12]           - (RO) Reserved bits
    WMMAC_11_PGCNT[27..16]       - (RO) WMMAC 11 used page count
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_WMMAC_PGCNT_2_WMMAC_11_PGCNT_ADDR           WF_PLE_TOP_WMMAC_PGCNT_2_ADDR
#define WF_PLE_TOP_WMMAC_PGCNT_2_WMMAC_11_PGCNT_MASK           0x0FFF0000                // WMMAC_11_PGCNT[27..16]
#define WF_PLE_TOP_WMMAC_PGCNT_2_WMMAC_11_PGCNT_SHFT           16
#define WF_PLE_TOP_WMMAC_PGCNT_2_WMMAC_10_PGCNT_ADDR           WF_PLE_TOP_WMMAC_PGCNT_2_ADDR
#define WF_PLE_TOP_WMMAC_PGCNT_2_WMMAC_10_PGCNT_MASK           0x00000FFF                // WMMAC_10_PGCNT[11..0]
#define WF_PLE_TOP_WMMAC_PGCNT_2_WMMAC_10_PGCNT_SHFT           0

/* =====================================================================================

  ---WMMAC_PGCNT_3 (0x820C0000 + 0x3bc)---

    WMMAC_12_PGCNT[11..0]        - (RO) WMMAC 12 used page count
    RESERVED12[15..12]           - (RO) Reserved bits
    WMMAC_13_PGCNT[27..16]       - (RO) WMMAC 13 used page count
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_WMMAC_PGCNT_3_WMMAC_13_PGCNT_ADDR           WF_PLE_TOP_WMMAC_PGCNT_3_ADDR
#define WF_PLE_TOP_WMMAC_PGCNT_3_WMMAC_13_PGCNT_MASK           0x0FFF0000                // WMMAC_13_PGCNT[27..16]
#define WF_PLE_TOP_WMMAC_PGCNT_3_WMMAC_13_PGCNT_SHFT           16
#define WF_PLE_TOP_WMMAC_PGCNT_3_WMMAC_12_PGCNT_ADDR           WF_PLE_TOP_WMMAC_PGCNT_3_ADDR
#define WF_PLE_TOP_WMMAC_PGCNT_3_WMMAC_12_PGCNT_MASK           0x00000FFF                // WMMAC_12_PGCNT[11..0]
#define WF_PLE_TOP_WMMAC_PGCNT_3_WMMAC_12_PGCNT_SHFT           0

/* =====================================================================================

  ---WMMAC_PGCNT_4 (0x820C0000 + 0x3c0)---

    WMMAC_20_PGCNT[11..0]        - (RO) WMMAC 20 used page count
    RESERVED12[15..12]           - (RO) Reserved bits
    WMMAC_21_PGCNT[27..16]       - (RO) WMMAC 21 used page count
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_WMMAC_PGCNT_4_WMMAC_21_PGCNT_ADDR           WF_PLE_TOP_WMMAC_PGCNT_4_ADDR
#define WF_PLE_TOP_WMMAC_PGCNT_4_WMMAC_21_PGCNT_MASK           0x0FFF0000                // WMMAC_21_PGCNT[27..16]
#define WF_PLE_TOP_WMMAC_PGCNT_4_WMMAC_21_PGCNT_SHFT           16
#define WF_PLE_TOP_WMMAC_PGCNT_4_WMMAC_20_PGCNT_ADDR           WF_PLE_TOP_WMMAC_PGCNT_4_ADDR
#define WF_PLE_TOP_WMMAC_PGCNT_4_WMMAC_20_PGCNT_MASK           0x00000FFF                // WMMAC_20_PGCNT[11..0]
#define WF_PLE_TOP_WMMAC_PGCNT_4_WMMAC_20_PGCNT_SHFT           0

/* =====================================================================================

  ---WMMAC_PGCNT_5 (0x820C0000 + 0x3c4)---

    WMMAC_22_PGCNT[11..0]        - (RO) WMMAC 22 used page count
    RESERVED12[15..12]           - (RO) Reserved bits
    WMMAC_23_PGCNT[27..16]       - (RO) WMMAC 23 used page count
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_WMMAC_PGCNT_5_WMMAC_23_PGCNT_ADDR           WF_PLE_TOP_WMMAC_PGCNT_5_ADDR
#define WF_PLE_TOP_WMMAC_PGCNT_5_WMMAC_23_PGCNT_MASK           0x0FFF0000                // WMMAC_23_PGCNT[27..16]
#define WF_PLE_TOP_WMMAC_PGCNT_5_WMMAC_23_PGCNT_SHFT           16
#define WF_PLE_TOP_WMMAC_PGCNT_5_WMMAC_22_PGCNT_ADDR           WF_PLE_TOP_WMMAC_PGCNT_5_ADDR
#define WF_PLE_TOP_WMMAC_PGCNT_5_WMMAC_22_PGCNT_MASK           0x00000FFF                // WMMAC_22_PGCNT[11..0]
#define WF_PLE_TOP_WMMAC_PGCNT_5_WMMAC_22_PGCNT_SHFT           0

/* =====================================================================================

  ---WMMAC_PGCNT_6 (0x820C0000 + 0x3c8)---

    WMMAC_30_PGCNT[11..0]        - (RO) WMMAC 30 used page count
    RESERVED12[15..12]           - (RO) Reserved bits
    WMMAC_31_PGCNT[27..16]       - (RO) WMMAC 31 used page count
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_WMMAC_PGCNT_6_WMMAC_31_PGCNT_ADDR           WF_PLE_TOP_WMMAC_PGCNT_6_ADDR
#define WF_PLE_TOP_WMMAC_PGCNT_6_WMMAC_31_PGCNT_MASK           0x0FFF0000                // WMMAC_31_PGCNT[27..16]
#define WF_PLE_TOP_WMMAC_PGCNT_6_WMMAC_31_PGCNT_SHFT           16
#define WF_PLE_TOP_WMMAC_PGCNT_6_WMMAC_30_PGCNT_ADDR           WF_PLE_TOP_WMMAC_PGCNT_6_ADDR
#define WF_PLE_TOP_WMMAC_PGCNT_6_WMMAC_30_PGCNT_MASK           0x00000FFF                // WMMAC_30_PGCNT[11..0]
#define WF_PLE_TOP_WMMAC_PGCNT_6_WMMAC_30_PGCNT_SHFT           0

/* =====================================================================================

  ---WMMAC_PGCNT_7 (0x820C0000 + 0x3cc)---

    WMMAC_32_PGCNT[11..0]        - (RO) WMMAC 32 used page count
    RESERVED12[15..12]           - (RO) Reserved bits
    WMMAC_33_PGCNT[27..16]       - (RO) WMMAC 33 used page count
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_WMMAC_PGCNT_7_WMMAC_33_PGCNT_ADDR           WF_PLE_TOP_WMMAC_PGCNT_7_ADDR
#define WF_PLE_TOP_WMMAC_PGCNT_7_WMMAC_33_PGCNT_MASK           0x0FFF0000                // WMMAC_33_PGCNT[27..16]
#define WF_PLE_TOP_WMMAC_PGCNT_7_WMMAC_33_PGCNT_SHFT           16
#define WF_PLE_TOP_WMMAC_PGCNT_7_WMMAC_32_PGCNT_ADDR           WF_PLE_TOP_WMMAC_PGCNT_7_ADDR
#define WF_PLE_TOP_WMMAC_PGCNT_7_WMMAC_32_PGCNT_MASK           0x00000FFF                // WMMAC_32_PGCNT[11..0]
#define WF_PLE_TOP_WMMAC_PGCNT_7_WMMAC_32_PGCNT_SHFT           0

/* =====================================================================================

  ---RL_BUF_CTRL_0 (0x820C0000 + 0x3d0)---

    RELAY_BUF_ADDR[11..0]        - (RW) Read address of relay buffer
    RESERVED12[30..12]           - (RO) Reserved bits
    EXECUTE[31]                  - (A0) Executes relay buffer read command

 =====================================================================================*/
#define WF_PLE_TOP_RL_BUF_CTRL_0_EXECUTE_ADDR                  WF_PLE_TOP_RL_BUF_CTRL_0_ADDR
#define WF_PLE_TOP_RL_BUF_CTRL_0_EXECUTE_MASK                  0x80000000                // EXECUTE[31]
#define WF_PLE_TOP_RL_BUF_CTRL_0_EXECUTE_SHFT                  31
#define WF_PLE_TOP_RL_BUF_CTRL_0_RELAY_BUF_ADDR_ADDR           WF_PLE_TOP_RL_BUF_CTRL_0_ADDR
#define WF_PLE_TOP_RL_BUF_CTRL_0_RELAY_BUF_ADDR_MASK           0x00000FFF                // RELAY_BUF_ADDR[11..0]
#define WF_PLE_TOP_RL_BUF_CTRL_0_RELAY_BUF_ADDR_SHFT           0

/* =====================================================================================

  ---RL_BUF_CTRL_1 (0x820C0000 + 0x3d4)---

    PAGE_NUM_0[0]                - (RO) Page number[0] of packet
    PKT_LEN[11..1]               - (RO) Length of the packet with head page being the relay buffer address
                                     Unit: 32 bytes
    PKT_TAIL_PAGE[23..12]        - (RO) Tail page of the packet with head page being the relay buffer address
    RESV_GRP_ID[24]              - (RO) Group ID of reserved page used by FID
    RESERVED25[25]               - (RO) Reserved bits
    PAGE_NUM_1[27..26]           - (RO) Page number[2:1] of packet
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_RL_BUF_CTRL_1_PAGE_NUM_1_ADDR               WF_PLE_TOP_RL_BUF_CTRL_1_ADDR
#define WF_PLE_TOP_RL_BUF_CTRL_1_PAGE_NUM_1_MASK               0x0C000000                // PAGE_NUM_1[27..26]
#define WF_PLE_TOP_RL_BUF_CTRL_1_PAGE_NUM_1_SHFT               26
#define WF_PLE_TOP_RL_BUF_CTRL_1_RESV_GRP_ID_ADDR              WF_PLE_TOP_RL_BUF_CTRL_1_ADDR
#define WF_PLE_TOP_RL_BUF_CTRL_1_RESV_GRP_ID_MASK              0x01000000                // RESV_GRP_ID[24]
#define WF_PLE_TOP_RL_BUF_CTRL_1_RESV_GRP_ID_SHFT              24
#define WF_PLE_TOP_RL_BUF_CTRL_1_PKT_TAIL_PAGE_ADDR            WF_PLE_TOP_RL_BUF_CTRL_1_ADDR
#define WF_PLE_TOP_RL_BUF_CTRL_1_PKT_TAIL_PAGE_MASK            0x00FFF000                // PKT_TAIL_PAGE[23..12]
#define WF_PLE_TOP_RL_BUF_CTRL_1_PKT_TAIL_PAGE_SHFT            12
#define WF_PLE_TOP_RL_BUF_CTRL_1_PKT_LEN_ADDR                  WF_PLE_TOP_RL_BUF_CTRL_1_ADDR
#define WF_PLE_TOP_RL_BUF_CTRL_1_PKT_LEN_MASK                  0x00000FFE                // PKT_LEN[11..1]
#define WF_PLE_TOP_RL_BUF_CTRL_1_PKT_LEN_SHFT                  1
#define WF_PLE_TOP_RL_BUF_CTRL_1_PAGE_NUM_0_ADDR               WF_PLE_TOP_RL_BUF_CTRL_1_ADDR
#define WF_PLE_TOP_RL_BUF_CTRL_1_PAGE_NUM_0_MASK               0x00000001                // PAGE_NUM_0[0]
#define WF_PLE_TOP_RL_BUF_CTRL_1_PAGE_NUM_0_SHFT               0

/* =====================================================================================

  ---FL_QUE_CTRL_0 (0x820C0000 + 0x3e0)---

    Q_BUF_WLANID[9..0]           - (RW) Address of queue structure buffer WLANID.
    Q_BUF_PID[11..10]            - (RW) Address of queue structure buffer PID
    FL_BUFFER_ADDR[23..12]       - (RW) Frame address of read previous frame/next frame
    Q_BUF_QID[30..24]            - (RW) Address of queue structure buffer QID
    EXECUTE[31]                  - (A0) Executes frame link and queue structure buffer read command

 =====================================================================================*/
#define WF_PLE_TOP_FL_QUE_CTRL_0_EXECUTE_ADDR                  WF_PLE_TOP_FL_QUE_CTRL_0_ADDR
#define WF_PLE_TOP_FL_QUE_CTRL_0_EXECUTE_MASK                  0x80000000                // EXECUTE[31]
#define WF_PLE_TOP_FL_QUE_CTRL_0_EXECUTE_SHFT                  31
#define WF_PLE_TOP_FL_QUE_CTRL_0_Q_BUF_QID_ADDR                WF_PLE_TOP_FL_QUE_CTRL_0_ADDR
#define WF_PLE_TOP_FL_QUE_CTRL_0_Q_BUF_QID_MASK                0x7F000000                // Q_BUF_QID[30..24]
#define WF_PLE_TOP_FL_QUE_CTRL_0_Q_BUF_QID_SHFT                24
#define WF_PLE_TOP_FL_QUE_CTRL_0_FL_BUFFER_ADDR_ADDR           WF_PLE_TOP_FL_QUE_CTRL_0_ADDR
#define WF_PLE_TOP_FL_QUE_CTRL_0_FL_BUFFER_ADDR_MASK           0x00FFF000                // FL_BUFFER_ADDR[23..12]
#define WF_PLE_TOP_FL_QUE_CTRL_0_FL_BUFFER_ADDR_SHFT           12
#define WF_PLE_TOP_FL_QUE_CTRL_0_Q_BUF_PID_ADDR                WF_PLE_TOP_FL_QUE_CTRL_0_ADDR
#define WF_PLE_TOP_FL_QUE_CTRL_0_Q_BUF_PID_MASK                0x00000C00                // Q_BUF_PID[11..10]
#define WF_PLE_TOP_FL_QUE_CTRL_0_Q_BUF_PID_SHFT                10
#define WF_PLE_TOP_FL_QUE_CTRL_0_Q_BUF_WLANID_ADDR             WF_PLE_TOP_FL_QUE_CTRL_0_ADDR
#define WF_PLE_TOP_FL_QUE_CTRL_0_Q_BUF_WLANID_MASK             0x000003FF                // Q_BUF_WLANID[9..0]
#define WF_PLE_TOP_FL_QUE_CTRL_0_Q_BUF_WLANID_SHFT             0

/* =====================================================================================

  ---FL_QUE_CTRL_1 (0x820C0000 + 0x3e4)---

    NEXT_FID[11..0]              - (RO) Next frame ID of FL_BUFFER_ADDR
    RESERVED12[15..12]           - (RO) Reserved bits
    PREV_FID[27..16]             - (RO) Previous frame ID of FL_BUFFER_ADDR
    RESERVED28[30..28]           - (RO) Reserved bits
    Q_BUF_TGID[31]               - (RW) Address of queue structure buffer TGID

 =====================================================================================*/
#define WF_PLE_TOP_FL_QUE_CTRL_1_Q_BUF_TGID_ADDR               WF_PLE_TOP_FL_QUE_CTRL_1_ADDR
#define WF_PLE_TOP_FL_QUE_CTRL_1_Q_BUF_TGID_MASK               0x80000000                // Q_BUF_TGID[31]
#define WF_PLE_TOP_FL_QUE_CTRL_1_Q_BUF_TGID_SHFT               31
#define WF_PLE_TOP_FL_QUE_CTRL_1_PREV_FID_ADDR                 WF_PLE_TOP_FL_QUE_CTRL_1_ADDR
#define WF_PLE_TOP_FL_QUE_CTRL_1_PREV_FID_MASK                 0x0FFF0000                // PREV_FID[27..16]
#define WF_PLE_TOP_FL_QUE_CTRL_1_PREV_FID_SHFT                 16
#define WF_PLE_TOP_FL_QUE_CTRL_1_NEXT_FID_ADDR                 WF_PLE_TOP_FL_QUE_CTRL_1_ADDR
#define WF_PLE_TOP_FL_QUE_CTRL_1_NEXT_FID_MASK                 0x00000FFF                // NEXT_FID[11..0]
#define WF_PLE_TOP_FL_QUE_CTRL_1_NEXT_FID_SHFT                 0

/* =====================================================================================

  ---FL_QUE_CTRL_2 (0x820C0000 + 0x3e8)---

    QUEUE_HEAD_FID[11..0]        - (RO) Head frame ID of the quest queue setting in 0x01b0[15:0]
    RESERVED12[15..12]           - (RO) Reserved bits
    QUEUE_TAIL_FID[27..16]       - (RO) Tail frame ID of the quest queue setting in 0x01b0[15:0]
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_FL_QUE_CTRL_2_QUEUE_TAIL_FID_ADDR           WF_PLE_TOP_FL_QUE_CTRL_2_ADDR
#define WF_PLE_TOP_FL_QUE_CTRL_2_QUEUE_TAIL_FID_MASK           0x0FFF0000                // QUEUE_TAIL_FID[27..16]
#define WF_PLE_TOP_FL_QUE_CTRL_2_QUEUE_TAIL_FID_SHFT           16
#define WF_PLE_TOP_FL_QUE_CTRL_2_QUEUE_HEAD_FID_ADDR           WF_PLE_TOP_FL_QUE_CTRL_2_ADDR
#define WF_PLE_TOP_FL_QUE_CTRL_2_QUEUE_HEAD_FID_MASK           0x00000FFF                // QUEUE_HEAD_FID[11..0]
#define WF_PLE_TOP_FL_QUE_CTRL_2_QUEUE_HEAD_FID_SHFT           0

/* =====================================================================================

  ---FL_QUE_CTRL_3 (0x820C0000 + 0x3ec)---

    QUEUE_PKT_NUM[11..0]         - (RO) Total packet number of the queue  setting in 0x1b0[15:0]
    RESERVED12[31..12]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_FL_QUE_CTRL_3_QUEUE_PKT_NUM_ADDR            WF_PLE_TOP_FL_QUE_CTRL_3_ADDR
#define WF_PLE_TOP_FL_QUE_CTRL_3_QUEUE_PKT_NUM_MASK            0x00000FFF                // QUEUE_PKT_NUM[11..0]
#define WF_PLE_TOP_FL_QUE_CTRL_3_QUEUE_PKT_NUM_SHFT            0

/* =====================================================================================

  ---PL_QUE_CTRL_0 (0x820C0000 + 0x3f0)---

    NEXT_PAGE[11..0]             - (RO) Next page of PL_BUFFER_ADDR
    RESERVED12[15..12]           - (RO) Reserved bits
    PL_BUFFER_ADDR[27..16]       - (RW) Page address of read next page
    RESERVED28[30..28]           - (RO) Reserved bits
    EXECUTE[31]                  - (A0) Executes page link buffer read command

 =====================================================================================*/
#define WF_PLE_TOP_PL_QUE_CTRL_0_EXECUTE_ADDR                  WF_PLE_TOP_PL_QUE_CTRL_0_ADDR
#define WF_PLE_TOP_PL_QUE_CTRL_0_EXECUTE_MASK                  0x80000000                // EXECUTE[31]
#define WF_PLE_TOP_PL_QUE_CTRL_0_EXECUTE_SHFT                  31
#define WF_PLE_TOP_PL_QUE_CTRL_0_PL_BUFFER_ADDR_ADDR           WF_PLE_TOP_PL_QUE_CTRL_0_ADDR
#define WF_PLE_TOP_PL_QUE_CTRL_0_PL_BUFFER_ADDR_MASK           0x0FFF0000                // PL_BUFFER_ADDR[27..16]
#define WF_PLE_TOP_PL_QUE_CTRL_0_PL_BUFFER_ADDR_SHFT           16
#define WF_PLE_TOP_PL_QUE_CTRL_0_NEXT_PAGE_ADDR                WF_PLE_TOP_PL_QUE_CTRL_0_ADDR
#define WF_PLE_TOP_PL_QUE_CTRL_0_NEXT_PAGE_MASK                0x00000FFF                // NEXT_PAGE[11..0]
#define WF_PLE_TOP_PL_QUE_CTRL_0_NEXT_PAGE_SHFT                0

/* =====================================================================================

  ---HIF_ENQ_PKT_NUM (0x820C0000 + 0x400)---

    HIF_ENQ_CPU_PKT_NUM[15..0]   - (RO) Packet number of HIF enqueue to CPU, just keep in 16bits.
    HIF_ENQ_LMAC_PKT_NUM[31..16] - (RO) Packet number of HIF enqueue to LMAC, just keep in 16 bits

 =====================================================================================*/
#define WF_PLE_TOP_HIF_ENQ_PKT_NUM_HIF_ENQ_LMAC_PKT_NUM_ADDR   WF_PLE_TOP_HIF_ENQ_PKT_NUM_ADDR
#define WF_PLE_TOP_HIF_ENQ_PKT_NUM_HIF_ENQ_LMAC_PKT_NUM_MASK   0xFFFF0000                // HIF_ENQ_LMAC_PKT_NUM[31..16]
#define WF_PLE_TOP_HIF_ENQ_PKT_NUM_HIF_ENQ_LMAC_PKT_NUM_SHFT   16
#define WF_PLE_TOP_HIF_ENQ_PKT_NUM_HIF_ENQ_CPU_PKT_NUM_ADDR    WF_PLE_TOP_HIF_ENQ_PKT_NUM_ADDR
#define WF_PLE_TOP_HIF_ENQ_PKT_NUM_HIF_ENQ_CPU_PKT_NUM_MASK    0x0000FFFF                // HIF_ENQ_CPU_PKT_NUM[15..0]
#define WF_PLE_TOP_HIF_ENQ_PKT_NUM_HIF_ENQ_CPU_PKT_NUM_SHFT    0

/* =====================================================================================

  ---CPU_ENQ_PKT_NUM (0x820C0000 + 0x404)---

    CPU_ENQ_LMAC_PKT_NUM[15..0]  - (RO) Packet number of CPU enqueue to LMAC, just keep in 16 bits.
    RESV[31..16]                 - (RO) Reserved

 =====================================================================================*/
#define WF_PLE_TOP_CPU_ENQ_PKT_NUM_RESV_ADDR                   WF_PLE_TOP_CPU_ENQ_PKT_NUM_ADDR
#define WF_PLE_TOP_CPU_ENQ_PKT_NUM_RESV_MASK                   0xFFFF0000                // RESV[31..16]
#define WF_PLE_TOP_CPU_ENQ_PKT_NUM_RESV_SHFT                   16
#define WF_PLE_TOP_CPU_ENQ_PKT_NUM_CPU_ENQ_LMAC_PKT_NUM_ADDR   WF_PLE_TOP_CPU_ENQ_PKT_NUM_ADDR
#define WF_PLE_TOP_CPU_ENQ_PKT_NUM_CPU_ENQ_LMAC_PKT_NUM_MASK   0x0000FFFF                // CPU_ENQ_LMAC_PKT_NUM[15..0]
#define WF_PLE_TOP_CPU_ENQ_PKT_NUM_CPU_ENQ_LMAC_PKT_NUM_SHFT   0

/* =====================================================================================

  ---RLS_MSDU_PKT_NUM (0x820C0000 + 0x408)---

    RSL_RPT_TXD_NUM[15..0]       - (RO) TXD number of host report function
    RSL_MSDUID_NUM[31..16]       - (RO) Release MSDU_ID number of host report function

 =====================================================================================*/
#define WF_PLE_TOP_RLS_MSDU_PKT_NUM_RSL_MSDUID_NUM_ADDR        WF_PLE_TOP_RLS_MSDU_PKT_NUM_ADDR
#define WF_PLE_TOP_RLS_MSDU_PKT_NUM_RSL_MSDUID_NUM_MASK        0xFFFF0000                // RSL_MSDUID_NUM[31..16]
#define WF_PLE_TOP_RLS_MSDU_PKT_NUM_RSL_MSDUID_NUM_SHFT        16
#define WF_PLE_TOP_RLS_MSDU_PKT_NUM_RSL_RPT_TXD_NUM_ADDR       WF_PLE_TOP_RLS_MSDU_PKT_NUM_ADDR
#define WF_PLE_TOP_RLS_MSDU_PKT_NUM_RSL_RPT_TXD_NUM_MASK       0x0000FFFF                // RSL_RPT_TXD_NUM[15..0]
#define WF_PLE_TOP_RLS_MSDU_PKT_NUM_RSL_RPT_TXD_NUM_SHFT       0

/* =====================================================================================

  ---HOST_REPORT_NUM (0x820C0000 + 0x40c)---

    RSL_TXD_NUM[15..0]           - (RO) All TXD number of release function, include the no host report(not CT) TXD packets.
    HOST_REPORT_NUM[31..16]      - (RO) Host report number that be the PSE packets carry release MSDU_ID information

 =====================================================================================*/
#define WF_PLE_TOP_HOST_REPORT_NUM_HOST_REPORT_NUM_ADDR        WF_PLE_TOP_HOST_REPORT_NUM_ADDR
#define WF_PLE_TOP_HOST_REPORT_NUM_HOST_REPORT_NUM_MASK        0xFFFF0000                // HOST_REPORT_NUM[31..16]
#define WF_PLE_TOP_HOST_REPORT_NUM_HOST_REPORT_NUM_SHFT        16
#define WF_PLE_TOP_HOST_REPORT_NUM_RSL_TXD_NUM_ADDR            WF_PLE_TOP_HOST_REPORT_NUM_ADDR
#define WF_PLE_TOP_HOST_REPORT_NUM_RSL_TXD_NUM_MASK            0x0000FFFF                // RSL_TXD_NUM[15..0]
#define WF_PLE_TOP_HOST_REPORT_NUM_RSL_TXD_NUM_SHFT            0

/* =====================================================================================

  ---UMAC_DBG_CTRL (0x820C0000 + 0x410)---

    UMAC_DBG_FUNC_SEL[3..0]      - (RW) Selects UMAC debug mode
    RESERVED4[7..4]              - (RO) Reserved bits
    PLE_DBG_FLAG_A_NIB_EN[11..8] - (RW) Enable control of PLE debug flag A nibble
    PLE_DBG_FLAG_B_NIB_EN[15..12] - (RW) Enable control of PLE debug flag B nibble
    PSE_DBG_FLAG_A_NIB_EN[19..16] - (RW) Enable control of PSE debug flag A nibble
    PSE_DBG_FLAG_B_NIB_EN[23..20] - (RW) Enable control of PSE debug flag B nibble
    RESERVED24[31..24]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_UMAC_DBG_CTRL_PSE_DBG_FLAG_B_NIB_EN_ADDR    WF_PLE_TOP_UMAC_DBG_CTRL_ADDR
#define WF_PLE_TOP_UMAC_DBG_CTRL_PSE_DBG_FLAG_B_NIB_EN_MASK    0x00F00000                // PSE_DBG_FLAG_B_NIB_EN[23..20]
#define WF_PLE_TOP_UMAC_DBG_CTRL_PSE_DBG_FLAG_B_NIB_EN_SHFT    20
#define WF_PLE_TOP_UMAC_DBG_CTRL_PSE_DBG_FLAG_A_NIB_EN_ADDR    WF_PLE_TOP_UMAC_DBG_CTRL_ADDR
#define WF_PLE_TOP_UMAC_DBG_CTRL_PSE_DBG_FLAG_A_NIB_EN_MASK    0x000F0000                // PSE_DBG_FLAG_A_NIB_EN[19..16]
#define WF_PLE_TOP_UMAC_DBG_CTRL_PSE_DBG_FLAG_A_NIB_EN_SHFT    16
#define WF_PLE_TOP_UMAC_DBG_CTRL_PLE_DBG_FLAG_B_NIB_EN_ADDR    WF_PLE_TOP_UMAC_DBG_CTRL_ADDR
#define WF_PLE_TOP_UMAC_DBG_CTRL_PLE_DBG_FLAG_B_NIB_EN_MASK    0x0000F000                // PLE_DBG_FLAG_B_NIB_EN[15..12]
#define WF_PLE_TOP_UMAC_DBG_CTRL_PLE_DBG_FLAG_B_NIB_EN_SHFT    12
#define WF_PLE_TOP_UMAC_DBG_CTRL_PLE_DBG_FLAG_A_NIB_EN_ADDR    WF_PLE_TOP_UMAC_DBG_CTRL_ADDR
#define WF_PLE_TOP_UMAC_DBG_CTRL_PLE_DBG_FLAG_A_NIB_EN_MASK    0x00000F00                // PLE_DBG_FLAG_A_NIB_EN[11..8]
#define WF_PLE_TOP_UMAC_DBG_CTRL_PLE_DBG_FLAG_A_NIB_EN_SHFT    8
#define WF_PLE_TOP_UMAC_DBG_CTRL_UMAC_DBG_FUNC_SEL_ADDR        WF_PLE_TOP_UMAC_DBG_CTRL_ADDR
#define WF_PLE_TOP_UMAC_DBG_CTRL_UMAC_DBG_FUNC_SEL_MASK        0x0000000F                // UMAC_DBG_FUNC_SEL[3..0]
#define WF_PLE_TOP_UMAC_DBG_CTRL_UMAC_DBG_FUNC_SEL_SHFT        0

/* =====================================================================================

  ---PLE_DBG_A_BYTE_SEL (0x820C0000 + 0x414)---

    PLE_DBG_FLAG_A_BYTE0_SEL[7..0] - (RW) Debug flag selection of PLE debug A byte 0
    PLE_DBG_FLAG_A_BYTE1_SEL[15..8] - (RW) Debug flag selection of PLE debug A byte 1
    PLE_DBG_FLAG_A_BYTE2_SEL[23..16] - (RW) Debug flag selection of PLE debug A byte 2
    PLE_DBG_FLAG_A_BYTE3_SEL[31..24] - (RW) Debug flag selection of PLE debug A byte 3

 =====================================================================================*/
#define WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_PLE_DBG_FLAG_A_BYTE3_SEL_ADDR WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_ADDR
#define WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_PLE_DBG_FLAG_A_BYTE3_SEL_MASK 0xFF000000                // PLE_DBG_FLAG_A_BYTE3_SEL[31..24]
#define WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_PLE_DBG_FLAG_A_BYTE3_SEL_SHFT 24
#define WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_PLE_DBG_FLAG_A_BYTE2_SEL_ADDR WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_ADDR
#define WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_PLE_DBG_FLAG_A_BYTE2_SEL_MASK 0x00FF0000                // PLE_DBG_FLAG_A_BYTE2_SEL[23..16]
#define WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_PLE_DBG_FLAG_A_BYTE2_SEL_SHFT 16
#define WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_PLE_DBG_FLAG_A_BYTE1_SEL_ADDR WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_ADDR
#define WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_PLE_DBG_FLAG_A_BYTE1_SEL_MASK 0x0000FF00                // PLE_DBG_FLAG_A_BYTE1_SEL[15..8]
#define WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_PLE_DBG_FLAG_A_BYTE1_SEL_SHFT 8
#define WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_PLE_DBG_FLAG_A_BYTE0_SEL_ADDR WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_ADDR
#define WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_PLE_DBG_FLAG_A_BYTE0_SEL_MASK 0x000000FF                // PLE_DBG_FLAG_A_BYTE0_SEL[7..0]
#define WF_PLE_TOP_PLE_DBG_A_BYTE_SEL_PLE_DBG_FLAG_A_BYTE0_SEL_SHFT 0

/* =====================================================================================

  ---PLE_DBG_B_BYTE_SEL (0x820C0000 + 0x418)---

    PLE_DBG_FLAG_B_BYTE0_SEL[7..0] - (RW) Debug flag selection of PLE debug B byte 0
    PLE_DBG_FLAG_B_BYTE1_SEL[15..8] - (RW) Debug flag selection of PLE debug B byte 1
    PLE_DBG_FLAG_B_BYTE2_SEL[23..16] - (RW) Debug flag selection of PLE debug B byte 2
    PLE_DBG_FLAG_B_BYTE3_SEL[31..24] - (RW) Debug flag selection of PLE debug B byte 3

 =====================================================================================*/
#define WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_PLE_DBG_FLAG_B_BYTE3_SEL_ADDR WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_ADDR
#define WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_PLE_DBG_FLAG_B_BYTE3_SEL_MASK 0xFF000000                // PLE_DBG_FLAG_B_BYTE3_SEL[31..24]
#define WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_PLE_DBG_FLAG_B_BYTE3_SEL_SHFT 24
#define WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_PLE_DBG_FLAG_B_BYTE2_SEL_ADDR WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_ADDR
#define WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_PLE_DBG_FLAG_B_BYTE2_SEL_MASK 0x00FF0000                // PLE_DBG_FLAG_B_BYTE2_SEL[23..16]
#define WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_PLE_DBG_FLAG_B_BYTE2_SEL_SHFT 16
#define WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_PLE_DBG_FLAG_B_BYTE1_SEL_ADDR WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_ADDR
#define WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_PLE_DBG_FLAG_B_BYTE1_SEL_MASK 0x0000FF00                // PLE_DBG_FLAG_B_BYTE1_SEL[15..8]
#define WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_PLE_DBG_FLAG_B_BYTE1_SEL_SHFT 8
#define WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_PLE_DBG_FLAG_B_BYTE0_SEL_ADDR WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_ADDR
#define WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_PLE_DBG_FLAG_B_BYTE0_SEL_MASK 0x000000FF                // PLE_DBG_FLAG_B_BYTE0_SEL[7..0]
#define WF_PLE_TOP_PLE_DBG_B_BYTE_SEL_PLE_DBG_FLAG_B_BYTE0_SEL_SHFT 0

/* =====================================================================================

  ---FUNC_ACT_CNT_1 (0x820C0000 + 0x424)---

    MACTX0_ACT_CNT[3..0]         - (RO) Counter of MACTX0 TX active.
    MACTX0_NOR_END_CNT[7..4]     - (RO) Counter of MACTX0 TX normal end.
    MACTX0_ABORT_CNT[11..8]      - (RO) Counter of MACTX0 TX abort.
    RESERVED12[15..12]           - (RO) Reserved bits
    TXCMD0_ADD_FID_CNT[19..16]   - (RO) Counter of TXCMD0 TX add FID.
    TXCMD0_NOR_END_CNT[23..20]   - (RO) Counter of TXCMD0 TX normal end.
    TXCMD0_ABORT_CNT[27..24]     - (RO) Counter of TXCMD0 TX abort.
    RESERVED28[31..28]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_FUNC_ACT_CNT_1_TXCMD0_ABORT_CNT_ADDR        WF_PLE_TOP_FUNC_ACT_CNT_1_ADDR
#define WF_PLE_TOP_FUNC_ACT_CNT_1_TXCMD0_ABORT_CNT_MASK        0x0F000000                // TXCMD0_ABORT_CNT[27..24]
#define WF_PLE_TOP_FUNC_ACT_CNT_1_TXCMD0_ABORT_CNT_SHFT        24
#define WF_PLE_TOP_FUNC_ACT_CNT_1_TXCMD0_NOR_END_CNT_ADDR      WF_PLE_TOP_FUNC_ACT_CNT_1_ADDR
#define WF_PLE_TOP_FUNC_ACT_CNT_1_TXCMD0_NOR_END_CNT_MASK      0x00F00000                // TXCMD0_NOR_END_CNT[23..20]
#define WF_PLE_TOP_FUNC_ACT_CNT_1_TXCMD0_NOR_END_CNT_SHFT      20
#define WF_PLE_TOP_FUNC_ACT_CNT_1_TXCMD0_ADD_FID_CNT_ADDR      WF_PLE_TOP_FUNC_ACT_CNT_1_ADDR
#define WF_PLE_TOP_FUNC_ACT_CNT_1_TXCMD0_ADD_FID_CNT_MASK      0x000F0000                // TXCMD0_ADD_FID_CNT[19..16]
#define WF_PLE_TOP_FUNC_ACT_CNT_1_TXCMD0_ADD_FID_CNT_SHFT      16
#define WF_PLE_TOP_FUNC_ACT_CNT_1_MACTX0_ABORT_CNT_ADDR        WF_PLE_TOP_FUNC_ACT_CNT_1_ADDR
#define WF_PLE_TOP_FUNC_ACT_CNT_1_MACTX0_ABORT_CNT_MASK        0x00000F00                // MACTX0_ABORT_CNT[11..8]
#define WF_PLE_TOP_FUNC_ACT_CNT_1_MACTX0_ABORT_CNT_SHFT        8
#define WF_PLE_TOP_FUNC_ACT_CNT_1_MACTX0_NOR_END_CNT_ADDR      WF_PLE_TOP_FUNC_ACT_CNT_1_ADDR
#define WF_PLE_TOP_FUNC_ACT_CNT_1_MACTX0_NOR_END_CNT_MASK      0x000000F0                // MACTX0_NOR_END_CNT[7..4]
#define WF_PLE_TOP_FUNC_ACT_CNT_1_MACTX0_NOR_END_CNT_SHFT      4
#define WF_PLE_TOP_FUNC_ACT_CNT_1_MACTX0_ACT_CNT_ADDR          WF_PLE_TOP_FUNC_ACT_CNT_1_ADDR
#define WF_PLE_TOP_FUNC_ACT_CNT_1_MACTX0_ACT_CNT_MASK          0x0000000F                // MACTX0_ACT_CNT[3..0]
#define WF_PLE_TOP_FUNC_ACT_CNT_1_MACTX0_ACT_CNT_SHFT          0

/* =====================================================================================

  ---SRAM_MBIST_BACKGROUND (0x820C0000 + 0x430)---

    MBIST_BACKGROUND[15..0]      - (RW) bsel setting for PLE SRAM MBIST circuit
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_SRAM_MBIST_BACKGROUND_MBIST_BACKGROUND_ADDR WF_PLE_TOP_SRAM_MBIST_BACKGROUND_ADDR
#define WF_PLE_TOP_SRAM_MBIST_BACKGROUND_MBIST_BACKGROUND_MASK 0x0000FFFF                // MBIST_BACKGROUND[15..0]
#define WF_PLE_TOP_SRAM_MBIST_BACKGROUND_MBIST_BACKGROUND_SHFT 0

/* =====================================================================================

  ---SRAM_MBIST_BSEL (0x820C0000 + 0x434)---

    MBIST_BSEL[15..0]            - (RW) The bsel setting for PLE SRAM MBIST circuit.
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_SRAM_MBIST_BSEL_MBIST_BSEL_ADDR             WF_PLE_TOP_SRAM_MBIST_BSEL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_BSEL_MBIST_BSEL_MASK             0x0000FFFF                // MBIST_BSEL[15..0]
#define WF_PLE_TOP_SRAM_MBIST_BSEL_MBIST_BSEL_SHFT             0

/* =====================================================================================

  ---SRAM_MBIST_DONE (0x820C0000 + 0x438)---

    G1_MBIST_DONE[0]             - (RO) Working status of PLE G1 SRAM MBIST circuit
    G2_MBIST_DONE[1]             - (RO) Working status of PLE G2 SRAM MBIST circuit
    RESERVED2[31..2]             - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_SRAM_MBIST_DONE_G2_MBIST_DONE_ADDR          WF_PLE_TOP_SRAM_MBIST_DONE_ADDR
#define WF_PLE_TOP_SRAM_MBIST_DONE_G2_MBIST_DONE_MASK          0x00000002                // G2_MBIST_DONE[1]
#define WF_PLE_TOP_SRAM_MBIST_DONE_G2_MBIST_DONE_SHFT          1
#define WF_PLE_TOP_SRAM_MBIST_DONE_G1_MBIST_DONE_ADDR          WF_PLE_TOP_SRAM_MBIST_DONE_ADDR
#define WF_PLE_TOP_SRAM_MBIST_DONE_G1_MBIST_DONE_MASK          0x00000001                // G1_MBIST_DONE[0]
#define WF_PLE_TOP_SRAM_MBIST_DONE_G1_MBIST_DONE_SHFT          0

/* =====================================================================================

  ---SRAM_MBIST_FAIL (0x820C0000 + 0x43c)---

    G1_SRAM0_MBIST_FAIL[0]       - (RO) MBIST check result of group 1 SRAM0
    G1_SRAM1_MBIST_FAIL[1]       - (RO) MBIST check result of group 1 SRAM1
    G1_SRAM2_MBIST_FAIL[2]       - (RO) MBIST check result of group 1 SRAM2
    G1_SRAM3_MBIST_FAIL[3]       - (RO) MBIST check result of group 1 SRAM3
    G2_SRAM0_MBIST_FAIL[4]       - (RO) MBIST check result of group 2 SRAM0
    G2_SRAM1_MBIST_FAIL[5]       - (RO) MBIST check result of group 2 SRAM1
    G2_SRAM2_MBIST_FAIL[6]       - (RO) MBIST check result of group 2 SRAM2
    G2_SRAM3_MBIST_FAIL[7]       - (RO) MBIST check result of group 2 SRAM3
    G2_SRAM4_MBIST_FAIL[8]       - (RO) MBIST check result of group 2 SRAM4
    G2_SRAM5_MBIST_FAIL[9]       - (RO) MBIST check result of group 2 SRAM5
    RESERVED10[31..10]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM5_MBIST_FAIL_ADDR    WF_PLE_TOP_SRAM_MBIST_FAIL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM5_MBIST_FAIL_MASK    0x00000200                // G2_SRAM5_MBIST_FAIL[9]
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM5_MBIST_FAIL_SHFT    9
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM4_MBIST_FAIL_ADDR    WF_PLE_TOP_SRAM_MBIST_FAIL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM4_MBIST_FAIL_MASK    0x00000100                // G2_SRAM4_MBIST_FAIL[8]
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM4_MBIST_FAIL_SHFT    8
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM3_MBIST_FAIL_ADDR    WF_PLE_TOP_SRAM_MBIST_FAIL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM3_MBIST_FAIL_MASK    0x00000080                // G2_SRAM3_MBIST_FAIL[7]
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM3_MBIST_FAIL_SHFT    7
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM2_MBIST_FAIL_ADDR    WF_PLE_TOP_SRAM_MBIST_FAIL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM2_MBIST_FAIL_MASK    0x00000040                // G2_SRAM2_MBIST_FAIL[6]
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM2_MBIST_FAIL_SHFT    6
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM1_MBIST_FAIL_ADDR    WF_PLE_TOP_SRAM_MBIST_FAIL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM1_MBIST_FAIL_MASK    0x00000020                // G2_SRAM1_MBIST_FAIL[5]
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM1_MBIST_FAIL_SHFT    5
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM0_MBIST_FAIL_ADDR    WF_PLE_TOP_SRAM_MBIST_FAIL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM0_MBIST_FAIL_MASK    0x00000010                // G2_SRAM0_MBIST_FAIL[4]
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G2_SRAM0_MBIST_FAIL_SHFT    4
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G1_SRAM3_MBIST_FAIL_ADDR    WF_PLE_TOP_SRAM_MBIST_FAIL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G1_SRAM3_MBIST_FAIL_MASK    0x00000008                // G1_SRAM3_MBIST_FAIL[3]
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G1_SRAM3_MBIST_FAIL_SHFT    3
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G1_SRAM2_MBIST_FAIL_ADDR    WF_PLE_TOP_SRAM_MBIST_FAIL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G1_SRAM2_MBIST_FAIL_MASK    0x00000004                // G1_SRAM2_MBIST_FAIL[2]
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G1_SRAM2_MBIST_FAIL_SHFT    2
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G1_SRAM1_MBIST_FAIL_ADDR    WF_PLE_TOP_SRAM_MBIST_FAIL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G1_SRAM1_MBIST_FAIL_MASK    0x00000002                // G1_SRAM1_MBIST_FAIL[1]
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G1_SRAM1_MBIST_FAIL_SHFT    1
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G1_SRAM0_MBIST_FAIL_ADDR    WF_PLE_TOP_SRAM_MBIST_FAIL_ADDR
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G1_SRAM0_MBIST_FAIL_MASK    0x00000001                // G1_SRAM0_MBIST_FAIL[0]
#define WF_PLE_TOP_SRAM_MBIST_FAIL_G1_SRAM0_MBIST_FAIL_SHFT    0

/* =====================================================================================

  ---SRAM_AWT_HDEN_CTRL (0x820C0000 + 0x440)---

    SRAM_AWT_CTRL[13..0]         - (RW) AWT setting of SRAMS
    RESERVED14[15..14]           - (RO) Reserved bits
    SRAM_HDEN_CTRL[29..16]       - (RW) HDEN setting of SRAMS
    RESERVED30[31..30]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_SRAM_AWT_HDEN_CTRL_SRAM_HDEN_CTRL_ADDR      WF_PLE_TOP_SRAM_AWT_HDEN_CTRL_ADDR
#define WF_PLE_TOP_SRAM_AWT_HDEN_CTRL_SRAM_HDEN_CTRL_MASK      0x3FFF0000                // SRAM_HDEN_CTRL[29..16]
#define WF_PLE_TOP_SRAM_AWT_HDEN_CTRL_SRAM_HDEN_CTRL_SHFT      16
#define WF_PLE_TOP_SRAM_AWT_HDEN_CTRL_SRAM_AWT_CTRL_ADDR       WF_PLE_TOP_SRAM_AWT_HDEN_CTRL_ADDR
#define WF_PLE_TOP_SRAM_AWT_HDEN_CTRL_SRAM_AWT_CTRL_MASK       0x00003FFF                // SRAM_AWT_CTRL[13..0]
#define WF_PLE_TOP_SRAM_AWT_HDEN_CTRL_SRAM_AWT_CTRL_SHFT       0

/* =====================================================================================

  ---DRR_TABLE_WDATA0 (0x820C0000 + 0x450)---

    DRR_TABLE_WDATA[31..0]       - (RW) DRRwdata[31:0] for reading/writing DRR table
                                     Mode 0x2?: DRR station mode
                                             WData[15:0]: Sta setting
                                             WData[127:16]: Reserved
                                     Mode 0x4?: BSS mode
                                              See SRAM layout.
                                     Mode 0x8?: Charge mode
                                             WData [15:0]: Charge length (unit: byte)
                                             WData [31:16]: Charge time 9 unit 1.024us
                                             WData[127:32]: Reserved

 =====================================================================================*/
#define WF_PLE_TOP_DRR_TABLE_WDATA0_DRR_TABLE_WDATA_ADDR       WF_PLE_TOP_DRR_TABLE_WDATA0_ADDR
#define WF_PLE_TOP_DRR_TABLE_WDATA0_DRR_TABLE_WDATA_MASK       0xFFFFFFFF                // DRR_TABLE_WDATA[31..0]
#define WF_PLE_TOP_DRR_TABLE_WDATA0_DRR_TABLE_WDATA_SHFT       0

/* =====================================================================================

  ---DRR_TABLE_RDATA0 (0x820C0000 + 0x470)---

    DRR_TABLE_RDATA[31..0]       - (RW) DRR rdata[31:0] for reading/writing DRR table

 =====================================================================================*/
#define WF_PLE_TOP_DRR_TABLE_RDATA0_DRR_TABLE_RDATA_ADDR       WF_PLE_TOP_DRR_TABLE_RDATA0_ADDR
#define WF_PLE_TOP_DRR_TABLE_RDATA0_DRR_TABLE_RDATA_MASK       0xFFFFFFFF                // DRR_TABLE_RDATA[31..0]
#define WF_PLE_TOP_DRR_TABLE_RDATA0_DRR_TABLE_RDATA_SHFT       0

/* =====================================================================================

  ---DRR_TABLE_CTRL (0x820C0000 + 0x490)---

    INDEX[11..0]                 - (RW) Operation index
                                     Mode 0x00: DRR STA link, STA relay
                                         Bit[1:0]: qid
                                         Bit[10:2]: Station ID
                                     //--
                                     Mode 0x20: addr[6:0] mean station ID
                                     Mode 0x21: addr[6:0] mean station ID
                                     Mode 0x22: SRAM idx (debug mode)
                                     Mode 0x23: SRAM idx (debug mode)
                                         0~35: STA bitmap
                                         36~51: STA setting
                                     //--
                                     Mode 0x40: addr[3:0] = bssid,
                                     Mode 0x41: addr[3:0] = bssid,
                                     Mode 0x42: addr[3:0] = bssid,
                                     Mode 0x43: addr[3:0] = bssid,
                                     Mode 0x44: SRAM idx (debug mode)
                                     Mode 0x45: SRAM idx (debug mode)
                                         0~15: BSS bitmap
                                         16~31: BSS setting
                                         32~47: Token status
                                     //--
                                     Mode 0x81~0x83: addr[3:0] = BSS group ID
                                         Bit[0]: Charge bw_token
                                         Bit[1]: Charge bw DRR
                                     Mode 0x84: addr[7:0] = station ID, addr[11:8]= qid
                                         Bit[2]: Charge airtime DRR
                                         Bit[3]: Charge is ADD mode
    WRITE_MASK[15..12]           - (RW) DRR table will not be updated if mask write bits are enabled.
    MODE[23..16]                 - (RW) Operation mode for DRR table
    WRITE_MASK_2[27..24]         - (RW) DRR table will not be updated if mask write bits are enabled.
    RESERVED28[30..28]           - (RO) Reserved bits
    EXECUTE[31]                  - (RO) Excutes SW command to read/write DRR table

 =====================================================================================*/
#define WF_PLE_TOP_DRR_TABLE_CTRL_EXECUTE_ADDR                 WF_PLE_TOP_DRR_TABLE_CTRL_ADDR
#define WF_PLE_TOP_DRR_TABLE_CTRL_EXECUTE_MASK                 0x80000000                // EXECUTE[31]
#define WF_PLE_TOP_DRR_TABLE_CTRL_EXECUTE_SHFT                 31
#define WF_PLE_TOP_DRR_TABLE_CTRL_WRITE_MASK_2_ADDR            WF_PLE_TOP_DRR_TABLE_CTRL_ADDR
#define WF_PLE_TOP_DRR_TABLE_CTRL_WRITE_MASK_2_MASK            0x0F000000                // WRITE_MASK_2[27..24]
#define WF_PLE_TOP_DRR_TABLE_CTRL_WRITE_MASK_2_SHFT            24
#define WF_PLE_TOP_DRR_TABLE_CTRL_MODE_ADDR                    WF_PLE_TOP_DRR_TABLE_CTRL_ADDR
#define WF_PLE_TOP_DRR_TABLE_CTRL_MODE_MASK                    0x00FF0000                // MODE[23..16]
#define WF_PLE_TOP_DRR_TABLE_CTRL_MODE_SHFT                    16
#define WF_PLE_TOP_DRR_TABLE_CTRL_WRITE_MASK_ADDR              WF_PLE_TOP_DRR_TABLE_CTRL_ADDR
#define WF_PLE_TOP_DRR_TABLE_CTRL_WRITE_MASK_MASK              0x0000F000                // WRITE_MASK[15..12]
#define WF_PLE_TOP_DRR_TABLE_CTRL_WRITE_MASK_SHFT              12
#define WF_PLE_TOP_DRR_TABLE_CTRL_INDEX_ADDR                   WF_PLE_TOP_DRR_TABLE_CTRL_ADDR
#define WF_PLE_TOP_DRR_TABLE_CTRL_INDEX_MASK                   0x00000FFF                // INDEX[11..0]
#define WF_PLE_TOP_DRR_TABLE_CTRL_INDEX_SHFT                   0

/* =====================================================================================

  ---DRR_HW_SRCHCMD_FULL (0x820C0000 + 0x4c0)---

    CMD_FULL_CHNL_DL[15..0]      - (RW) Hardware search command full flag of 16 backoff channel of downlink
    CMD_FULL_CHNL_UL[31..16]     - (RW) Hardware search command full flag of 16 backoff channel of uplink

 =====================================================================================*/
#define WF_PLE_TOP_DRR_HW_SRCHCMD_FULL_CMD_FULL_CHNL_UL_ADDR   WF_PLE_TOP_DRR_HW_SRCHCMD_FULL_ADDR
#define WF_PLE_TOP_DRR_HW_SRCHCMD_FULL_CMD_FULL_CHNL_UL_MASK   0xFFFF0000                // CMD_FULL_CHNL_UL[31..16]
#define WF_PLE_TOP_DRR_HW_SRCHCMD_FULL_CMD_FULL_CHNL_UL_SHFT   16
#define WF_PLE_TOP_DRR_HW_SRCHCMD_FULL_CMD_FULL_CHNL_DL_ADDR   WF_PLE_TOP_DRR_HW_SRCHCMD_FULL_ADDR
#define WF_PLE_TOP_DRR_HW_SRCHCMD_FULL_CMD_FULL_CHNL_DL_MASK   0x0000FFFF                // CMD_FULL_CHNL_DL[15..0]
#define WF_PLE_TOP_DRR_HW_SRCHCMD_FULL_CMD_FULL_CHNL_DL_SHFT   0

/* =====================================================================================

  ---TWT_DBG (0x820C0000 + 0x4d0)---

    TABLE_IDX_SEL[2..0]          - (RW) Station index selection
    UL_TABLE_SEL[3]              - (RW) Downlink/uplink station table selection
    RESERVED4[15..4]             - (RO) Reserved bits
    TABLE_WLAN_ID[25..16]        - (RO) Station WLAN ID in station table
    RESERVED26[27..26]           - (RO) Reserved bits
    STA_CNT[31..28]              - (RO) Valid station count in station table

 =====================================================================================*/
#define WF_PLE_TOP_TWT_DBG_STA_CNT_ADDR                        WF_PLE_TOP_TWT_DBG_ADDR
#define WF_PLE_TOP_TWT_DBG_STA_CNT_MASK                        0xF0000000                // STA_CNT[31..28]
#define WF_PLE_TOP_TWT_DBG_STA_CNT_SHFT                        28
#define WF_PLE_TOP_TWT_DBG_TABLE_WLAN_ID_ADDR                  WF_PLE_TOP_TWT_DBG_ADDR
#define WF_PLE_TOP_TWT_DBG_TABLE_WLAN_ID_MASK                  0x03FF0000                // TABLE_WLAN_ID[25..16]
#define WF_PLE_TOP_TWT_DBG_TABLE_WLAN_ID_SHFT                  16
#define WF_PLE_TOP_TWT_DBG_UL_TABLE_SEL_ADDR                   WF_PLE_TOP_TWT_DBG_ADDR
#define WF_PLE_TOP_TWT_DBG_UL_TABLE_SEL_MASK                   0x00000008                // UL_TABLE_SEL[3]
#define WF_PLE_TOP_TWT_DBG_UL_TABLE_SEL_SHFT                   3
#define WF_PLE_TOP_TWT_DBG_TABLE_IDX_SEL_ADDR                  WF_PLE_TOP_TWT_DBG_ADDR
#define WF_PLE_TOP_TWT_DBG_TABLE_IDX_SEL_MASK                  0x00000007                // TABLE_IDX_SEL[2..0]
#define WF_PLE_TOP_TWT_DBG_TABLE_IDX_SEL_SHFT                  0

/* =====================================================================================

  ---VOW_DBG_SEL (0x820C0000 + 0x4d4)---

    AIRTIME_DEBUG_SEL[15..0]     - (RW) Selects airtime debug
    BW_DEBUG_SEL[31..16]         - (RW) Selects BW control debug

 =====================================================================================*/
#define WF_PLE_TOP_VOW_DBG_SEL_BW_DEBUG_SEL_ADDR               WF_PLE_TOP_VOW_DBG_SEL_ADDR
#define WF_PLE_TOP_VOW_DBG_SEL_BW_DEBUG_SEL_MASK               0xFFFF0000                // BW_DEBUG_SEL[31..16]
#define WF_PLE_TOP_VOW_DBG_SEL_BW_DEBUG_SEL_SHFT               16
#define WF_PLE_TOP_VOW_DBG_SEL_AIRTIME_DEBUG_SEL_ADDR          WF_PLE_TOP_VOW_DBG_SEL_ADDR
#define WF_PLE_TOP_VOW_DBG_SEL_AIRTIME_DEBUG_SEL_MASK          0x0000FFFF                // AIRTIME_DEBUG_SEL[15..0]
#define WF_PLE_TOP_VOW_DBG_SEL_AIRTIME_DEBUG_SEL_SHFT          0

/* =====================================================================================

  ---AIRTIME_DBG_INFO0 (0x820C0000 + 0x4d8)---

    AIRTIME_DBG_INFO0[31..0]     - (RO) Station link head/tail

 =====================================================================================*/
#define WF_PLE_TOP_AIRTIME_DBG_INFO0_AIRTIME_DBG_INFO0_ADDR    WF_PLE_TOP_AIRTIME_DBG_INFO0_ADDR
#define WF_PLE_TOP_AIRTIME_DBG_INFO0_AIRTIME_DBG_INFO0_MASK    0xFFFFFFFF                // AIRTIME_DBG_INFO0[31..0]
#define WF_PLE_TOP_AIRTIME_DBG_INFO0_AIRTIME_DBG_INFO0_SHFT    0

/* =====================================================================================

  ---AIRTIME_DBG_INFO1 (0x820C0000 + 0x4dc)---

    AIRTIME_DBG_INFO1[31..0]     - (RO) Station link head/tail

 =====================================================================================*/
#define WF_PLE_TOP_AIRTIME_DBG_INFO1_AIRTIME_DBG_INFO1_ADDR    WF_PLE_TOP_AIRTIME_DBG_INFO1_ADDR
#define WF_PLE_TOP_AIRTIME_DBG_INFO1_AIRTIME_DBG_INFO1_MASK    0xFFFFFFFF                // AIRTIME_DBG_INFO1[31..0]
#define WF_PLE_TOP_AIRTIME_DBG_INFO1_AIRTIME_DBG_INFO1_SHFT    0

/* =====================================================================================

  ---AC0_QUEUE_EMPTY0 (0x820C0000 + 0x500)---

    AC0_QUEUE_EMPTY_0[7..0]      - (RO) Empty flag for STA 0~7 AC0 queue
    AC0_QUEUE_EMPTY_0_1[15..8]   - (RO) Empty flag for STA 8~15 AC0 queue
    AC0_QUEUE_EMPTY_0_2[31..16]  - (RO) Empty flag for STA 16~31 AC0 queue

 =====================================================================================*/
#define WF_PLE_TOP_AC0_QUEUE_EMPTY0_AC0_QUEUE_EMPTY_0_2_ADDR   WF_PLE_TOP_AC0_QUEUE_EMPTY0_ADDR
#define WF_PLE_TOP_AC0_QUEUE_EMPTY0_AC0_QUEUE_EMPTY_0_2_MASK   0xFFFF0000                // AC0_QUEUE_EMPTY_0_2[31..16]
#define WF_PLE_TOP_AC0_QUEUE_EMPTY0_AC0_QUEUE_EMPTY_0_2_SHFT   16
#define WF_PLE_TOP_AC0_QUEUE_EMPTY0_AC0_QUEUE_EMPTY_0_1_ADDR   WF_PLE_TOP_AC0_QUEUE_EMPTY0_ADDR
#define WF_PLE_TOP_AC0_QUEUE_EMPTY0_AC0_QUEUE_EMPTY_0_1_MASK   0x0000FF00                // AC0_QUEUE_EMPTY_0_1[15..8]
#define WF_PLE_TOP_AC0_QUEUE_EMPTY0_AC0_QUEUE_EMPTY_0_1_SHFT   8
#define WF_PLE_TOP_AC0_QUEUE_EMPTY0_AC0_QUEUE_EMPTY_0_ADDR     WF_PLE_TOP_AC0_QUEUE_EMPTY0_ADDR
#define WF_PLE_TOP_AC0_QUEUE_EMPTY0_AC0_QUEUE_EMPTY_0_MASK     0x000000FF                // AC0_QUEUE_EMPTY_0[7..0]
#define WF_PLE_TOP_AC0_QUEUE_EMPTY0_AC0_QUEUE_EMPTY_0_SHFT     0

/* =====================================================================================

  ---AC1_QUEUE_EMPTY0 (0x820C0000 + 0x540)---

    AC1_QUEUE_EMPTY_0[7..0]      - (RO) Empty flag for STA 0~7 AC1 queue
    AC1_QUEUE_EMPTY_0_1[15..8]   - (RO) Empty flag for STA 8~15 AC1 queue
    AC1_QUEUE_EMPTY_0_2[31..16]  - (RO) Empty flag for STA 16~31 AC1 queue

 =====================================================================================*/
#define WF_PLE_TOP_AC1_QUEUE_EMPTY0_AC1_QUEUE_EMPTY_0_2_ADDR   WF_PLE_TOP_AC1_QUEUE_EMPTY0_ADDR
#define WF_PLE_TOP_AC1_QUEUE_EMPTY0_AC1_QUEUE_EMPTY_0_2_MASK   0xFFFF0000                // AC1_QUEUE_EMPTY_0_2[31..16]
#define WF_PLE_TOP_AC1_QUEUE_EMPTY0_AC1_QUEUE_EMPTY_0_2_SHFT   16
#define WF_PLE_TOP_AC1_QUEUE_EMPTY0_AC1_QUEUE_EMPTY_0_1_ADDR   WF_PLE_TOP_AC1_QUEUE_EMPTY0_ADDR
#define WF_PLE_TOP_AC1_QUEUE_EMPTY0_AC1_QUEUE_EMPTY_0_1_MASK   0x0000FF00                // AC1_QUEUE_EMPTY_0_1[15..8]
#define WF_PLE_TOP_AC1_QUEUE_EMPTY0_AC1_QUEUE_EMPTY_0_1_SHFT   8
#define WF_PLE_TOP_AC1_QUEUE_EMPTY0_AC1_QUEUE_EMPTY_0_ADDR     WF_PLE_TOP_AC1_QUEUE_EMPTY0_ADDR
#define WF_PLE_TOP_AC1_QUEUE_EMPTY0_AC1_QUEUE_EMPTY_0_MASK     0x000000FF                // AC1_QUEUE_EMPTY_0[7..0]
#define WF_PLE_TOP_AC1_QUEUE_EMPTY0_AC1_QUEUE_EMPTY_0_SHFT     0

/* =====================================================================================

  ---AC2_QUEUE_EMPTY0 (0x820C0000 + 0x580)---

    AC2_QUEUE_EMPTY_0[7..0]      - (RO) Empty flag for STA 0~7 AC2 queue
    AC2_QUEUE_EMPTY_0_1[15..8]   - (RO) Empty flag for STA 8~15 AC2 queue
    AC2_QUEUE_EMPTY_0_2[31..16]  - (RO) Empty flag for STA 16~31 AC2 queue

 =====================================================================================*/
#define WF_PLE_TOP_AC2_QUEUE_EMPTY0_AC2_QUEUE_EMPTY_0_2_ADDR   WF_PLE_TOP_AC2_QUEUE_EMPTY0_ADDR
#define WF_PLE_TOP_AC2_QUEUE_EMPTY0_AC2_QUEUE_EMPTY_0_2_MASK   0xFFFF0000                // AC2_QUEUE_EMPTY_0_2[31..16]
#define WF_PLE_TOP_AC2_QUEUE_EMPTY0_AC2_QUEUE_EMPTY_0_2_SHFT   16
#define WF_PLE_TOP_AC2_QUEUE_EMPTY0_AC2_QUEUE_EMPTY_0_1_ADDR   WF_PLE_TOP_AC2_QUEUE_EMPTY0_ADDR
#define WF_PLE_TOP_AC2_QUEUE_EMPTY0_AC2_QUEUE_EMPTY_0_1_MASK   0x0000FF00                // AC2_QUEUE_EMPTY_0_1[15..8]
#define WF_PLE_TOP_AC2_QUEUE_EMPTY0_AC2_QUEUE_EMPTY_0_1_SHFT   8
#define WF_PLE_TOP_AC2_QUEUE_EMPTY0_AC2_QUEUE_EMPTY_0_ADDR     WF_PLE_TOP_AC2_QUEUE_EMPTY0_ADDR
#define WF_PLE_TOP_AC2_QUEUE_EMPTY0_AC2_QUEUE_EMPTY_0_MASK     0x000000FF                // AC2_QUEUE_EMPTY_0[7..0]
#define WF_PLE_TOP_AC2_QUEUE_EMPTY0_AC2_QUEUE_EMPTY_0_SHFT     0

/* =====================================================================================

  ---AC3_QUEUE_EMPTY0 (0x820C0000 + 0x5C0)---

    AC3_QUEUE_EMPTY_0[7..0]      - (RO) Empty flag for STA 0~7 AC3 queue
    AC3_QUEUE_EMPTY_0_1[15..8]   - (RO) Empty flag for STA 8~15 AC3 queue
    AC3_QUEUE_EMPTY_0_2[31..16]  - (RO) Empty flag for STA 16~31 AC3 queue

 =====================================================================================*/
#define WF_PLE_TOP_AC3_QUEUE_EMPTY0_AC3_QUEUE_EMPTY_0_2_ADDR   WF_PLE_TOP_AC3_QUEUE_EMPTY0_ADDR
#define WF_PLE_TOP_AC3_QUEUE_EMPTY0_AC3_QUEUE_EMPTY_0_2_MASK   0xFFFF0000                // AC3_QUEUE_EMPTY_0_2[31..16]
#define WF_PLE_TOP_AC3_QUEUE_EMPTY0_AC3_QUEUE_EMPTY_0_2_SHFT   16
#define WF_PLE_TOP_AC3_QUEUE_EMPTY0_AC3_QUEUE_EMPTY_0_1_ADDR   WF_PLE_TOP_AC3_QUEUE_EMPTY0_ADDR
#define WF_PLE_TOP_AC3_QUEUE_EMPTY0_AC3_QUEUE_EMPTY_0_1_MASK   0x0000FF00                // AC3_QUEUE_EMPTY_0_1[15..8]
#define WF_PLE_TOP_AC3_QUEUE_EMPTY0_AC3_QUEUE_EMPTY_0_1_SHFT   8
#define WF_PLE_TOP_AC3_QUEUE_EMPTY0_AC3_QUEUE_EMPTY_0_ADDR     WF_PLE_TOP_AC3_QUEUE_EMPTY0_ADDR
#define WF_PLE_TOP_AC3_QUEUE_EMPTY0_AC3_QUEUE_EMPTY_0_MASK     0x000000FF                // AC3_QUEUE_EMPTY_0[7..0]
#define WF_PLE_TOP_AC3_QUEUE_EMPTY0_AC3_QUEUE_EMPTY_0_SHFT     0

/* =====================================================================================

  ---PEEK_CR_00 (0x820C0000 + 0x600)---

    PEEK_CR_00[31..0]            - (RO) HW debug flag
                                     [3:0] : ple_fl_arb_cs
                                     [6:4] : ple_fl_cs
                                     [11:8] : ple_enq_fl_cs
                                     [15:12] : ple_deq_fl_cs
                                     [18:16] : ple_acc_lst_cs
                                     [26:24] : ple_mdp_dop_pbuf_cs
                                     [29:28] : ple_mdP_dop_cache_cs

 =====================================================================================*/
#define WF_PLE_TOP_PEEK_CR_00_PEEK_CR_00_ADDR                  WF_PLE_TOP_PEEK_CR_00_ADDR
#define WF_PLE_TOP_PEEK_CR_00_PEEK_CR_00_MASK                  0xFFFFFFFF                // PEEK_CR_00[31..0]
#define WF_PLE_TOP_PEEK_CR_00_PEEK_CR_00_SHFT                  0

/* =====================================================================================

  ---PEEK_CR_01 (0x820C0000 + 0x604)---

    PEEK_CR_01[31..0]            - (RO) HW debug flag
                                     [3:0] : ple_pl_arb_cs
                                     [5:4] : ple_pl_init_cs
                                     [8] : ple_pl_gnext_cs
                                     [14:12] : ple_pl_gbuf_cs
                                     [17:16] : ple_pl_rls_cs
                                     [22:20] : ple_rls_cs
                                     [26:24] : ple_host_rpt_cs

 =====================================================================================*/
#define WF_PLE_TOP_PEEK_CR_01_PEEK_CR_01_ADDR                  WF_PLE_TOP_PEEK_CR_01_ADDR
#define WF_PLE_TOP_PEEK_CR_01_PEEK_CR_01_MASK                  0xFFFFFFFF                // PEEK_CR_01[31..0]
#define WF_PLE_TOP_PEEK_CR_01_PEEK_CR_01_SHFT                  0

/* =====================================================================================

  ---PEEK_CR_02 (0x820C0000 + 0x608)---

    PEEK_CR_02[31..0]            - (RO) HW debug flag
                                     [2:0] : ple_hif_dop_pbuf_cs
                                     [5:4] : ple_hif_dop_cache_cs
                                     [11:8] : ple_hif_qop_q_oper_cs
                                     [13:12] : ple_hif_qop_rl_ocp_cs
                                     [17:16] : ple_hif_qop_pl_ocp_cs
                                     [22:20] : ple_hif_qop_allocate_cs

 =====================================================================================*/
#define WF_PLE_TOP_PEEK_CR_02_PEEK_CR_02_ADDR                  WF_PLE_TOP_PEEK_CR_02_ADDR
#define WF_PLE_TOP_PEEK_CR_02_PEEK_CR_02_MASK                  0xFFFFFFFF                // PEEK_CR_02[31..0]
#define WF_PLE_TOP_PEEK_CR_02_PEEK_CR_02_SHFT                  0

/* =====================================================================================

  ---PEEK_CR_03 (0x820C0000 + 0x60C)---

    PEEK_CR_03[31..0]            - (RO) HW debug flag

 =====================================================================================*/
#define WF_PLE_TOP_PEEK_CR_03_PEEK_CR_03_ADDR                  WF_PLE_TOP_PEEK_CR_03_ADDR
#define WF_PLE_TOP_PEEK_CR_03_PEEK_CR_03_MASK                  0xFFFFFFFF                // PEEK_CR_03[31..0]
#define WF_PLE_TOP_PEEK_CR_03_PEEK_CR_03_SHFT                  0

/* =====================================================================================

  ---PEEK_CR_04 (0x820C0000 + 0x610)---

    PEEK_CR_04[31..0]            - (RO) HW debug flag

 =====================================================================================*/
#define WF_PLE_TOP_PEEK_CR_04_PEEK_CR_04_ADDR                  WF_PLE_TOP_PEEK_CR_04_ADDR
#define WF_PLE_TOP_PEEK_CR_04_PEEK_CR_04_MASK                  0xFFFFFFFF                // PEEK_CR_04[31..0]
#define WF_PLE_TOP_PEEK_CR_04_PEEK_CR_04_SHFT                  0

/* =====================================================================================

  ---PEEK_CR_05 (0x820C0000 + 0x614)---

    PEEK_CR_05[31..0]            - (RO) HW debug flag

 =====================================================================================*/
#define WF_PLE_TOP_PEEK_CR_05_PEEK_CR_05_ADDR                  WF_PLE_TOP_PEEK_CR_05_ADDR
#define WF_PLE_TOP_PEEK_CR_05_PEEK_CR_05_MASK                  0xFFFFFFFF                // PEEK_CR_05[31..0]
#define WF_PLE_TOP_PEEK_CR_05_PEEK_CR_05_SHFT                  0

/* =====================================================================================

  ---PEEK_CR_06 (0x820C0000 + 0x618)---

    PEEK_CR_06[31..0]            - (RO) HW debug flag

 =====================================================================================*/
#define WF_PLE_TOP_PEEK_CR_06_PEEK_CR_06_ADDR                  WF_PLE_TOP_PEEK_CR_06_ADDR
#define WF_PLE_TOP_PEEK_CR_06_PEEK_CR_06_MASK                  0xFFFFFFFF                // PEEK_CR_06[31..0]
#define WF_PLE_TOP_PEEK_CR_06_PEEK_CR_06_SHFT                  0

/* =====================================================================================

  ---PEEK_CR_07 (0x820C0000 + 0x61c)---

    PEEK_CR_07[31..0]            - (RO) HW debug flag

 =====================================================================================*/
#define WF_PLE_TOP_PEEK_CR_07_PEEK_CR_07_ADDR                  WF_PLE_TOP_PEEK_CR_07_ADDR
#define WF_PLE_TOP_PEEK_CR_07_PEEK_CR_07_MASK                  0xFFFFFFFF                // PEEK_CR_07[31..0]
#define WF_PLE_TOP_PEEK_CR_07_PEEK_CR_07_SHFT                  0

/* =====================================================================================

  ---PEEK_CR_08 (0x820C0000 + 0x620)---

    PEEK_CR_08[31..0]            - (RO) HW debug flag

 =====================================================================================*/
#define WF_PLE_TOP_PEEK_CR_08_PEEK_CR_08_ADDR                  WF_PLE_TOP_PEEK_CR_08_ADDR
#define WF_PLE_TOP_PEEK_CR_08_PEEK_CR_08_MASK                  0xFFFFFFFF                // PEEK_CR_08[31..0]
#define WF_PLE_TOP_PEEK_CR_08_PEEK_CR_08_SHFT                  0

/* =====================================================================================

  ---PEEK_CR_09 (0x820C0000 + 0x624)---

    PEEK_CR_09[31..0]            - (RO) HW debug flag

 =====================================================================================*/
#define WF_PLE_TOP_PEEK_CR_09_PEEK_CR_09_ADDR                  WF_PLE_TOP_PEEK_CR_09_ADDR
#define WF_PLE_TOP_PEEK_CR_09_PEEK_CR_09_MASK                  0xFFFFFFFF                // PEEK_CR_09[31..0]
#define WF_PLE_TOP_PEEK_CR_09_PEEK_CR_09_SHFT                  0

/* =====================================================================================

  ---PEEK_CR_10 (0x820C0000 + 0x628)---

    PEEK_CR_10[31..0]            - (RO) HW debug flag

 =====================================================================================*/
#define WF_PLE_TOP_PEEK_CR_10_PEEK_CR_10_ADDR                  WF_PLE_TOP_PEEK_CR_10_ADDR
#define WF_PLE_TOP_PEEK_CR_10_PEEK_CR_10_MASK                  0xFFFFFFFF                // PEEK_CR_10[31..0]
#define WF_PLE_TOP_PEEK_CR_10_PEEK_CR_10_SHFT                  0

/* =====================================================================================

  ---PEEK_CR_11 (0x820C0000 + 0x62c)---

    PEEK_CR_11[31..0]            - (RO) HW debug flag

 =====================================================================================*/
#define WF_PLE_TOP_PEEK_CR_11_PEEK_CR_11_ADDR                  WF_PLE_TOP_PEEK_CR_11_ADDR
#define WF_PLE_TOP_PEEK_CR_11_PEEK_CR_11_MASK                  0xFFFFFFFF                // PEEK_CR_11[31..0]
#define WF_PLE_TOP_PEEK_CR_11_PEEK_CR_11_SHFT                  0

/* =====================================================================================

  ---AMSDU_GC (0x820C0000 + 0x1000)---

    EN_HW_AMSDU[0]               - (RW) Enable control of HW AMSDU function.
    EN_AMSDU_PASTE_COMM_SN[1]    - (RW) Enable paste common SN for non-QoS Data.
    EN_AMSDU_PNSN_QUEUE_MASK[2]  - (RW) Disable HW AMSDU process PNSN Queue
    RESERVED3[7..3]              - (RO) Reserved bits
    DIS_AMSDU_Q_EMPTY_FLUSH[8]   - (RW) Disable control of HW AMSDU queue empty trigger packet flush function.
    DIS_LMAC_TX_NO_FULL_FLUSH[9] - (RW) Disable control of LMAC TX no get full packet trigger packet flush function.
    DIS_SFD_KEEP_SAME_PAGE[10]   - (RW) Disable control of keep same page number of StoreForward packet function.
    RESERVED11[31..11]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_GC_DIS_SFD_KEEP_SAME_PAGE_ADDR        WF_PLE_TOP_AMSDU_GC_ADDR
#define WF_PLE_TOP_AMSDU_GC_DIS_SFD_KEEP_SAME_PAGE_MASK        0x00000400                // DIS_SFD_KEEP_SAME_PAGE[10]
#define WF_PLE_TOP_AMSDU_GC_DIS_SFD_KEEP_SAME_PAGE_SHFT        10
#define WF_PLE_TOP_AMSDU_GC_DIS_LMAC_TX_NO_FULL_FLUSH_ADDR     WF_PLE_TOP_AMSDU_GC_ADDR
#define WF_PLE_TOP_AMSDU_GC_DIS_LMAC_TX_NO_FULL_FLUSH_MASK     0x00000200                // DIS_LMAC_TX_NO_FULL_FLUSH[9]
#define WF_PLE_TOP_AMSDU_GC_DIS_LMAC_TX_NO_FULL_FLUSH_SHFT     9
#define WF_PLE_TOP_AMSDU_GC_DIS_AMSDU_Q_EMPTY_FLUSH_ADDR       WF_PLE_TOP_AMSDU_GC_ADDR
#define WF_PLE_TOP_AMSDU_GC_DIS_AMSDU_Q_EMPTY_FLUSH_MASK       0x00000100                // DIS_AMSDU_Q_EMPTY_FLUSH[8]
#define WF_PLE_TOP_AMSDU_GC_DIS_AMSDU_Q_EMPTY_FLUSH_SHFT       8
#define WF_PLE_TOP_AMSDU_GC_EN_AMSDU_PNSN_QUEUE_MASK_ADDR      WF_PLE_TOP_AMSDU_GC_ADDR
#define WF_PLE_TOP_AMSDU_GC_EN_AMSDU_PNSN_QUEUE_MASK_MASK      0x00000004                // EN_AMSDU_PNSN_QUEUE_MASK[2]
#define WF_PLE_TOP_AMSDU_GC_EN_AMSDU_PNSN_QUEUE_MASK_SHFT      2
#define WF_PLE_TOP_AMSDU_GC_EN_AMSDU_PASTE_COMM_SN_ADDR        WF_PLE_TOP_AMSDU_GC_ADDR
#define WF_PLE_TOP_AMSDU_GC_EN_AMSDU_PASTE_COMM_SN_MASK        0x00000002                // EN_AMSDU_PASTE_COMM_SN[1]
#define WF_PLE_TOP_AMSDU_GC_EN_AMSDU_PASTE_COMM_SN_SHFT        1
#define WF_PLE_TOP_AMSDU_GC_EN_HW_AMSDU_ADDR                   WF_PLE_TOP_AMSDU_GC_ADDR
#define WF_PLE_TOP_AMSDU_GC_EN_HW_AMSDU_MASK                   0x00000001                // EN_HW_AMSDU[0]
#define WF_PLE_TOP_AMSDU_GC_EN_HW_AMSDU_SHFT                   0

/* =====================================================================================

  ---AMSDU_TXD_COMP_MAP_0 (0x820C0000 + 0x1004)---

    TXDIN_TRIGGER_TH[11..0]      - (RW) The TXD merge trigger threshold.
    RESERVED12[15..12]           - (RO) Reserved bits
    TXD_COMPARE_NEED_MAP[31..16] - (RW) The compare bitmap for merging TXD.

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_TXD_COMP_MAP_0_TXD_COMPARE_NEED_MAP_ADDR WF_PLE_TOP_AMSDU_TXD_COMP_MAP_0_ADDR
#define WF_PLE_TOP_AMSDU_TXD_COMP_MAP_0_TXD_COMPARE_NEED_MAP_MASK 0xFFFF0000                // TXD_COMPARE_NEED_MAP[31..16]
#define WF_PLE_TOP_AMSDU_TXD_COMP_MAP_0_TXD_COMPARE_NEED_MAP_SHFT 16
#define WF_PLE_TOP_AMSDU_TXD_COMP_MAP_0_TXDIN_TRIGGER_TH_ADDR  WF_PLE_TOP_AMSDU_TXD_COMP_MAP_0_ADDR
#define WF_PLE_TOP_AMSDU_TXD_COMP_MAP_0_TXDIN_TRIGGER_TH_MASK  0x00000FFF                // TXDIN_TRIGGER_TH[11..0]
#define WF_PLE_TOP_AMSDU_TXD_COMP_MAP_0_TXDIN_TRIGGER_TH_SHFT  0

/* =====================================================================================

  ---AMSDU_TXD_COMP_MAP_1 (0x820C0000 + 0x1008)---

    TXD_COMPARE_NEED_MAP[31..0]  - (RW) The compare bitmap for merging TXD.

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_TXD_COMP_MAP_1_TXD_COMPARE_NEED_MAP_ADDR WF_PLE_TOP_AMSDU_TXD_COMP_MAP_1_ADDR
#define WF_PLE_TOP_AMSDU_TXD_COMP_MAP_1_TXD_COMPARE_NEED_MAP_MASK 0xFFFFFFFF                // TXD_COMPARE_NEED_MAP[31..0]
#define WF_PLE_TOP_AMSDU_TXD_COMP_MAP_1_TXD_COMPARE_NEED_MAP_SHFT 0

/* =====================================================================================

  ---AMSDU_INT_N9_ERR_MASK (0x820C0000 + 0x100c)---

    EN_AMSDU_Q_CMD_ERR[0]        - (RW) Enables queue command error interrupt status of port AMSDU
    RESERVED1[3..1]              - (RO) Reserved bits
    EN_AMSDU_PAGE_UDF[4]         - (RW) Enables page underflow interrupt status of port AMSDU
    RESERVED5[11..5]             - (RO) Reserved bits
    EN_AMSDU_DATA_OPER_ERR[12]   - (RW) Enables data operation error of port AMSDU
    RESERVED13[15..13]           - (RO) Reserved bits
    EN_AMSDU_PORT_HANG_ERR[16]   - (RW) Enables AMSDU port FSM hang error interrupt
    EN_AMSDU_CTRL_HANG_ERR[17]   - (RW) Enables AMSDU CTRL FSM hang error interrupt
    RESERVED18[31..18]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_EN_AMSDU_CTRL_HANG_ERR_ADDR WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_EN_AMSDU_CTRL_HANG_ERR_MASK 0x00020000                // EN_AMSDU_CTRL_HANG_ERR[17]
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_EN_AMSDU_CTRL_HANG_ERR_SHFT 17
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_EN_AMSDU_PORT_HANG_ERR_ADDR WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_EN_AMSDU_PORT_HANG_ERR_MASK 0x00010000                // EN_AMSDU_PORT_HANG_ERR[16]
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_EN_AMSDU_PORT_HANG_ERR_SHFT 16
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_EN_AMSDU_DATA_OPER_ERR_ADDR WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_EN_AMSDU_DATA_OPER_ERR_MASK 0x00001000                // EN_AMSDU_DATA_OPER_ERR[12]
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_EN_AMSDU_DATA_OPER_ERR_SHFT 12
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_EN_AMSDU_PAGE_UDF_ADDR WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_EN_AMSDU_PAGE_UDF_MASK 0x00000010                // EN_AMSDU_PAGE_UDF[4]
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_EN_AMSDU_PAGE_UDF_SHFT 4
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_EN_AMSDU_Q_CMD_ERR_ADDR WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_ADDR
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_EN_AMSDU_Q_CMD_ERR_MASK 0x00000001                // EN_AMSDU_Q_CMD_ERR[0]
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_MASK_EN_AMSDU_Q_CMD_ERR_SHFT 0

/* =====================================================================================

  ---AMSDU_INT_N9_ERR_STS (0x820C0000 + 0x1010)---

    AMSDU_Q_CMD_ERR[0]           - (W1C) Queue command error interrupt status of port AMSDU. Avoid unclear error flag,  please clear flag when logic reset.
    RESERVED1[3..1]              - (RO) Reserved bits
    AMSDU_PAGE_UDF[4]            - (W1C) Page underflow interrupt status of port AMSDU. Avoid unclear error flag,  please clear flag when logic reset.
    RESERVED5[11..5]             - (RO) Reserved bits
    AMSDU_DATA_OPER_ERR[12]      - (W1C) Data operation error of port AMSDU. Avoid unclear error flag,  please clear flag when logic reset.
    RESERVED13[15..13]           - (RO) Reserved bits
    AMSDU_PORT_HANG_ERR[16]      - (W1C) AMSDU port FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    AMSDU_CTRL_HANG_ERR[17]      - (W1C) AMSDU FSM hang error interrupt. Avoid unclear error flag,  please clear flag when logic reset.
    RESERVED18[31..18]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_AMSDU_CTRL_HANG_ERR_ADDR WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_AMSDU_CTRL_HANG_ERR_MASK 0x00020000                // AMSDU_CTRL_HANG_ERR[17]
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_AMSDU_CTRL_HANG_ERR_SHFT 17
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_AMSDU_PORT_HANG_ERR_ADDR WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_AMSDU_PORT_HANG_ERR_MASK 0x00010000                // AMSDU_PORT_HANG_ERR[16]
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_AMSDU_PORT_HANG_ERR_SHFT 16
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_AMSDU_DATA_OPER_ERR_ADDR WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_AMSDU_DATA_OPER_ERR_MASK 0x00001000                // AMSDU_DATA_OPER_ERR[12]
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_AMSDU_DATA_OPER_ERR_SHFT 12
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_AMSDU_PAGE_UDF_ADDR    WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_AMSDU_PAGE_UDF_MASK    0x00000010                // AMSDU_PAGE_UDF[4]
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_AMSDU_PAGE_UDF_SHFT    4
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_AMSDU_Q_CMD_ERR_ADDR   WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_ADDR
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_AMSDU_Q_CMD_ERR_MASK   0x00000001                // AMSDU_Q_CMD_ERR[0]
#define WF_PLE_TOP_AMSDU_INT_N9_ERR_STS_AMSDU_Q_CMD_ERR_SHFT   0

/* =====================================================================================

  ---AMSDU_PEEK_CR_00 (0x820C0000 + 0x10d0)---

    AMSDU_DOP_CS[3..0]           - (RO) AMSDU Data operation current state.
    RESERVED4[7..4]              - (RO) Reserved bits
    AMSDU_CS[12..8]              - (RO) AMSDU Merge Engine current state.
    RESERVED13[15..13]           - (RO) Reserved bits
    AMSDU_Q_EMPTY_CS[17..16]     - (RO) AMSDU Queue Empty Search Engine current state.
    RESERVED18[23..18]           - (RO) Reserved bits
    AMSDU_ARB_CS[26..24]         - (RO) AMSDU Request Arbitration Current state.
    RESERVED27[31..27]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_PEEK_CR_00_AMSDU_ARB_CS_ADDR          WF_PLE_TOP_AMSDU_PEEK_CR_00_ADDR
#define WF_PLE_TOP_AMSDU_PEEK_CR_00_AMSDU_ARB_CS_MASK          0x07000000                // AMSDU_ARB_CS[26..24]
#define WF_PLE_TOP_AMSDU_PEEK_CR_00_AMSDU_ARB_CS_SHFT          24
#define WF_PLE_TOP_AMSDU_PEEK_CR_00_AMSDU_Q_EMPTY_CS_ADDR      WF_PLE_TOP_AMSDU_PEEK_CR_00_ADDR
#define WF_PLE_TOP_AMSDU_PEEK_CR_00_AMSDU_Q_EMPTY_CS_MASK      0x00030000                // AMSDU_Q_EMPTY_CS[17..16]
#define WF_PLE_TOP_AMSDU_PEEK_CR_00_AMSDU_Q_EMPTY_CS_SHFT      16
#define WF_PLE_TOP_AMSDU_PEEK_CR_00_AMSDU_CS_ADDR              WF_PLE_TOP_AMSDU_PEEK_CR_00_ADDR
#define WF_PLE_TOP_AMSDU_PEEK_CR_00_AMSDU_CS_MASK              0x00001F00                // AMSDU_CS[12..8]
#define WF_PLE_TOP_AMSDU_PEEK_CR_00_AMSDU_CS_SHFT              8
#define WF_PLE_TOP_AMSDU_PEEK_CR_00_AMSDU_DOP_CS_ADDR          WF_PLE_TOP_AMSDU_PEEK_CR_00_ADDR
#define WF_PLE_TOP_AMSDU_PEEK_CR_00_AMSDU_DOP_CS_MASK          0x0000000F                // AMSDU_DOP_CS[3..0]
#define WF_PLE_TOP_AMSDU_PEEK_CR_00_AMSDU_DOP_CS_SHFT          0

/* =====================================================================================

  ---AMSDU_PEEK_CR_01 (0x820C0000 + 0x10d4)---

    AMSDU_DOP_PBUF_CS[2..0]      - (RO) PLE AMSDU port - Data operation PBUF current state.
    RESERVED3[3]                 - (RO) Reserved bits
    AMSDU_DOP_CACHE_CS[5..4]     - (RO) PLE AMSDU port - Data operation CACHE current state.
    RESERVED6[7..6]              - (RO) Reserved bits
    AMSDU_QOP_Q_OPER_CS[11..8]   - (RO) PLE AMSDU port - Queue operation current state.
    AMSDU_QOP_RL_OCP_CS[13..12]  - (RO) PLE AMSDU port - Queue operation RL current state.
    RESERVED14[15..14]           - (RO) Reserved bits
    AMSDU_QOP_PL_OCP_CS[17..16]  - (RO) PLE AMSDU port - Queue operation PL current state.
    RESERVED18[19..18]           - (RO) Reserved bits
    AMSDU_QOP_ALLOCATE_CS[22..20] - (RO) PLE AMSDU port - Queue operation allocate current state.
    RESERVED23[31..23]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_QOP_ALLOCATE_CS_ADDR WF_PLE_TOP_AMSDU_PEEK_CR_01_ADDR
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_QOP_ALLOCATE_CS_MASK 0x00700000                // AMSDU_QOP_ALLOCATE_CS[22..20]
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_QOP_ALLOCATE_CS_SHFT 20
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_QOP_PL_OCP_CS_ADDR   WF_PLE_TOP_AMSDU_PEEK_CR_01_ADDR
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_QOP_PL_OCP_CS_MASK   0x00030000                // AMSDU_QOP_PL_OCP_CS[17..16]
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_QOP_PL_OCP_CS_SHFT   16
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_QOP_RL_OCP_CS_ADDR   WF_PLE_TOP_AMSDU_PEEK_CR_01_ADDR
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_QOP_RL_OCP_CS_MASK   0x00003000                // AMSDU_QOP_RL_OCP_CS[13..12]
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_QOP_RL_OCP_CS_SHFT   12
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_QOP_Q_OPER_CS_ADDR   WF_PLE_TOP_AMSDU_PEEK_CR_01_ADDR
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_QOP_Q_OPER_CS_MASK   0x00000F00                // AMSDU_QOP_Q_OPER_CS[11..8]
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_QOP_Q_OPER_CS_SHFT   8
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_DOP_CACHE_CS_ADDR    WF_PLE_TOP_AMSDU_PEEK_CR_01_ADDR
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_DOP_CACHE_CS_MASK    0x00000030                // AMSDU_DOP_CACHE_CS[5..4]
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_DOP_CACHE_CS_SHFT    4
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_DOP_PBUF_CS_ADDR     WF_PLE_TOP_AMSDU_PEEK_CR_01_ADDR
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_DOP_PBUF_CS_MASK     0x00000007                // AMSDU_DOP_PBUF_CS[2..0]
#define WF_PLE_TOP_AMSDU_PEEK_CR_01_AMSDU_DOP_PBUF_CS_SHFT     0

/* =====================================================================================

  ---AMSDU_PACK_1_MSDU_CNT (0x820C0000 + 0x10e0)---

    pack_1_msdu_cnt[15..0]       - (RC) AMSDU pack count of  1 MSDU in TXD.
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_PACK_1_MSDU_CNT_pack_1_msdu_cnt_ADDR  WF_PLE_TOP_AMSDU_PACK_1_MSDU_CNT_ADDR
#define WF_PLE_TOP_AMSDU_PACK_1_MSDU_CNT_pack_1_msdu_cnt_MASK  0x0000FFFF                // pack_1_msdu_cnt[15..0]
#define WF_PLE_TOP_AMSDU_PACK_1_MSDU_CNT_pack_1_msdu_cnt_SHFT  0

/* =====================================================================================

  ---AMSDU_PACK_2_MSDU_CNT (0x820C0000 + 0x10e4)---

    pack_2_msdu_cnt[15..0]       - (RC) AMSDU pack count of  2 MSDU in TXD.
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_PACK_2_MSDU_CNT_pack_2_msdu_cnt_ADDR  WF_PLE_TOP_AMSDU_PACK_2_MSDU_CNT_ADDR
#define WF_PLE_TOP_AMSDU_PACK_2_MSDU_CNT_pack_2_msdu_cnt_MASK  0x0000FFFF                // pack_2_msdu_cnt[15..0]
#define WF_PLE_TOP_AMSDU_PACK_2_MSDU_CNT_pack_2_msdu_cnt_SHFT  0

/* =====================================================================================

  ---AMSDU_PACK_3_MSDU_CNT (0x820C0000 + 0x10e8)---

    pack_3_msdu_cnt[15..0]       - (RC) AMSDU pack count of  3 MSDU in TXD.
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_PACK_3_MSDU_CNT_pack_3_msdu_cnt_ADDR  WF_PLE_TOP_AMSDU_PACK_3_MSDU_CNT_ADDR
#define WF_PLE_TOP_AMSDU_PACK_3_MSDU_CNT_pack_3_msdu_cnt_MASK  0x0000FFFF                // pack_3_msdu_cnt[15..0]
#define WF_PLE_TOP_AMSDU_PACK_3_MSDU_CNT_pack_3_msdu_cnt_SHFT  0

/* =====================================================================================

  ---AMSDU_PACK_4_MSDU_CNT (0x820C0000 + 0x10ec)---

    pack_4_msdu_cnt[15..0]       - (RC) AMSDU pack count of  4 MSDU in TXD.
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_PACK_4_MSDU_CNT_pack_4_msdu_cnt_ADDR  WF_PLE_TOP_AMSDU_PACK_4_MSDU_CNT_ADDR
#define WF_PLE_TOP_AMSDU_PACK_4_MSDU_CNT_pack_4_msdu_cnt_MASK  0x0000FFFF                // pack_4_msdu_cnt[15..0]
#define WF_PLE_TOP_AMSDU_PACK_4_MSDU_CNT_pack_4_msdu_cnt_SHFT  0

/* =====================================================================================

  ---AMSDU_PACK_5_MSDU_CNT (0x820C0000 + 0x10f0)---

    pack_5_msdu_cnt[15..0]       - (RC) AMSDU pack count of  5 MSDU in TXD.
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_PACK_5_MSDU_CNT_pack_5_msdu_cnt_ADDR  WF_PLE_TOP_AMSDU_PACK_5_MSDU_CNT_ADDR
#define WF_PLE_TOP_AMSDU_PACK_5_MSDU_CNT_pack_5_msdu_cnt_MASK  0x0000FFFF                // pack_5_msdu_cnt[15..0]
#define WF_PLE_TOP_AMSDU_PACK_5_MSDU_CNT_pack_5_msdu_cnt_SHFT  0

/* =====================================================================================

  ---AMSDU_PACK_6_MSDU_CNT (0x820C0000 + 0x10f4)---

    pack_6_msdu_cnt[15..0]       - (RC) AMSDU pack count of  4 MSDU in TXD.
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_PACK_6_MSDU_CNT_pack_6_msdu_cnt_ADDR  WF_PLE_TOP_AMSDU_PACK_6_MSDU_CNT_ADDR
#define WF_PLE_TOP_AMSDU_PACK_6_MSDU_CNT_pack_6_msdu_cnt_MASK  0x0000FFFF                // pack_6_msdu_cnt[15..0]
#define WF_PLE_TOP_AMSDU_PACK_6_MSDU_CNT_pack_6_msdu_cnt_SHFT  0

/* =====================================================================================

  ---AMSDU_PACK_7_MSDU_CNT (0x820C0000 + 0x10f8)---

    pack_7_msdu_cnt[15..0]       - (RC) AMSDU pack count of  7 MSDU in TXD.
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_PACK_7_MSDU_CNT_pack_7_msdu_cnt_ADDR  WF_PLE_TOP_AMSDU_PACK_7_MSDU_CNT_ADDR
#define WF_PLE_TOP_AMSDU_PACK_7_MSDU_CNT_pack_7_msdu_cnt_MASK  0x0000FFFF                // pack_7_msdu_cnt[15..0]
#define WF_PLE_TOP_AMSDU_PACK_7_MSDU_CNT_pack_7_msdu_cnt_SHFT  0

/* =====================================================================================

  ---AMSDU_PACK_8_MSDU_CNT (0x820C0000 + 0x10fc)---

    pack_8_msdu_cnt[15..0]       - (RC) AMSDU pack count of  8 MSDU in TXD.
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_PACK_8_MSDU_CNT_pack_8_msdu_cnt_ADDR  WF_PLE_TOP_AMSDU_PACK_8_MSDU_CNT_ADDR
#define WF_PLE_TOP_AMSDU_PACK_8_MSDU_CNT_pack_8_msdu_cnt_MASK  0x0000FFFF                // pack_8_msdu_cnt[15..0]
#define WF_PLE_TOP_AMSDU_PACK_8_MSDU_CNT_pack_8_msdu_cnt_SHFT  0

/* =====================================================================================

  ---AMSDU_AC0_QUEUE_EMPTY0 (0x820C0000 + 0x1100)---

    AMSDU_QUEUE_EMPTY_FLAG_31_0[31..0] - (RO) AC0 queue empty flag for station31~station0 in HW AMSDU engine.

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_AC0_QUEUE_EMPTY0_AMSDU_QUEUE_EMPTY_FLAG_31_0_ADDR WF_PLE_TOP_AMSDU_AC0_QUEUE_EMPTY0_ADDR
#define WF_PLE_TOP_AMSDU_AC0_QUEUE_EMPTY0_AMSDU_QUEUE_EMPTY_FLAG_31_0_MASK 0xFFFFFFFF                // AMSDU_QUEUE_EMPTY_FLAG_31_0[31..0]
#define WF_PLE_TOP_AMSDU_AC0_QUEUE_EMPTY0_AMSDU_QUEUE_EMPTY_FLAG_31_0_SHFT 0

/* =====================================================================================

  ---AMSDU_AC1_QUEUE_EMPTY0 (0x820C0000 + 0x1140)---

    AMSDU_QUEUE_EMPTY_FLAG_31_0[31..0] - (RO) AC1 queue empty flag for station31~station0 in HW AMSDU engine.

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_AC1_QUEUE_EMPTY0_AMSDU_QUEUE_EMPTY_FLAG_31_0_ADDR WF_PLE_TOP_AMSDU_AC1_QUEUE_EMPTY0_ADDR
#define WF_PLE_TOP_AMSDU_AC1_QUEUE_EMPTY0_AMSDU_QUEUE_EMPTY_FLAG_31_0_MASK 0xFFFFFFFF                // AMSDU_QUEUE_EMPTY_FLAG_31_0[31..0]
#define WF_PLE_TOP_AMSDU_AC1_QUEUE_EMPTY0_AMSDU_QUEUE_EMPTY_FLAG_31_0_SHFT 0

/* =====================================================================================

  ---AMSDU_AC2_QUEUE_EMPTY0 (0x820C0000 + 0x1180)---

    AMSDU_QUEUE_EMPTY_FLAG_31_0[31..0] - (RO) AC2 queue empty flag for station31~station0 in HW AMSDU engine.

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_AC2_QUEUE_EMPTY0_AMSDU_QUEUE_EMPTY_FLAG_31_0_ADDR WF_PLE_TOP_AMSDU_AC2_QUEUE_EMPTY0_ADDR
#define WF_PLE_TOP_AMSDU_AC2_QUEUE_EMPTY0_AMSDU_QUEUE_EMPTY_FLAG_31_0_MASK 0xFFFFFFFF                // AMSDU_QUEUE_EMPTY_FLAG_31_0[31..0]
#define WF_PLE_TOP_AMSDU_AC2_QUEUE_EMPTY0_AMSDU_QUEUE_EMPTY_FLAG_31_0_SHFT 0

/* =====================================================================================

  ---AMSDU_AC3_QUEUE_EMPTY0 (0x820C0000 + 0x11C0)---

    AMSDU_QUEUE_EMPTY_FLAG_31_0[31..0] - (RO) AC3 queue empty flag for station31~station0 in HW AMSDU engine.

 =====================================================================================*/
#define WF_PLE_TOP_AMSDU_AC3_QUEUE_EMPTY0_AMSDU_QUEUE_EMPTY_FLAG_31_0_ADDR WF_PLE_TOP_AMSDU_AC3_QUEUE_EMPTY0_ADDR
#define WF_PLE_TOP_AMSDU_AC3_QUEUE_EMPTY0_AMSDU_QUEUE_EMPTY_FLAG_31_0_MASK 0xFFFFFFFF                // AMSDU_QUEUE_EMPTY_FLAG_31_0[31..0]
#define WF_PLE_TOP_AMSDU_AC3_QUEUE_EMPTY0_AMSDU_QUEUE_EMPTY_FLAG_31_0_SHFT 0

/* =====================================================================================

  ---CFG_DBDC_CTRL0 (0x820C0000 + 0x2008)---

    RESERVED0[7..0]              - (RO) Reserved bits
    WMM_0TO3_BAND_SEL[11..8]     - (RW) Selects WMM0~WMM3 band
    RESERVED12[15..12]           - (RO) Reserved bits
    NAN_BAND_SEL[16]             - (RW) Selects NAN band
    FUNCQ_BAND_SEL[17]           - (RW) Selects Functional Queue band
                                     TGID 0 & TGID1 always selec to different band
    RESERVED18[30..18]           - (RO) Reserved bits
    DBDC_EN[31]                  - (RO) Enables DBDC

 =====================================================================================*/
#define WF_PLE_TOP_CFG_DBDC_CTRL0_DBDC_EN_ADDR                 WF_PLE_TOP_CFG_DBDC_CTRL0_ADDR
#define WF_PLE_TOP_CFG_DBDC_CTRL0_DBDC_EN_MASK                 0x80000000                // DBDC_EN[31]
#define WF_PLE_TOP_CFG_DBDC_CTRL0_DBDC_EN_SHFT                 31
#define WF_PLE_TOP_CFG_DBDC_CTRL0_FUNCQ_BAND_SEL_ADDR          WF_PLE_TOP_CFG_DBDC_CTRL0_ADDR
#define WF_PLE_TOP_CFG_DBDC_CTRL0_FUNCQ_BAND_SEL_MASK          0x00020000                // FUNCQ_BAND_SEL[17]
#define WF_PLE_TOP_CFG_DBDC_CTRL0_FUNCQ_BAND_SEL_SHFT          17
#define WF_PLE_TOP_CFG_DBDC_CTRL0_NAN_BAND_SEL_ADDR            WF_PLE_TOP_CFG_DBDC_CTRL0_ADDR
#define WF_PLE_TOP_CFG_DBDC_CTRL0_NAN_BAND_SEL_MASK            0x00010000                // NAN_BAND_SEL[16]
#define WF_PLE_TOP_CFG_DBDC_CTRL0_NAN_BAND_SEL_SHFT            16
#define WF_PLE_TOP_CFG_DBDC_CTRL0_WMM_0TO3_BAND_SEL_ADDR       WF_PLE_TOP_CFG_DBDC_CTRL0_ADDR
#define WF_PLE_TOP_CFG_DBDC_CTRL0_WMM_0TO3_BAND_SEL_MASK       0x00000F00                // WMM_0TO3_BAND_SEL[11..8]
#define WF_PLE_TOP_CFG_DBDC_CTRL0_WMM_0TO3_BAND_SEL_SHFT       8

/* =====================================================================================

  ---CFG_UWTBL_MBIST_CTRL_0 (0x820C0000 + 0x2480)---

    UWTBL_MBIST_MODE[0]          - (RW) Control register for mbist_mode of UWTBL MBIST
    UWTBL_MBIST_HOLDB[1]         - (RW) Control register for mbist_holdb of UWTBL MBIST
    UWTBL_MBIST_DEBUG[2]         - (RW) Control register for mbist_debug of UWTBL MBIST
    UWTBL_MBIST_USE_DEFAULT_DELSEL[3] - (RW) Control register for default DELSEL value of UWTBL memory
    UWTBL_MBIST_SLEEP_TEST[4]    - (RW) Control register for sleep_test of UWTBL MBIST
    UWTBL_MBIST_SLEEP_INV[5]     - (RW) Control register for sleep_inv of UWTBL MBIST
    UWTBL_MBIST_SLEEP_W[6]       - (RW) Control register for sleep_w of UWTBL MBIST
    UWTBL_MBIST_SLEEP_R[7]       - (RW) Control register for sleep_r of UWTBL MBIST
    UWTBL_MBIST_DONE[8]          - (RO) Working status of UWTBL SRAM MBIST circuit
    RESERVED9[15..9]             - (RO) Reserved bits
    UWTBL_MBIST_FAIL[21..16]     - (RO) MBIST check result of UWTBL SRAM
    RESERVED22[31..22]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_FAIL_ADDR WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_FAIL_MASK 0x003F0000                // UWTBL_MBIST_FAIL[21..16]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_FAIL_SHFT 16
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_DONE_ADDR WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_DONE_MASK 0x00000100                // UWTBL_MBIST_DONE[8]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_DONE_SHFT 8
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_SLEEP_R_ADDR WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_SLEEP_R_MASK 0x00000080                // UWTBL_MBIST_SLEEP_R[7]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_SLEEP_R_SHFT 7
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_SLEEP_W_ADDR WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_SLEEP_W_MASK 0x00000040                // UWTBL_MBIST_SLEEP_W[6]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_SLEEP_W_SHFT 6
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_SLEEP_INV_ADDR WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_SLEEP_INV_MASK 0x00000020                // UWTBL_MBIST_SLEEP_INV[5]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_SLEEP_INV_SHFT 5
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_SLEEP_TEST_ADDR WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_SLEEP_TEST_MASK 0x00000010                // UWTBL_MBIST_SLEEP_TEST[4]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_SLEEP_TEST_SHFT 4
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_USE_DEFAULT_DELSEL_ADDR WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_USE_DEFAULT_DELSEL_MASK 0x00000008                // UWTBL_MBIST_USE_DEFAULT_DELSEL[3]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_USE_DEFAULT_DELSEL_SHFT 3
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_DEBUG_ADDR WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_DEBUG_MASK 0x00000004                // UWTBL_MBIST_DEBUG[2]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_DEBUG_SHFT 2
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_HOLDB_ADDR WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_HOLDB_MASK 0x00000002                // UWTBL_MBIST_HOLDB[1]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_HOLDB_SHFT 1
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_MODE_ADDR WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_MODE_MASK 0x00000001                // UWTBL_MBIST_MODE[0]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_0_UWTBL_MBIST_MODE_SHFT 0

/* =====================================================================================

  ---CFG_UWTBL_MBIST_CTRL_1 (0x820C0000 + 0x2484)---

    UWTBL_MBIST_HDEN[5..0]       - (RW) Control register for mbist UWTBL HDEN
    RESERVED6[15..6]             - (RO) Reserved bits
    UWTBL_MBIST_AWT[21..16]      - (RW) Control register for mbist UWTBL AWT
    RESERVED22[31..22]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_1_UWTBL_MBIST_AWT_ADDR WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_1_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_1_UWTBL_MBIST_AWT_MASK 0x003F0000                // UWTBL_MBIST_AWT[21..16]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_1_UWTBL_MBIST_AWT_SHFT 16
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_1_UWTBL_MBIST_HDEN_ADDR WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_1_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_1_UWTBL_MBIST_HDEN_MASK 0x0000003F                // UWTBL_MBIST_HDEN[5..0]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_1_UWTBL_MBIST_HDEN_SHFT 0

/* =====================================================================================

  ---CFG_UWTBL_MBIST_CTRL_2 (0x820C0000 + 0x2488)---

    UWTBL_BACKGROUND[15..0]      - (RW) The MBIST background control register
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_2_UWTBL_BACKGROUND_ADDR WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_2_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_2_UWTBL_BACKGROUND_MASK 0x0000FFFF                // UWTBL_BACKGROUND[15..0]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_2_UWTBL_BACKGROUND_SHFT 0

/* =====================================================================================

  ---CFG_UWTBL_MBIST_CTRL_3 (0x820C0000 + 0x248c)---

    UWTBL_DELSEL_0[31..0]        - (RW) UWTBL DELSEL 0

 =====================================================================================*/
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_3_UWTBL_DELSEL_0_ADDR  WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_3_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_3_UWTBL_DELSEL_0_MASK  0xFFFFFFFF                // UWTBL_DELSEL_0[31..0]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_3_UWTBL_DELSEL_0_SHFT  0

/* =====================================================================================

  ---CFG_UWTBL_MBIST_CTRL_4 (0x820C0000 + 0x2490)---

    UWTBL_DELSEL_1[31..0]        - (RW) UWTBL DELSEL 1

 =====================================================================================*/
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_4_UWTBL_DELSEL_1_ADDR  WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_4_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_4_UWTBL_DELSEL_1_MASK  0xFFFFFFFF                // UWTBL_DELSEL_1[31..0]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_4_UWTBL_DELSEL_1_SHFT  0

/* =====================================================================================

  ---CFG_UWTBL_MBIST_CTRL_5 (0x820C0000 + 0x2494)---

    UWTBL_FUSE[6..0]             - (RW) UWTBL FUSE
    RESERVED7[7]                 - (RO) Reserved bits
    UWTBL_PRE_FUSE[14..8]        - (RO) UWTBL MBIST Pre Fuse
    RESERVED15[15]               - (RO) Reserved bits
    UWTBL_MBIST_REPAIR_OK[21..16] - (RO) MBIST Repair OK
    RESERVED22[23..22]           - (RO) Reserved bits
    UWTBL_MBIST_REPAIR_FAIL[29..24] - (RO) MBIST Repair Fail
    RESERVED30[31..30]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_UWTBL_MBIST_REPAIR_FAIL_ADDR WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_UWTBL_MBIST_REPAIR_FAIL_MASK 0x3F000000                // UWTBL_MBIST_REPAIR_FAIL[29..24]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_UWTBL_MBIST_REPAIR_FAIL_SHFT 24
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_UWTBL_MBIST_REPAIR_OK_ADDR WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_UWTBL_MBIST_REPAIR_OK_MASK 0x003F0000                // UWTBL_MBIST_REPAIR_OK[21..16]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_UWTBL_MBIST_REPAIR_OK_SHFT 16
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_UWTBL_PRE_FUSE_ADDR  WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_UWTBL_PRE_FUSE_MASK  0x00007F00                // UWTBL_PRE_FUSE[14..8]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_UWTBL_PRE_FUSE_SHFT  8
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_UWTBL_FUSE_ADDR      WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_UWTBL_FUSE_MASK      0x0000007F                // UWTBL_FUSE[6..0]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_5_UWTBL_FUSE_SHFT      0

/* =====================================================================================

  ---CFG_UWTBL_MBIST_CTRL_6 (0x820C0000 + 0x2498)---

    UWTBL_DELSEL_2[31..0]        - (RW) UWTBL DELSEL 2

 =====================================================================================*/
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_6_UWTBL_DELSEL_2_ADDR  WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_6_ADDR
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_6_UWTBL_DELSEL_2_MASK  0xFFFFFFFF                // UWTBL_DELSEL_2[31..0]
#define WF_PLE_TOP_CFG_UWTBL_MBIST_CTRL_6_UWTBL_DELSEL_2_SHFT  0

/* =====================================================================================

  ---CFG_SEC_MBIST_CTRL_0 (0x820C0000 + 0x25c0)---

    SEC_MBIST_MODE[0]            - (RW) Control register for mbist_mode of SEC MBIST
    SEC_MBIST_HOLDB[1]           - (RW) Control register for mbist_holdb of SEC MBIST
    SEC_MBIST_DEBUG[2]           - (RW) Control register for mbist_debug of SEC MBIST
    SEC_MBIST_USE_DEFAULT_DELSEL[3] - (RW) Control register for default DELSEL value of SEC memory
    RESERVED4[7..4]              - (RO) Reserved bits
    SEC_MBIST_DONE[8]            - (RO) Working status of SEC SRAM MBIST circuit
    RESERVED9[15..9]             - (RO) Reserved bits
    SEC_MBIST_FAIL[17..16]       - (RO) MBIST check result of SEC SRAM
    RESERVED18[31..18]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_FAIL_ADDR    WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_FAIL_MASK    0x00030000                // SEC_MBIST_FAIL[17..16]
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_FAIL_SHFT    16
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_DONE_ADDR    WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_DONE_MASK    0x00000100                // SEC_MBIST_DONE[8]
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_DONE_SHFT    8
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_USE_DEFAULT_DELSEL_ADDR WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_USE_DEFAULT_DELSEL_MASK 0x00000008                // SEC_MBIST_USE_DEFAULT_DELSEL[3]
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_USE_DEFAULT_DELSEL_SHFT 3
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_DEBUG_ADDR   WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_DEBUG_MASK   0x00000004                // SEC_MBIST_DEBUG[2]
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_DEBUG_SHFT   2
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_HOLDB_ADDR   WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_HOLDB_MASK   0x00000002                // SEC_MBIST_HOLDB[1]
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_HOLDB_SHFT   1
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_MODE_ADDR    WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_MODE_MASK    0x00000001                // SEC_MBIST_MODE[0]
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_0_SEC_MBIST_MODE_SHFT    0

/* =====================================================================================

  ---CFG_SEC_MBIST_CTRL_1 (0x820C0000 + 0x25c4)---

    SEC_MBIST_HDEN[0]            - (RW) Control register for mbist SEC HDEN
    RESERVED1[15..1]             - (RO) Reserved bits
    SEC_MBIST_AWT[16]            - (RW) Control register for mbist SEC AWT
    RESERVED17[31..17]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_1_SEC_MBIST_AWT_ADDR     WF_PLE_TOP_CFG_SEC_MBIST_CTRL_1_ADDR
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_1_SEC_MBIST_AWT_MASK     0x00010000                // SEC_MBIST_AWT[16]
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_1_SEC_MBIST_AWT_SHFT     16
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_1_SEC_MBIST_HDEN_ADDR    WF_PLE_TOP_CFG_SEC_MBIST_CTRL_1_ADDR
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_1_SEC_MBIST_HDEN_MASK    0x00000001                // SEC_MBIST_HDEN[0]
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_1_SEC_MBIST_HDEN_SHFT    0

/* =====================================================================================

  ---CFG_SEC_MBIST_CTRL_2 (0x820C0000 + 0x25c8)---

    SEC_BACKGROUND[15..0]        - (RW) The MBIST background control register
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_2_SEC_BACKGROUND_ADDR    WF_PLE_TOP_CFG_SEC_MBIST_CTRL_2_ADDR
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_2_SEC_BACKGROUND_MASK    0x0000FFFF                // SEC_BACKGROUND[15..0]
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_2_SEC_BACKGROUND_SHFT    0

/* =====================================================================================

  ---CFG_SEC_MBIST_CTRL_3 (0x820C0000 + 0x25cc)---

    SEC_DELSEL_0[31..0]          - (RW) SEC DELSEL 0

 =====================================================================================*/
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_3_SEC_DELSEL_0_ADDR      WF_PLE_TOP_CFG_SEC_MBIST_CTRL_3_ADDR
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_3_SEC_DELSEL_0_MASK      0xFFFFFFFF                // SEC_DELSEL_0[31..0]
#define WF_PLE_TOP_CFG_SEC_MBIST_CTRL_3_SEC_DELSEL_0_SHFT      0

/* =====================================================================================

  ---CFG_PF_MBIST_CTRL_0 (0x820C0000 + 0x25e0)---

    PF_MBIST_MODE[0]             - (RW) Control register for mbist_mode of PF MBIST
    PF_MBIST_HOLDB[1]            - (RW) Control register for mbist_holdb of PF MBIST
    PF_MBIST_DEBUG[2]            - (RW) Control register for mbist_debug of PF MBIST
    PF_MBIST_USE_DEFAULT_DELSEL[3] - (RW) Control register for default DELSEL value of PF memory
    PF_MBIST_SLEEP_TEST[4]       - (RW) Control register for sleep_test of PF MBIST
    PF_MBIST_SLEEP_INV[5]        - (RW) Control register for sleep_inv of PF MBIST
    PF_MBIST_SLEEP_W[6]          - (RW) Control register for sleep_w of PF MBIST
    PF_MBIST_SLEEP_R[7]          - (RW) Control register for sleep_r of PF MBIST
    PF_MBIST_DONE[8]             - (RO) Working status of PF SRAM MBIST circuit
    RESERVED9[11..9]             - (RO) Reserved bits
    PF_MBIST_FAIL[31..12]        - (RO) MBIST check result of PF SRAM

 =====================================================================================*/
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_FAIL_ADDR      WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_FAIL_MASK      0xFFFFF000                // PF_MBIST_FAIL[31..12]
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_FAIL_SHFT      12
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_DONE_ADDR      WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_DONE_MASK      0x00000100                // PF_MBIST_DONE[8]
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_DONE_SHFT      8
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_SLEEP_R_ADDR   WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_SLEEP_R_MASK   0x00000080                // PF_MBIST_SLEEP_R[7]
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_SLEEP_R_SHFT   7
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_SLEEP_W_ADDR   WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_SLEEP_W_MASK   0x00000040                // PF_MBIST_SLEEP_W[6]
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_SLEEP_W_SHFT   6
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_SLEEP_INV_ADDR WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_SLEEP_INV_MASK 0x00000020                // PF_MBIST_SLEEP_INV[5]
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_SLEEP_INV_SHFT 5
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_SLEEP_TEST_ADDR WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_SLEEP_TEST_MASK 0x00000010                // PF_MBIST_SLEEP_TEST[4]
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_SLEEP_TEST_SHFT 4
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_USE_DEFAULT_DELSEL_ADDR WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_USE_DEFAULT_DELSEL_MASK 0x00000008                // PF_MBIST_USE_DEFAULT_DELSEL[3]
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_USE_DEFAULT_DELSEL_SHFT 3
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_DEBUG_ADDR     WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_DEBUG_MASK     0x00000004                // PF_MBIST_DEBUG[2]
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_DEBUG_SHFT     2
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_HOLDB_ADDR     WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_HOLDB_MASK     0x00000002                // PF_MBIST_HOLDB[1]
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_HOLDB_SHFT     1
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_MODE_ADDR      WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_ADDR
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_MODE_MASK      0x00000001                // PF_MBIST_MODE[0]
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_0_PF_MBIST_MODE_SHFT      0

/* =====================================================================================

  ---CFG_PF_MBIST_CTRL_1 (0x820C0000 + 0x25e4)---

    PF_MBIST_HDEN[9..0]          - (RW) Control register for mbist PF HDEN
    RESERVED10[11..10]           - (RO) Reserved bits
    PF_MBIST_AWT[31..12]         - (RW) Control register for mbist PF AWT

 =====================================================================================*/
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_1_PF_MBIST_AWT_ADDR       WF_PLE_TOP_CFG_PF_MBIST_CTRL_1_ADDR
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_1_PF_MBIST_AWT_MASK       0xFFFFF000                // PF_MBIST_AWT[31..12]
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_1_PF_MBIST_AWT_SHFT       12
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_1_PF_MBIST_HDEN_ADDR      WF_PLE_TOP_CFG_PF_MBIST_CTRL_1_ADDR
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_1_PF_MBIST_HDEN_MASK      0x000003FF                // PF_MBIST_HDEN[9..0]
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_1_PF_MBIST_HDEN_SHFT      0

/* =====================================================================================

  ---CFG_PF_MBIST_CTRL_2 (0x820C0000 + 0x25e8)---

    PF_BACKGROUND[15..0]         - (RW) The MBIST background control register
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_2_PF_BACKGROUND_ADDR      WF_PLE_TOP_CFG_PF_MBIST_CTRL_2_ADDR
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_2_PF_BACKGROUND_MASK      0x0000FFFF                // PF_BACKGROUND[15..0]
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_2_PF_BACKGROUND_SHFT      0

/* =====================================================================================

  ---CFG_PF_MBIST_CTRL_3 (0x820C0000 + 0x25ec)---

    PF_DELSEL_0[31..0]           - (RW) PF DELSEL 0

 =====================================================================================*/
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_3_PF_DELSEL_0_ADDR        WF_PLE_TOP_CFG_PF_MBIST_CTRL_3_ADDR
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_3_PF_DELSEL_0_MASK        0xFFFFFFFF                // PF_DELSEL_0[31..0]
#define WF_PLE_TOP_CFG_PF_MBIST_CTRL_3_PF_DELSEL_0_SHFT        0

/* =====================================================================================

  ---SYSRAM_MBIST_CTRL (0x820C0000 + 0x3004)---

    MBIST_SW_RESET[0]            - (RW) MBIST Software reset
    RESERVED1[7..1]              - (RO) Reserved bits
    MBIST_BSEL[15..8]            - (RW) Controls BSEL of SRAM MBIST circuit.
    MBIST_BACKGROUND[31..16]     - (RW) The MBIST background control register

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_MBIST_CTRL_MBIST_BACKGROUND_ADDR     WF_PLE_TOP_SYSRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SYSRAM_MBIST_CTRL_MBIST_BACKGROUND_MASK     0xFFFF0000                // MBIST_BACKGROUND[31..16]
#define WF_PLE_TOP_SYSRAM_MBIST_CTRL_MBIST_BACKGROUND_SHFT     16
#define WF_PLE_TOP_SYSRAM_MBIST_CTRL_MBIST_BSEL_ADDR           WF_PLE_TOP_SYSRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SYSRAM_MBIST_CTRL_MBIST_BSEL_MASK           0x0000FF00                // MBIST_BSEL[15..8]
#define WF_PLE_TOP_SYSRAM_MBIST_CTRL_MBIST_BSEL_SHFT           8
#define WF_PLE_TOP_SYSRAM_MBIST_CTRL_MBIST_SW_RESET_ADDR       WF_PLE_TOP_SYSRAM_MBIST_CTRL_ADDR
#define WF_PLE_TOP_SYSRAM_MBIST_CTRL_MBIST_SW_RESET_MASK       0x00000001                // MBIST_SW_RESET[0]
#define WF_PLE_TOP_SYSRAM_MBIST_CTRL_MBIST_SW_RESET_SHFT       0

/* =====================================================================================

  ---SYSRAM_MBIST_DEBUG (0x820C0000 + 0x3008)---

    SYSRAM_MBIST_DEBUG[15..0]    - (RW) Control register for mbist_debug of SYSRAM MBIST
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_MBIST_DEBUG_SYSRAM_MBIST_DEBUG_ADDR  WF_PLE_TOP_SYSRAM_MBIST_DEBUG_ADDR
#define WF_PLE_TOP_SYSRAM_MBIST_DEBUG_SYSRAM_MBIST_DEBUG_MASK  0x0000FFFF                // SYSRAM_MBIST_DEBUG[15..0]
#define WF_PLE_TOP_SYSRAM_MBIST_DEBUG_SYSRAM_MBIST_DEBUG_SHFT  0

/* =====================================================================================

  ---SYSRAM_MBIST_MODE (0x820C0000 + 0x300C)---

    SYSRAM_MBIST_MODE[15..0]     - (RW) Control register for mbist_holdb of SYSRAM  MBIST
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_MBIST_MODE_SYSRAM_MBIST_MODE_ADDR    WF_PLE_TOP_SYSRAM_MBIST_MODE_ADDR
#define WF_PLE_TOP_SYSRAM_MBIST_MODE_SYSRAM_MBIST_MODE_MASK    0x0000FFFF                // SYSRAM_MBIST_MODE[15..0]
#define WF_PLE_TOP_SYSRAM_MBIST_MODE_SYSRAM_MBIST_MODE_SHFT    0

/* =====================================================================================

  ---SYSRAM_MBIST_HOLDB (0x820C0000 + 0x3010)---

    SYSRAM_MBIST_HOLDB[15..0]    - (RW) Control register for mbist_holdb of sysram MBIST
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_MBIST_HOLDB_SYSRAM_MBIST_HOLDB_ADDR  WF_PLE_TOP_SYSRAM_MBIST_HOLDB_ADDR
#define WF_PLE_TOP_SYSRAM_MBIST_HOLDB_SYSRAM_MBIST_HOLDB_MASK  0x0000FFFF                // SYSRAM_MBIST_HOLDB[15..0]
#define WF_PLE_TOP_SYSRAM_MBIST_HOLDB_SYSRAM_MBIST_HOLDB_SHFT  0

/* =====================================================================================

  ---SYSRAM_MBIST_DONE (0x820C0000 + 0x3014)---

    SYSRAM_MBIST_DONE[15..0]     - (RO) Working status of SYSRAM MBIST 3 circuit
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_MBIST_DONE_SYSRAM_MBIST_DONE_ADDR    WF_PLE_TOP_SYSRAM_MBIST_DONE_ADDR
#define WF_PLE_TOP_SYSRAM_MBIST_DONE_SYSRAM_MBIST_DONE_MASK    0x0000FFFF                // SYSRAM_MBIST_DONE[15..0]
#define WF_PLE_TOP_SYSRAM_MBIST_DONE_SYSRAM_MBIST_DONE_SHFT    0

/* =====================================================================================

  ---SYSRAM_MBIST_FAIL (0x820C0000 + 0x3018)---

    SYSRAM_MBIST_FAIL[31..0]     - (RO) MBIST check result of SYSRAM cell 3

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_MBIST_FAIL_SYSRAM_MBIST_FAIL_ADDR    WF_PLE_TOP_SYSRAM_MBIST_FAIL_ADDR
#define WF_PLE_TOP_SYSRAM_MBIST_FAIL_SYSRAM_MBIST_FAIL_MASK    0xFFFFFFFF                // SYSRAM_MBIST_FAIL[31..0]
#define WF_PLE_TOP_SYSRAM_MBIST_FAIL_SYSRAM_MBIST_FAIL_SHFT    0

/* =====================================================================================

  ---SYSRAM_MBIST_SLEEP_TEST (0x820C0000 + 0x301C)---

    SYSRAM_MBIST_SLEEP_TEST[15..0] - (RW) Control register for sleep_test of group 3 MBIST
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_MBIST_SLEEP_TEST_SYSRAM_MBIST_SLEEP_TEST_ADDR WF_PLE_TOP_SYSRAM_MBIST_SLEEP_TEST_ADDR
#define WF_PLE_TOP_SYSRAM_MBIST_SLEEP_TEST_SYSRAM_MBIST_SLEEP_TEST_MASK 0x0000FFFF                // SYSRAM_MBIST_SLEEP_TEST[15..0]
#define WF_PLE_TOP_SYSRAM_MBIST_SLEEP_TEST_SYSRAM_MBIST_SLEEP_TEST_SHFT 0

/* =====================================================================================

  ---SYSRAM_MBIST_SLEEP_INV (0x820C0000 + 0x3020)---

    SYSRAM_MBIST_SLEEP_INV[15..0] - (RW) Control register for sleep_inv of group 3 MBIST
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_MBIST_SLEEP_INV_SYSRAM_MBIST_SLEEP_INV_ADDR WF_PLE_TOP_SYSRAM_MBIST_SLEEP_INV_ADDR
#define WF_PLE_TOP_SYSRAM_MBIST_SLEEP_INV_SYSRAM_MBIST_SLEEP_INV_MASK 0x0000FFFF                // SYSRAM_MBIST_SLEEP_INV[15..0]
#define WF_PLE_TOP_SYSRAM_MBIST_SLEEP_INV_SYSRAM_MBIST_SLEEP_INV_SHFT 0

/* =====================================================================================

  ---SYSRAM_MBIST_SLEEP_W (0x820C0000 + 0x3024)---

    SYSRAM_MBIST_SLEEP_WRITE[15..0] - (RW) Control register for sleep_w of group 3 MBIST
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_MBIST_SLEEP_W_SYSRAM_MBIST_SLEEP_WRITE_ADDR WF_PLE_TOP_SYSRAM_MBIST_SLEEP_W_ADDR
#define WF_PLE_TOP_SYSRAM_MBIST_SLEEP_W_SYSRAM_MBIST_SLEEP_WRITE_MASK 0x0000FFFF                // SYSRAM_MBIST_SLEEP_WRITE[15..0]
#define WF_PLE_TOP_SYSRAM_MBIST_SLEEP_W_SYSRAM_MBIST_SLEEP_WRITE_SHFT 0

/* =====================================================================================

  ---SYSRAM_MBIST_SLEEP_R (0x820C0000 + 0x3028)---

    SYSRAM_MBIST_SLEEP_READ[15..0] - (RW) Control register for sleep_r of group 3 MBIST
    RESERVED16[31..16]           - (RO) Reserved bits

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_MBIST_SLEEP_R_SYSRAM_MBIST_SLEEP_READ_ADDR WF_PLE_TOP_SYSRAM_MBIST_SLEEP_R_ADDR
#define WF_PLE_TOP_SYSRAM_MBIST_SLEEP_R_SYSRAM_MBIST_SLEEP_READ_MASK 0x0000FFFF                // SYSRAM_MBIST_SLEEP_READ[15..0]
#define WF_PLE_TOP_SYSRAM_MBIST_SLEEP_R_SYSRAM_MBIST_SLEEP_READ_SHFT 0

/* =====================================================================================

  ---SYSRAM_AWT_HDEN (0x820C0000 + 0x302C)---

    SYSRAM_MBIST_AWT[15..0]      - (RW) Control register for mbist SYSRAM 3 AWT
    SYSRAM_MBIST_HDEN[31..16]    - (RW) Control register for mbist SYSRAM 3 HDEN

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_AWT_HDEN_SYSRAM_MBIST_HDEN_ADDR      WF_PLE_TOP_SYSRAM_AWT_HDEN_ADDR
#define WF_PLE_TOP_SYSRAM_AWT_HDEN_SYSRAM_MBIST_HDEN_MASK      0xFFFF0000                // SYSRAM_MBIST_HDEN[31..16]
#define WF_PLE_TOP_SYSRAM_AWT_HDEN_SYSRAM_MBIST_HDEN_SHFT      16
#define WF_PLE_TOP_SYSRAM_AWT_HDEN_SYSRAM_MBIST_AWT_ADDR       WF_PLE_TOP_SYSRAM_AWT_HDEN_ADDR
#define WF_PLE_TOP_SYSRAM_AWT_HDEN_SYSRAM_MBIST_AWT_MASK       0x0000FFFF                // SYSRAM_MBIST_AWT[15..0]
#define WF_PLE_TOP_SYSRAM_AWT_HDEN_SYSRAM_MBIST_AWT_SHFT       0

/* =====================================================================================

  ---SYSRAM_DBG_SEL (0x820C0000 + 0x3030)---

    SYSRAM_DEBUG_SELECT_0[7..0]  - (RW) Selects SYSRAM control debug 0
    SYSRAM_DEBUG_SELECT_1[15..8] - (RW) Selects SYSRAM control debug 1
    SYSRAM_DEBUG_SELECT_2[23..16] - (RW) Selects SYSRAM control debug 2
    SYSRAM_DEBUG_SELECT_3[31..24] - (RW) Selects SYSRAM control debug 3

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_DBG_SEL_SYSRAM_DEBUG_SELECT_3_ADDR   WF_PLE_TOP_SYSRAM_DBG_SEL_ADDR
#define WF_PLE_TOP_SYSRAM_DBG_SEL_SYSRAM_DEBUG_SELECT_3_MASK   0xFF000000                // SYSRAM_DEBUG_SELECT_3[31..24]
#define WF_PLE_TOP_SYSRAM_DBG_SEL_SYSRAM_DEBUG_SELECT_3_SHFT   24
#define WF_PLE_TOP_SYSRAM_DBG_SEL_SYSRAM_DEBUG_SELECT_2_ADDR   WF_PLE_TOP_SYSRAM_DBG_SEL_ADDR
#define WF_PLE_TOP_SYSRAM_DBG_SEL_SYSRAM_DEBUG_SELECT_2_MASK   0x00FF0000                // SYSRAM_DEBUG_SELECT_2[23..16]
#define WF_PLE_TOP_SYSRAM_DBG_SEL_SYSRAM_DEBUG_SELECT_2_SHFT   16
#define WF_PLE_TOP_SYSRAM_DBG_SEL_SYSRAM_DEBUG_SELECT_1_ADDR   WF_PLE_TOP_SYSRAM_DBG_SEL_ADDR
#define WF_PLE_TOP_SYSRAM_DBG_SEL_SYSRAM_DEBUG_SELECT_1_MASK   0x0000FF00                // SYSRAM_DEBUG_SELECT_1[15..8]
#define WF_PLE_TOP_SYSRAM_DBG_SEL_SYSRAM_DEBUG_SELECT_1_SHFT   8
#define WF_PLE_TOP_SYSRAM_DBG_SEL_SYSRAM_DEBUG_SELECT_0_ADDR   WF_PLE_TOP_SYSRAM_DBG_SEL_ADDR
#define WF_PLE_TOP_SYSRAM_DBG_SEL_SYSRAM_DEBUG_SELECT_0_MASK   0x000000FF                // SYSRAM_DEBUG_SELECT_0[7..0]
#define WF_PLE_TOP_SYSRAM_DBG_SEL_SYSRAM_DEBUG_SELECT_0_SHFT   0

/* =====================================================================================

  ---SYSRAM_DELSEL (0x820C0000 + 0x3070)---

    TYPE0_SYSRAM_DELSEL[31..0]   - (RW) Type0 SYSRAM DELSEL bits

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_DELSEL_TYPE0_SYSRAM_DELSEL_ADDR      WF_PLE_TOP_SYSRAM_DELSEL_ADDR
#define WF_PLE_TOP_SYSRAM_DELSEL_TYPE0_SYSRAM_DELSEL_MASK      0xFFFFFFFF                // TYPE0_SYSRAM_DELSEL[31..0]
#define WF_PLE_TOP_SYSRAM_DELSEL_TYPE0_SYSRAM_DELSEL_SHFT      0

/* =====================================================================================

  ---SYSRAM_DELSEL_1 (0x820C0000 + 0x3074)---

    TYPE1_SYSRAM_DELSEL[31..0]   - (RW) Type1 SYSRAM DELSEL bits

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_DELSEL_1_TYPE1_SYSRAM_DELSEL_ADDR    WF_PLE_TOP_SYSRAM_DELSEL_1_ADDR
#define WF_PLE_TOP_SYSRAM_DELSEL_1_TYPE1_SYSRAM_DELSEL_MASK    0xFFFFFFFF                // TYPE1_SYSRAM_DELSEL[31..0]
#define WF_PLE_TOP_SYSRAM_DELSEL_1_TYPE1_SYSRAM_DELSEL_SHFT    0

/* =====================================================================================

  ---SYSRAM_DELSEL_2 (0x820C0000 + 0x3078)---

    TYPE2_SYSRAM_DELSEL[31..0]   - (RW) Type2 SYSRAM DELSEL bits

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_DELSEL_2_TYPE2_SYSRAM_DELSEL_ADDR    WF_PLE_TOP_SYSRAM_DELSEL_2_ADDR
#define WF_PLE_TOP_SYSRAM_DELSEL_2_TYPE2_SYSRAM_DELSEL_MASK    0xFFFFFFFF                // TYPE2_SYSRAM_DELSEL[31..0]
#define WF_PLE_TOP_SYSRAM_DELSEL_2_TYPE2_SYSRAM_DELSEL_SHFT    0

/* =====================================================================================

  ---SYSRAM_DELSEL_3 (0x820C0000 + 0x307C)---

    TYPE3_SYSRAM_DELSEL[31..0]   - (RW) Type3 SYSRAM DELSEL bits

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_DELSEL_3_TYPE3_SYSRAM_DELSEL_ADDR    WF_PLE_TOP_SYSRAM_DELSEL_3_ADDR
#define WF_PLE_TOP_SYSRAM_DELSEL_3_TYPE3_SYSRAM_DELSEL_MASK    0xFFFFFFFF                // TYPE3_SYSRAM_DELSEL[31..0]
#define WF_PLE_TOP_SYSRAM_DELSEL_3_TYPE3_SYSRAM_DELSEL_SHFT    0

/* =====================================================================================

  ---SYSRAM_OUTRAN_ERR_FLAG (0x820C0000 + 0x3080)---

    SYSRAM_OUTRAN_ERR_FLAG[31..0] - (RO) Type3 SYSRAM DELSEL bits

 =====================================================================================*/
#define WF_PLE_TOP_SYSRAM_OUTRAN_ERR_FLAG_SYSRAM_OUTRAN_ERR_FLAG_ADDR WF_PLE_TOP_SYSRAM_OUTRAN_ERR_FLAG_ADDR
#define WF_PLE_TOP_SYSRAM_OUTRAN_ERR_FLAG_SYSRAM_OUTRAN_ERR_FLAG_MASK 0xFFFFFFFF                // SYSRAM_OUTRAN_ERR_FLAG[31..0]
#define WF_PLE_TOP_SYSRAM_OUTRAN_ERR_FLAG_SYSRAM_OUTRAN_ERR_FLAG_SHFT 0

#ifdef __cplusplus
}
#endif

#endif // __WF_PLE_TOP_REGS_H__
