/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef __HW_MIPI_DSI_REGISTERS_H__
#define __HW_MIPI_DSI_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SDL MIPI_DSI registers defined in this header file.
 *
 * - HW_MIPI_DSI_VERSION - Version of the DSI host ctrl
 * - HW_MIPI_DSI_PWR_UP - Core power up
 * - HW_MIPI_DSI_CLKMGR_CFG - Number of active data lanes
 * - HW_MIPI_DSI_DPI_CFG - DPI interface configuration
 * - HW_MIPI_DSI_DBI_CFG - DBI interface configuration
 * - HW_MIPI_DSI_DBIS_CMDSIZE - DBI command size configuration
 * - HW_MIPI_DSI_PCKHDL_CFG - Packet handler configuration
 * - HW_MIPI_DSI_VID_MODE_CFG - Video Mode Configuration
 * - HW_MIPI_DSI_VID_PKT_CFG - Video packet configuration
 * - HW_MIPI_DSI_CMD_MODE_CFG - Command mode configuration
 * - HW_MIPI_DSI_TMR_LINE_CFG - Line timer configuration
 * - HW_MIPI_DSI_VTIMING_CFG - Vertical timing configuration
 * - HW_MIPI_DSI_PHY_TMR_CFG - D-PHY timing configuration
 * - HW_MIPI_DSI_GEN_HDR - Generic packet Header configuration
 * - HW_MIPI_DSI_GEN_PLD_DATA - Generic payload data in/out
 * - HW_MIPI_DSI_CMD_PKT_STATUS - Command packet status
 * - HW_MIPI_DSI_TO_CNT_CFG0 - Time Out timers configuration
 * - HW_MIPI_DSI_ERROR_ST0 - Interrupt status register 0
 * - HW_MIPI_DSI_ERROR_ST1 - Interrupt status register 1
 * - HW_MIPI_DSI_ERROR_MSK0 - Masks Interrupt generation trigged by ERROR_ST0 register
 * - HW_MIPI_DSI_ERROR_MSK1 - Masks Interrupt generation trigged by ERROR_ST1 register
 * - HW_MIPI_DSI_PHY_RSTZ - D-PHY reset control
 * - HW_MIPI_DSI_PHY_IF_CFG - D-PHY interface configuration
 * - HW_MIPI_DSI_PHY_IF_CTRL - D-PHY PPI interface control
 * - HW_MIPI_DSI_PHY_STATUS - D-PHY PPI status interface
 * - HW_MIPI_DSI_PHY_TST_CTRL0 - D-PHY Test interface control 0
 * - HW_MIPI_DSI_PHY_TST_CTRL1 - D-PHY Test interface control 1
 *
 * - hw_mipi_dsi_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_MIPI_DSI_BASE
#define HW_MIPI_DSI_INSTANCE_COUNT (1) //!< Number of instances of the MIPI_DSI module.
#define REGS_MIPI_DSI_BASE (0x021e0000) //!< Base address for MIPI_DSI.
#endif
//@}


//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_VERSION - Version of the DSI host ctrl
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_VERSION - Version of the DSI host ctrl (RO)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x0  Memory Access: R
 */
typedef union _hw_mipi_dsi_version
{
    reg32_t U;
    struct _hw_mipi_dsi_version_bitfields
    {
        unsigned VERSION : 32; //!< [31:0] Version of the DSI host controller
    } B;
} hw_mipi_dsi_version_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_VERSION register
 */
#define HW_MIPI_DSI_VERSION_ADDR      (REGS_MIPI_DSI_BASE + 0x0)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_VERSION           (*(volatile hw_mipi_dsi_version_t *) HW_MIPI_DSI_VERSION_ADDR)
#define HW_MIPI_DSI_VERSION_RD()      (HW_MIPI_DSI_VERSION.U)
#endif

/*
 * constants & macros for individual MIPI_DSI_VERSION bitfields
 */

/* --- Register HW_MIPI_DSI_VERSION, field VERSION[31:0] (RO)
 *
 * Version of the DSI host controller
 */

#define BP_MIPI_DSI_VERSION_VERSION      (0)      //!< Bit position for MIPI_DSI_VERSION_VERSION.
#define BM_MIPI_DSI_VERSION_VERSION      (0xffffffff)  //!< Bit mask for MIPI_DSI_VERSION_VERSION.

