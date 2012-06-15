/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
*/

// File: can2_iomux_config.c

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

// Function to configure IOMUXC for can2 module.
void can2_iomux_config(void)
{
    // Config can2.RXCAN to pad PATA_IORDY(K1)
    // CAN2_RXD and PATA_IORDY
    // HW_IOMUXC_SW_MUX_CTL_PAD_PATA_IORDY_WR(0x00000004);
    // HW_IOMUXC_CAN2_IPP_IND_CANRX_SELECT_INPUT_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_PATA_IORDY_WR(0x000001E4);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_PATA_IORDY(0x53FA828C)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad PATA_IORDY.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT1
    //                    Select 1 of 6 iomux modes to be used for pad: PATA_IORDY.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: IORDY of instance: pata.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: GPIO[5] of instance: gpio7.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CLK of instance: esdhc3.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: RTS of instance: uart1.
    //                NOTE: - Config Register IOMUXC_UART1_IPP_UART_RTS_B_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: RXCAN of instance: can2.
    //                NOTE: - Config Register IOMUXC_CAN2_IPP_IND_CANRX_SELECT_INPUT for mode ALT4.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: DATAOUT[1] of instance: usbphy1.
    HW_IOMUXC_SW_MUX_CTL_PAD_PATA_IORDY_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_PATA_IORDY_SION(SION_DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_PATA_IORDY_MUX_MODE(ALT4));
    // Pad PATA_IORDY is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_CAN2_IPP_IND_CANRX_SELECT_INPUT(0x53FA8764)
    //   DAISY (0) Reset: SEL_KEY_ROW4_ALT2
    //               Selecting Pads Involved in Daisy Chain.
    //               NOTE: Instance: can2, In Pin: ipp_ind_canrx
    //     SEL_KEY_ROW4_ALT2 (0) - Selecting Pad: KEY_ROW4 for Mode: ALT2.
    //     SEL_PATA_IORDY_ALT4 (1) - Selecting Pad: PATA_IORDY for Mode: ALT4.
    HW_IOMUXC_CAN2_IPP_IND_CANRX_SELECT_INPUT_WR(
            BF_IOMUXC_CAN2_IPP_IND_CANRX_SELECT_INPUT_DAISY(SEL_KEY_ROW4_ALT2));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_PATA_IORDY(0x53FA860C)
    //   HVE (13) - Low / High Output Voltage Field Reset: HVE_RES0
    //              Read Only Field
    //     HVE_RES0 (0) - Reserved
    //   TEST_TS (12) - Test TS Field Reset: TEST_TS_DISABLED
    //                  Read Only Field
    //     TEST_TS_DISABLED (0) - Disabled
    //   DSE_TEST (11) - DSE Test Field Reset: DSE_TEST_NORMAL
    //                   Read Only Field
    //     DSE_TEST_NORMAL (0) - Normal
    //   HYS (8) - Hysteresis Enable Field Reset: HYS_ENABLED
    //             Select one out of next values for pad: PATA_IORDY.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PKE (7) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //             Select one out of next values for pad: PATA_IORDY.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   PUE (6) - Pull / Keep Select Field Reset: PUE_PULL
    //             Select one out of next values for pad: PATA_IORDY.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PUS (5-4) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //               Select one out of next values for pad: PATA_IORDY.
    //     PUS_360KOHM_PD (0) - 360K Ohm Pull Down
    //     PUS_75KOHM_PU (1) - 75K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   ODE (3) - Open Drain Enable Field Reset: ODE_DISABLED
    //             Select one out of next values for pad: PATA_IORDY.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   DSE (2-1) - Drive Strength Field Reset: DSE_120OHM
    //               Select one out of next values for pad: PATA_IORDY.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    HW_IOMUXC_SW_PAD_CTL_PAD_PATA_IORDY_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_PATA_IORDY_HYS(HYS_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_PATA_IORDY_PKE(PKE_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_PATA_IORDY_PUE(PUE_PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_PATA_IORDY_PUS(PUS_100KOHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_PATA_IORDY_ODE(ODE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_PATA_IORDY_DSE(DSE_120OHM));

    // Config can2.TXCAN to pad PATA_RESET_B(K2)
    // CAN2_TXD and PATA_RESET_B
    // HW_IOMUXC_SW_MUX_CTL_PAD_PATA_RESET_B_WR(0x00000004);
    // HW_IOMUXC_SW_PAD_CTL_PAD_PATA_RESET_B_WR(0x000001E4);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_PATA_RESET_B(0x53FA8288)
    //   SION (4) - Software Input On Field Reset: SION_DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     SION_DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     SION_ENABLED (1) - Force input path of pad PATA_RESET_B.
    //   MUX_MODE (2-0) - MUX Mode Select Field Reset: ALT1
    //                    Select 1 of 6 iomux modes to be used for pad: PATA_RESET_B.
    //     ALT0 (0) - Select mux mode: ALT0 mux port: PATA_RESET_B of instance: pata.
    //     ALT1 (1) - Select mux mode: ALT1 mux port: GPIO[4] of instance: gpio7.
    //     ALT2 (2) - Select mux mode: ALT2 mux port: CMD of instance: esdhc3.
    //     ALT3 (3) - Select mux mode: ALT3 mux port: CTS of instance: uart1.
    //                NOTE: - Config Register IOMUXC_UART1_IPP_UART_RTS_B_SELECT_INPUT for mode ALT3.
    //     ALT4 (4) - Select mux mode: ALT4 mux port: TXCAN of instance: can2.
    //     ALT7 (7) - Select mux mode: ALT7 mux port: DATAOUT[0] of instance: usbphy1.
    HW_IOMUXC_SW_MUX_CTL_PAD_PATA_RESET_B_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_PATA_RESET_B_SION(SION_DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_PATA_RESET_B_MUX_MODE(ALT4));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_PATA_RESET_B(0x53FA8608)
    //   HVE (13) - Low / High Output Voltage Field Reset: HVE_RES0
    //              Read Only Field
    //     HVE_RES0 (0) - Reserved
    //   TEST_TS (12) - Test TS Field Reset: TEST_TS_DISABLED
    //                  Read Only Field
    //     TEST_TS_DISABLED (0) - Disabled
    //   DSE_TEST (11) - DSE Test Field Reset: DSE_TEST_NORMAL
    //                   Read Only Field
    //     DSE_TEST_NORMAL (0) - Normal
    //   HYS (8) - Hysteresis Enable Field Reset: HYS_ENABLED
    //             Select one out of next values for pad: PATA_RESET_B.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PKE (7) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //             Select one out of next values for pad: PATA_RESET_B.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   PUE (6) - Pull / Keep Select Field Reset: PUE_PULL
    //             Select one out of next values for pad: PATA_RESET_B.
    //     PUE_KEEP (0) - Keeper
    //     PUE_PULL (1) - Pull
    //   PUS (5-4) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //               Select one out of next values for pad: PATA_RESET_B.
    //     PUS_360KOHM_PD (0) - 360K Ohm Pull Down
    //     PUS_75KOHM_PU (1) - 75K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   ODE (3) - Open Drain Enable Field Reset: ODE_DISABLED
    //             Select one out of next values for pad: PATA_RESET_B.
    //     ODE_DISABLED (0) - Open Drain Disabled
    //     ODE_ENABLED (1) - Open Drain Enabled
    //   DSE (2-1) - Drive Strength Field Reset: DSE_120OHM
    //               Select one out of next values for pad: PATA_RESET_B.
    //     DSE_DISABLED (0) - Output driver disabled.
    //     DSE_240OHM (1) - 240 Ohm
    //     DSE_120OHM (2) - 120 Ohm
    //     DSE_80OHM (3) - 80 Ohm
    HW_IOMUXC_SW_PAD_CTL_PAD_PATA_RESET_B_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_PATA_RESET_B_HYS(HYS_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_PATA_RESET_B_PKE(PKE_ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_PATA_RESET_B_PUE(PUE_PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_PATA_RESET_B_PUS(PUS_100KOHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_PATA_RESET_B_ODE(ODE_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_PATA_RESET_B_DSE(DSE_120OHM));
}
