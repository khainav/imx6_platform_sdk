/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef __HW_MIPI_CSI_REGISTERS_H__
#define __HW_MIPI_CSI_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SDL MIPI_CSI registers defined in this header file.
 *
 * - HW_MIPI_CSI_VERSION - Controller Version Identification Register
 * - HW_MIPI_CSI_N_LANES - Number of Active Data Lanes
 * - HW_MIPI_CSI_PHY_SHUTDOWNZ - Phy shutdown control
 * - HW_MIPI_CSI_DPHY_RSTZ - Phy reset control
 * - HW_MIPI_CSI_CSI2_RESETN - CSI2 controller reset
 * - HW_MIPI_CSI_PHY_STATE - General settings for all blocks
 * - HW_MIPI_CSI_DATA_IDS_1 - Data IDs for which IDI reports line boundary matching errors
 * - HW_MIPI_CSI_ERR1 - Error state register 1
 * - HW_MIPI_CSI_ERR2 - Error state register 2
 * - HW_MIPI_CSI_MASK2 - Masks for errors 2
 * - HW_MIPI_CSI_PHY_TST_CRTL0 - D-PHY Test interface control 0
 * - HW_MIPI_CSI_PHY_TST_CTRL1 - D-PHY Test interface control 1
 *
 * - hw_mipi_csi_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_MIPI_CSI_BASE
#define HW_MIPI_CSI_INSTANCE_COUNT (1) //!< Number of instances of the MIPI_CSI module.
#define REGS_MIPI_CSI_BASE (0x020dc000) //!< Base address for MIPI_CSI.
#endif
//@}


//-------------------------------------------------------------------------------------------
// HW_MIPI_CSI_VERSION - Controller Version Identification Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_CSI_VERSION - Controller Version Identification Register (RO)
 *
 * Reset value: 0x00000000
 *
 * Name: Controller Version Identification Register  Address Offset: 0x000  Size: 32 bits  Default
 * Value: CSI_VERSION_ID  Access: Read
 */
typedef union _hw_mipi_csi_version
{
    reg32_t U;
    struct _hw_mipi_csi_version_bitfields
    {
        unsigned VERSION : 32; //!< [31:0] Version of the CSI-2 Host Controller Default Value: CSI_VERSION_ID
    } B;
} hw_mipi_csi_version_t;
#endif

/*
 * constants & macros for entire MIPI_CSI_VERSION register
 */
#define HW_MIPI_CSI_VERSION_ADDR      (REGS_MIPI_CSI_BASE + 0x0)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_CSI_VERSION           (*(volatile hw_mipi_csi_version_t *) HW_MIPI_CSI_VERSION_ADDR)
#define HW_MIPI_CSI_VERSION_RD()      (HW_MIPI_CSI_VERSION.U)
#endif

/*
 * constants & macros for individual MIPI_CSI_VERSION bitfields
 */

/* --- Register HW_MIPI_CSI_VERSION, field VERSION[31:0] (RO)
 *
 * Version of the CSI-2 Host Controller Default Value: CSI_VERSION_ID
 */

#define BP_MIPI_CSI_VERSION_VERSION      (0)      //!< Bit position for MIPI_CSI_VERSION_VERSION.
#define BM_MIPI_CSI_VERSION_VERSION      (0xffffffff)  //!< Bit mask for MIPI_CSI_VERSION_VERSION.

//! @brief Get value of MIPI_CSI_VERSION_VERSION from a register value.
#define BG_MIPI_CSI_VERSION_VERSION(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_VERSION_VERSION) >> BP_MIPI_CSI_VERSION_VERSION)

//-------------------------------------------------------------------------------------------
// HW_MIPI_CSI_N_LANES - Number of Active Data Lanes
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_CSI_N_LANES - Number of Active Data Lanes (RW)
 *
 * Reset value: 0x00000000
 *
 * Name: Number of Active Data Lanes  Address Offset: 0x004  Size: 1 bits  Default Value:
 * CSI_N_LANES  Access: Read/Write
 */
typedef union _hw_mipi_csi_n_lanes
{
    reg32_t U;
    struct _hw_mipi_csi_n_lanes_bitfields
    {
        unsigned N_LANES : 1; //!< [0] Number of Active Data Lanes Can only be updated when the PHY lane is in stop state.
        unsigned RESERVED0 : 31; //!< [31:1] Reserved.
    } B;
} hw_mipi_csi_n_lanes_t;
#endif

/*
 * constants & macros for entire MIPI_CSI_N_LANES register
 */
#define HW_MIPI_CSI_N_LANES_ADDR      (REGS_MIPI_CSI_BASE + 0x4)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_CSI_N_LANES           (*(volatile hw_mipi_csi_n_lanes_t *) HW_MIPI_CSI_N_LANES_ADDR)
#define HW_MIPI_CSI_N_LANES_RD()      (HW_MIPI_CSI_N_LANES.U)
#define HW_MIPI_CSI_N_LANES_WR(v)     (HW_MIPI_CSI_N_LANES.U = (v))
#define HW_MIPI_CSI_N_LANES_SET(v)    (HW_MIPI_CSI_N_LANES_WR(HW_MIPI_CSI_N_LANES_RD() |  (v)))
#define HW_MIPI_CSI_N_LANES_CLR(v)    (HW_MIPI_CSI_N_LANES_WR(HW_MIPI_CSI_N_LANES_RD() & ~(v)))
#define HW_MIPI_CSI_N_LANES_TOG(v)    (HW_MIPI_CSI_N_LANES_WR(HW_MIPI_CSI_N_LANES_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_CSI_N_LANES bitfields
 */

/* --- Register HW_MIPI_CSI_N_LANES, field N_LANES[0] (RW)
 *
 * Number of Active Data Lanes Can only be updated when the PHY lane is in stop state. Default
 * Value: CSI_N_LANES
 *
 * Values:
 * 0 - 1 Data Lane (Lane 0)
 * 1 - 2 Data Lanes (Lane 0, and 1)
 */

#define BP_MIPI_CSI_N_LANES_N_LANES      (0)      //!< Bit position for MIPI_CSI_N_LANES_N_LANES.
#define BM_MIPI_CSI_N_LANES_N_LANES      (0x00000001)  //!< Bit mask for MIPI_CSI_N_LANES_N_LANES.

//! @brief Get value of MIPI_CSI_N_LANES_N_LANES from a register value.
#define BG_MIPI_CSI_N_LANES_N_LANES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_N_LANES_N_LANES) >> BP_MIPI_CSI_N_LANES_N_LANES)

//! @brief Format value for bitfield MIPI_CSI_N_LANES_N_LANES.
#define BF_MIPI_CSI_N_LANES_N_LANES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_N_LANES_N_LANES) & BM_MIPI_CSI_N_LANES_N_LANES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the N_LANES field to a new value.
#define BW_MIPI_CSI_N_LANES_N_LANES(v)   (HW_MIPI_CSI_N_LANES_WR((HW_MIPI_CSI_N_LANES_RD() & ~BM_MIPI_CSI_N_LANES_N_LANES) | BF_MIPI_CSI_N_LANES_N_LANES(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_MIPI_CSI_PHY_SHUTDOWNZ - Phy shutdown control
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_CSI_PHY_SHUTDOWNZ - Phy shutdown control (RW)
 *
 * Reset value: 0x00000000
 *
 * Name: Phy shutdown control  Address Offset: 0x008  Size: 1 bit  Default Value: 0  Access:
 * Read/Write
 */
typedef union _hw_mipi_csi_phy_shutdownz
{
    reg32_t U;
    struct _hw_mipi_csi_phy_shutdownz_bitfields
    {
        unsigned PHY_SHUTDOWNZ : 1; //!< [0] Shutdown input.
        unsigned RESERVED0 : 31; //!< [31:1] Reserved
    } B;
} hw_mipi_csi_phy_shutdownz_t;
#endif

/*
 * constants & macros for entire MIPI_CSI_PHY_SHUTDOWNZ register
 */
#define HW_MIPI_CSI_PHY_SHUTDOWNZ_ADDR      (REGS_MIPI_CSI_BASE + 0x8)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_CSI_PHY_SHUTDOWNZ           (*(volatile hw_mipi_csi_phy_shutdownz_t *) HW_MIPI_CSI_PHY_SHUTDOWNZ_ADDR)
#define HW_MIPI_CSI_PHY_SHUTDOWNZ_RD()      (HW_MIPI_CSI_PHY_SHUTDOWNZ.U)
#define HW_MIPI_CSI_PHY_SHUTDOWNZ_WR(v)     (HW_MIPI_CSI_PHY_SHUTDOWNZ.U = (v))
#define HW_MIPI_CSI_PHY_SHUTDOWNZ_SET(v)    (HW_MIPI_CSI_PHY_SHUTDOWNZ_WR(HW_MIPI_CSI_PHY_SHUTDOWNZ_RD() |  (v)))
#define HW_MIPI_CSI_PHY_SHUTDOWNZ_CLR(v)    (HW_MIPI_CSI_PHY_SHUTDOWNZ_WR(HW_MIPI_CSI_PHY_SHUTDOWNZ_RD() & ~(v)))
#define HW_MIPI_CSI_PHY_SHUTDOWNZ_TOG(v)    (HW_MIPI_CSI_PHY_SHUTDOWNZ_WR(HW_MIPI_CSI_PHY_SHUTDOWNZ_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_CSI_PHY_SHUTDOWNZ bitfields
 */

/* --- Register HW_MIPI_CSI_PHY_SHUTDOWNZ, field PHY_SHUTDOWNZ[0] (RW)
 *
 * Shutdown input. This line is used to place the complete macro in power down. All analog blocks
 * are in power down mode and digital logic is cleared. Active Low Default Value: 0
 */

#define BP_MIPI_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ      (0)      //!< Bit position for MIPI_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ.
#define BM_MIPI_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ      (0x00000001)  //!< Bit mask for MIPI_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ.

//! @brief Get value of MIPI_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ from a register value.
#define BG_MIPI_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ) >> BP_MIPI_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ)

//! @brief Format value for bitfield MIPI_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ.
#define BF_MIPI_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ) & BM_MIPI_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_SHUTDOWNZ field to a new value.
#define BW_MIPI_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ(v)   (HW_MIPI_CSI_PHY_SHUTDOWNZ_WR((HW_MIPI_CSI_PHY_SHUTDOWNZ_RD() & ~BM_MIPI_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ) | BF_MIPI_CSI_PHY_SHUTDOWNZ_PHY_SHUTDOWNZ(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_CSI_DPHY_RSTZ - Phy reset control
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_CSI_DPHY_RSTZ - Phy reset control (RW)
 *
 * Reset value: 0x00000000
 *
 * Name: Phy reset control  Address Offset: 0x00C  Size: 1 bit  Default Value: 0  Access: Read/Write
 */
typedef union _hw_mipi_csi_dphy_rstz
{
    reg32_t U;
    struct _hw_mipi_csi_dphy_rstz_bitfields
    {
        unsigned DPHY_RSTZ : 1; //!< [0] DPHY reset output.
        unsigned RESERVED0 : 31; //!< [31:1] Reserved
    } B;
} hw_mipi_csi_dphy_rstz_t;
#endif

/*
 * constants & macros for entire MIPI_CSI_DPHY_RSTZ register
 */
#define HW_MIPI_CSI_DPHY_RSTZ_ADDR      (REGS_MIPI_CSI_BASE + 0xc)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_CSI_DPHY_RSTZ           (*(volatile hw_mipi_csi_dphy_rstz_t *) HW_MIPI_CSI_DPHY_RSTZ_ADDR)
#define HW_MIPI_CSI_DPHY_RSTZ_RD()      (HW_MIPI_CSI_DPHY_RSTZ.U)
#define HW_MIPI_CSI_DPHY_RSTZ_WR(v)     (HW_MIPI_CSI_DPHY_RSTZ.U = (v))
#define HW_MIPI_CSI_DPHY_RSTZ_SET(v)    (HW_MIPI_CSI_DPHY_RSTZ_WR(HW_MIPI_CSI_DPHY_RSTZ_RD() |  (v)))
#define HW_MIPI_CSI_DPHY_RSTZ_CLR(v)    (HW_MIPI_CSI_DPHY_RSTZ_WR(HW_MIPI_CSI_DPHY_RSTZ_RD() & ~(v)))
#define HW_MIPI_CSI_DPHY_RSTZ_TOG(v)    (HW_MIPI_CSI_DPHY_RSTZ_WR(HW_MIPI_CSI_DPHY_RSTZ_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_CSI_DPHY_RSTZ bitfields
 */

/* --- Register HW_MIPI_CSI_DPHY_RSTZ, field DPHY_RSTZ[0] (RW)
 *
 * DPHY reset output. Active Low Default Value: 0
 */

#define BP_MIPI_CSI_DPHY_RSTZ_DPHY_RSTZ      (0)      //!< Bit position for MIPI_CSI_DPHY_RSTZ_DPHY_RSTZ.
#define BM_MIPI_CSI_DPHY_RSTZ_DPHY_RSTZ      (0x00000001)  //!< Bit mask for MIPI_CSI_DPHY_RSTZ_DPHY_RSTZ.

//! @brief Get value of MIPI_CSI_DPHY_RSTZ_DPHY_RSTZ from a register value.
#define BG_MIPI_CSI_DPHY_RSTZ_DPHY_RSTZ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_DPHY_RSTZ_DPHY_RSTZ) >> BP_MIPI_CSI_DPHY_RSTZ_DPHY_RSTZ)

//! @brief Format value for bitfield MIPI_CSI_DPHY_RSTZ_DPHY_RSTZ.
#define BF_MIPI_CSI_DPHY_RSTZ_DPHY_RSTZ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_DPHY_RSTZ_DPHY_RSTZ) & BM_MIPI_CSI_DPHY_RSTZ_DPHY_RSTZ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPHY_RSTZ field to a new value.
#define BW_MIPI_CSI_DPHY_RSTZ_DPHY_RSTZ(v)   (HW_MIPI_CSI_DPHY_RSTZ_WR((HW_MIPI_CSI_DPHY_RSTZ_RD() & ~BM_MIPI_CSI_DPHY_RSTZ_DPHY_RSTZ) | BF_MIPI_CSI_DPHY_RSTZ_DPHY_RSTZ(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_CSI_CSI2_RESETN - CSI2 controller reset
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_CSI_CSI2_RESETN - CSI2 controller reset (RW)
 *
 * Reset value: 0x00000000
 *
 * Name: CSI2 controller reset  Address Offset: 0x010  Size: 1 bit  Default Value: 0  Access:
 * Read/Write
 */
