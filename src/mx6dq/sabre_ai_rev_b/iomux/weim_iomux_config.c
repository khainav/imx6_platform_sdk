/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved.
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
*/

// File: weim_iomux_config.c

#include <io.h>
#include <iomux_define.h>
#include <iomux_register.h>

// Function to config iomux for instance weim.
void weim_iomux_config(void)
{
    // Config weim.WEIM_A[16] to pad EIM_A16(H25)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_A16(0x020E00F4)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_A16.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 7 iomux modes to be used for pad: EIM_A16.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_A[16] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DI1_DISP_CLK of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_PIXCLK of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_PIX_CLK_SELECT_INPUT for mode ALT2.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: DPHY_TEST_OUT[23] of instance: mipi_core.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[22] of instance: gpio2.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[6] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[16] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_A16);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_A16(0x020E0408)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_A16.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_A16.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_A16.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_A16.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_A16.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_A16.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_A16.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_A16.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_A16);

    // Config weim.WEIM_A[17] to pad EIM_A17(G24)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_A17(0x020E00F0)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_A17.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_A17.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_A[17] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[12] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[12] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_12_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: Reserved of instance: Reserved.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: DPHY_TEST_OUT[22] of instance: mipi_core.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[21] of instance: gpio2.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[5] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[17] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_A17);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_A17(0x020E0404)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_A17.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_A17.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_A17.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_A17.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_A17.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_A17.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_A17.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_A17.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_A17);

    // Config weim.WEIM_A[18] to pad EIM_A18(J22)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_A18(0x020E00EC)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_A18.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_A18.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_A[18] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[13] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[13] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_13_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: Reserved of instance: Reserved.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: DPHY_TEST_OUT[21] of instance: mipi_core.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[20] of instance: gpio2.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[4] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[18] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_A18);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_A18(0x020E0400)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_A18.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_A18.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_A18.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_A18.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_A18.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_A18.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_A18.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_A18.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_A18);

    // Config weim.WEIM_A[19] to pad EIM_A19(G25)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_A19(0x020E00E8)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_A19.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_A19.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_A[19] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[14] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[14] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_14_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: Reserved of instance: Reserved.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: DPHY_TEST_OUT[20] of instance: mipi_core.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[19] of instance: gpio2.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[3] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[19] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_A19);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_A19(0x020E03FC)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_A19.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_A19.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_A19.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_A19.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_A19.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_A19.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_A19.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_A19.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_A19);

    // Config weim.WEIM_A[20] to pad EIM_A20(H22)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_A20(0x020E00E4)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_A20.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_A20.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_A[20] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[15] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[15] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_15_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: Reserved of instance: Reserved.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: DPHY_TEST_OUT[19] of instance: mipi_core.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[18] of instance: gpio2.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[2] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[20] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_A20);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_A20(0x020E03F8)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_A20.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_A20.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_A20.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_A20.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_A20.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_A20.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_A20.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_A20.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_A20);

    // Config weim.WEIM_A[21] to pad EIM_A21(H23)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_A21(0x020E00E0)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_A21.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_A21.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_A[21] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[16] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[16] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_16_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: Reserved of instance: Reserved.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: DPHY_TEST_OUT[18] of instance: mipi_core.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[17] of instance: gpio2.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[1] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[21] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_A21);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_A21(0x020E03F4)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_A21.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_A21.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_A21.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_A21.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_A21.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_A21.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_A21.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_A21.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_A21);

    // Config weim.WEIM_A[22] to pad EIM_A22(F24)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_A22(0x020E00DC)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_A22.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 6 iomux modes to be used for pad: EIM_A22.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_A[22] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[17] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[17] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_17_SELECT_INPUT for mode ALT2.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[16] of instance: gpio2.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[0] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[22] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_A22);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_A22(0x020E03F0)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_A22.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_A22.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_A22.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_A22.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_A22.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_A22.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_A22.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_A22.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_A22);

    // Config weim.WEIM_A[23] to pad EIM_A23(J21)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_A23(0x020E00D8)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_A23.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_A23.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_A[23] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[18] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[18] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_18_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: SISG[3] of instance: ipu2.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: SISG[3] of instance: ipu1.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[6] of instance: gpio6.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HPROT[3] of instance: pl301_mx63per1.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[23] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_A23);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_A23(0x020E03EC)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_A23.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_A23.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_A23.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_A23.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_A23.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_A23.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_A23.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_A23.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_A23);

    // Config weim.WEIM_A[24] to pad EIM_A24(F25)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_A24(0x020E00D4)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_A24.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_A24.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_A[24] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[19] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[19] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_19_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: SISG[2] of instance: ipu2.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: SISG[2] of instance: ipu1.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[4] of instance: gpio5.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HPROT[2] of instance: pl301_mx63per1.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[24] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_A24);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_A24(0x020E03E8)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_A24.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_A24.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_A24.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_A24.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_A24.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_A24.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_A24.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_A24.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_A24);

    // Config weim.WEIM_CS[0] to pad EIM_CS0(H24)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_CS0(0x020E00F8)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_CS0.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 6 iomux modes to be used for pad: EIM_CS0.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_CS[0] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DI1_PIN5 of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: SCLK of instance: ecspi2.
    //                NOTE: - Config Register IOMUXC_ECSPI2_IPP_CSPI_CLK_IN_SELECT_INPUT for mode ALT2.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: DPHY_TEST_OUT[24] of instance: mipi_core.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[23] of instance: gpio2.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[7] of instance: tpsmp.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_CS0);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_CS0(0x020E040C)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_CS0.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_CS0.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_CS0.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_CS0.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_CS0.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_CS0.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_CS0.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_CS0.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_CS0);

    // Config weim.WEIM_D[16] to pad EIM_D16(C25)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D16(0x020E0090)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D16.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 7 iomux modes to be used for pad: EIM_D16.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[16] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: SCLK of instance: ecspi1.
    //                NOTE: - Config Register IOMUXC_ECSPI1_IPP_CSPI_CLK_IN_SELECT_INPUT for mode ALT1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: DI0_PIN5 of instance: ipu1.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: CSI1_D[18] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_18_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: DDC_SDA of instance: hdmi_tx.
    //                NOTE: - Config Register IOMUXC_HDMI_TX_II2C_MSTH13TDDC_SDAIN_SELECT_INPUT for mode ALT4.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[16] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: SDA of instance: i2c2.
    //                NOTE: - Config Register IOMUXC_I2C2_IPP_SDA_IN_SELECT_INPUT for mode ALT6.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_D16);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D16(0x020E03A4)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EIM_D16.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_D16.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_D16.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_D16.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_D16.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_D16.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_D16.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_D16.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_D16);

    // Config weim.WEIM_D[17] to pad EIM_D17(F21)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D17(0x020E0094)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D17.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_D17.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[17] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: MISO of instance: ecspi1.
    //                NOTE: - Config Register IOMUXC_ECSPI1_IPP_IND_MISO_SELECT_INPUT for mode ALT1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: DI0_PIN6 of instance: ipu1.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: CSI1_PIXCLK of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_PIX_CLK_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: DCIC_OUT of instance: dcic1.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[17] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: SCL of instance: i2c3.
    //                NOTE: - Config Register IOMUXC_I2C3_IPP_SCL_IN_SELECT_INPUT for mode ALT6.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: HBURST[1] of instance: pl301_mx63per1.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_D17);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D17(0x020E03A8)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EIM_D17.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_D17.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_D17.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_D17.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_D17.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_D17.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_D17.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_D17.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_D17);

    // Config weim.WEIM_D[18] to pad EIM_D18(D24)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D18(0x020E0098)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D18.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_D18.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[18] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: MOSI of instance: ecspi1.
    //                NOTE: - Config Register IOMUXC_ECSPI1_IPP_IND_MOSI_SELECT_INPUT for mode ALT1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: DI0_PIN7 of instance: ipu1.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: CSI1_D[17] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_17_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: DI1_D0_CS of instance: ipu1.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[18] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: SDA of instance: i2c3.
    //                NOTE: - Config Register IOMUXC_I2C3_IPP_SDA_IN_SELECT_INPUT for mode ALT6.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: HBURST[2] of instance: pl301_mx63per1.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_D18);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D18(0x020E03AC)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EIM_D18.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_D18.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_D18.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_D18.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_D18.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_D18.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_D18.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_D18.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_D18);

    // Config weim.WEIM_D[19] to pad EIM_D19(G21)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D19(0x020E009C)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D19.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_D19.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[19] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: SS1 of instance: ecspi1.
    //                NOTE: - Config Register IOMUXC_ECSPI1_IPP_IND_SS_B_1_SELECT_INPUT for mode ALT1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: DI0_PIN8 of instance: ipu1.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: CSI1_D[16] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_16_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: CTS of instance: uart1.
    //                NOTE: - Config Register IOMUXC_UART1_IPP_UART_RTS_B_SELECT_INPUT for mode ALT4.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[19] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: EPITO of instance: epit1.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: HRESP of instance: pl301_mx63per1.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_D19);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D19(0x020E03B0)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EIM_D19.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_D19.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_D19.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_D19.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_D19.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_D19.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_D19.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_D19.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_D19);

    // Config weim.WEIM_D[20] to pad EIM_D20(G20)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D20(0x020E00A0)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D20.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 7 iomux modes to be used for pad: EIM_D20.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[20] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: SS0 of instance: ecspi4.
    //                NOTE: - Config Register IOMUXC_ECSPI4_IPP_IND_SS_B_0_SELECT_INPUT for mode ALT1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: DI0_PIN16 of instance: ipu1.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: CSI1_D[15] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_15_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: RTS of instance: uart1.
    //                NOTE: - Config Register IOMUXC_UART1_IPP_UART_RTS_B_SELECT_INPUT for mode ALT4.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[20] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: EPITO of instance: epit2.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_D20);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D20(0x020E03B4)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EIM_D20.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_D20.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_D20.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_D20.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_D20.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_D20.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_D20.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_D20.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_D20);

    // Config weim.WEIM_D[21] to pad EIM_D21(H20)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D21(0x020E00A4)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D21.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_D21.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[21] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: SCLK of instance: ecspi4.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: DI0_PIN17 of instance: ipu1.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: CSI1_D[11] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_11_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: USBOTG_OC of instance: usboh3.
    //                NOTE: - Config Register IOMUXC_USBOH3_IPP_IND_OTG_OC_SELECT_INPUT for mode ALT4.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[21] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: SCL of instance: i2c1.
    //                NOTE: - Config Register IOMUXC_I2C1_IPP_SCL_IN_SELECT_INPUT for mode ALT6.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: IN1 of instance: spdif.
    //                NOTE: - Config Register IOMUXC_SPDIF_SPDIF_IN1_SELECT_INPUT for mode ALT7.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_D21);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D21(0x020E03B8)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EIM_D21.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_D21.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_D21.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_D21.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_D21.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_D21.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_D21.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_D21.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_D21);

    // Config weim.WEIM_D[22] to pad EIM_D22(E23)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D22(0x020E00A8)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D22.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_D22.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[22] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: MISO of instance: ecspi4.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: DI0_PIN1 of instance: ipu1.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: CSI1_D[10] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_10_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: USBOTG_PWR of instance: usboh3.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[22] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: OUT1 of instance: spdif.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: HWRITE of instance: pl301_mx63per1.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_D22);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D22(0x020E03BC)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EIM_D22.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_D22.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_D22.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_D22.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_D22.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_D22.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_D22.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_D22.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_D22);

    // Config weim.WEIM_D[23] to pad EIM_D23(D25)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D23(0x020E00AC)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D23.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_D23.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[23] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DI0_D0_CS of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CTS of instance: uart3.
    //                NOTE: - Config Register IOMUXC_UART3_IPP_UART_RTS_B_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DCD of instance: uart1.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: CSI1_DATA_EN of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_EN_SELECT_INPUT for mode ALT4.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[23] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: DI1_PIN2 of instance: ipu1.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: DI1_PIN14 of instance: ipu1.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_D23);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D23(0x020E03C0)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EIM_D23.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_D23.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_D23.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_D23.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_D23.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_D23.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_D23.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_D23.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_D23);

    // Config weim.WEIM_D[24] to pad EIM_D24(F22)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D24(0x020E00B4)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D24.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_D24.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[24] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: SS2 of instance: ecspi4.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: TXD_MUX of instance: uart3.
    //                NOTE: - Config Register IOMUXC_UART3_IPP_UART_RXD_MUX_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: SS2 of instance: ecspi1.
    //                NOTE: - Config Register IOMUXC_ECSPI1_IPP_IND_SS_B_2_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: SS2 of instance: ecspi2.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[24] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: AUD5_RXFS of instance: audmux.
    //                NOTE: - Config Register IOMUXC_AUDMUX_P5_INPUT_RXFS_AMX_SELECT_INPUT for mode ALT6.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: DTR of instance: uart1.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_D24);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D24(0x020E03C8)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EIM_D24.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_D24.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_D24.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_D24.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_D24.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_D24.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_D24.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_D24.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_D24);

    // Config weim.WEIM_D[25] to pad EIM_D25(G22)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D25(0x020E00B8)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D25.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_D25.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[25] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: SS3 of instance: ecspi4.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: RXD_MUX of instance: uart3.
    //                NOTE: - Config Register IOMUXC_UART3_IPP_UART_RXD_MUX_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: SS3 of instance: ecspi1.
    //                NOTE: - Config Register IOMUXC_ECSPI1_IPP_IND_SS_B_3_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: SS3 of instance: ecspi2.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[25] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: AUD5_RXC of instance: audmux.
    //                NOTE: - Config Register IOMUXC_AUDMUX_P5_INPUT_RXCLK_AMX_SELECT_INPUT for mode ALT6.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: DSR of instance: uart1.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_D25);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D25(0x020E03CC)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EIM_D25.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_D25.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_D25.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_D25.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_D25.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_D25.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_D25.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_D25.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_D25);

    // Config weim.WEIM_D[26] to pad EIM_D26(E24)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D26(0x020E00BC)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D26.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_D26.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[26] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DI1_PIN11 of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI0_D[1] of instance: ipu1.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: CSI1_D[14] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_14_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: TXD_MUX of instance: uart2.
    //                NOTE: - Config Register IOMUXC_UART2_IPP_UART_RXD_MUX_SELECT_INPUT for mode ALT4.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[26] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: SISG[2] of instance: ipu1.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: DISP1_DAT[22] of instance: ipu1.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_D26);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D26(0x020E03D0)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EIM_D26.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_D26.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_D26.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_D26.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_D26.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_D26.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_D26.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_D26.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_D26);

    // Config weim.WEIM_D[27] to pad EIM_D27(E25)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D27(0x020E00C0)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D27.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_D27.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[27] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DI1_PIN13 of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI0_D[0] of instance: ipu1.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: CSI1_D[13] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_13_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: RXD_MUX of instance: uart2.
    //                NOTE: - Config Register IOMUXC_UART2_IPP_UART_RXD_MUX_SELECT_INPUT for mode ALT4.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[27] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: SISG[3] of instance: ipu1.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: DISP1_DAT[23] of instance: ipu1.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_D27);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D27(0x020E03D4)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EIM_D27.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_D27.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_D27.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_D27.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_D27.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_D27.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_D27.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_D27.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_D27);

    // Config weim.WEIM_D[28] to pad EIM_D28(G23)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D28(0x020E00C4)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D28.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_D28.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[28] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: SDA of instance: i2c1.
    //                NOTE: - Config Register IOMUXC_I2C1_IPP_SDA_IN_SELECT_INPUT for mode ALT1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: MOSI of instance: ecspi4.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: CSI1_D[12] of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_12_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: CTS of instance: uart2.
    //                NOTE: - Config Register IOMUXC_UART2_IPP_UART_RTS_B_SELECT_INPUT for mode ALT4.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[28] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: EXT_TRIG of instance: ipu1.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: DI0_PIN13 of instance: ipu1.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_D28);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D28(0x020E03D8)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EIM_D28.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_D28.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_D28.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_D28.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_D28.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_D28.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_D28.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_D28.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_D28);

    // Config weim.WEIM_D[29] to pad EIM_D29(J19)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D29(0x020E00C8)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D29.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 7 iomux modes to be used for pad: EIM_D29.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[29] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DI1_PIN15 of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: SS0 of instance: ecspi4.
    //                NOTE: - Config Register IOMUXC_ECSPI4_IPP_IND_SS_B_0_SELECT_INPUT for mode ALT2.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: RTS of instance: uart2.
    //                NOTE: - Config Register IOMUXC_UART2_IPP_UART_RTS_B_SELECT_INPUT for mode ALT4.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[29] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: CSI1_VSYNC of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_VSYNC_SELECT_INPUT for mode ALT6.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: DI0_PIN14 of instance: ipu1.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_D29);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D29(0x020E03DC)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EIM_D29.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_D29.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_D29.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_D29.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_D29.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_D29.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_D29.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_D29.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_D29);

    // Config weim.WEIM_D[30] to pad EIM_D30(J20)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D30(0x020E00CC)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D30.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_D30.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[30] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[21] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: DI0_PIN11 of instance: ipu1.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: CSI0_D[3] of instance: ipu1.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: CTS of instance: uart3.
    //                NOTE: - Config Register IOMUXC_UART3_IPP_UART_RTS_B_SELECT_INPUT for mode ALT4.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[30] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: USBH1_OC of instance: usboh3.
    //                NOTE: - Config Register IOMUXC_USBOH3_IPP_IND_UH1_OC_SELECT_INPUT for mode ALT6.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: HPROT[0] of instance: pl301_mx63per1.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_D30);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D30(0x020E03E0)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EIM_D30.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_D30.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_D30.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_D30.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_D30.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_D30.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_D30.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_D30.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_D30);

    // Config weim.WEIM_D[31] to pad EIM_D31(H21)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D31(0x020E00D0)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D31.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_D31.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[31] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[20] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: DI0_PIN12 of instance: ipu1.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: CSI0_D[2] of instance: ipu1.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: RTS of instance: uart3.
    //                NOTE: - Config Register IOMUXC_UART3_IPP_UART_RTS_B_SELECT_INPUT for mode ALT4.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[31] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: USBH1_PWR of instance: usboh3.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: HPROT[1] of instance: pl301_mx63per1.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_D31);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D31(0x020E03E4)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: EIM_D31.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_D31.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_D31.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_D31.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_D31.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_D31.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_D31.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_D31.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_ENABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_D31);

    // Config weim.WEIM_DA_A[0] to pad EIM_DA0(L20)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DA0(0x020E0114)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_DA0.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 7 iomux modes to be used for pad: EIM_DA0.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_DA_A[0] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[9] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[9] of instance: ipu2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DPHY_TEST_OUT[2] of instance: mipi_core.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[0] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[14] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[0] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_DA0);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DA0(0x020E0428)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_DA0.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_DA0.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_DA0.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_DA0.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_DA0.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_DA0.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_DA0.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_DA0.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_DA0);

    // Config weim.WEIM_DA_A[1] to pad EIM_DA1(J25)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DA1(0x020E0118)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_DA1.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_DA1.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_DA_A[1] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[8] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[8] of instance: ipu2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DPHY_TEST_OUT[3] of instance: mipi_core.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: USBPHY1_TSTI_TX_LS_MODE of instance: anatop.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[1] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[15] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[1] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_DA1);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DA1(0x020E042C)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_DA1.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_DA1.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_DA1.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_DA1.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_DA1.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_DA1.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_DA1.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_DA1.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_DA1);

    // Config weim.WEIM_DA_A[10] to pad EIM_DA10(M22)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DA10(0x020E013C)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_DA10.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 7 iomux modes to be used for pad: EIM_DA10.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_DA_A[10] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DI1_PIN15 of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_DATA_EN of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_DATA_EN_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DPHY_TEST_OUT[12] of instance: mipi_core.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[10] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[24] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[10] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_DA10);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DA10(0x020E0450)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_DA10.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_DA10.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_DA10.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_DA10.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_DA10.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_DA10.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_DA10.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_DA10.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_DA10);

    // Config weim.WEIM_DA_A[11] to pad EIM_DA11(M20)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DA11(0x020E0140)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_DA11.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_DA11.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_DA_A[11] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DI1_PIN2 of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_HSYNC of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_HSYNC_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DPHY_TEST_OUT[13] of instance: mipi_core.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: DEBUG_EVT_CHN_LINES[6] of instance: sdma.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[11] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[25] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[11] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_DA11);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DA11(0x020E0454)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_DA11.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_DA11.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_DA11.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_DA11.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_DA11.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_DA11.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_DA11.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_DA11.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_DA11);

    // Config weim.WEIM_DA_A[12] to pad EIM_DA12(M24)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DA12(0x020E0144)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_DA12.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_DA12.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_DA_A[12] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DI1_PIN3 of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_VSYNC of instance: ipu2.
    //                NOTE: - Config Register IOMUXC_IPU2_IPP_IND_SENS1_VSYNC_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DPHY_TEST_OUT[14] of instance: mipi_core.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: DEBUG_EVT_CHN_LINES[3] of instance: sdma.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[12] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[26] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[12] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_DA12);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DA12(0x020E0458)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_DA12.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_DA12.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_DA12.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_DA12.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_DA12.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad EIM_DA12.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_DA12.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_DA12.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_DA12);

    // Config weim.WEIM_DA_A[13] to pad EIM_DA13(M23)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DA13(0x020E0148)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_DA13.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_DA13.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_DA_A[13] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DI1_D0_CS of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: DI1_EXT_CLK of instance: ccm.
    //                NOTE: - Config Register IOMUXC_CCM_IPP_DI1_CLK_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DPHY_TEST_OUT[15] of instance: mipi_core.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: DEBUG_EVT_CHN_LINES[4] of instance: sdma.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[13] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[27] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[13] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_DA13);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DA13(0x020E045C)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_DA13.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_DA13.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_DA13.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_DA13.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_DA13.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_DA13.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_DA13.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_DA13.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_DA13);

    // Config weim.WEIM_DA_A[14] to pad EIM_DA14(N23)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DA14(0x020E014C)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_DA14.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_DA14.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_DA_A[14] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DI1_D1_CS of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: DI0_EXT_CLK of instance: ccm.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DPHY_TEST_OUT[16] of instance: mipi_core.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: DEBUG_EVT_CHN_LINES[5] of instance: sdma.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[14] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[28] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[14] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_DA14);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DA14(0x020E0460)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_DA14.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_DA14.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_DA14.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_DA14.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_DA14.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_DA14.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_DA14.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_DA14.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_DA14);

    // Config weim.WEIM_DA_A[15] to pad EIM_DA15(N24)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DA15(0x020E0150)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_DA15.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 7 iomux modes to be used for pad: EIM_DA15.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_DA_A[15] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DI1_PIN1 of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: DI1_PIN4 of instance: ipu1.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DPHY_TEST_OUT[17] of instance: mipi_core.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[15] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[29] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[15] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_DA15);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DA15(0x020E0464)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_DA15.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_DA15.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_DA15.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_DA15.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_DA15.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_DA15.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_DA15.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_DA15.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_DA15);

    // Config weim.WEIM_DA_A[2] to pad EIM_DA2(L21)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DA2(0x020E011C)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_DA2.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_DA2.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_DA_A[2] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[7] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[7] of instance: ipu2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DPHY_TEST_OUT[4] of instance: mipi_core.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: USBPHY1_TSTI_TX_HS_MODE of instance: anatop.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[2] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[16] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[2] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_DA2);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DA2(0x020E0430)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_DA2.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_DA2.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_DA2.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_DA2.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_DA2.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_DA2.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_DA2.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_DA2.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_DA2);

    // Config weim.WEIM_DA_A[3] to pad EIM_DA3(K24)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DA3(0x020E0120)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_DA3.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_DA3.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_DA_A[3] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[6] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[6] of instance: ipu2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DPHY_TEST_OUT[5] of instance: mipi_core.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: USBPHY1_TSTI_TX_HIZ of instance: anatop.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[3] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[17] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[3] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_DA3);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DA3(0x020E0434)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_DA3.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_DA3.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_DA3.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_DA3.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_DA3.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_DA3.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_DA3.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_DA3.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_DA3);

    // Config weim.WEIM_DA_A[4] to pad EIM_DA4(L22)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DA4(0x020E0124)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_DA4.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_DA4.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_DA_A[4] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[5] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[5] of instance: ipu2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DPHY_TEST_OUT[6] of instance: mipi_core.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: USBPHY1_TSTI_TX_EN of instance: anatop.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[4] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[18] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[4] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_DA4);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DA4(0x020E0438)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_DA4.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_DA4.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_DA4.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_DA4.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_DA4.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_DA4.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_DA4.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_DA4.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_DA4);

    // Config weim.WEIM_DA_A[5] to pad EIM_DA5(L23)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DA5(0x020E0128)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_DA5.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_DA5.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_DA_A[5] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[4] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[4] of instance: ipu2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DPHY_TEST_OUT[7] of instance: mipi_core.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: USBPHY1_TSTI_TX_DP of instance: anatop.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[5] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[19] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[5] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_DA5);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DA5(0x020E043C)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_DA5.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_DA5.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_DA5.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_DA5.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_DA5.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_DA5.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_DA5.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_DA5.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_DA5);

    // Config weim.WEIM_DA_A[6] to pad EIM_DA6(K25)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DA6(0x020E012C)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_DA6.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 8 iomux modes to be used for pad: EIM_DA6.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_DA_A[6] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[3] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[3] of instance: ipu2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DPHY_TEST_OUT[8] of instance: mipi_core.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: USBPHY1_TSTI_TX_DN of instance: anatop.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[6] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[20] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[6] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_DA6);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DA6(0x020E0440)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_DA6.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_DA6.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_DA6.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_DA6.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_DA6.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_DA6.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_DA6.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_DA6.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_DA6);

    // Config weim.WEIM_DA_A[7] to pad EIM_DA7(L25)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DA7(0x020E0130)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_DA7.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 7 iomux modes to be used for pad: EIM_DA7.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_DA_A[7] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[2] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[2] of instance: ipu2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DPHY_TEST_OUT[9] of instance: mipi_core.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[7] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[21] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[7] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_DA7);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DA7(0x020E0444)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_DA7.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_DA7.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_DA7.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_DA7.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_DA7.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_DA7.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_DA7.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_DA7.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_DA7);

    // Config weim.WEIM_DA_A[8] to pad EIM_DA8(L24)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DA8(0x020E0134)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_DA8.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 7 iomux modes to be used for pad: EIM_DA8.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_DA_A[8] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[1] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[1] of instance: ipu2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DPHY_TEST_OUT[10] of instance: mipi_core.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[8] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[22] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[8] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_DA8);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DA8(0x020E0448)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_DA8.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_DA8.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_DA8.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_DA8.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_DA8.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_DA8.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_DA8.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_DA8.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_DA8);

    // Config weim.WEIM_DA_A[9] to pad EIM_DA9(M21)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_DA9(0x020E0138)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_DA9.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 7 iomux modes to be used for pad: EIM_DA9.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_DA_A[9] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DISP1_DAT[0] of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CSI1_D[0] of instance: ipu2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: DPHY_TEST_OUT[11] of instance: mipi_core.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[9] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[23] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[9] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_DA9);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_DA9(0x020E044C)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_DA9.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_DA9.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_DA9.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_DA9.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_DA9.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_DA9.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_DA9.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_DA9.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_DA9);

    // Config weim.WEIM_OE to pad EIM_OE(J24)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_OE(0x020E0100)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_OE.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 6 iomux modes to be used for pad: EIM_OE.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_OE of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DI1_PIN7 of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: MISO of instance: ecspi2.
    //                NOTE: - Config Register IOMUXC_ECSPI2_IPP_IND_MISO_SELECT_INPUT for mode ALT2.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: DPHY_TEST_OUT[26] of instance: mipi_core.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[25] of instance: gpio2.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[9] of instance: tpsmp.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_OE);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_OE(0x020E0414)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_OE.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_OE.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_OE.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_OE.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_OE.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_OE.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_OE.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_OE.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_OE);

    // Config weim.WEIM_RW to pad EIM_RW(K20)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_RW(0x020E0104)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_RW.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 7 iomux modes to be used for pad: EIM_RW.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_RW of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: DI1_PIN8 of instance: ipu1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: SS0 of instance: ecspi2.
    //                NOTE: - Config Register IOMUXC_ECSPI2_IPP_IND_SS_B_0_SELECT_INPUT for mode ALT2.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: DPHY_TEST_OUT[27] of instance: mipi_core.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[26] of instance: gpio2.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[10] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[29] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_RW);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_RW(0x020E0418)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_RW.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_RW.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_RW.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_RW.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_RW.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: EIM_RW.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: EIM_RW.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Select one out of next values for pad: EIM_RW.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_100MHZ & 0x3) << 6 |
           (DSE_40OHM & 0x7) << 3 | (SRE_FAST & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_RW);

    // Config weim.WEIM_WAIT to pad EIM_WAIT(M25)
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_WAIT(0x020E0154)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_WAIT.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT0
    //                    Select 1 of 5 iomux modes to be used for pad: EIM_WAIT.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_WAIT of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: WEIM_DTACK_B of instance: weim.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[0] of instance: gpio5.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: HDATA[30] of instance: tpsmp.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: BT_CFG[25] of instance: src.
    writel((SION_DISABLED & 0x1) << 4 | (ALT0 & 0x7), IOMUXC_SW_MUX_CTL_PAD_EIM_WAIT);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_WAIT(0x020E0468)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: EIM_WAIT.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: EIM_WAIT.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: EIM_WAIT.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: EIM_WAIT.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: EIM_WAIT.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_50MHZ
    //                 Select one out of next values for pad: EIM_WAIT.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_60OHM
    //               Select one out of next values for pad: EIM_WAIT.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: EIM_WAIT.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    writel((HYS_DISABLED & 0x1) << 16 | (PUS_100KOHM_PU & 0x3) << 14 | (PUE_PULL & 0x1) << 13 |
           (PKE_ENABLED & 0x1) << 12 | (ODE_DISABLED & 0x1) << 11 | (SPD_50MHZ & 0x3) << 6 |
           (DSE_60OHM & 0x7) << 3 | (SRE_SLOW & 0x1), IOMUXC_SW_PAD_CTL_PAD_EIM_WAIT);
}
