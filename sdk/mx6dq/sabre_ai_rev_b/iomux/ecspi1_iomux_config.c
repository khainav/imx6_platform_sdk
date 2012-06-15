/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
*/

// File: ecspi1_iomux_config.c

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

// Function to configure IOMUXC for ecspi1 module.
void ecspi1_iomux_config(void)
{
    // Config ecspi1.MISO to pad EIM_D17(F21)
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_D17_WR(0x00000001);
    // HW_IOMUXC_ECSPI1_IPP_IND_MISO_SELECT_INPUT_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_D17_WR(0x0001B0B0);
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
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_D17_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_D17_SION(SION_DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_D17_MUX_MODE(ALT1));
    // Pad EIM_D17 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_ECSPI1_IPP_IND_MISO_SELECT_INPUT(0x020E07F8)
    //   DAISY (1-0) Reset: SEL_EIM_D17_ALT1
    //                 Selecting Pads Involved in Daisy Chain.
    //                 NOTE: Instance: ecspi1, In Pin: ipp_ind_miso
    //     SEL_EIM_D17_ALT1 (0) - Selecting Pad: EIM_D17 for Mode: ALT1.
    //     SEL_DISP0_DAT22_ALT2 (1) - Selecting Pad: DISP0_DAT22 for Mode: ALT2.
    //     SEL_KEY_COL1_ALT0 (2) - Selecting Pad: KEY_COL1 for Mode: ALT0.
    //     SEL_CSI0_DAT6_ALT2 (3) - Selecting Pad: CSI0_DAT6 for Mode: ALT2.
    HW_IOMUXC_ECSPI1_IPP_IND_MISO_SELECT_INPUT_WR(
            BF_IOMUXC_ECSPI1_IPP_IND_MISO_SELECT_INPUT_DAISY(SEL_EIM_D17_ALT1));
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
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_D17_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D17_HYS(HYS_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D17_PUS(PUS_100KOHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D17_PUE(PUE_PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D17_PKE(PKE_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D17_ODE(ODE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D17_SPEED(SPD_100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D17_DSE(DSE_40OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D17_SRE(SRE_SLOW));

    // Config ecspi1.MOSI to pad EIM_D18(D24)
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_D18_WR(0x00000001);
    // HW_IOMUXC_ECSPI1_IPP_IND_MOSI_SELECT_INPUT_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_D18_WR(0x0001B0B0);
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
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_D18_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_D18_SION(SION_DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_D18_MUX_MODE(ALT1));
    // Pad EIM_D18 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_ECSPI1_IPP_IND_MOSI_SELECT_INPUT(0x020E07FC)
    //   DAISY (1-0) Reset: SEL_EIM_D18_ALT1
    //                 Selecting Pads Involved in Daisy Chain.
    //                 NOTE: Instance: ecspi1, In Pin: ipp_ind_mosi
    //     SEL_EIM_D18_ALT1 (0) - Selecting Pad: EIM_D18 for Mode: ALT1.
    //     SEL_DISP0_DAT21_ALT2 (1) - Selecting Pad: DISP0_DAT21 for Mode: ALT2.
    //     SEL_KEY_ROW0_ALT0 (2) - Selecting Pad: KEY_ROW0 for Mode: ALT0.
    //     SEL_CSI0_DAT5_ALT2 (3) - Selecting Pad: CSI0_DAT5 for Mode: ALT2.
    HW_IOMUXC_ECSPI1_IPP_IND_MOSI_SELECT_INPUT_WR(
            BF_IOMUXC_ECSPI1_IPP_IND_MOSI_SELECT_INPUT_DAISY(SEL_EIM_D18_ALT1));
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
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_D18_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D18_HYS(HYS_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D18_PUS(PUS_100KOHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D18_PUE(PUE_PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D18_PKE(PKE_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D18_ODE(ODE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D18_SPEED(SPD_100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D18_DSE(DSE_40OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D18_SRE(SRE_SLOW));

    // Config ecspi1.RDY to pad GPIO_19(P5)
    // HW_IOMUXC_SW_MUX_CTL_PAD_GPIO_19_WR(0x00000004);
    // HW_IOMUXC_SW_PAD_CTL_PAD_GPIO_19_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_GPIO_19(0x020E0254)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad GPIO_19.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT5
    //                    Select 1 of 8 iomux modes to be used for pad: GPIO_19.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: COL[5] of instance: kpp.
    //                NOTE: - Config Register IOMUXC_KPP_IPP_IND_COL_5_SELECT_INPUT for mode ALT0.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: 1588_EVENT0_OUT of instance: enet.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: OUT1 of instance: spdif.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: CLKO of instance: ccm.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: RDY of instance: ecspi1.
    //     ALT5 (5) - Select mux mode: ALT5 mux port: GPIO[5] of instance: gpio4.
    //     ALT6 (6) - Select mux mode: ALT6 mux port: TX_ER of instance: enet.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: INT_BOOT of instance: src.
    HW_IOMUXC_SW_MUX_CTL_PAD_GPIO_19_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_GPIO_19_SION(SION_DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_GPIO_19_MUX_MODE(ALT4));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_GPIO_19(0x020E0624)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_ENABLED
    //              Select one out of next values for pad: GPIO_19.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: GPIO_19.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Select one out of next values for pad: GPIO_19.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: GPIO_19.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Select one out of next values for pad: GPIO_19.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Select one out of next values for pad: GPIO_19.
    //     SPD_TBD (0) - TBD
    //     SPD_50MHZ (1) - Low(50 MHz)
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //     SPD_200MHZ (3) - Maximum(200 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Select one out of next values for pad: GPIO_19.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    //     DSE_60OHM (4) - 60 Ohm
    //     DSE_48OHM (5) - 48 Ohm
    //     DSE_40OHM (6) - 40 Ohm
    //     DSE_34OHM (7) - 34 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Select one out of next values for pad: GPIO_19.
    //     SRE_SLOW (0) - Slow Slew Rate
    //     SRE_FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_GPIO_19_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO_19_HYS(HYS_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO_19_PUS(PUS_100KOHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO_19_PUE(PUE_PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO_19_PKE(PKE_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO_19_ODE(ODE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO_19_SPEED(SPD_100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO_19_DSE(DSE_40OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO_19_SRE(SRE_SLOW));

    // Config ecspi1.SCLK to pad EIM_D16(C25)
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_D16_WR(0x00000001);
    // HW_IOMUXC_ECSPI1_IPP_CSPI_CLK_IN_SELECT_INPUT_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_D16_WR(0x0001B0B0);
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
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_D16_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_D16_SION(SION_DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_D16_MUX_MODE(ALT1));
    // Pad EIM_D16 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_ECSPI1_IPP_CSPI_CLK_IN_SELECT_INPUT(0x020E07F4)
    //   DAISY (1-0) Reset: SEL_EIM_D16_ALT1
    //                 Selecting Pads Involved in Daisy Chain.
    //                 NOTE: Instance: ecspi1, In Pin: ipp_cspi_clk_in
    //     SEL_EIM_D16_ALT1 (0) - Selecting Pad: EIM_D16 for Mode: ALT1.
    //     SEL_DISP0_DAT20_ALT2 (1) - Selecting Pad: DISP0_DAT20 for Mode: ALT2.
    //     SEL_KEY_COL0_ALT0 (2) - Selecting Pad: KEY_COL0 for Mode: ALT0.
    //     SEL_CSI0_DAT4_ALT2 (3) - Selecting Pad: CSI0_DAT4 for Mode: ALT2.
    HW_IOMUXC_ECSPI1_IPP_CSPI_CLK_IN_SELECT_INPUT_WR(
            BF_IOMUXC_ECSPI1_IPP_CSPI_CLK_IN_SELECT_INPUT_DAISY(SEL_EIM_D16_ALT1));
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
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_D16_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D16_HYS(HYS_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D16_PUS(PUS_100KOHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D16_PUE(PUE_PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D16_PKE(PKE_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D16_ODE(ODE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D16_SPEED(SPD_100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D16_DSE(DSE_40OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D16_SRE(SRE_SLOW));

    // Config ecspi1.SS1 to pad EIM_D19(G21)
    // HW_IOMUXC_SW_MUX_CTL_PAD_EIM_D19_WR(0x00000001);
    // HW_IOMUXC_ECSPI1_IPP_IND_SS_B_1_SELECT_INPUT_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_EIM_D19_WR(0x0001B0B0);
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
    HW_IOMUXC_SW_MUX_CTL_PAD_EIM_D19_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_D19_SION(SION_DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_EIM_D19_MUX_MODE(ALT1));
    // Pad EIM_D19 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_ECSPI1_IPP_IND_SS_B_1_SELECT_INPUT(0x020E0804)
    //   DAISY (1-0) Reset: SEL_EIM_D19_ALT1
    //                 Selecting Pads Involved in Daisy Chain.
    //                 NOTE: Instance: ecspi1, In Pin: ipp_ind_ss_b[1]
    //     SEL_EIM_D19_ALT1 (0) - Selecting Pad: EIM_D19 for Mode: ALT1.
    //     SEL_DISP0_DAT15_ALT2 (1) - Selecting Pad: DISP0_DAT15 for Mode: ALT2.
    //     SEL_KEY_COL2_ALT0 (2) - Selecting Pad: KEY_COL2 for Mode: ALT0.
    HW_IOMUXC_ECSPI1_IPP_IND_SS_B_1_SELECT_INPUT_WR(
            BF_IOMUXC_ECSPI1_IPP_IND_SS_B_1_SELECT_INPUT_DAISY(SEL_EIM_D19_ALT1));
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
    HW_IOMUXC_SW_PAD_CTL_PAD_EIM_D19_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D19_HYS(HYS_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D19_PUS(PUS_100KOHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D19_PUE(PUE_PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D19_PKE(PKE_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D19_ODE(ODE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D19_SPEED(SPD_100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D19_DSE(DSE_40OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_EIM_D19_SRE(SRE_SLOW));
}