typedef union _hw_mipi_csi_csi2_resetn
{
    reg32_t U;
    struct _hw_mipi_csi_csi2_resetn_bitfields
    {
        unsigned CSI2_RESETN : 1; //!< [0] CSI-2 controller reset output.
        unsigned RESERVED0 : 31; //!< [31:1] Reserved
    } B;
} hw_mipi_csi_csi2_resetn_t;
#endif

/*
 * constants & macros for entire MIPI_CSI_CSI2_RESETN register
 */
#define HW_MIPI_CSI_CSI2_RESETN_ADDR      (REGS_MIPI_CSI_BASE + 0x10)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_CSI_CSI2_RESETN           (*(volatile hw_mipi_csi_csi2_resetn_t *) HW_MIPI_CSI_CSI2_RESETN_ADDR)
#define HW_MIPI_CSI_CSI2_RESETN_RD()      (HW_MIPI_CSI_CSI2_RESETN.U)
#define HW_MIPI_CSI_CSI2_RESETN_WR(v)     (HW_MIPI_CSI_CSI2_RESETN.U = (v))
#define HW_MIPI_CSI_CSI2_RESETN_SET(v)    (HW_MIPI_CSI_CSI2_RESETN_WR(HW_MIPI_CSI_CSI2_RESETN_RD() |  (v)))
#define HW_MIPI_CSI_CSI2_RESETN_CLR(v)    (HW_MIPI_CSI_CSI2_RESETN_WR(HW_MIPI_CSI_CSI2_RESETN_RD() & ~(v)))
#define HW_MIPI_CSI_CSI2_RESETN_TOG(v)    (HW_MIPI_CSI_CSI2_RESETN_WR(HW_MIPI_CSI_CSI2_RESETN_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_CSI_CSI2_RESETN bitfields
 */

/* --- Register HW_MIPI_CSI_CSI2_RESETN, field CSI2_RESETN[0] (RW)
 *
 * CSI-2 controller reset output. Active Low Default Value: 0
 */

#define BP_MIPI_CSI_CSI2_RESETN_CSI2_RESETN      (0)      //!< Bit position for MIPI_CSI_CSI2_RESETN_CSI2_RESETN.
#define BM_MIPI_CSI_CSI2_RESETN_CSI2_RESETN      (0x00000001)  //!< Bit mask for MIPI_CSI_CSI2_RESETN_CSI2_RESETN.

//! @brief Get value of MIPI_CSI_CSI2_RESETN_CSI2_RESETN from a register value.
#define BG_MIPI_CSI_CSI2_RESETN_CSI2_RESETN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_CSI2_RESETN_CSI2_RESETN) >> BP_MIPI_CSI_CSI2_RESETN_CSI2_RESETN)

//! @brief Format value for bitfield MIPI_CSI_CSI2_RESETN_CSI2_RESETN.
#define BF_MIPI_CSI_CSI2_RESETN_CSI2_RESETN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_CSI2_RESETN_CSI2_RESETN) & BM_MIPI_CSI_CSI2_RESETN_CSI2_RESETN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSI2_RESETN field to a new value.
#define BW_MIPI_CSI_CSI2_RESETN_CSI2_RESETN(v)   (HW_MIPI_CSI_CSI2_RESETN_WR((HW_MIPI_CSI_CSI2_RESETN_RD() & ~BM_MIPI_CSI_CSI2_RESETN_CSI2_RESETN) | BF_MIPI_CSI_CSI2_RESETN_CSI2_RESETN(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_CSI_PHY_STATE - General settings for all blocks
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_CSI_PHY_STATE - General settings for all blocks (RO)
 *
 * Reset value: 0x00000000
 *
 * Name: General settings for all blocks  Address Offset: 0x014  Size: 8 bit  Default Value: 0
 * Access: Read (with exception of bit 11 which is Read/Write)
 */
typedef union _hw_mipi_csi_phy_state
{
    reg32_t U;
    struct _hw_mipi_csi_phy_state_bitfields
    {
        unsigned PHY_RXULPSESC_0 : 1; //!< [0] Lane module 0 has entered the Ultra Low Power mode Default Value: 0
        unsigned PHY_RXULPSESC_1 : 1; //!< [1] Lane module 1 has entered the Ultra Low Power mode Default Value: 0
        unsigned RESERVED0 : 2; //!< [3:2] 
        unsigned PHY_STOPSTATEDATA_0 : 1; //!< [4] Data Lane 0 in Stop state Default Value: 0
        unsigned PHY_STOPSTATEDATA_1 : 1; //!< [5] Data Lane 1 in Stop state Default Value: 0
        unsigned RESERVED1 : 2; //!< [7:6] 
        unsigned PHY_RXCLKACTIVEHS : 1; //!< [8] Indicates that the clock lane is actively receiving a DDR clock Default Value: 0
        unsigned PHY_RXULPSCLKNOT : 1; //!< [9] Active Low.
        unsigned PHY_STOPSTATECLK : 1; //!< [10] Clock Lane in Stop state Default Value: 0
        unsigned BYPASS_2ECC_TST : 1; //!< [11] Payload Bypass test mode for double ECC errors Default Value: 0
        unsigned RESERVED2 : 20; //!< [31:12] Reserved
    } B;
} hw_mipi_csi_phy_state_t;
#endif

/*
 * constants & macros for entire MIPI_CSI_PHY_STATE register
 */
#define HW_MIPI_CSI_PHY_STATE_ADDR      (REGS_MIPI_CSI_BASE + 0x14)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_CSI_PHY_STATE           (*(volatile hw_mipi_csi_phy_state_t *) HW_MIPI_CSI_PHY_STATE_ADDR)
#define HW_MIPI_CSI_PHY_STATE_RD()      (HW_MIPI_CSI_PHY_STATE.U)
#endif

/*
 * constants & macros for individual MIPI_CSI_PHY_STATE bitfields
 */

/* --- Register HW_MIPI_CSI_PHY_STATE, field PHY_RXULPSESC_0[0] (RO)
 *
 * Lane module 0 has entered the Ultra Low Power mode Default Value: 0
 */

#define BP_MIPI_CSI_PHY_STATE_PHY_RXULPSESC_0      (0)      //!< Bit position for MIPI_CSI_PHY_STATE_PHY_RXULPSESC_0.
#define BM_MIPI_CSI_PHY_STATE_PHY_RXULPSESC_0      (0x00000001)  //!< Bit mask for MIPI_CSI_PHY_STATE_PHY_RXULPSESC_0.

//! @brief Get value of MIPI_CSI_PHY_STATE_PHY_RXULPSESC_0 from a register value.
#define BG_MIPI_CSI_PHY_STATE_PHY_RXULPSESC_0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_PHY_STATE_PHY_RXULPSESC_0) >> BP_MIPI_CSI_PHY_STATE_PHY_RXULPSESC_0)

/* --- Register HW_MIPI_CSI_PHY_STATE, field PHY_RXULPSESC_1[1] (RO)
 *
 * Lane module 1 has entered the Ultra Low Power mode Default Value: 0
 */

#define BP_MIPI_CSI_PHY_STATE_PHY_RXULPSESC_1      (1)      //!< Bit position for MIPI_CSI_PHY_STATE_PHY_RXULPSESC_1.
#define BM_MIPI_CSI_PHY_STATE_PHY_RXULPSESC_1      (0x00000002)  //!< Bit mask for MIPI_CSI_PHY_STATE_PHY_RXULPSESC_1.

//! @brief Get value of MIPI_CSI_PHY_STATE_PHY_RXULPSESC_1 from a register value.
#define BG_MIPI_CSI_PHY_STATE_PHY_RXULPSESC_1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_PHY_STATE_PHY_RXULPSESC_1) >> BP_MIPI_CSI_PHY_STATE_PHY_RXULPSESC_1)

/* --- Register HW_MIPI_CSI_PHY_STATE, field PHY_STOPSTATEDATA_0[4] (RO)
 *
 * Data Lane 0 in Stop state Default Value: 0
 */

#define BP_MIPI_CSI_PHY_STATE_PHY_STOPSTATEDATA_0      (4)      //!< Bit position for MIPI_CSI_PHY_STATE_PHY_STOPSTATEDATA_0.
#define BM_MIPI_CSI_PHY_STATE_PHY_STOPSTATEDATA_0      (0x00000010)  //!< Bit mask for MIPI_CSI_PHY_STATE_PHY_STOPSTATEDATA_0.

//! @brief Get value of MIPI_CSI_PHY_STATE_PHY_STOPSTATEDATA_0 from a register value.
#define BG_MIPI_CSI_PHY_STATE_PHY_STOPSTATEDATA_0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_PHY_STATE_PHY_STOPSTATEDATA_0) >> BP_MIPI_CSI_PHY_STATE_PHY_STOPSTATEDATA_0)

/* --- Register HW_MIPI_CSI_PHY_STATE, field PHY_STOPSTATEDATA_1[5] (RO)
 *
 * Data Lane 1 in Stop state Default Value: 0
 */

#define BP_MIPI_CSI_PHY_STATE_PHY_STOPSTATEDATA_1      (5)      //!< Bit position for MIPI_CSI_PHY_STATE_PHY_STOPSTATEDATA_1.
#define BM_MIPI_CSI_PHY_STATE_PHY_STOPSTATEDATA_1      (0x00000020)  //!< Bit mask for MIPI_CSI_PHY_STATE_PHY_STOPSTATEDATA_1.

//! @brief Get value of MIPI_CSI_PHY_STATE_PHY_STOPSTATEDATA_1 from a register value.
#define BG_MIPI_CSI_PHY_STATE_PHY_STOPSTATEDATA_1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_PHY_STATE_PHY_STOPSTATEDATA_1) >> BP_MIPI_CSI_PHY_STATE_PHY_STOPSTATEDATA_1)

/* --- Register HW_MIPI_CSI_PHY_STATE, field PHY_RXCLKACTIVEHS[8] (RO)
 *
 * Indicates that the clock lane is actively receiving a DDR clock Default Value: 0
 */

#define BP_MIPI_CSI_PHY_STATE_PHY_RXCLKACTIVEHS      (8)      //!< Bit position for MIPI_CSI_PHY_STATE_PHY_RXCLKACTIVEHS.
#define BM_MIPI_CSI_PHY_STATE_PHY_RXCLKACTIVEHS      (0x00000100)  //!< Bit mask for MIPI_CSI_PHY_STATE_PHY_RXCLKACTIVEHS.

//! @brief Get value of MIPI_CSI_PHY_STATE_PHY_RXCLKACTIVEHS from a register value.
#define BG_MIPI_CSI_PHY_STATE_PHY_RXCLKACTIVEHS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_PHY_STATE_PHY_RXCLKACTIVEHS) >> BP_MIPI_CSI_PHY_STATE_PHY_RXCLKACTIVEHS)

/* --- Register HW_MIPI_CSI_PHY_STATE, field PHY_RXULPSCLKNOT[9] (RO)
 *
 * Active Low. This signal indicates that the Clock Lane module has entered the Ultra Low Power
 * state Default Value: 0
 */

#define BP_MIPI_CSI_PHY_STATE_PHY_RXULPSCLKNOT      (9)      //!< Bit position for MIPI_CSI_PHY_STATE_PHY_RXULPSCLKNOT.
#define BM_MIPI_CSI_PHY_STATE_PHY_RXULPSCLKNOT      (0x00000200)  //!< Bit mask for MIPI_CSI_PHY_STATE_PHY_RXULPSCLKNOT.

//! @brief Get value of MIPI_CSI_PHY_STATE_PHY_RXULPSCLKNOT from a register value.
#define BG_MIPI_CSI_PHY_STATE_PHY_RXULPSCLKNOT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_PHY_STATE_PHY_RXULPSCLKNOT) >> BP_MIPI_CSI_PHY_STATE_PHY_RXULPSCLKNOT)

/* --- Register HW_MIPI_CSI_PHY_STATE, field PHY_STOPSTATECLK[10] (RO)
 *
 * Clock Lane in Stop state Default Value: 0
 */

#define BP_MIPI_CSI_PHY_STATE_PHY_STOPSTATECLK      (10)      //!< Bit position for MIPI_CSI_PHY_STATE_PHY_STOPSTATECLK.
#define BM_MIPI_CSI_PHY_STATE_PHY_STOPSTATECLK      (0x00000400)  //!< Bit mask for MIPI_CSI_PHY_STATE_PHY_STOPSTATECLK.

//! @brief Get value of MIPI_CSI_PHY_STATE_PHY_STOPSTATECLK from a register value.
#define BG_MIPI_CSI_PHY_STATE_PHY_STOPSTATECLK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_PHY_STATE_PHY_STOPSTATECLK) >> BP_MIPI_CSI_PHY_STATE_PHY_STOPSTATECLK)

/* --- Register HW_MIPI_CSI_PHY_STATE, field BYPASS_2ECC_TST[11] (RW)
 *
 * Payload Bypass test mode for double ECC errors Default Value: 0
 */

#define BP_MIPI_CSI_PHY_STATE_BYPASS_2ECC_TST      (11)      //!< Bit position for MIPI_CSI_PHY_STATE_BYPASS_2ECC_TST.
#define BM_MIPI_CSI_PHY_STATE_BYPASS_2ECC_TST      (0x00000800)  //!< Bit mask for MIPI_CSI_PHY_STATE_BYPASS_2ECC_TST.

//! @brief Get value of MIPI_CSI_PHY_STATE_BYPASS_2ECC_TST from a register value.
#define BG_MIPI_CSI_PHY_STATE_BYPASS_2ECC_TST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_PHY_STATE_BYPASS_2ECC_TST) >> BP_MIPI_CSI_PHY_STATE_BYPASS_2ECC_TST)

