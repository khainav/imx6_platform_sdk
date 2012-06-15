/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
*/

// File: audmux_iomux_config.c

/* ------------------------------------------------------------------------------
 * <auto-generated>
 *     This code was generated by a tool.
 *     Runtime Version:3.3.2.0
 *
 *     Changes to this file may cause incorrect behavior and will be lost if
 *     the code is regenerated.
 * </auto-generated>
 * ------------------------------------------------------------------------------
*/

#include "iomux_config.h"
#include "iomux_define.h"
#include "registers/regsiomuxc.h"

// Function to configure IOMUXC for audmux module.
void audmux_iomux_config(void)
{
    // Config audmux.AUD3_RXC to pad AUD_RXC(J21)
    // HW_IOMUXC_SW_MUX_CTL_PAD_AUD_RXC_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_WR(0x000110B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_AUD_RXC(0x020E0050)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad AUD_RXC.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: AUD_RXC.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: AUD3_RXC of instance: audmux.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: SDA of instance: i2c1.
    //                NOTE: - Config Register IOMUXC_I2C1_IPP_SDA_IN_SELECT_INPUT for mode ALT1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: TXD_MUX of instance: uart3.
    //                NOTE: - Config Register IOMUXC_UART3_IPP_UART_RXD_MUX_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: TX_CLK of instance: fec.
    //                NOTE: - Config Register IOMUXC_FEC_FEC_TX_CLK_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: SDA of instance: i2c3.
    //                NOTE: - Config Register IOMUXC_I2C3_IPP_SDA_IN_SELECT_INPUT for mode ALT4.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[1] of instance: gpio1.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: SS1 of instance: ecspi3.
    //                NOTE: - Config Register IOMUXC_ECSPI3_IPP_IND_SS_B_1_SELECT_INPUT for mode ALT6.
    HW_IOMUXC_SW_MUX_CTL_PAD_AUD_RXC_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_RXC_SION(SION_DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_RXC_MUX_MODE(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_AUD_RXC(0x020E02A8)
    //   LVE (22) - Low Voltage Enable Field Reset: LVE_DISABLED
    //              Select one out of next values for pad: AUD_RXC.
    //     LVE_DISABLED (0) - High Voltage
    //     LVE_ENABLED (1) - Low Voltage
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: AUD_RXC.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Configure Field Reset: PUS_100KOHM_PD
    //                 Select one out of next values for pad: AUD_RXC.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_KEEP
    //              Select one out of next values for pad: AUD_RXC.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: AUD_RXC.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: AUD_RXC.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: AUD_RXC.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: AUD_RXC.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: AUD_RXC.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_LVE(LVE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_HYS(HYS_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_PUS(PUS_100KOHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_PUE(PUE_KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_PKE(PKE_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_ODE(ODE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_SPEED(SPD_100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_DSE(DSE_40OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXC_SRE(SRE_SLOW));

    // Config audmux.AUD3_RXD to pad AUD_RXD(J20)
    // HW_IOMUXC_SW_MUX_CTL_PAD_AUD_RXD_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_WR(0x000110B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_AUD_RXD(0x020E0054)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad AUD_RXD.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: AUD_RXD.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: AUD3_RXD of instance: audmux.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: MOSI of instance: ecspi3.
    //                NOTE: - Config Register IOMUXC_ECSPI3_IPP_IND_MOSI_SELECT_INPUT for mode ALT1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: RXD_MUX of instance: uart4.
    //                NOTE: - Config Register IOMUXC_UART4_IPP_UART_RXD_MUX_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: RX_ER of instance: fec.
    //                NOTE: - Config Register IOMUXC_FEC_FEC_RX_ER_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: LCTL of instance: usdhc1.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[2] of instance: gpio1.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: INT_BOOT of instance: src.
    HW_IOMUXC_SW_MUX_CTL_PAD_AUD_RXD_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_RXD_SION(SION_DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_RXD_MUX_MODE(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_AUD_RXD(0x020E02AC)
    //   LVE (22) - Low Voltage Enable Field Reset: LVE_DISABLED
    //              Select one out of next values for pad: AUD_RXD.
    //     LVE_DISABLED (0) - High Voltage
    //     LVE_ENABLED (1) - Low Voltage
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: AUD_RXD.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Configure Field Reset: PUS_100KOHM_PD
    //                 Select one out of next values for pad: AUD_RXD.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_KEEP
    //              Select one out of next values for pad: AUD_RXD.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: AUD_RXD.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: AUD_RXD.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: AUD_RXD.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: AUD_RXD.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: AUD_RXD.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_LVE(LVE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_HYS(HYS_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_PUS(PUS_100KOHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_PUE(PUE_KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_PKE(PKE_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_ODE(ODE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_SPEED(SPD_100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_DSE(DSE_40OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXD_SRE(SRE_SLOW));

    // Config audmux.AUD3_RXFS to pad AUD_RXFS(J19)
    // HW_IOMUXC_SW_MUX_CTL_PAD_AUD_RXFS_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_WR(0x000110B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_AUD_RXFS(0x020E0058)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad AUD_RXFS.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: AUD_RXFS.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: AUD3_RXFS of instance: audmux.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: SCL of instance: i2c1.
    //                NOTE: - Config Register IOMUXC_I2C1_IPP_SCL_IN_SELECT_INPUT for mode ALT1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: RXD_MUX of instance: uart3.
    //                NOTE: - Config Register IOMUXC_UART3_IPP_UART_RXD_MUX_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: MDIO of instance: fec.
    //                NOTE: - Config Register IOMUXC_FEC_FEC_MDI_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: SCL of instance: i2c3.
    //                NOTE: - Config Register IOMUXC_I2C3_IPP_SCL_IN_SELECT_INPUT for mode ALT4.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[0] of instance: gpio1.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: SS0 of instance: ecspi3.
    //                NOTE: - Config Register IOMUXC_ECSPI3_IPP_IND_SS_B_0_SELECT_INPUT for mode ALT6.
    HW_IOMUXC_SW_MUX_CTL_PAD_AUD_RXFS_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_RXFS_SION(SION_DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_RXFS_MUX_MODE(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS(0x020E02B0)
    //   LVE (22) - Low Voltage Enable Field Reset: LVE_DISABLED
    //              Select one out of next values for pad: AUD_RXFS.
    //     LVE_DISABLED (0) - High Voltage
    //     LVE_ENABLED (1) - Low Voltage
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: AUD_RXFS.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Configure Field Reset: PUS_100KOHM_PD
    //                 Select one out of next values for pad: AUD_RXFS.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_KEEP
    //              Select one out of next values for pad: AUD_RXFS.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: AUD_RXFS.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: AUD_RXFS.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: AUD_RXFS.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: AUD_RXFS.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: AUD_RXFS.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_LVE(LVE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_HYS(HYS_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_PUS(PUS_100KOHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_PUE(PUE_KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_PKE(PKE_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_ODE(ODE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_SPEED(SPD_100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_DSE(DSE_40OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_RXFS_SRE(SRE_SLOW));

    // Config audmux.AUD3_TXC to pad AUD_TXC(H20)
    // HW_IOMUXC_SW_MUX_CTL_PAD_AUD_TXC_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_WR(0x000110B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_AUD_TXC(0x020E005C)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad AUD_TXC.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: AUD_TXC.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: AUD3_TXC of instance: audmux.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: MISO of instance: ecspi3.
    //                NOTE: - Config Register IOMUXC_ECSPI3_IPP_IND_MISO_SELECT_INPUT for mode ALT1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: TXD_MUX of instance: uart4.
    //                NOTE: - Config Register IOMUXC_UART4_IPP_UART_RXD_MUX_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: RX_DV of instance: fec.
    //                NOTE: - Config Register IOMUXC_FEC_FEC_RX_DV_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: LCTL of instance: usdhc2.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[3] of instance: gpio1.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: SYSTEM_RST of instance: src.
    HW_IOMUXC_SW_MUX_CTL_PAD_AUD_TXC_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_TXC_SION(SION_DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_TXC_MUX_MODE(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_AUD_TXC(0x020E02B4)
    //   LVE (22) - Low Voltage Enable Field Reset: LVE_DISABLED
    //              Select one out of next values for pad: AUD_TXC.
    //     LVE_DISABLED (0) - High Voltage
    //     LVE_ENABLED (1) - Low Voltage
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: AUD_TXC.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Configure Field Reset: PUS_100KOHM_PD
    //                 Select one out of next values for pad: AUD_TXC.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_KEEP
    //              Select one out of next values for pad: AUD_TXC.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: AUD_TXC.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: AUD_TXC.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: AUD_TXC.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: AUD_TXC.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: AUD_TXC.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_LVE(LVE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_HYS(HYS_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_PUS(PUS_100KOHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_PUE(PUE_KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_PKE(PKE_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_ODE(ODE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_SPEED(SPD_100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_DSE(DSE_40OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXC_SRE(SRE_SLOW));

    // Config audmux.AUD3_TXD to pad AUD_TXD(J22)
    // HW_IOMUXC_SW_MUX_CTL_PAD_AUD_TXD_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_WR(0x000110B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_AUD_TXD(0x020E0060)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad AUD_TXD.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: AUD_TXD.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: AUD3_TXD of instance: audmux.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: SCLK of instance: ecspi3.
    //                NOTE: - Config Register IOMUXC_ECSPI3_IPP_CSPI_CLK_IN_SELECT_INPUT for mode ALT1.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CTS of instance: uart4.
    //                NOTE: - Config Register IOMUXC_UART4_IPP_UART_RTS_B_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: TDATA[0] of instance: fec.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: LCTL of instance: usdhc4.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[5] of instance: gpio1.
    HW_IOMUXC_SW_MUX_CTL_PAD_AUD_TXD_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_TXD_SION(SION_DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_TXD_MUX_MODE(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_AUD_TXD(0x020E02B8)
    //   LVE (22) - Low Voltage Enable Field Reset: LVE_DISABLED
    //              Select one out of next values for pad: AUD_TXD.
    //     LVE_DISABLED (0) - High Voltage
    //     LVE_ENABLED (1) - Low Voltage
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: AUD_TXD.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Configure Field Reset: PUS_100KOHM_PD
    //                 Select one out of next values for pad: AUD_TXD.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_KEEP
    //              Select one out of next values for pad: AUD_TXD.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: AUD_TXD.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: AUD_TXD.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: AUD_TXD.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: AUD_TXD.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: AUD_TXD.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_LVE(LVE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_HYS(HYS_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_PUS(PUS_100KOHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_PUE(PUE_KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_PKE(PKE_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_ODE(ODE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_SPEED(SPD_100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_DSE(DSE_40OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXD_SRE(SRE_SLOW));

    // Config audmux.AUD3_TXFS to pad AUD_TXFS(H21)
    // HW_IOMUXC_SW_MUX_CTL_PAD_AUD_TXFS_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_WR(0x000110B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_AUD_TXFS(0x020E0064)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad AUD_TXFS.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: AUD_TXFS.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: AUD3_TXFS of instance: audmux.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: PWMO of instance: pwm3.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: RTS of instance: uart4.
    //                NOTE: - Config Register IOMUXC_UART4_IPP_UART_RTS_B_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: RDATA[1] of instance: fec.
    //                NOTE: - Config Register IOMUXC_FEC_FEC_RDATA_1_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: LCTL of instance: usdhc3.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[4] of instance: gpio1.
    HW_IOMUXC_SW_MUX_CTL_PAD_AUD_TXFS_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_TXFS_SION(SION_DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_TXFS_MUX_MODE(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS(0x020E02BC)
    //   LVE (22) - Low Voltage Enable Field Reset: LVE_DISABLED
    //              Select one out of next values for pad: AUD_TXFS.
    //     LVE_DISABLED (0) - High Voltage
    //     LVE_ENABLED (1) - Low Voltage
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: AUD_TXFS.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Configure Field Reset: PUS_100KOHM_PD
    //                 Select one out of next values for pad: AUD_TXFS.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_KEEP
    //              Select one out of next values for pad: AUD_TXFS.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: AUD_TXFS.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: AUD_TXFS.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: AUD_TXFS.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: AUD_TXFS.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: AUD_TXFS.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_LVE(LVE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_HYS(HYS_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_PUS(PUS_100KOHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_PUE(PUE_KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_PKE(PKE_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_ODE(ODE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_SPEED(SPD_100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_DSE(DSE_40OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_TXFS_SRE(SRE_SLOW));

    // Config audmux.AUDIO_CLK_OUT to pad AUD_MCLK(H19)
    // HW_IOMUXC_SW_MUX_CTL_PAD_AUD_MCLK_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_WR(0x000110B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_AUD_MCLK(0x020E004C)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad AUD_MCLK.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: AUD_MCLK.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: AUDIO_CLK_OUT of instance: audmux.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: PWMO of instance: pwm4.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: RDY of instance: ecspi3.
    //                NOTE: - Config Register IOMUXC_ECSPI3_IPP_IND_DATAREADY_B_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: MDC of instance: fec.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: WDOG_RST_B_DEB of instance: wdog2.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[6] of instance: gpio1.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: SPDIF_EXT_CLK of instance: spdif.
    //                NOTE: - Config Register IOMUXC_SPDIF_TX_CLK2_SELECT_INPUT for mode ALT6.
    HW_IOMUXC_SW_MUX_CTL_PAD_AUD_MCLK_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_MCLK_SION(SION_DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_AUD_MCLK_MUX_MODE(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK(0x020E02A4)
    //   LVE (22) - Low Voltage Enable Field Reset: LVE_DISABLED
    //              Select one out of next values for pad: AUD_MCLK.
    //     LVE_DISABLED (0) - High Voltage
    //     LVE_ENABLED (1) - Low Voltage
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: AUD_MCLK.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Configure Field Reset: PUS_100KOHM_PD
    //                 Select one out of next values for pad: AUD_MCLK.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_KEEP
    //              Select one out of next values for pad: AUD_MCLK.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: AUD_MCLK.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: AUD_MCLK.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: AUD_MCLK.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: AUD_MCLK.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: AUD_MCLK.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_LVE(LVE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_HYS(HYS_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_PUS(PUS_100KOHM_PD) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_PUE(PUE_KEEP) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_PKE(PKE_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_ODE(ODE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_SPEED(SPD_100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_DSE(DSE_40OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_AUD_MCLK_SRE(SRE_SLOW));
}
