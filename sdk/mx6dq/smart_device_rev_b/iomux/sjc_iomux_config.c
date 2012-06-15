/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
*/

// File: sjc_iomux_config.c

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

// Function to configure IOMUXC for sjc module.
void sjc_iomux_config(void)
{
    // Config sjc.MOD to pad JTAG_MOD(H6)
    // HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_MOD_WR(0x0000B060);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_JTAG_MOD(0x020E067C)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: JTAG_MOD.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Select one out of next values for pad: JTAG_MOD.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Read Only Field
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: JTAG_MOD.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Read Only Field
    //     ODE_DISABLED (0) - Open Drain Disabled
    //   SPEED (7-6) - Speed Field Reset: SPD_50MHZ
    //                 Read Only Field
    //     SPD_50MHZ (1) - Low(50 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_60OHM
    //               Read Only Field
    //     DSE_60OHM (4) - 60 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Read Only Field
    //     SRE_SLOW (0) - Slow Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_MOD_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_MOD_HYS(HYS_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_MOD_PUS(PUS_100KOHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_MOD_PKE(PKE_ENABLED));

    // Config sjc.TCK to pad JTAG_TCK(H5)
    // HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TCK_WR(0x00007060);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_JTAG_TCK(0x020E0688)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: JTAG_TCK.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_47KOHM_PU
    //                 Select one out of next values for pad: JTAG_TCK.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Read Only Field
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: JTAG_TCK.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Read Only Field
    //     ODE_DISABLED (0) - Open Drain Disabled
    //   SPEED (7-6) - Speed Field Reset: SPD_50MHZ
    //                 Read Only Field
    //     SPD_50MHZ (1) - Low(50 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_60OHM
    //               Read Only Field
    //     DSE_60OHM (4) - 60 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Read Only Field
    //     SRE_SLOW (0) - Slow Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TCK_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TCK_HYS(HYS_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TCK_PUS(PUS_47KOHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TCK_PKE(PKE_ENABLED));

    // Config sjc.TDI to pad JTAG_TDI(G5)
    // HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TDI_WR(0x00007060);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_JTAG_TDI(0x020E0684)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: JTAG_TDI.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_47KOHM_PU
    //                 Select one out of next values for pad: JTAG_TDI.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Read Only Field
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: JTAG_TDI.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Read Only Field
    //     ODE_DISABLED (0) - Open Drain Disabled
    //   SPEED (7-6) - Speed Field Reset: SPD_50MHZ
    //                 Read Only Field
    //     SPD_50MHZ (1) - Low(50 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_60OHM
    //               Read Only Field
    //     DSE_60OHM (4) - 60 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Read Only Field
    //     SRE_SLOW (0) - Slow Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TDI_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TDI_HYS(HYS_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TDI_PUS(PUS_47KOHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TDI_PKE(PKE_ENABLED));

    // Config sjc.TDO to pad JTAG_TDO(G6)
    // HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TDO_WR(0x000090B1);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_JTAG_TDO(0x020E068C)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Read Only Field
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_100KOHM_PU
    //                 Read Only Field
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_KEEP
    //              Read Only Field
    //     PUE_KEEP (0) - Keeper
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: JTAG_TDO.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Read Only Field
    //     ODE_DISABLED (0) - Open Drain Disabled
    //   SPEED (7-6) - Speed Field Reset: SPD_100MHZ
    //                 Read Only Field
    //     SPD_100MHZ (2) - Medium(100 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_40OHM
    //               Read Only Field
    //     DSE_40OHM (6) - 40 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_FAST
    //             Read Only Field
    //     SRE_FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TDO_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TDO_PKE(PKE_ENABLED));

    // Config sjc.TMS to pad JTAG_TMS(C3)
    // HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TMS_WR(0x00007060);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_JTAG_TMS(0x020E0678)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: JTAG_TMS.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_47KOHM_PU
    //                 Select one out of next values for pad: JTAG_TMS.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Read Only Field
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: JTAG_TMS.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Read Only Field
    //     ODE_DISABLED (0) - Open Drain Disabled
    //   SPEED (7-6) - Speed Field Reset: SPD_50MHZ
    //                 Read Only Field
    //     SPD_50MHZ (1) - Low(50 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_60OHM
    //               Read Only Field
    //     DSE_60OHM (4) - 60 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Read Only Field
    //     SRE_SLOW (0) - Slow Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TMS_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TMS_HYS(HYS_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TMS_PUS(PUS_47KOHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TMS_PKE(PKE_ENABLED));

    // Config sjc.TRSTB to pad JTAG_TRSTB(C2)
    // HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TRSTB_WR(0x00007060);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_JTAG_TRSTB(0x020E0680)
    //   HYS (16) - Hysteresis Enable Field Reset: HYS_DISABLED
    //              Select one out of next values for pad: JTAG_TRSTB.
    //     HYS_DISABLED (0) - Hysteresis Disabled
    //     HYS_ENABLED (1) - Hysteresis Enabled
    //   PUS (15-14) - Pull Up / Down Config. Field Reset: PUS_47KOHM_PU
    //                 Select one out of next values for pad: JTAG_TRSTB.
    //     PUS_100KOHM_PD (0) - 100K Ohm Pull Down
    //     PUS_47KOHM_PU (1) - 47K Ohm Pull Up
    //     PUS_100KOHM_PU (2) - 100K Ohm Pull Up
    //     PUS_22KOHM_PU (3) - 22K Ohm Pull Up
    //   PUE (13) - Pull / Keep Select Field Reset: PUE_PULL
    //              Read Only Field
    //     PUE_PULL (1) - Pull
    //   PKE (12) - Pull / Keep Enable Field Reset: PKE_ENABLED
    //              Select one out of next values for pad: JTAG_TRSTB.
    //     PKE_DISABLED (0) - Pull/Keeper Disabled
    //     PKE_ENABLED (1) - Pull/Keeper Enabled
    //   ODE (11) - Open Drain Enable Field Reset: ODE_DISABLED
    //              Read Only Field
    //     ODE_DISABLED (0) - Open Drain Disabled
    //   SPEED (7-6) - Speed Field Reset: SPD_50MHZ
    //                 Read Only Field
    //     SPD_50MHZ (1) - Low(50 MHz)
    //   DSE (5-3) - Drive Strength Field Reset: DSE_60OHM
    //               Read Only Field
    //     DSE_60OHM (4) - 60 Ohm
    //   SRE (0) - Slew Rate Field Reset: SRE_SLOW
    //             Read Only Field
    //     SRE_SLOW (0) - Slow Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TRSTB_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TRSTB_HYS(HYS_DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TRSTB_PUS(PUS_47KOHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TRSTB_PKE(PKE_ENABLED));
}