//-------------------------------------------------------------------------------------------
// HW_MIPI_CSI_DATA_IDS_1 - Data IDs for which IDI reports line boundary matching errors
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_CSI_DATA_IDS_1 - Data IDs for which IDI reports line boundary matching errors (RW)
 *
 * Reset value: 0x00000000
 *
 * Name: Data IDs for which IDI reports line boundary matching errors  Address Offset: 0x018  Size:
 * 32 bit  Default Value: 0  Access: Read/Write
 */
typedef union _hw_mipi_csi_data_ids_1
{
    reg32_t U;
    struct _hw_mipi_csi_data_ids_1_bitfields
    {
        unsigned DI0_DT : 6; //!< [5:0] Data ID 0 Data Type Default Value: 0
        unsigned DI0_VC : 2; //!< [7:6] Data ID 0 Virtual channel Default Value: 0
        unsigned DI1_DT : 6; //!< [13:8] Data ID 1 Data Type Default Value: 0
        unsigned DI1_VC : 2; //!< [15:14] Data ID 1 Virtual channel Default Value: 0
        unsigned DI2_DT : 6; //!< [21:16] DATA ID 2 Data Type Default Value: 0
        unsigned DI2_VC : 2; //!< [23:22] DATA ID 2 Virtual channel Default Value: 0
        unsigned DI3_DT : 6; //!< [29:24] Data ID 3 Data Type Default Value: 0
        unsigned DI3_VC : 2; //!< [31:30] Data ID 3 Virtual channel Default Value: 0
    } B;
} hw_mipi_csi_data_ids_1_t;
#endif

/*
 * constants & macros for entire MIPI_CSI_DATA_IDS_1 register
 */
#define HW_MIPI_CSI_DATA_IDS_1_ADDR      (REGS_MIPI_CSI_BASE + 0x18)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_CSI_DATA_IDS_1           (*(volatile hw_mipi_csi_data_ids_1_t *) HW_MIPI_CSI_DATA_IDS_1_ADDR)
#define HW_MIPI_CSI_DATA_IDS_1_RD()      (HW_MIPI_CSI_DATA_IDS_1.U)
#define HW_MIPI_CSI_DATA_IDS_1_WR(v)     (HW_MIPI_CSI_DATA_IDS_1.U = (v))
#define HW_MIPI_CSI_DATA_IDS_1_SET(v)    (HW_MIPI_CSI_DATA_IDS_1_WR(HW_MIPI_CSI_DATA_IDS_1_RD() |  (v)))
#define HW_MIPI_CSI_DATA_IDS_1_CLR(v)    (HW_MIPI_CSI_DATA_IDS_1_WR(HW_MIPI_CSI_DATA_IDS_1_RD() & ~(v)))
#define HW_MIPI_CSI_DATA_IDS_1_TOG(v)    (HW_MIPI_CSI_DATA_IDS_1_WR(HW_MIPI_CSI_DATA_IDS_1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_CSI_DATA_IDS_1 bitfields
 */

/* --- Register HW_MIPI_CSI_DATA_IDS_1, field DI0_DT[5:0] (RW)
 *
 * Data ID 0 Data Type Default Value: 0
 */

#define BP_MIPI_CSI_DATA_IDS_1_DI0_DT      (0)      //!< Bit position for MIPI_CSI_DATA_IDS_1_DI0_DT.
#define BM_MIPI_CSI_DATA_IDS_1_DI0_DT      (0x0000003f)  //!< Bit mask for MIPI_CSI_DATA_IDS_1_DI0_DT.

//! @brief Get value of MIPI_CSI_DATA_IDS_1_DI0_DT from a register value.
#define BG_MIPI_CSI_DATA_IDS_1_DI0_DT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_DATA_IDS_1_DI0_DT) >> BP_MIPI_CSI_DATA_IDS_1_DI0_DT)

//! @brief Format value for bitfield MIPI_CSI_DATA_IDS_1_DI0_DT.
#define BF_MIPI_CSI_DATA_IDS_1_DI0_DT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_DATA_IDS_1_DI0_DT) & BM_MIPI_CSI_DATA_IDS_1_DI0_DT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DI0_DT field to a new value.
#define BW_MIPI_CSI_DATA_IDS_1_DI0_DT(v)   (HW_MIPI_CSI_DATA_IDS_1_WR((HW_MIPI_CSI_DATA_IDS_1_RD() & ~BM_MIPI_CSI_DATA_IDS_1_DI0_DT) | BF_MIPI_CSI_DATA_IDS_1_DI0_DT(v)))
#endif

/* --- Register HW_MIPI_CSI_DATA_IDS_1, field DI0_VC[7:6] (RW)
 *
 * Data ID 0 Virtual channel Default Value: 0
 */

#define BP_MIPI_CSI_DATA_IDS_1_DI0_VC      (6)      //!< Bit position for MIPI_CSI_DATA_IDS_1_DI0_VC.
#define BM_MIPI_CSI_DATA_IDS_1_DI0_VC      (0x000000c0)  //!< Bit mask for MIPI_CSI_DATA_IDS_1_DI0_VC.

//! @brief Get value of MIPI_CSI_DATA_IDS_1_DI0_VC from a register value.
#define BG_MIPI_CSI_DATA_IDS_1_DI0_VC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_DATA_IDS_1_DI0_VC) >> BP_MIPI_CSI_DATA_IDS_1_DI0_VC)

//! @brief Format value for bitfield MIPI_CSI_DATA_IDS_1_DI0_VC.
#define BF_MIPI_CSI_DATA_IDS_1_DI0_VC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_DATA_IDS_1_DI0_VC) & BM_MIPI_CSI_DATA_IDS_1_DI0_VC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DI0_VC field to a new value.
#define BW_MIPI_CSI_DATA_IDS_1_DI0_VC(v)   (HW_MIPI_CSI_DATA_IDS_1_WR((HW_MIPI_CSI_DATA_IDS_1_RD() & ~BM_MIPI_CSI_DATA_IDS_1_DI0_VC) | BF_MIPI_CSI_DATA_IDS_1_DI0_VC(v)))
#endif

/* --- Register HW_MIPI_CSI_DATA_IDS_1, field DI1_DT[13:8] (RW)
 *
 * Data ID 1 Data Type Default Value: 0
 */

#define BP_MIPI_CSI_DATA_IDS_1_DI1_DT      (8)      //!< Bit position for MIPI_CSI_DATA_IDS_1_DI1_DT.
#define BM_MIPI_CSI_DATA_IDS_1_DI1_DT      (0x00003f00)  //!< Bit mask for MIPI_CSI_DATA_IDS_1_DI1_DT.

//! @brief Get value of MIPI_CSI_DATA_IDS_1_DI1_DT from a register value.
#define BG_MIPI_CSI_DATA_IDS_1_DI1_DT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_DATA_IDS_1_DI1_DT) >> BP_MIPI_CSI_DATA_IDS_1_DI1_DT)

//! @brief Format value for bitfield MIPI_CSI_DATA_IDS_1_DI1_DT.
#define BF_MIPI_CSI_DATA_IDS_1_DI1_DT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_DATA_IDS_1_DI1_DT) & BM_MIPI_CSI_DATA_IDS_1_DI1_DT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DI1_DT field to a new value.
#define BW_MIPI_CSI_DATA_IDS_1_DI1_DT(v)   (HW_MIPI_CSI_DATA_IDS_1_WR((HW_MIPI_CSI_DATA_IDS_1_RD() & ~BM_MIPI_CSI_DATA_IDS_1_DI1_DT) | BF_MIPI_CSI_DATA_IDS_1_DI1_DT(v)))
#endif

/* --- Register HW_MIPI_CSI_DATA_IDS_1, field DI1_VC[15:14] (RW)
 *
 * Data ID 1 Virtual channel Default Value: 0
 */

#define BP_MIPI_CSI_DATA_IDS_1_DI1_VC      (14)      //!< Bit position for MIPI_CSI_DATA_IDS_1_DI1_VC.
#define BM_MIPI_CSI_DATA_IDS_1_DI1_VC      (0x0000c000)  //!< Bit mask for MIPI_CSI_DATA_IDS_1_DI1_VC.

//! @brief Get value of MIPI_CSI_DATA_IDS_1_DI1_VC from a register value.
#define BG_MIPI_CSI_DATA_IDS_1_DI1_VC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_DATA_IDS_1_DI1_VC) >> BP_MIPI_CSI_DATA_IDS_1_DI1_VC)

//! @brief Format value for bitfield MIPI_CSI_DATA_IDS_1_DI1_VC.
#define BF_MIPI_CSI_DATA_IDS_1_DI1_VC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_DATA_IDS_1_DI1_VC) & BM_MIPI_CSI_DATA_IDS_1_DI1_VC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DI1_VC field to a new value.
#define BW_MIPI_CSI_DATA_IDS_1_DI1_VC(v)   (HW_MIPI_CSI_DATA_IDS_1_WR((HW_MIPI_CSI_DATA_IDS_1_RD() & ~BM_MIPI_CSI_DATA_IDS_1_DI1_VC) | BF_MIPI_CSI_DATA_IDS_1_DI1_VC(v)))
#endif

/* --- Register HW_MIPI_CSI_DATA_IDS_1, field DI2_DT[21:16] (RW)
 *
 * DATA ID 2 Data Type Default Value: 0
 */

#define BP_MIPI_CSI_DATA_IDS_1_DI2_DT      (16)      //!< Bit position for MIPI_CSI_DATA_IDS_1_DI2_DT.
#define BM_MIPI_CSI_DATA_IDS_1_DI2_DT      (0x003f0000)  //!< Bit mask for MIPI_CSI_DATA_IDS_1_DI2_DT.

//! @brief Get value of MIPI_CSI_DATA_IDS_1_DI2_DT from a register value.
#define BG_MIPI_CSI_DATA_IDS_1_DI2_DT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_DATA_IDS_1_DI2_DT) >> BP_MIPI_CSI_DATA_IDS_1_DI2_DT)

//! @brief Format value for bitfield MIPI_CSI_DATA_IDS_1_DI2_DT.
#define BF_MIPI_CSI_DATA_IDS_1_DI2_DT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_DATA_IDS_1_DI2_DT) & BM_MIPI_CSI_DATA_IDS_1_DI2_DT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DI2_DT field to a new value.
#define BW_MIPI_CSI_DATA_IDS_1_DI2_DT(v)   (HW_MIPI_CSI_DATA_IDS_1_WR((HW_MIPI_CSI_DATA_IDS_1_RD() & ~BM_MIPI_CSI_DATA_IDS_1_DI2_DT) | BF_MIPI_CSI_DATA_IDS_1_DI2_DT(v)))
#endif

/* --- Register HW_MIPI_CSI_DATA_IDS_1, field DI2_VC[23:22] (RW)
 *
 * DATA ID 2 Virtual channel Default Value: 0
 */

#define BP_MIPI_CSI_DATA_IDS_1_DI2_VC      (22)      //!< Bit position for MIPI_CSI_DATA_IDS_1_DI2_VC.
#define BM_MIPI_CSI_DATA_IDS_1_DI2_VC      (0x00c00000)  //!< Bit mask for MIPI_CSI_DATA_IDS_1_DI2_VC.

//! @brief Get value of MIPI_CSI_DATA_IDS_1_DI2_VC from a register value.
#define BG_MIPI_CSI_DATA_IDS_1_DI2_VC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_DATA_IDS_1_DI2_VC) >> BP_MIPI_CSI_DATA_IDS_1_DI2_VC)

//! @brief Format value for bitfield MIPI_CSI_DATA_IDS_1_DI2_VC.
#define BF_MIPI_CSI_DATA_IDS_1_DI2_VC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_DATA_IDS_1_DI2_VC) & BM_MIPI_CSI_DATA_IDS_1_DI2_VC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DI2_VC field to a new value.
#define BW_MIPI_CSI_DATA_IDS_1_DI2_VC(v)   (HW_MIPI_CSI_DATA_IDS_1_WR((HW_MIPI_CSI_DATA_IDS_1_RD() & ~BM_MIPI_CSI_DATA_IDS_1_DI2_VC) | BF_MIPI_CSI_DATA_IDS_1_DI2_VC(v)))
#endif

/* --- Register HW_MIPI_CSI_DATA_IDS_1, field DI3_DT[29:24] (RW)
 *
 * Data ID 3 Data Type Default Value: 0
 */

#define BP_MIPI_CSI_DATA_IDS_1_DI3_DT      (24)      //!< Bit position for MIPI_CSI_DATA_IDS_1_DI3_DT.
#define BM_MIPI_CSI_DATA_IDS_1_DI3_DT      (0x3f000000)  //!< Bit mask for MIPI_CSI_DATA_IDS_1_DI3_DT.

//! @brief Get value of MIPI_CSI_DATA_IDS_1_DI3_DT from a register value.
#define BG_MIPI_CSI_DATA_IDS_1_DI3_DT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_DATA_IDS_1_DI3_DT) >> BP_MIPI_CSI_DATA_IDS_1_DI3_DT)

//! @brief Format value for bitfield MIPI_CSI_DATA_IDS_1_DI3_DT.
#define BF_MIPI_CSI_DATA_IDS_1_DI3_DT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_DATA_IDS_1_DI3_DT) & BM_MIPI_CSI_DATA_IDS_1_DI3_DT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DI3_DT field to a new value.
#define BW_MIPI_CSI_DATA_IDS_1_DI3_DT(v)   (HW_MIPI_CSI_DATA_IDS_1_WR((HW_MIPI_CSI_DATA_IDS_1_RD() & ~BM_MIPI_CSI_DATA_IDS_1_DI3_DT) | BF_MIPI_CSI_DATA_IDS_1_DI3_DT(v)))
#endif

/* --- Register HW_MIPI_CSI_DATA_IDS_1, field DI3_VC[31:30] (RW)
 *
 * Data ID 3 Virtual channel Default Value: 0
 */

#define BP_MIPI_CSI_DATA_IDS_1_DI3_VC      (30)      //!< Bit position for MIPI_CSI_DATA_IDS_1_DI3_VC.
#define BM_MIPI_CSI_DATA_IDS_1_DI3_VC      (0xc0000000)  //!< Bit mask for MIPI_CSI_DATA_IDS_1_DI3_VC.

//! @brief Get value of MIPI_CSI_DATA_IDS_1_DI3_VC from a register value.
#define BG_MIPI_CSI_DATA_IDS_1_DI3_VC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_DATA_IDS_1_DI3_VC) >> BP_MIPI_CSI_DATA_IDS_1_DI3_VC)