//! @brief Get value of MIPI_DSI_VERSION_VERSION from a register value.
#define BG_MIPI_DSI_VERSION_VERSION(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VERSION_VERSION) >> BP_MIPI_DSI_VERSION_VERSION)

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_PWR_UP - Core power up
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_PWR_UP - Core power up (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x4  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_pwr_up
{
    reg32_t U;
    struct _hw_mipi_dsi_pwr_up_bitfields
    {
        unsigned SHUTDOWNZ : 1; //!< [0] Core power up
        unsigned RESERVED0 : 31; //!< [31:1] Reserved
    } B;
} hw_mipi_dsi_pwr_up_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_PWR_UP register
 */
#define HW_MIPI_DSI_PWR_UP_ADDR      (REGS_MIPI_DSI_BASE + 0x4)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_PWR_UP           (*(volatile hw_mipi_dsi_pwr_up_t *) HW_MIPI_DSI_PWR_UP_ADDR)
#define HW_MIPI_DSI_PWR_UP_RD()      (HW_MIPI_DSI_PWR_UP.U)
#define HW_MIPI_DSI_PWR_UP_WR(v)     (HW_MIPI_DSI_PWR_UP.U = (v))
#define HW_MIPI_DSI_PWR_UP_SET(v)    (HW_MIPI_DSI_PWR_UP_WR(HW_MIPI_DSI_PWR_UP_RD() |  (v)))
#define HW_MIPI_DSI_PWR_UP_CLR(v)    (HW_MIPI_DSI_PWR_UP_WR(HW_MIPI_DSI_PWR_UP_RD() & ~(v)))
#define HW_MIPI_DSI_PWR_UP_TOG(v)    (HW_MIPI_DSI_PWR_UP_WR(HW_MIPI_DSI_PWR_UP_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_PWR_UP bitfields
 */

/* --- Register HW_MIPI_DSI_PWR_UP, field SHUTDOWNZ[0] (RW)
 *
 * Core power up
 *
 * Values:
 * 0 - reset;
 * 1 - power up)
 */

#define BP_MIPI_DSI_PWR_UP_SHUTDOWNZ      (0)      //!< Bit position for MIPI_DSI_PWR_UP_SHUTDOWNZ.
#define BM_MIPI_DSI_PWR_UP_SHUTDOWNZ      (0x00000001)  //!< Bit mask for MIPI_DSI_PWR_UP_SHUTDOWNZ.

//! @brief Get value of MIPI_DSI_PWR_UP_SHUTDOWNZ from a register value.
#define BG_MIPI_DSI_PWR_UP_SHUTDOWNZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PWR_UP_SHUTDOWNZ) >> BP_MIPI_DSI_PWR_UP_SHUTDOWNZ)

//! @brief Format value for bitfield MIPI_DSI_PWR_UP_SHUTDOWNZ.
#define BF_MIPI_DSI_PWR_UP_SHUTDOWNZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PWR_UP_SHUTDOWNZ) & BM_MIPI_DSI_PWR_UP_SHUTDOWNZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SHUTDOWNZ field to a new value.
#define BW_MIPI_DSI_PWR_UP_SHUTDOWNZ(v)   (HW_MIPI_DSI_PWR_UP_WR((HW_MIPI_DSI_PWR_UP_RD() & ~BM_MIPI_DSI_PWR_UP_SHUTDOWNZ) | BF_MIPI_DSI_PWR_UP_SHUTDOWNZ(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_CLKMGR_CFG - Number of active data lanes
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_CLKMGR_CFG - Number of active data lanes (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x8  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_clkmgr_cfg
{
    reg32_t U;
    struct _hw_mipi_dsi_clkmgr_cfg_bitfields
    {
        unsigned TX_ESC_CLK_DIVIDSION : 8; //!< [7:0] Division factor for TX ESCAPE clock source (lanebyteclk pin), values 0 and 1 stop TX_ESC clock generation.
        unsigned TO_CLK_DIVIDSION : 8; //!< [15:8] Division factor for Time Out clock used as timing unit in the configuration of HS to LP and LP to HS transition error.
        unsigned RESERVED0 : 16; //!< [31:16] Reserved
    } B;
} hw_mipi_dsi_clkmgr_cfg_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_CLKMGR_CFG register
 */
#define HW_MIPI_DSI_CLKMGR_CFG_ADDR      (REGS_MIPI_DSI_BASE + 0x8)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_CLKMGR_CFG           (*(volatile hw_mipi_dsi_clkmgr_cfg_t *) HW_MIPI_DSI_CLKMGR_CFG_ADDR)
#define HW_MIPI_DSI_CLKMGR_CFG_RD()      (HW_MIPI_DSI_CLKMGR_CFG.U)
#define HW_MIPI_DSI_CLKMGR_CFG_WR(v)     (HW_MIPI_DSI_CLKMGR_CFG.U = (v))
#define HW_MIPI_DSI_CLKMGR_CFG_SET(v)    (HW_MIPI_DSI_CLKMGR_CFG_WR(HW_MIPI_DSI_CLKMGR_CFG_RD() |  (v)))
#define HW_MIPI_DSI_CLKMGR_CFG_CLR(v)    (HW_MIPI_DSI_CLKMGR_CFG_WR(HW_MIPI_DSI_CLKMGR_CFG_RD() & ~(v)))
#define HW_MIPI_DSI_CLKMGR_CFG_TOG(v)    (HW_MIPI_DSI_CLKMGR_CFG_WR(HW_MIPI_DSI_CLKMGR_CFG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_CLKMGR_CFG bitfields
 */

/* --- Register HW_MIPI_DSI_CLKMGR_CFG, field TX_ESC_CLK_DIVIDSION[7:0] (RW)
 *
 * Division factor for TX ESCAPE clock source (lanebyteclk pin), values 0 and 1 stop TX_ESC clock
 * generation.
 */

#define BP_MIPI_DSI_CLKMGR_CFG_TX_ESC_CLK_DIVIDSION      (0)      //!< Bit position for MIPI_DSI_CLKMGR_CFG_TX_ESC_CLK_DIVIDSION.
#define BM_MIPI_DSI_CLKMGR_CFG_TX_ESC_CLK_DIVIDSION      (0x000000ff)  //!< Bit mask for MIPI_DSI_CLKMGR_CFG_TX_ESC_CLK_DIVIDSION.

//! @brief Get value of MIPI_DSI_CLKMGR_CFG_TX_ESC_CLK_DIVIDSION from a register value.
#define BG_MIPI_DSI_CLKMGR_CFG_TX_ESC_CLK_DIVIDSION(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CLKMGR_CFG_TX_ESC_CLK_DIVIDSION) >> BP_MIPI_DSI_CLKMGR_CFG_TX_ESC_CLK_DIVIDSION)

//! @brief Format value for bitfield MIPI_DSI_CLKMGR_CFG_TX_ESC_CLK_DIVIDSION.
#define BF_MIPI_DSI_CLKMGR_CFG_TX_ESC_CLK_DIVIDSION(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CLKMGR_CFG_TX_ESC_CLK_DIVIDSION) & BM_MIPI_DSI_CLKMGR_CFG_TX_ESC_CLK_DIVIDSION)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TX_ESC_CLK_DIVIDSION field to a new value.
#define BW_MIPI_DSI_CLKMGR_CFG_TX_ESC_CLK_DIVIDSION(v)   (HW_MIPI_DSI_CLKMGR_CFG_WR((HW_MIPI_DSI_CLKMGR_CFG_RD() & ~BM_MIPI_DSI_CLKMGR_CFG_TX_ESC_CLK_DIVIDSION) | BF_MIPI_DSI_CLKMGR_CFG_TX_ESC_CLK_DIVIDSION(v)))
#endif

/* --- Register HW_MIPI_DSI_CLKMGR_CFG, field TO_CLK_DIVIDSION[15:8] (RW)
 *
 * Division factor for Time Out clock used as timing unit in the configuration of HS to LP and LP to
 * HS transition error.
 */

#define BP_MIPI_DSI_CLKMGR_CFG_TO_CLK_DIVIDSION      (8)      //!< Bit position for MIPI_DSI_CLKMGR_CFG_TO_CLK_DIVIDSION.
#define BM_MIPI_DSI_CLKMGR_CFG_TO_CLK_DIVIDSION      (0x0000ff00)  //!< Bit mask for MIPI_DSI_CLKMGR_CFG_TO_CLK_DIVIDSION.

//! @brief Get value of MIPI_DSI_CLKMGR_CFG_TO_CLK_DIVIDSION from a register value.
#define BG_MIPI_DSI_CLKMGR_CFG_TO_CLK_DIVIDSION(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CLKMGR_CFG_TO_CLK_DIVIDSION) >> BP_MIPI_DSI_CLKMGR_CFG_TO_CLK_DIVIDSION)

//! @brief Format value for bitfield MIPI_DSI_CLKMGR_CFG_TO_CLK_DIVIDSION.
#define BF_MIPI_DSI_CLKMGR_CFG_TO_CLK_DIVIDSION(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CLKMGR_CFG_TO_CLK_DIVIDSION) & BM_MIPI_DSI_CLKMGR_CFG_TO_CLK_DIVIDSION)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TO_CLK_DIVIDSION field to a new value.
#define BW_MIPI_DSI_CLKMGR_CFG_TO_CLK_DIVIDSION(v)   (HW_MIPI_DSI_CLKMGR_CFG_WR((HW_MIPI_DSI_CLKMGR_CFG_RD() & ~BM_MIPI_DSI_CLKMGR_CFG_TO_CLK_DIVIDSION) | BF_MIPI_DSI_CLKMGR_CFG_TO_CLK_DIVIDSION(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_DPI_CFG - DPI interface configuration
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_DPI_CFG - DPI interface configuration (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0xc  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_dpi_cfg
{
    reg32_t U;
    struct _hw_mipi_dsi_dpi_cfg_bitfields
    {
        unsigned DPI_VID : 2; //!< [1:0] Configures the DPI Virtual Channel ID that will be indexed to the Video mode packets.
        unsigned DPI_COLOR_CODING : 3; //!< [4:2] DPI color coding.
        unsigned DATAEN_ACTIVE_LOW : 1; //!< [5] Set to configure Data enable pin (dpidaten) as Active low
        unsigned VSYNC_ACTIVE_LOW : 1; //!< [6] Set to configure Vertical Synchronism pin (dpivsync) as Active low
        unsigned HSYNC_ACTIVE_LOW : 1; //!< [7] Set to configure Horizontal Synchronism pin (dpihsync) as Active low
        unsigned SHUTD_ACTIVE_LOW : 1; //!< [8] Set to configure Shut Down pin (dpishutdn) as Active low
        unsigned COLORM_ACTIVE_LOW : 1; //!< [9] Set to configure Color Mode pin (dpicolcorm) as Active low
        unsigned EN18_LOOSELY : 1; //!< [10] Enable 18 loosely packet pixel stream.
        unsigned RESERVED0 : 21; //!< [31:11] Reserved
    } B;
} hw_mipi_dsi_dpi_cfg_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_DPI_CFG register
 */
#define HW_MIPI_DSI_DPI_CFG_ADDR      (REGS_MIPI_DSI_BASE + 0xc)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_DPI_CFG           (*(volatile hw_mipi_dsi_dpi_cfg_t *) HW_MIPI_DSI_DPI_CFG_ADDR)
#define HW_MIPI_DSI_DPI_CFG_RD()      (HW_MIPI_DSI_DPI_CFG.U)
#define HW_MIPI_DSI_DPI_CFG_WR(v)     (HW_MIPI_DSI_DPI_CFG.U = (v))
#define HW_MIPI_DSI_DPI_CFG_SET(v)    (HW_MIPI_DSI_DPI_CFG_WR(HW_MIPI_DSI_DPI_CFG_RD() |  (v)))
#define HW_MIPI_DSI_DPI_CFG_CLR(v)    (HW_MIPI_DSI_DPI_CFG_WR(HW_MIPI_DSI_DPI_CFG_RD() & ~(v)))
#define HW_MIPI_DSI_DPI_CFG_TOG(v)    (HW_MIPI_DSI_DPI_CFG_WR(HW_MIPI_DSI_DPI_CFG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_DPI_CFG bitfields
 */

/* --- Register HW_MIPI_DSI_DPI_CFG, field DPI_VID[1:0] (RW)
 *
 * Configures the DPI Virtual Channel ID that will be indexed to the Video mode packets.
 */

#define BP_MIPI_DSI_DPI_CFG_DPI_VID      (0)      //!< Bit position for MIPI_DSI_DPI_CFG_DPI_VID.
#define BM_MIPI_DSI_DPI_CFG_DPI_VID      (0x00000003)  //!< Bit mask for MIPI_DSI_DPI_CFG_DPI_VID.

//! @brief Get value of MIPI_DSI_DPI_CFG_DPI_VID from a register value.
#define BG_MIPI_DSI_DPI_CFG_DPI_VID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_DPI_CFG_DPI_VID) >> BP_MIPI_DSI_DPI_CFG_DPI_VID)

//! @brief Format value for bitfield MIPI_DSI_DPI_CFG_DPI_VID.
#define BF_MIPI_DSI_DPI_CFG_DPI_VID(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_DPI_CFG_DPI_VID) & BM_MIPI_DSI_DPI_CFG_DPI_VID)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPI_VID field to a new value.
#define BW_MIPI_DSI_DPI_CFG_DPI_VID(v)   (HW_MIPI_DSI_DPI_CFG_WR((HW_MIPI_DSI_DPI_CFG_RD() & ~BM_MIPI_DSI_DPI_CFG_DPI_VID) | BF_MIPI_DSI_DPI_CFG_DPI_VID(v)))
#endif

/* --- Register HW_MIPI_DSI_DPI_CFG, field DPI_COLOR_CODING[4:2] (RW)
 *
 * DPI color coding.
 *
 * Values:
 * 0 - 16bit config1
 * 1 - 16bit config2;
 * 2 - 16bit config3;
 * 3 - 18bit config1;
 * 4 - 18bit config2;
 * 5 - to 7 24 bit.
 */

#define BP_MIPI_DSI_DPI_CFG_DPI_COLOR_CODING      (2)      //!< Bit position for MIPI_DSI_DPI_CFG_DPI_COLOR_CODING.
#define BM_MIPI_DSI_DPI_CFG_DPI_COLOR_CODING      (0x0000001c)  //!< Bit mask for MIPI_DSI_DPI_CFG_DPI_COLOR_CODING.

//! @brief Get value of MIPI_DSI_DPI_CFG_DPI_COLOR_CODING from a register value.
#define BG_MIPI_DSI_DPI_CFG_DPI_COLOR_CODING(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_DPI_CFG_DPI_COLOR_CODING) >> BP_MIPI_DSI_DPI_CFG_DPI_COLOR_CODING)

//! @brief Format value for bitfield MIPI_DSI_DPI_CFG_DPI_COLOR_CODING.
#define BF_MIPI_DSI_DPI_CFG_DPI_COLOR_CODING(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_DPI_CFG_DPI_COLOR_CODING) & BM_MIPI_DSI_DPI_CFG_DPI_COLOR_CODING)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPI_COLOR_CODING field to a new value.
#define BW_MIPI_DSI_DPI_CFG_DPI_COLOR_CODING(v)   (HW_MIPI_DSI_DPI_CFG_WR((HW_MIPI_DSI_DPI_CFG_RD() & ~BM_MIPI_DSI_DPI_CFG_DPI_COLOR_CODING) | BF_MIPI_DSI_DPI_CFG_DPI_COLOR_CODING(v)))
#endif


/* --- Register HW_MIPI_DSI_DPI_CFG, field DATAEN_ACTIVE_LOW[5] (RW)
 *
 * Set to configure Data enable pin (dpidaten) as Active low
 */

#define BP_MIPI_DSI_DPI_CFG_DATAEN_ACTIVE_LOW      (5)      //!< Bit position for MIPI_DSI_DPI_CFG_DATAEN_ACTIVE_LOW.
#define BM_MIPI_DSI_DPI_CFG_DATAEN_ACTIVE_LOW      (0x00000020)  //!< Bit mask for MIPI_DSI_DPI_CFG_DATAEN_ACTIVE_LOW.

//! @brief Get value of MIPI_DSI_DPI_CFG_DATAEN_ACTIVE_LOW from a register value.
#define BG_MIPI_DSI_DPI_CFG_DATAEN_ACTIVE_LOW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_DPI_CFG_DATAEN_ACTIVE_LOW) >> BP_MIPI_DSI_DPI_CFG_DATAEN_ACTIVE_LOW)

//! @brief Format value for bitfield MIPI_DSI_DPI_CFG_DATAEN_ACTIVE_LOW.
#define BF_MIPI_DSI_DPI_CFG_DATAEN_ACTIVE_LOW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_DPI_CFG_DATAEN_ACTIVE_LOW) & BM_MIPI_DSI_DPI_CFG_DATAEN_ACTIVE_LOW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DATAEN_ACTIVE_LOW field to a new value.
#define BW_MIPI_DSI_DPI_CFG_DATAEN_ACTIVE_LOW(v)   (HW_MIPI_DSI_DPI_CFG_WR((HW_MIPI_DSI_DPI_CFG_RD() & ~BM_MIPI_DSI_DPI_CFG_DATAEN_ACTIVE_LOW) | BF_MIPI_DSI_DPI_CFG_DATAEN_ACTIVE_LOW(v)))
#endif

/* --- Register HW_MIPI_DSI_DPI_CFG, field VSYNC_ACTIVE_LOW[6] (RW)
 *
 * Set to configure Vertical Synchronism pin (dpivsync) as Active low
 */

#define BP_MIPI_DSI_DPI_CFG_VSYNC_ACTIVE_LOW      (6)      //!< Bit position for MIPI_DSI_DPI_CFG_VSYNC_ACTIVE_LOW.
#define BM_MIPI_DSI_DPI_CFG_VSYNC_ACTIVE_LOW      (0x00000040)  //!< Bit mask for MIPI_DSI_DPI_CFG_VSYNC_ACTIVE_LOW.

//! @brief Get value of MIPI_DSI_DPI_CFG_VSYNC_ACTIVE_LOW from a register value.
#define BG_MIPI_DSI_DPI_CFG_VSYNC_ACTIVE_LOW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_DPI_CFG_VSYNC_ACTIVE_LOW) >> BP_MIPI_DSI_DPI_CFG_VSYNC_ACTIVE_LOW)

//! @brief Format value for bitfield MIPI_DSI_DPI_CFG_VSYNC_ACTIVE_LOW.
#define BF_MIPI_DSI_DPI_CFG_VSYNC_ACTIVE_LOW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_DPI_CFG_VSYNC_ACTIVE_LOW) & BM_MIPI_DSI_DPI_CFG_VSYNC_ACTIVE_LOW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the VSYNC_ACTIVE_LOW field to a new value.
#define BW_MIPI_DSI_DPI_CFG_VSYNC_ACTIVE_LOW(v)   (HW_MIPI_DSI_DPI_CFG_WR((HW_MIPI_DSI_DPI_CFG_RD() & ~BM_MIPI_DSI_DPI_CFG_VSYNC_ACTIVE_LOW) | BF_MIPI_DSI_DPI_CFG_VSYNC_ACTIVE_LOW(v)))
#endif

/* --- Register HW_MIPI_DSI_DPI_CFG, field HSYNC_ACTIVE_LOW[7] (RW)
 *
 * Set to configure Horizontal Synchronism pin (dpihsync) as Active low
 */

#define BP_MIPI_DSI_DPI_CFG_HSYNC_ACTIVE_LOW      (7)      //!< Bit position for MIPI_DSI_DPI_CFG_HSYNC_ACTIVE_LOW.
#define BM_MIPI_DSI_DPI_CFG_HSYNC_ACTIVE_LOW      (0x00000080)  //!< Bit mask for MIPI_DSI_DPI_CFG_HSYNC_ACTIVE_LOW.

//! @brief Get value of MIPI_DSI_DPI_CFG_HSYNC_ACTIVE_LOW from a register value.
#define BG_MIPI_DSI_DPI_CFG_HSYNC_ACTIVE_LOW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_DPI_CFG_HSYNC_ACTIVE_LOW) >> BP_MIPI_DSI_DPI_CFG_HSYNC_ACTIVE_LOW)

//! @brief Format value for bitfield MIPI_DSI_DPI_CFG_HSYNC_ACTIVE_LOW.
#define BF_MIPI_DSI_DPI_CFG_HSYNC_ACTIVE_LOW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_DPI_CFG_HSYNC_ACTIVE_LOW) & BM_MIPI_DSI_DPI_CFG_HSYNC_ACTIVE_LOW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HSYNC_ACTIVE_LOW field to a new value.
#define BW_MIPI_DSI_DPI_CFG_HSYNC_ACTIVE_LOW(v)   (HW_MIPI_DSI_DPI_CFG_WR((HW_MIPI_DSI_DPI_CFG_RD() & ~BM_MIPI_DSI_DPI_CFG_HSYNC_ACTIVE_LOW) | BF_MIPI_DSI_DPI_CFG_HSYNC_ACTIVE_LOW(v)))
#endif

/* --- Register HW_MIPI_DSI_DPI_CFG, field SHUTD_ACTIVE_LOW[8] (RW)
 *
 * Set to configure Shut Down pin (dpishutdn) as Active low
 */

#define BP_MIPI_DSI_DPI_CFG_SHUTD_ACTIVE_LOW      (8)      //!< Bit position for MIPI_DSI_DPI_CFG_SHUTD_ACTIVE_LOW.
#define BM_MIPI_DSI_DPI_CFG_SHUTD_ACTIVE_LOW      (0x00000100)  //!< Bit mask for MIPI_DSI_DPI_CFG_SHUTD_ACTIVE_LOW.

//! @brief Get value of MIPI_DSI_DPI_CFG_SHUTD_ACTIVE_LOW from a register value.
#define BG_MIPI_DSI_DPI_CFG_SHUTD_ACTIVE_LOW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_DPI_CFG_SHUTD_ACTIVE_LOW) >> BP_MIPI_DSI_DPI_CFG_SHUTD_ACTIVE_LOW)

//! @brief Format value for bitfield MIPI_DSI_DPI_CFG_SHUTD_ACTIVE_LOW.
#define BF_MIPI_DSI_DPI_CFG_SHUTD_ACTIVE_LOW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_DPI_CFG_SHUTD_ACTIVE_LOW) & BM_MIPI_DSI_DPI_CFG_SHUTD_ACTIVE_LOW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SHUTD_ACTIVE_LOW field to a new value.
#define BW_MIPI_DSI_DPI_CFG_SHUTD_ACTIVE_LOW(v)   (HW_MIPI_DSI_DPI_CFG_WR((HW_MIPI_DSI_DPI_CFG_RD() & ~BM_MIPI_DSI_DPI_CFG_SHUTD_ACTIVE_LOW) | BF_MIPI_DSI_DPI_CFG_SHUTD_ACTIVE_LOW(v)))
#endif

/* --- Register HW_MIPI_DSI_DPI_CFG, field COLORM_ACTIVE_LOW[9] (RW)
 *
 * Set to configure Color Mode pin (dpicolcorm) as Active low
 */

#define BP_MIPI_DSI_DPI_CFG_COLORM_ACTIVE_LOW      (9)      //!< Bit position for MIPI_DSI_DPI_CFG_COLORM_ACTIVE_LOW.
#define BM_MIPI_DSI_DPI_CFG_COLORM_ACTIVE_LOW      (0x00000200)  //!< Bit mask for MIPI_DSI_DPI_CFG_COLORM_ACTIVE_LOW.

//! @brief Get value of MIPI_DSI_DPI_CFG_COLORM_ACTIVE_LOW from a register value.
#define BG_MIPI_DSI_DPI_CFG_COLORM_ACTIVE_LOW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_DPI_CFG_COLORM_ACTIVE_LOW) >> BP_MIPI_DSI_DPI_CFG_COLORM_ACTIVE_LOW)

//! @brief Format value for bitfield MIPI_DSI_DPI_CFG_COLORM_ACTIVE_LOW.
#define BF_MIPI_DSI_DPI_CFG_COLORM_ACTIVE_LOW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_DPI_CFG_COLORM_ACTIVE_LOW) & BM_MIPI_DSI_DPI_CFG_COLORM_ACTIVE_LOW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the COLORM_ACTIVE_LOW field to a new value.
#define BW_MIPI_DSI_DPI_CFG_COLORM_ACTIVE_LOW(v)   (HW_MIPI_DSI_DPI_CFG_WR((HW_MIPI_DSI_DPI_CFG_RD() & ~BM_MIPI_DSI_DPI_CFG_COLORM_ACTIVE_LOW) | BF_MIPI_DSI_DPI_CFG_COLORM_ACTIVE_LOW(v)))
#endif

/* --- Register HW_MIPI_DSI_DPI_CFG, field EN18_LOOSELY[10] (RW)
 *
 * Enable 18 loosely packet pixel stream.
 */

#define BP_MIPI_DSI_DPI_CFG_EN18_LOOSELY      (10)      //!< Bit position for MIPI_DSI_DPI_CFG_EN18_LOOSELY.
#define BM_MIPI_DSI_DPI_CFG_EN18_LOOSELY      (0x00000400)  //!< Bit mask for MIPI_DSI_DPI_CFG_EN18_LOOSELY.

//! @brief Get value of MIPI_DSI_DPI_CFG_EN18_LOOSELY from a register value.
#define BG_MIPI_DSI_DPI_CFG_EN18_LOOSELY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_DPI_CFG_EN18_LOOSELY) >> BP_MIPI_DSI_DPI_CFG_EN18_LOOSELY)

//! @brief Format value for bitfield MIPI_DSI_DPI_CFG_EN18_LOOSELY.
#define BF_MIPI_DSI_DPI_CFG_EN18_LOOSELY(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_DPI_CFG_EN18_LOOSELY) & BM_MIPI_DSI_DPI_CFG_EN18_LOOSELY)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN18_LOOSELY field to a new value.
#define BW_MIPI_DSI_DPI_CFG_EN18_LOOSELY(v)   (HW_MIPI_DSI_DPI_CFG_WR((HW_MIPI_DSI_DPI_CFG_RD() & ~BM_MIPI_DSI_DPI_CFG_EN18_LOOSELY) | BF_MIPI_DSI_DPI_CFG_EN18_LOOSELY(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_DBI_CFG - DBI interface configuration
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_DBI_CFG - DBI interface configuration (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x10  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_dbi_cfg
{
    reg32_t U;
    struct _hw_mipi_dsi_dbi_cfg_bitfields
    {
        unsigned DBI_VID : 2; //!< [1:0] Configures the DBI Virtual Channel ID that will be indexed to the DCS packets.
        unsigned IN_DBI_CONF : 4; //!< [5:2] Configures DBI input pixel data configuration;
        unsigned LUT_SIZE_CONF : 2; //!< [7:6] Configures the size used to transport Write Lut commands;
        unsigned PARTITIONING_EN : 1; //!< [8] Enables write memory continue through input command (system needs to ensure correct partitioning of Long Write commands)
        unsigned OUT_DBI_CONF : 4; //!< [12:9] Configures the DBI output pixel data configuration;
        unsigned RESERVED0 : 19; //!< [31:13] Reserved
    } B;
} hw_mipi_dsi_dbi_cfg_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_DBI_CFG register
 */
#define HW_MIPI_DSI_DBI_CFG_ADDR      (REGS_MIPI_DSI_BASE + 0x10)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_DBI_CFG           (*(volatile hw_mipi_dsi_dbi_cfg_t *) HW_MIPI_DSI_DBI_CFG_ADDR)
#define HW_MIPI_DSI_DBI_CFG_RD()      (HW_MIPI_DSI_DBI_CFG.U)
#define HW_MIPI_DSI_DBI_CFG_WR(v)     (HW_MIPI_DSI_DBI_CFG.U = (v))
#define HW_MIPI_DSI_DBI_CFG_SET(v)    (HW_MIPI_DSI_DBI_CFG_WR(HW_MIPI_DSI_DBI_CFG_RD() |  (v)))
#define HW_MIPI_DSI_DBI_CFG_CLR(v)    (HW_MIPI_DSI_DBI_CFG_WR(HW_MIPI_DSI_DBI_CFG_RD() & ~(v)))
#define HW_MIPI_DSI_DBI_CFG_TOG(v)    (HW_MIPI_DSI_DBI_CFG_WR(HW_MIPI_DSI_DBI_CFG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_DBI_CFG bitfields
 */

/* --- Register HW_MIPI_DSI_DBI_CFG, field DBI_VID[1:0] (RW)
 *
 * Configures the DBI Virtual Channel ID that will be indexed to the DCS packets.
 */

#define BP_MIPI_DSI_DBI_CFG_DBI_VID      (0)      //!< Bit position for MIPI_DSI_DBI_CFG_DBI_VID.
#define BM_MIPI_DSI_DBI_CFG_DBI_VID      (0x00000003)  //!< Bit mask for MIPI_DSI_DBI_CFG_DBI_VID.

//! @brief Get value of MIPI_DSI_DBI_CFG_DBI_VID from a register value.
#define BG_MIPI_DSI_DBI_CFG_DBI_VID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_DBI_CFG_DBI_VID) >> BP_MIPI_DSI_DBI_CFG_DBI_VID)

//! @brief Format value for bitfield MIPI_DSI_DBI_CFG_DBI_VID.
#define BF_MIPI_DSI_DBI_CFG_DBI_VID(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_DBI_CFG_DBI_VID) & BM_MIPI_DSI_DBI_CFG_DBI_VID)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_VID field to a new value.
#define BW_MIPI_DSI_DBI_CFG_DBI_VID(v)   (HW_MIPI_DSI_DBI_CFG_WR((HW_MIPI_DSI_DBI_CFG_RD() & ~BM_MIPI_DSI_DBI_CFG_DBI_VID) | BF_MIPI_DSI_DBI_CFG_DBI_VID(v)))
#endif

/* --- Register HW_MIPI_DSI_DBI_CFG, field IN_DBI_CONF[5:2] (RW)
 *
 * Configures DBI input pixel data configuration;
 *
 * Values:
 * 0 - 8bit 8bpp;
 * 1 - 8bit 12bpp;
 * 2 - 8bit 16bpp;
 * 3 - 8bit 18bpp;
 * 4 - 8bit 24bpp;
 * 5 - 9bit 18bpp;
 * 6 - 16bit 8bpp;
 * 7 - 16bit 12bpp;
 * 8 - 16bit 16bpp;
 * 9 - 16bit 18bpp, option1;
 * 10 - 16bit 18bpp, option2;
 * 11 - 16bit 24bpp, option1;
 * 12 - 16bit 24bpp, option2
 */

#define BP_MIPI_DSI_DBI_CFG_IN_DBI_CONF      (2)      //!< Bit position for MIPI_DSI_DBI_CFG_IN_DBI_CONF.
#define BM_MIPI_DSI_DBI_CFG_IN_DBI_CONF      (0x0000003c)  //!< Bit mask for MIPI_DSI_DBI_CFG_IN_DBI_CONF.

//! @brief Get value of MIPI_DSI_DBI_CFG_IN_DBI_CONF from a register value.
#define BG_MIPI_DSI_DBI_CFG_IN_DBI_CONF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_DBI_CFG_IN_DBI_CONF) >> BP_MIPI_DSI_DBI_CFG_IN_DBI_CONF)

//! @brief Format value for bitfield MIPI_DSI_DBI_CFG_IN_DBI_CONF.
#define BF_MIPI_DSI_DBI_CFG_IN_DBI_CONF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_DBI_CFG_IN_DBI_CONF) & BM_MIPI_DSI_DBI_CFG_IN_DBI_CONF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IN_DBI_CONF field to a new value.
#define BW_MIPI_DSI_DBI_CFG_IN_DBI_CONF(v)   (HW_MIPI_DSI_DBI_CFG_WR((HW_MIPI_DSI_DBI_CFG_RD() & ~BM_MIPI_DSI_DBI_CFG_IN_DBI_CONF) | BF_MIPI_DSI_DBI_CFG_IN_DBI_CONF(v)))
#endif


/* --- Register HW_MIPI_DSI_DBI_CFG, field LUT_SIZE_CONF[7:6] (RW)
 *
 * Configures the size used to transport Write Lut commands;
 *
 * Values:
 * 0 - 16-bit color display;
 * 1 - 18-bit color display;
 * 2 - 24-bit color display;
 * 3 - 16-bit color display
 */

#define BP_MIPI_DSI_DBI_CFG_LUT_SIZE_CONF      (6)      //!< Bit position for MIPI_DSI_DBI_CFG_LUT_SIZE_CONF.
#define BM_MIPI_DSI_DBI_CFG_LUT_SIZE_CONF      (0x000000c0)  //!< Bit mask for MIPI_DSI_DBI_CFG_LUT_SIZE_CONF.

//! @brief Get value of MIPI_DSI_DBI_CFG_LUT_SIZE_CONF from a register value.
#define BG_MIPI_DSI_DBI_CFG_LUT_SIZE_CONF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_DBI_CFG_LUT_SIZE_CONF) >> BP_MIPI_DSI_DBI_CFG_LUT_SIZE_CONF)

//! @brief Format value for bitfield MIPI_DSI_DBI_CFG_LUT_SIZE_CONF.
#define BF_MIPI_DSI_DBI_CFG_LUT_SIZE_CONF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_DBI_CFG_LUT_SIZE_CONF) & BM_MIPI_DSI_DBI_CFG_LUT_SIZE_CONF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LUT_SIZE_CONF field to a new value.
#define BW_MIPI_DSI_DBI_CFG_LUT_SIZE_CONF(v)   (HW_MIPI_DSI_DBI_CFG_WR((HW_MIPI_DSI_DBI_CFG_RD() & ~BM_MIPI_DSI_DBI_CFG_LUT_SIZE_CONF) | BF_MIPI_DSI_DBI_CFG_LUT_SIZE_CONF(v)))
#endif


/* --- Register HW_MIPI_DSI_DBI_CFG, field PARTITIONING_EN[8] (RW)
 *
 * Enables write memory continue through input command (system needs to ensure correct partitioning
 * of Long Write commands)
 */

#define BP_MIPI_DSI_DBI_CFG_PARTITIONING_EN      (8)      //!< Bit position for MIPI_DSI_DBI_CFG_PARTITIONING_EN.
#define BM_MIPI_DSI_DBI_CFG_PARTITIONING_EN      (0x00000100)  //!< Bit mask for MIPI_DSI_DBI_CFG_PARTITIONING_EN.

//! @brief Get value of MIPI_DSI_DBI_CFG_PARTITIONING_EN from a register value.
#define BG_MIPI_DSI_DBI_CFG_PARTITIONING_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_DBI_CFG_PARTITIONING_EN) >> BP_MIPI_DSI_DBI_CFG_PARTITIONING_EN)

//! @brief Format value for bitfield MIPI_DSI_DBI_CFG_PARTITIONING_EN.
#define BF_MIPI_DSI_DBI_CFG_PARTITIONING_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_DBI_CFG_PARTITIONING_EN) & BM_MIPI_DSI_DBI_CFG_PARTITIONING_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PARTITIONING_EN field to a new value.
#define BW_MIPI_DSI_DBI_CFG_PARTITIONING_EN(v)   (HW_MIPI_DSI_DBI_CFG_WR((HW_MIPI_DSI_DBI_CFG_RD() & ~BM_MIPI_DSI_DBI_CFG_PARTITIONING_EN) | BF_MIPI_DSI_DBI_CFG_PARTITIONING_EN(v)))
#endif

/* --- Register HW_MIPI_DSI_DBI_CFG, field OUT_DBI_CONF[12:9] (RW)
 *
 * Configures the DBI output pixel data configuration;
 *
 * Values:
 * 0 - 8bit 8bpp;
 * 1 - 8bit 12bpp;
 * 2 - 8bit 16bpp;
 * 3 - 8bit 18bpp;
 * 4 - 8bit 24bpp;
 * 5 - 9bit 18bpp;
 * 6 - 16bit 8bpp;
 * 7 - 16bit 12bpp;
 * 8 - 16bit 16bpp;
 * 9 - 16bit 18bpp, option1;
 * 10 - 16bit 18bpp, option2;
 * 11 - 16bit 24bpp, option1;
 * 12 - 16bit 24bpp, option2
 */

#define BP_MIPI_DSI_DBI_CFG_OUT_DBI_CONF      (9)      //!< Bit position for MIPI_DSI_DBI_CFG_OUT_DBI_CONF.
#define BM_MIPI_DSI_DBI_CFG_OUT_DBI_CONF      (0x00001e00)  //!< Bit mask for MIPI_DSI_DBI_CFG_OUT_DBI_CONF.

//! @brief Get value of MIPI_DSI_DBI_CFG_OUT_DBI_CONF from a register value.
#define BG_MIPI_DSI_DBI_CFG_OUT_DBI_CONF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_DBI_CFG_OUT_DBI_CONF) >> BP_MIPI_DSI_DBI_CFG_OUT_DBI_CONF)

//! @brief Format value for bitfield MIPI_DSI_DBI_CFG_OUT_DBI_CONF.
#define BF_MIPI_DSI_DBI_CFG_OUT_DBI_CONF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_DBI_CFG_OUT_DBI_CONF) & BM_MIPI_DSI_DBI_CFG_OUT_DBI_CONF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OUT_DBI_CONF field to a new value.
#define BW_MIPI_DSI_DBI_CFG_OUT_DBI_CONF(v)   (HW_MIPI_DSI_DBI_CFG_WR((HW_MIPI_DSI_DBI_CFG_RD() & ~BM_MIPI_DSI_DBI_CFG_OUT_DBI_CONF) | BF_MIPI_DSI_DBI_CFG_OUT_DBI_CONF(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_DBIS_CMDSIZE - DBI command size configuration
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_DBIS_CMDSIZE - DBI command size configuration (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x14  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_dbis_cmdsize
{
    reg32_t U;
    struct _hw_mipi_dsi_dbis_cmdsize_bitfields
    {
        unsigned WR_CMD_SIZE : 16; //!< [15:0] Configures the size of the DCS write memory commands.
        unsigned ALLOWED_CMD_SIZE : 16; //!< [31:16] Configures the maximum allowed size of a DCS write memory command.
    } B;
} hw_mipi_dsi_dbis_cmdsize_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_DBIS_CMDSIZE register
 */
#define HW_MIPI_DSI_DBIS_CMDSIZE_ADDR      (REGS_MIPI_DSI_BASE + 0x14)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_DBIS_CMDSIZE           (*(volatile hw_mipi_dsi_dbis_cmdsize_t *) HW_MIPI_DSI_DBIS_CMDSIZE_ADDR)
#define HW_MIPI_DSI_DBIS_CMDSIZE_RD()      (HW_MIPI_DSI_DBIS_CMDSIZE.U)
#define HW_MIPI_DSI_DBIS_CMDSIZE_WR(v)     (HW_MIPI_DSI_DBIS_CMDSIZE.U = (v))
#define HW_MIPI_DSI_DBIS_CMDSIZE_SET(v)    (HW_MIPI_DSI_DBIS_CMDSIZE_WR(HW_MIPI_DSI_DBIS_CMDSIZE_RD() |  (v)))
#define HW_MIPI_DSI_DBIS_CMDSIZE_CLR(v)    (HW_MIPI_DSI_DBIS_CMDSIZE_WR(HW_MIPI_DSI_DBIS_CMDSIZE_RD() & ~(v)))
#define HW_MIPI_DSI_DBIS_CMDSIZE_TOG(v)    (HW_MIPI_DSI_DBIS_CMDSIZE_WR(HW_MIPI_DSI_DBIS_CMDSIZE_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_DBIS_CMDSIZE bitfields
 */

/* --- Register HW_MIPI_DSI_DBIS_CMDSIZE, field WR_CMD_SIZE[15:0] (RW)
 *
 * Configures the size of the DCS write memory commands. Size of DSI packet payload is the actual
 * payload size minus 1 since the DCS command is in the DSI packet payload.
 */

#define BP_MIPI_DSI_DBIS_CMDSIZE_WR_CMD_SIZE      (0)      //!< Bit position for MIPI_DSI_DBIS_CMDSIZE_WR_CMD_SIZE.
#define BM_MIPI_DSI_DBIS_CMDSIZE_WR_CMD_SIZE      (0x0000ffff)  //!< Bit mask for MIPI_DSI_DBIS_CMDSIZE_WR_CMD_SIZE.

//! @brief Get value of MIPI_DSI_DBIS_CMDSIZE_WR_CMD_SIZE from a register value.
#define BG_MIPI_DSI_DBIS_CMDSIZE_WR_CMD_SIZE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_DBIS_CMDSIZE_WR_CMD_SIZE) >> BP_MIPI_DSI_DBIS_CMDSIZE_WR_CMD_SIZE)

//! @brief Format value for bitfield MIPI_DSI_DBIS_CMDSIZE_WR_CMD_SIZE.
#define BF_MIPI_DSI_DBIS_CMDSIZE_WR_CMD_SIZE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_DBIS_CMDSIZE_WR_CMD_SIZE) & BM_MIPI_DSI_DBIS_CMDSIZE_WR_CMD_SIZE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WR_CMD_SIZE field to a new value.
#define BW_MIPI_DSI_DBIS_CMDSIZE_WR_CMD_SIZE(v)   (HW_MIPI_DSI_DBIS_CMDSIZE_WR((HW_MIPI_DSI_DBIS_CMDSIZE_RD() & ~BM_MIPI_DSI_DBIS_CMDSIZE_WR_CMD_SIZE) | BF_MIPI_DSI_DBIS_CMDSIZE_WR_CMD_SIZE(v)))
#endif

/* --- Register HW_MIPI_DSI_DBIS_CMDSIZE, field ALLOWED_CMD_SIZE[31:16] (RW)
 *
 * Configures the maximum allowed size of a DCS write memory command. This register is used to
 * partition a write memory command into several write memory continues. It is only used if bit
 * 'partitioning_en' is disabled. Size of DSI packet payload is the actual payload size minus 1
 * since the DCS command is in the DSI packet payload.
 */

#define BP_MIPI_DSI_DBIS_CMDSIZE_ALLOWED_CMD_SIZE      (16)      //!< Bit position for MIPI_DSI_DBIS_CMDSIZE_ALLOWED_CMD_SIZE.
#define BM_MIPI_DSI_DBIS_CMDSIZE_ALLOWED_CMD_SIZE      (0xffff0000)  //!< Bit mask for MIPI_DSI_DBIS_CMDSIZE_ALLOWED_CMD_SIZE.

//! @brief Get value of MIPI_DSI_DBIS_CMDSIZE_ALLOWED_CMD_SIZE from a register value.
#define BG_MIPI_DSI_DBIS_CMDSIZE_ALLOWED_CMD_SIZE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_DBIS_CMDSIZE_ALLOWED_CMD_SIZE) >> BP_MIPI_DSI_DBIS_CMDSIZE_ALLOWED_CMD_SIZE)

//! @brief Format value for bitfield MIPI_DSI_DBIS_CMDSIZE_ALLOWED_CMD_SIZE.
#define BF_MIPI_DSI_DBIS_CMDSIZE_ALLOWED_CMD_SIZE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_DBIS_CMDSIZE_ALLOWED_CMD_SIZE) & BM_MIPI_DSI_DBIS_CMDSIZE_ALLOWED_CMD_SIZE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ALLOWED_CMD_SIZE field to a new value.
#define BW_MIPI_DSI_DBIS_CMDSIZE_ALLOWED_CMD_SIZE(v)   (HW_MIPI_DSI_DBIS_CMDSIZE_WR((HW_MIPI_DSI_DBIS_CMDSIZE_RD() & ~BM_MIPI_DSI_DBIS_CMDSIZE_ALLOWED_CMD_SIZE) | BF_MIPI_DSI_DBIS_CMDSIZE_ALLOWED_CMD_SIZE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_PCKHDL_CFG - Packet handler configuration
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_PCKHDL_CFG - Packet handler configuration (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x18  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_pckhdl_cfg
{
    reg32_t U;
    struct _hw_mipi_dsi_pckhdl_cfg_bitfields
    {
        unsigned EN_EOTP_TX : 1; //!< [0] Enables EOTp transmission
        unsigned EN_EOTN_RX : 1; //!< [1] Enables EOTp reception
        unsigned EN_BTA : 1; //!< [2] Enables Bus Turn-Around request
        unsigned EN_ECC_RX : 1; //!< [3] Enables ECC reception, error correction and reporting
        unsigned EN_CRC_RX : 1; //!< [4] Enables CRC reception and error reporting
        unsigned GEN_VID_RX : 2; //!< [6:5] Generic interface read-back Virtual Channel identification
        unsigned RESERVED0 : 25; //!< [31:7] Reserved
    } B;
} hw_mipi_dsi_pckhdl_cfg_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_PCKHDL_CFG register
 */
#define HW_MIPI_DSI_PCKHDL_CFG_ADDR      (REGS_MIPI_DSI_BASE + 0x18)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_PCKHDL_CFG           (*(volatile hw_mipi_dsi_pckhdl_cfg_t *) HW_MIPI_DSI_PCKHDL_CFG_ADDR)
#define HW_MIPI_DSI_PCKHDL_CFG_RD()      (HW_MIPI_DSI_PCKHDL_CFG.U)
#define HW_MIPI_DSI_PCKHDL_CFG_WR(v)     (HW_MIPI_DSI_PCKHDL_CFG.U = (v))
#define HW_MIPI_DSI_PCKHDL_CFG_SET(v)    (HW_MIPI_DSI_PCKHDL_CFG_WR(HW_MIPI_DSI_PCKHDL_CFG_RD() |  (v)))
#define HW_MIPI_DSI_PCKHDL_CFG_CLR(v)    (HW_MIPI_DSI_PCKHDL_CFG_WR(HW_MIPI_DSI_PCKHDL_CFG_RD() & ~(v)))
#define HW_MIPI_DSI_PCKHDL_CFG_TOG(v)    (HW_MIPI_DSI_PCKHDL_CFG_WR(HW_MIPI_DSI_PCKHDL_CFG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_PCKHDL_CFG bitfields
 */

/* --- Register HW_MIPI_DSI_PCKHDL_CFG, field EN_EOTP_TX[0] (RW)
 *
 * Enables EOTp transmission
 */

#define BP_MIPI_DSI_PCKHDL_CFG_EN_EOTP_TX      (0)      //!< Bit position for MIPI_DSI_PCKHDL_CFG_EN_EOTP_TX.
#define BM_MIPI_DSI_PCKHDL_CFG_EN_EOTP_TX      (0x00000001)  //!< Bit mask for MIPI_DSI_PCKHDL_CFG_EN_EOTP_TX.

//! @brief Get value of MIPI_DSI_PCKHDL_CFG_EN_EOTP_TX from a register value.
#define BG_MIPI_DSI_PCKHDL_CFG_EN_EOTP_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PCKHDL_CFG_EN_EOTP_TX) >> BP_MIPI_DSI_PCKHDL_CFG_EN_EOTP_TX)

//! @brief Format value for bitfield MIPI_DSI_PCKHDL_CFG_EN_EOTP_TX.
#define BF_MIPI_DSI_PCKHDL_CFG_EN_EOTP_TX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PCKHDL_CFG_EN_EOTP_TX) & BM_MIPI_DSI_PCKHDL_CFG_EN_EOTP_TX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_EOTP_TX field to a new value.
#define BW_MIPI_DSI_PCKHDL_CFG_EN_EOTP_TX(v)   (HW_MIPI_DSI_PCKHDL_CFG_WR((HW_MIPI_DSI_PCKHDL_CFG_RD() & ~BM_MIPI_DSI_PCKHDL_CFG_EN_EOTP_TX) | BF_MIPI_DSI_PCKHDL_CFG_EN_EOTP_TX(v)))
#endif

/* --- Register HW_MIPI_DSI_PCKHDL_CFG, field EN_EOTN_RX[1] (RW)
 *
 * Enables EOTp reception
 */

#define BP_MIPI_DSI_PCKHDL_CFG_EN_EOTN_RX      (1)      //!< Bit position for MIPI_DSI_PCKHDL_CFG_EN_EOTN_RX.
#define BM_MIPI_DSI_PCKHDL_CFG_EN_EOTN_RX      (0x00000002)  //!< Bit mask for MIPI_DSI_PCKHDL_CFG_EN_EOTN_RX.

//! @brief Get value of MIPI_DSI_PCKHDL_CFG_EN_EOTN_RX from a register value.
#define BG_MIPI_DSI_PCKHDL_CFG_EN_EOTN_RX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PCKHDL_CFG_EN_EOTN_RX) >> BP_MIPI_DSI_PCKHDL_CFG_EN_EOTN_RX)

//! @brief Format value for bitfield MIPI_DSI_PCKHDL_CFG_EN_EOTN_RX.
#define BF_MIPI_DSI_PCKHDL_CFG_EN_EOTN_RX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PCKHDL_CFG_EN_EOTN_RX) & BM_MIPI_DSI_PCKHDL_CFG_EN_EOTN_RX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_EOTN_RX field to a new value.
#define BW_MIPI_DSI_PCKHDL_CFG_EN_EOTN_RX(v)   (HW_MIPI_DSI_PCKHDL_CFG_WR((HW_MIPI_DSI_PCKHDL_CFG_RD() & ~BM_MIPI_DSI_PCKHDL_CFG_EN_EOTN_RX) | BF_MIPI_DSI_PCKHDL_CFG_EN_EOTN_RX(v)))
#endif

/* --- Register HW_MIPI_DSI_PCKHDL_CFG, field EN_BTA[2] (RW)
 *
 * Enables Bus Turn-Around request
 */

#define BP_MIPI_DSI_PCKHDL_CFG_EN_BTA      (2)      //!< Bit position for MIPI_DSI_PCKHDL_CFG_EN_BTA.
#define BM_MIPI_DSI_PCKHDL_CFG_EN_BTA      (0x00000004)  //!< Bit mask for MIPI_DSI_PCKHDL_CFG_EN_BTA.

//! @brief Get value of MIPI_DSI_PCKHDL_CFG_EN_BTA from a register value.
#define BG_MIPI_DSI_PCKHDL_CFG_EN_BTA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PCKHDL_CFG_EN_BTA) >> BP_MIPI_DSI_PCKHDL_CFG_EN_BTA)

//! @brief Format value for bitfield MIPI_DSI_PCKHDL_CFG_EN_BTA.
#define BF_MIPI_DSI_PCKHDL_CFG_EN_BTA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PCKHDL_CFG_EN_BTA) & BM_MIPI_DSI_PCKHDL_CFG_EN_BTA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_BTA field to a new value.
#define BW_MIPI_DSI_PCKHDL_CFG_EN_BTA(v)   (HW_MIPI_DSI_PCKHDL_CFG_WR((HW_MIPI_DSI_PCKHDL_CFG_RD() & ~BM_MIPI_DSI_PCKHDL_CFG_EN_BTA) | BF_MIPI_DSI_PCKHDL_CFG_EN_BTA(v)))
#endif

/* --- Register HW_MIPI_DSI_PCKHDL_CFG, field EN_ECC_RX[3] (RW)
 *
 * Enables ECC reception, error correction and reporting
 */

#define BP_MIPI_DSI_PCKHDL_CFG_EN_ECC_RX      (3)      //!< Bit position for MIPI_DSI_PCKHDL_CFG_EN_ECC_RX.
#define BM_MIPI_DSI_PCKHDL_CFG_EN_ECC_RX      (0x00000008)  //!< Bit mask for MIPI_DSI_PCKHDL_CFG_EN_ECC_RX.

//! @brief Get value of MIPI_DSI_PCKHDL_CFG_EN_ECC_RX from a register value.
#define BG_MIPI_DSI_PCKHDL_CFG_EN_ECC_RX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PCKHDL_CFG_EN_ECC_RX) >> BP_MIPI_DSI_PCKHDL_CFG_EN_ECC_RX)

//! @brief Format value for bitfield MIPI_DSI_PCKHDL_CFG_EN_ECC_RX.
#define BF_MIPI_DSI_PCKHDL_CFG_EN_ECC_RX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PCKHDL_CFG_EN_ECC_RX) & BM_MIPI_DSI_PCKHDL_CFG_EN_ECC_RX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_ECC_RX field to a new value.
#define BW_MIPI_DSI_PCKHDL_CFG_EN_ECC_RX(v)   (HW_MIPI_DSI_PCKHDL_CFG_WR((HW_MIPI_DSI_PCKHDL_CFG_RD() & ~BM_MIPI_DSI_PCKHDL_CFG_EN_ECC_RX) | BF_MIPI_DSI_PCKHDL_CFG_EN_ECC_RX(v)))
#endif

/* --- Register HW_MIPI_DSI_PCKHDL_CFG, field EN_CRC_RX[4] (RW)
 *
 * Enables CRC reception and error reporting
 */

#define BP_MIPI_DSI_PCKHDL_CFG_EN_CRC_RX      (4)      //!< Bit position for MIPI_DSI_PCKHDL_CFG_EN_CRC_RX.
#define BM_MIPI_DSI_PCKHDL_CFG_EN_CRC_RX      (0x00000010)  //!< Bit mask for MIPI_DSI_PCKHDL_CFG_EN_CRC_RX.

//! @brief Get value of MIPI_DSI_PCKHDL_CFG_EN_CRC_RX from a register value.
#define BG_MIPI_DSI_PCKHDL_CFG_EN_CRC_RX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PCKHDL_CFG_EN_CRC_RX) >> BP_MIPI_DSI_PCKHDL_CFG_EN_CRC_RX)

//! @brief Format value for bitfield MIPI_DSI_PCKHDL_CFG_EN_CRC_RX.
#define BF_MIPI_DSI_PCKHDL_CFG_EN_CRC_RX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PCKHDL_CFG_EN_CRC_RX) & BM_MIPI_DSI_PCKHDL_CFG_EN_CRC_RX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_CRC_RX field to a new value.
#define BW_MIPI_DSI_PCKHDL_CFG_EN_CRC_RX(v)   (HW_MIPI_DSI_PCKHDL_CFG_WR((HW_MIPI_DSI_PCKHDL_CFG_RD() & ~BM_MIPI_DSI_PCKHDL_CFG_EN_CRC_RX) | BF_MIPI_DSI_PCKHDL_CFG_EN_CRC_RX(v)))
#endif

/* --- Register HW_MIPI_DSI_PCKHDL_CFG, field GEN_VID_RX[6:5] (RW)
 *
 * Generic interface read-back Virtual Channel identification
 */

#define BP_MIPI_DSI_PCKHDL_CFG_GEN_VID_RX      (5)      //!< Bit position for MIPI_DSI_PCKHDL_CFG_GEN_VID_RX.
#define BM_MIPI_DSI_PCKHDL_CFG_GEN_VID_RX      (0x00000060)  //!< Bit mask for MIPI_DSI_PCKHDL_CFG_GEN_VID_RX.

//! @brief Get value of MIPI_DSI_PCKHDL_CFG_GEN_VID_RX from a register value.
#define BG_MIPI_DSI_PCKHDL_CFG_GEN_VID_RX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PCKHDL_CFG_GEN_VID_RX) >> BP_MIPI_DSI_PCKHDL_CFG_GEN_VID_RX)

//! @brief Format value for bitfield MIPI_DSI_PCKHDL_CFG_GEN_VID_RX.
#define BF_MIPI_DSI_PCKHDL_CFG_GEN_VID_RX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PCKHDL_CFG_GEN_VID_RX) & BM_MIPI_DSI_PCKHDL_CFG_GEN_VID_RX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_VID_RX field to a new value.
#define BW_MIPI_DSI_PCKHDL_CFG_GEN_VID_RX(v)   (HW_MIPI_DSI_PCKHDL_CFG_WR((HW_MIPI_DSI_PCKHDL_CFG_RD() & ~BM_MIPI_DSI_PCKHDL_CFG_GEN_VID_RX) | BF_MIPI_DSI_PCKHDL_CFG_GEN_VID_RX(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_VID_MODE_CFG - Video Mode Configuration
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_VID_MODE_CFG - Video Mode Configuration (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x1c  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_vid_mode_cfg
{
    reg32_t U;
    struct _hw_mipi_dsi_vid_mode_cfg_bitfields
    {
        unsigned EN_VIDEO_MODE : 1; //!< [0] Enables DPI Video mode transmission
        unsigned VID_MODE_TYPE : 2; //!< [2:1] Selects video mode transmission type.
        unsigned EN_LP_VSA : 1; //!< [3] Enables return to Low Power inside VSA period when timing allows
        unsigned EN_LP_VBP : 1; //!< [4] Enables return to Low Power inside VBP period when timing allows
        unsigned EN_LP_VFP : 1; //!< [5] Enables return to Low Power inside VFP period when timing allows
        unsigned EN_LP_VACT : 1; //!< [6] Enables return to Low Power inside VACT period when timing allows
        unsigned EN_LP_HBP : 1; //!< [7] Enables return to Low Power inside HBP period when timing allows
        unsigned EN_LP_HFP : 1; //!< [8] Enables return to Low Power inside HFP period when timing allows
        unsigned EN_MULTI_PKT : 1; //!< [9] Enables the tranmission of multi video packets in the HACT period
        unsigned EN_NULL_PKT : 1; //!< [10] Enables the tranmission of null packets in the HACT period
        unsigned FRAME_BTA_ACK : 1; //!< [11] Enables the request for an acknowledge response at the end of a frame
        unsigned RESERVED0 : 20; //!< [31:12] Reserved
    } B;
} hw_mipi_dsi_vid_mode_cfg_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_VID_MODE_CFG register
 */
#define HW_MIPI_DSI_VID_MODE_CFG_ADDR      (REGS_MIPI_DSI_BASE + 0x1c)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_VID_MODE_CFG           (*(volatile hw_mipi_dsi_vid_mode_cfg_t *) HW_MIPI_DSI_VID_MODE_CFG_ADDR)
#define HW_MIPI_DSI_VID_MODE_CFG_RD()      (HW_MIPI_DSI_VID_MODE_CFG.U)
#define HW_MIPI_DSI_VID_MODE_CFG_WR(v)     (HW_MIPI_DSI_VID_MODE_CFG.U = (v))
#define HW_MIPI_DSI_VID_MODE_CFG_SET(v)    (HW_MIPI_DSI_VID_MODE_CFG_WR(HW_MIPI_DSI_VID_MODE_CFG_RD() |  (v)))
#define HW_MIPI_DSI_VID_MODE_CFG_CLR(v)    (HW_MIPI_DSI_VID_MODE_CFG_WR(HW_MIPI_DSI_VID_MODE_CFG_RD() & ~(v)))
#define HW_MIPI_DSI_VID_MODE_CFG_TOG(v)    (HW_MIPI_DSI_VID_MODE_CFG_WR(HW_MIPI_DSI_VID_MODE_CFG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_VID_MODE_CFG bitfields
 */

/* --- Register HW_MIPI_DSI_VID_MODE_CFG, field EN_VIDEO_MODE[0] (RW)
 *
 * Enables DPI Video mode transmission
 */

#define BP_MIPI_DSI_VID_MODE_CFG_EN_VIDEO_MODE      (0)      //!< Bit position for MIPI_DSI_VID_MODE_CFG_EN_VIDEO_MODE.
#define BM_MIPI_DSI_VID_MODE_CFG_EN_VIDEO_MODE      (0x00000001)  //!< Bit mask for MIPI_DSI_VID_MODE_CFG_EN_VIDEO_MODE.

//! @brief Get value of MIPI_DSI_VID_MODE_CFG_EN_VIDEO_MODE from a register value.
#define BG_MIPI_DSI_VID_MODE_CFG_EN_VIDEO_MODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VID_MODE_CFG_EN_VIDEO_MODE) >> BP_MIPI_DSI_VID_MODE_CFG_EN_VIDEO_MODE)

//! @brief Format value for bitfield MIPI_DSI_VID_MODE_CFG_EN_VIDEO_MODE.
#define BF_MIPI_DSI_VID_MODE_CFG_EN_VIDEO_MODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VID_MODE_CFG_EN_VIDEO_MODE) & BM_MIPI_DSI_VID_MODE_CFG_EN_VIDEO_MODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_VIDEO_MODE field to a new value.
#define BW_MIPI_DSI_VID_MODE_CFG_EN_VIDEO_MODE(v)   (HW_MIPI_DSI_VID_MODE_CFG_WR((HW_MIPI_DSI_VID_MODE_CFG_RD() & ~BM_MIPI_DSI_VID_MODE_CFG_EN_VIDEO_MODE) | BF_MIPI_DSI_VID_MODE_CFG_EN_VIDEO_MODE(v)))
#endif

/* --- Register HW_MIPI_DSI_VID_MODE_CFG, field VID_MODE_TYPE[2:1] (RW)
 *
 * Selects video mode transmission type. 0: Non-burst with Sync pulses; 1: Non-burst with Sync
 * events; 2-3: Burst with Sync pulses.
 */

#define BP_MIPI_DSI_VID_MODE_CFG_VID_MODE_TYPE      (1)      //!< Bit position for MIPI_DSI_VID_MODE_CFG_VID_MODE_TYPE.
#define BM_MIPI_DSI_VID_MODE_CFG_VID_MODE_TYPE      (0x00000006)  //!< Bit mask for MIPI_DSI_VID_MODE_CFG_VID_MODE_TYPE.

//! @brief Get value of MIPI_DSI_VID_MODE_CFG_VID_MODE_TYPE from a register value.
#define BG_MIPI_DSI_VID_MODE_CFG_VID_MODE_TYPE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VID_MODE_CFG_VID_MODE_TYPE) >> BP_MIPI_DSI_VID_MODE_CFG_VID_MODE_TYPE)

//! @brief Format value for bitfield MIPI_DSI_VID_MODE_CFG_VID_MODE_TYPE.
#define BF_MIPI_DSI_VID_MODE_CFG_VID_MODE_TYPE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VID_MODE_CFG_VID_MODE_TYPE) & BM_MIPI_DSI_VID_MODE_CFG_VID_MODE_TYPE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the VID_MODE_TYPE field to a new value.
#define BW_MIPI_DSI_VID_MODE_CFG_VID_MODE_TYPE(v)   (HW_MIPI_DSI_VID_MODE_CFG_WR((HW_MIPI_DSI_VID_MODE_CFG_RD() & ~BM_MIPI_DSI_VID_MODE_CFG_VID_MODE_TYPE) | BF_MIPI_DSI_VID_MODE_CFG_VID_MODE_TYPE(v)))
#endif

/* --- Register HW_MIPI_DSI_VID_MODE_CFG, field EN_LP_VSA[3] (RW)
 *
 * Enables return to Low Power inside VSA period when timing allows
 */

#define BP_MIPI_DSI_VID_MODE_CFG_EN_LP_VSA      (3)      //!< Bit position for MIPI_DSI_VID_MODE_CFG_EN_LP_VSA.
#define BM_MIPI_DSI_VID_MODE_CFG_EN_LP_VSA      (0x00000008)  //!< Bit mask for MIPI_DSI_VID_MODE_CFG_EN_LP_VSA.

//! @brief Get value of MIPI_DSI_VID_MODE_CFG_EN_LP_VSA from a register value.
#define BG_MIPI_DSI_VID_MODE_CFG_EN_LP_VSA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VID_MODE_CFG_EN_LP_VSA) >> BP_MIPI_DSI_VID_MODE_CFG_EN_LP_VSA)

//! @brief Format value for bitfield MIPI_DSI_VID_MODE_CFG_EN_LP_VSA.
#define BF_MIPI_DSI_VID_MODE_CFG_EN_LP_VSA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VID_MODE_CFG_EN_LP_VSA) & BM_MIPI_DSI_VID_MODE_CFG_EN_LP_VSA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_LP_VSA field to a new value.
#define BW_MIPI_DSI_VID_MODE_CFG_EN_LP_VSA(v)   (HW_MIPI_DSI_VID_MODE_CFG_WR((HW_MIPI_DSI_VID_MODE_CFG_RD() & ~BM_MIPI_DSI_VID_MODE_CFG_EN_LP_VSA) | BF_MIPI_DSI_VID_MODE_CFG_EN_LP_VSA(v)))
#endif

/* --- Register HW_MIPI_DSI_VID_MODE_CFG, field EN_LP_VBP[4] (RW)
 *
 * Enables return to Low Power inside VBP period when timing allows
 */

#define BP_MIPI_DSI_VID_MODE_CFG_EN_LP_VBP      (4)      //!< Bit position for MIPI_DSI_VID_MODE_CFG_EN_LP_VBP.
#define BM_MIPI_DSI_VID_MODE_CFG_EN_LP_VBP      (0x00000010)  //!< Bit mask for MIPI_DSI_VID_MODE_CFG_EN_LP_VBP.

//! @brief Get value of MIPI_DSI_VID_MODE_CFG_EN_LP_VBP from a register value.
#define BG_MIPI_DSI_VID_MODE_CFG_EN_LP_VBP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VID_MODE_CFG_EN_LP_VBP) >> BP_MIPI_DSI_VID_MODE_CFG_EN_LP_VBP)

//! @brief Format value for bitfield MIPI_DSI_VID_MODE_CFG_EN_LP_VBP.
#define BF_MIPI_DSI_VID_MODE_CFG_EN_LP_VBP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VID_MODE_CFG_EN_LP_VBP) & BM_MIPI_DSI_VID_MODE_CFG_EN_LP_VBP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_LP_VBP field to a new value.
#define BW_MIPI_DSI_VID_MODE_CFG_EN_LP_VBP(v)   (HW_MIPI_DSI_VID_MODE_CFG_WR((HW_MIPI_DSI_VID_MODE_CFG_RD() & ~BM_MIPI_DSI_VID_MODE_CFG_EN_LP_VBP) | BF_MIPI_DSI_VID_MODE_CFG_EN_LP_VBP(v)))
#endif

/* --- Register HW_MIPI_DSI_VID_MODE_CFG, field EN_LP_VFP[5] (RW)
 *
 * Enables return to Low Power inside VFP period when timing allows
 */

#define BP_MIPI_DSI_VID_MODE_CFG_EN_LP_VFP      (5)      //!< Bit position for MIPI_DSI_VID_MODE_CFG_EN_LP_VFP.
#define BM_MIPI_DSI_VID_MODE_CFG_EN_LP_VFP      (0x00000020)  //!< Bit mask for MIPI_DSI_VID_MODE_CFG_EN_LP_VFP.

//! @brief Get value of MIPI_DSI_VID_MODE_CFG_EN_LP_VFP from a register value.
#define BG_MIPI_DSI_VID_MODE_CFG_EN_LP_VFP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VID_MODE_CFG_EN_LP_VFP) >> BP_MIPI_DSI_VID_MODE_CFG_EN_LP_VFP)

//! @brief Format value for bitfield MIPI_DSI_VID_MODE_CFG_EN_LP_VFP.
#define BF_MIPI_DSI_VID_MODE_CFG_EN_LP_VFP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VID_MODE_CFG_EN_LP_VFP) & BM_MIPI_DSI_VID_MODE_CFG_EN_LP_VFP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_LP_VFP field to a new value.
#define BW_MIPI_DSI_VID_MODE_CFG_EN_LP_VFP(v)   (HW_MIPI_DSI_VID_MODE_CFG_WR((HW_MIPI_DSI_VID_MODE_CFG_RD() & ~BM_MIPI_DSI_VID_MODE_CFG_EN_LP_VFP) | BF_MIPI_DSI_VID_MODE_CFG_EN_LP_VFP(v)))
#endif

/* --- Register HW_MIPI_DSI_VID_MODE_CFG, field EN_LP_VACT[6] (RW)
 *
 * Enables return to Low Power inside VACT period when timing allows
 */

#define BP_MIPI_DSI_VID_MODE_CFG_EN_LP_VACT      (6)      //!< Bit position for MIPI_DSI_VID_MODE_CFG_EN_LP_VACT.
#define BM_MIPI_DSI_VID_MODE_CFG_EN_LP_VACT      (0x00000040)  //!< Bit mask for MIPI_DSI_VID_MODE_CFG_EN_LP_VACT.

//! @brief Get value of MIPI_DSI_VID_MODE_CFG_EN_LP_VACT from a register value.
#define BG_MIPI_DSI_VID_MODE_CFG_EN_LP_VACT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VID_MODE_CFG_EN_LP_VACT) >> BP_MIPI_DSI_VID_MODE_CFG_EN_LP_VACT)

//! @brief Format value for bitfield MIPI_DSI_VID_MODE_CFG_EN_LP_VACT.
#define BF_MIPI_DSI_VID_MODE_CFG_EN_LP_VACT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VID_MODE_CFG_EN_LP_VACT) & BM_MIPI_DSI_VID_MODE_CFG_EN_LP_VACT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_LP_VACT field to a new value.
#define BW_MIPI_DSI_VID_MODE_CFG_EN_LP_VACT(v)   (HW_MIPI_DSI_VID_MODE_CFG_WR((HW_MIPI_DSI_VID_MODE_CFG_RD() & ~BM_MIPI_DSI_VID_MODE_CFG_EN_LP_VACT) | BF_MIPI_DSI_VID_MODE_CFG_EN_LP_VACT(v)))
#endif

/* --- Register HW_MIPI_DSI_VID_MODE_CFG, field EN_LP_HBP[7] (RW)
 *
 * Enables return to Low Power inside HBP period when timing allows
 */

#define BP_MIPI_DSI_VID_MODE_CFG_EN_LP_HBP      (7)      //!< Bit position for MIPI_DSI_VID_MODE_CFG_EN_LP_HBP.
#define BM_MIPI_DSI_VID_MODE_CFG_EN_LP_HBP      (0x00000080)  //!< Bit mask for MIPI_DSI_VID_MODE_CFG_EN_LP_HBP.

//! @brief Get value of MIPI_DSI_VID_MODE_CFG_EN_LP_HBP from a register value.
#define BG_MIPI_DSI_VID_MODE_CFG_EN_LP_HBP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VID_MODE_CFG_EN_LP_HBP) >> BP_MIPI_DSI_VID_MODE_CFG_EN_LP_HBP)

//! @brief Format value for bitfield MIPI_DSI_VID_MODE_CFG_EN_LP_HBP.
#define BF_MIPI_DSI_VID_MODE_CFG_EN_LP_HBP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VID_MODE_CFG_EN_LP_HBP) & BM_MIPI_DSI_VID_MODE_CFG_EN_LP_HBP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_LP_HBP field to a new value.
#define BW_MIPI_DSI_VID_MODE_CFG_EN_LP_HBP(v)   (HW_MIPI_DSI_VID_MODE_CFG_WR((HW_MIPI_DSI_VID_MODE_CFG_RD() & ~BM_MIPI_DSI_VID_MODE_CFG_EN_LP_HBP) | BF_MIPI_DSI_VID_MODE_CFG_EN_LP_HBP(v)))
#endif

/* --- Register HW_MIPI_DSI_VID_MODE_CFG, field EN_LP_HFP[8] (RW)
 *
 * Enables return to Low Power inside HFP period when timing allows
 */

#define BP_MIPI_DSI_VID_MODE_CFG_EN_LP_HFP      (8)      //!< Bit position for MIPI_DSI_VID_MODE_CFG_EN_LP_HFP.
#define BM_MIPI_DSI_VID_MODE_CFG_EN_LP_HFP      (0x00000100)  //!< Bit mask for MIPI_DSI_VID_MODE_CFG_EN_LP_HFP.

//! @brief Get value of MIPI_DSI_VID_MODE_CFG_EN_LP_HFP from a register value.
#define BG_MIPI_DSI_VID_MODE_CFG_EN_LP_HFP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VID_MODE_CFG_EN_LP_HFP) >> BP_MIPI_DSI_VID_MODE_CFG_EN_LP_HFP)

//! @brief Format value for bitfield MIPI_DSI_VID_MODE_CFG_EN_LP_HFP.
#define BF_MIPI_DSI_VID_MODE_CFG_EN_LP_HFP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VID_MODE_CFG_EN_LP_HFP) & BM_MIPI_DSI_VID_MODE_CFG_EN_LP_HFP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_LP_HFP field to a new value.
#define BW_MIPI_DSI_VID_MODE_CFG_EN_LP_HFP(v)   (HW_MIPI_DSI_VID_MODE_CFG_WR((HW_MIPI_DSI_VID_MODE_CFG_RD() & ~BM_MIPI_DSI_VID_MODE_CFG_EN_LP_HFP) | BF_MIPI_DSI_VID_MODE_CFG_EN_LP_HFP(v)))
#endif

/* --- Register HW_MIPI_DSI_VID_MODE_CFG, field EN_MULTI_PKT[9] (RW)
 *
 * Enables the tranmission of multi video packets in the HACT period
 */

#define BP_MIPI_DSI_VID_MODE_CFG_EN_MULTI_PKT      (9)      //!< Bit position for MIPI_DSI_VID_MODE_CFG_EN_MULTI_PKT.
#define BM_MIPI_DSI_VID_MODE_CFG_EN_MULTI_PKT      (0x00000200)  //!< Bit mask for MIPI_DSI_VID_MODE_CFG_EN_MULTI_PKT.

//! @brief Get value of MIPI_DSI_VID_MODE_CFG_EN_MULTI_PKT from a register value.
#define BG_MIPI_DSI_VID_MODE_CFG_EN_MULTI_PKT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VID_MODE_CFG_EN_MULTI_PKT) >> BP_MIPI_DSI_VID_MODE_CFG_EN_MULTI_PKT)

//! @brief Format value for bitfield MIPI_DSI_VID_MODE_CFG_EN_MULTI_PKT.
#define BF_MIPI_DSI_VID_MODE_CFG_EN_MULTI_PKT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VID_MODE_CFG_EN_MULTI_PKT) & BM_MIPI_DSI_VID_MODE_CFG_EN_MULTI_PKT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_MULTI_PKT field to a new value.
#define BW_MIPI_DSI_VID_MODE_CFG_EN_MULTI_PKT(v)   (HW_MIPI_DSI_VID_MODE_CFG_WR((HW_MIPI_DSI_VID_MODE_CFG_RD() & ~BM_MIPI_DSI_VID_MODE_CFG_EN_MULTI_PKT) | BF_MIPI_DSI_VID_MODE_CFG_EN_MULTI_PKT(v)))
#endif

/* --- Register HW_MIPI_DSI_VID_MODE_CFG, field EN_NULL_PKT[10] (RW)
 *
 * Enables the tranmission of null packets in the HACT period
 */

#define BP_MIPI_DSI_VID_MODE_CFG_EN_NULL_PKT      (10)      //!< Bit position for MIPI_DSI_VID_MODE_CFG_EN_NULL_PKT.
#define BM_MIPI_DSI_VID_MODE_CFG_EN_NULL_PKT      (0x00000400)  //!< Bit mask for MIPI_DSI_VID_MODE_CFG_EN_NULL_PKT.

//! @brief Get value of MIPI_DSI_VID_MODE_CFG_EN_NULL_PKT from a register value.
#define BG_MIPI_DSI_VID_MODE_CFG_EN_NULL_PKT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VID_MODE_CFG_EN_NULL_PKT) >> BP_MIPI_DSI_VID_MODE_CFG_EN_NULL_PKT)

//! @brief Format value for bitfield MIPI_DSI_VID_MODE_CFG_EN_NULL_PKT.
#define BF_MIPI_DSI_VID_MODE_CFG_EN_NULL_PKT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VID_MODE_CFG_EN_NULL_PKT) & BM_MIPI_DSI_VID_MODE_CFG_EN_NULL_PKT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_NULL_PKT field to a new value.
#define BW_MIPI_DSI_VID_MODE_CFG_EN_NULL_PKT(v)   (HW_MIPI_DSI_VID_MODE_CFG_WR((HW_MIPI_DSI_VID_MODE_CFG_RD() & ~BM_MIPI_DSI_VID_MODE_CFG_EN_NULL_PKT) | BF_MIPI_DSI_VID_MODE_CFG_EN_NULL_PKT(v)))
#endif

/* --- Register HW_MIPI_DSI_VID_MODE_CFG, field FRAME_BTA_ACK[11] (RW)
 *
 * Enables the request for an acknowledge response at the end of a frame
 */

#define BP_MIPI_DSI_VID_MODE_CFG_FRAME_BTA_ACK      (11)      //!< Bit position for MIPI_DSI_VID_MODE_CFG_FRAME_BTA_ACK.
#define BM_MIPI_DSI_VID_MODE_CFG_FRAME_BTA_ACK      (0x00000800)  //!< Bit mask for MIPI_DSI_VID_MODE_CFG_FRAME_BTA_ACK.

//! @brief Get value of MIPI_DSI_VID_MODE_CFG_FRAME_BTA_ACK from a register value.
#define BG_MIPI_DSI_VID_MODE_CFG_FRAME_BTA_ACK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VID_MODE_CFG_FRAME_BTA_ACK) >> BP_MIPI_DSI_VID_MODE_CFG_FRAME_BTA_ACK)

//! @brief Format value for bitfield MIPI_DSI_VID_MODE_CFG_FRAME_BTA_ACK.
#define BF_MIPI_DSI_VID_MODE_CFG_FRAME_BTA_ACK(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VID_MODE_CFG_FRAME_BTA_ACK) & BM_MIPI_DSI_VID_MODE_CFG_FRAME_BTA_ACK)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FRAME_BTA_ACK field to a new value.
#define BW_MIPI_DSI_VID_MODE_CFG_FRAME_BTA_ACK(v)   (HW_MIPI_DSI_VID_MODE_CFG_WR((HW_MIPI_DSI_VID_MODE_CFG_RD() & ~BM_MIPI_DSI_VID_MODE_CFG_FRAME_BTA_ACK) | BF_MIPI_DSI_VID_MODE_CFG_FRAME_BTA_ACK(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_VID_PKT_CFG - Video packet configuration
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_VID_PKT_CFG - Video packet configuration (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x20  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_vid_pkt_cfg
{
    reg32_t U;
    struct _hw_mipi_dsi_vid_pkt_cfg_bitfields
    {
        unsigned VID_PKT_SIZE : 11; //!< [10:0] Configures the number of pixel on a single video packet.
        unsigned NUM_CHUNKS : 10; //!< [20:11] Configures the number of chunks to be transmitted during a Line period.
        unsigned NULL_PKT_SIZE : 10; //!< [30:21] Configures the number of bytes in a null packet
        unsigned RESERVED0 : 1; //!< [31] Reserved
    } B;
} hw_mipi_dsi_vid_pkt_cfg_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_VID_PKT_CFG register
 */
#define HW_MIPI_DSI_VID_PKT_CFG_ADDR      (REGS_MIPI_DSI_BASE + 0x20)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_VID_PKT_CFG           (*(volatile hw_mipi_dsi_vid_pkt_cfg_t *) HW_MIPI_DSI_VID_PKT_CFG_ADDR)
#define HW_MIPI_DSI_VID_PKT_CFG_RD()      (HW_MIPI_DSI_VID_PKT_CFG.U)
#define HW_MIPI_DSI_VID_PKT_CFG_WR(v)     (HW_MIPI_DSI_VID_PKT_CFG.U = (v))
#define HW_MIPI_DSI_VID_PKT_CFG_SET(v)    (HW_MIPI_DSI_VID_PKT_CFG_WR(HW_MIPI_DSI_VID_PKT_CFG_RD() |  (v)))
#define HW_MIPI_DSI_VID_PKT_CFG_CLR(v)    (HW_MIPI_DSI_VID_PKT_CFG_WR(HW_MIPI_DSI_VID_PKT_CFG_RD() & ~(v)))
#define HW_MIPI_DSI_VID_PKT_CFG_TOG(v)    (HW_MIPI_DSI_VID_PKT_CFG_WR(HW_MIPI_DSI_VID_PKT_CFG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_VID_PKT_CFG bitfields
 */

/* --- Register HW_MIPI_DSI_VID_PKT_CFG, field VID_PKT_SIZE[10:0] (RW)
 *
 * Configures the number of pixel on a single video packet. (If using 18 bit mode and not enabling
 * loosely packet stream this value must be a multiple of 4)
 */

#define BP_MIPI_DSI_VID_PKT_CFG_VID_PKT_SIZE      (0)      //!< Bit position for MIPI_DSI_VID_PKT_CFG_VID_PKT_SIZE.
#define BM_MIPI_DSI_VID_PKT_CFG_VID_PKT_SIZE      (0x000007ff)  //!< Bit mask for MIPI_DSI_VID_PKT_CFG_VID_PKT_SIZE.

//! @brief Get value of MIPI_DSI_VID_PKT_CFG_VID_PKT_SIZE from a register value.
#define BG_MIPI_DSI_VID_PKT_CFG_VID_PKT_SIZE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VID_PKT_CFG_VID_PKT_SIZE) >> BP_MIPI_DSI_VID_PKT_CFG_VID_PKT_SIZE)

//! @brief Format value for bitfield MIPI_DSI_VID_PKT_CFG_VID_PKT_SIZE.
#define BF_MIPI_DSI_VID_PKT_CFG_VID_PKT_SIZE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VID_PKT_CFG_VID_PKT_SIZE) & BM_MIPI_DSI_VID_PKT_CFG_VID_PKT_SIZE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the VID_PKT_SIZE field to a new value.
#define BW_MIPI_DSI_VID_PKT_CFG_VID_PKT_SIZE(v)   (HW_MIPI_DSI_VID_PKT_CFG_WR((HW_MIPI_DSI_VID_PKT_CFG_RD() & ~BM_MIPI_DSI_VID_PKT_CFG_VID_PKT_SIZE) | BF_MIPI_DSI_VID_PKT_CFG_VID_PKT_SIZE(v)))
#endif

/* --- Register HW_MIPI_DSI_VID_PKT_CFG, field NUM_CHUNKS[20:11] (RW)
 *
 * Configures the number of chunks to be transmitted during a Line period. (A chunk is a video
 * packet or a null packet)
 */

#define BP_MIPI_DSI_VID_PKT_CFG_NUM_CHUNKS      (11)      //!< Bit position for MIPI_DSI_VID_PKT_CFG_NUM_CHUNKS.
#define BM_MIPI_DSI_VID_PKT_CFG_NUM_CHUNKS      (0x001ff800)  //!< Bit mask for MIPI_DSI_VID_PKT_CFG_NUM_CHUNKS.

//! @brief Get value of MIPI_DSI_VID_PKT_CFG_NUM_CHUNKS from a register value.
#define BG_MIPI_DSI_VID_PKT_CFG_NUM_CHUNKS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VID_PKT_CFG_NUM_CHUNKS) >> BP_MIPI_DSI_VID_PKT_CFG_NUM_CHUNKS)

//! @brief Format value for bitfield MIPI_DSI_VID_PKT_CFG_NUM_CHUNKS.
#define BF_MIPI_DSI_VID_PKT_CFG_NUM_CHUNKS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VID_PKT_CFG_NUM_CHUNKS) & BM_MIPI_DSI_VID_PKT_CFG_NUM_CHUNKS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the NUM_CHUNKS field to a new value.
#define BW_MIPI_DSI_VID_PKT_CFG_NUM_CHUNKS(v)   (HW_MIPI_DSI_VID_PKT_CFG_WR((HW_MIPI_DSI_VID_PKT_CFG_RD() & ~BM_MIPI_DSI_VID_PKT_CFG_NUM_CHUNKS) | BF_MIPI_DSI_VID_PKT_CFG_NUM_CHUNKS(v)))
#endif

/* --- Register HW_MIPI_DSI_VID_PKT_CFG, field NULL_PKT_SIZE[30:21] (RW)
 *
 * Configures the number of bytes in a null packet
 */

#define BP_MIPI_DSI_VID_PKT_CFG_NULL_PKT_SIZE      (21)      //!< Bit position for MIPI_DSI_VID_PKT_CFG_NULL_PKT_SIZE.
#define BM_MIPI_DSI_VID_PKT_CFG_NULL_PKT_SIZE      (0x7fe00000)  //!< Bit mask for MIPI_DSI_VID_PKT_CFG_NULL_PKT_SIZE.

//! @brief Get value of MIPI_DSI_VID_PKT_CFG_NULL_PKT_SIZE from a register value.
#define BG_MIPI_DSI_VID_PKT_CFG_NULL_PKT_SIZE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VID_PKT_CFG_NULL_PKT_SIZE) >> BP_MIPI_DSI_VID_PKT_CFG_NULL_PKT_SIZE)

//! @brief Format value for bitfield MIPI_DSI_VID_PKT_CFG_NULL_PKT_SIZE.
#define BF_MIPI_DSI_VID_PKT_CFG_NULL_PKT_SIZE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VID_PKT_CFG_NULL_PKT_SIZE) & BM_MIPI_DSI_VID_PKT_CFG_NULL_PKT_SIZE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the NULL_PKT_SIZE field to a new value.
#define BW_MIPI_DSI_VID_PKT_CFG_NULL_PKT_SIZE(v)   (HW_MIPI_DSI_VID_PKT_CFG_WR((HW_MIPI_DSI_VID_PKT_CFG_RD() & ~BM_MIPI_DSI_VID_PKT_CFG_NULL_PKT_SIZE) | BF_MIPI_DSI_VID_PKT_CFG_NULL_PKT_SIZE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_CMD_MODE_CFG - Command mode configuration
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_CMD_MODE_CFG - Command mode configuration (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x24  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_cmd_mode_cfg
{
    reg32_t U;
    struct _hw_mipi_dsi_cmd_mode_cfg_bitfields
    {
        unsigned EN_CMD_MODE : 1; //!< [0] Enables the Command Mode Protocol for transmissions.
        unsigned GEN_SW_0P_TX : 1; //!< [1] Configures the Generic Short Write Packet with 0 Parameters command transmission type.
        unsigned GEN_SW_1P_TX : 1; //!< [2] Configures the Generic Short Write Packet with 1 Parameters command transmission type.
        unsigned GEN_SW_2P_TX : 1; //!< [3] Configures the Generic Short Write Packet with 2 Parameters command transmission type.
        unsigned GEN_SR_0P_TX : 1; //!< [4] Configures the Generic Short Read Packet with 0 Parameters command transmission type.
        unsigned GEN_SR_1P_TX : 1; //!< [5] Configures the Generic Short Read Packet with 1 Parameters command transmission type.
        unsigned GEN_SR_2P_TX : 1; //!< [6] Configures the Generic Short Read Packet with 2 Parameters command transmission type.
        unsigned DCS_SW_0P_TX : 1; //!< [7] Configures the DCS Short Write Packet with 0 Parameters command transmission type.
        unsigned DCS_SW_1P_TX : 1; //!< [8] Configures the DCS Short Write Packet with 1 Parameters command transmission type.
        unsigned DCS_SW_2P_TX : 1; //!< [9] Configures the DCS Short Write Packet with 2 Parameters command transmission type.
        unsigned MAX_RD_PKT_SIZE : 1; //!< [10] Configures the Maximum Read Packet Size command transmission type.
        unsigned GEN_LW_TX : 1; //!< [11] Configures the Generic Long Write Packet command transmission type.
        unsigned DCS_LW_TX : 1; //!< [12] Configures the DCS Long Write Packet command transmission type.
        unsigned EN_ACK_RQST : 1; //!< [13] Enables the acknowledge request after each packet transmission
        unsigned EN_TEAR_FX : 1; //!< [14] Enables the tearing effect acknowledge request
        unsigned RESERVED0 : 17; //!< [31:15] Reserved
    } B;
} hw_mipi_dsi_cmd_mode_cfg_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_CMD_MODE_CFG register
 */
#define HW_MIPI_DSI_CMD_MODE_CFG_ADDR      (REGS_MIPI_DSI_BASE + 0x24)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_CMD_MODE_CFG           (*(volatile hw_mipi_dsi_cmd_mode_cfg_t *) HW_MIPI_DSI_CMD_MODE_CFG_ADDR)
#define HW_MIPI_DSI_CMD_MODE_CFG_RD()      (HW_MIPI_DSI_CMD_MODE_CFG.U)
#define HW_MIPI_DSI_CMD_MODE_CFG_WR(v)     (HW_MIPI_DSI_CMD_MODE_CFG.U = (v))
#define HW_MIPI_DSI_CMD_MODE_CFG_SET(v)    (HW_MIPI_DSI_CMD_MODE_CFG_WR(HW_MIPI_DSI_CMD_MODE_CFG_RD() |  (v)))
#define HW_MIPI_DSI_CMD_MODE_CFG_CLR(v)    (HW_MIPI_DSI_CMD_MODE_CFG_WR(HW_MIPI_DSI_CMD_MODE_CFG_RD() & ~(v)))
#define HW_MIPI_DSI_CMD_MODE_CFG_TOG(v)    (HW_MIPI_DSI_CMD_MODE_CFG_WR(HW_MIPI_DSI_CMD_MODE_CFG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_CMD_MODE_CFG bitfields
 */

/* --- Register HW_MIPI_DSI_CMD_MODE_CFG, field EN_CMD_MODE[0] (RW)
 *
 * Enables the Command Mode Protocol for transmissions.
 */

#define BP_MIPI_DSI_CMD_MODE_CFG_EN_CMD_MODE      (0)      //!< Bit position for MIPI_DSI_CMD_MODE_CFG_EN_CMD_MODE.
#define BM_MIPI_DSI_CMD_MODE_CFG_EN_CMD_MODE      (0x00000001)  //!< Bit mask for MIPI_DSI_CMD_MODE_CFG_EN_CMD_MODE.

//! @brief Get value of MIPI_DSI_CMD_MODE_CFG_EN_CMD_MODE from a register value.
#define BG_MIPI_DSI_CMD_MODE_CFG_EN_CMD_MODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_MODE_CFG_EN_CMD_MODE) >> BP_MIPI_DSI_CMD_MODE_CFG_EN_CMD_MODE)

//! @brief Format value for bitfield MIPI_DSI_CMD_MODE_CFG_EN_CMD_MODE.
#define BF_MIPI_DSI_CMD_MODE_CFG_EN_CMD_MODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_MODE_CFG_EN_CMD_MODE) & BM_MIPI_DSI_CMD_MODE_CFG_EN_CMD_MODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_CMD_MODE field to a new value.
#define BW_MIPI_DSI_CMD_MODE_CFG_EN_CMD_MODE(v)   (HW_MIPI_DSI_CMD_MODE_CFG_WR((HW_MIPI_DSI_CMD_MODE_CFG_RD() & ~BM_MIPI_DSI_CMD_MODE_CFG_EN_CMD_MODE) | BF_MIPI_DSI_CMD_MODE_CFG_EN_CMD_MODE(v)))
#endif

/* --- Register HW_MIPI_DSI_CMD_MODE_CFG, field GEN_SW_0P_TX[1] (RW)
 *
 * Configures the Generic Short Write Packet with 0 Parameters command transmission type.
 *
 * Values:
 * 0 - High Speed;
 * 1 - Low Power
 */

#define BP_MIPI_DSI_CMD_MODE_CFG_GEN_SW_0P_TX      (1)      //!< Bit position for MIPI_DSI_CMD_MODE_CFG_GEN_SW_0P_TX.
#define BM_MIPI_DSI_CMD_MODE_CFG_GEN_SW_0P_TX      (0x00000002)  //!< Bit mask for MIPI_DSI_CMD_MODE_CFG_GEN_SW_0P_TX.

//! @brief Get value of MIPI_DSI_CMD_MODE_CFG_GEN_SW_0P_TX from a register value.
#define BG_MIPI_DSI_CMD_MODE_CFG_GEN_SW_0P_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_MODE_CFG_GEN_SW_0P_TX) >> BP_MIPI_DSI_CMD_MODE_CFG_GEN_SW_0P_TX)

//! @brief Format value for bitfield MIPI_DSI_CMD_MODE_CFG_GEN_SW_0P_TX.
#define BF_MIPI_DSI_CMD_MODE_CFG_GEN_SW_0P_TX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_MODE_CFG_GEN_SW_0P_TX) & BM_MIPI_DSI_CMD_MODE_CFG_GEN_SW_0P_TX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_SW_0P_TX field to a new value.
#define BW_MIPI_DSI_CMD_MODE_CFG_GEN_SW_0P_TX(v)   (HW_MIPI_DSI_CMD_MODE_CFG_WR((HW_MIPI_DSI_CMD_MODE_CFG_RD() & ~BM_MIPI_DSI_CMD_MODE_CFG_GEN_SW_0P_TX) | BF_MIPI_DSI_CMD_MODE_CFG_GEN_SW_0P_TX(v)))
#endif


/* --- Register HW_MIPI_DSI_CMD_MODE_CFG, field GEN_SW_1P_TX[2] (RW)
 *
 * Configures the Generic Short Write Packet with 1 Parameters command transmission type.
 *
 * Values:
 * 0 - High Speed;
 * 1 - Low Power
 */

#define BP_MIPI_DSI_CMD_MODE_CFG_GEN_SW_1P_TX      (2)      //!< Bit position for MIPI_DSI_CMD_MODE_CFG_GEN_SW_1P_TX.
#define BM_MIPI_DSI_CMD_MODE_CFG_GEN_SW_1P_TX      (0x00000004)  //!< Bit mask for MIPI_DSI_CMD_MODE_CFG_GEN_SW_1P_TX.

//! @brief Get value of MIPI_DSI_CMD_MODE_CFG_GEN_SW_1P_TX from a register value.
#define BG_MIPI_DSI_CMD_MODE_CFG_GEN_SW_1P_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_MODE_CFG_GEN_SW_1P_TX) >> BP_MIPI_DSI_CMD_MODE_CFG_GEN_SW_1P_TX)

//! @brief Format value for bitfield MIPI_DSI_CMD_MODE_CFG_GEN_SW_1P_TX.
#define BF_MIPI_DSI_CMD_MODE_CFG_GEN_SW_1P_TX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_MODE_CFG_GEN_SW_1P_TX) & BM_MIPI_DSI_CMD_MODE_CFG_GEN_SW_1P_TX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_SW_1P_TX field to a new value.
#define BW_MIPI_DSI_CMD_MODE_CFG_GEN_SW_1P_TX(v)   (HW_MIPI_DSI_CMD_MODE_CFG_WR((HW_MIPI_DSI_CMD_MODE_CFG_RD() & ~BM_MIPI_DSI_CMD_MODE_CFG_GEN_SW_1P_TX) | BF_MIPI_DSI_CMD_MODE_CFG_GEN_SW_1P_TX(v)))
#endif


/* --- Register HW_MIPI_DSI_CMD_MODE_CFG, field GEN_SW_2P_TX[3] (RW)
 *
 * Configures the Generic Short Write Packet with 2 Parameters command transmission type.
 *
 * Values:
 * 0 - High Speed;
 * 1 - Low Power
 */

#define BP_MIPI_DSI_CMD_MODE_CFG_GEN_SW_2P_TX      (3)      //!< Bit position for MIPI_DSI_CMD_MODE_CFG_GEN_SW_2P_TX.
#define BM_MIPI_DSI_CMD_MODE_CFG_GEN_SW_2P_TX      (0x00000008)  //!< Bit mask for MIPI_DSI_CMD_MODE_CFG_GEN_SW_2P_TX.

//! @brief Get value of MIPI_DSI_CMD_MODE_CFG_GEN_SW_2P_TX from a register value.
#define BG_MIPI_DSI_CMD_MODE_CFG_GEN_SW_2P_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_MODE_CFG_GEN_SW_2P_TX) >> BP_MIPI_DSI_CMD_MODE_CFG_GEN_SW_2P_TX)

//! @brief Format value for bitfield MIPI_DSI_CMD_MODE_CFG_GEN_SW_2P_TX.
#define BF_MIPI_DSI_CMD_MODE_CFG_GEN_SW_2P_TX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_MODE_CFG_GEN_SW_2P_TX) & BM_MIPI_DSI_CMD_MODE_CFG_GEN_SW_2P_TX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_SW_2P_TX field to a new value.
#define BW_MIPI_DSI_CMD_MODE_CFG_GEN_SW_2P_TX(v)   (HW_MIPI_DSI_CMD_MODE_CFG_WR((HW_MIPI_DSI_CMD_MODE_CFG_RD() & ~BM_MIPI_DSI_CMD_MODE_CFG_GEN_SW_2P_TX) | BF_MIPI_DSI_CMD_MODE_CFG_GEN_SW_2P_TX(v)))
#endif


/* --- Register HW_MIPI_DSI_CMD_MODE_CFG, field GEN_SR_0P_TX[4] (RW)
 *
 * Configures the Generic Short Read Packet with 0 Parameters command transmission type.
 *
 * Values:
 * 0 - High Speed;
 * 1 - Low Power
 */

#define BP_MIPI_DSI_CMD_MODE_CFG_GEN_SR_0P_TX      (4)      //!< Bit position for MIPI_DSI_CMD_MODE_CFG_GEN_SR_0P_TX.
#define BM_MIPI_DSI_CMD_MODE_CFG_GEN_SR_0P_TX      (0x00000010)  //!< Bit mask for MIPI_DSI_CMD_MODE_CFG_GEN_SR_0P_TX.

//! @brief Get value of MIPI_DSI_CMD_MODE_CFG_GEN_SR_0P_TX from a register value.
#define BG_MIPI_DSI_CMD_MODE_CFG_GEN_SR_0P_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_MODE_CFG_GEN_SR_0P_TX) >> BP_MIPI_DSI_CMD_MODE_CFG_GEN_SR_0P_TX)

//! @brief Format value for bitfield MIPI_DSI_CMD_MODE_CFG_GEN_SR_0P_TX.
#define BF_MIPI_DSI_CMD_MODE_CFG_GEN_SR_0P_TX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_MODE_CFG_GEN_SR_0P_TX) & BM_MIPI_DSI_CMD_MODE_CFG_GEN_SR_0P_TX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_SR_0P_TX field to a new value.
#define BW_MIPI_DSI_CMD_MODE_CFG_GEN_SR_0P_TX(v)   (HW_MIPI_DSI_CMD_MODE_CFG_WR((HW_MIPI_DSI_CMD_MODE_CFG_RD() & ~BM_MIPI_DSI_CMD_MODE_CFG_GEN_SR_0P_TX) | BF_MIPI_DSI_CMD_MODE_CFG_GEN_SR_0P_TX(v)))
#endif


/* --- Register HW_MIPI_DSI_CMD_MODE_CFG, field GEN_SR_1P_TX[5] (RW)
 *
 * Configures the Generic Short Read Packet with 1 Parameters command transmission type.
 *
 * Values:
 * 0 - High Speed;
 * 1 - Low Power
 */

#define BP_MIPI_DSI_CMD_MODE_CFG_GEN_SR_1P_TX      (5)      //!< Bit position for MIPI_DSI_CMD_MODE_CFG_GEN_SR_1P_TX.
#define BM_MIPI_DSI_CMD_MODE_CFG_GEN_SR_1P_TX      (0x00000020)  //!< Bit mask for MIPI_DSI_CMD_MODE_CFG_GEN_SR_1P_TX.

//! @brief Get value of MIPI_DSI_CMD_MODE_CFG_GEN_SR_1P_TX from a register value.
#define BG_MIPI_DSI_CMD_MODE_CFG_GEN_SR_1P_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_MODE_CFG_GEN_SR_1P_TX) >> BP_MIPI_DSI_CMD_MODE_CFG_GEN_SR_1P_TX)

//! @brief Format value for bitfield MIPI_DSI_CMD_MODE_CFG_GEN_SR_1P_TX.
#define BF_MIPI_DSI_CMD_MODE_CFG_GEN_SR_1P_TX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_MODE_CFG_GEN_SR_1P_TX) & BM_MIPI_DSI_CMD_MODE_CFG_GEN_SR_1P_TX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_SR_1P_TX field to a new value.
#define BW_MIPI_DSI_CMD_MODE_CFG_GEN_SR_1P_TX(v)   (HW_MIPI_DSI_CMD_MODE_CFG_WR((HW_MIPI_DSI_CMD_MODE_CFG_RD() & ~BM_MIPI_DSI_CMD_MODE_CFG_GEN_SR_1P_TX) | BF_MIPI_DSI_CMD_MODE_CFG_GEN_SR_1P_TX(v)))
#endif


/* --- Register HW_MIPI_DSI_CMD_MODE_CFG, field GEN_SR_2P_TX[6] (RW)
 *
 * Configures the Generic Short Read Packet with 2 Parameters command transmission type.
 *
 * Values:
 * 0 - High Speed;
 * 1 - Low Power
 */

#define BP_MIPI_DSI_CMD_MODE_CFG_GEN_SR_2P_TX      (6)      //!< Bit position for MIPI_DSI_CMD_MODE_CFG_GEN_SR_2P_TX.
#define BM_MIPI_DSI_CMD_MODE_CFG_GEN_SR_2P_TX      (0x00000040)  //!< Bit mask for MIPI_DSI_CMD_MODE_CFG_GEN_SR_2P_TX.

//! @brief Get value of MIPI_DSI_CMD_MODE_CFG_GEN_SR_2P_TX from a register value.
#define BG_MIPI_DSI_CMD_MODE_CFG_GEN_SR_2P_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_MODE_CFG_GEN_SR_2P_TX) >> BP_MIPI_DSI_CMD_MODE_CFG_GEN_SR_2P_TX)

//! @brief Format value for bitfield MIPI_DSI_CMD_MODE_CFG_GEN_SR_2P_TX.
#define BF_MIPI_DSI_CMD_MODE_CFG_GEN_SR_2P_TX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_MODE_CFG_GEN_SR_2P_TX) & BM_MIPI_DSI_CMD_MODE_CFG_GEN_SR_2P_TX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_SR_2P_TX field to a new value.
#define BW_MIPI_DSI_CMD_MODE_CFG_GEN_SR_2P_TX(v)   (HW_MIPI_DSI_CMD_MODE_CFG_WR((HW_MIPI_DSI_CMD_MODE_CFG_RD() & ~BM_MIPI_DSI_CMD_MODE_CFG_GEN_SR_2P_TX) | BF_MIPI_DSI_CMD_MODE_CFG_GEN_SR_2P_TX(v)))
#endif


/* --- Register HW_MIPI_DSI_CMD_MODE_CFG, field DCS_SW_0P_TX[7] (RW)
 *
 * Configures the DCS Short Write Packet with 0 Parameters command transmission type.
 *
 * Values:
 * 0 - High Speed;
 * 1 - Low Power
 */

#define BP_MIPI_DSI_CMD_MODE_CFG_DCS_SW_0P_TX      (7)      //!< Bit position for MIPI_DSI_CMD_MODE_CFG_DCS_SW_0P_TX.
#define BM_MIPI_DSI_CMD_MODE_CFG_DCS_SW_0P_TX      (0x00000080)  //!< Bit mask for MIPI_DSI_CMD_MODE_CFG_DCS_SW_0P_TX.

//! @brief Get value of MIPI_DSI_CMD_MODE_CFG_DCS_SW_0P_TX from a register value.
#define BG_MIPI_DSI_CMD_MODE_CFG_DCS_SW_0P_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_MODE_CFG_DCS_SW_0P_TX) >> BP_MIPI_DSI_CMD_MODE_CFG_DCS_SW_0P_TX)

//! @brief Format value for bitfield MIPI_DSI_CMD_MODE_CFG_DCS_SW_0P_TX.
#define BF_MIPI_DSI_CMD_MODE_CFG_DCS_SW_0P_TX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_MODE_CFG_DCS_SW_0P_TX) & BM_MIPI_DSI_CMD_MODE_CFG_DCS_SW_0P_TX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DCS_SW_0P_TX field to a new value.
#define BW_MIPI_DSI_CMD_MODE_CFG_DCS_SW_0P_TX(v)   (HW_MIPI_DSI_CMD_MODE_CFG_WR((HW_MIPI_DSI_CMD_MODE_CFG_RD() & ~BM_MIPI_DSI_CMD_MODE_CFG_DCS_SW_0P_TX) | BF_MIPI_DSI_CMD_MODE_CFG_DCS_SW_0P_TX(v)))
#endif


/* --- Register HW_MIPI_DSI_CMD_MODE_CFG, field DCS_SW_1P_TX[8] (RW)
 *
 * Configures the DCS Short Write Packet with 1 Parameters command transmission type.
 *
 * Values:
 * 0 - High Speed;
 * 1 - Low Power
 */

#define BP_MIPI_DSI_CMD_MODE_CFG_DCS_SW_1P_TX      (8)      //!< Bit position for MIPI_DSI_CMD_MODE_CFG_DCS_SW_1P_TX.
#define BM_MIPI_DSI_CMD_MODE_CFG_DCS_SW_1P_TX      (0x00000100)  //!< Bit mask for MIPI_DSI_CMD_MODE_CFG_DCS_SW_1P_TX.

//! @brief Get value of MIPI_DSI_CMD_MODE_CFG_DCS_SW_1P_TX from a register value.
#define BG_MIPI_DSI_CMD_MODE_CFG_DCS_SW_1P_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_MODE_CFG_DCS_SW_1P_TX) >> BP_MIPI_DSI_CMD_MODE_CFG_DCS_SW_1P_TX)

//! @brief Format value for bitfield MIPI_DSI_CMD_MODE_CFG_DCS_SW_1P_TX.
#define BF_MIPI_DSI_CMD_MODE_CFG_DCS_SW_1P_TX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_MODE_CFG_DCS_SW_1P_TX) & BM_MIPI_DSI_CMD_MODE_CFG_DCS_SW_1P_TX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DCS_SW_1P_TX field to a new value.
#define BW_MIPI_DSI_CMD_MODE_CFG_DCS_SW_1P_TX(v)   (HW_MIPI_DSI_CMD_MODE_CFG_WR((HW_MIPI_DSI_CMD_MODE_CFG_RD() & ~BM_MIPI_DSI_CMD_MODE_CFG_DCS_SW_1P_TX) | BF_MIPI_DSI_CMD_MODE_CFG_DCS_SW_1P_TX(v)))
#endif


/* --- Register HW_MIPI_DSI_CMD_MODE_CFG, field DCS_SW_2P_TX[9] (RW)
 *
 * Configures the DCS Short Write Packet with 2 Parameters command transmission type.
 *
 * Values:
 * 0 - High Speed;
 * 1 - Low Power
 */

#define BP_MIPI_DSI_CMD_MODE_CFG_DCS_SW_2P_TX      (9)      //!< Bit position for MIPI_DSI_CMD_MODE_CFG_DCS_SW_2P_TX.
#define BM_MIPI_DSI_CMD_MODE_CFG_DCS_SW_2P_TX      (0x00000200)  //!< Bit mask for MIPI_DSI_CMD_MODE_CFG_DCS_SW_2P_TX.

//! @brief Get value of MIPI_DSI_CMD_MODE_CFG_DCS_SW_2P_TX from a register value.
#define BG_MIPI_DSI_CMD_MODE_CFG_DCS_SW_2P_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_MODE_CFG_DCS_SW_2P_TX) >> BP_MIPI_DSI_CMD_MODE_CFG_DCS_SW_2P_TX)

//! @brief Format value for bitfield MIPI_DSI_CMD_MODE_CFG_DCS_SW_2P_TX.
#define BF_MIPI_DSI_CMD_MODE_CFG_DCS_SW_2P_TX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_MODE_CFG_DCS_SW_2P_TX) & BM_MIPI_DSI_CMD_MODE_CFG_DCS_SW_2P_TX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DCS_SW_2P_TX field to a new value.
#define BW_MIPI_DSI_CMD_MODE_CFG_DCS_SW_2P_TX(v)   (HW_MIPI_DSI_CMD_MODE_CFG_WR((HW_MIPI_DSI_CMD_MODE_CFG_RD() & ~BM_MIPI_DSI_CMD_MODE_CFG_DCS_SW_2P_TX) | BF_MIPI_DSI_CMD_MODE_CFG_DCS_SW_2P_TX(v)))
#endif


/* --- Register HW_MIPI_DSI_CMD_MODE_CFG, field MAX_RD_PKT_SIZE[10] (RW)
 *
 * Configures the Maximum Read Packet Size command transmission type.
 *
 * Values:
 * 0 - High Speed;
 * 1 - Low Power
 */

#define BP_MIPI_DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE      (10)      //!< Bit position for MIPI_DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE.
#define BM_MIPI_DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE      (0x00000400)  //!< Bit mask for MIPI_DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE.

//! @brief Get value of MIPI_DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE from a register value.
#define BG_MIPI_DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE) >> BP_MIPI_DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE)

//! @brief Format value for bitfield MIPI_DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE.
#define BF_MIPI_DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE) & BM_MIPI_DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MAX_RD_PKT_SIZE field to a new value.
#define BW_MIPI_DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE(v)   (HW_MIPI_DSI_CMD_MODE_CFG_WR((HW_MIPI_DSI_CMD_MODE_CFG_RD() & ~BM_MIPI_DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE) | BF_MIPI_DSI_CMD_MODE_CFG_MAX_RD_PKT_SIZE(v)))
#endif


/* --- Register HW_MIPI_DSI_CMD_MODE_CFG, field GEN_LW_TX[11] (RW)
 *
 * Configures the Generic Long Write Packet command transmission type.
 *
 * Values:
 * 0 - High Speed;
 * 1 - Low Power
 */

#define BP_MIPI_DSI_CMD_MODE_CFG_GEN_LW_TX      (11)      //!< Bit position for MIPI_DSI_CMD_MODE_CFG_GEN_LW_TX.
#define BM_MIPI_DSI_CMD_MODE_CFG_GEN_LW_TX      (0x00000800)  //!< Bit mask for MIPI_DSI_CMD_MODE_CFG_GEN_LW_TX.

//! @brief Get value of MIPI_DSI_CMD_MODE_CFG_GEN_LW_TX from a register value.
#define BG_MIPI_DSI_CMD_MODE_CFG_GEN_LW_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_MODE_CFG_GEN_LW_TX) >> BP_MIPI_DSI_CMD_MODE_CFG_GEN_LW_TX)

//! @brief Format value for bitfield MIPI_DSI_CMD_MODE_CFG_GEN_LW_TX.
#define BF_MIPI_DSI_CMD_MODE_CFG_GEN_LW_TX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_MODE_CFG_GEN_LW_TX) & BM_MIPI_DSI_CMD_MODE_CFG_GEN_LW_TX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_LW_TX field to a new value.
#define BW_MIPI_DSI_CMD_MODE_CFG_GEN_LW_TX(v)   (HW_MIPI_DSI_CMD_MODE_CFG_WR((HW_MIPI_DSI_CMD_MODE_CFG_RD() & ~BM_MIPI_DSI_CMD_MODE_CFG_GEN_LW_TX) | BF_MIPI_DSI_CMD_MODE_CFG_GEN_LW_TX(v)))
#endif


/* --- Register HW_MIPI_DSI_CMD_MODE_CFG, field DCS_LW_TX[12] (RW)
 *
 * Configures the DCS Long Write Packet command transmission type.
 *
 * Values:
 * 0 - High Speed;
 * 1 - Low Power
 */

#define BP_MIPI_DSI_CMD_MODE_CFG_DCS_LW_TX      (12)      //!< Bit position for MIPI_DSI_CMD_MODE_CFG_DCS_LW_TX.
#define BM_MIPI_DSI_CMD_MODE_CFG_DCS_LW_TX      (0x00001000)  //!< Bit mask for MIPI_DSI_CMD_MODE_CFG_DCS_LW_TX.

//! @brief Get value of MIPI_DSI_CMD_MODE_CFG_DCS_LW_TX from a register value.
#define BG_MIPI_DSI_CMD_MODE_CFG_DCS_LW_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_MODE_CFG_DCS_LW_TX) >> BP_MIPI_DSI_CMD_MODE_CFG_DCS_LW_TX)

//! @brief Format value for bitfield MIPI_DSI_CMD_MODE_CFG_DCS_LW_TX.
#define BF_MIPI_DSI_CMD_MODE_CFG_DCS_LW_TX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_MODE_CFG_DCS_LW_TX) & BM_MIPI_DSI_CMD_MODE_CFG_DCS_LW_TX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DCS_LW_TX field to a new value.
#define BW_MIPI_DSI_CMD_MODE_CFG_DCS_LW_TX(v)   (HW_MIPI_DSI_CMD_MODE_CFG_WR((HW_MIPI_DSI_CMD_MODE_CFG_RD() & ~BM_MIPI_DSI_CMD_MODE_CFG_DCS_LW_TX) | BF_MIPI_DSI_CMD_MODE_CFG_DCS_LW_TX(v)))
#endif


/* --- Register HW_MIPI_DSI_CMD_MODE_CFG, field EN_ACK_RQST[13] (RW)
 *
 * Enables the acknowledge request after each packet transmission
 */

#define BP_MIPI_DSI_CMD_MODE_CFG_EN_ACK_RQST      (13)      //!< Bit position for MIPI_DSI_CMD_MODE_CFG_EN_ACK_RQST.
#define BM_MIPI_DSI_CMD_MODE_CFG_EN_ACK_RQST      (0x00002000)  //!< Bit mask for MIPI_DSI_CMD_MODE_CFG_EN_ACK_RQST.

//! @brief Get value of MIPI_DSI_CMD_MODE_CFG_EN_ACK_RQST from a register value.
#define BG_MIPI_DSI_CMD_MODE_CFG_EN_ACK_RQST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_MODE_CFG_EN_ACK_RQST) >> BP_MIPI_DSI_CMD_MODE_CFG_EN_ACK_RQST)

//! @brief Format value for bitfield MIPI_DSI_CMD_MODE_CFG_EN_ACK_RQST.
#define BF_MIPI_DSI_CMD_MODE_CFG_EN_ACK_RQST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_MODE_CFG_EN_ACK_RQST) & BM_MIPI_DSI_CMD_MODE_CFG_EN_ACK_RQST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_ACK_RQST field to a new value.
#define BW_MIPI_DSI_CMD_MODE_CFG_EN_ACK_RQST(v)   (HW_MIPI_DSI_CMD_MODE_CFG_WR((HW_MIPI_DSI_CMD_MODE_CFG_RD() & ~BM_MIPI_DSI_CMD_MODE_CFG_EN_ACK_RQST) | BF_MIPI_DSI_CMD_MODE_CFG_EN_ACK_RQST(v)))
#endif

/* --- Register HW_MIPI_DSI_CMD_MODE_CFG, field EN_TEAR_FX[14] (RW)
 *
 * Enables the tearing effect acknowledge request
 */

#define BP_MIPI_DSI_CMD_MODE_CFG_EN_TEAR_FX      (14)      //!< Bit position for MIPI_DSI_CMD_MODE_CFG_EN_TEAR_FX.
#define BM_MIPI_DSI_CMD_MODE_CFG_EN_TEAR_FX      (0x00004000)  //!< Bit mask for MIPI_DSI_CMD_MODE_CFG_EN_TEAR_FX.

//! @brief Get value of MIPI_DSI_CMD_MODE_CFG_EN_TEAR_FX from a register value.
#define BG_MIPI_DSI_CMD_MODE_CFG_EN_TEAR_FX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_MODE_CFG_EN_TEAR_FX) >> BP_MIPI_DSI_CMD_MODE_CFG_EN_TEAR_FX)

//! @brief Format value for bitfield MIPI_DSI_CMD_MODE_CFG_EN_TEAR_FX.
#define BF_MIPI_DSI_CMD_MODE_CFG_EN_TEAR_FX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_MODE_CFG_EN_TEAR_FX) & BM_MIPI_DSI_CMD_MODE_CFG_EN_TEAR_FX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN_TEAR_FX field to a new value.
#define BW_MIPI_DSI_CMD_MODE_CFG_EN_TEAR_FX(v)   (HW_MIPI_DSI_CMD_MODE_CFG_WR((HW_MIPI_DSI_CMD_MODE_CFG_RD() & ~BM_MIPI_DSI_CMD_MODE_CFG_EN_TEAR_FX) | BF_MIPI_DSI_CMD_MODE_CFG_EN_TEAR_FX(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_TMR_LINE_CFG - Line timer configuration
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_TMR_LINE_CFG - Line timer configuration (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x28  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_tmr_line_cfg
{
    reg32_t U;
    struct _hw_mipi_dsi_tmr_line_cfg_bitfields
    {
        unsigned HSA_TIME : 9; //!< [8:0] Configures the Horizontal Synchronism Active period in lane byte clock cycles
        unsigned HBP_TIME : 9; //!< [17:9] Configures the Horizontal Back Porch period in lane byte clock cycles
        unsigned HLINE_TIME : 14; //!< [31:18] Configures the size of the total line counted in lane byte cycles
    } B;
} hw_mipi_dsi_tmr_line_cfg_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_TMR_LINE_CFG register
 */
#define HW_MIPI_DSI_TMR_LINE_CFG_ADDR      (REGS_MIPI_DSI_BASE + 0x28)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_TMR_LINE_CFG           (*(volatile hw_mipi_dsi_tmr_line_cfg_t *) HW_MIPI_DSI_TMR_LINE_CFG_ADDR)
#define HW_MIPI_DSI_TMR_LINE_CFG_RD()      (HW_MIPI_DSI_TMR_LINE_CFG.U)
#define HW_MIPI_DSI_TMR_LINE_CFG_WR(v)     (HW_MIPI_DSI_TMR_LINE_CFG.U = (v))
#define HW_MIPI_DSI_TMR_LINE_CFG_SET(v)    (HW_MIPI_DSI_TMR_LINE_CFG_WR(HW_MIPI_DSI_TMR_LINE_CFG_RD() |  (v)))
#define HW_MIPI_DSI_TMR_LINE_CFG_CLR(v)    (HW_MIPI_DSI_TMR_LINE_CFG_WR(HW_MIPI_DSI_TMR_LINE_CFG_RD() & ~(v)))
#define HW_MIPI_DSI_TMR_LINE_CFG_TOG(v)    (HW_MIPI_DSI_TMR_LINE_CFG_WR(HW_MIPI_DSI_TMR_LINE_CFG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_TMR_LINE_CFG bitfields
 */

/* --- Register HW_MIPI_DSI_TMR_LINE_CFG, field HSA_TIME[8:0] (RW)
 *
 * Configures the Horizontal Synchronism Active period in lane byte clock cycles
 */

#define BP_MIPI_DSI_TMR_LINE_CFG_HSA_TIME      (0)      //!< Bit position for MIPI_DSI_TMR_LINE_CFG_HSA_TIME.
#define BM_MIPI_DSI_TMR_LINE_CFG_HSA_TIME      (0x000001ff)  //!< Bit mask for MIPI_DSI_TMR_LINE_CFG_HSA_TIME.

//! @brief Get value of MIPI_DSI_TMR_LINE_CFG_HSA_TIME from a register value.
#define BG_MIPI_DSI_TMR_LINE_CFG_HSA_TIME(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_TMR_LINE_CFG_HSA_TIME) >> BP_MIPI_DSI_TMR_LINE_CFG_HSA_TIME)

//! @brief Format value for bitfield MIPI_DSI_TMR_LINE_CFG_HSA_TIME.
#define BF_MIPI_DSI_TMR_LINE_CFG_HSA_TIME(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_TMR_LINE_CFG_HSA_TIME) & BM_MIPI_DSI_TMR_LINE_CFG_HSA_TIME)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HSA_TIME field to a new value.
#define BW_MIPI_DSI_TMR_LINE_CFG_HSA_TIME(v)   (HW_MIPI_DSI_TMR_LINE_CFG_WR((HW_MIPI_DSI_TMR_LINE_CFG_RD() & ~BM_MIPI_DSI_TMR_LINE_CFG_HSA_TIME) | BF_MIPI_DSI_TMR_LINE_CFG_HSA_TIME(v)))
#endif

/* --- Register HW_MIPI_DSI_TMR_LINE_CFG, field HBP_TIME[17:9] (RW)
 *
 * Configures the Horizontal Back Porch period in lane byte clock cycles
 */

#define BP_MIPI_DSI_TMR_LINE_CFG_HBP_TIME      (9)      //!< Bit position for MIPI_DSI_TMR_LINE_CFG_HBP_TIME.
#define BM_MIPI_DSI_TMR_LINE_CFG_HBP_TIME      (0x0003fe00)  //!< Bit mask for MIPI_DSI_TMR_LINE_CFG_HBP_TIME.

//! @brief Get value of MIPI_DSI_TMR_LINE_CFG_HBP_TIME from a register value.
#define BG_MIPI_DSI_TMR_LINE_CFG_HBP_TIME(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_TMR_LINE_CFG_HBP_TIME) >> BP_MIPI_DSI_TMR_LINE_CFG_HBP_TIME)

//! @brief Format value for bitfield MIPI_DSI_TMR_LINE_CFG_HBP_TIME.
#define BF_MIPI_DSI_TMR_LINE_CFG_HBP_TIME(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_TMR_LINE_CFG_HBP_TIME) & BM_MIPI_DSI_TMR_LINE_CFG_HBP_TIME)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HBP_TIME field to a new value.
#define BW_MIPI_DSI_TMR_LINE_CFG_HBP_TIME(v)   (HW_MIPI_DSI_TMR_LINE_CFG_WR((HW_MIPI_DSI_TMR_LINE_CFG_RD() & ~BM_MIPI_DSI_TMR_LINE_CFG_HBP_TIME) | BF_MIPI_DSI_TMR_LINE_CFG_HBP_TIME(v)))
#endif

/* --- Register HW_MIPI_DSI_TMR_LINE_CFG, field HLINE_TIME[31:18] (RW)
 *
 * Configures the size of the total line counted in lane byte cycles
 */

#define BP_MIPI_DSI_TMR_LINE_CFG_HLINE_TIME      (18)      //!< Bit position for MIPI_DSI_TMR_LINE_CFG_HLINE_TIME.
#define BM_MIPI_DSI_TMR_LINE_CFG_HLINE_TIME      (0xfffc0000)  //!< Bit mask for MIPI_DSI_TMR_LINE_CFG_HLINE_TIME.

//! @brief Get value of MIPI_DSI_TMR_LINE_CFG_HLINE_TIME from a register value.
#define BG_MIPI_DSI_TMR_LINE_CFG_HLINE_TIME(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_TMR_LINE_CFG_HLINE_TIME) >> BP_MIPI_DSI_TMR_LINE_CFG_HLINE_TIME)

//! @brief Format value for bitfield MIPI_DSI_TMR_LINE_CFG_HLINE_TIME.
#define BF_MIPI_DSI_TMR_LINE_CFG_HLINE_TIME(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_TMR_LINE_CFG_HLINE_TIME) & BM_MIPI_DSI_TMR_LINE_CFG_HLINE_TIME)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HLINE_TIME field to a new value.
#define BW_MIPI_DSI_TMR_LINE_CFG_HLINE_TIME(v)   (HW_MIPI_DSI_TMR_LINE_CFG_WR((HW_MIPI_DSI_TMR_LINE_CFG_RD() & ~BM_MIPI_DSI_TMR_LINE_CFG_HLINE_TIME) | BF_MIPI_DSI_TMR_LINE_CFG_HLINE_TIME(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_VTIMING_CFG - Vertical timing configuration
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_VTIMING_CFG - Vertical timing configuration (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x2c  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_vtiming_cfg
{
    reg32_t U;
    struct _hw_mipi_dsi_vtiming_cfg_bitfields
    {
        unsigned VSA_LINES : 4; //!< [3:0] Configures the Vertical Synchronism Active period measured in horizontal lines
        unsigned VBP_LINES : 6; //!< [9:4] Configures the Vertical Back Porch period measured in horizontal lines
        unsigned VFP_LINES : 6; //!< [15:10] Configures the Vertical Front Porch period measured in horizontal lines
        unsigned V_ACTIVE_LINES : 11; //!< [26:16] Configures the Vertical Active period measured in horizontal lines
        unsigned RESERVED0 : 5; //!< [31:27] Reserved
    } B;
} hw_mipi_dsi_vtiming_cfg_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_VTIMING_CFG register
 */
#define HW_MIPI_DSI_VTIMING_CFG_ADDR      (REGS_MIPI_DSI_BASE + 0x2c)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_VTIMING_CFG           (*(volatile hw_mipi_dsi_vtiming_cfg_t *) HW_MIPI_DSI_VTIMING_CFG_ADDR)
#define HW_MIPI_DSI_VTIMING_CFG_RD()      (HW_MIPI_DSI_VTIMING_CFG.U)
#define HW_MIPI_DSI_VTIMING_CFG_WR(v)     (HW_MIPI_DSI_VTIMING_CFG.U = (v))
#define HW_MIPI_DSI_VTIMING_CFG_SET(v)    (HW_MIPI_DSI_VTIMING_CFG_WR(HW_MIPI_DSI_VTIMING_CFG_RD() |  (v)))
#define HW_MIPI_DSI_VTIMING_CFG_CLR(v)    (HW_MIPI_DSI_VTIMING_CFG_WR(HW_MIPI_DSI_VTIMING_CFG_RD() & ~(v)))
#define HW_MIPI_DSI_VTIMING_CFG_TOG(v)    (HW_MIPI_DSI_VTIMING_CFG_WR(HW_MIPI_DSI_VTIMING_CFG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_VTIMING_CFG bitfields
 */

/* --- Register HW_MIPI_DSI_VTIMING_CFG, field VSA_LINES[3:0] (RW)
 *
 * Configures the Vertical Synchronism Active period measured in horizontal lines
 */

#define BP_MIPI_DSI_VTIMING_CFG_VSA_LINES      (0)      //!< Bit position for MIPI_DSI_VTIMING_CFG_VSA_LINES.
#define BM_MIPI_DSI_VTIMING_CFG_VSA_LINES      (0x0000000f)  //!< Bit mask for MIPI_DSI_VTIMING_CFG_VSA_LINES.

//! @brief Get value of MIPI_DSI_VTIMING_CFG_VSA_LINES from a register value.
#define BG_MIPI_DSI_VTIMING_CFG_VSA_LINES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VTIMING_CFG_VSA_LINES) >> BP_MIPI_DSI_VTIMING_CFG_VSA_LINES)

//! @brief Format value for bitfield MIPI_DSI_VTIMING_CFG_VSA_LINES.
#define BF_MIPI_DSI_VTIMING_CFG_VSA_LINES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VTIMING_CFG_VSA_LINES) & BM_MIPI_DSI_VTIMING_CFG_VSA_LINES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the VSA_LINES field to a new value.
#define BW_MIPI_DSI_VTIMING_CFG_VSA_LINES(v)   (HW_MIPI_DSI_VTIMING_CFG_WR((HW_MIPI_DSI_VTIMING_CFG_RD() & ~BM_MIPI_DSI_VTIMING_CFG_VSA_LINES) | BF_MIPI_DSI_VTIMING_CFG_VSA_LINES(v)))
#endif

/* --- Register HW_MIPI_DSI_VTIMING_CFG, field VBP_LINES[9:4] (RW)
 *
 * Configures the Vertical Back Porch period measured in horizontal lines
 */

#define BP_MIPI_DSI_VTIMING_CFG_VBP_LINES      (4)      //!< Bit position for MIPI_DSI_VTIMING_CFG_VBP_LINES.
#define BM_MIPI_DSI_VTIMING_CFG_VBP_LINES      (0x000003f0)  //!< Bit mask for MIPI_DSI_VTIMING_CFG_VBP_LINES.

//! @brief Get value of MIPI_DSI_VTIMING_CFG_VBP_LINES from a register value.
#define BG_MIPI_DSI_VTIMING_CFG_VBP_LINES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VTIMING_CFG_VBP_LINES) >> BP_MIPI_DSI_VTIMING_CFG_VBP_LINES)

//! @brief Format value for bitfield MIPI_DSI_VTIMING_CFG_VBP_LINES.
#define BF_MIPI_DSI_VTIMING_CFG_VBP_LINES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VTIMING_CFG_VBP_LINES) & BM_MIPI_DSI_VTIMING_CFG_VBP_LINES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the VBP_LINES field to a new value.
#define BW_MIPI_DSI_VTIMING_CFG_VBP_LINES(v)   (HW_MIPI_DSI_VTIMING_CFG_WR((HW_MIPI_DSI_VTIMING_CFG_RD() & ~BM_MIPI_DSI_VTIMING_CFG_VBP_LINES) | BF_MIPI_DSI_VTIMING_CFG_VBP_LINES(v)))
#endif

/* --- Register HW_MIPI_DSI_VTIMING_CFG, field VFP_LINES[15:10] (RW)
 *
 * Configures the Vertical Front Porch period measured in horizontal lines
 */

#define BP_MIPI_DSI_VTIMING_CFG_VFP_LINES      (10)      //!< Bit position for MIPI_DSI_VTIMING_CFG_VFP_LINES.
#define BM_MIPI_DSI_VTIMING_CFG_VFP_LINES      (0x0000fc00)  //!< Bit mask for MIPI_DSI_VTIMING_CFG_VFP_LINES.

//! @brief Get value of MIPI_DSI_VTIMING_CFG_VFP_LINES from a register value.
#define BG_MIPI_DSI_VTIMING_CFG_VFP_LINES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VTIMING_CFG_VFP_LINES) >> BP_MIPI_DSI_VTIMING_CFG_VFP_LINES)

//! @brief Format value for bitfield MIPI_DSI_VTIMING_CFG_VFP_LINES.
#define BF_MIPI_DSI_VTIMING_CFG_VFP_LINES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VTIMING_CFG_VFP_LINES) & BM_MIPI_DSI_VTIMING_CFG_VFP_LINES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the VFP_LINES field to a new value.
#define BW_MIPI_DSI_VTIMING_CFG_VFP_LINES(v)   (HW_MIPI_DSI_VTIMING_CFG_WR((HW_MIPI_DSI_VTIMING_CFG_RD() & ~BM_MIPI_DSI_VTIMING_CFG_VFP_LINES) | BF_MIPI_DSI_VTIMING_CFG_VFP_LINES(v)))
#endif

/* --- Register HW_MIPI_DSI_VTIMING_CFG, field V_ACTIVE_LINES[26:16] (RW)
 *
 * Configures the Vertical Active period measured in horizontal lines
 */

#define BP_MIPI_DSI_VTIMING_CFG_V_ACTIVE_LINES      (16)      //!< Bit position for MIPI_DSI_VTIMING_CFG_V_ACTIVE_LINES.
#define BM_MIPI_DSI_VTIMING_CFG_V_ACTIVE_LINES      (0x07ff0000)  //!< Bit mask for MIPI_DSI_VTIMING_CFG_V_ACTIVE_LINES.

//! @brief Get value of MIPI_DSI_VTIMING_CFG_V_ACTIVE_LINES from a register value.
#define BG_MIPI_DSI_VTIMING_CFG_V_ACTIVE_LINES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_VTIMING_CFG_V_ACTIVE_LINES) >> BP_MIPI_DSI_VTIMING_CFG_V_ACTIVE_LINES)

//! @brief Format value for bitfield MIPI_DSI_VTIMING_CFG_V_ACTIVE_LINES.
#define BF_MIPI_DSI_VTIMING_CFG_V_ACTIVE_LINES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_VTIMING_CFG_V_ACTIVE_LINES) & BM_MIPI_DSI_VTIMING_CFG_V_ACTIVE_LINES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the V_ACTIVE_LINES field to a new value.
#define BW_MIPI_DSI_VTIMING_CFG_V_ACTIVE_LINES(v)   (HW_MIPI_DSI_VTIMING_CFG_WR((HW_MIPI_DSI_VTIMING_CFG_RD() & ~BM_MIPI_DSI_VTIMING_CFG_V_ACTIVE_LINES) | BF_MIPI_DSI_VTIMING_CFG_V_ACTIVE_LINES(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_PHY_TMR_CFG - D-PHY timing configuration
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_PHY_TMR_CFG - D-PHY timing configuration (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x30  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_phy_tmr_cfg
{
    reg32_t U;
    struct _hw_mipi_dsi_phy_tmr_cfg_bitfields
    {
        unsigned BTA_TIME : 12; //!< [11:0] Configures the maximum time required to perform the Bus Turn Around operation measured in lane byte clock cycles
        unsigned PHY_LP2HS_TIME : 8; //!< [19:12] Configures the maximum time that the PHY takes to go from Low Power to High Speed transmission measured in lane byte clock cycles
        unsigned PHY_HS2LP_TIME : 8; //!< [27:20] Configures the maximum time that the PHY takes to go from High Speed to Low Power transmission measured in lane byte clock cycles
        unsigned RESERVED0 : 4; //!< [31:28] Reserved
    } B;
} hw_mipi_dsi_phy_tmr_cfg_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_PHY_TMR_CFG register
 */
#define HW_MIPI_DSI_PHY_TMR_CFG_ADDR      (REGS_MIPI_DSI_BASE + 0x30)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_PHY_TMR_CFG           (*(volatile hw_mipi_dsi_phy_tmr_cfg_t *) HW_MIPI_DSI_PHY_TMR_CFG_ADDR)
#define HW_MIPI_DSI_PHY_TMR_CFG_RD()      (HW_MIPI_DSI_PHY_TMR_CFG.U)
#define HW_MIPI_DSI_PHY_TMR_CFG_WR(v)     (HW_MIPI_DSI_PHY_TMR_CFG.U = (v))
#define HW_MIPI_DSI_PHY_TMR_CFG_SET(v)    (HW_MIPI_DSI_PHY_TMR_CFG_WR(HW_MIPI_DSI_PHY_TMR_CFG_RD() |  (v)))
#define HW_MIPI_DSI_PHY_TMR_CFG_CLR(v)    (HW_MIPI_DSI_PHY_TMR_CFG_WR(HW_MIPI_DSI_PHY_TMR_CFG_RD() & ~(v)))
#define HW_MIPI_DSI_PHY_TMR_CFG_TOG(v)    (HW_MIPI_DSI_PHY_TMR_CFG_WR(HW_MIPI_DSI_PHY_TMR_CFG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_PHY_TMR_CFG bitfields
 */

/* --- Register HW_MIPI_DSI_PHY_TMR_CFG, field BTA_TIME[11:0] (RW)
 *
 * Configures the maximum time required to perform the Bus Turn Around operation measured in lane
 * byte clock cycles
 */

#define BP_MIPI_DSI_PHY_TMR_CFG_BTA_TIME      (0)      //!< Bit position for MIPI_DSI_PHY_TMR_CFG_BTA_TIME.
#define BM_MIPI_DSI_PHY_TMR_CFG_BTA_TIME      (0x00000fff)  //!< Bit mask for MIPI_DSI_PHY_TMR_CFG_BTA_TIME.

//! @brief Get value of MIPI_DSI_PHY_TMR_CFG_BTA_TIME from a register value.
#define BG_MIPI_DSI_PHY_TMR_CFG_BTA_TIME(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_TMR_CFG_BTA_TIME) >> BP_MIPI_DSI_PHY_TMR_CFG_BTA_TIME)

//! @brief Format value for bitfield MIPI_DSI_PHY_TMR_CFG_BTA_TIME.
#define BF_MIPI_DSI_PHY_TMR_CFG_BTA_TIME(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_TMR_CFG_BTA_TIME) & BM_MIPI_DSI_PHY_TMR_CFG_BTA_TIME)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BTA_TIME field to a new value.
#define BW_MIPI_DSI_PHY_TMR_CFG_BTA_TIME(v)   (HW_MIPI_DSI_PHY_TMR_CFG_WR((HW_MIPI_DSI_PHY_TMR_CFG_RD() & ~BM_MIPI_DSI_PHY_TMR_CFG_BTA_TIME) | BF_MIPI_DSI_PHY_TMR_CFG_BTA_TIME(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_TMR_CFG, field PHY_LP2HS_TIME[19:12] (RW)
 *
 * Configures the maximum time that the PHY takes to go from Low Power to High Speed transmission
 * measured in lane byte clock cycles
 */

#define BP_MIPI_DSI_PHY_TMR_CFG_PHY_LP2HS_TIME      (12)      //!< Bit position for MIPI_DSI_PHY_TMR_CFG_PHY_LP2HS_TIME.
#define BM_MIPI_DSI_PHY_TMR_CFG_PHY_LP2HS_TIME      (0x000ff000)  //!< Bit mask for MIPI_DSI_PHY_TMR_CFG_PHY_LP2HS_TIME.

//! @brief Get value of MIPI_DSI_PHY_TMR_CFG_PHY_LP2HS_TIME from a register value.
#define BG_MIPI_DSI_PHY_TMR_CFG_PHY_LP2HS_TIME(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_TMR_CFG_PHY_LP2HS_TIME) >> BP_MIPI_DSI_PHY_TMR_CFG_PHY_LP2HS_TIME)

//! @brief Format value for bitfield MIPI_DSI_PHY_TMR_CFG_PHY_LP2HS_TIME.
#define BF_MIPI_DSI_PHY_TMR_CFG_PHY_LP2HS_TIME(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_TMR_CFG_PHY_LP2HS_TIME) & BM_MIPI_DSI_PHY_TMR_CFG_PHY_LP2HS_TIME)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_LP2HS_TIME field to a new value.
#define BW_MIPI_DSI_PHY_TMR_CFG_PHY_LP2HS_TIME(v)   (HW_MIPI_DSI_PHY_TMR_CFG_WR((HW_MIPI_DSI_PHY_TMR_CFG_RD() & ~BM_MIPI_DSI_PHY_TMR_CFG_PHY_LP2HS_TIME) | BF_MIPI_DSI_PHY_TMR_CFG_PHY_LP2HS_TIME(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_TMR_CFG, field PHY_HS2LP_TIME[27:20] (RW)
 *
 * Configures the maximum time that the PHY takes to go from High Speed to Low Power transmission
 * measured in lane byte clock cycles
 */

#define BP_MIPI_DSI_PHY_TMR_CFG_PHY_HS2LP_TIME      (20)      //!< Bit position for MIPI_DSI_PHY_TMR_CFG_PHY_HS2LP_TIME.
#define BM_MIPI_DSI_PHY_TMR_CFG_PHY_HS2LP_TIME      (0x0ff00000)  //!< Bit mask for MIPI_DSI_PHY_TMR_CFG_PHY_HS2LP_TIME.

//! @brief Get value of MIPI_DSI_PHY_TMR_CFG_PHY_HS2LP_TIME from a register value.
#define BG_MIPI_DSI_PHY_TMR_CFG_PHY_HS2LP_TIME(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_TMR_CFG_PHY_HS2LP_TIME) >> BP_MIPI_DSI_PHY_TMR_CFG_PHY_HS2LP_TIME)

//! @brief Format value for bitfield MIPI_DSI_PHY_TMR_CFG_PHY_HS2LP_TIME.
#define BF_MIPI_DSI_PHY_TMR_CFG_PHY_HS2LP_TIME(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_TMR_CFG_PHY_HS2LP_TIME) & BM_MIPI_DSI_PHY_TMR_CFG_PHY_HS2LP_TIME)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_HS2LP_TIME field to a new value.
#define BW_MIPI_DSI_PHY_TMR_CFG_PHY_HS2LP_TIME(v)   (HW_MIPI_DSI_PHY_TMR_CFG_WR((HW_MIPI_DSI_PHY_TMR_CFG_RD() & ~BM_MIPI_DSI_PHY_TMR_CFG_PHY_HS2LP_TIME) | BF_MIPI_DSI_PHY_TMR_CFG_PHY_HS2LP_TIME(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_GEN_HDR - Generic packet Header configuration
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_GEN_HDR - Generic packet Header configuration (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x34  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_gen_hdr
{
    reg32_t U;
    struct _hw_mipi_dsi_gen_hdr_bitfields
    {
        unsigned GEN_HTYPE : 8; //!< [7:0] Configures the packet type to be transmitted through the generic interface.
        unsigned GEN_HDATA : 16; //!< [23:8] Configures the packet data to be transmitted through the generic interface
        unsigned RESERVED0 : 8; //!< [31:24] Reserved
    } B;
} hw_mipi_dsi_gen_hdr_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_GEN_HDR register
 */
#define HW_MIPI_DSI_GEN_HDR_ADDR      (REGS_MIPI_DSI_BASE + 0x34)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_GEN_HDR           (*(volatile hw_mipi_dsi_gen_hdr_t *) HW_MIPI_DSI_GEN_HDR_ADDR)
#define HW_MIPI_DSI_GEN_HDR_RD()      (HW_MIPI_DSI_GEN_HDR.U)
#define HW_MIPI_DSI_GEN_HDR_WR(v)     (HW_MIPI_DSI_GEN_HDR.U = (v))
#define HW_MIPI_DSI_GEN_HDR_SET(v)    (HW_MIPI_DSI_GEN_HDR_WR(HW_MIPI_DSI_GEN_HDR_RD() |  (v)))
#define HW_MIPI_DSI_GEN_HDR_CLR(v)    (HW_MIPI_DSI_GEN_HDR_WR(HW_MIPI_DSI_GEN_HDR_RD() & ~(v)))
#define HW_MIPI_DSI_GEN_HDR_TOG(v)    (HW_MIPI_DSI_GEN_HDR_WR(HW_MIPI_DSI_GEN_HDR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_GEN_HDR bitfields
 */

/* --- Register HW_MIPI_DSI_GEN_HDR, field GEN_HTYPE[7:0] (RW)
 *
 * Configures the packet type to be transmitted through the generic interface. Writing to this
 * register triggers packet transmission (Payload must be written in advance)
 */

#define BP_MIPI_DSI_GEN_HDR_GEN_HTYPE      (0)      //!< Bit position for MIPI_DSI_GEN_HDR_GEN_HTYPE.
#define BM_MIPI_DSI_GEN_HDR_GEN_HTYPE      (0x000000ff)  //!< Bit mask for MIPI_DSI_GEN_HDR_GEN_HTYPE.

//! @brief Get value of MIPI_DSI_GEN_HDR_GEN_HTYPE from a register value.
#define BG_MIPI_DSI_GEN_HDR_GEN_HTYPE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_GEN_HDR_GEN_HTYPE) >> BP_MIPI_DSI_GEN_HDR_GEN_HTYPE)

//! @brief Format value for bitfield MIPI_DSI_GEN_HDR_GEN_HTYPE.
#define BF_MIPI_DSI_GEN_HDR_GEN_HTYPE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_GEN_HDR_GEN_HTYPE) & BM_MIPI_DSI_GEN_HDR_GEN_HTYPE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_HTYPE field to a new value.
#define BW_MIPI_DSI_GEN_HDR_GEN_HTYPE(v)   (HW_MIPI_DSI_GEN_HDR_WR((HW_MIPI_DSI_GEN_HDR_RD() & ~BM_MIPI_DSI_GEN_HDR_GEN_HTYPE) | BF_MIPI_DSI_GEN_HDR_GEN_HTYPE(v)))
#endif

/* --- Register HW_MIPI_DSI_GEN_HDR, field GEN_HDATA[23:8] (RW)
 *
 * Configures the packet data to be transmitted through the generic interface
 */

#define BP_MIPI_DSI_GEN_HDR_GEN_HDATA      (8)      //!< Bit position for MIPI_DSI_GEN_HDR_GEN_HDATA.
#define BM_MIPI_DSI_GEN_HDR_GEN_HDATA      (0x00ffff00)  //!< Bit mask for MIPI_DSI_GEN_HDR_GEN_HDATA.

//! @brief Get value of MIPI_DSI_GEN_HDR_GEN_HDATA from a register value.
#define BG_MIPI_DSI_GEN_HDR_GEN_HDATA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_GEN_HDR_GEN_HDATA) >> BP_MIPI_DSI_GEN_HDR_GEN_HDATA)

//! @brief Format value for bitfield MIPI_DSI_GEN_HDR_GEN_HDATA.
#define BF_MIPI_DSI_GEN_HDR_GEN_HDATA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_GEN_HDR_GEN_HDATA) & BM_MIPI_DSI_GEN_HDR_GEN_HDATA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_HDATA field to a new value.
#define BW_MIPI_DSI_GEN_HDR_GEN_HDATA(v)   (HW_MIPI_DSI_GEN_HDR_WR((HW_MIPI_DSI_GEN_HDR_RD() & ~BM_MIPI_DSI_GEN_HDR_GEN_HDATA) | BF_MIPI_DSI_GEN_HDR_GEN_HDATA(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_GEN_PLD_DATA - Generic payload data in/out
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_GEN_PLD_DATA - Generic payload data in/out (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x38  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_gen_pld_data
{
    reg32_t U;
    struct _hw_mipi_dsi_gen_pld_data_bitfields
    {
        unsigned GEN_PLD_DATA : 32; //!< [31:0] This register contains the input/output generic packet data.
    } B;
} hw_mipi_dsi_gen_pld_data_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_GEN_PLD_DATA register
 */
#define HW_MIPI_DSI_GEN_PLD_DATA_ADDR      (REGS_MIPI_DSI_BASE + 0x38)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_GEN_PLD_DATA           (*(volatile hw_mipi_dsi_gen_pld_data_t *) HW_MIPI_DSI_GEN_PLD_DATA_ADDR)
#define HW_MIPI_DSI_GEN_PLD_DATA_RD()      (HW_MIPI_DSI_GEN_PLD_DATA.U)
#define HW_MIPI_DSI_GEN_PLD_DATA_WR(v)     (HW_MIPI_DSI_GEN_PLD_DATA.U = (v))
#define HW_MIPI_DSI_GEN_PLD_DATA_SET(v)    (HW_MIPI_DSI_GEN_PLD_DATA_WR(HW_MIPI_DSI_GEN_PLD_DATA_RD() |  (v)))
#define HW_MIPI_DSI_GEN_PLD_DATA_CLR(v)    (HW_MIPI_DSI_GEN_PLD_DATA_WR(HW_MIPI_DSI_GEN_PLD_DATA_RD() & ~(v)))
#define HW_MIPI_DSI_GEN_PLD_DATA_TOG(v)    (HW_MIPI_DSI_GEN_PLD_DATA_WR(HW_MIPI_DSI_GEN_PLD_DATA_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_GEN_PLD_DATA bitfields
 */

/* --- Register HW_MIPI_DSI_GEN_PLD_DATA, field GEN_PLD_DATA[31:0] (RW)
 *
 * This register contains the input/output generic packet data. Write access to it writes the
 * content of the packet payload. Read access reads the incoming generic read data
 */

#define BP_MIPI_DSI_GEN_PLD_DATA_GEN_PLD_DATA      (0)      //!< Bit position for MIPI_DSI_GEN_PLD_DATA_GEN_PLD_DATA.
#define BM_MIPI_DSI_GEN_PLD_DATA_GEN_PLD_DATA      (0xffffffff)  //!< Bit mask for MIPI_DSI_GEN_PLD_DATA_GEN_PLD_DATA.

//! @brief Get value of MIPI_DSI_GEN_PLD_DATA_GEN_PLD_DATA from a register value.
#define BG_MIPI_DSI_GEN_PLD_DATA_GEN_PLD_DATA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_GEN_PLD_DATA_GEN_PLD_DATA) >> BP_MIPI_DSI_GEN_PLD_DATA_GEN_PLD_DATA)

//! @brief Format value for bitfield MIPI_DSI_GEN_PLD_DATA_GEN_PLD_DATA.
#define BF_MIPI_DSI_GEN_PLD_DATA_GEN_PLD_DATA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_GEN_PLD_DATA_GEN_PLD_DATA) & BM_MIPI_DSI_GEN_PLD_DATA_GEN_PLD_DATA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_PLD_DATA field to a new value.
#define BW_MIPI_DSI_GEN_PLD_DATA_GEN_PLD_DATA(v)   (HW_MIPI_DSI_GEN_PLD_DATA_WR((HW_MIPI_DSI_GEN_PLD_DATA_RD() & ~BM_MIPI_DSI_GEN_PLD_DATA_GEN_PLD_DATA) | BF_MIPI_DSI_GEN_PLD_DATA_GEN_PLD_DATA(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_CMD_PKT_STATUS - Command packet status
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_CMD_PKT_STATUS - Command packet status (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x3c  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_cmd_pkt_status
{
    reg32_t U;
    struct _hw_mipi_dsi_cmd_pkt_status_bitfields
    {
        unsigned GEN_CMD_EMPTY : 1; //!< [0] Reports the empty status of the generic command FIFO
        unsigned GEN_CMD_FULL : 1; //!< [1] Reports the full status of the generic command FIFO
        unsigned GEN_PLD_W_EMPTY : 1; //!< [2] Reports the empty status of the generic write payload FIFO
        unsigned GEN_PLD_W_FULL : 1; //!< [3] Reports the full status of the generic write payload FIFO
        unsigned GEN_PLD_R_EMPTY : 1; //!< [4] Reports the empty status of the generic read payload FIFO
        unsigned GEN_PLD_R_FULL : 1; //!< [5] Reports the full status of the generic read payload FIFO
        unsigned GEN_RD_CMD_BUSY : 1; //!< [6] Set when a read command is issued and cleared once the entire response is stored in the FIFO
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned DBI_CMD_EMPTY : 1; //!< [8] Reports the empty status of the DBI command FIFO
        unsigned DBI_CMD_FULL : 1; //!< [9] Reports the full status of the DBI command FIFO
        unsigned DBI_PLD_W_EMPTY : 1; //!< [10] Reports the empty status of the DBI write payload FIFO
        unsigned DBI_PLD_W_FULL : 1; //!< [11] Reports the full status of the DBI write payload FIFO
        unsigned DBI_PLD_R_EMPTY : 1; //!< [12] Reports the empty status of the DBI read payload FIFO
        unsigned DBI_PLD_R_FULL : 1; //!< [13] Reports the full status of the DBI read payload FIFO
        unsigned DBI_RD_CMD_BUSY : 1; //!< [14] Set when a read command is issued and cleared once the entire response is stored in the FIFO
        unsigned RESERVED1 : 17; //!< [31:15] Reserved.
    } B;
} hw_mipi_dsi_cmd_pkt_status_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_CMD_PKT_STATUS register
 */
#define HW_MIPI_DSI_CMD_PKT_STATUS_ADDR      (REGS_MIPI_DSI_BASE + 0x3c)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_CMD_PKT_STATUS           (*(volatile hw_mipi_dsi_cmd_pkt_status_t *) HW_MIPI_DSI_CMD_PKT_STATUS_ADDR)
#define HW_MIPI_DSI_CMD_PKT_STATUS_RD()      (HW_MIPI_DSI_CMD_PKT_STATUS.U)
#define HW_MIPI_DSI_CMD_PKT_STATUS_WR(v)     (HW_MIPI_DSI_CMD_PKT_STATUS.U = (v))
#define HW_MIPI_DSI_CMD_PKT_STATUS_SET(v)    (HW_MIPI_DSI_CMD_PKT_STATUS_WR(HW_MIPI_DSI_CMD_PKT_STATUS_RD() |  (v)))
#define HW_MIPI_DSI_CMD_PKT_STATUS_CLR(v)    (HW_MIPI_DSI_CMD_PKT_STATUS_WR(HW_MIPI_DSI_CMD_PKT_STATUS_RD() & ~(v)))
#define HW_MIPI_DSI_CMD_PKT_STATUS_TOG(v)    (HW_MIPI_DSI_CMD_PKT_STATUS_WR(HW_MIPI_DSI_CMD_PKT_STATUS_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_CMD_PKT_STATUS bitfields
 */

/* --- Register HW_MIPI_DSI_CMD_PKT_STATUS, field GEN_CMD_EMPTY[0] (RW)
 *
 * Reports the empty status of the generic command FIFO
 */

#define BP_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY      (0)      //!< Bit position for MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY.
#define BM_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY      (0x00000001)  //!< Bit mask for MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY.

//! @brief Get value of MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY from a register value.
#define BG_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY) >> BP_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY)

//! @brief Format value for bitfield MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY.
#define BF_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY) & BM_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_CMD_EMPTY field to a new value.
#define BW_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY(v)   (HW_MIPI_DSI_CMD_PKT_STATUS_WR((HW_MIPI_DSI_CMD_PKT_STATUS_RD() & ~BM_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY) | BF_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_EMPTY(v)))
#endif

/* --- Register HW_MIPI_DSI_CMD_PKT_STATUS, field GEN_CMD_FULL[1] (RW)
 *
 * Reports the full status of the generic command FIFO
 */

#define BP_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_FULL      (1)      //!< Bit position for MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_FULL.
#define BM_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_FULL      (0x00000002)  //!< Bit mask for MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_FULL.

//! @brief Get value of MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_FULL from a register value.
#define BG_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_FULL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_FULL) >> BP_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_FULL)

//! @brief Format value for bitfield MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_FULL.
#define BF_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_FULL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_FULL) & BM_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_FULL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_CMD_FULL field to a new value.
#define BW_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_FULL(v)   (HW_MIPI_DSI_CMD_PKT_STATUS_WR((HW_MIPI_DSI_CMD_PKT_STATUS_RD() & ~BM_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_FULL) | BF_MIPI_DSI_CMD_PKT_STATUS_GEN_CMD_FULL(v)))
#endif

/* --- Register HW_MIPI_DSI_CMD_PKT_STATUS, field GEN_PLD_W_EMPTY[2] (RW)
 *
 * Reports the empty status of the generic write payload FIFO
 */

#define BP_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY      (2)      //!< Bit position for MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY.
#define BM_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY      (0x00000004)  //!< Bit mask for MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY.

//! @brief Get value of MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY from a register value.
#define BG_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY) >> BP_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY)

//! @brief Format value for bitfield MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY.
#define BF_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY) & BM_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_PLD_W_EMPTY field to a new value.
#define BW_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY(v)   (HW_MIPI_DSI_CMD_PKT_STATUS_WR((HW_MIPI_DSI_CMD_PKT_STATUS_RD() & ~BM_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY) | BF_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_EMPTY(v)))
#endif

/* --- Register HW_MIPI_DSI_CMD_PKT_STATUS, field GEN_PLD_W_FULL[3] (RW)
 *
 * Reports the full status of the generic write payload FIFO
 */

#define BP_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL      (3)      //!< Bit position for MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL.
#define BM_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL      (0x00000008)  //!< Bit mask for MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL.

//! @brief Get value of MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL from a register value.
#define BG_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL) >> BP_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL)

//! @brief Format value for bitfield MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL.
#define BF_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL) & BM_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_PLD_W_FULL field to a new value.
#define BW_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL(v)   (HW_MIPI_DSI_CMD_PKT_STATUS_WR((HW_MIPI_DSI_CMD_PKT_STATUS_RD() & ~BM_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL) | BF_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_W_FULL(v)))
#endif

/* --- Register HW_MIPI_DSI_CMD_PKT_STATUS, field GEN_PLD_R_EMPTY[4] (RW)
 *
 * Reports the empty status of the generic read payload FIFO
 */

#define BP_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY      (4)      //!< Bit position for MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY.
#define BM_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY      (0x00000010)  //!< Bit mask for MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY.

//! @brief Get value of MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY from a register value.
#define BG_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY) >> BP_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY)

//! @brief Format value for bitfield MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY.
#define BF_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY) & BM_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_PLD_R_EMPTY field to a new value.
#define BW_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY(v)   (HW_MIPI_DSI_CMD_PKT_STATUS_WR((HW_MIPI_DSI_CMD_PKT_STATUS_RD() & ~BM_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY) | BF_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_EMPTY(v)))
#endif

/* --- Register HW_MIPI_DSI_CMD_PKT_STATUS, field GEN_PLD_R_FULL[5] (RW)
 *
 * Reports the full status of the generic read payload FIFO
 */

#define BP_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL      (5)      //!< Bit position for MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL.
#define BM_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL      (0x00000020)  //!< Bit mask for MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL.

//! @brief Get value of MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL from a register value.
#define BG_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL) >> BP_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL)

//! @brief Format value for bitfield MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL.
#define BF_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL) & BM_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_PLD_R_FULL field to a new value.
#define BW_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL(v)   (HW_MIPI_DSI_CMD_PKT_STATUS_WR((HW_MIPI_DSI_CMD_PKT_STATUS_RD() & ~BM_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL) | BF_MIPI_DSI_CMD_PKT_STATUS_GEN_PLD_R_FULL(v)))
#endif

/* --- Register HW_MIPI_DSI_CMD_PKT_STATUS, field GEN_RD_CMD_BUSY[6] (RW)
 *
 * Set when a read command is issued and cleared once the entire response is stored in the FIFO
 */

#define BP_MIPI_DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY      (6)      //!< Bit position for MIPI_DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY.
#define BM_MIPI_DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY      (0x00000040)  //!< Bit mask for MIPI_DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY.

//! @brief Get value of MIPI_DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY from a register value.
#define BG_MIPI_DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY) >> BP_MIPI_DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY)

//! @brief Format value for bitfield MIPI_DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY.
#define BF_MIPI_DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY) & BM_MIPI_DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_RD_CMD_BUSY field to a new value.
#define BW_MIPI_DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY(v)   (HW_MIPI_DSI_CMD_PKT_STATUS_WR((HW_MIPI_DSI_CMD_PKT_STATUS_RD() & ~BM_MIPI_DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY) | BF_MIPI_DSI_CMD_PKT_STATUS_GEN_RD_CMD_BUSY(v)))
#endif

/* --- Register HW_MIPI_DSI_CMD_PKT_STATUS, field DBI_CMD_EMPTY[8] (RW)
 *
 * Reports the empty status of the DBI command FIFO
 */

#define BP_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY      (8)      //!< Bit position for MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY.
#define BM_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY      (0x00000100)  //!< Bit mask for MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY.

//! @brief Get value of MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY from a register value.
#define BG_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY) >> BP_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY)

//! @brief Format value for bitfield MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY.
#define BF_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY) & BM_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_CMD_EMPTY field to a new value.
#define BW_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY(v)   (HW_MIPI_DSI_CMD_PKT_STATUS_WR((HW_MIPI_DSI_CMD_PKT_STATUS_RD() & ~BM_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY) | BF_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_EMPTY(v)))
#endif

/* --- Register HW_MIPI_DSI_CMD_PKT_STATUS, field DBI_CMD_FULL[9] (RW)
 *
 * Reports the full status of the DBI command FIFO
 */

#define BP_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_FULL      (9)      //!< Bit position for MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_FULL.
#define BM_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_FULL      (0x00000200)  //!< Bit mask for MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_FULL.

//! @brief Get value of MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_FULL from a register value.
#define BG_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_FULL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_FULL) >> BP_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_FULL)

//! @brief Format value for bitfield MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_FULL.
#define BF_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_FULL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_FULL) & BM_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_FULL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_CMD_FULL field to a new value.
#define BW_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_FULL(v)   (HW_MIPI_DSI_CMD_PKT_STATUS_WR((HW_MIPI_DSI_CMD_PKT_STATUS_RD() & ~BM_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_FULL) | BF_MIPI_DSI_CMD_PKT_STATUS_DBI_CMD_FULL(v)))
#endif

/* --- Register HW_MIPI_DSI_CMD_PKT_STATUS, field DBI_PLD_W_EMPTY[10] (RW)
 *
 * Reports the empty status of the DBI write payload FIFO
 */

#define BP_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY      (10)      //!< Bit position for MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY.
#define BM_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY      (0x00000400)  //!< Bit mask for MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY.

//! @brief Get value of MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY from a register value.
#define BG_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY) >> BP_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY)

//! @brief Format value for bitfield MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY.
#define BF_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY) & BM_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_PLD_W_EMPTY field to a new value.
#define BW_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY(v)   (HW_MIPI_DSI_CMD_PKT_STATUS_WR((HW_MIPI_DSI_CMD_PKT_STATUS_RD() & ~BM_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY) | BF_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_EMPTY(v)))
#endif

/* --- Register HW_MIPI_DSI_CMD_PKT_STATUS, field DBI_PLD_W_FULL[11] (RW)
 *
 * Reports the full status of the DBI write payload FIFO
 */

#define BP_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL      (11)      //!< Bit position for MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL.
#define BM_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL      (0x00000800)  //!< Bit mask for MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL.

//! @brief Get value of MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL from a register value.
#define BG_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL) >> BP_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL)

//! @brief Format value for bitfield MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL.
#define BF_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL) & BM_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_PLD_W_FULL field to a new value.
#define BW_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL(v)   (HW_MIPI_DSI_CMD_PKT_STATUS_WR((HW_MIPI_DSI_CMD_PKT_STATUS_RD() & ~BM_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL) | BF_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_W_FULL(v)))
#endif

/* --- Register HW_MIPI_DSI_CMD_PKT_STATUS, field DBI_PLD_R_EMPTY[12] (RW)
 *
 * Reports the empty status of the DBI read payload FIFO
 */

#define BP_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY      (12)      //!< Bit position for MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY.
#define BM_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY      (0x00001000)  //!< Bit mask for MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY.

//! @brief Get value of MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY from a register value.
#define BG_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY) >> BP_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY)

//! @brief Format value for bitfield MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY.
#define BF_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY) & BM_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_PLD_R_EMPTY field to a new value.
#define BW_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY(v)   (HW_MIPI_DSI_CMD_PKT_STATUS_WR((HW_MIPI_DSI_CMD_PKT_STATUS_RD() & ~BM_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY) | BF_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_EMPTY(v)))
#endif

/* --- Register HW_MIPI_DSI_CMD_PKT_STATUS, field DBI_PLD_R_FULL[13] (RW)
 *
 * Reports the full status of the DBI read payload FIFO
 */

#define BP_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL      (13)      //!< Bit position for MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL.
#define BM_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL      (0x00002000)  //!< Bit mask for MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL.

//! @brief Get value of MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL from a register value.
#define BG_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL) >> BP_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL)

//! @brief Format value for bitfield MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL.
#define BF_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL) & BM_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_PLD_R_FULL field to a new value.
#define BW_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL(v)   (HW_MIPI_DSI_CMD_PKT_STATUS_WR((HW_MIPI_DSI_CMD_PKT_STATUS_RD() & ~BM_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL) | BF_MIPI_DSI_CMD_PKT_STATUS_DBI_PLD_R_FULL(v)))
#endif

/* --- Register HW_MIPI_DSI_CMD_PKT_STATUS, field DBI_RD_CMD_BUSY[14] (RW)
 *
 * Set when a read command is issued and cleared once the entire response is stored in the FIFO
 */

#define BP_MIPI_DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY      (14)      //!< Bit position for MIPI_DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY.
#define BM_MIPI_DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY      (0x00004000)  //!< Bit mask for MIPI_DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY.

//! @brief Get value of MIPI_DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY from a register value.
#define BG_MIPI_DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY) >> BP_MIPI_DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY)

//! @brief Format value for bitfield MIPI_DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY.
#define BF_MIPI_DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY) & BM_MIPI_DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_RD_CMD_BUSY field to a new value.
#define BW_MIPI_DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY(v)   (HW_MIPI_DSI_CMD_PKT_STATUS_WR((HW_MIPI_DSI_CMD_PKT_STATUS_RD() & ~BM_MIPI_DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY) | BF_MIPI_DSI_CMD_PKT_STATUS_DBI_RD_CMD_BUSY(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_TO_CNT_CFG0 - Time Out timers configuration
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_TO_CNT_CFG0 - Time Out timers configuration (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x40  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_to_cnt_cfg0
{
    reg32_t U;
    struct _hw_mipi_dsi_to_cnt_cfg0_bitfields
    {
        unsigned HSTX_TO_CNT : 16; //!< [15:0] Configures the time out counter that will trigger a High Speed Transmission Time Out Contention Detection (Measured in TO_CLK_DIVISION cycles)
        unsigned LPRX_TO_CNT : 16; //!< [31:16] Configures the time out counter that will trigger a Low Power Reception Time Out Contention Detection.
    } B;
} hw_mipi_dsi_to_cnt_cfg0_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_TO_CNT_CFG0 register
 */
#define HW_MIPI_DSI_TO_CNT_CFG0_ADDR      (REGS_MIPI_DSI_BASE + 0x40)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_TO_CNT_CFG0           (*(volatile hw_mipi_dsi_to_cnt_cfg0_t *) HW_MIPI_DSI_TO_CNT_CFG0_ADDR)
#define HW_MIPI_DSI_TO_CNT_CFG0_RD()      (HW_MIPI_DSI_TO_CNT_CFG0.U)
#define HW_MIPI_DSI_TO_CNT_CFG0_WR(v)     (HW_MIPI_DSI_TO_CNT_CFG0.U = (v))
#define HW_MIPI_DSI_TO_CNT_CFG0_SET(v)    (HW_MIPI_DSI_TO_CNT_CFG0_WR(HW_MIPI_DSI_TO_CNT_CFG0_RD() |  (v)))
#define HW_MIPI_DSI_TO_CNT_CFG0_CLR(v)    (HW_MIPI_DSI_TO_CNT_CFG0_WR(HW_MIPI_DSI_TO_CNT_CFG0_RD() & ~(v)))
#define HW_MIPI_DSI_TO_CNT_CFG0_TOG(v)    (HW_MIPI_DSI_TO_CNT_CFG0_WR(HW_MIPI_DSI_TO_CNT_CFG0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_TO_CNT_CFG0 bitfields
 */

/* --- Register HW_MIPI_DSI_TO_CNT_CFG0, field HSTX_TO_CNT[15:0] (RW)
 *
 * Configures the time out counter that will trigger a High Speed Transmission Time Out Contention
 * Detection (Measured in TO_CLK_DIVISION cycles)
 */

#define BP_MIPI_DSI_TO_CNT_CFG0_HSTX_TO_CNT      (0)      //!< Bit position for MIPI_DSI_TO_CNT_CFG0_HSTX_TO_CNT.
#define BM_MIPI_DSI_TO_CNT_CFG0_HSTX_TO_CNT      (0x0000ffff)  //!< Bit mask for MIPI_DSI_TO_CNT_CFG0_HSTX_TO_CNT.

//! @brief Get value of MIPI_DSI_TO_CNT_CFG0_HSTX_TO_CNT from a register value.
#define BG_MIPI_DSI_TO_CNT_CFG0_HSTX_TO_CNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_TO_CNT_CFG0_HSTX_TO_CNT) >> BP_MIPI_DSI_TO_CNT_CFG0_HSTX_TO_CNT)

//! @brief Format value for bitfield MIPI_DSI_TO_CNT_CFG0_HSTX_TO_CNT.
#define BF_MIPI_DSI_TO_CNT_CFG0_HSTX_TO_CNT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_TO_CNT_CFG0_HSTX_TO_CNT) & BM_MIPI_DSI_TO_CNT_CFG0_HSTX_TO_CNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HSTX_TO_CNT field to a new value.
#define BW_MIPI_DSI_TO_CNT_CFG0_HSTX_TO_CNT(v)   (HW_MIPI_DSI_TO_CNT_CFG0_WR((HW_MIPI_DSI_TO_CNT_CFG0_RD() & ~BM_MIPI_DSI_TO_CNT_CFG0_HSTX_TO_CNT) | BF_MIPI_DSI_TO_CNT_CFG0_HSTX_TO_CNT(v)))
#endif

/* --- Register HW_MIPI_DSI_TO_CNT_CFG0, field LPRX_TO_CNT[31:16] (RW)
 *
 * Configures the time out counter that will trigger a Low Power Reception Time Out Contention
 * Detection. (Measured in TO_CLK_DIVISION cycles)
 */

#define BP_MIPI_DSI_TO_CNT_CFG0_LPRX_TO_CNT      (16)      //!< Bit position for MIPI_DSI_TO_CNT_CFG0_LPRX_TO_CNT.
#define BM_MIPI_DSI_TO_CNT_CFG0_LPRX_TO_CNT      (0xffff0000)  //!< Bit mask for MIPI_DSI_TO_CNT_CFG0_LPRX_TO_CNT.

//! @brief Get value of MIPI_DSI_TO_CNT_CFG0_LPRX_TO_CNT from a register value.
#define BG_MIPI_DSI_TO_CNT_CFG0_LPRX_TO_CNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_TO_CNT_CFG0_LPRX_TO_CNT) >> BP_MIPI_DSI_TO_CNT_CFG0_LPRX_TO_CNT)

//! @brief Format value for bitfield MIPI_DSI_TO_CNT_CFG0_LPRX_TO_CNT.
#define BF_MIPI_DSI_TO_CNT_CFG0_LPRX_TO_CNT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_TO_CNT_CFG0_LPRX_TO_CNT) & BM_MIPI_DSI_TO_CNT_CFG0_LPRX_TO_CNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LPRX_TO_CNT field to a new value.
#define BW_MIPI_DSI_TO_CNT_CFG0_LPRX_TO_CNT(v)   (HW_MIPI_DSI_TO_CNT_CFG0_WR((HW_MIPI_DSI_TO_CNT_CFG0_RD() & ~BM_MIPI_DSI_TO_CNT_CFG0_LPRX_TO_CNT) | BF_MIPI_DSI_TO_CNT_CFG0_LPRX_TO_CNT(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_ERROR_ST0 - Interrupt status register 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_ERROR_ST0 - Interrupt status register 0 (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x44  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_error_st0
{
    reg32_t U;
    struct _hw_mipi_dsi_error_st0_bitfields
    {
        unsigned ACK_WITH_ERR_0 : 1; //!< [0] Retrieves SoT Error from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_1 : 1; //!< [1] Retrieves SoT Sync Error from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_2 : 1; //!< [2] Retrieves EoT Sync Error from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_3 : 1; //!< [3] Retrieves Escape Mode Entry Command Error from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_4 : 1; //!< [4] Retrieves Low-Power Transmit Sync Error from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_5 : 1; //!< [5] Retrieves HS Receive Timeout Error from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_6 : 1; //!< [6] Retrieves False Control Error from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_7 : 1; //!< [7] Retrieves Reserved (specific to device) from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_8 : 1; //!< [8] Retrieves ECC Error, single-bit (detected and corrected) from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_9 : 1; //!< [9] Retrieves ECC Error, multi-bit (detected, not corrected) from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_10 : 1; //!< [10] Retrieves Checksum Error (Long packet only) from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_11 : 1; //!< [11] Retrieves DSI Data Type Not Recognized from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_12 : 1; //!< [12] Retrieves DSI VC ID Invalid from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_13 : 1; //!< [13] Retrieves Invalid Transmission Length from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_14 : 1; //!< [14] Retrieves Reserved (specific to device) from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_15 : 1; //!< [15] Retrieves DSI Protocol Violation from Display Acknowledge Error Report
        unsigned DPHY_ERRORS_0 : 1; //!< [16] ErrEsc Escape Entry Error from Lane 0
        unsigned DPHY_ERRORS_1 : 1; //!< [17] ErrSyncEsc Low-Power Data Transmission Synchronization Error from Lane 0
        unsigned DPHY_ERRORS_2 : 1; //!< [18] ErrControl Control Error from Lane 0
        unsigned DPHY_ERRORS_3 : 1; //!< [19] ErrContentionLP0 LP0 Contention Error from Lane 0
        unsigned DPHY_ERRORS_4 : 1; //!< [20] ErrContentionLP1 LP1 Contention Error from Lane 0
        unsigned RESERVED0 : 11; //!< [31:21] Reserved
    } B;
} hw_mipi_dsi_error_st0_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_ERROR_ST0 register
 */
#define HW_MIPI_DSI_ERROR_ST0_ADDR      (REGS_MIPI_DSI_BASE + 0x44)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_ERROR_ST0           (*(volatile hw_mipi_dsi_error_st0_t *) HW_MIPI_DSI_ERROR_ST0_ADDR)
#define HW_MIPI_DSI_ERROR_ST0_RD()      (HW_MIPI_DSI_ERROR_ST0.U)
#define HW_MIPI_DSI_ERROR_ST0_WR(v)     (HW_MIPI_DSI_ERROR_ST0.U = (v))
#define HW_MIPI_DSI_ERROR_ST0_SET(v)    (HW_MIPI_DSI_ERROR_ST0_WR(HW_MIPI_DSI_ERROR_ST0_RD() |  (v)))
#define HW_MIPI_DSI_ERROR_ST0_CLR(v)    (HW_MIPI_DSI_ERROR_ST0_WR(HW_MIPI_DSI_ERROR_ST0_RD() & ~(v)))
#define HW_MIPI_DSI_ERROR_ST0_TOG(v)    (HW_MIPI_DSI_ERROR_ST0_WR(HW_MIPI_DSI_ERROR_ST0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_ERROR_ST0 bitfields
 */

/* --- Register HW_MIPI_DSI_ERROR_ST0, field ACK_WITH_ERR_0[0] (RW)
 *
 * Retrieves SoT Error from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_0      (0)      //!< Bit position for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_0.
#define BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_0      (0x00000001)  //!< Bit mask for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_0.

//! @brief Get value of MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_0 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_0) >> BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_0)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_0.
#define BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_0) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_0 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_0(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_0) | BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_0(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field ACK_WITH_ERR_1[1] (RW)
 *
 * Retrieves SoT Sync Error from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_1      (1)      //!< Bit position for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_1.
#define BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_1      (0x00000002)  //!< Bit mask for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_1.

//! @brief Get value of MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_1 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_1) >> BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_1)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_1.
#define BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_1) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_1 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_1(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_1) | BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_1(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field ACK_WITH_ERR_2[2] (RW)
 *
 * Retrieves EoT Sync Error from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_2      (2)      //!< Bit position for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_2.
#define BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_2      (0x00000004)  //!< Bit mask for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_2.

//! @brief Get value of MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_2 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_2) >> BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_2)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_2.
#define BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_2) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_2 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_2(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_2) | BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_2(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field ACK_WITH_ERR_3[3] (RW)
 *
 * Retrieves Escape Mode Entry Command Error from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_3      (3)      //!< Bit position for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_3.
#define BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_3      (0x00000008)  //!< Bit mask for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_3.

//! @brief Get value of MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_3 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_3) >> BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_3)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_3.
#define BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_3) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_3 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_3(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_3) | BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_3(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field ACK_WITH_ERR_4[4] (RW)
 *
 * Retrieves Low-Power Transmit Sync Error from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_4      (4)      //!< Bit position for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_4.
#define BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_4      (0x00000010)  //!< Bit mask for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_4.

//! @brief Get value of MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_4 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_4(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_4) >> BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_4)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_4.
#define BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_4(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_4) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_4)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_4 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_4(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_4) | BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_4(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field ACK_WITH_ERR_5[5] (RW)
 *
 * Retrieves HS Receive Timeout Error from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_5      (5)      //!< Bit position for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_5.
#define BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_5      (0x00000020)  //!< Bit mask for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_5.

//! @brief Get value of MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_5 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_5(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_5) >> BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_5)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_5.
#define BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_5(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_5) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_5)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_5 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_5(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_5) | BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_5(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field ACK_WITH_ERR_6[6] (RW)
 *
 * Retrieves False Control Error from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_6      (6)      //!< Bit position for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_6.
#define BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_6      (0x00000040)  //!< Bit mask for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_6.

//! @brief Get value of MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_6 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_6(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_6) >> BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_6)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_6.
#define BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_6(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_6) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_6)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_6 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_6(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_6) | BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_6(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field ACK_WITH_ERR_7[7] (RW)
 *
 * Retrieves Reserved (specific to device) from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_7      (7)      //!< Bit position for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_7.
#define BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_7      (0x00000080)  //!< Bit mask for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_7.

//! @brief Get value of MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_7 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_7(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_7) >> BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_7)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_7.
#define BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_7(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_7) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_7)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_7 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_7(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_7) | BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_7(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field ACK_WITH_ERR_8[8] (RW)
 *
 * Retrieves ECC Error, single-bit (detected and corrected) from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_8      (8)      //!< Bit position for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_8.
#define BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_8      (0x00000100)  //!< Bit mask for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_8.

//! @brief Get value of MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_8 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_8(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_8) >> BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_8)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_8.
#define BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_8(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_8) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_8)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_8 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_8(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_8) | BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_8(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field ACK_WITH_ERR_9[9] (RW)
 *
 * Retrieves ECC Error, multi-bit (detected, not corrected) from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_9      (9)      //!< Bit position for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_9.
#define BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_9      (0x00000200)  //!< Bit mask for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_9.

//! @brief Get value of MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_9 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_9(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_9) >> BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_9)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_9.
#define BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_9(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_9) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_9)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_9 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_9(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_9) | BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_9(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field ACK_WITH_ERR_10[10] (RW)
 *
 * Retrieves Checksum Error (Long packet only) from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_10      (10)      //!< Bit position for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_10.
#define BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_10      (0x00000400)  //!< Bit mask for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_10.

//! @brief Get value of MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_10 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_10(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_10) >> BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_10)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_10.
#define BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_10(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_10) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_10)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_10 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_10(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_10) | BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_10(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field ACK_WITH_ERR_11[11] (RW)
 *
 * Retrieves DSI Data Type Not Recognized from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_11      (11)      //!< Bit position for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_11.
#define BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_11      (0x00000800)  //!< Bit mask for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_11.

//! @brief Get value of MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_11 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_11(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_11) >> BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_11)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_11.
#define BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_11(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_11) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_11)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_11 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_11(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_11) | BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_11(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field ACK_WITH_ERR_12[12] (RW)
 *
 * Retrieves DSI VC ID Invalid from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_12      (12)      //!< Bit position for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_12.
#define BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_12      (0x00001000)  //!< Bit mask for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_12.

//! @brief Get value of MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_12 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_12(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_12) >> BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_12)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_12.
#define BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_12(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_12) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_12)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_12 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_12(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_12) | BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_12(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field ACK_WITH_ERR_13[13] (RW)
 *
 * Retrieves Invalid Transmission Length from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_13      (13)      //!< Bit position for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_13.
#define BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_13      (0x00002000)  //!< Bit mask for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_13.

//! @brief Get value of MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_13 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_13(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_13) >> BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_13)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_13.
#define BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_13(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_13) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_13)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_13 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_13(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_13) | BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_13(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field ACK_WITH_ERR_14[14] (RW)
 *
 * Retrieves Reserved (specific to device) from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_14      (14)      //!< Bit position for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_14.
#define BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_14      (0x00004000)  //!< Bit mask for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_14.

//! @brief Get value of MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_14 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_14(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_14) >> BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_14)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_14.
#define BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_14(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_14) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_14)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_14 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_14(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_14) | BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_14(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field ACK_WITH_ERR_15[15] (RW)
 *
 * Retrieves DSI Protocol Violation from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_15      (15)      //!< Bit position for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_15.
#define BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_15      (0x00008000)  //!< Bit mask for MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_15.

//! @brief Get value of MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_15 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_15(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_15) >> BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_15)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_15.
#define BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_15(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_15) & BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_15)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_15 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_15(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_15) | BF_MIPI_DSI_ERROR_ST0_ACK_WITH_ERR_15(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field DPHY_ERRORS_0[16] (RW)
 *
 * ErrEsc Escape Entry Error from Lane 0
 */

#define BP_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_0      (16)      //!< Bit position for MIPI_DSI_ERROR_ST0_DPHY_ERRORS_0.
#define BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_0      (0x00010000)  //!< Bit mask for MIPI_DSI_ERROR_ST0_DPHY_ERRORS_0.

//! @brief Get value of MIPI_DSI_ERROR_ST0_DPHY_ERRORS_0 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_0) >> BP_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_0)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_DPHY_ERRORS_0.
#define BF_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_0) & BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPHY_ERRORS_0 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_0(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_0) | BF_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_0(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field DPHY_ERRORS_1[17] (RW)
 *
 * ErrSyncEsc Low-Power Data Transmission Synchronization Error from Lane 0
 */

#define BP_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_1      (17)      //!< Bit position for MIPI_DSI_ERROR_ST0_DPHY_ERRORS_1.
#define BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_1      (0x00020000)  //!< Bit mask for MIPI_DSI_ERROR_ST0_DPHY_ERRORS_1.

//! @brief Get value of MIPI_DSI_ERROR_ST0_DPHY_ERRORS_1 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_1) >> BP_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_1)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_DPHY_ERRORS_1.
#define BF_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_1) & BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPHY_ERRORS_1 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_1(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_1) | BF_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_1(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field DPHY_ERRORS_2[18] (RW)
 *
 * ErrControl Control Error from Lane 0
 */

#define BP_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_2      (18)      //!< Bit position for MIPI_DSI_ERROR_ST0_DPHY_ERRORS_2.
#define BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_2      (0x00040000)  //!< Bit mask for MIPI_DSI_ERROR_ST0_DPHY_ERRORS_2.

//! @brief Get value of MIPI_DSI_ERROR_ST0_DPHY_ERRORS_2 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_2) >> BP_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_2)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_DPHY_ERRORS_2.
#define BF_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_2) & BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPHY_ERRORS_2 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_2(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_2) | BF_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_2(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field DPHY_ERRORS_3[19] (RW)
 *
 * ErrContentionLP0 LP0 Contention Error from Lane 0
 */

#define BP_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_3      (19)      //!< Bit position for MIPI_DSI_ERROR_ST0_DPHY_ERRORS_3.
#define BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_3      (0x00080000)  //!< Bit mask for MIPI_DSI_ERROR_ST0_DPHY_ERRORS_3.

//! @brief Get value of MIPI_DSI_ERROR_ST0_DPHY_ERRORS_3 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_3) >> BP_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_3)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_DPHY_ERRORS_3.
#define BF_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_3) & BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPHY_ERRORS_3 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_3(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_3) | BF_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_3(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST0, field DPHY_ERRORS_4[20] (RW)
 *
 * ErrContentionLP1 LP1 Contention Error from Lane 0
 */

#define BP_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_4      (20)      //!< Bit position for MIPI_DSI_ERROR_ST0_DPHY_ERRORS_4.
#define BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_4      (0x00100000)  //!< Bit mask for MIPI_DSI_ERROR_ST0_DPHY_ERRORS_4.

//! @brief Get value of MIPI_DSI_ERROR_ST0_DPHY_ERRORS_4 from a register value.
#define BG_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_4(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_4) >> BP_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_4)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST0_DPHY_ERRORS_4.
#define BF_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_4(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_4) & BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_4)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPHY_ERRORS_4 field to a new value.
#define BW_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_4(v)   (HW_MIPI_DSI_ERROR_ST0_WR((HW_MIPI_DSI_ERROR_ST0_RD() & ~BM_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_4) | BF_MIPI_DSI_ERROR_ST0_DPHY_ERRORS_4(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_ERROR_ST1 - Interrupt status register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_ERROR_ST1 - Interrupt status register 1 (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x48  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_error_st1
{
    reg32_t U;
    struct _hw_mipi_dsi_error_st1_bitfields
    {
        unsigned TO_HS_TX : 1; //!< [0] High Speed Transmission Time Out Counter reached the end and Contention Detection as been detected
        unsigned TO_LP_RX : 1; //!< [1] Low Power Reception Time Out Counter reached the end and Contention Detection as been detected
        unsigned ECC_SINLGE_ERR : 1; //!< [2] ECC single error was detected and corrected in a received packet
        unsigned ECC_MULTI_ERR : 1; //!< [3] ECC multiple error was detected in a received packet
        unsigned CRC_ERR : 1; //!< [4] CRC error was detected in the received packet payload
        unsigned PKT_SIZE_ERR : 1; //!< [5] Packet size error was detected during packet reception
        unsigned EOPT_ERR : 1; //!< [6] EOTp Packet not received at the end of the incoming peripheral transmission
        unsigned DPI_PLD_WR_ERR : 1; //!< [7] During a DPI pixel line storage the payload FIFO went full and data stored is corrupted
        unsigned GEN_CMD_WR_ERR : 1; //!< [8] System tried to write a command through the generic interface and FIFO was full, therefore the command was not written
        unsigned GEN_PLD_WR_ERR : 1; //!< [9] System tried to write a payload data through the generic interface and FIFO was full, therefore the payload was not written
        unsigned GEN_PLD_SEND_ERR : 1; //!< [10] During a generic interface packet build, the payload FIFO went empty and data was sent corrupted
        unsigned GEN_PLD_RD_ERR : 1; //!< [11] During a DCS read data, the payload FIFO went empty and data was send to the interface corrupted
        unsigned GEN_PLD_RECV_ERR : 1; //!< [12] During a generic interface packet read back, the payload FIFO went full and received data was corrupted
        unsigned DBI_CMD_WR_ERR : 1; //!< [13] System tried to write a command through the DBI but the command FIFO was full, therefore the command was not written
        unsigned DBI_PLD_WR_ERR : 1; //!< [14] System tried to write payload data through the DBI interface and the FIFO was full, therefore the Command was not written
        unsigned DBI_PLD_RD_ERR : 1; //!< [15] During a DCS read data, the payload FIFO went empty and data was send to the interface corrupted
        unsigned DBI_PLD_RECV_ERR : 1; //!< [16] During a DBI read back packet, the payload FIFO went full and received data was corrupted
        unsigned DBI_ILLEGAL_COMM_ERR : 1; //!< [17] Attempt to write an illegal command on the DPI interface and core blocked by transmission
        unsigned RESERVED0 : 14; //!< [31:18] Reserved
    } B;
} hw_mipi_dsi_error_st1_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_ERROR_ST1 register
 */
#define HW_MIPI_DSI_ERROR_ST1_ADDR      (REGS_MIPI_DSI_BASE + 0x48)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_ERROR_ST1           (*(volatile hw_mipi_dsi_error_st1_t *) HW_MIPI_DSI_ERROR_ST1_ADDR)
#define HW_MIPI_DSI_ERROR_ST1_RD()      (HW_MIPI_DSI_ERROR_ST1.U)
#define HW_MIPI_DSI_ERROR_ST1_WR(v)     (HW_MIPI_DSI_ERROR_ST1.U = (v))
#define HW_MIPI_DSI_ERROR_ST1_SET(v)    (HW_MIPI_DSI_ERROR_ST1_WR(HW_MIPI_DSI_ERROR_ST1_RD() |  (v)))
#define HW_MIPI_DSI_ERROR_ST1_CLR(v)    (HW_MIPI_DSI_ERROR_ST1_WR(HW_MIPI_DSI_ERROR_ST1_RD() & ~(v)))
#define HW_MIPI_DSI_ERROR_ST1_TOG(v)    (HW_MIPI_DSI_ERROR_ST1_WR(HW_MIPI_DSI_ERROR_ST1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_ERROR_ST1 bitfields
 */

/* --- Register HW_MIPI_DSI_ERROR_ST1, field TO_HS_TX[0] (RW)
 *
 * High Speed Transmission Time Out Counter reached the end and Contention Detection as been
 * detected
 */

#define BP_MIPI_DSI_ERROR_ST1_TO_HS_TX      (0)      //!< Bit position for MIPI_DSI_ERROR_ST1_TO_HS_TX.
#define BM_MIPI_DSI_ERROR_ST1_TO_HS_TX      (0x00000001)  //!< Bit mask for MIPI_DSI_ERROR_ST1_TO_HS_TX.

//! @brief Get value of MIPI_DSI_ERROR_ST1_TO_HS_TX from a register value.
#define BG_MIPI_DSI_ERROR_ST1_TO_HS_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_TO_HS_TX) >> BP_MIPI_DSI_ERROR_ST1_TO_HS_TX)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_TO_HS_TX.
#define BF_MIPI_DSI_ERROR_ST1_TO_HS_TX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_TO_HS_TX) & BM_MIPI_DSI_ERROR_ST1_TO_HS_TX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TO_HS_TX field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_TO_HS_TX(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_TO_HS_TX) | BF_MIPI_DSI_ERROR_ST1_TO_HS_TX(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field TO_LP_RX[1] (RW)
 *
 * Low Power Reception Time Out Counter reached the end and Contention Detection as been detected
 */

#define BP_MIPI_DSI_ERROR_ST1_TO_LP_RX      (1)      //!< Bit position for MIPI_DSI_ERROR_ST1_TO_LP_RX.
#define BM_MIPI_DSI_ERROR_ST1_TO_LP_RX      (0x00000002)  //!< Bit mask for MIPI_DSI_ERROR_ST1_TO_LP_RX.

//! @brief Get value of MIPI_DSI_ERROR_ST1_TO_LP_RX from a register value.
#define BG_MIPI_DSI_ERROR_ST1_TO_LP_RX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_TO_LP_RX) >> BP_MIPI_DSI_ERROR_ST1_TO_LP_RX)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_TO_LP_RX.
#define BF_MIPI_DSI_ERROR_ST1_TO_LP_RX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_TO_LP_RX) & BM_MIPI_DSI_ERROR_ST1_TO_LP_RX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TO_LP_RX field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_TO_LP_RX(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_TO_LP_RX) | BF_MIPI_DSI_ERROR_ST1_TO_LP_RX(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field ECC_SINLGE_ERR[2] (RW)
 *
 * ECC single error was detected and corrected in a received packet
 */

#define BP_MIPI_DSI_ERROR_ST1_ECC_SINLGE_ERR      (2)      //!< Bit position for MIPI_DSI_ERROR_ST1_ECC_SINLGE_ERR.
#define BM_MIPI_DSI_ERROR_ST1_ECC_SINLGE_ERR      (0x00000004)  //!< Bit mask for MIPI_DSI_ERROR_ST1_ECC_SINLGE_ERR.

//! @brief Get value of MIPI_DSI_ERROR_ST1_ECC_SINLGE_ERR from a register value.
#define BG_MIPI_DSI_ERROR_ST1_ECC_SINLGE_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_ECC_SINLGE_ERR) >> BP_MIPI_DSI_ERROR_ST1_ECC_SINLGE_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_ECC_SINLGE_ERR.
#define BF_MIPI_DSI_ERROR_ST1_ECC_SINLGE_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_ECC_SINLGE_ERR) & BM_MIPI_DSI_ERROR_ST1_ECC_SINLGE_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ECC_SINLGE_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_ECC_SINLGE_ERR(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_ECC_SINLGE_ERR) | BF_MIPI_DSI_ERROR_ST1_ECC_SINLGE_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field ECC_MULTI_ERR[3] (RW)
 *
 * ECC multiple error was detected in a received packet
 */

#define BP_MIPI_DSI_ERROR_ST1_ECC_MULTI_ERR      (3)      //!< Bit position for MIPI_DSI_ERROR_ST1_ECC_MULTI_ERR.
#define BM_MIPI_DSI_ERROR_ST1_ECC_MULTI_ERR      (0x00000008)  //!< Bit mask for MIPI_DSI_ERROR_ST1_ECC_MULTI_ERR.

//! @brief Get value of MIPI_DSI_ERROR_ST1_ECC_MULTI_ERR from a register value.
#define BG_MIPI_DSI_ERROR_ST1_ECC_MULTI_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_ECC_MULTI_ERR) >> BP_MIPI_DSI_ERROR_ST1_ECC_MULTI_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_ECC_MULTI_ERR.
#define BF_MIPI_DSI_ERROR_ST1_ECC_MULTI_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_ECC_MULTI_ERR) & BM_MIPI_DSI_ERROR_ST1_ECC_MULTI_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ECC_MULTI_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_ECC_MULTI_ERR(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_ECC_MULTI_ERR) | BF_MIPI_DSI_ERROR_ST1_ECC_MULTI_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field CRC_ERR[4] (RW)
 *
 * CRC error was detected in the received packet payload
 */

#define BP_MIPI_DSI_ERROR_ST1_CRC_ERR      (4)      //!< Bit position for MIPI_DSI_ERROR_ST1_CRC_ERR.
#define BM_MIPI_DSI_ERROR_ST1_CRC_ERR      (0x00000010)  //!< Bit mask for MIPI_DSI_ERROR_ST1_CRC_ERR.

//! @brief Get value of MIPI_DSI_ERROR_ST1_CRC_ERR from a register value.
#define BG_MIPI_DSI_ERROR_ST1_CRC_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_CRC_ERR) >> BP_MIPI_DSI_ERROR_ST1_CRC_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_CRC_ERR.
#define BF_MIPI_DSI_ERROR_ST1_CRC_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_CRC_ERR) & BM_MIPI_DSI_ERROR_ST1_CRC_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CRC_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_CRC_ERR(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_CRC_ERR) | BF_MIPI_DSI_ERROR_ST1_CRC_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field PKT_SIZE_ERR[5] (RW)
 *
 * Packet size error was detected during packet reception
 */

#define BP_MIPI_DSI_ERROR_ST1_PKT_SIZE_ERR      (5)      //!< Bit position for MIPI_DSI_ERROR_ST1_PKT_SIZE_ERR.
#define BM_MIPI_DSI_ERROR_ST1_PKT_SIZE_ERR      (0x00000020)  //!< Bit mask for MIPI_DSI_ERROR_ST1_PKT_SIZE_ERR.

//! @brief Get value of MIPI_DSI_ERROR_ST1_PKT_SIZE_ERR from a register value.
#define BG_MIPI_DSI_ERROR_ST1_PKT_SIZE_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_PKT_SIZE_ERR) >> BP_MIPI_DSI_ERROR_ST1_PKT_SIZE_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_PKT_SIZE_ERR.
#define BF_MIPI_DSI_ERROR_ST1_PKT_SIZE_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_PKT_SIZE_ERR) & BM_MIPI_DSI_ERROR_ST1_PKT_SIZE_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PKT_SIZE_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_PKT_SIZE_ERR(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_PKT_SIZE_ERR) | BF_MIPI_DSI_ERROR_ST1_PKT_SIZE_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field EOPT_ERR[6] (RW)
 *
 * EOTp Packet not received at the end of the incoming peripheral transmission
 */

#define BP_MIPI_DSI_ERROR_ST1_EOPT_ERR      (6)      //!< Bit position for MIPI_DSI_ERROR_ST1_EOPT_ERR.
#define BM_MIPI_DSI_ERROR_ST1_EOPT_ERR      (0x00000040)  //!< Bit mask for MIPI_DSI_ERROR_ST1_EOPT_ERR.

//! @brief Get value of MIPI_DSI_ERROR_ST1_EOPT_ERR from a register value.
#define BG_MIPI_DSI_ERROR_ST1_EOPT_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_EOPT_ERR) >> BP_MIPI_DSI_ERROR_ST1_EOPT_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_EOPT_ERR.
#define BF_MIPI_DSI_ERROR_ST1_EOPT_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_EOPT_ERR) & BM_MIPI_DSI_ERROR_ST1_EOPT_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EOPT_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_EOPT_ERR(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_EOPT_ERR) | BF_MIPI_DSI_ERROR_ST1_EOPT_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field DPI_PLD_WR_ERR[7] (RW)
 *
 * During a DPI pixel line storage the payload FIFO went full and data stored is corrupted
 */

#define BP_MIPI_DSI_ERROR_ST1_DPI_PLD_WR_ERR      (7)      //!< Bit position for MIPI_DSI_ERROR_ST1_DPI_PLD_WR_ERR.
#define BM_MIPI_DSI_ERROR_ST1_DPI_PLD_WR_ERR      (0x00000080)  //!< Bit mask for MIPI_DSI_ERROR_ST1_DPI_PLD_WR_ERR.

//! @brief Get value of MIPI_DSI_ERROR_ST1_DPI_PLD_WR_ERR from a register value.
#define BG_MIPI_DSI_ERROR_ST1_DPI_PLD_WR_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_DPI_PLD_WR_ERR) >> BP_MIPI_DSI_ERROR_ST1_DPI_PLD_WR_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_DPI_PLD_WR_ERR.
#define BF_MIPI_DSI_ERROR_ST1_DPI_PLD_WR_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_DPI_PLD_WR_ERR) & BM_MIPI_DSI_ERROR_ST1_DPI_PLD_WR_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPI_PLD_WR_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_DPI_PLD_WR_ERR(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_DPI_PLD_WR_ERR) | BF_MIPI_DSI_ERROR_ST1_DPI_PLD_WR_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field GEN_CMD_WR_ERR[8] (RW)
 *
 * System tried to write a command through the generic interface and FIFO was full, therefore the
 * command was not written
 */

#define BP_MIPI_DSI_ERROR_ST1_GEN_CMD_WR_ERR      (8)      //!< Bit position for MIPI_DSI_ERROR_ST1_GEN_CMD_WR_ERR.
#define BM_MIPI_DSI_ERROR_ST1_GEN_CMD_WR_ERR      (0x00000100)  //!< Bit mask for MIPI_DSI_ERROR_ST1_GEN_CMD_WR_ERR.

//! @brief Get value of MIPI_DSI_ERROR_ST1_GEN_CMD_WR_ERR from a register value.
#define BG_MIPI_DSI_ERROR_ST1_GEN_CMD_WR_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_GEN_CMD_WR_ERR) >> BP_MIPI_DSI_ERROR_ST1_GEN_CMD_WR_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_GEN_CMD_WR_ERR.
#define BF_MIPI_DSI_ERROR_ST1_GEN_CMD_WR_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_GEN_CMD_WR_ERR) & BM_MIPI_DSI_ERROR_ST1_GEN_CMD_WR_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_CMD_WR_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_GEN_CMD_WR_ERR(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_GEN_CMD_WR_ERR) | BF_MIPI_DSI_ERROR_ST1_GEN_CMD_WR_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field GEN_PLD_WR_ERR[9] (RW)
 *
 * System tried to write a payload data through the generic interface and FIFO was full, therefore
 * the payload was not written
 */

#define BP_MIPI_DSI_ERROR_ST1_GEN_PLD_WR_ERR      (9)      //!< Bit position for MIPI_DSI_ERROR_ST1_GEN_PLD_WR_ERR.
#define BM_MIPI_DSI_ERROR_ST1_GEN_PLD_WR_ERR      (0x00000200)  //!< Bit mask for MIPI_DSI_ERROR_ST1_GEN_PLD_WR_ERR.

//! @brief Get value of MIPI_DSI_ERROR_ST1_GEN_PLD_WR_ERR from a register value.
#define BG_MIPI_DSI_ERROR_ST1_GEN_PLD_WR_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_GEN_PLD_WR_ERR) >> BP_MIPI_DSI_ERROR_ST1_GEN_PLD_WR_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_GEN_PLD_WR_ERR.
#define BF_MIPI_DSI_ERROR_ST1_GEN_PLD_WR_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_GEN_PLD_WR_ERR) & BM_MIPI_DSI_ERROR_ST1_GEN_PLD_WR_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_PLD_WR_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_GEN_PLD_WR_ERR(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_GEN_PLD_WR_ERR) | BF_MIPI_DSI_ERROR_ST1_GEN_PLD_WR_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field GEN_PLD_SEND_ERR[10] (RW)
 *
 * During a generic interface packet build, the payload FIFO went empty and data was sent corrupted
 */

#define BP_MIPI_DSI_ERROR_ST1_GEN_PLD_SEND_ERR      (10)      //!< Bit position for MIPI_DSI_ERROR_ST1_GEN_PLD_SEND_ERR.
#define BM_MIPI_DSI_ERROR_ST1_GEN_PLD_SEND_ERR      (0x00000400)  //!< Bit mask for MIPI_DSI_ERROR_ST1_GEN_PLD_SEND_ERR.

//! @brief Get value of MIPI_DSI_ERROR_ST1_GEN_PLD_SEND_ERR from a register value.
#define BG_MIPI_DSI_ERROR_ST1_GEN_PLD_SEND_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_GEN_PLD_SEND_ERR) >> BP_MIPI_DSI_ERROR_ST1_GEN_PLD_SEND_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_GEN_PLD_SEND_ERR.
#define BF_MIPI_DSI_ERROR_ST1_GEN_PLD_SEND_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_GEN_PLD_SEND_ERR) & BM_MIPI_DSI_ERROR_ST1_GEN_PLD_SEND_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_PLD_SEND_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_GEN_PLD_SEND_ERR(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_GEN_PLD_SEND_ERR) | BF_MIPI_DSI_ERROR_ST1_GEN_PLD_SEND_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field GEN_PLD_RD_ERR[11] (RW)
 *
 * During a DCS read data, the payload FIFO went empty and data was send to the interface corrupted
 */

#define BP_MIPI_DSI_ERROR_ST1_GEN_PLD_RD_ERR      (11)      //!< Bit position for MIPI_DSI_ERROR_ST1_GEN_PLD_RD_ERR.
#define BM_MIPI_DSI_ERROR_ST1_GEN_PLD_RD_ERR      (0x00000800)  //!< Bit mask for MIPI_DSI_ERROR_ST1_GEN_PLD_RD_ERR.

//! @brief Get value of MIPI_DSI_ERROR_ST1_GEN_PLD_RD_ERR from a register value.
#define BG_MIPI_DSI_ERROR_ST1_GEN_PLD_RD_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_GEN_PLD_RD_ERR) >> BP_MIPI_DSI_ERROR_ST1_GEN_PLD_RD_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_GEN_PLD_RD_ERR.
#define BF_MIPI_DSI_ERROR_ST1_GEN_PLD_RD_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_GEN_PLD_RD_ERR) & BM_MIPI_DSI_ERROR_ST1_GEN_PLD_RD_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_PLD_RD_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_GEN_PLD_RD_ERR(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_GEN_PLD_RD_ERR) | BF_MIPI_DSI_ERROR_ST1_GEN_PLD_RD_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field GEN_PLD_RECV_ERR[12] (RW)
 *
 * During a generic interface packet read back, the payload FIFO went full and received data was
 * corrupted
 */

#define BP_MIPI_DSI_ERROR_ST1_GEN_PLD_RECV_ERR      (12)      //!< Bit position for MIPI_DSI_ERROR_ST1_GEN_PLD_RECV_ERR.
#define BM_MIPI_DSI_ERROR_ST1_GEN_PLD_RECV_ERR      (0x00001000)  //!< Bit mask for MIPI_DSI_ERROR_ST1_GEN_PLD_RECV_ERR.

//! @brief Get value of MIPI_DSI_ERROR_ST1_GEN_PLD_RECV_ERR from a register value.
#define BG_MIPI_DSI_ERROR_ST1_GEN_PLD_RECV_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_GEN_PLD_RECV_ERR) >> BP_MIPI_DSI_ERROR_ST1_GEN_PLD_RECV_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_GEN_PLD_RECV_ERR.
#define BF_MIPI_DSI_ERROR_ST1_GEN_PLD_RECV_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_GEN_PLD_RECV_ERR) & BM_MIPI_DSI_ERROR_ST1_GEN_PLD_RECV_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_PLD_RECV_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_GEN_PLD_RECV_ERR(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_GEN_PLD_RECV_ERR) | BF_MIPI_DSI_ERROR_ST1_GEN_PLD_RECV_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field DBI_CMD_WR_ERR[13] (RW)
 *
 * System tried to write a command through the DBI but the command FIFO was full, therefore the
 * command was not written
 */

#define BP_MIPI_DSI_ERROR_ST1_DBI_CMD_WR_ERR      (13)      //!< Bit position for MIPI_DSI_ERROR_ST1_DBI_CMD_WR_ERR.
#define BM_MIPI_DSI_ERROR_ST1_DBI_CMD_WR_ERR      (0x00002000)  //!< Bit mask for MIPI_DSI_ERROR_ST1_DBI_CMD_WR_ERR.

//! @brief Get value of MIPI_DSI_ERROR_ST1_DBI_CMD_WR_ERR from a register value.
#define BG_MIPI_DSI_ERROR_ST1_DBI_CMD_WR_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_DBI_CMD_WR_ERR) >> BP_MIPI_DSI_ERROR_ST1_DBI_CMD_WR_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_DBI_CMD_WR_ERR.
#define BF_MIPI_DSI_ERROR_ST1_DBI_CMD_WR_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_DBI_CMD_WR_ERR) & BM_MIPI_DSI_ERROR_ST1_DBI_CMD_WR_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_CMD_WR_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_DBI_CMD_WR_ERR(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_DBI_CMD_WR_ERR) | BF_MIPI_DSI_ERROR_ST1_DBI_CMD_WR_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field DBI_PLD_WR_ERR[14] (RW)
 *
 * System tried to write payload data through the DBI interface and the FIFO was full, therefore the
 * Command was not written
 */

#define BP_MIPI_DSI_ERROR_ST1_DBI_PLD_WR_ERR      (14)      //!< Bit position for MIPI_DSI_ERROR_ST1_DBI_PLD_WR_ERR.
#define BM_MIPI_DSI_ERROR_ST1_DBI_PLD_WR_ERR      (0x00004000)  //!< Bit mask for MIPI_DSI_ERROR_ST1_DBI_PLD_WR_ERR.

//! @brief Get value of MIPI_DSI_ERROR_ST1_DBI_PLD_WR_ERR from a register value.
#define BG_MIPI_DSI_ERROR_ST1_DBI_PLD_WR_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_DBI_PLD_WR_ERR) >> BP_MIPI_DSI_ERROR_ST1_DBI_PLD_WR_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_DBI_PLD_WR_ERR.
#define BF_MIPI_DSI_ERROR_ST1_DBI_PLD_WR_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_DBI_PLD_WR_ERR) & BM_MIPI_DSI_ERROR_ST1_DBI_PLD_WR_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_PLD_WR_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_DBI_PLD_WR_ERR(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_DBI_PLD_WR_ERR) | BF_MIPI_DSI_ERROR_ST1_DBI_PLD_WR_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field DBI_PLD_RD_ERR[15] (RW)
 *
 * During a DCS read data, the payload FIFO went empty and data was send to the interface corrupted
 */

#define BP_MIPI_DSI_ERROR_ST1_DBI_PLD_RD_ERR      (15)      //!< Bit position for MIPI_DSI_ERROR_ST1_DBI_PLD_RD_ERR.
#define BM_MIPI_DSI_ERROR_ST1_DBI_PLD_RD_ERR      (0x00008000)  //!< Bit mask for MIPI_DSI_ERROR_ST1_DBI_PLD_RD_ERR.

//! @brief Get value of MIPI_DSI_ERROR_ST1_DBI_PLD_RD_ERR from a register value.
#define BG_MIPI_DSI_ERROR_ST1_DBI_PLD_RD_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_DBI_PLD_RD_ERR) >> BP_MIPI_DSI_ERROR_ST1_DBI_PLD_RD_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_DBI_PLD_RD_ERR.
#define BF_MIPI_DSI_ERROR_ST1_DBI_PLD_RD_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_DBI_PLD_RD_ERR) & BM_MIPI_DSI_ERROR_ST1_DBI_PLD_RD_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_PLD_RD_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_DBI_PLD_RD_ERR(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_DBI_PLD_RD_ERR) | BF_MIPI_DSI_ERROR_ST1_DBI_PLD_RD_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field DBI_PLD_RECV_ERR[16] (RW)
 *
 * During a DBI read back packet, the payload FIFO went full and received data was corrupted
 */

#define BP_MIPI_DSI_ERROR_ST1_DBI_PLD_RECV_ERR      (16)      //!< Bit position for MIPI_DSI_ERROR_ST1_DBI_PLD_RECV_ERR.
#define BM_MIPI_DSI_ERROR_ST1_DBI_PLD_RECV_ERR      (0x00010000)  //!< Bit mask for MIPI_DSI_ERROR_ST1_DBI_PLD_RECV_ERR.

//! @brief Get value of MIPI_DSI_ERROR_ST1_DBI_PLD_RECV_ERR from a register value.
#define BG_MIPI_DSI_ERROR_ST1_DBI_PLD_RECV_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_DBI_PLD_RECV_ERR) >> BP_MIPI_DSI_ERROR_ST1_DBI_PLD_RECV_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_DBI_PLD_RECV_ERR.
#define BF_MIPI_DSI_ERROR_ST1_DBI_PLD_RECV_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_DBI_PLD_RECV_ERR) & BM_MIPI_DSI_ERROR_ST1_DBI_PLD_RECV_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_PLD_RECV_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_DBI_PLD_RECV_ERR(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_DBI_PLD_RECV_ERR) | BF_MIPI_DSI_ERROR_ST1_DBI_PLD_RECV_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_ST1, field DBI_ILLEGAL_COMM_ERR[17] (RW)
 *
 * Attempt to write an illegal command on the DPI interface and core blocked by transmission
 */

#define BP_MIPI_DSI_ERROR_ST1_DBI_ILLEGAL_COMM_ERR      (17)      //!< Bit position for MIPI_DSI_ERROR_ST1_DBI_ILLEGAL_COMM_ERR.
#define BM_MIPI_DSI_ERROR_ST1_DBI_ILLEGAL_COMM_ERR      (0x00020000)  //!< Bit mask for MIPI_DSI_ERROR_ST1_DBI_ILLEGAL_COMM_ERR.

//! @brief Get value of MIPI_DSI_ERROR_ST1_DBI_ILLEGAL_COMM_ERR from a register value.
#define BG_MIPI_DSI_ERROR_ST1_DBI_ILLEGAL_COMM_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_ST1_DBI_ILLEGAL_COMM_ERR) >> BP_MIPI_DSI_ERROR_ST1_DBI_ILLEGAL_COMM_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_ST1_DBI_ILLEGAL_COMM_ERR.
#define BF_MIPI_DSI_ERROR_ST1_DBI_ILLEGAL_COMM_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_ST1_DBI_ILLEGAL_COMM_ERR) & BM_MIPI_DSI_ERROR_ST1_DBI_ILLEGAL_COMM_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_ILLEGAL_COMM_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_ST1_DBI_ILLEGAL_COMM_ERR(v)   (HW_MIPI_DSI_ERROR_ST1_WR((HW_MIPI_DSI_ERROR_ST1_RD() & ~BM_MIPI_DSI_ERROR_ST1_DBI_ILLEGAL_COMM_ERR) | BF_MIPI_DSI_ERROR_ST1_DBI_ILLEGAL_COMM_ERR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_ERROR_MSK0 - Masks Interrupt generation trigged by ERROR_ST0 register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_ERROR_MSK0 - Masks Interrupt generation trigged by ERROR_ST0 register (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x4c  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_error_msk0
{
    reg32_t U;
    struct _hw_mipi_dsi_error_msk0_bitfields
    {
        unsigned ACK_WITH_ERR_0 : 1; //!< [0] Masks SoT Error from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_1 : 1; //!< [1] Masks SoT Sync Error from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_2 : 1; //!< [2] Masks EoT Sync Error from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_3 : 1; //!< [3] Masks Escape Mode Entry Command Error from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_4 : 1; //!< [4] Masks Low-Power Transmit Sync Error from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_5 : 1; //!< [5] Masks HS Receive Timeout Error from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_6 : 1; //!< [6] Masks False Control Error from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_7 : 1; //!< [7] Masks Reserved (specific to device) from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_8 : 1; //!< [8] Masks ECC Error, single-bit (detected and corrected) from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_9 : 1; //!< [9] Masks ECC Error, multi-bit (detected, not corrected) from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_10 : 1; //!< [10] Masks Checksum Error (Long packet only) from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_11 : 1; //!< [11] Masks DSI Data Type Not Recognized from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_12 : 1; //!< [12] Masks DSI VC ID Invalid from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_13 : 1; //!< [13] Masks Invalid Transmission Length from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_14 : 1; //!< [14] Masks Reserved (specific to device) from Display Acknowledge Error Report
        unsigned ACK_WITH_ERR_15 : 1; //!< [15] Masks DSI Protocol Violation from Display Acknowledge Error Report
        unsigned DPHY_ERRORS_0 : 1; //!< [16] ErrEsc Escape Entry Error from Lane 0
        unsigned DPHY_ERRORS_1 : 1; //!< [17] ErrSyncEsc Low-Power Data Transmission Synchronization Error from Lane 0
        unsigned DPHY_ERRORS_2 : 1; //!< [18] ErrControl Control Error from Lane 0
        unsigned DPHY_ERRORS_3 : 1; //!< [19] ErrContentionLP0 LP0 Contention Error from Lane 0
        unsigned DPHY_ERRORS_4 : 1; //!< [20] ErrContentionLP1 LP1 Contention Error from Lane 0
        unsigned RESERVED0 : 11; //!< [31:21] Reserved
    } B;
} hw_mipi_dsi_error_msk0_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_ERROR_MSK0 register
 */
#define HW_MIPI_DSI_ERROR_MSK0_ADDR      (REGS_MIPI_DSI_BASE + 0x4c)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_ERROR_MSK0           (*(volatile hw_mipi_dsi_error_msk0_t *) HW_MIPI_DSI_ERROR_MSK0_ADDR)
#define HW_MIPI_DSI_ERROR_MSK0_RD()      (HW_MIPI_DSI_ERROR_MSK0.U)
#define HW_MIPI_DSI_ERROR_MSK0_WR(v)     (HW_MIPI_DSI_ERROR_MSK0.U = (v))
#define HW_MIPI_DSI_ERROR_MSK0_SET(v)    (HW_MIPI_DSI_ERROR_MSK0_WR(HW_MIPI_DSI_ERROR_MSK0_RD() |  (v)))
#define HW_MIPI_DSI_ERROR_MSK0_CLR(v)    (HW_MIPI_DSI_ERROR_MSK0_WR(HW_MIPI_DSI_ERROR_MSK0_RD() & ~(v)))
#define HW_MIPI_DSI_ERROR_MSK0_TOG(v)    (HW_MIPI_DSI_ERROR_MSK0_WR(HW_MIPI_DSI_ERROR_MSK0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_ERROR_MSK0 bitfields
 */

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field ACK_WITH_ERR_0[0] (RW)
 *
 * Masks SoT Error from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_0      (0)      //!< Bit position for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_0.
#define BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_0      (0x00000001)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_0.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_0 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_0) >> BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_0)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_0.
#define BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_0) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_0 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_0(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_0) | BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_0(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field ACK_WITH_ERR_1[1] (RW)
 *
 * Masks SoT Sync Error from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_1      (1)      //!< Bit position for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_1.
#define BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_1      (0x00000002)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_1.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_1 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_1) >> BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_1)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_1.
#define BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_1) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_1 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_1(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_1) | BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_1(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field ACK_WITH_ERR_2[2] (RW)
 *
 * Masks EoT Sync Error from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_2      (2)      //!< Bit position for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_2.
#define BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_2      (0x00000004)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_2.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_2 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_2) >> BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_2)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_2.
#define BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_2) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_2 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_2(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_2) | BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_2(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field ACK_WITH_ERR_3[3] (RW)
 *
 * Masks Escape Mode Entry Command Error from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_3      (3)      //!< Bit position for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_3.
#define BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_3      (0x00000008)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_3.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_3 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_3) >> BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_3)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_3.
#define BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_3) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_3 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_3(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_3) | BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_3(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field ACK_WITH_ERR_4[4] (RW)
 *
 * Masks Low-Power Transmit Sync Error from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_4      (4)      //!< Bit position for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_4.
#define BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_4      (0x00000010)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_4.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_4 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_4(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_4) >> BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_4)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_4.
#define BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_4(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_4) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_4)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_4 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_4(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_4) | BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_4(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field ACK_WITH_ERR_5[5] (RW)
 *
 * Masks HS Receive Timeout Error from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_5      (5)      //!< Bit position for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_5.
#define BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_5      (0x00000020)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_5.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_5 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_5(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_5) >> BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_5)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_5.
#define BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_5(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_5) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_5)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_5 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_5(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_5) | BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_5(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field ACK_WITH_ERR_6[6] (RW)
 *
 * Masks False Control Error from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_6      (6)      //!< Bit position for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_6.
#define BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_6      (0x00000040)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_6.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_6 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_6(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_6) >> BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_6)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_6.
#define BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_6(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_6) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_6)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_6 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_6(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_6) | BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_6(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field ACK_WITH_ERR_7[7] (RW)
 *
 * Masks Reserved (specific to device) from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_7      (7)      //!< Bit position for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_7.
#define BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_7      (0x00000080)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_7.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_7 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_7(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_7) >> BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_7)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_7.
#define BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_7(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_7) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_7)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_7 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_7(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_7) | BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_7(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field ACK_WITH_ERR_8[8] (RW)
 *
 * Masks ECC Error, single-bit (detected and corrected) from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_8      (8)      //!< Bit position for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_8.
#define BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_8      (0x00000100)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_8.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_8 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_8(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_8) >> BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_8)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_8.
#define BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_8(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_8) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_8)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_8 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_8(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_8) | BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_8(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field ACK_WITH_ERR_9[9] (RW)
 *
 * Masks ECC Error, multi-bit (detected, not corrected) from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_9      (9)      //!< Bit position for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_9.
#define BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_9      (0x00000200)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_9.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_9 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_9(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_9) >> BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_9)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_9.
#define BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_9(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_9) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_9)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_9 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_9(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_9) | BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_9(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field ACK_WITH_ERR_10[10] (RW)
 *
 * Masks Checksum Error (Long packet only) from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_10      (10)      //!< Bit position for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_10.
#define BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_10      (0x00000400)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_10.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_10 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_10(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_10) >> BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_10)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_10.
#define BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_10(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_10) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_10)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_10 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_10(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_10) | BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_10(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field ACK_WITH_ERR_11[11] (RW)
 *
 * Masks DSI Data Type Not Recognized from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_11      (11)      //!< Bit position for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_11.
#define BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_11      (0x00000800)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_11.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_11 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_11(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_11) >> BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_11)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_11.
#define BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_11(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_11) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_11)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_11 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_11(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_11) | BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_11(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field ACK_WITH_ERR_12[12] (RW)
 *
 * Masks DSI VC ID Invalid from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_12      (12)      //!< Bit position for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_12.
#define BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_12      (0x00001000)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_12.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_12 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_12(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_12) >> BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_12)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_12.
#define BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_12(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_12) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_12)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_12 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_12(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_12) | BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_12(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field ACK_WITH_ERR_13[13] (RW)
 *
 * Masks Invalid Transmission Length from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_13      (13)      //!< Bit position for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_13.
#define BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_13      (0x00002000)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_13.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_13 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_13(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_13) >> BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_13)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_13.
#define BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_13(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_13) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_13)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_13 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_13(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_13) | BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_13(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field ACK_WITH_ERR_14[14] (RW)
 *
 * Masks Reserved (specific to device) from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_14      (14)      //!< Bit position for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_14.
#define BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_14      (0x00004000)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_14.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_14 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_14(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_14) >> BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_14)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_14.
#define BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_14(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_14) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_14)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_14 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_14(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_14) | BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_14(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field ACK_WITH_ERR_15[15] (RW)
 *
 * Masks DSI Protocol Violation from Display Acknowledge Error Report
 */

#define BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_15      (15)      //!< Bit position for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_15.
#define BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_15      (0x00008000)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_15.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_15 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_15(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_15) >> BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_15)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_15.
#define BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_15(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_15) & BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_15)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ACK_WITH_ERR_15 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_15(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_15) | BF_MIPI_DSI_ERROR_MSK0_ACK_WITH_ERR_15(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field DPHY_ERRORS_0[16] (RW)
 *
 * ErrEsc Escape Entry Error from Lane 0
 */

#define BP_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_0      (16)      //!< Bit position for MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_0.
#define BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_0      (0x00010000)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_0.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_0 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_0) >> BP_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_0)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_0.
#define BF_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_0) & BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPHY_ERRORS_0 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_0(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_0) | BF_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_0(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field DPHY_ERRORS_1[17] (RW)
 *
 * ErrSyncEsc Low-Power Data Transmission Synchronization Error from Lane 0
 */

#define BP_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_1      (17)      //!< Bit position for MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_1.
#define BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_1      (0x00020000)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_1.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_1 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_1) >> BP_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_1)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_1.
#define BF_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_1) & BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPHY_ERRORS_1 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_1(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_1) | BF_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_1(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field DPHY_ERRORS_2[18] (RW)
 *
 * ErrControl Control Error from Lane 0
 */

#define BP_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_2      (18)      //!< Bit position for MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_2.
#define BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_2      (0x00040000)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_2.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_2 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_2) >> BP_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_2)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_2.
#define BF_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_2) & BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPHY_ERRORS_2 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_2(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_2) | BF_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_2(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field DPHY_ERRORS_3[19] (RW)
 *
 * ErrContentionLP0 LP0 Contention Error from Lane 0
 */

#define BP_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_3      (19)      //!< Bit position for MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_3.
#define BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_3      (0x00080000)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_3.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_3 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_3) >> BP_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_3)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_3.
#define BF_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_3) & BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPHY_ERRORS_3 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_3(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_3) | BF_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_3(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK0, field DPHY_ERRORS_4[20] (RW)
 *
 * ErrContentionLP1 LP1 Contention Error from Lane 0
 */

#define BP_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_4      (20)      //!< Bit position for MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_4.
#define BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_4      (0x00100000)  //!< Bit mask for MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_4.

//! @brief Get value of MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_4 from a register value.
#define BG_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_4(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_4) >> BP_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_4)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_4.
#define BF_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_4(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_4) & BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_4)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPHY_ERRORS_4 field to a new value.
#define BW_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_4(v)   (HW_MIPI_DSI_ERROR_MSK0_WR((HW_MIPI_DSI_ERROR_MSK0_RD() & ~BM_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_4) | BF_MIPI_DSI_ERROR_MSK0_DPHY_ERRORS_4(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_ERROR_MSK1 - Masks Interrupt generation trigged by ERROR_ST1 register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_ERROR_MSK1 - Masks Interrupt generation trigged by ERROR_ST1 register (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x50  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_error_msk1
{
    reg32_t U;
    struct _hw_mipi_dsi_error_msk1_bitfields
    {
        unsigned TO_HS_TX : 1; //!< [0] Masks High Speed Transmission Time Out Counter error
        unsigned TO_LP_RX : 1; //!< [1] Masks Low Power Reception Time Out Counter error
        unsigned ECC_SINLGE_ERR : 1; //!< [2] Masks ECC single error
        unsigned ECC_MULTI_ERR : 1; //!< [3] Masks ECC multiple error
        unsigned CRC_ERR : 1; //!< [4] Masks CRC error
        unsigned PKT_SIZE_ERR : 1; //!< [5] Masks Packet size error
        unsigned EOPT_ERR : 1; //!< [6] Masks EOTp Packet not received error
        unsigned DPI_PLD_WR_ERR : 1; //!< [7] Masks DPI pixel line payload FIFO full error
        unsigned GEN_CMD_WR_ERR : 1; //!< [8] Masks command FIFO of generic interface full error
        unsigned GEN_PLD_WR_ERR : 1; //!< [9] Masks payload data FIFO of generic interface full error
        unsigned GEN_PLD_SEND_ERR : 1; //!< [10] Masks generic interface packet build FIFO empty error
        unsigned GEN_PLD_RD_ERR : 1; //!< [11] Masks DCS read data payload FIFO empty error
        unsigned GEN_PLD_RECV_ERR : 1; //!< [12] Masks generic interface packet read back FIFO full error
        unsigned DBI_CMD_WR_ERR : 1; //!< [13] Masks DBI command FIFO full error
        unsigned DBI_PLD_WR_ERR : 1; //!< [14] Masks write payload data DBI FIFO full error
        unsigned DBI_PLD_RD_ERR : 1; //!< [15] Masks payload DBI FIFO empty error
        unsigned DBI_PLD_RECV_ERR : 1; //!< [16] Masks DBI read back packet payload FIFO full error
        unsigned DBI_ILLEGAL_COMM_ERR : 1; //!< [17] Masks error attempt to write an illegal command on DPI
        unsigned RESERVED0 : 14; //!< [31:18] Reserved
    } B;
} hw_mipi_dsi_error_msk1_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_ERROR_MSK1 register
 */
#define HW_MIPI_DSI_ERROR_MSK1_ADDR      (REGS_MIPI_DSI_BASE + 0x50)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_ERROR_MSK1           (*(volatile hw_mipi_dsi_error_msk1_t *) HW_MIPI_DSI_ERROR_MSK1_ADDR)
#define HW_MIPI_DSI_ERROR_MSK1_RD()      (HW_MIPI_DSI_ERROR_MSK1.U)
#define HW_MIPI_DSI_ERROR_MSK1_WR(v)     (HW_MIPI_DSI_ERROR_MSK1.U = (v))
#define HW_MIPI_DSI_ERROR_MSK1_SET(v)    (HW_MIPI_DSI_ERROR_MSK1_WR(HW_MIPI_DSI_ERROR_MSK1_RD() |  (v)))
#define HW_MIPI_DSI_ERROR_MSK1_CLR(v)    (HW_MIPI_DSI_ERROR_MSK1_WR(HW_MIPI_DSI_ERROR_MSK1_RD() & ~(v)))
#define HW_MIPI_DSI_ERROR_MSK1_TOG(v)    (HW_MIPI_DSI_ERROR_MSK1_WR(HW_MIPI_DSI_ERROR_MSK1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_ERROR_MSK1 bitfields
 */

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field TO_HS_TX[0] (RW)
 *
 * Masks High Speed Transmission Time Out Counter error
 */

#define BP_MIPI_DSI_ERROR_MSK1_TO_HS_TX      (0)      //!< Bit position for MIPI_DSI_ERROR_MSK1_TO_HS_TX.
#define BM_MIPI_DSI_ERROR_MSK1_TO_HS_TX      (0x00000001)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_TO_HS_TX.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_TO_HS_TX from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_TO_HS_TX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_TO_HS_TX) >> BP_MIPI_DSI_ERROR_MSK1_TO_HS_TX)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_TO_HS_TX.
#define BF_MIPI_DSI_ERROR_MSK1_TO_HS_TX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_TO_HS_TX) & BM_MIPI_DSI_ERROR_MSK1_TO_HS_TX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TO_HS_TX field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_TO_HS_TX(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_TO_HS_TX) | BF_MIPI_DSI_ERROR_MSK1_TO_HS_TX(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field TO_LP_RX[1] (RW)
 *
 * Masks Low Power Reception Time Out Counter error
 */

#define BP_MIPI_DSI_ERROR_MSK1_TO_LP_RX      (1)      //!< Bit position for MIPI_DSI_ERROR_MSK1_TO_LP_RX.
#define BM_MIPI_DSI_ERROR_MSK1_TO_LP_RX      (0x00000002)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_TO_LP_RX.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_TO_LP_RX from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_TO_LP_RX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_TO_LP_RX) >> BP_MIPI_DSI_ERROR_MSK1_TO_LP_RX)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_TO_LP_RX.
#define BF_MIPI_DSI_ERROR_MSK1_TO_LP_RX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_TO_LP_RX) & BM_MIPI_DSI_ERROR_MSK1_TO_LP_RX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TO_LP_RX field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_TO_LP_RX(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_TO_LP_RX) | BF_MIPI_DSI_ERROR_MSK1_TO_LP_RX(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field ECC_SINLGE_ERR[2] (RW)
 *
 * Masks ECC single error
 */

#define BP_MIPI_DSI_ERROR_MSK1_ECC_SINLGE_ERR      (2)      //!< Bit position for MIPI_DSI_ERROR_MSK1_ECC_SINLGE_ERR.
#define BM_MIPI_DSI_ERROR_MSK1_ECC_SINLGE_ERR      (0x00000004)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_ECC_SINLGE_ERR.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_ECC_SINLGE_ERR from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_ECC_SINLGE_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_ECC_SINLGE_ERR) >> BP_MIPI_DSI_ERROR_MSK1_ECC_SINLGE_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_ECC_SINLGE_ERR.
#define BF_MIPI_DSI_ERROR_MSK1_ECC_SINLGE_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_ECC_SINLGE_ERR) & BM_MIPI_DSI_ERROR_MSK1_ECC_SINLGE_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ECC_SINLGE_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_ECC_SINLGE_ERR(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_ECC_SINLGE_ERR) | BF_MIPI_DSI_ERROR_MSK1_ECC_SINLGE_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field ECC_MULTI_ERR[3] (RW)
 *
 * Masks ECC multiple error
 */

#define BP_MIPI_DSI_ERROR_MSK1_ECC_MULTI_ERR      (3)      //!< Bit position for MIPI_DSI_ERROR_MSK1_ECC_MULTI_ERR.
#define BM_MIPI_DSI_ERROR_MSK1_ECC_MULTI_ERR      (0x00000008)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_ECC_MULTI_ERR.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_ECC_MULTI_ERR from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_ECC_MULTI_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_ECC_MULTI_ERR) >> BP_MIPI_DSI_ERROR_MSK1_ECC_MULTI_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_ECC_MULTI_ERR.
#define BF_MIPI_DSI_ERROR_MSK1_ECC_MULTI_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_ECC_MULTI_ERR) & BM_MIPI_DSI_ERROR_MSK1_ECC_MULTI_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ECC_MULTI_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_ECC_MULTI_ERR(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_ECC_MULTI_ERR) | BF_MIPI_DSI_ERROR_MSK1_ECC_MULTI_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field CRC_ERR[4] (RW)
 *
 * Masks CRC error
 */

#define BP_MIPI_DSI_ERROR_MSK1_CRC_ERR      (4)      //!< Bit position for MIPI_DSI_ERROR_MSK1_CRC_ERR.
#define BM_MIPI_DSI_ERROR_MSK1_CRC_ERR      (0x00000010)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_CRC_ERR.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_CRC_ERR from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_CRC_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_CRC_ERR) >> BP_MIPI_DSI_ERROR_MSK1_CRC_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_CRC_ERR.
#define BF_MIPI_DSI_ERROR_MSK1_CRC_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_CRC_ERR) & BM_MIPI_DSI_ERROR_MSK1_CRC_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CRC_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_CRC_ERR(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_CRC_ERR) | BF_MIPI_DSI_ERROR_MSK1_CRC_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field PKT_SIZE_ERR[5] (RW)
 *
 * Masks Packet size error
 */

#define BP_MIPI_DSI_ERROR_MSK1_PKT_SIZE_ERR      (5)      //!< Bit position for MIPI_DSI_ERROR_MSK1_PKT_SIZE_ERR.
#define BM_MIPI_DSI_ERROR_MSK1_PKT_SIZE_ERR      (0x00000020)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_PKT_SIZE_ERR.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_PKT_SIZE_ERR from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_PKT_SIZE_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_PKT_SIZE_ERR) >> BP_MIPI_DSI_ERROR_MSK1_PKT_SIZE_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_PKT_SIZE_ERR.
#define BF_MIPI_DSI_ERROR_MSK1_PKT_SIZE_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_PKT_SIZE_ERR) & BM_MIPI_DSI_ERROR_MSK1_PKT_SIZE_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PKT_SIZE_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_PKT_SIZE_ERR(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_PKT_SIZE_ERR) | BF_MIPI_DSI_ERROR_MSK1_PKT_SIZE_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field EOPT_ERR[6] (RW)
 *
 * Masks EOTp Packet not received error
 */

#define BP_MIPI_DSI_ERROR_MSK1_EOPT_ERR      (6)      //!< Bit position for MIPI_DSI_ERROR_MSK1_EOPT_ERR.
#define BM_MIPI_DSI_ERROR_MSK1_EOPT_ERR      (0x00000040)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_EOPT_ERR.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_EOPT_ERR from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_EOPT_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_EOPT_ERR) >> BP_MIPI_DSI_ERROR_MSK1_EOPT_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_EOPT_ERR.
#define BF_MIPI_DSI_ERROR_MSK1_EOPT_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_EOPT_ERR) & BM_MIPI_DSI_ERROR_MSK1_EOPT_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EOPT_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_EOPT_ERR(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_EOPT_ERR) | BF_MIPI_DSI_ERROR_MSK1_EOPT_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field DPI_PLD_WR_ERR[7] (RW)
 *
 * Masks DPI pixel line payload FIFO full error
 */

#define BP_MIPI_DSI_ERROR_MSK1_DPI_PLD_WR_ERR      (7)      //!< Bit position for MIPI_DSI_ERROR_MSK1_DPI_PLD_WR_ERR.
#define BM_MIPI_DSI_ERROR_MSK1_DPI_PLD_WR_ERR      (0x00000080)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_DPI_PLD_WR_ERR.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_DPI_PLD_WR_ERR from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_DPI_PLD_WR_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_DPI_PLD_WR_ERR) >> BP_MIPI_DSI_ERROR_MSK1_DPI_PLD_WR_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_DPI_PLD_WR_ERR.
#define BF_MIPI_DSI_ERROR_MSK1_DPI_PLD_WR_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_DPI_PLD_WR_ERR) & BM_MIPI_DSI_ERROR_MSK1_DPI_PLD_WR_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPI_PLD_WR_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_DPI_PLD_WR_ERR(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_DPI_PLD_WR_ERR) | BF_MIPI_DSI_ERROR_MSK1_DPI_PLD_WR_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field GEN_CMD_WR_ERR[8] (RW)
 *
 * Masks command FIFO of generic interface full error
 */

#define BP_MIPI_DSI_ERROR_MSK1_GEN_CMD_WR_ERR      (8)      //!< Bit position for MIPI_DSI_ERROR_MSK1_GEN_CMD_WR_ERR.
#define BM_MIPI_DSI_ERROR_MSK1_GEN_CMD_WR_ERR      (0x00000100)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_GEN_CMD_WR_ERR.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_GEN_CMD_WR_ERR from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_GEN_CMD_WR_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_GEN_CMD_WR_ERR) >> BP_MIPI_DSI_ERROR_MSK1_GEN_CMD_WR_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_GEN_CMD_WR_ERR.
#define BF_MIPI_DSI_ERROR_MSK1_GEN_CMD_WR_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_GEN_CMD_WR_ERR) & BM_MIPI_DSI_ERROR_MSK1_GEN_CMD_WR_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_CMD_WR_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_GEN_CMD_WR_ERR(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_GEN_CMD_WR_ERR) | BF_MIPI_DSI_ERROR_MSK1_GEN_CMD_WR_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field GEN_PLD_WR_ERR[9] (RW)
 *
 * Masks payload data FIFO of generic interface full error
 */

#define BP_MIPI_DSI_ERROR_MSK1_GEN_PLD_WR_ERR      (9)      //!< Bit position for MIPI_DSI_ERROR_MSK1_GEN_PLD_WR_ERR.
#define BM_MIPI_DSI_ERROR_MSK1_GEN_PLD_WR_ERR      (0x00000200)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_GEN_PLD_WR_ERR.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_GEN_PLD_WR_ERR from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_GEN_PLD_WR_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_GEN_PLD_WR_ERR) >> BP_MIPI_DSI_ERROR_MSK1_GEN_PLD_WR_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_GEN_PLD_WR_ERR.
#define BF_MIPI_DSI_ERROR_MSK1_GEN_PLD_WR_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_GEN_PLD_WR_ERR) & BM_MIPI_DSI_ERROR_MSK1_GEN_PLD_WR_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_PLD_WR_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_GEN_PLD_WR_ERR(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_GEN_PLD_WR_ERR) | BF_MIPI_DSI_ERROR_MSK1_GEN_PLD_WR_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field GEN_PLD_SEND_ERR[10] (RW)
 *
 * Masks generic interface packet build FIFO empty error
 */

#define BP_MIPI_DSI_ERROR_MSK1_GEN_PLD_SEND_ERR      (10)      //!< Bit position for MIPI_DSI_ERROR_MSK1_GEN_PLD_SEND_ERR.
#define BM_MIPI_DSI_ERROR_MSK1_GEN_PLD_SEND_ERR      (0x00000400)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_GEN_PLD_SEND_ERR.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_GEN_PLD_SEND_ERR from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_GEN_PLD_SEND_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_GEN_PLD_SEND_ERR) >> BP_MIPI_DSI_ERROR_MSK1_GEN_PLD_SEND_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_GEN_PLD_SEND_ERR.
#define BF_MIPI_DSI_ERROR_MSK1_GEN_PLD_SEND_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_GEN_PLD_SEND_ERR) & BM_MIPI_DSI_ERROR_MSK1_GEN_PLD_SEND_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_PLD_SEND_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_GEN_PLD_SEND_ERR(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_GEN_PLD_SEND_ERR) | BF_MIPI_DSI_ERROR_MSK1_GEN_PLD_SEND_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field GEN_PLD_RD_ERR[11] (RW)
 *
 * Masks DCS read data payload FIFO empty error
 */

#define BP_MIPI_DSI_ERROR_MSK1_GEN_PLD_RD_ERR      (11)      //!< Bit position for MIPI_DSI_ERROR_MSK1_GEN_PLD_RD_ERR.
#define BM_MIPI_DSI_ERROR_MSK1_GEN_PLD_RD_ERR      (0x00000800)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_GEN_PLD_RD_ERR.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_GEN_PLD_RD_ERR from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_GEN_PLD_RD_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_GEN_PLD_RD_ERR) >> BP_MIPI_DSI_ERROR_MSK1_GEN_PLD_RD_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_GEN_PLD_RD_ERR.
#define BF_MIPI_DSI_ERROR_MSK1_GEN_PLD_RD_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_GEN_PLD_RD_ERR) & BM_MIPI_DSI_ERROR_MSK1_GEN_PLD_RD_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_PLD_RD_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_GEN_PLD_RD_ERR(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_GEN_PLD_RD_ERR) | BF_MIPI_DSI_ERROR_MSK1_GEN_PLD_RD_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field GEN_PLD_RECV_ERR[12] (RW)
 *
 * Masks generic interface packet read back FIFO full error
 */

#define BP_MIPI_DSI_ERROR_MSK1_GEN_PLD_RECV_ERR      (12)      //!< Bit position for MIPI_DSI_ERROR_MSK1_GEN_PLD_RECV_ERR.
#define BM_MIPI_DSI_ERROR_MSK1_GEN_PLD_RECV_ERR      (0x00001000)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_GEN_PLD_RECV_ERR.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_GEN_PLD_RECV_ERR from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_GEN_PLD_RECV_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_GEN_PLD_RECV_ERR) >> BP_MIPI_DSI_ERROR_MSK1_GEN_PLD_RECV_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_GEN_PLD_RECV_ERR.
#define BF_MIPI_DSI_ERROR_MSK1_GEN_PLD_RECV_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_GEN_PLD_RECV_ERR) & BM_MIPI_DSI_ERROR_MSK1_GEN_PLD_RECV_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GEN_PLD_RECV_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_GEN_PLD_RECV_ERR(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_GEN_PLD_RECV_ERR) | BF_MIPI_DSI_ERROR_MSK1_GEN_PLD_RECV_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field DBI_CMD_WR_ERR[13] (RW)
 *
 * Masks DBI command FIFO full error
 */

#define BP_MIPI_DSI_ERROR_MSK1_DBI_CMD_WR_ERR      (13)      //!< Bit position for MIPI_DSI_ERROR_MSK1_DBI_CMD_WR_ERR.
#define BM_MIPI_DSI_ERROR_MSK1_DBI_CMD_WR_ERR      (0x00002000)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_DBI_CMD_WR_ERR.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_DBI_CMD_WR_ERR from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_DBI_CMD_WR_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_DBI_CMD_WR_ERR) >> BP_MIPI_DSI_ERROR_MSK1_DBI_CMD_WR_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_DBI_CMD_WR_ERR.
#define BF_MIPI_DSI_ERROR_MSK1_DBI_CMD_WR_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_DBI_CMD_WR_ERR) & BM_MIPI_DSI_ERROR_MSK1_DBI_CMD_WR_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_CMD_WR_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_DBI_CMD_WR_ERR(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_DBI_CMD_WR_ERR) | BF_MIPI_DSI_ERROR_MSK1_DBI_CMD_WR_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field DBI_PLD_WR_ERR[14] (RW)
 *
 * Masks write payload data DBI FIFO full error
 */

#define BP_MIPI_DSI_ERROR_MSK1_DBI_PLD_WR_ERR      (14)      //!< Bit position for MIPI_DSI_ERROR_MSK1_DBI_PLD_WR_ERR.
#define BM_MIPI_DSI_ERROR_MSK1_DBI_PLD_WR_ERR      (0x00004000)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_DBI_PLD_WR_ERR.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_DBI_PLD_WR_ERR from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_DBI_PLD_WR_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_DBI_PLD_WR_ERR) >> BP_MIPI_DSI_ERROR_MSK1_DBI_PLD_WR_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_DBI_PLD_WR_ERR.
#define BF_MIPI_DSI_ERROR_MSK1_DBI_PLD_WR_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_DBI_PLD_WR_ERR) & BM_MIPI_DSI_ERROR_MSK1_DBI_PLD_WR_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_PLD_WR_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_DBI_PLD_WR_ERR(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_DBI_PLD_WR_ERR) | BF_MIPI_DSI_ERROR_MSK1_DBI_PLD_WR_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field DBI_PLD_RD_ERR[15] (RW)
 *
 * Masks payload DBI FIFO empty error
 */

#define BP_MIPI_DSI_ERROR_MSK1_DBI_PLD_RD_ERR      (15)      //!< Bit position for MIPI_DSI_ERROR_MSK1_DBI_PLD_RD_ERR.
#define BM_MIPI_DSI_ERROR_MSK1_DBI_PLD_RD_ERR      (0x00008000)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_DBI_PLD_RD_ERR.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_DBI_PLD_RD_ERR from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_DBI_PLD_RD_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_DBI_PLD_RD_ERR) >> BP_MIPI_DSI_ERROR_MSK1_DBI_PLD_RD_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_DBI_PLD_RD_ERR.
#define BF_MIPI_DSI_ERROR_MSK1_DBI_PLD_RD_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_DBI_PLD_RD_ERR) & BM_MIPI_DSI_ERROR_MSK1_DBI_PLD_RD_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_PLD_RD_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_DBI_PLD_RD_ERR(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_DBI_PLD_RD_ERR) | BF_MIPI_DSI_ERROR_MSK1_DBI_PLD_RD_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field DBI_PLD_RECV_ERR[16] (RW)
 *
 * Masks DBI read back packet payload FIFO full error
 */

#define BP_MIPI_DSI_ERROR_MSK1_DBI_PLD_RECV_ERR      (16)      //!< Bit position for MIPI_DSI_ERROR_MSK1_DBI_PLD_RECV_ERR.
#define BM_MIPI_DSI_ERROR_MSK1_DBI_PLD_RECV_ERR      (0x00010000)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_DBI_PLD_RECV_ERR.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_DBI_PLD_RECV_ERR from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_DBI_PLD_RECV_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_DBI_PLD_RECV_ERR) >> BP_MIPI_DSI_ERROR_MSK1_DBI_PLD_RECV_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_DBI_PLD_RECV_ERR.
#define BF_MIPI_DSI_ERROR_MSK1_DBI_PLD_RECV_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_DBI_PLD_RECV_ERR) & BM_MIPI_DSI_ERROR_MSK1_DBI_PLD_RECV_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_PLD_RECV_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_DBI_PLD_RECV_ERR(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_DBI_PLD_RECV_ERR) | BF_MIPI_DSI_ERROR_MSK1_DBI_PLD_RECV_ERR(v)))
#endif

/* --- Register HW_MIPI_DSI_ERROR_MSK1, field DBI_ILLEGAL_COMM_ERR[17] (RW)
 *
 * Masks error attempt to write an illegal command on DPI
 */

#define BP_MIPI_DSI_ERROR_MSK1_DBI_ILLEGAL_COMM_ERR      (17)      //!< Bit position for MIPI_DSI_ERROR_MSK1_DBI_ILLEGAL_COMM_ERR.
#define BM_MIPI_DSI_ERROR_MSK1_DBI_ILLEGAL_COMM_ERR      (0x00020000)  //!< Bit mask for MIPI_DSI_ERROR_MSK1_DBI_ILLEGAL_COMM_ERR.

//! @brief Get value of MIPI_DSI_ERROR_MSK1_DBI_ILLEGAL_COMM_ERR from a register value.
#define BG_MIPI_DSI_ERROR_MSK1_DBI_ILLEGAL_COMM_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_ERROR_MSK1_DBI_ILLEGAL_COMM_ERR) >> BP_MIPI_DSI_ERROR_MSK1_DBI_ILLEGAL_COMM_ERR)

//! @brief Format value for bitfield MIPI_DSI_ERROR_MSK1_DBI_ILLEGAL_COMM_ERR.
#define BF_MIPI_DSI_ERROR_MSK1_DBI_ILLEGAL_COMM_ERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_ERROR_MSK1_DBI_ILLEGAL_COMM_ERR) & BM_MIPI_DSI_ERROR_MSK1_DBI_ILLEGAL_COMM_ERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DBI_ILLEGAL_COMM_ERR field to a new value.
#define BW_MIPI_DSI_ERROR_MSK1_DBI_ILLEGAL_COMM_ERR(v)   (HW_MIPI_DSI_ERROR_MSK1_WR((HW_MIPI_DSI_ERROR_MSK1_RD() & ~BM_MIPI_DSI_ERROR_MSK1_DBI_ILLEGAL_COMM_ERR) | BF_MIPI_DSI_ERROR_MSK1_DBI_ILLEGAL_COMM_ERR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_PHY_RSTZ - D-PHY reset control
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_PHY_RSTZ - D-PHY reset control (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x54  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_phy_rstz
{
    reg32_t U;
    struct _hw_mipi_dsi_phy_rstz_bitfields
    {
        unsigned PHY_SHUTDOWNZ : 1; //!< [0] D-PHY Shutdown disable when 1, used to place the complete D-PHY macro in power down
        unsigned PHY_RSTZ : 1; //!< [1] D-PHY Reset disable when 1, used to place the digital section of D-PHY in reset state
        unsigned PHY_ENABLECLK : 1; //!< [2] Enables D-PHY Clock Lane Module when 1
        unsigned RESERVED0 : 29; //!< [31:3] Reserved
    } B;
} hw_mipi_dsi_phy_rstz_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_PHY_RSTZ register
 */
#define HW_MIPI_DSI_PHY_RSTZ_ADDR      (REGS_MIPI_DSI_BASE + 0x54)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_PHY_RSTZ           (*(volatile hw_mipi_dsi_phy_rstz_t *) HW_MIPI_DSI_PHY_RSTZ_ADDR)
#define HW_MIPI_DSI_PHY_RSTZ_RD()      (HW_MIPI_DSI_PHY_RSTZ.U)
#define HW_MIPI_DSI_PHY_RSTZ_WR(v)     (HW_MIPI_DSI_PHY_RSTZ.U = (v))
#define HW_MIPI_DSI_PHY_RSTZ_SET(v)    (HW_MIPI_DSI_PHY_RSTZ_WR(HW_MIPI_DSI_PHY_RSTZ_RD() |  (v)))
#define HW_MIPI_DSI_PHY_RSTZ_CLR(v)    (HW_MIPI_DSI_PHY_RSTZ_WR(HW_MIPI_DSI_PHY_RSTZ_RD() & ~(v)))
#define HW_MIPI_DSI_PHY_RSTZ_TOG(v)    (HW_MIPI_DSI_PHY_RSTZ_WR(HW_MIPI_DSI_PHY_RSTZ_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_PHY_RSTZ bitfields
 */

/* --- Register HW_MIPI_DSI_PHY_RSTZ, field PHY_SHUTDOWNZ[0] (RW)
 *
 * D-PHY Shutdown disable when 1, used to place the complete D-PHY macro in power down
 */

#define BP_MIPI_DSI_PHY_RSTZ_PHY_SHUTDOWNZ      (0)      //!< Bit position for MIPI_DSI_PHY_RSTZ_PHY_SHUTDOWNZ.
#define BM_MIPI_DSI_PHY_RSTZ_PHY_SHUTDOWNZ      (0x00000001)  //!< Bit mask for MIPI_DSI_PHY_RSTZ_PHY_SHUTDOWNZ.

//! @brief Get value of MIPI_DSI_PHY_RSTZ_PHY_SHUTDOWNZ from a register value.
#define BG_MIPI_DSI_PHY_RSTZ_PHY_SHUTDOWNZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_RSTZ_PHY_SHUTDOWNZ) >> BP_MIPI_DSI_PHY_RSTZ_PHY_SHUTDOWNZ)

//! @brief Format value for bitfield MIPI_DSI_PHY_RSTZ_PHY_SHUTDOWNZ.
#define BF_MIPI_DSI_PHY_RSTZ_PHY_SHUTDOWNZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_RSTZ_PHY_SHUTDOWNZ) & BM_MIPI_DSI_PHY_RSTZ_PHY_SHUTDOWNZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_SHUTDOWNZ field to a new value.
#define BW_MIPI_DSI_PHY_RSTZ_PHY_SHUTDOWNZ(v)   (HW_MIPI_DSI_PHY_RSTZ_WR((HW_MIPI_DSI_PHY_RSTZ_RD() & ~BM_MIPI_DSI_PHY_RSTZ_PHY_SHUTDOWNZ) | BF_MIPI_DSI_PHY_RSTZ_PHY_SHUTDOWNZ(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_RSTZ, field PHY_RSTZ[1] (RW)
 *
 * D-PHY Reset disable when 1, used to place the digital section of D-PHY in reset state
 */

#define BP_MIPI_DSI_PHY_RSTZ_PHY_RSTZ      (1)      //!< Bit position for MIPI_DSI_PHY_RSTZ_PHY_RSTZ.
#define BM_MIPI_DSI_PHY_RSTZ_PHY_RSTZ      (0x00000002)  //!< Bit mask for MIPI_DSI_PHY_RSTZ_PHY_RSTZ.

//! @brief Get value of MIPI_DSI_PHY_RSTZ_PHY_RSTZ from a register value.
#define BG_MIPI_DSI_PHY_RSTZ_PHY_RSTZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_RSTZ_PHY_RSTZ) >> BP_MIPI_DSI_PHY_RSTZ_PHY_RSTZ)

//! @brief Format value for bitfield MIPI_DSI_PHY_RSTZ_PHY_RSTZ.
#define BF_MIPI_DSI_PHY_RSTZ_PHY_RSTZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_RSTZ_PHY_RSTZ) & BM_MIPI_DSI_PHY_RSTZ_PHY_RSTZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_RSTZ field to a new value.
#define BW_MIPI_DSI_PHY_RSTZ_PHY_RSTZ(v)   (HW_MIPI_DSI_PHY_RSTZ_WR((HW_MIPI_DSI_PHY_RSTZ_RD() & ~BM_MIPI_DSI_PHY_RSTZ_PHY_RSTZ) | BF_MIPI_DSI_PHY_RSTZ_PHY_RSTZ(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_RSTZ, field PHY_ENABLECLK[2] (RW)
 *
 * Enables D-PHY Clock Lane Module when 1
 */

#define BP_MIPI_DSI_PHY_RSTZ_PHY_ENABLECLK      (2)      //!< Bit position for MIPI_DSI_PHY_RSTZ_PHY_ENABLECLK.
#define BM_MIPI_DSI_PHY_RSTZ_PHY_ENABLECLK      (0x00000004)  //!< Bit mask for MIPI_DSI_PHY_RSTZ_PHY_ENABLECLK.

//! @brief Get value of MIPI_DSI_PHY_RSTZ_PHY_ENABLECLK from a register value.
#define BG_MIPI_DSI_PHY_RSTZ_PHY_ENABLECLK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_RSTZ_PHY_ENABLECLK) >> BP_MIPI_DSI_PHY_RSTZ_PHY_ENABLECLK)

//! @brief Format value for bitfield MIPI_DSI_PHY_RSTZ_PHY_ENABLECLK.
#define BF_MIPI_DSI_PHY_RSTZ_PHY_ENABLECLK(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_RSTZ_PHY_ENABLECLK) & BM_MIPI_DSI_PHY_RSTZ_PHY_ENABLECLK)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_ENABLECLK field to a new value.
#define BW_MIPI_DSI_PHY_RSTZ_PHY_ENABLECLK(v)   (HW_MIPI_DSI_PHY_RSTZ_WR((HW_MIPI_DSI_PHY_RSTZ_RD() & ~BM_MIPI_DSI_PHY_RSTZ_PHY_ENABLECLK) | BF_MIPI_DSI_PHY_RSTZ_PHY_ENABLECLK(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_PHY_IF_CFG - D-PHY interface configuration
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_PHY_IF_CFG - D-PHY interface configuration (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x58  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_phy_if_cfg
{
    reg32_t U;
    struct _hw_mipi_dsi_phy_if_cfg_bitfields
    {
        unsigned N_LANES : 2; //!< [1:0] Number of active data lanes.
        unsigned PHY_STOP_WAIT_TIME : 8; //!< [9:2] Configures minimum wait period to request an HS transmission after the stop state accounted in clock lane cycles
        unsigned RESERVED0 : 22; //!< [31:10] Reserved
    } B;
} hw_mipi_dsi_phy_if_cfg_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_PHY_IF_CFG register
 */
#define HW_MIPI_DSI_PHY_IF_CFG_ADDR      (REGS_MIPI_DSI_BASE + 0x58)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_PHY_IF_CFG           (*(volatile hw_mipi_dsi_phy_if_cfg_t *) HW_MIPI_DSI_PHY_IF_CFG_ADDR)
#define HW_MIPI_DSI_PHY_IF_CFG_RD()      (HW_MIPI_DSI_PHY_IF_CFG.U)
#define HW_MIPI_DSI_PHY_IF_CFG_WR(v)     (HW_MIPI_DSI_PHY_IF_CFG.U = (v))
#define HW_MIPI_DSI_PHY_IF_CFG_SET(v)    (HW_MIPI_DSI_PHY_IF_CFG_WR(HW_MIPI_DSI_PHY_IF_CFG_RD() |  (v)))
#define HW_MIPI_DSI_PHY_IF_CFG_CLR(v)    (HW_MIPI_DSI_PHY_IF_CFG_WR(HW_MIPI_DSI_PHY_IF_CFG_RD() & ~(v)))
#define HW_MIPI_DSI_PHY_IF_CFG_TOG(v)    (HW_MIPI_DSI_PHY_IF_CFG_WR(HW_MIPI_DSI_PHY_IF_CFG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_PHY_IF_CFG bitfields
 */

/* --- Register HW_MIPI_DSI_PHY_IF_CFG, field N_LANES[1:0] (RW)
 *
 * Number of active data lanes.
 *
 * Values:
 * 00 - 1 Data Lane (Lane 0)
 * 01 - 2 Data Lanes (Lane 0, and 1)
 * 10 - 3 Data Lanes (Lane 0,1 and 2)
 * 11 - 4 Data Lanes (All)
 */

#define BP_MIPI_DSI_PHY_IF_CFG_N_LANES      (0)      //!< Bit position for MIPI_DSI_PHY_IF_CFG_N_LANES.
#define BM_MIPI_DSI_PHY_IF_CFG_N_LANES      (0x00000003)  //!< Bit mask for MIPI_DSI_PHY_IF_CFG_N_LANES.

//! @brief Get value of MIPI_DSI_PHY_IF_CFG_N_LANES from a register value.
#define BG_MIPI_DSI_PHY_IF_CFG_N_LANES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_IF_CFG_N_LANES) >> BP_MIPI_DSI_PHY_IF_CFG_N_LANES)

//! @brief Format value for bitfield MIPI_DSI_PHY_IF_CFG_N_LANES.
#define BF_MIPI_DSI_PHY_IF_CFG_N_LANES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_IF_CFG_N_LANES) & BM_MIPI_DSI_PHY_IF_CFG_N_LANES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the N_LANES field to a new value.
#define BW_MIPI_DSI_PHY_IF_CFG_N_LANES(v)   (HW_MIPI_DSI_PHY_IF_CFG_WR((HW_MIPI_DSI_PHY_IF_CFG_RD() & ~BM_MIPI_DSI_PHY_IF_CFG_N_LANES) | BF_MIPI_DSI_PHY_IF_CFG_N_LANES(v)))
#endif


/* --- Register HW_MIPI_DSI_PHY_IF_CFG, field PHY_STOP_WAIT_TIME[9:2] (RW)
 *
 * Configures minimum wait period to request an HS transmission after the stop state accounted in
 * clock lane cycles
 */

#define BP_MIPI_DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME      (2)      //!< Bit position for MIPI_DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME.
#define BM_MIPI_DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME      (0x000003fc)  //!< Bit mask for MIPI_DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME.

//! @brief Get value of MIPI_DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME from a register value.
#define BG_MIPI_DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME) >> BP_MIPI_DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME)

//! @brief Format value for bitfield MIPI_DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME.
#define BF_MIPI_DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME) & BM_MIPI_DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_STOP_WAIT_TIME field to a new value.
#define BW_MIPI_DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME(v)   (HW_MIPI_DSI_PHY_IF_CFG_WR((HW_MIPI_DSI_PHY_IF_CFG_RD() & ~BM_MIPI_DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME) | BF_MIPI_DSI_PHY_IF_CFG_PHY_STOP_WAIT_TIME(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_PHY_IF_CTRL - D-PHY PPI interface control
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_PHY_IF_CTRL - D-PHY PPI interface control (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x5c  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_phy_if_ctrl
{
    reg32_t U;
    struct _hw_mipi_dsi_phy_if_ctrl_bitfields
    {
        unsigned PHY_TXREQUESTCLKHS : 1; //!< [0] Controls D-PHY PPI txrequestclkHS
        unsigned PHY_TXREQULPSCLK : 1; //!< [1] ULPS mode Request on Clock Lane
        unsigned PHY_TXEXITULPSCLK : 1; //!< [2] ULPS mode Exit on Clock Lane
        unsigned PHY_TXREQULPSLAN : 1; //!< [3] ULPS mode Request on all active data lanes
        unsigned PHY_TXEXITULPSLAN : 1; //!< [4] ULPS mode Exit on on all active data lanes
        unsigned PHY_TX_TRIGGERS : 4; //!< [8:5] Controls the trigger transmissions
        unsigned RESERVED0 : 23; //!< [31:9] Reserved
    } B;
} hw_mipi_dsi_phy_if_ctrl_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_PHY_IF_CTRL register
 */
#define HW_MIPI_DSI_PHY_IF_CTRL_ADDR      (REGS_MIPI_DSI_BASE + 0x5c)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_PHY_IF_CTRL           (*(volatile hw_mipi_dsi_phy_if_ctrl_t *) HW_MIPI_DSI_PHY_IF_CTRL_ADDR)
#define HW_MIPI_DSI_PHY_IF_CTRL_RD()      (HW_MIPI_DSI_PHY_IF_CTRL.U)
#define HW_MIPI_DSI_PHY_IF_CTRL_WR(v)     (HW_MIPI_DSI_PHY_IF_CTRL.U = (v))
#define HW_MIPI_DSI_PHY_IF_CTRL_SET(v)    (HW_MIPI_DSI_PHY_IF_CTRL_WR(HW_MIPI_DSI_PHY_IF_CTRL_RD() |  (v)))
#define HW_MIPI_DSI_PHY_IF_CTRL_CLR(v)    (HW_MIPI_DSI_PHY_IF_CTRL_WR(HW_MIPI_DSI_PHY_IF_CTRL_RD() & ~(v)))
#define HW_MIPI_DSI_PHY_IF_CTRL_TOG(v)    (HW_MIPI_DSI_PHY_IF_CTRL_WR(HW_MIPI_DSI_PHY_IF_CTRL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_PHY_IF_CTRL bitfields
 */

/* --- Register HW_MIPI_DSI_PHY_IF_CTRL, field PHY_TXREQUESTCLKHS[0] (RW)
 *
 * Controls D-PHY PPI txrequestclkHS
 */

#define BP_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQUESTCLKHS      (0)      //!< Bit position for MIPI_DSI_PHY_IF_CTRL_PHY_TXREQUESTCLKHS.
#define BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQUESTCLKHS      (0x00000001)  //!< Bit mask for MIPI_DSI_PHY_IF_CTRL_PHY_TXREQUESTCLKHS.

//! @brief Get value of MIPI_DSI_PHY_IF_CTRL_PHY_TXREQUESTCLKHS from a register value.
#define BG_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQUESTCLKHS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQUESTCLKHS) >> BP_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQUESTCLKHS)

//! @brief Format value for bitfield MIPI_DSI_PHY_IF_CTRL_PHY_TXREQUESTCLKHS.
#define BF_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQUESTCLKHS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQUESTCLKHS) & BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQUESTCLKHS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_TXREQUESTCLKHS field to a new value.
#define BW_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQUESTCLKHS(v)   (HW_MIPI_DSI_PHY_IF_CTRL_WR((HW_MIPI_DSI_PHY_IF_CTRL_RD() & ~BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQUESTCLKHS) | BF_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQUESTCLKHS(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_IF_CTRL, field PHY_TXREQULPSCLK[1] (RW)
 *
 * ULPS mode Request on Clock Lane
 */

#define BP_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSCLK      (1)      //!< Bit position for MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSCLK.
#define BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSCLK      (0x00000002)  //!< Bit mask for MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSCLK.

//! @brief Get value of MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSCLK from a register value.
#define BG_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSCLK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSCLK) >> BP_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSCLK)

//! @brief Format value for bitfield MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSCLK.
#define BF_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSCLK(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSCLK) & BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSCLK)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_TXREQULPSCLK field to a new value.
#define BW_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSCLK(v)   (HW_MIPI_DSI_PHY_IF_CTRL_WR((HW_MIPI_DSI_PHY_IF_CTRL_RD() & ~BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSCLK) | BF_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSCLK(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_IF_CTRL, field PHY_TXEXITULPSCLK[2] (RW)
 *
 * ULPS mode Exit on Clock Lane
 */

#define BP_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSCLK      (2)      //!< Bit position for MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSCLK.
#define BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSCLK      (0x00000004)  //!< Bit mask for MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSCLK.

//! @brief Get value of MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSCLK from a register value.
#define BG_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSCLK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSCLK) >> BP_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSCLK)

//! @brief Format value for bitfield MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSCLK.
#define BF_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSCLK(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSCLK) & BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSCLK)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_TXEXITULPSCLK field to a new value.
#define BW_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSCLK(v)   (HW_MIPI_DSI_PHY_IF_CTRL_WR((HW_MIPI_DSI_PHY_IF_CTRL_RD() & ~BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSCLK) | BF_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSCLK(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_IF_CTRL, field PHY_TXREQULPSLAN[3] (RW)
 *
 * ULPS mode Request on all active data lanes
 */

#define BP_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSLAN      (3)      //!< Bit position for MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSLAN.
#define BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSLAN      (0x00000008)  //!< Bit mask for MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSLAN.

//! @brief Get value of MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSLAN from a register value.
#define BG_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSLAN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSLAN) >> BP_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSLAN)

//! @brief Format value for bitfield MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSLAN.
#define BF_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSLAN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSLAN) & BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSLAN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_TXREQULPSLAN field to a new value.
#define BW_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSLAN(v)   (HW_MIPI_DSI_PHY_IF_CTRL_WR((HW_MIPI_DSI_PHY_IF_CTRL_RD() & ~BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSLAN) | BF_MIPI_DSI_PHY_IF_CTRL_PHY_TXREQULPSLAN(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_IF_CTRL, field PHY_TXEXITULPSLAN[4] (RW)
 *
 * ULPS mode Exit on on all active data lanes
 */

#define BP_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSLAN      (4)      //!< Bit position for MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSLAN.
#define BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSLAN      (0x00000010)  //!< Bit mask for MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSLAN.

//! @brief Get value of MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSLAN from a register value.
#define BG_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSLAN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSLAN) >> BP_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSLAN)

//! @brief Format value for bitfield MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSLAN.
#define BF_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSLAN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSLAN) & BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSLAN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_TXEXITULPSLAN field to a new value.
#define BW_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSLAN(v)   (HW_MIPI_DSI_PHY_IF_CTRL_WR((HW_MIPI_DSI_PHY_IF_CTRL_RD() & ~BM_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSLAN) | BF_MIPI_DSI_PHY_IF_CTRL_PHY_TXEXITULPSLAN(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_IF_CTRL, field PHY_TX_TRIGGERS[8:5] (RW)
 *
 * Controls the trigger transmissions
 */

#define BP_MIPI_DSI_PHY_IF_CTRL_PHY_TX_TRIGGERS      (5)      //!< Bit position for MIPI_DSI_PHY_IF_CTRL_PHY_TX_TRIGGERS.
#define BM_MIPI_DSI_PHY_IF_CTRL_PHY_TX_TRIGGERS      (0x000001e0)  //!< Bit mask for MIPI_DSI_PHY_IF_CTRL_PHY_TX_TRIGGERS.

//! @brief Get value of MIPI_DSI_PHY_IF_CTRL_PHY_TX_TRIGGERS from a register value.
#define BG_MIPI_DSI_PHY_IF_CTRL_PHY_TX_TRIGGERS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_IF_CTRL_PHY_TX_TRIGGERS) >> BP_MIPI_DSI_PHY_IF_CTRL_PHY_TX_TRIGGERS)

//! @brief Format value for bitfield MIPI_DSI_PHY_IF_CTRL_PHY_TX_TRIGGERS.
#define BF_MIPI_DSI_PHY_IF_CTRL_PHY_TX_TRIGGERS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_IF_CTRL_PHY_TX_TRIGGERS) & BM_MIPI_DSI_PHY_IF_CTRL_PHY_TX_TRIGGERS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_TX_TRIGGERS field to a new value.
#define BW_MIPI_DSI_PHY_IF_CTRL_PHY_TX_TRIGGERS(v)   (HW_MIPI_DSI_PHY_IF_CTRL_WR((HW_MIPI_DSI_PHY_IF_CTRL_RD() & ~BM_MIPI_DSI_PHY_IF_CTRL_PHY_TX_TRIGGERS) | BF_MIPI_DSI_PHY_IF_CTRL_PHY_TX_TRIGGERS(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_PHY_STATUS - D-PHY PPI status interface
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_PHY_STATUS - D-PHY PPI status interface (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x60  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_phy_status
{
    reg32_t U;
    struct _hw_mipi_dsi_phy_status_bitfields
    {
        unsigned PHYLOCK : 1; //!< [0] Reports status of phylock D-PHY pin
        unsigned PHYDIRECTION : 1; //!< [1] Reports status of phydirection D-PHY pin
        unsigned PHYSTOPSTATECLKLANE : 1; //!< [2] Reports status of phystopstateclklane D-PHY pin
        unsigned PHYRXULPSCLKNOT : 1; //!< [3] Reports status of phyrxulpsclknot D-PHY pin
        unsigned PHYSTOPSTATE0LANE : 1; //!< [4] Reports status of phystopstate0lane D-PHY pin
        unsigned ULPSACTIVENOT0LANE : 1; //!< [5] Reports status of ulpsactivenot0lane D-PHY pin
        unsigned RXULPSESC0LANE : 1; //!< [6] Reports status of rxulpsEsc0lane D-PHY pin
        unsigned PHYSTOPSTATE1LANE : 1; //!< [7] Reports status of phystopstate1lane D-PHY pin
        unsigned ULPSACTIVENOT1LANE : 1; //!< [8] Reports status of ulpsactivenot1lane D-PHY pin
        unsigned PHYSTOPSTATE2LANE : 1; //!< [9] Reports status of phystopstate2lane D-PHY pin
        unsigned ULPSACTIVENOT2LANE : 1; //!< [10] Reports status of ulpsactivenot2lane D-PHY pin
        unsigned PHYSTOPSTATE3LANE : 1; //!< [11] Reports status of phystopstate3lane D-PHY pin
        unsigned ULPSACTIVENOT3LANE : 1; //!< [12] Reports status of ulpsactivenot3lane D-PHY pin
        unsigned RESERVED0 : 19; //!< [31:13] Reserved
    } B;
} hw_mipi_dsi_phy_status_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_PHY_STATUS register
 */
#define HW_MIPI_DSI_PHY_STATUS_ADDR      (REGS_MIPI_DSI_BASE + 0x60)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_PHY_STATUS           (*(volatile hw_mipi_dsi_phy_status_t *) HW_MIPI_DSI_PHY_STATUS_ADDR)
#define HW_MIPI_DSI_PHY_STATUS_RD()      (HW_MIPI_DSI_PHY_STATUS.U)
#define HW_MIPI_DSI_PHY_STATUS_WR(v)     (HW_MIPI_DSI_PHY_STATUS.U = (v))
#define HW_MIPI_DSI_PHY_STATUS_SET(v)    (HW_MIPI_DSI_PHY_STATUS_WR(HW_MIPI_DSI_PHY_STATUS_RD() |  (v)))
#define HW_MIPI_DSI_PHY_STATUS_CLR(v)    (HW_MIPI_DSI_PHY_STATUS_WR(HW_MIPI_DSI_PHY_STATUS_RD() & ~(v)))
#define HW_MIPI_DSI_PHY_STATUS_TOG(v)    (HW_MIPI_DSI_PHY_STATUS_WR(HW_MIPI_DSI_PHY_STATUS_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_PHY_STATUS bitfields
 */

/* --- Register HW_MIPI_DSI_PHY_STATUS, field PHYLOCK[0] (RW)
 *
 * Reports status of phylock D-PHY pin
 */

#define BP_MIPI_DSI_PHY_STATUS_PHYLOCK      (0)      //!< Bit position for MIPI_DSI_PHY_STATUS_PHYLOCK.
#define BM_MIPI_DSI_PHY_STATUS_PHYLOCK      (0x00000001)  //!< Bit mask for MIPI_DSI_PHY_STATUS_PHYLOCK.

//! @brief Get value of MIPI_DSI_PHY_STATUS_PHYLOCK from a register value.
#define BG_MIPI_DSI_PHY_STATUS_PHYLOCK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_STATUS_PHYLOCK) >> BP_MIPI_DSI_PHY_STATUS_PHYLOCK)

//! @brief Format value for bitfield MIPI_DSI_PHY_STATUS_PHYLOCK.
#define BF_MIPI_DSI_PHY_STATUS_PHYLOCK(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_STATUS_PHYLOCK) & BM_MIPI_DSI_PHY_STATUS_PHYLOCK)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHYLOCK field to a new value.
#define BW_MIPI_DSI_PHY_STATUS_PHYLOCK(v)   (HW_MIPI_DSI_PHY_STATUS_WR((HW_MIPI_DSI_PHY_STATUS_RD() & ~BM_MIPI_DSI_PHY_STATUS_PHYLOCK) | BF_MIPI_DSI_PHY_STATUS_PHYLOCK(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_STATUS, field PHYDIRECTION[1] (RW)
 *
 * Reports status of phydirection D-PHY pin
 */

#define BP_MIPI_DSI_PHY_STATUS_PHYDIRECTION      (1)      //!< Bit position for MIPI_DSI_PHY_STATUS_PHYDIRECTION.
#define BM_MIPI_DSI_PHY_STATUS_PHYDIRECTION      (0x00000002)  //!< Bit mask for MIPI_DSI_PHY_STATUS_PHYDIRECTION.

//! @brief Get value of MIPI_DSI_PHY_STATUS_PHYDIRECTION from a register value.
#define BG_MIPI_DSI_PHY_STATUS_PHYDIRECTION(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_STATUS_PHYDIRECTION) >> BP_MIPI_DSI_PHY_STATUS_PHYDIRECTION)

//! @brief Format value for bitfield MIPI_DSI_PHY_STATUS_PHYDIRECTION.
#define BF_MIPI_DSI_PHY_STATUS_PHYDIRECTION(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_STATUS_PHYDIRECTION) & BM_MIPI_DSI_PHY_STATUS_PHYDIRECTION)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHYDIRECTION field to a new value.
#define BW_MIPI_DSI_PHY_STATUS_PHYDIRECTION(v)   (HW_MIPI_DSI_PHY_STATUS_WR((HW_MIPI_DSI_PHY_STATUS_RD() & ~BM_MIPI_DSI_PHY_STATUS_PHYDIRECTION) | BF_MIPI_DSI_PHY_STATUS_PHYDIRECTION(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_STATUS, field PHYSTOPSTATECLKLANE[2] (RW)
 *
 * Reports status of phystopstateclklane D-PHY pin
 */

#define BP_MIPI_DSI_PHY_STATUS_PHYSTOPSTATECLKLANE      (2)      //!< Bit position for MIPI_DSI_PHY_STATUS_PHYSTOPSTATECLKLANE.
#define BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATECLKLANE      (0x00000004)  //!< Bit mask for MIPI_DSI_PHY_STATUS_PHYSTOPSTATECLKLANE.

//! @brief Get value of MIPI_DSI_PHY_STATUS_PHYSTOPSTATECLKLANE from a register value.
#define BG_MIPI_DSI_PHY_STATUS_PHYSTOPSTATECLKLANE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATECLKLANE) >> BP_MIPI_DSI_PHY_STATUS_PHYSTOPSTATECLKLANE)

//! @brief Format value for bitfield MIPI_DSI_PHY_STATUS_PHYSTOPSTATECLKLANE.
#define BF_MIPI_DSI_PHY_STATUS_PHYSTOPSTATECLKLANE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_STATUS_PHYSTOPSTATECLKLANE) & BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATECLKLANE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHYSTOPSTATECLKLANE field to a new value.
#define BW_MIPI_DSI_PHY_STATUS_PHYSTOPSTATECLKLANE(v)   (HW_MIPI_DSI_PHY_STATUS_WR((HW_MIPI_DSI_PHY_STATUS_RD() & ~BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATECLKLANE) | BF_MIPI_DSI_PHY_STATUS_PHYSTOPSTATECLKLANE(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_STATUS, field PHYRXULPSCLKNOT[3] (RW)
 *
 * Reports status of phyrxulpsclknot D-PHY pin
 */

#define BP_MIPI_DSI_PHY_STATUS_PHYRXULPSCLKNOT      (3)      //!< Bit position for MIPI_DSI_PHY_STATUS_PHYRXULPSCLKNOT.
#define BM_MIPI_DSI_PHY_STATUS_PHYRXULPSCLKNOT      (0x00000008)  //!< Bit mask for MIPI_DSI_PHY_STATUS_PHYRXULPSCLKNOT.

//! @brief Get value of MIPI_DSI_PHY_STATUS_PHYRXULPSCLKNOT from a register value.
#define BG_MIPI_DSI_PHY_STATUS_PHYRXULPSCLKNOT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_STATUS_PHYRXULPSCLKNOT) >> BP_MIPI_DSI_PHY_STATUS_PHYRXULPSCLKNOT)

//! @brief Format value for bitfield MIPI_DSI_PHY_STATUS_PHYRXULPSCLKNOT.
#define BF_MIPI_DSI_PHY_STATUS_PHYRXULPSCLKNOT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_STATUS_PHYRXULPSCLKNOT) & BM_MIPI_DSI_PHY_STATUS_PHYRXULPSCLKNOT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHYRXULPSCLKNOT field to a new value.
#define BW_MIPI_DSI_PHY_STATUS_PHYRXULPSCLKNOT(v)   (HW_MIPI_DSI_PHY_STATUS_WR((HW_MIPI_DSI_PHY_STATUS_RD() & ~BM_MIPI_DSI_PHY_STATUS_PHYRXULPSCLKNOT) | BF_MIPI_DSI_PHY_STATUS_PHYRXULPSCLKNOT(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_STATUS, field PHYSTOPSTATE0LANE[4] (RW)
 *
 * Reports status of phystopstate0lane D-PHY pin
 */

#define BP_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE0LANE      (4)      //!< Bit position for MIPI_DSI_PHY_STATUS_PHYSTOPSTATE0LANE.
#define BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE0LANE      (0x00000010)  //!< Bit mask for MIPI_DSI_PHY_STATUS_PHYSTOPSTATE0LANE.

//! @brief Get value of MIPI_DSI_PHY_STATUS_PHYSTOPSTATE0LANE from a register value.
#define BG_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE0LANE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE0LANE) >> BP_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE0LANE)

//! @brief Format value for bitfield MIPI_DSI_PHY_STATUS_PHYSTOPSTATE0LANE.
#define BF_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE0LANE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE0LANE) & BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE0LANE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHYSTOPSTATE0LANE field to a new value.
#define BW_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE0LANE(v)   (HW_MIPI_DSI_PHY_STATUS_WR((HW_MIPI_DSI_PHY_STATUS_RD() & ~BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE0LANE) | BF_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE0LANE(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_STATUS, field ULPSACTIVENOT0LANE[5] (RW)
 *
 * Reports status of ulpsactivenot0lane D-PHY pin
 */

#define BP_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT0LANE      (5)      //!< Bit position for MIPI_DSI_PHY_STATUS_ULPSACTIVENOT0LANE.
#define BM_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT0LANE      (0x00000020)  //!< Bit mask for MIPI_DSI_PHY_STATUS_ULPSACTIVENOT0LANE.

//! @brief Get value of MIPI_DSI_PHY_STATUS_ULPSACTIVENOT0LANE from a register value.
#define BG_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT0LANE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT0LANE) >> BP_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT0LANE)

//! @brief Format value for bitfield MIPI_DSI_PHY_STATUS_ULPSACTIVENOT0LANE.
#define BF_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT0LANE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT0LANE) & BM_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT0LANE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ULPSACTIVENOT0LANE field to a new value.
#define BW_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT0LANE(v)   (HW_MIPI_DSI_PHY_STATUS_WR((HW_MIPI_DSI_PHY_STATUS_RD() & ~BM_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT0LANE) | BF_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT0LANE(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_STATUS, field RXULPSESC0LANE[6] (RW)
 *
 * Reports status of rxulpsEsc0lane D-PHY pin
 */

#define BP_MIPI_DSI_PHY_STATUS_RXULPSESC0LANE      (6)      //!< Bit position for MIPI_DSI_PHY_STATUS_RXULPSESC0LANE.
#define BM_MIPI_DSI_PHY_STATUS_RXULPSESC0LANE      (0x00000040)  //!< Bit mask for MIPI_DSI_PHY_STATUS_RXULPSESC0LANE.

//! @brief Get value of MIPI_DSI_PHY_STATUS_RXULPSESC0LANE from a register value.
#define BG_MIPI_DSI_PHY_STATUS_RXULPSESC0LANE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_STATUS_RXULPSESC0LANE) >> BP_MIPI_DSI_PHY_STATUS_RXULPSESC0LANE)

//! @brief Format value for bitfield MIPI_DSI_PHY_STATUS_RXULPSESC0LANE.
#define BF_MIPI_DSI_PHY_STATUS_RXULPSESC0LANE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_STATUS_RXULPSESC0LANE) & BM_MIPI_DSI_PHY_STATUS_RXULPSESC0LANE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXULPSESC0LANE field to a new value.
#define BW_MIPI_DSI_PHY_STATUS_RXULPSESC0LANE(v)   (HW_MIPI_DSI_PHY_STATUS_WR((HW_MIPI_DSI_PHY_STATUS_RD() & ~BM_MIPI_DSI_PHY_STATUS_RXULPSESC0LANE) | BF_MIPI_DSI_PHY_STATUS_RXULPSESC0LANE(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_STATUS, field PHYSTOPSTATE1LANE[7] (RW)
 *
 * Reports status of phystopstate1lane D-PHY pin
 */

#define BP_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE1LANE      (7)      //!< Bit position for MIPI_DSI_PHY_STATUS_PHYSTOPSTATE1LANE.
#define BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE1LANE      (0x00000080)  //!< Bit mask for MIPI_DSI_PHY_STATUS_PHYSTOPSTATE1LANE.

//! @brief Get value of MIPI_DSI_PHY_STATUS_PHYSTOPSTATE1LANE from a register value.
#define BG_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE1LANE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE1LANE) >> BP_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE1LANE)

//! @brief Format value for bitfield MIPI_DSI_PHY_STATUS_PHYSTOPSTATE1LANE.
#define BF_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE1LANE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE1LANE) & BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE1LANE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHYSTOPSTATE1LANE field to a new value.
#define BW_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE1LANE(v)   (HW_MIPI_DSI_PHY_STATUS_WR((HW_MIPI_DSI_PHY_STATUS_RD() & ~BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE1LANE) | BF_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE1LANE(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_STATUS, field ULPSACTIVENOT1LANE[8] (RW)
 *
 * Reports status of ulpsactivenot1lane D-PHY pin
 */

#define BP_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT1LANE      (8)      //!< Bit position for MIPI_DSI_PHY_STATUS_ULPSACTIVENOT1LANE.
#define BM_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT1LANE      (0x00000100)  //!< Bit mask for MIPI_DSI_PHY_STATUS_ULPSACTIVENOT1LANE.

//! @brief Get value of MIPI_DSI_PHY_STATUS_ULPSACTIVENOT1LANE from a register value.
#define BG_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT1LANE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT1LANE) >> BP_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT1LANE)

//! @brief Format value for bitfield MIPI_DSI_PHY_STATUS_ULPSACTIVENOT1LANE.
#define BF_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT1LANE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT1LANE) & BM_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT1LANE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ULPSACTIVENOT1LANE field to a new value.
#define BW_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT1LANE(v)   (HW_MIPI_DSI_PHY_STATUS_WR((HW_MIPI_DSI_PHY_STATUS_RD() & ~BM_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT1LANE) | BF_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT1LANE(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_STATUS, field PHYSTOPSTATE2LANE[9] (RW)
 *
 * Reports status of phystopstate2lane D-PHY pin
 */

#define BP_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE2LANE      (9)      //!< Bit position for MIPI_DSI_PHY_STATUS_PHYSTOPSTATE2LANE.
#define BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE2LANE      (0x00000200)  //!< Bit mask for MIPI_DSI_PHY_STATUS_PHYSTOPSTATE2LANE.

//! @brief Get value of MIPI_DSI_PHY_STATUS_PHYSTOPSTATE2LANE from a register value.
#define BG_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE2LANE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE2LANE) >> BP_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE2LANE)

//! @brief Format value for bitfield MIPI_DSI_PHY_STATUS_PHYSTOPSTATE2LANE.
#define BF_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE2LANE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE2LANE) & BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE2LANE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHYSTOPSTATE2LANE field to a new value.
#define BW_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE2LANE(v)   (HW_MIPI_DSI_PHY_STATUS_WR((HW_MIPI_DSI_PHY_STATUS_RD() & ~BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE2LANE) | BF_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE2LANE(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_STATUS, field ULPSACTIVENOT2LANE[10] (RW)
 *
 * Reports status of ulpsactivenot2lane D-PHY pin
 */

#define BP_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT2LANE      (10)      //!< Bit position for MIPI_DSI_PHY_STATUS_ULPSACTIVENOT2LANE.
#define BM_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT2LANE      (0x00000400)  //!< Bit mask for MIPI_DSI_PHY_STATUS_ULPSACTIVENOT2LANE.

//! @brief Get value of MIPI_DSI_PHY_STATUS_ULPSACTIVENOT2LANE from a register value.
#define BG_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT2LANE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT2LANE) >> BP_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT2LANE)

//! @brief Format value for bitfield MIPI_DSI_PHY_STATUS_ULPSACTIVENOT2LANE.
#define BF_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT2LANE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT2LANE) & BM_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT2LANE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ULPSACTIVENOT2LANE field to a new value.
#define BW_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT2LANE(v)   (HW_MIPI_DSI_PHY_STATUS_WR((HW_MIPI_DSI_PHY_STATUS_RD() & ~BM_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT2LANE) | BF_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT2LANE(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_STATUS, field PHYSTOPSTATE3LANE[11] (RW)
 *
 * Reports status of phystopstate3lane D-PHY pin
 */

#define BP_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE3LANE      (11)      //!< Bit position for MIPI_DSI_PHY_STATUS_PHYSTOPSTATE3LANE.
#define BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE3LANE      (0x00000800)  //!< Bit mask for MIPI_DSI_PHY_STATUS_PHYSTOPSTATE3LANE.

//! @brief Get value of MIPI_DSI_PHY_STATUS_PHYSTOPSTATE3LANE from a register value.
#define BG_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE3LANE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE3LANE) >> BP_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE3LANE)

//! @brief Format value for bitfield MIPI_DSI_PHY_STATUS_PHYSTOPSTATE3LANE.
#define BF_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE3LANE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE3LANE) & BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE3LANE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHYSTOPSTATE3LANE field to a new value.
#define BW_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE3LANE(v)   (HW_MIPI_DSI_PHY_STATUS_WR((HW_MIPI_DSI_PHY_STATUS_RD() & ~BM_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE3LANE) | BF_MIPI_DSI_PHY_STATUS_PHYSTOPSTATE3LANE(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_STATUS, field ULPSACTIVENOT3LANE[12] (RW)
 *
 * Reports status of ulpsactivenot3lane D-PHY pin
 */

#define BP_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT3LANE      (12)      //!< Bit position for MIPI_DSI_PHY_STATUS_ULPSACTIVENOT3LANE.
#define BM_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT3LANE      (0x00001000)  //!< Bit mask for MIPI_DSI_PHY_STATUS_ULPSACTIVENOT3LANE.

//! @brief Get value of MIPI_DSI_PHY_STATUS_ULPSACTIVENOT3LANE from a register value.
#define BG_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT3LANE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT3LANE) >> BP_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT3LANE)

//! @brief Format value for bitfield MIPI_DSI_PHY_STATUS_ULPSACTIVENOT3LANE.
#define BF_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT3LANE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT3LANE) & BM_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT3LANE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ULPSACTIVENOT3LANE field to a new value.
#define BW_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT3LANE(v)   (HW_MIPI_DSI_PHY_STATUS_WR((HW_MIPI_DSI_PHY_STATUS_RD() & ~BM_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT3LANE) | BF_MIPI_DSI_PHY_STATUS_ULPSACTIVENOT3LANE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_PHY_TST_CTRL0 - D-PHY Test interface control 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_PHY_TST_CTRL0 - D-PHY Test interface control 0 (RW)
 *
 * Reset value: 0x00000001
 *
 * Size: 32 bits  Offset: 0x64  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_phy_tst_ctrl0
{
    reg32_t U;
    struct _hw_mipi_dsi_phy_tst_ctrl0_bitfields
    {
        unsigned PHY_TESTCLR : 1; //!< [0] PHY test interface clear.
        unsigned PHY_TESTCLK : 1; //!< [1] PHY test interface strobe signal.
        unsigned RESERVED0 : 30; //!< [31:2] Reserved
    } B;
} hw_mipi_dsi_phy_tst_ctrl0_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_PHY_TST_CTRL0 register
 */
#define HW_MIPI_DSI_PHY_TST_CTRL0_ADDR      (REGS_MIPI_DSI_BASE + 0x64)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_PHY_TST_CTRL0           (*(volatile hw_mipi_dsi_phy_tst_ctrl0_t *) HW_MIPI_DSI_PHY_TST_CTRL0_ADDR)
#define HW_MIPI_DSI_PHY_TST_CTRL0_RD()      (HW_MIPI_DSI_PHY_TST_CTRL0.U)
#define HW_MIPI_DSI_PHY_TST_CTRL0_WR(v)     (HW_MIPI_DSI_PHY_TST_CTRL0.U = (v))
#define HW_MIPI_DSI_PHY_TST_CTRL0_SET(v)    (HW_MIPI_DSI_PHY_TST_CTRL0_WR(HW_MIPI_DSI_PHY_TST_CTRL0_RD() |  (v)))
#define HW_MIPI_DSI_PHY_TST_CTRL0_CLR(v)    (HW_MIPI_DSI_PHY_TST_CTRL0_WR(HW_MIPI_DSI_PHY_TST_CTRL0_RD() & ~(v)))
#define HW_MIPI_DSI_PHY_TST_CTRL0_TOG(v)    (HW_MIPI_DSI_PHY_TST_CTRL0_WR(HW_MIPI_DSI_PHY_TST_CTRL0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_PHY_TST_CTRL0 bitfields
 */

/* --- Register HW_MIPI_DSI_PHY_TST_CTRL0, field PHY_TESTCLR[0] (RW)
 *
 * PHY test interface clear. When active performs vendor specific interface initialization (Active
 * High)
 */

#define BP_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLR      (0)      //!< Bit position for MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLR.
#define BM_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLR      (0x00000001)  //!< Bit mask for MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLR.

//! @brief Get value of MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLR from a register value.
#define BG_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLR) >> BP_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLR)

//! @brief Format value for bitfield MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLR.
#define BF_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLR) & BM_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_TESTCLR field to a new value.
#define BW_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLR(v)   (HW_MIPI_DSI_PHY_TST_CTRL0_WR((HW_MIPI_DSI_PHY_TST_CTRL0_RD() & ~BM_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLR) | BF_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLR(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_TST_CTRL0, field PHY_TESTCLK[1] (RW)
 *
 * PHY test interface strobe signal. Used to clock TESTDIN bus into the D-PHY. In conjunction with
 * TESTEN signal controls the operation selection
 */

#define BP_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK      (1)      //!< Bit position for MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK.
#define BM_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK      (0x00000002)  //!< Bit mask for MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK.

//! @brief Get value of MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK from a register value.
#define BG_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK) >> BP_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK)

//! @brief Format value for bitfield MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK.
#define BF_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK) & BM_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_TESTCLK field to a new value.
#define BW_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK(v)   (HW_MIPI_DSI_PHY_TST_CTRL0_WR((HW_MIPI_DSI_PHY_TST_CTRL0_RD() & ~BM_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK) | BF_MIPI_DSI_PHY_TST_CTRL0_PHY_TESTCLK(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_DSI_PHY_TST_CTRL1 - D-PHY Test interface control 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_DSI_PHY_TST_CTRL1 - D-PHY Test interface control 1 (RW)
 *
 * Reset value: 0x00000000
 *
 * Size: 32 bits  Offset: 0x68  Memory Access: R/W
 */
typedef union _hw_mipi_dsi_phy_tst_ctrl1
{
    reg32_t U;
    struct _hw_mipi_dsi_phy_tst_ctrl1_bitfields
    {
        unsigned PHY_TESTDIN : 8; //!< [7:0] PHY test interface input 8-bit data bus for internal register programming and test functionalities access
        unsigned PHY_TESTDOUT : 8; //!< [15:8] PHY output 8-bit data bus for read-back and internal probing functionalities
        unsigned PHY_TESTEN : 1; //!< [16] PHY test interface operation selector: when 1 configures address write operation on the falling edge of TESTCLK; when 0 configures a data write operation on the rising edge of TESTCLK
        unsigned RESERVED0 : 15; //!< [31:17] Reserved
    } B;
} hw_mipi_dsi_phy_tst_ctrl1_t;
#endif

/*
 * constants & macros for entire MIPI_DSI_PHY_TST_CTRL1 register
 */
#define HW_MIPI_DSI_PHY_TST_CTRL1_ADDR      (REGS_MIPI_DSI_BASE + 0x68)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_DSI_PHY_TST_CTRL1           (*(volatile hw_mipi_dsi_phy_tst_ctrl1_t *) HW_MIPI_DSI_PHY_TST_CTRL1_ADDR)
#define HW_MIPI_DSI_PHY_TST_CTRL1_RD()      (HW_MIPI_DSI_PHY_TST_CTRL1.U)
#define HW_MIPI_DSI_PHY_TST_CTRL1_WR(v)     (HW_MIPI_DSI_PHY_TST_CTRL1.U = (v))
#define HW_MIPI_DSI_PHY_TST_CTRL1_SET(v)    (HW_MIPI_DSI_PHY_TST_CTRL1_WR(HW_MIPI_DSI_PHY_TST_CTRL1_RD() |  (v)))
#define HW_MIPI_DSI_PHY_TST_CTRL1_CLR(v)    (HW_MIPI_DSI_PHY_TST_CTRL1_WR(HW_MIPI_DSI_PHY_TST_CTRL1_RD() & ~(v)))
#define HW_MIPI_DSI_PHY_TST_CTRL1_TOG(v)    (HW_MIPI_DSI_PHY_TST_CTRL1_WR(HW_MIPI_DSI_PHY_TST_CTRL1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_DSI_PHY_TST_CTRL1 bitfields
 */

/* --- Register HW_MIPI_DSI_PHY_TST_CTRL1, field PHY_TESTDIN[7:0] (RW)
 *
 * PHY test interface input 8-bit data bus for internal register programming and test
 * functionalities access
 */

#define BP_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDIN      (0)      //!< Bit position for MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDIN.
#define BM_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDIN      (0x000000ff)  //!< Bit mask for MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDIN.

//! @brief Get value of MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDIN from a register value.
#define BG_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDIN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDIN) >> BP_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDIN)

//! @brief Format value for bitfield MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDIN.
#define BF_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDIN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDIN) & BM_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDIN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_TESTDIN field to a new value.
#define BW_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDIN(v)   (HW_MIPI_DSI_PHY_TST_CTRL1_WR((HW_MIPI_DSI_PHY_TST_CTRL1_RD() & ~BM_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDIN) | BF_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDIN(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_TST_CTRL1, field PHY_TESTDOUT[15:8] (RW)
 *
 * PHY output 8-bit data bus for read-back and internal probing functionalities
 */

#define BP_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDOUT      (8)      //!< Bit position for MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDOUT.
#define BM_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDOUT      (0x0000ff00)  //!< Bit mask for MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDOUT.

//! @brief Get value of MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDOUT from a register value.
#define BG_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDOUT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDOUT) >> BP_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDOUT)

//! @brief Format value for bitfield MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDOUT.
#define BF_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDOUT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDOUT) & BM_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDOUT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_TESTDOUT field to a new value.
#define BW_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDOUT(v)   (HW_MIPI_DSI_PHY_TST_CTRL1_WR((HW_MIPI_DSI_PHY_TST_CTRL1_RD() & ~BM_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDOUT) | BF_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTDOUT(v)))
#endif

/* --- Register HW_MIPI_DSI_PHY_TST_CTRL1, field PHY_TESTEN[16] (RW)
 *
 * PHY test interface operation selector: when 1 configures address write operation on the falling
 * edge of TESTCLK; when 0 configures a data write operation on the rising edge of TESTCLK
 */

#define BP_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN      (16)      //!< Bit position for MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN.
#define BM_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN      (0x00010000)  //!< Bit mask for MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN.

//! @brief Get value of MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN from a register value.
#define BG_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN) >> BP_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN)

//! @brief Format value for bitfield MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN.
#define BF_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN) & BM_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_TESTEN field to a new value.
#define BW_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN(v)   (HW_MIPI_DSI_PHY_TST_CTRL1_WR((HW_MIPI_DSI_PHY_TST_CTRL1_RD() & ~BM_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN) | BF_MIPI_DSI_PHY_TST_CTRL1_PHY_TESTEN(v)))
#endif


/*!
 * @brief All MIPI_DSI module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_mipi_dsi
{
    volatile hw_mipi_dsi_version_t VERSION; //!< Version of the DSI host ctrl
    volatile hw_mipi_dsi_pwr_up_t PWR_UP; //!< Core power up
    volatile hw_mipi_dsi_clkmgr_cfg_t CLKMGR_CFG; //!< Number of active data lanes
    volatile hw_mipi_dsi_dpi_cfg_t DPI_CFG; //!< DPI interface configuration
    volatile hw_mipi_dsi_dbi_cfg_t DBI_CFG; //!< DBI interface configuration
    volatile hw_mipi_dsi_dbis_cmdsize_t DBIS_CMDSIZE; //!< DBI command size configuration
    volatile hw_mipi_dsi_pckhdl_cfg_t PCKHDL_CFG; //!< Packet handler configuration
    volatile hw_mipi_dsi_vid_mode_cfg_t VID_MODE_CFG; //!< Video Mode Configuration
    volatile hw_mipi_dsi_vid_pkt_cfg_t VID_PKT_CFG; //!< Video packet configuration
    volatile hw_mipi_dsi_cmd_mode_cfg_t CMD_MODE_CFG; //!< Command mode configuration
    volatile hw_mipi_dsi_tmr_line_cfg_t TMR_LINE_CFG; //!< Line timer configuration
    volatile hw_mipi_dsi_vtiming_cfg_t VTIMING_CFG; //!< Vertical timing configuration
    volatile hw_mipi_dsi_phy_tmr_cfg_t PHY_TMR_CFG; //!< D-PHY timing configuration
    volatile hw_mipi_dsi_gen_hdr_t GEN_HDR; //!< Generic packet Header configuration
    volatile hw_mipi_dsi_gen_pld_data_t GEN_PLD_DATA; //!< Generic payload data in/out
    volatile hw_mipi_dsi_cmd_pkt_status_t CMD_PKT_STATUS; //!< Command packet status
    volatile hw_mipi_dsi_to_cnt_cfg0_t TO_CNT_CFG0; //!< Time Out timers configuration
    volatile hw_mipi_dsi_error_st0_t ERROR_ST0; //!< Interrupt status register 0
    volatile hw_mipi_dsi_error_st1_t ERROR_ST1; //!< Interrupt status register 1
    volatile hw_mipi_dsi_error_msk0_t ERROR_MSK0; //!< Masks Interrupt generation trigged by ERROR_ST0 register
    volatile hw_mipi_dsi_error_msk1_t ERROR_MSK1; //!< Masks Interrupt generation trigged by ERROR_ST1 register
    volatile hw_mipi_dsi_phy_rstz_t PHY_RSTZ; //!< D-PHY reset control
    volatile hw_mipi_dsi_phy_if_cfg_t PHY_IF_CFG; //!< D-PHY interface configuration
    volatile hw_mipi_dsi_phy_if_ctrl_t PHY_IF_CTRL; //!< D-PHY PPI interface control
    volatile hw_mipi_dsi_phy_status_t PHY_STATUS; //!< D-PHY PPI status interface
    volatile hw_mipi_dsi_phy_tst_ctrl0_t PHY_TST_CTRL0; //!< D-PHY Test interface control 0
    volatile hw_mipi_dsi_phy_tst_ctrl1_t PHY_TST_CTRL1; //!< D-PHY Test interface control 1
} hw_mipi_dsi_t;
#pragma pack()

//! @brief Macro to access all MIPI_DSI registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_MIPI_DSI(0)</code>.
#define HW_MIPI_DSI     (*(volatile hw_mipi_dsi_t *) REGS_MIPI_DSI_BASE)

#endif


#endif // __HW_MIPI_DSI_REGISTERS_H__
