/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
*/

// File: gpio3_iomux_config.c

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

// Function to configure IOMUXC for gpio3 module.
void gpio3_iomux_config(void)
{
    // Config gpio3.GPIO[24] to pad EIM_D24(F22)
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_D24_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_D24_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D24(0x020E0164)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D24.
    //   MUX_MODE (3-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 9 iomux modes to be used for pad: EIM_D24.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[24] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: SS2 of instance: ecspi4.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: TXD_MUX of instance: uart3.
    //                NOTE: - Config IOMUXC_UART3_IPP_UART_RXD_MUX_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: SS2 of instance: ecspi1.
    //                NOTE: - Config IOMUXC_ECSPI1_IPP_IND_SS_B_2_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: SS2 of instance: ecspi2.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[24] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: AUD5_RXFS of instance: audmux.
    //                NOTE: - Config IOMUXC_AUDMUX_P5_INPUT_RXFS_AMX_SELECT_INPUT for mode ALT6.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: DTR of instance: uart1.
    //     ALT8 (8) - Select mux mode: ALT8 mux port: SDCE[7] of instance: epdc.
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_D24_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_D24_SION(SION_DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_D24_MUX_MODE(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D24(0x020E0534)
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
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_D24_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D24_HYS(HYS_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D24_PUS(PUS_100KOHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D24_PUE(PUE_PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D24_PKE(PKE_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D24_ODE(ODE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D24_SPEED(SPD_100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D24_DSE(DSE_40OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D24_SRE(SRE_SLOW));

    // Config gpio3.GPIO[25] to pad EIM_D25(G22)
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_D25_WR(0x00000005);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_D25_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_EIM_D25(0x020E0168)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad EIM_D25.
    //   MUX_MODE (3-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 9 iomux modes to be used for pad: EIM_D25.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: WEIM_D[25] of instance: weim.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: SS3 of instance: ecspi4.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: RXD_MUX of instance: uart3.
    //                NOTE: - Config IOMUXC_UART3_IPP_UART_RXD_MUX_SELECT_INPUT for mode ALT2.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: SS3 of instance: ecspi1.
    //                NOTE: - Config IOMUXC_ECSPI1_IPP_IND_SS_B_3_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: SS3 of instance: ecspi2.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[25] of instance: gpio3.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: AUD5_RXC of instance: audmux.
    //                NOTE: - Config IOMUXC_AUDMUX_P5_INPUT_RXCLK_AMX_SELECT_INPUT for mode ALT6.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: DSR of instance: uart1.
    //     ALT8 (8) - Select mux mode: ALT8 mux port: SDCE[8] of instance: epdc.
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_D25_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_D25_SION(SION_DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_D25_MUX_MODE(ALT5));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_EIM_D25(0x020E0538)
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
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_D25_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D25_HYS(HYS_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D25_PUS(PUS_100KOHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D25_PUE(PUE_PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D25_PKE(PKE_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D25_ODE(ODE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D25_SPEED(SPD_100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D25_DSE(DSE_40OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D25_SRE(SRE_SLOW));
}