//! @brief Format value for bitfield MIPI_CSI_DATA_IDS_1_DI3_VC.
#define BF_MIPI_CSI_DATA_IDS_1_DI3_VC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_DATA_IDS_1_DI3_VC) & BM_MIPI_CSI_DATA_IDS_1_DI3_VC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DI3_VC field to a new value.
#define BW_MIPI_CSI_DATA_IDS_1_DI3_VC(v)   (HW_MIPI_CSI_DATA_IDS_1_WR((HW_MIPI_CSI_DATA_IDS_1_RD() & ~BM_MIPI_CSI_DATA_IDS_1_DI3_VC) | BF_MIPI_CSI_DATA_IDS_1_DI3_VC(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_CSI_ERR1 - Error state register 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_CSI_ERR1 - Error state register 1 (RO)
 *
 * Reset value: 0x00000000
 *
 * Name: Error state register 1  Address Offset: 0x020  Size: 29 bit  Default Value: 0  Access: Read
 */
typedef union _hw_mipi_csi_err1
{
    reg32_t U;
    struct _hw_mipi_csi_err1_bitfields
    {
        unsigned PHY_ERRSOTSYNCHS_0 : 1; //!< [0] Start of Transmission Error on data lane 0 (no synchronization achieved) Default Value: 0
        unsigned PHY_ERRSOTSYNCHS_1 : 1; //!< [1] Start of Transmission Error on data lane 1 (no synchronization achieved) Default Value: 0
        unsigned RESERVED0 : 2; //!< [3:2] 
        unsigned ERR_F_BNDRY_MATCH_VC0 : 1; //!< [4] Error matching Frame Start with Frame End for Virtual Channel 0 Default Value: 0
        unsigned ERR_F_BNDRY_MATCH_VC1 : 1; //!< [5] Error matching Frame Start with Frame End for Virtual Channel 1 Default Value: 0
        unsigned ERR_F_BNDRY_MATCH_VC2 : 1; //!< [6] Error matching Frame Start with Frame End for Virtual Channel 2 Default Value: 0
        unsigned ERR_F_BNDRY_MATCH_VC3 : 1; //!< [7] Error matching Frame Start with Frame End for Virtual Channel 3 Default Value: 0
        unsigned ERR_F_SEQ_VC0 : 1; //!< [8] Incorrect Frame Sequence detected in Virtual Channel 0 Default Value: 0
        unsigned ERR_F_SEQ_VC1 : 1; //!< [9] Incorrect Frame Sequence detected in Virtual Channel 1 Default Value: 0
        unsigned ERR_F_SEQ_VC2 : 1; //!< [10] Incorrect Frame Sequence detected in Virtual Channel 2 Default Value: 0
        unsigned ERR_F_SEQ_VC3 : 1; //!< [11] Incorrect Frame Sequence detected in Virtual Channel 3 Default Value: 0
        unsigned ERR_FRAME_DATA_VC0 : 1; //!< [12] Last received frame, in Virtual Channel 0, had at least one CRC error Default Value: 0
        unsigned ERR_FRAME_DATA_VC1 : 1; //!< [13] Last received frame, in Virtual Channel 1, had at least one CRC error Default Value: 0
        unsigned ERR_FRAME_DATA_VC2 : 1; //!< [14] Last received frame, in Virtual Channel 2, had at least one CRC error Default Value: 0
        unsigned ERR_FRAME_DATA_VC3 : 1; //!< [15] Last received frame, in Virtual Channel 3, had at least one CRC error Default Value: 0
        unsigned ERR_L_BNDRY_MATCH_DI0 : 1; //!< [16] Error matching Line Start with Line End for vc0 and dt0 Default Value: 0
        unsigned ERR_L_BNDRY_MATCH_DI1 : 1; //!< [17] Error matching Line Start with Line End for vc1 and dt1 Default Value: 0
        unsigned ERR_L_BNDRY_MATCH_DI2 : 1; //!< [18] Error matching Line Start with Line End for vc2 and dt2 Default Value: 0
        unsigned ERR_L_BNDRY_MATCH_DI3 : 1; //!< [19] Error matching Line Start with Line End for vc3 and dt3 Default Value: 0
        unsigned ERR_L_SEQ_DI0 : 1; //!< [20] Error in the sequence of lines for vc0 and dt0 Default Value: 0
        unsigned ERR_L_SEQ_DI1 : 1; //!< [21] Error in the sequence of lines for vc1 and dt1 Default Value: 0
        unsigned ERR_L_SEQ_DI2 : 1; //!< [22] Error in the sequence of lines for vc2 and dt2 Default Value: 0
        unsigned ERR_L_SEQ_DI3 : 1; //!< [23] Error in the sequence of lines for vc3 and dt3 Default Value: 0
        unsigned VC0_ERR_CRC : 1; //!< [24] Checksum Error detected on Virtual Channel 0 Default Value: 0
        unsigned VC1_ERR_CRC : 1; //!< [25] Checksum Error detected on Virtual Channel 1 Default Value: 0
        unsigned VC2_ERR_CRC : 1; //!< [26] Checksum Error detected on Virtual Channel 2 Default Value: 0
        unsigned VC3_ERR_CRC : 1; //!< [27] Checksum Error detected on Virtual Channel 3 Default Value: 0
        unsigned ERR_ECC_DOUBLE : 1; //!< [28] Header ECC contains 2 errors.
        unsigned RESERVED1 : 3; //!< [31:29] Reserved
    } B;
} hw_mipi_csi_err1_t;
#endif

/*
 * constants & macros for entire MIPI_CSI_ERR1 register
 */
#define HW_MIPI_CSI_ERR1_ADDR      (REGS_MIPI_CSI_BASE + 0x20)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_CSI_ERR1           (*(volatile hw_mipi_csi_err1_t *) HW_MIPI_CSI_ERR1_ADDR)
#define HW_MIPI_CSI_ERR1_RD()      (HW_MIPI_CSI_ERR1.U)
#endif

/*
 * constants & macros for individual MIPI_CSI_ERR1 bitfields
 */

/* --- Register HW_MIPI_CSI_ERR1, field PHY_ERRSOTSYNCHS_0[0] (RO)
 *
 * Start of Transmission Error on data lane 0 (no synchronization achieved) Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_PHY_ERRSOTSYNCHS_0      (0)      //!< Bit position for MIPI_CSI_ERR1_PHY_ERRSOTSYNCHS_0.
#define BM_MIPI_CSI_ERR1_PHY_ERRSOTSYNCHS_0      (0x00000001)  //!< Bit mask for MIPI_CSI_ERR1_PHY_ERRSOTSYNCHS_0.

//! @brief Get value of MIPI_CSI_ERR1_PHY_ERRSOTSYNCHS_0 from a register value.
#define BG_MIPI_CSI_ERR1_PHY_ERRSOTSYNCHS_0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_PHY_ERRSOTSYNCHS_0) >> BP_MIPI_CSI_ERR1_PHY_ERRSOTSYNCHS_0)

/* --- Register HW_MIPI_CSI_ERR1, field PHY_ERRSOTSYNCHS_1[1] (RO)
 *
 * Start of Transmission Error on data lane 1 (no synchronization achieved) Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_PHY_ERRSOTSYNCHS_1      (1)      //!< Bit position for MIPI_CSI_ERR1_PHY_ERRSOTSYNCHS_1.
#define BM_MIPI_CSI_ERR1_PHY_ERRSOTSYNCHS_1      (0x00000002)  //!< Bit mask for MIPI_CSI_ERR1_PHY_ERRSOTSYNCHS_1.

//! @brief Get value of MIPI_CSI_ERR1_PHY_ERRSOTSYNCHS_1 from a register value.
#define BG_MIPI_CSI_ERR1_PHY_ERRSOTSYNCHS_1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_PHY_ERRSOTSYNCHS_1) >> BP_MIPI_CSI_ERR1_PHY_ERRSOTSYNCHS_1)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_F_BNDRY_MATCH_VC0[4] (RO)
 *
 * Error matching Frame Start with Frame End for Virtual Channel 0 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC0      (4)      //!< Bit position for MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC0.
#define BM_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC0      (0x00000010)  //!< Bit mask for MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC0.

//! @brief Get value of MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC0 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC0) >> BP_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC0)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_F_BNDRY_MATCH_VC1[5] (RO)
 *
 * Error matching Frame Start with Frame End for Virtual Channel 1 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC1      (5)      //!< Bit position for MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC1.
#define BM_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC1      (0x00000020)  //!< Bit mask for MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC1.

//! @brief Get value of MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC1 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC1) >> BP_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC1)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_F_BNDRY_MATCH_VC2[6] (RO)
 *
 * Error matching Frame Start with Frame End for Virtual Channel 2 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC2      (6)      //!< Bit position for MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC2.
#define BM_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC2      (0x00000040)  //!< Bit mask for MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC2.

//! @brief Get value of MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC2 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC2) >> BP_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC2)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_F_BNDRY_MATCH_VC3[7] (RO)
 *
 * Error matching Frame Start with Frame End for Virtual Channel 3 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC3      (7)      //!< Bit position for MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC3.
#define BM_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC3      (0x00000080)  //!< Bit mask for MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC3.

//! @brief Get value of MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC3 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC3) >> BP_MIPI_CSI_ERR1_ERR_F_BNDRY_MATCH_VC3)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_F_SEQ_VC0[8] (RO)
 *
 * Incorrect Frame Sequence detected in Virtual Channel 0 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_F_SEQ_VC0      (8)      //!< Bit position for MIPI_CSI_ERR1_ERR_F_SEQ_VC0.
#define BM_MIPI_CSI_ERR1_ERR_F_SEQ_VC0      (0x00000100)  //!< Bit mask for MIPI_CSI_ERR1_ERR_F_SEQ_VC0.

//! @brief Get value of MIPI_CSI_ERR1_ERR_F_SEQ_VC0 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_F_SEQ_VC0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_F_SEQ_VC0) >> BP_MIPI_CSI_ERR1_ERR_F_SEQ_VC0)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_F_SEQ_VC1[9] (RO)
 *
 * Incorrect Frame Sequence detected in Virtual Channel 1 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_F_SEQ_VC1      (9)      //!< Bit position for MIPI_CSI_ERR1_ERR_F_SEQ_VC1.
#define BM_MIPI_CSI_ERR1_ERR_F_SEQ_VC1      (0x00000200)  //!< Bit mask for MIPI_CSI_ERR1_ERR_F_SEQ_VC1.

//! @brief Get value of MIPI_CSI_ERR1_ERR_F_SEQ_VC1 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_F_SEQ_VC1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_F_SEQ_VC1) >> BP_MIPI_CSI_ERR1_ERR_F_SEQ_VC1)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_F_SEQ_VC2[10] (RO)
 *
 * Incorrect Frame Sequence detected in Virtual Channel 2 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_F_SEQ_VC2      (10)      //!< Bit position for MIPI_CSI_ERR1_ERR_F_SEQ_VC2.
#define BM_MIPI_CSI_ERR1_ERR_F_SEQ_VC2      (0x00000400)  //!< Bit mask for MIPI_CSI_ERR1_ERR_F_SEQ_VC2.

//! @brief Get value of MIPI_CSI_ERR1_ERR_F_SEQ_VC2 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_F_SEQ_VC2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_F_SEQ_VC2) >> BP_MIPI_CSI_ERR1_ERR_F_SEQ_VC2)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_F_SEQ_VC3[11] (RO)
 *
 * Incorrect Frame Sequence detected in Virtual Channel 3 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_F_SEQ_VC3      (11)      //!< Bit position for MIPI_CSI_ERR1_ERR_F_SEQ_VC3.
#define BM_MIPI_CSI_ERR1_ERR_F_SEQ_VC3      (0x00000800)  //!< Bit mask for MIPI_CSI_ERR1_ERR_F_SEQ_VC3.

//! @brief Get value of MIPI_CSI_ERR1_ERR_F_SEQ_VC3 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_F_SEQ_VC3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_F_SEQ_VC3) >> BP_MIPI_CSI_ERR1_ERR_F_SEQ_VC3)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_FRAME_DATA_VC0[12] (RO)
 *
 * Last received frame, in Virtual Channel 0, had at least one CRC error Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC0      (12)      //!< Bit position for MIPI_CSI_ERR1_ERR_FRAME_DATA_VC0.
#define BM_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC0      (0x00001000)  //!< Bit mask for MIPI_CSI_ERR1_ERR_FRAME_DATA_VC0.

//! @brief Get value of MIPI_CSI_ERR1_ERR_FRAME_DATA_VC0 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC0) >> BP_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC0)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_FRAME_DATA_VC1[13] (RO)
 *
 * Last received frame, in Virtual Channel 1, had at least one CRC error Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC1      (13)      //!< Bit position for MIPI_CSI_ERR1_ERR_FRAME_DATA_VC1.
#define BM_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC1      (0x00002000)  //!< Bit mask for MIPI_CSI_ERR1_ERR_FRAME_DATA_VC1.

//! @brief Get value of MIPI_CSI_ERR1_ERR_FRAME_DATA_VC1 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC1) >> BP_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC1)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_FRAME_DATA_VC2[14] (RO)
 *
 * Last received frame, in Virtual Channel 2, had at least one CRC error Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC2      (14)      //!< Bit position for MIPI_CSI_ERR1_ERR_FRAME_DATA_VC2.
#define BM_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC2      (0x00004000)  //!< Bit mask for MIPI_CSI_ERR1_ERR_FRAME_DATA_VC2.

//! @brief Get value of MIPI_CSI_ERR1_ERR_FRAME_DATA_VC2 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC2) >> BP_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC2)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_FRAME_DATA_VC3[15] (RO)
 *
 * Last received frame, in Virtual Channel 3, had at least one CRC error Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC3      (15)      //!< Bit position for MIPI_CSI_ERR1_ERR_FRAME_DATA_VC3.
#define BM_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC3      (0x00008000)  //!< Bit mask for MIPI_CSI_ERR1_ERR_FRAME_DATA_VC3.

//! @brief Get value of MIPI_CSI_ERR1_ERR_FRAME_DATA_VC3 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC3) >> BP_MIPI_CSI_ERR1_ERR_FRAME_DATA_VC3)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_L_BNDRY_MATCH_DI0[16] (RO)
 *
 * Error matching Line Start with Line End for vc0 and dt0 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI0      (16)      //!< Bit position for MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI0.
#define BM_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI0      (0x00010000)  //!< Bit mask for MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI0.

//! @brief Get value of MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI0 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI0) >> BP_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI0)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_L_BNDRY_MATCH_DI1[17] (RO)
 *
 * Error matching Line Start with Line End for vc1 and dt1 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI1      (17)      //!< Bit position for MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI1.
#define BM_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI1      (0x00020000)  //!< Bit mask for MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI1.

//! @brief Get value of MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI1 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI1) >> BP_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI1)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_L_BNDRY_MATCH_DI2[18] (RO)
 *
 * Error matching Line Start with Line End for vc2 and dt2 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI2      (18)      //!< Bit position for MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI2.
#define BM_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI2      (0x00040000)  //!< Bit mask for MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI2.

//! @brief Get value of MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI2 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI2) >> BP_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI2)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_L_BNDRY_MATCH_DI3[19] (RO)
 *
 * Error matching Line Start with Line End for vc3 and dt3 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI3      (19)      //!< Bit position for MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI3.
#define BM_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI3      (0x00080000)  //!< Bit mask for MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI3.

//! @brief Get value of MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI3 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI3) >> BP_MIPI_CSI_ERR1_ERR_L_BNDRY_MATCH_DI3)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_L_SEQ_DI0[20] (RO)
 *
 * Error in the sequence of lines for vc0 and dt0 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_L_SEQ_DI0      (20)      //!< Bit position for MIPI_CSI_ERR1_ERR_L_SEQ_DI0.
#define BM_MIPI_CSI_ERR1_ERR_L_SEQ_DI0      (0x00100000)  //!< Bit mask for MIPI_CSI_ERR1_ERR_L_SEQ_DI0.

//! @brief Get value of MIPI_CSI_ERR1_ERR_L_SEQ_DI0 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_L_SEQ_DI0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_L_SEQ_DI0) >> BP_MIPI_CSI_ERR1_ERR_L_SEQ_DI0)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_L_SEQ_DI1[21] (RO)
 *
 * Error in the sequence of lines for vc1 and dt1 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_L_SEQ_DI1      (21)      //!< Bit position for MIPI_CSI_ERR1_ERR_L_SEQ_DI1.
#define BM_MIPI_CSI_ERR1_ERR_L_SEQ_DI1      (0x00200000)  //!< Bit mask for MIPI_CSI_ERR1_ERR_L_SEQ_DI1.

//! @brief Get value of MIPI_CSI_ERR1_ERR_L_SEQ_DI1 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_L_SEQ_DI1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_L_SEQ_DI1) >> BP_MIPI_CSI_ERR1_ERR_L_SEQ_DI1)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_L_SEQ_DI2[22] (RO)
 *
 * Error in the sequence of lines for vc2 and dt2 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_L_SEQ_DI2      (22)      //!< Bit position for MIPI_CSI_ERR1_ERR_L_SEQ_DI2.
#define BM_MIPI_CSI_ERR1_ERR_L_SEQ_DI2      (0x00400000)  //!< Bit mask for MIPI_CSI_ERR1_ERR_L_SEQ_DI2.

//! @brief Get value of MIPI_CSI_ERR1_ERR_L_SEQ_DI2 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_L_SEQ_DI2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_L_SEQ_DI2) >> BP_MIPI_CSI_ERR1_ERR_L_SEQ_DI2)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_L_SEQ_DI3[23] (RO)
 *
 * Error in the sequence of lines for vc3 and dt3 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_L_SEQ_DI3      (23)      //!< Bit position for MIPI_CSI_ERR1_ERR_L_SEQ_DI3.
#define BM_MIPI_CSI_ERR1_ERR_L_SEQ_DI3      (0x00800000)  //!< Bit mask for MIPI_CSI_ERR1_ERR_L_SEQ_DI3.

//! @brief Get value of MIPI_CSI_ERR1_ERR_L_SEQ_DI3 from a register value.
#define BG_MIPI_CSI_ERR1_ERR_L_SEQ_DI3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_L_SEQ_DI3) >> BP_MIPI_CSI_ERR1_ERR_L_SEQ_DI3)

/* --- Register HW_MIPI_CSI_ERR1, field VC0_ERR_CRC[24] (RO)
 *
 * Checksum Error detected on Virtual Channel 0 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_VC0_ERR_CRC      (24)      //!< Bit position for MIPI_CSI_ERR1_VC0_ERR_CRC.
#define BM_MIPI_CSI_ERR1_VC0_ERR_CRC      (0x01000000)  //!< Bit mask for MIPI_CSI_ERR1_VC0_ERR_CRC.

//! @brief Get value of MIPI_CSI_ERR1_VC0_ERR_CRC from a register value.
#define BG_MIPI_CSI_ERR1_VC0_ERR_CRC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_VC0_ERR_CRC) >> BP_MIPI_CSI_ERR1_VC0_ERR_CRC)

/* --- Register HW_MIPI_CSI_ERR1, field VC1_ERR_CRC[25] (RO)
 *
 * Checksum Error detected on Virtual Channel 1 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_VC1_ERR_CRC      (25)      //!< Bit position for MIPI_CSI_ERR1_VC1_ERR_CRC.
#define BM_MIPI_CSI_ERR1_VC1_ERR_CRC      (0x02000000)  //!< Bit mask for MIPI_CSI_ERR1_VC1_ERR_CRC.

//! @brief Get value of MIPI_CSI_ERR1_VC1_ERR_CRC from a register value.
#define BG_MIPI_CSI_ERR1_VC1_ERR_CRC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_VC1_ERR_CRC) >> BP_MIPI_CSI_ERR1_VC1_ERR_CRC)

/* --- Register HW_MIPI_CSI_ERR1, field VC2_ERR_CRC[26] (RO)
 *
 * Checksum Error detected on Virtual Channel 2 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_VC2_ERR_CRC      (26)      //!< Bit position for MIPI_CSI_ERR1_VC2_ERR_CRC.
#define BM_MIPI_CSI_ERR1_VC2_ERR_CRC      (0x04000000)  //!< Bit mask for MIPI_CSI_ERR1_VC2_ERR_CRC.

//! @brief Get value of MIPI_CSI_ERR1_VC2_ERR_CRC from a register value.
#define BG_MIPI_CSI_ERR1_VC2_ERR_CRC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_VC2_ERR_CRC) >> BP_MIPI_CSI_ERR1_VC2_ERR_CRC)

/* --- Register HW_MIPI_CSI_ERR1, field VC3_ERR_CRC[27] (RO)
 *
 * Checksum Error detected on Virtual Channel 3 Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_VC3_ERR_CRC      (27)      //!< Bit position for MIPI_CSI_ERR1_VC3_ERR_CRC.
#define BM_MIPI_CSI_ERR1_VC3_ERR_CRC      (0x08000000)  //!< Bit mask for MIPI_CSI_ERR1_VC3_ERR_CRC.

//! @brief Get value of MIPI_CSI_ERR1_VC3_ERR_CRC from a register value.
#define BG_MIPI_CSI_ERR1_VC3_ERR_CRC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_VC3_ERR_CRC) >> BP_MIPI_CSI_ERR1_VC3_ERR_CRC)

/* --- Register HW_MIPI_CSI_ERR1, field ERR_ECC_DOUBLE[28] (RO)
 *
 * Header ECC contains 2 errors. Unrecoverable. Default Value: 0
 */

#define BP_MIPI_CSI_ERR1_ERR_ECC_DOUBLE      (28)      //!< Bit position for MIPI_CSI_ERR1_ERR_ECC_DOUBLE.
#define BM_MIPI_CSI_ERR1_ERR_ECC_DOUBLE      (0x10000000)  //!< Bit mask for MIPI_CSI_ERR1_ERR_ECC_DOUBLE.

//! @brief Get value of MIPI_CSI_ERR1_ERR_ECC_DOUBLE from a register value.
#define BG_MIPI_CSI_ERR1_ERR_ECC_DOUBLE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR1_ERR_ECC_DOUBLE) >> BP_MIPI_CSI_ERR1_ERR_ECC_DOUBLE)

//-------------------------------------------------------------------------------------------
// HW_MIPI_CSI_ERR2 - Error state register 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_CSI_ERR2 - Error state register 2 (RO)
 *
 * Reset value: 0x00000000
 *
 * Name: Error state register 2  Address Offset: 0x024  Size: 24 bit  Default Value: 0  Access: Read
 */
typedef union _hw_mipi_csi_err2
{
    reg32_t U;
    struct _hw_mipi_csi_err2_bitfields
    {
        unsigned PHY_ERRESC_0 : 1; //!< [0] Escape Entry Error (ULPM) on data lane 0 Default Value: 0
        unsigned PHY_ERRESC_1 : 1; //!< [1] Escape Entry Error (ULPM) on data lane 1 Default Value: 0
        unsigned RESERVED0 : 2; //!< [3:2] 
        unsigned PHY_ERRSOTHS_0 : 1; //!< [4] Start of Transmission Error on data lane 0 (synchronization can still be achieved) Default Value: 0
        unsigned PHY_ERRSOTHS_1 : 1; //!< [5] Start of Transmission Error on data lane 1 (synchronization can still be achieved) Default Value: 0
        unsigned RESERVED1 : 2; //!< [7:6] 
        unsigned VC0_ERR_ECC_CORRECTED : 1; //!< [8] Header error detected and corrected on Virtual Channel 0 Default Value: 0
        unsigned VC1_ERR_ECC_CORRECTED : 1; //!< [9] Header error detected and corrected on Virtual Channel 1 Default Value: 0
        unsigned VC2_ERR_ECC_CORRECTED : 1; //!< [10] Header error detected and corrected on Virtual Channel 2 Default Value: 0
        unsigned VC3_ERR_ECC_CORRECTED : 1; //!< [11] Header error detected and corrected on Virtual Channel 3 Default Value: 0
        unsigned ERR_ID_VC0 : 1; //!< [12] Unrecognized or unimplemented data type detected in Virtual Channel 0 Default Value: 0
        unsigned ERR_ID_VC1 : 1; //!< [13] Unrecognized or unimplemented data type detected in Virtual Channel 1 Default Value: 0
        unsigned ERR_ID_VC2 : 1; //!< [14] Unrecognized or unimplemented data type detected in Virtual Channel 2 Default Value: 0
        unsigned ERR_ID_VC3 : 1; //!< [15] Unrecognized or unimplemented data type detected in Virtual Channel 3 Default Value: 0
        unsigned RESERVED2 : 16; //!< [31:16] Reserved.
    } B;
} hw_mipi_csi_err2_t;
#endif

/*
 * constants & macros for entire MIPI_CSI_ERR2 register
 */
#define HW_MIPI_CSI_ERR2_ADDR      (REGS_MIPI_CSI_BASE + 0x24)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_CSI_ERR2           (*(volatile hw_mipi_csi_err2_t *) HW_MIPI_CSI_ERR2_ADDR)
#define HW_MIPI_CSI_ERR2_RD()      (HW_MIPI_CSI_ERR2.U)
#endif

/*
 * constants & macros for individual MIPI_CSI_ERR2 bitfields
 */

/* --- Register HW_MIPI_CSI_ERR2, field PHY_ERRESC_0[0] (RO)
 *
 * Escape Entry Error (ULPM) on data lane 0 Default Value: 0
 */

#define BP_MIPI_CSI_ERR2_PHY_ERRESC_0      (0)      //!< Bit position for MIPI_CSI_ERR2_PHY_ERRESC_0.
#define BM_MIPI_CSI_ERR2_PHY_ERRESC_0      (0x00000001)  //!< Bit mask for MIPI_CSI_ERR2_PHY_ERRESC_0.

//! @brief Get value of MIPI_CSI_ERR2_PHY_ERRESC_0 from a register value.
#define BG_MIPI_CSI_ERR2_PHY_ERRESC_0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR2_PHY_ERRESC_0) >> BP_MIPI_CSI_ERR2_PHY_ERRESC_0)

/* --- Register HW_MIPI_CSI_ERR2, field PHY_ERRESC_1[1] (RO)
 *
 * Escape Entry Error (ULPM) on data lane 1 Default Value: 0
 */

#define BP_MIPI_CSI_ERR2_PHY_ERRESC_1      (1)      //!< Bit position for MIPI_CSI_ERR2_PHY_ERRESC_1.
#define BM_MIPI_CSI_ERR2_PHY_ERRESC_1      (0x00000002)  //!< Bit mask for MIPI_CSI_ERR2_PHY_ERRESC_1.

//! @brief Get value of MIPI_CSI_ERR2_PHY_ERRESC_1 from a register value.
#define BG_MIPI_CSI_ERR2_PHY_ERRESC_1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR2_PHY_ERRESC_1) >> BP_MIPI_CSI_ERR2_PHY_ERRESC_1)

/* --- Register HW_MIPI_CSI_ERR2, field PHY_ERRSOTHS_0[4] (RO)
 *
 * Start of Transmission Error on data lane 0 (synchronization can still be achieved) Default Value:
 * 0
 */

#define BP_MIPI_CSI_ERR2_PHY_ERRSOTHS_0      (4)      //!< Bit position for MIPI_CSI_ERR2_PHY_ERRSOTHS_0.
#define BM_MIPI_CSI_ERR2_PHY_ERRSOTHS_0      (0x00000010)  //!< Bit mask for MIPI_CSI_ERR2_PHY_ERRSOTHS_0.

//! @brief Get value of MIPI_CSI_ERR2_PHY_ERRSOTHS_0 from a register value.
#define BG_MIPI_CSI_ERR2_PHY_ERRSOTHS_0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR2_PHY_ERRSOTHS_0) >> BP_MIPI_CSI_ERR2_PHY_ERRSOTHS_0)

/* --- Register HW_MIPI_CSI_ERR2, field PHY_ERRSOTHS_1[5] (RO)
 *
 * Start of Transmission Error on data lane 1 (synchronization can still be achieved) Default Value:
 * 0
 */

#define BP_MIPI_CSI_ERR2_PHY_ERRSOTHS_1      (5)      //!< Bit position for MIPI_CSI_ERR2_PHY_ERRSOTHS_1.
#define BM_MIPI_CSI_ERR2_PHY_ERRSOTHS_1      (0x00000020)  //!< Bit mask for MIPI_CSI_ERR2_PHY_ERRSOTHS_1.

//! @brief Get value of MIPI_CSI_ERR2_PHY_ERRSOTHS_1 from a register value.
#define BG_MIPI_CSI_ERR2_PHY_ERRSOTHS_1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR2_PHY_ERRSOTHS_1) >> BP_MIPI_CSI_ERR2_PHY_ERRSOTHS_1)

/* --- Register HW_MIPI_CSI_ERR2, field VC0_ERR_ECC_CORRECTED[8] (RO)
 *
 * Header error detected and corrected on Virtual Channel 0 Default Value: 0
 */

#define BP_MIPI_CSI_ERR2_VC0_ERR_ECC_CORRECTED      (8)      //!< Bit position for MIPI_CSI_ERR2_VC0_ERR_ECC_CORRECTED.
#define BM_MIPI_CSI_ERR2_VC0_ERR_ECC_CORRECTED      (0x00000100)  //!< Bit mask for MIPI_CSI_ERR2_VC0_ERR_ECC_CORRECTED.

//! @brief Get value of MIPI_CSI_ERR2_VC0_ERR_ECC_CORRECTED from a register value.
#define BG_MIPI_CSI_ERR2_VC0_ERR_ECC_CORRECTED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR2_VC0_ERR_ECC_CORRECTED) >> BP_MIPI_CSI_ERR2_VC0_ERR_ECC_CORRECTED)

/* --- Register HW_MIPI_CSI_ERR2, field VC1_ERR_ECC_CORRECTED[9] (RO)
 *
 * Header error detected and corrected on Virtual Channel 1 Default Value: 0
 */

#define BP_MIPI_CSI_ERR2_VC1_ERR_ECC_CORRECTED      (9)      //!< Bit position for MIPI_CSI_ERR2_VC1_ERR_ECC_CORRECTED.
#define BM_MIPI_CSI_ERR2_VC1_ERR_ECC_CORRECTED      (0x00000200)  //!< Bit mask for MIPI_CSI_ERR2_VC1_ERR_ECC_CORRECTED.

//! @brief Get value of MIPI_CSI_ERR2_VC1_ERR_ECC_CORRECTED from a register value.
#define BG_MIPI_CSI_ERR2_VC1_ERR_ECC_CORRECTED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR2_VC1_ERR_ECC_CORRECTED) >> BP_MIPI_CSI_ERR2_VC1_ERR_ECC_CORRECTED)

/* --- Register HW_MIPI_CSI_ERR2, field VC2_ERR_ECC_CORRECTED[10] (RO)
 *
 * Header error detected and corrected on Virtual Channel 2 Default Value: 0
 */

#define BP_MIPI_CSI_ERR2_VC2_ERR_ECC_CORRECTED      (10)      //!< Bit position for MIPI_CSI_ERR2_VC2_ERR_ECC_CORRECTED.
#define BM_MIPI_CSI_ERR2_VC2_ERR_ECC_CORRECTED      (0x00000400)  //!< Bit mask for MIPI_CSI_ERR2_VC2_ERR_ECC_CORRECTED.

//! @brief Get value of MIPI_CSI_ERR2_VC2_ERR_ECC_CORRECTED from a register value.
#define BG_MIPI_CSI_ERR2_VC2_ERR_ECC_CORRECTED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR2_VC2_ERR_ECC_CORRECTED) >> BP_MIPI_CSI_ERR2_VC2_ERR_ECC_CORRECTED)

/* --- Register HW_MIPI_CSI_ERR2, field VC3_ERR_ECC_CORRECTED[11] (RO)
 *
 * Header error detected and corrected on Virtual Channel 3 Default Value: 0
 */

#define BP_MIPI_CSI_ERR2_VC3_ERR_ECC_CORRECTED      (11)      //!< Bit position for MIPI_CSI_ERR2_VC3_ERR_ECC_CORRECTED.
#define BM_MIPI_CSI_ERR2_VC3_ERR_ECC_CORRECTED      (0x00000800)  //!< Bit mask for MIPI_CSI_ERR2_VC3_ERR_ECC_CORRECTED.

//! @brief Get value of MIPI_CSI_ERR2_VC3_ERR_ECC_CORRECTED from a register value.
#define BG_MIPI_CSI_ERR2_VC3_ERR_ECC_CORRECTED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR2_VC3_ERR_ECC_CORRECTED) >> BP_MIPI_CSI_ERR2_VC3_ERR_ECC_CORRECTED)

/* --- Register HW_MIPI_CSI_ERR2, field ERR_ID_VC0[12] (RO)
 *
 * Unrecognized or unimplemented data type detected in Virtual Channel 0 Default Value: 0
 */

#define BP_MIPI_CSI_ERR2_ERR_ID_VC0      (12)      //!< Bit position for MIPI_CSI_ERR2_ERR_ID_VC0.
#define BM_MIPI_CSI_ERR2_ERR_ID_VC0      (0x00001000)  //!< Bit mask for MIPI_CSI_ERR2_ERR_ID_VC0.

//! @brief Get value of MIPI_CSI_ERR2_ERR_ID_VC0 from a register value.
#define BG_MIPI_CSI_ERR2_ERR_ID_VC0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR2_ERR_ID_VC0) >> BP_MIPI_CSI_ERR2_ERR_ID_VC0)

/* --- Register HW_MIPI_CSI_ERR2, field ERR_ID_VC1[13] (RO)
 *
 * Unrecognized or unimplemented data type detected in Virtual Channel 1 Default Value: 0
 */

#define BP_MIPI_CSI_ERR2_ERR_ID_VC1      (13)      //!< Bit position for MIPI_CSI_ERR2_ERR_ID_VC1.
#define BM_MIPI_CSI_ERR2_ERR_ID_VC1      (0x00002000)  //!< Bit mask for MIPI_CSI_ERR2_ERR_ID_VC1.

//! @brief Get value of MIPI_CSI_ERR2_ERR_ID_VC1 from a register value.
#define BG_MIPI_CSI_ERR2_ERR_ID_VC1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR2_ERR_ID_VC1) >> BP_MIPI_CSI_ERR2_ERR_ID_VC1)

/* --- Register HW_MIPI_CSI_ERR2, field ERR_ID_VC2[14] (RO)
 *
 * Unrecognized or unimplemented data type detected in Virtual Channel 2 Default Value: 0
 */

#define BP_MIPI_CSI_ERR2_ERR_ID_VC2      (14)      //!< Bit position for MIPI_CSI_ERR2_ERR_ID_VC2.
#define BM_MIPI_CSI_ERR2_ERR_ID_VC2      (0x00004000)  //!< Bit mask for MIPI_CSI_ERR2_ERR_ID_VC2.

//! @brief Get value of MIPI_CSI_ERR2_ERR_ID_VC2 from a register value.
#define BG_MIPI_CSI_ERR2_ERR_ID_VC2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR2_ERR_ID_VC2) >> BP_MIPI_CSI_ERR2_ERR_ID_VC2)

/* --- Register HW_MIPI_CSI_ERR2, field ERR_ID_VC3[15] (RO)
 *
 * Unrecognized or unimplemented data type detected in Virtual Channel 3 Default Value: 0
 */

#define BP_MIPI_CSI_ERR2_ERR_ID_VC3      (15)      //!< Bit position for MIPI_CSI_ERR2_ERR_ID_VC3.
#define BM_MIPI_CSI_ERR2_ERR_ID_VC3      (0x00008000)  //!< Bit mask for MIPI_CSI_ERR2_ERR_ID_VC3.

//! @brief Get value of MIPI_CSI_ERR2_ERR_ID_VC3 from a register value.
#define BG_MIPI_CSI_ERR2_ERR_ID_VC3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_ERR2_ERR_ID_VC3) >> BP_MIPI_CSI_ERR2_ERR_ID_VC3)

//-------------------------------------------------------------------------------------------
// HW_MIPI_CSI_MASK2 - Masks for errors 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_CSI_MASK2 - Masks for errors 2 (RW)
 *
 * Reset value: 0x00000000
 *
 * Name: Masks for errors 2  Address Offset: 0x02C  Size: 24 bit  Default Value: 0  Access:
 * Read/Write
 */
typedef union _hw_mipi_csi_mask2
{
    reg32_t U;
    struct _hw_mipi_csi_mask2_bitfields
    {
        unsigned MASK_PHY_ERRESC_0 : 1; //!< [0] Mask for phy_erresc_0.
        unsigned MASK_PHY_ERRESC_1 : 1; //!< [1] Mask for phy_erresc_1.
        unsigned RESERVED0 : 2; //!< [3:2] 
        unsigned MASK_PHY_ERRSOTHS_0 : 1; //!< [4] Mask for phy_errsoths_0.
        unsigned MASK_PHY_ERRSOTHS_1 : 1; //!< [5] Mask for phy_errsoths_1.
        unsigned RESERVED1 : 2; //!< [7:6] 
        unsigned MASK_VC0_ERR_ECC_CORRECTED : 1; //!< [8] Mask for vc0_err_ecc_corrected.
        unsigned MASK_VC1_ERR_ECC_CORRECTED : 1; //!< [9] Mask for vc1_err_ecc_corrected.
        unsigned MASK_VC2_ERR_ECC_CORRECTED : 1; //!< [10] Mask for vc2_err_ecc_corrected.
        unsigned MASK_VC3_ERR_ECC_CORRECTED : 1; //!< [11] Mask for vc3_err_ecc_corrected.
        unsigned MASK_ERR_ID_VC0 : 1; //!< [12] Mask for err_id_vc0.
        unsigned MASK_ERR_ID_VC1 : 1; //!< [13] Mask for err_id_vc1.
        unsigned MASK_ERR_ID_VC2 : 1; //!< [14] Mask for err_id_vc2.
        unsigned MASK_ERR_ID_VC3 : 1; //!< [15] Mask for err_id_vc3.
        unsigned RESERVED2 : 16; //!< [31:16] Reserved.
    } B;
} hw_mipi_csi_mask2_t;
#endif

/*
 * constants & macros for entire MIPI_CSI_MASK2 register
 */
#define HW_MIPI_CSI_MASK2_ADDR      (REGS_MIPI_CSI_BASE + 0x2c)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_CSI_MASK2           (*(volatile hw_mipi_csi_mask2_t *) HW_MIPI_CSI_MASK2_ADDR)
#define HW_MIPI_CSI_MASK2_RD()      (HW_MIPI_CSI_MASK2.U)
#define HW_MIPI_CSI_MASK2_WR(v)     (HW_MIPI_CSI_MASK2.U = (v))
#define HW_MIPI_CSI_MASK2_SET(v)    (HW_MIPI_CSI_MASK2_WR(HW_MIPI_CSI_MASK2_RD() |  (v)))
#define HW_MIPI_CSI_MASK2_CLR(v)    (HW_MIPI_CSI_MASK2_WR(HW_MIPI_CSI_MASK2_RD() & ~(v)))
#define HW_MIPI_CSI_MASK2_TOG(v)    (HW_MIPI_CSI_MASK2_WR(HW_MIPI_CSI_MASK2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_CSI_MASK2 bitfields
 */

/* --- Register HW_MIPI_CSI_MASK2, field MASK_PHY_ERRESC_0[0] (RW)
 *
 * Mask for phy_erresc_0. Default Value: 0
 */

#define BP_MIPI_CSI_MASK2_MASK_PHY_ERRESC_0      (0)      //!< Bit position for MIPI_CSI_MASK2_MASK_PHY_ERRESC_0.
#define BM_MIPI_CSI_MASK2_MASK_PHY_ERRESC_0      (0x00000001)  //!< Bit mask for MIPI_CSI_MASK2_MASK_PHY_ERRESC_0.

//! @brief Get value of MIPI_CSI_MASK2_MASK_PHY_ERRESC_0 from a register value.
#define BG_MIPI_CSI_MASK2_MASK_PHY_ERRESC_0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_MASK2_MASK_PHY_ERRESC_0) >> BP_MIPI_CSI_MASK2_MASK_PHY_ERRESC_0)

//! @brief Format value for bitfield MIPI_CSI_MASK2_MASK_PHY_ERRESC_0.
#define BF_MIPI_CSI_MASK2_MASK_PHY_ERRESC_0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_MASK2_MASK_PHY_ERRESC_0) & BM_MIPI_CSI_MASK2_MASK_PHY_ERRESC_0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MASK_PHY_ERRESC_0 field to a new value.
#define BW_MIPI_CSI_MASK2_MASK_PHY_ERRESC_0(v)   (HW_MIPI_CSI_MASK2_WR((HW_MIPI_CSI_MASK2_RD() & ~BM_MIPI_CSI_MASK2_MASK_PHY_ERRESC_0) | BF_MIPI_CSI_MASK2_MASK_PHY_ERRESC_0(v)))
#endif

/* --- Register HW_MIPI_CSI_MASK2, field MASK_PHY_ERRESC_1[1] (RW)
 *
 * Mask for phy_erresc_1. Default Value: 0
 */

#define BP_MIPI_CSI_MASK2_MASK_PHY_ERRESC_1      (1)      //!< Bit position for MIPI_CSI_MASK2_MASK_PHY_ERRESC_1.
#define BM_MIPI_CSI_MASK2_MASK_PHY_ERRESC_1      (0x00000002)  //!< Bit mask for MIPI_CSI_MASK2_MASK_PHY_ERRESC_1.

//! @brief Get value of MIPI_CSI_MASK2_MASK_PHY_ERRESC_1 from a register value.
#define BG_MIPI_CSI_MASK2_MASK_PHY_ERRESC_1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_MASK2_MASK_PHY_ERRESC_1) >> BP_MIPI_CSI_MASK2_MASK_PHY_ERRESC_1)

//! @brief Format value for bitfield MIPI_CSI_MASK2_MASK_PHY_ERRESC_1.
#define BF_MIPI_CSI_MASK2_MASK_PHY_ERRESC_1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_MASK2_MASK_PHY_ERRESC_1) & BM_MIPI_CSI_MASK2_MASK_PHY_ERRESC_1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MASK_PHY_ERRESC_1 field to a new value.
#define BW_MIPI_CSI_MASK2_MASK_PHY_ERRESC_1(v)   (HW_MIPI_CSI_MASK2_WR((HW_MIPI_CSI_MASK2_RD() & ~BM_MIPI_CSI_MASK2_MASK_PHY_ERRESC_1) | BF_MIPI_CSI_MASK2_MASK_PHY_ERRESC_1(v)))
#endif

/* --- Register HW_MIPI_CSI_MASK2, field MASK_PHY_ERRSOTHS_0[4] (RW)
 *
 * Mask for phy_errsoths_0. Default Value: 0
 */

#define BP_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_0      (4)      //!< Bit position for MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_0.
#define BM_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_0      (0x00000010)  //!< Bit mask for MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_0.

//! @brief Get value of MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_0 from a register value.
#define BG_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_0) >> BP_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_0)

//! @brief Format value for bitfield MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_0.
#define BF_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_0) & BM_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MASK_PHY_ERRSOTHS_0 field to a new value.
#define BW_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_0(v)   (HW_MIPI_CSI_MASK2_WR((HW_MIPI_CSI_MASK2_RD() & ~BM_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_0) | BF_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_0(v)))
#endif

/* --- Register HW_MIPI_CSI_MASK2, field MASK_PHY_ERRSOTHS_1[5] (RW)
 *
 * Mask for phy_errsoths_1. Default Value: 0
 */

#define BP_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_1      (5)      //!< Bit position for MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_1.
#define BM_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_1      (0x00000020)  //!< Bit mask for MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_1.

//! @brief Get value of MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_1 from a register value.
#define BG_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_1) >> BP_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_1)

//! @brief Format value for bitfield MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_1.
#define BF_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_1) & BM_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MASK_PHY_ERRSOTHS_1 field to a new value.
#define BW_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_1(v)   (HW_MIPI_CSI_MASK2_WR((HW_MIPI_CSI_MASK2_RD() & ~BM_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_1) | BF_MIPI_CSI_MASK2_MASK_PHY_ERRSOTHS_1(v)))
#endif

/* --- Register HW_MIPI_CSI_MASK2, field MASK_VC0_ERR_ECC_CORRECTED[8] (RW)
 *
 * Mask for vc0_err_ecc_corrected. Default Value: 0
 */

#define BP_MIPI_CSI_MASK2_MASK_VC0_ERR_ECC_CORRECTED      (8)      //!< Bit position for MIPI_CSI_MASK2_MASK_VC0_ERR_ECC_CORRECTED.
#define BM_MIPI_CSI_MASK2_MASK_VC0_ERR_ECC_CORRECTED      (0x00000100)  //!< Bit mask for MIPI_CSI_MASK2_MASK_VC0_ERR_ECC_CORRECTED.

//! @brief Get value of MIPI_CSI_MASK2_MASK_VC0_ERR_ECC_CORRECTED from a register value.
#define BG_MIPI_CSI_MASK2_MASK_VC0_ERR_ECC_CORRECTED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_MASK2_MASK_VC0_ERR_ECC_CORRECTED) >> BP_MIPI_CSI_MASK2_MASK_VC0_ERR_ECC_CORRECTED)

//! @brief Format value for bitfield MIPI_CSI_MASK2_MASK_VC0_ERR_ECC_CORRECTED.
#define BF_MIPI_CSI_MASK2_MASK_VC0_ERR_ECC_CORRECTED(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_MASK2_MASK_VC0_ERR_ECC_CORRECTED) & BM_MIPI_CSI_MASK2_MASK_VC0_ERR_ECC_CORRECTED)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MASK_VC0_ERR_ECC_CORRECTED field to a new value.
#define BW_MIPI_CSI_MASK2_MASK_VC0_ERR_ECC_CORRECTED(v)   (HW_MIPI_CSI_MASK2_WR((HW_MIPI_CSI_MASK2_RD() & ~BM_MIPI_CSI_MASK2_MASK_VC0_ERR_ECC_CORRECTED) | BF_MIPI_CSI_MASK2_MASK_VC0_ERR_ECC_CORRECTED(v)))
#endif

/* --- Register HW_MIPI_CSI_MASK2, field MASK_VC1_ERR_ECC_CORRECTED[9] (RW)
 *
 * Mask for vc1_err_ecc_corrected. Default Value: 0
 */

#define BP_MIPI_CSI_MASK2_MASK_VC1_ERR_ECC_CORRECTED      (9)      //!< Bit position for MIPI_CSI_MASK2_MASK_VC1_ERR_ECC_CORRECTED.
#define BM_MIPI_CSI_MASK2_MASK_VC1_ERR_ECC_CORRECTED      (0x00000200)  //!< Bit mask for MIPI_CSI_MASK2_MASK_VC1_ERR_ECC_CORRECTED.

//! @brief Get value of MIPI_CSI_MASK2_MASK_VC1_ERR_ECC_CORRECTED from a register value.
#define BG_MIPI_CSI_MASK2_MASK_VC1_ERR_ECC_CORRECTED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_MASK2_MASK_VC1_ERR_ECC_CORRECTED) >> BP_MIPI_CSI_MASK2_MASK_VC1_ERR_ECC_CORRECTED)

//! @brief Format value for bitfield MIPI_CSI_MASK2_MASK_VC1_ERR_ECC_CORRECTED.
#define BF_MIPI_CSI_MASK2_MASK_VC1_ERR_ECC_CORRECTED(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_MASK2_MASK_VC1_ERR_ECC_CORRECTED) & BM_MIPI_CSI_MASK2_MASK_VC1_ERR_ECC_CORRECTED)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MASK_VC1_ERR_ECC_CORRECTED field to a new value.
#define BW_MIPI_CSI_MASK2_MASK_VC1_ERR_ECC_CORRECTED(v)   (HW_MIPI_CSI_MASK2_WR((HW_MIPI_CSI_MASK2_RD() & ~BM_MIPI_CSI_MASK2_MASK_VC1_ERR_ECC_CORRECTED) | BF_MIPI_CSI_MASK2_MASK_VC1_ERR_ECC_CORRECTED(v)))
#endif

/* --- Register HW_MIPI_CSI_MASK2, field MASK_VC2_ERR_ECC_CORRECTED[10] (RW)
 *
 * Mask for vc2_err_ecc_corrected. Default Value: 0
 */

#define BP_MIPI_CSI_MASK2_MASK_VC2_ERR_ECC_CORRECTED      (10)      //!< Bit position for MIPI_CSI_MASK2_MASK_VC2_ERR_ECC_CORRECTED.
#define BM_MIPI_CSI_MASK2_MASK_VC2_ERR_ECC_CORRECTED      (0x00000400)  //!< Bit mask for MIPI_CSI_MASK2_MASK_VC2_ERR_ECC_CORRECTED.

//! @brief Get value of MIPI_CSI_MASK2_MASK_VC2_ERR_ECC_CORRECTED from a register value.
#define BG_MIPI_CSI_MASK2_MASK_VC2_ERR_ECC_CORRECTED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_MASK2_MASK_VC2_ERR_ECC_CORRECTED) >> BP_MIPI_CSI_MASK2_MASK_VC2_ERR_ECC_CORRECTED)

//! @brief Format value for bitfield MIPI_CSI_MASK2_MASK_VC2_ERR_ECC_CORRECTED.
#define BF_MIPI_CSI_MASK2_MASK_VC2_ERR_ECC_CORRECTED(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_MASK2_MASK_VC2_ERR_ECC_CORRECTED) & BM_MIPI_CSI_MASK2_MASK_VC2_ERR_ECC_CORRECTED)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MASK_VC2_ERR_ECC_CORRECTED field to a new value.
#define BW_MIPI_CSI_MASK2_MASK_VC2_ERR_ECC_CORRECTED(v)   (HW_MIPI_CSI_MASK2_WR((HW_MIPI_CSI_MASK2_RD() & ~BM_MIPI_CSI_MASK2_MASK_VC2_ERR_ECC_CORRECTED) | BF_MIPI_CSI_MASK2_MASK_VC2_ERR_ECC_CORRECTED(v)))
#endif

/* --- Register HW_MIPI_CSI_MASK2, field MASK_VC3_ERR_ECC_CORRECTED[11] (RW)
 *
 * Mask for vc3_err_ecc_corrected. Default Value: 0
 */

#define BP_MIPI_CSI_MASK2_MASK_VC3_ERR_ECC_CORRECTED      (11)      //!< Bit position for MIPI_CSI_MASK2_MASK_VC3_ERR_ECC_CORRECTED.
#define BM_MIPI_CSI_MASK2_MASK_VC3_ERR_ECC_CORRECTED      (0x00000800)  //!< Bit mask for MIPI_CSI_MASK2_MASK_VC3_ERR_ECC_CORRECTED.

//! @brief Get value of MIPI_CSI_MASK2_MASK_VC3_ERR_ECC_CORRECTED from a register value.
#define BG_MIPI_CSI_MASK2_MASK_VC3_ERR_ECC_CORRECTED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_MASK2_MASK_VC3_ERR_ECC_CORRECTED) >> BP_MIPI_CSI_MASK2_MASK_VC3_ERR_ECC_CORRECTED)

//! @brief Format value for bitfield MIPI_CSI_MASK2_MASK_VC3_ERR_ECC_CORRECTED.
#define BF_MIPI_CSI_MASK2_MASK_VC3_ERR_ECC_CORRECTED(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_MASK2_MASK_VC3_ERR_ECC_CORRECTED) & BM_MIPI_CSI_MASK2_MASK_VC3_ERR_ECC_CORRECTED)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MASK_VC3_ERR_ECC_CORRECTED field to a new value.
#define BW_MIPI_CSI_MASK2_MASK_VC3_ERR_ECC_CORRECTED(v)   (HW_MIPI_CSI_MASK2_WR((HW_MIPI_CSI_MASK2_RD() & ~BM_MIPI_CSI_MASK2_MASK_VC3_ERR_ECC_CORRECTED) | BF_MIPI_CSI_MASK2_MASK_VC3_ERR_ECC_CORRECTED(v)))
#endif

/* --- Register HW_MIPI_CSI_MASK2, field MASK_ERR_ID_VC0[12] (RW)
 *
 * Mask for err_id_vc0. Default Value: 0
 */

#define BP_MIPI_CSI_MASK2_MASK_ERR_ID_VC0      (12)      //!< Bit position for MIPI_CSI_MASK2_MASK_ERR_ID_VC0.
#define BM_MIPI_CSI_MASK2_MASK_ERR_ID_VC0      (0x00001000)  //!< Bit mask for MIPI_CSI_MASK2_MASK_ERR_ID_VC0.

//! @brief Get value of MIPI_CSI_MASK2_MASK_ERR_ID_VC0 from a register value.
#define BG_MIPI_CSI_MASK2_MASK_ERR_ID_VC0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_MASK2_MASK_ERR_ID_VC0) >> BP_MIPI_CSI_MASK2_MASK_ERR_ID_VC0)

//! @brief Format value for bitfield MIPI_CSI_MASK2_MASK_ERR_ID_VC0.
#define BF_MIPI_CSI_MASK2_MASK_ERR_ID_VC0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_MASK2_MASK_ERR_ID_VC0) & BM_MIPI_CSI_MASK2_MASK_ERR_ID_VC0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MASK_ERR_ID_VC0 field to a new value.
#define BW_MIPI_CSI_MASK2_MASK_ERR_ID_VC0(v)   (HW_MIPI_CSI_MASK2_WR((HW_MIPI_CSI_MASK2_RD() & ~BM_MIPI_CSI_MASK2_MASK_ERR_ID_VC0) | BF_MIPI_CSI_MASK2_MASK_ERR_ID_VC0(v)))
#endif

/* --- Register HW_MIPI_CSI_MASK2, field MASK_ERR_ID_VC1[13] (RW)
 *
 * Mask for err_id_vc1. Default Value: 0
 */

#define BP_MIPI_CSI_MASK2_MASK_ERR_ID_VC1      (13)      //!< Bit position for MIPI_CSI_MASK2_MASK_ERR_ID_VC1.
#define BM_MIPI_CSI_MASK2_MASK_ERR_ID_VC1      (0x00002000)  //!< Bit mask for MIPI_CSI_MASK2_MASK_ERR_ID_VC1.

//! @brief Get value of MIPI_CSI_MASK2_MASK_ERR_ID_VC1 from a register value.
#define BG_MIPI_CSI_MASK2_MASK_ERR_ID_VC1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_MASK2_MASK_ERR_ID_VC1) >> BP_MIPI_CSI_MASK2_MASK_ERR_ID_VC1)

//! @brief Format value for bitfield MIPI_CSI_MASK2_MASK_ERR_ID_VC1.
#define BF_MIPI_CSI_MASK2_MASK_ERR_ID_VC1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_MASK2_MASK_ERR_ID_VC1) & BM_MIPI_CSI_MASK2_MASK_ERR_ID_VC1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MASK_ERR_ID_VC1 field to a new value.
#define BW_MIPI_CSI_MASK2_MASK_ERR_ID_VC1(v)   (HW_MIPI_CSI_MASK2_WR((HW_MIPI_CSI_MASK2_RD() & ~BM_MIPI_CSI_MASK2_MASK_ERR_ID_VC1) | BF_MIPI_CSI_MASK2_MASK_ERR_ID_VC1(v)))
#endif

/* --- Register HW_MIPI_CSI_MASK2, field MASK_ERR_ID_VC2[14] (RW)
 *
 * Mask for err_id_vc2. Default Value: 0
 */

#define BP_MIPI_CSI_MASK2_MASK_ERR_ID_VC2      (14)      //!< Bit position for MIPI_CSI_MASK2_MASK_ERR_ID_VC2.
#define BM_MIPI_CSI_MASK2_MASK_ERR_ID_VC2      (0x00004000)  //!< Bit mask for MIPI_CSI_MASK2_MASK_ERR_ID_VC2.

//! @brief Get value of MIPI_CSI_MASK2_MASK_ERR_ID_VC2 from a register value.
#define BG_MIPI_CSI_MASK2_MASK_ERR_ID_VC2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_MASK2_MASK_ERR_ID_VC2) >> BP_MIPI_CSI_MASK2_MASK_ERR_ID_VC2)

//! @brief Format value for bitfield MIPI_CSI_MASK2_MASK_ERR_ID_VC2.
#define BF_MIPI_CSI_MASK2_MASK_ERR_ID_VC2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_MASK2_MASK_ERR_ID_VC2) & BM_MIPI_CSI_MASK2_MASK_ERR_ID_VC2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MASK_ERR_ID_VC2 field to a new value.
#define BW_MIPI_CSI_MASK2_MASK_ERR_ID_VC2(v)   (HW_MIPI_CSI_MASK2_WR((HW_MIPI_CSI_MASK2_RD() & ~BM_MIPI_CSI_MASK2_MASK_ERR_ID_VC2) | BF_MIPI_CSI_MASK2_MASK_ERR_ID_VC2(v)))
#endif

/* --- Register HW_MIPI_CSI_MASK2, field MASK_ERR_ID_VC3[15] (RW)
 *
 * Mask for err_id_vc3. Default Value: 0
 */

#define BP_MIPI_CSI_MASK2_MASK_ERR_ID_VC3      (15)      //!< Bit position for MIPI_CSI_MASK2_MASK_ERR_ID_VC3.
#define BM_MIPI_CSI_MASK2_MASK_ERR_ID_VC3      (0x00008000)  //!< Bit mask for MIPI_CSI_MASK2_MASK_ERR_ID_VC3.

//! @brief Get value of MIPI_CSI_MASK2_MASK_ERR_ID_VC3 from a register value.
#define BG_MIPI_CSI_MASK2_MASK_ERR_ID_VC3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_MASK2_MASK_ERR_ID_VC3) >> BP_MIPI_CSI_MASK2_MASK_ERR_ID_VC3)

//! @brief Format value for bitfield MIPI_CSI_MASK2_MASK_ERR_ID_VC3.
#define BF_MIPI_CSI_MASK2_MASK_ERR_ID_VC3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_MASK2_MASK_ERR_ID_VC3) & BM_MIPI_CSI_MASK2_MASK_ERR_ID_VC3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MASK_ERR_ID_VC3 field to a new value.
#define BW_MIPI_CSI_MASK2_MASK_ERR_ID_VC3(v)   (HW_MIPI_CSI_MASK2_WR((HW_MIPI_CSI_MASK2_RD() & ~BM_MIPI_CSI_MASK2_MASK_ERR_ID_VC3) | BF_MIPI_CSI_MASK2_MASK_ERR_ID_VC3(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_CSI_PHY_TST_CRTL0 - D-PHY Test interface control 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_CSI_PHY_TST_CRTL0 - D-PHY Test interface control 0 (RW)
 *
 * Reset value: 0x00000000
 *
 * Name: D-PHY Test interface control 0  Address Offset: 0x030  Size: 2 bit  Default Value: 0
 * Access: Read/Write
 */
typedef union _hw_mipi_csi_phy_tst_crtl0
{
    reg32_t U;
    struct _hw_mipi_csi_phy_tst_crtl0_bitfields
    {
        unsigned PHY_TESTCLR : 1; //!< [0] PHY test interface clear.
        unsigned PHY_TESTCLK : 1; //!< [1] PHY test interface strobe signal.
        unsigned RESERVED0 : 30; //!< [31:2] Reserved
    } B;
} hw_mipi_csi_phy_tst_crtl0_t;
#endif

/*
 * constants & macros for entire MIPI_CSI_PHY_TST_CRTL0 register
 */
#define HW_MIPI_CSI_PHY_TST_CRTL0_ADDR      (REGS_MIPI_CSI_BASE + 0x30)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_CSI_PHY_TST_CRTL0           (*(volatile hw_mipi_csi_phy_tst_crtl0_t *) HW_MIPI_CSI_PHY_TST_CRTL0_ADDR)
#define HW_MIPI_CSI_PHY_TST_CRTL0_RD()      (HW_MIPI_CSI_PHY_TST_CRTL0.U)
#define HW_MIPI_CSI_PHY_TST_CRTL0_WR(v)     (HW_MIPI_CSI_PHY_TST_CRTL0.U = (v))
#define HW_MIPI_CSI_PHY_TST_CRTL0_SET(v)    (HW_MIPI_CSI_PHY_TST_CRTL0_WR(HW_MIPI_CSI_PHY_TST_CRTL0_RD() |  (v)))
#define HW_MIPI_CSI_PHY_TST_CRTL0_CLR(v)    (HW_MIPI_CSI_PHY_TST_CRTL0_WR(HW_MIPI_CSI_PHY_TST_CRTL0_RD() & ~(v)))
#define HW_MIPI_CSI_PHY_TST_CRTL0_TOG(v)    (HW_MIPI_CSI_PHY_TST_CRTL0_WR(HW_MIPI_CSI_PHY_TST_CRTL0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_CSI_PHY_TST_CRTL0 bitfields
 */

/* --- Register HW_MIPI_CSI_PHY_TST_CRTL0, field PHY_TESTCLR[0] (RW)
 *
 * PHY test interface clear. Used when active performs vendor specific interface
 * initialization(Active High). Default Value: 0
 */

#define BP_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLR      (0)      //!< Bit position for MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLR.
#define BM_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLR      (0x00000001)  //!< Bit mask for MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLR.

//! @brief Get value of MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLR from a register value.
#define BG_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLR) >> BP_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLR)

//! @brief Format value for bitfield MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLR.
#define BF_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLR) & BM_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_TESTCLR field to a new value.
#define BW_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLR(v)   (HW_MIPI_CSI_PHY_TST_CRTL0_WR((HW_MIPI_CSI_PHY_TST_CRTL0_RD() & ~BM_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLR) | BF_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLR(v)))
#endif

/* --- Register HW_MIPI_CSI_PHY_TST_CRTL0, field PHY_TESTCLK[1] (RW)
 *
 * PHY test interface strobe signal. Used to clock TESTDIN bus into the D-PHY. In conjunction with
 * TESTEN signal controls the operation selection. Default Value: 0
 */

#define BP_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLK      (1)      //!< Bit position for MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLK.
#define BM_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLK      (0x00000002)  //!< Bit mask for MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLK.

//! @brief Get value of MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLK from a register value.
#define BG_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLK) >> BP_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLK)

//! @brief Format value for bitfield MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLK.
#define BF_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLK(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLK) & BM_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLK)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_TESTCLK field to a new value.
#define BW_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLK(v)   (HW_MIPI_CSI_PHY_TST_CRTL0_WR((HW_MIPI_CSI_PHY_TST_CRTL0_RD() & ~BM_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLK) | BF_MIPI_CSI_PHY_TST_CRTL0_PHY_TESTCLK(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_MIPI_CSI_PHY_TST_CTRL1 - D-PHY Test interface control 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_MIPI_CSI_PHY_TST_CTRL1 - D-PHY Test interface control 1 (RW)
 *
 * Reset value: 0x00000000
 *
 * Name: D-PHY Test interface control 1  Address Offset: 0x034  Size: 17 bit  Default Value: 0
 * Access: Read/Write
 */
typedef union _hw_mipi_csi_phy_tst_ctrl1
{
    reg32_t U;
    struct _hw_mipi_csi_phy_tst_ctrl1_bitfields
    {
        unsigned PHY_TESTDIN : 8; //!< [7:0] PHY test interface input 8-bit data bus for internal register programming and test functionalities access Default Value: 0
        unsigned PHY_TESTDOUT : 8; //!< [15:8] PHY output 8-bit data bus for read-back and internal probing functionalities.
        unsigned PHY_TESTEN : 1; //!< [16] PHY test interface operation selector:
        unsigned RESERVED0 : 15; //!< [31:17] Reserved
    } B;
} hw_mipi_csi_phy_tst_ctrl1_t;
#endif

/*
 * constants & macros for entire MIPI_CSI_PHY_TST_CTRL1 register
 */
#define HW_MIPI_CSI_PHY_TST_CTRL1_ADDR      (REGS_MIPI_CSI_BASE + 0x34)

#ifndef __LANGUAGE_ASM__
#define HW_MIPI_CSI_PHY_TST_CTRL1           (*(volatile hw_mipi_csi_phy_tst_ctrl1_t *) HW_MIPI_CSI_PHY_TST_CTRL1_ADDR)
#define HW_MIPI_CSI_PHY_TST_CTRL1_RD()      (HW_MIPI_CSI_PHY_TST_CTRL1.U)
#define HW_MIPI_CSI_PHY_TST_CTRL1_WR(v)     (HW_MIPI_CSI_PHY_TST_CTRL1.U = (v))
#define HW_MIPI_CSI_PHY_TST_CTRL1_SET(v)    (HW_MIPI_CSI_PHY_TST_CTRL1_WR(HW_MIPI_CSI_PHY_TST_CTRL1_RD() |  (v)))
#define HW_MIPI_CSI_PHY_TST_CTRL1_CLR(v)    (HW_MIPI_CSI_PHY_TST_CTRL1_WR(HW_MIPI_CSI_PHY_TST_CTRL1_RD() & ~(v)))
#define HW_MIPI_CSI_PHY_TST_CTRL1_TOG(v)    (HW_MIPI_CSI_PHY_TST_CTRL1_WR(HW_MIPI_CSI_PHY_TST_CTRL1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual MIPI_CSI_PHY_TST_CTRL1 bitfields
 */

/* --- Register HW_MIPI_CSI_PHY_TST_CTRL1, field PHY_TESTDIN[7:0] (RW)
 *
 * PHY test interface input 8-bit data bus for internal register programming and test
 * functionalities access Default Value: 0
 */

#define BP_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDIN      (0)      //!< Bit position for MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDIN.
#define BM_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDIN      (0x000000ff)  //!< Bit mask for MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDIN.

//! @brief Get value of MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDIN from a register value.
#define BG_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDIN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDIN) >> BP_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDIN)

//! @brief Format value for bitfield MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDIN.
#define BF_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDIN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDIN) & BM_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDIN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_TESTDIN field to a new value.
#define BW_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDIN(v)   (HW_MIPI_CSI_PHY_TST_CTRL1_WR((HW_MIPI_CSI_PHY_TST_CTRL1_RD() & ~BM_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDIN) | BF_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDIN(v)))
#endif

/* --- Register HW_MIPI_CSI_PHY_TST_CTRL1, field PHY_TESTDOUT[15:8] (RW)
 *
 * PHY output 8-bit data bus for read-back and internal probing functionalities. Default Value: 0
 */

#define BP_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDOUT      (8)      //!< Bit position for MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDOUT.
#define BM_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDOUT      (0x0000ff00)  //!< Bit mask for MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDOUT.

//! @brief Get value of MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDOUT from a register value.
#define BG_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDOUT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDOUT) >> BP_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDOUT)

//! @brief Format value for bitfield MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDOUT.
#define BF_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDOUT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDOUT) & BM_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDOUT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_TESTDOUT field to a new value.
#define BW_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDOUT(v)   (HW_MIPI_CSI_PHY_TST_CTRL1_WR((HW_MIPI_CSI_PHY_TST_CTRL1_RD() & ~BM_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDOUT) | BF_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTDOUT(v)))
#endif

/* --- Register HW_MIPI_CSI_PHY_TST_CTRL1, field PHY_TESTEN[16] (RW)
 *
 * PHY test interface operation selector:
 *
 * Values:
 * 0 - configures a data write operation on the rising edge of TESTCLK
 * 1 - configures address write operation on the falling edge of TESTCLK
 */

#define BP_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTEN      (16)      //!< Bit position for MIPI_CSI_PHY_TST_CTRL1_PHY_TESTEN.
#define BM_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTEN      (0x00010000)  //!< Bit mask for MIPI_CSI_PHY_TST_CTRL1_PHY_TESTEN.

//! @brief Get value of MIPI_CSI_PHY_TST_CTRL1_PHY_TESTEN from a register value.
#define BG_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTEN) >> BP_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTEN)

//! @brief Format value for bitfield MIPI_CSI_PHY_TST_CTRL1_PHY_TESTEN.
#define BF_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTEN) & BM_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHY_TESTEN field to a new value.
#define BW_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTEN(v)   (HW_MIPI_CSI_PHY_TST_CTRL1_WR((HW_MIPI_CSI_PHY_TST_CTRL1_RD() & ~BM_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTEN) | BF_MIPI_CSI_PHY_TST_CTRL1_PHY_TESTEN(v)))
#endif



/*!
 * @brief All MIPI_CSI module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_mipi_csi
{
    volatile hw_mipi_csi_version_t VERSION; //!< Controller Version Identification Register
    volatile hw_mipi_csi_n_lanes_t N_LANES; //!< Number of Active Data Lanes
    volatile hw_mipi_csi_phy_shutdownz_t PHY_SHUTDOWNZ; //!< Phy shutdown control
    volatile hw_mipi_csi_dphy_rstz_t DPHY_RSTZ; //!< Phy reset control
    volatile hw_mipi_csi_csi2_resetn_t CSI2_RESETN; //!< CSI2 controller reset
    volatile hw_mipi_csi_phy_state_t PHY_STATE; //!< General settings for all blocks
    volatile hw_mipi_csi_data_ids_1_t DATA_IDS_1; //!< Data IDs for which IDI reports line boundary matching errors
    reg32_t _reserved0;
    volatile hw_mipi_csi_err1_t ERR1; //!< Error state register 1
    volatile hw_mipi_csi_err2_t ERR2; //!< Error state register 2
    reg32_t _reserved1;
    volatile hw_mipi_csi_mask2_t MASK2; //!< Masks for errors 2
    volatile hw_mipi_csi_phy_tst_crtl0_t PHY_TST_CRTL0; //!< D-PHY Test interface control 0
    volatile hw_mipi_csi_phy_tst_ctrl1_t PHY_TST_CTRL1; //!< D-PHY Test interface control 1
} hw_mipi_csi_t;
#pragma pack()

//! @brief Macro to access all MIPI_CSI registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_MIPI_CSI(0)</code>.
#define HW_MIPI_CSI     (*(volatile hw_mipi_csi_t *) REGS_MIPI_CSI_BASE)

#endif


#endif // __HW_MIPI_CSI_REGISTERS_H__
