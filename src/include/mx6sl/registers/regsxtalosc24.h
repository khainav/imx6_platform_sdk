/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef __HW_XTALOSC24M_REGISTERS_H__
#define __HW_XTALOSC24M_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SL XTALOSC24M registers defined in this header file.
 *
 * - HW_XTALOSC24M_MISC0 - Miscellaneous Register 0
 * - HW_XTALOSC24M_LPC_MISC1 - XTAL OSC MISC1 (LPC) Control Register
 *
 * - hw_xtalosc24m_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_XTALOSC24M_BASE
#define HW_XTALOSC24M_INSTANCE_COUNT (1) //!< Number of instances of the XTALOSC24M module.
#define REGS_XTALOSC24M_BASE (0x020c8000) //!< Base address for XTALOSC24M.
#endif
//@}


//-------------------------------------------------------------------------------------------
// HW_XTALOSC24M_MISC0 - Miscellaneous Register 0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_XTALOSC24M_MISC0 - Miscellaneous Register 0 (RW)
 *
 * Reset value: 0x04000000
 *
 * This register defines the control and status bits for miscellaneous analog blocks.
 */
typedef union _hw_xtalosc24m_misc0
{
    reg32_t U;
    struct _hw_xtalosc24m_misc0_bitfields
    {
        unsigned REFTOP_PWD : 1; //!< [0] Control bit to power-down the analog bandgap reference circuitry.
        unsigned RESERVED0 : 2; //!< [2:1] Reserved
        unsigned REFTOP_SELFBIASOFF : 1; //!< [3] Control bit to disable the self-bias circuit in the analog bandgap.
        unsigned REFTOP_VBGADJ : 3; //!< [6:4] Not related to oscillator.
        unsigned REFTOP_VBGUP : 1; //!< [7] Status bit which signals that the analog bandgap voltage is up and stable.
        unsigned RESERVED1 : 4; //!< [11:8] Reserved
        unsigned STOP_MODE_CONFIG : 1; //!< [12] Configure the analog behavior in stop mode.
        unsigned RESERVED2 : 1; //!< [13] Reserved.
        unsigned OSC_I : 2; //!< [15:14] This bit field determines the bias current in the 24MHz oscillator.
        unsigned OSC_XTALOK : 1; //!< [16] Status bit which signals that the output of the 24MHz crystal oscillator is stable.
        unsigned OSC_XTALOK_EN : 1; //!< [17] Enable bit
        unsigned WBCP_VPW_THRESH : 2; //!< [19:18] This signal alters the voltage that the pwell is charged pumped to.
        unsigned RESERVED3 : 5; //!< [24:20] Reserved.
        unsigned CLKGATE_CTRL : 1; //!< [25] This bit allows disabling the clock gate (always un-gated) for the xtal 24MHz clock that clocks the digital logic in the analog block.
        unsigned CLKGATE_DELAY : 3; //!< [28:26] This field specifies the delay between powering up the XTAL 24MHz clock and release the clock to the digital logic inside the analog block.
        unsigned RESERVED4 : 3; //!< [31:29] Reserved
    } B;
} hw_xtalosc24m_misc0_t;
#endif

/*
 * constants & macros for entire XTALOSC24M_MISC0 register
 */
#define HW_XTALOSC24M_MISC0_ADDR      (REGS_XTALOSC24M_BASE + 0x150)

#ifndef __LANGUAGE_ASM__
#define HW_XTALOSC24M_MISC0           (*(volatile hw_xtalosc24m_misc0_t *) HW_XTALOSC24M_MISC0_ADDR)
#define HW_XTALOSC24M_MISC0_RD()      (HW_XTALOSC24M_MISC0.U)
#define HW_XTALOSC24M_MISC0_WR(v)     (HW_XTALOSC24M_MISC0.U = (v))
#define HW_XTALOSC24M_MISC0_SET(v)    (HW_XTALOSC24M_MISC0_WR(HW_XTALOSC24M_MISC0_RD() |  (v)))
#define HW_XTALOSC24M_MISC0_CLR(v)    (HW_XTALOSC24M_MISC0_WR(HW_XTALOSC24M_MISC0_RD() & ~(v)))
#define HW_XTALOSC24M_MISC0_TOG(v)    (HW_XTALOSC24M_MISC0_WR(HW_XTALOSC24M_MISC0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual XTALOSC24M_MISC0 bitfields
 */

/* --- Register HW_XTALOSC24M_MISC0, field REFTOP_PWD[0] (RW)
 *
 * Control bit to power-down the analog bandgap reference circuitry. Not related to oscillator. A
 * note of caution, the bandgap is necessary for correct operation of most of the LDO, pll, and
 * other analog functions on the die.
 */

#define BP_XTALOSC24M_MISC0_REFTOP_PWD      (0)      //!< Bit position for XTALOSC24M_MISC0_REFTOP_PWD.
#define BM_XTALOSC24M_MISC0_REFTOP_PWD      (0x00000001)  //!< Bit mask for XTALOSC24M_MISC0_REFTOP_PWD.

//! @brief Get value of XTALOSC24M_MISC0_REFTOP_PWD from a register value.
#define BG_XTALOSC24M_MISC0_REFTOP_PWD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_MISC0_REFTOP_PWD) >> BP_XTALOSC24M_MISC0_REFTOP_PWD)

//! @brief Format value for bitfield XTALOSC24M_MISC0_REFTOP_PWD.
#define BF_XTALOSC24M_MISC0_REFTOP_PWD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_MISC0_REFTOP_PWD) & BM_XTALOSC24M_MISC0_REFTOP_PWD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the REFTOP_PWD field to a new value.
#define BW_XTALOSC24M_MISC0_REFTOP_PWD(v)   (HW_XTALOSC24M_MISC0_WR((HW_XTALOSC24M_MISC0_RD() & ~BM_XTALOSC24M_MISC0_REFTOP_PWD) | BF_XTALOSC24M_MISC0_REFTOP_PWD(v)))
#endif

/* --- Register HW_XTALOSC24M_MISC0, field REFTOP_SELFBIASOFF[3] (RW)
 *
 * Control bit to disable the self-bias circuit in the analog bandgap. The self-bias circuit is used
 * by the bandgap during startup. This bit should be set after the bandgap has stabilized and is
 * necessary for best noise performance of analog blocks using the outputs of the bandgap. Not
 * related to oscillator. Value should be returned to zero before removing vddhigh_in or asserting
 * bit 0 of this register (REFTOP_PWD) to assure proper restart of the circuit.
 *
 * Values:
 * 0 - Uses coarse bias currents for startup
 * 1 - Uses bandgap based bias currents for best performance.
 */

#define BP_XTALOSC24M_MISC0_REFTOP_SELFBIASOFF      (3)      //!< Bit position for XTALOSC24M_MISC0_REFTOP_SELFBIASOFF.
#define BM_XTALOSC24M_MISC0_REFTOP_SELFBIASOFF      (0x00000008)  //!< Bit mask for XTALOSC24M_MISC0_REFTOP_SELFBIASOFF.

//! @brief Get value of XTALOSC24M_MISC0_REFTOP_SELFBIASOFF from a register value.
#define BG_XTALOSC24M_MISC0_REFTOP_SELFBIASOFF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_MISC0_REFTOP_SELFBIASOFF) >> BP_XTALOSC24M_MISC0_REFTOP_SELFBIASOFF)

//! @brief Format value for bitfield XTALOSC24M_MISC0_REFTOP_SELFBIASOFF.
#define BF_XTALOSC24M_MISC0_REFTOP_SELFBIASOFF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_MISC0_REFTOP_SELFBIASOFF) & BM_XTALOSC24M_MISC0_REFTOP_SELFBIASOFF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the REFTOP_SELFBIASOFF field to a new value.
#define BW_XTALOSC24M_MISC0_REFTOP_SELFBIASOFF(v)   (HW_XTALOSC24M_MISC0_WR((HW_XTALOSC24M_MISC0_RD() & ~BM_XTALOSC24M_MISC0_REFTOP_SELFBIASOFF) | BF_XTALOSC24M_MISC0_REFTOP_SELFBIASOFF(v)))
#endif


/* --- Register HW_XTALOSC24M_MISC0, field REFTOP_VBGADJ[6:4] (RW)
 *
 * Not related to oscillator.
 *
 * Values:
 * 000 - Nominal VBG
 * 001 - VBG+0.78%
 * 010 - VBG+1.56%
 * 011 - VBG+2.34%
 * 100 - VBG-0.78%
 * 101 - VBG-1.56%
 * 110 - VBG-2.34%
 * 111 - VBG-3.12%
 */

#define BP_XTALOSC24M_MISC0_REFTOP_VBGADJ      (4)      //!< Bit position for XTALOSC24M_MISC0_REFTOP_VBGADJ.
#define BM_XTALOSC24M_MISC0_REFTOP_VBGADJ      (0x00000070)  //!< Bit mask for XTALOSC24M_MISC0_REFTOP_VBGADJ.

//! @brief Get value of XTALOSC24M_MISC0_REFTOP_VBGADJ from a register value.
#define BG_XTALOSC24M_MISC0_REFTOP_VBGADJ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_MISC0_REFTOP_VBGADJ) >> BP_XTALOSC24M_MISC0_REFTOP_VBGADJ)

//! @brief Format value for bitfield XTALOSC24M_MISC0_REFTOP_VBGADJ.
#define BF_XTALOSC24M_MISC0_REFTOP_VBGADJ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_MISC0_REFTOP_VBGADJ) & BM_XTALOSC24M_MISC0_REFTOP_VBGADJ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the REFTOP_VBGADJ field to a new value.
#define BW_XTALOSC24M_MISC0_REFTOP_VBGADJ(v)   (HW_XTALOSC24M_MISC0_WR((HW_XTALOSC24M_MISC0_RD() & ~BM_XTALOSC24M_MISC0_REFTOP_VBGADJ) | BF_XTALOSC24M_MISC0_REFTOP_VBGADJ(v)))
#endif


/* --- Register HW_XTALOSC24M_MISC0, field REFTOP_VBGUP[7] (RW)
 *
 * Status bit which signals that the analog bandgap voltage is up and stable. 1- Stable. Not related
 * to oscillator.
 */

#define BP_XTALOSC24M_MISC0_REFTOP_VBGUP      (7)      //!< Bit position for XTALOSC24M_MISC0_REFTOP_VBGUP.
#define BM_XTALOSC24M_MISC0_REFTOP_VBGUP      (0x00000080)  //!< Bit mask for XTALOSC24M_MISC0_REFTOP_VBGUP.

//! @brief Get value of XTALOSC24M_MISC0_REFTOP_VBGUP from a register value.
#define BG_XTALOSC24M_MISC0_REFTOP_VBGUP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_MISC0_REFTOP_VBGUP) >> BP_XTALOSC24M_MISC0_REFTOP_VBGUP)

//! @brief Format value for bitfield XTALOSC24M_MISC0_REFTOP_VBGUP.
#define BF_XTALOSC24M_MISC0_REFTOP_VBGUP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_MISC0_REFTOP_VBGUP) & BM_XTALOSC24M_MISC0_REFTOP_VBGUP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the REFTOP_VBGUP field to a new value.
#define BW_XTALOSC24M_MISC0_REFTOP_VBGUP(v)   (HW_XTALOSC24M_MISC0_WR((HW_XTALOSC24M_MISC0_RD() & ~BM_XTALOSC24M_MISC0_REFTOP_VBGUP) | BF_XTALOSC24M_MISC0_REFTOP_VBGUP(v)))
#endif

/* --- Register HW_XTALOSC24M_MISC0, field STOP_MODE_CONFIG[12] (RW)
 *
 * Configure the analog behavior in stop mode. 0 - all analog except rtc powered down on stop mode
 * assertion; 1 - certain analog functions such as certain regulators left up. Not related to
 * oscillator.
 */

#define BP_XTALOSC24M_MISC0_STOP_MODE_CONFIG      (12)      //!< Bit position for XTALOSC24M_MISC0_STOP_MODE_CONFIG.
#define BM_XTALOSC24M_MISC0_STOP_MODE_CONFIG      (0x00001000)  //!< Bit mask for XTALOSC24M_MISC0_STOP_MODE_CONFIG.

//! @brief Get value of XTALOSC24M_MISC0_STOP_MODE_CONFIG from a register value.
#define BG_XTALOSC24M_MISC0_STOP_MODE_CONFIG(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_MISC0_STOP_MODE_CONFIG) >> BP_XTALOSC24M_MISC0_STOP_MODE_CONFIG)

//! @brief Format value for bitfield XTALOSC24M_MISC0_STOP_MODE_CONFIG.
#define BF_XTALOSC24M_MISC0_STOP_MODE_CONFIG(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_MISC0_STOP_MODE_CONFIG) & BM_XTALOSC24M_MISC0_STOP_MODE_CONFIG)

#ifndef __LANGUAGE_ASM__
//! @brief Set the STOP_MODE_CONFIG field to a new value.
#define BW_XTALOSC24M_MISC0_STOP_MODE_CONFIG(v)   (HW_XTALOSC24M_MISC0_WR((HW_XTALOSC24M_MISC0_RD() & ~BM_XTALOSC24M_MISC0_STOP_MODE_CONFIG) | BF_XTALOSC24M_MISC0_STOP_MODE_CONFIG(v)))
#endif

/* --- Register HW_XTALOSC24M_MISC0, field OSC_I[15:14] (RW)
 *
 * This bit field determines the bias current in the 24MHz oscillator. The idea is to start up with
 * the highest bias current which can be decreased after startup if determined to be acceptable.
 *
 * Values:
 * 00 - Nominal
 * 01 - Decrease current by 12.5%
 * 10 - Decrease current by 25.0%
 * 11 - Decrease current by 37.5%
 */

#define BP_XTALOSC24M_MISC0_OSC_I      (14)      //!< Bit position for XTALOSC24M_MISC0_OSC_I.
#define BM_XTALOSC24M_MISC0_OSC_I      (0x0000c000)  //!< Bit mask for XTALOSC24M_MISC0_OSC_I.

//! @brief Get value of XTALOSC24M_MISC0_OSC_I from a register value.
#define BG_XTALOSC24M_MISC0_OSC_I(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_MISC0_OSC_I) >> BP_XTALOSC24M_MISC0_OSC_I)

//! @brief Format value for bitfield XTALOSC24M_MISC0_OSC_I.
#define BF_XTALOSC24M_MISC0_OSC_I(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_MISC0_OSC_I) & BM_XTALOSC24M_MISC0_OSC_I)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OSC_I field to a new value.
#define BW_XTALOSC24M_MISC0_OSC_I(v)   (HW_XTALOSC24M_MISC0_WR((HW_XTALOSC24M_MISC0_RD() & ~BM_XTALOSC24M_MISC0_OSC_I) | BF_XTALOSC24M_MISC0_OSC_I(v)))
#endif


/* --- Register HW_XTALOSC24M_MISC0, field OSC_XTALOK[16] (RO)
 *
 * Status bit which signals that the output of the 24MHz crystal oscillator is stable. Generated
 * from a timer and active detection of the actual frequency.
 */

#define BP_XTALOSC24M_MISC0_OSC_XTALOK      (16)      //!< Bit position for XTALOSC24M_MISC0_OSC_XTALOK.
#define BM_XTALOSC24M_MISC0_OSC_XTALOK      (0x00010000)  //!< Bit mask for XTALOSC24M_MISC0_OSC_XTALOK.

//! @brief Get value of XTALOSC24M_MISC0_OSC_XTALOK from a register value.
#define BG_XTALOSC24M_MISC0_OSC_XTALOK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_MISC0_OSC_XTALOK) >> BP_XTALOSC24M_MISC0_OSC_XTALOK)

/* --- Register HW_XTALOSC24M_MISC0, field OSC_XTALOK_EN[17] (RW)
 *
 * Enable bit
 */

#define BP_XTALOSC24M_MISC0_OSC_XTALOK_EN      (17)      //!< Bit position for XTALOSC24M_MISC0_OSC_XTALOK_EN.
#define BM_XTALOSC24M_MISC0_OSC_XTALOK_EN      (0x00020000)  //!< Bit mask for XTALOSC24M_MISC0_OSC_XTALOK_EN.

//! @brief Get value of XTALOSC24M_MISC0_OSC_XTALOK_EN from a register value.
#define BG_XTALOSC24M_MISC0_OSC_XTALOK_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_MISC0_OSC_XTALOK_EN) >> BP_XTALOSC24M_MISC0_OSC_XTALOK_EN)

//! @brief Format value for bitfield XTALOSC24M_MISC0_OSC_XTALOK_EN.
#define BF_XTALOSC24M_MISC0_OSC_XTALOK_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_MISC0_OSC_XTALOK_EN) & BM_XTALOSC24M_MISC0_OSC_XTALOK_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OSC_XTALOK_EN field to a new value.
#define BW_XTALOSC24M_MISC0_OSC_XTALOK_EN(v)   (HW_XTALOSC24M_MISC0_WR((HW_XTALOSC24M_MISC0_RD() & ~BM_XTALOSC24M_MISC0_OSC_XTALOK_EN) | BF_XTALOSC24M_MISC0_OSC_XTALOK_EN(v)))
#endif

/* --- Register HW_XTALOSC24M_MISC0, field WBCP_VPW_THRESH[19:18] (RW)
 *
 * This signal alters the voltage that the pwell is charged pumped to. Not related to oscillator.
 *
 * Values:
 * 00 - Nominal output pwell bias voltage.
 * 01 - Increase pwell output voltage by 25mV.
 * 10 - Decrease pwell output pwell voltage by 25mV.
 * 11 - Decrease pwell output pwell voltage by 50mV.
 */

#define BP_XTALOSC24M_MISC0_WBCP_VPW_THRESH      (18)      //!< Bit position for XTALOSC24M_MISC0_WBCP_VPW_THRESH.
#define BM_XTALOSC24M_MISC0_WBCP_VPW_THRESH      (0x000c0000)  //!< Bit mask for XTALOSC24M_MISC0_WBCP_VPW_THRESH.

//! @brief Get value of XTALOSC24M_MISC0_WBCP_VPW_THRESH from a register value.
#define BG_XTALOSC24M_MISC0_WBCP_VPW_THRESH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_MISC0_WBCP_VPW_THRESH) >> BP_XTALOSC24M_MISC0_WBCP_VPW_THRESH)

//! @brief Format value for bitfield XTALOSC24M_MISC0_WBCP_VPW_THRESH.
#define BF_XTALOSC24M_MISC0_WBCP_VPW_THRESH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_MISC0_WBCP_VPW_THRESH) & BM_XTALOSC24M_MISC0_WBCP_VPW_THRESH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WBCP_VPW_THRESH field to a new value.
#define BW_XTALOSC24M_MISC0_WBCP_VPW_THRESH(v)   (HW_XTALOSC24M_MISC0_WR((HW_XTALOSC24M_MISC0_RD() & ~BM_XTALOSC24M_MISC0_WBCP_VPW_THRESH) | BF_XTALOSC24M_MISC0_WBCP_VPW_THRESH(v)))
#endif


/* --- Register HW_XTALOSC24M_MISC0, field CLKGATE_CTRL[25] (RW)
 *
 * This bit allows disabling the clock gate (always un-gated) for the xtal 24MHz clock that clocks
 * the digital logic in the analog block. Do not change the field during a low power event. This is
 * not a field that the user would normally need to modify
 *
 * Values:
 * 0 - Allow the logic to automatically gate the clock when the XTAL is powered down.
 * 1 - Prevent the logic from ever gating off the clock.
 */

#define BP_XTALOSC24M_MISC0_CLKGATE_CTRL      (25)      //!< Bit position for XTALOSC24M_MISC0_CLKGATE_CTRL.
#define BM_XTALOSC24M_MISC0_CLKGATE_CTRL      (0x02000000)  //!< Bit mask for XTALOSC24M_MISC0_CLKGATE_CTRL.

//! @brief Get value of XTALOSC24M_MISC0_CLKGATE_CTRL from a register value.
#define BG_XTALOSC24M_MISC0_CLKGATE_CTRL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_MISC0_CLKGATE_CTRL) >> BP_XTALOSC24M_MISC0_CLKGATE_CTRL)

//! @brief Format value for bitfield XTALOSC24M_MISC0_CLKGATE_CTRL.
#define BF_XTALOSC24M_MISC0_CLKGATE_CTRL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_MISC0_CLKGATE_CTRL) & BM_XTALOSC24M_MISC0_CLKGATE_CTRL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CLKGATE_CTRL field to a new value.
#define BW_XTALOSC24M_MISC0_CLKGATE_CTRL(v)   (HW_XTALOSC24M_MISC0_WR((HW_XTALOSC24M_MISC0_RD() & ~BM_XTALOSC24M_MISC0_CLKGATE_CTRL) | BF_XTALOSC24M_MISC0_CLKGATE_CTRL(v)))
#endif


/* --- Register HW_XTALOSC24M_MISC0, field CLKGATE_DELAY[28:26] (RW)
 *
 * This field specifies the delay between powering up the XTAL 24MHz clock and release the clock to
 * the digital logic inside the analog block. Do not change the field during a low power event. This
 * is not a field that the user would normally need to modify
 *
 * Values:
 * 000 - 0.5ms
 * 001 - 1.0ms
 * 010 - 2.0ms
 * 011 - 3.0ms
 * 100 - 4.0ms
 * 101 - 5.0ms
 * 110 - 6.0ms
 * 111 - 7.0ms
 */

#define BP_XTALOSC24M_MISC0_CLKGATE_DELAY      (26)      //!< Bit position for XTALOSC24M_MISC0_CLKGATE_DELAY.
#define BM_XTALOSC24M_MISC0_CLKGATE_DELAY      (0x1c000000)  //!< Bit mask for XTALOSC24M_MISC0_CLKGATE_DELAY.

//! @brief Get value of XTALOSC24M_MISC0_CLKGATE_DELAY from a register value.
#define BG_XTALOSC24M_MISC0_CLKGATE_DELAY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_MISC0_CLKGATE_DELAY) >> BP_XTALOSC24M_MISC0_CLKGATE_DELAY)

//! @brief Format value for bitfield XTALOSC24M_MISC0_CLKGATE_DELAY.
#define BF_XTALOSC24M_MISC0_CLKGATE_DELAY(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_MISC0_CLKGATE_DELAY) & BM_XTALOSC24M_MISC0_CLKGATE_DELAY)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CLKGATE_DELAY field to a new value.
#define BW_XTALOSC24M_MISC0_CLKGATE_DELAY(v)   (HW_XTALOSC24M_MISC0_WR((HW_XTALOSC24M_MISC0_RD() & ~BM_XTALOSC24M_MISC0_CLKGATE_DELAY) | BF_XTALOSC24M_MISC0_CLKGATE_DELAY(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_XTALOSC24M_LPC_MISC1 - XTAL OSC MISC1 (LPC) Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_XTALOSC24M_LPC_MISC1 - XTAL OSC MISC1 (LPC) Control Register (RW)
 *
 * Reset value: 0x00004009
 *
 * XTAL OSC miscellaneous register 1.
 */
typedef union _hw_xtalosc24m_lpc_misc1
{
    reg32_t U;
    struct _hw_xtalosc24m_lpc_misc1_bitfields
    {
        unsigned RC_OSC_EN : 1; //!< [0] RC Osc.
        unsigned RC_OSC_PROG : 3; //!< [3:1] RC osc.
        unsigned OSC_SEL : 1; //!< [4] Select the source for the 24MHz clock.
        unsigned LPBG_SEL : 1; //!< [5] Bandgap select.
        unsigned LPBG_TEST : 1; //!< [6] Low power bandgap test bit.
        unsigned REFTOP_IBIAS_OFF : 1; //!< [7] Low power reftop ibias disable.
        unsigned L1_PWRGATE : 1; //!< [8] L1 power gate control.
        unsigned L2_PWRGATE : 1; //!< [9] L2 power gate control.
        unsigned CPU_PWRGATE : 1; //!< [10] CPU power gate control.
        unsigned DISPLAY_PWRGATE : 1; //!< [11] Display logic power gate control.
        unsigned RWB_EN : 1; //!< [12] Reverse well bias enable control.
        unsigned RCOSC_CG_OVERRIDE : 1; //!< [13] For debug purposes only.
        unsigned XTALOSC_PWRUP_DELAY : 2; //!< [15:14] Specifies the time delay between when the 24MHz xtal is powered up until it is stable and ready to use.
        unsigned XTALOSC_PWRUP_STAT : 1; //!< [16] Status of the 24MHz xtal oscillator.
        unsigned RESERVED0 : 15; //!< [31:17] Reserved.
    } B;
} hw_xtalosc24m_lpc_misc1_t;
#endif

/*
 * constants & macros for entire XTALOSC24M_LPC_MISC1 register
 */
#define HW_XTALOSC24M_LPC_MISC1_ADDR      (REGS_XTALOSC24M_BASE + 0x260)
#define HW_XTALOSC24M_LPC_MISC1_SET_ADDR  (HW_XTALOSC24M_LPC_MISC1_ADDR + 0x4)
#define HW_XTALOSC24M_LPC_MISC1_CLR_ADDR  (HW_XTALOSC24M_LPC_MISC1_ADDR + 0x8)
#define HW_XTALOSC24M_LPC_MISC1_TOG_ADDR  (HW_XTALOSC24M_LPC_MISC1_ADDR + 0xC)

#ifndef __LANGUAGE_ASM__
#define HW_XTALOSC24M_LPC_MISC1           (*(volatile hw_xtalosc24m_lpc_misc1_t *) HW_XTALOSC24M_LPC_MISC1_ADDR)
#define HW_XTALOSC24M_LPC_MISC1_RD()      (HW_XTALOSC24M_LPC_MISC1.U)
#define HW_XTALOSC24M_LPC_MISC1_WR(v)     (HW_XTALOSC24M_LPC_MISC1.U = (v))
#define HW_XTALOSC24M_LPC_MISC1_SET(v)    ((*(volatile reg32_t *) HW_XTALOSC24M_LPC_MISC1_SET_ADDR) = (v))
#define HW_XTALOSC24M_LPC_MISC1_CLR(v)    ((*(volatile reg32_t *) HW_XTALOSC24M_LPC_MISC1_CLR_ADDR) = (v))
#define HW_XTALOSC24M_LPC_MISC1_TOG(v)    ((*(volatile reg32_t *) HW_XTALOSC24M_LPC_MISC1_TOG_ADDR) = (v))
#endif

/*
 * constants & macros for individual XTALOSC24M_LPC_MISC1 bitfields
 */

/* --- Register HW_XTALOSC24M_LPC_MISC1, field RC_OSC_EN[0] (RW)
 *
 * RC Osc. enable control.
 *
 * Values:
 * 0 - Use XTAL OSC to source the 24MHz clock
 * 1 - Use RC OSC
 */

#define BP_XTALOSC24M_LPC_MISC1_RC_OSC_EN      (0)      //!< Bit position for XTALOSC24M_LPC_MISC1_RC_OSC_EN.
#define BM_XTALOSC24M_LPC_MISC1_RC_OSC_EN      (0x00000001)  //!< Bit mask for XTALOSC24M_LPC_MISC1_RC_OSC_EN.

//! @brief Get value of XTALOSC24M_LPC_MISC1_RC_OSC_EN from a register value.
#define BG_XTALOSC24M_LPC_MISC1_RC_OSC_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_LPC_MISC1_RC_OSC_EN) >> BP_XTALOSC24M_LPC_MISC1_RC_OSC_EN)

//! @brief Format value for bitfield XTALOSC24M_LPC_MISC1_RC_OSC_EN.
#define BF_XTALOSC24M_LPC_MISC1_RC_OSC_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_LPC_MISC1_RC_OSC_EN) & BM_XTALOSC24M_LPC_MISC1_RC_OSC_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RC_OSC_EN field to a new value.
#define BW_XTALOSC24M_LPC_MISC1_RC_OSC_EN(v)   BF_CS1(XTALOSC24M_LPC_MISC1, RC_OSC_EN, v)
#endif


/* --- Register HW_XTALOSC24M_LPC_MISC1, field RC_OSC_PROG[3:1] (RW)
 *
 * RC osc. tuning values.
 */

#define BP_XTALOSC24M_LPC_MISC1_RC_OSC_PROG      (1)      //!< Bit position for XTALOSC24M_LPC_MISC1_RC_OSC_PROG.
#define BM_XTALOSC24M_LPC_MISC1_RC_OSC_PROG      (0x0000000e)  //!< Bit mask for XTALOSC24M_LPC_MISC1_RC_OSC_PROG.

//! @brief Get value of XTALOSC24M_LPC_MISC1_RC_OSC_PROG from a register value.
#define BG_XTALOSC24M_LPC_MISC1_RC_OSC_PROG(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_LPC_MISC1_RC_OSC_PROG) >> BP_XTALOSC24M_LPC_MISC1_RC_OSC_PROG)

//! @brief Format value for bitfield XTALOSC24M_LPC_MISC1_RC_OSC_PROG.
#define BF_XTALOSC24M_LPC_MISC1_RC_OSC_PROG(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_LPC_MISC1_RC_OSC_PROG) & BM_XTALOSC24M_LPC_MISC1_RC_OSC_PROG)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RC_OSC_PROG field to a new value.
#define BW_XTALOSC24M_LPC_MISC1_RC_OSC_PROG(v)   BF_CS1(XTALOSC24M_LPC_MISC1, RC_OSC_PROG, v)
#endif

/* --- Register HW_XTALOSC24M_LPC_MISC1, field OSC_SEL[4] (RW)
 *
 * Select the source for the 24MHz clock.
 *
 * Values:
 * 0 - XTAL OSC
 * 1 - RC OSC
 */

#define BP_XTALOSC24M_LPC_MISC1_OSC_SEL      (4)      //!< Bit position for XTALOSC24M_LPC_MISC1_OSC_SEL.
#define BM_XTALOSC24M_LPC_MISC1_OSC_SEL      (0x00000010)  //!< Bit mask for XTALOSC24M_LPC_MISC1_OSC_SEL.

//! @brief Get value of XTALOSC24M_LPC_MISC1_OSC_SEL from a register value.
#define BG_XTALOSC24M_LPC_MISC1_OSC_SEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_LPC_MISC1_OSC_SEL) >> BP_XTALOSC24M_LPC_MISC1_OSC_SEL)

//! @brief Format value for bitfield XTALOSC24M_LPC_MISC1_OSC_SEL.
#define BF_XTALOSC24M_LPC_MISC1_OSC_SEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_LPC_MISC1_OSC_SEL) & BM_XTALOSC24M_LPC_MISC1_OSC_SEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OSC_SEL field to a new value.
#define BW_XTALOSC24M_LPC_MISC1_OSC_SEL(v)   BF_CS1(XTALOSC24M_LPC_MISC1, OSC_SEL, v)
#endif


/* --- Register HW_XTALOSC24M_LPC_MISC1, field LPBG_SEL[5] (RW)
 *
 * Bandgap select. Not related to oscillator.
 *
 * Values:
 * 0 - Normal power bandgap
 * 1 - Low power bandgap
 */

#define BP_XTALOSC24M_LPC_MISC1_LPBG_SEL      (5)      //!< Bit position for XTALOSC24M_LPC_MISC1_LPBG_SEL.
#define BM_XTALOSC24M_LPC_MISC1_LPBG_SEL      (0x00000020)  //!< Bit mask for XTALOSC24M_LPC_MISC1_LPBG_SEL.

//! @brief Get value of XTALOSC24M_LPC_MISC1_LPBG_SEL from a register value.
#define BG_XTALOSC24M_LPC_MISC1_LPBG_SEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_LPC_MISC1_LPBG_SEL) >> BP_XTALOSC24M_LPC_MISC1_LPBG_SEL)

//! @brief Format value for bitfield XTALOSC24M_LPC_MISC1_LPBG_SEL.
#define BF_XTALOSC24M_LPC_MISC1_LPBG_SEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_LPC_MISC1_LPBG_SEL) & BM_XTALOSC24M_LPC_MISC1_LPBG_SEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LPBG_SEL field to a new value.
#define BW_XTALOSC24M_LPC_MISC1_LPBG_SEL(v)   BF_CS1(XTALOSC24M_LPC_MISC1, LPBG_SEL, v)
#endif


/* --- Register HW_XTALOSC24M_LPC_MISC1, field LPBG_TEST[6] (RW)
 *
 * Low power bandgap test bit. Not related to oscillator.
 */

#define BP_XTALOSC24M_LPC_MISC1_LPBG_TEST      (6)      //!< Bit position for XTALOSC24M_LPC_MISC1_LPBG_TEST.
#define BM_XTALOSC24M_LPC_MISC1_LPBG_TEST      (0x00000040)  //!< Bit mask for XTALOSC24M_LPC_MISC1_LPBG_TEST.

//! @brief Get value of XTALOSC24M_LPC_MISC1_LPBG_TEST from a register value.
#define BG_XTALOSC24M_LPC_MISC1_LPBG_TEST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_LPC_MISC1_LPBG_TEST) >> BP_XTALOSC24M_LPC_MISC1_LPBG_TEST)

//! @brief Format value for bitfield XTALOSC24M_LPC_MISC1_LPBG_TEST.
#define BF_XTALOSC24M_LPC_MISC1_LPBG_TEST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_LPC_MISC1_LPBG_TEST) & BM_XTALOSC24M_LPC_MISC1_LPBG_TEST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LPBG_TEST field to a new value.
#define BW_XTALOSC24M_LPC_MISC1_LPBG_TEST(v)   BF_CS1(XTALOSC24M_LPC_MISC1, LPBG_TEST, v)
#endif

/* --- Register HW_XTALOSC24M_LPC_MISC1, field REFTOP_IBIAS_OFF[7] (RW)
 *
 * Low power reftop ibias disable. Not related to oscillator.
 */

#define BP_XTALOSC24M_LPC_MISC1_REFTOP_IBIAS_OFF      (7)      //!< Bit position for XTALOSC24M_LPC_MISC1_REFTOP_IBIAS_OFF.
#define BM_XTALOSC24M_LPC_MISC1_REFTOP_IBIAS_OFF      (0x00000080)  //!< Bit mask for XTALOSC24M_LPC_MISC1_REFTOP_IBIAS_OFF.

//! @brief Get value of XTALOSC24M_LPC_MISC1_REFTOP_IBIAS_OFF from a register value.
#define BG_XTALOSC24M_LPC_MISC1_REFTOP_IBIAS_OFF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_LPC_MISC1_REFTOP_IBIAS_OFF) >> BP_XTALOSC24M_LPC_MISC1_REFTOP_IBIAS_OFF)

//! @brief Format value for bitfield XTALOSC24M_LPC_MISC1_REFTOP_IBIAS_OFF.
#define BF_XTALOSC24M_LPC_MISC1_REFTOP_IBIAS_OFF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_LPC_MISC1_REFTOP_IBIAS_OFF) & BM_XTALOSC24M_LPC_MISC1_REFTOP_IBIAS_OFF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the REFTOP_IBIAS_OFF field to a new value.
#define BW_XTALOSC24M_LPC_MISC1_REFTOP_IBIAS_OFF(v)   BF_CS1(XTALOSC24M_LPC_MISC1, REFTOP_IBIAS_OFF, v)
#endif

/* --- Register HW_XTALOSC24M_LPC_MISC1, field L1_PWRGATE[8] (RW)
 *
 * L1 power gate control. Used as software override. Not related to oscillator.
 */

#define BP_XTALOSC24M_LPC_MISC1_L1_PWRGATE      (8)      //!< Bit position for XTALOSC24M_LPC_MISC1_L1_PWRGATE.
#define BM_XTALOSC24M_LPC_MISC1_L1_PWRGATE      (0x00000100)  //!< Bit mask for XTALOSC24M_LPC_MISC1_L1_PWRGATE.

//! @brief Get value of XTALOSC24M_LPC_MISC1_L1_PWRGATE from a register value.
#define BG_XTALOSC24M_LPC_MISC1_L1_PWRGATE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_LPC_MISC1_L1_PWRGATE) >> BP_XTALOSC24M_LPC_MISC1_L1_PWRGATE)

//! @brief Format value for bitfield XTALOSC24M_LPC_MISC1_L1_PWRGATE.
#define BF_XTALOSC24M_LPC_MISC1_L1_PWRGATE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_LPC_MISC1_L1_PWRGATE) & BM_XTALOSC24M_LPC_MISC1_L1_PWRGATE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the L1_PWRGATE field to a new value.
#define BW_XTALOSC24M_LPC_MISC1_L1_PWRGATE(v)   BF_CS1(XTALOSC24M_LPC_MISC1, L1_PWRGATE, v)
#endif

/* --- Register HW_XTALOSC24M_LPC_MISC1, field L2_PWRGATE[9] (RW)
 *
 * L2 power gate control. Used as software override. Not related to oscillator.
 */

#define BP_XTALOSC24M_LPC_MISC1_L2_PWRGATE      (9)      //!< Bit position for XTALOSC24M_LPC_MISC1_L2_PWRGATE.
#define BM_XTALOSC24M_LPC_MISC1_L2_PWRGATE      (0x00000200)  //!< Bit mask for XTALOSC24M_LPC_MISC1_L2_PWRGATE.

//! @brief Get value of XTALOSC24M_LPC_MISC1_L2_PWRGATE from a register value.
#define BG_XTALOSC24M_LPC_MISC1_L2_PWRGATE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_LPC_MISC1_L2_PWRGATE) >> BP_XTALOSC24M_LPC_MISC1_L2_PWRGATE)

//! @brief Format value for bitfield XTALOSC24M_LPC_MISC1_L2_PWRGATE.
#define BF_XTALOSC24M_LPC_MISC1_L2_PWRGATE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_LPC_MISC1_L2_PWRGATE) & BM_XTALOSC24M_LPC_MISC1_L2_PWRGATE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the L2_PWRGATE field to a new value.
#define BW_XTALOSC24M_LPC_MISC1_L2_PWRGATE(v)   BF_CS1(XTALOSC24M_LPC_MISC1, L2_PWRGATE, v)
#endif

/* --- Register HW_XTALOSC24M_LPC_MISC1, field CPU_PWRGATE[10] (RW)
 *
 * CPU power gate control. Used as software override. Not related to oscillator.
 */

#define BP_XTALOSC24M_LPC_MISC1_CPU_PWRGATE      (10)      //!< Bit position for XTALOSC24M_LPC_MISC1_CPU_PWRGATE.
#define BM_XTALOSC24M_LPC_MISC1_CPU_PWRGATE      (0x00000400)  //!< Bit mask for XTALOSC24M_LPC_MISC1_CPU_PWRGATE.

//! @brief Get value of XTALOSC24M_LPC_MISC1_CPU_PWRGATE from a register value.
#define BG_XTALOSC24M_LPC_MISC1_CPU_PWRGATE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_LPC_MISC1_CPU_PWRGATE) >> BP_XTALOSC24M_LPC_MISC1_CPU_PWRGATE)

//! @brief Format value for bitfield XTALOSC24M_LPC_MISC1_CPU_PWRGATE.
#define BF_XTALOSC24M_LPC_MISC1_CPU_PWRGATE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_LPC_MISC1_CPU_PWRGATE) & BM_XTALOSC24M_LPC_MISC1_CPU_PWRGATE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CPU_PWRGATE field to a new value.
#define BW_XTALOSC24M_LPC_MISC1_CPU_PWRGATE(v)   BF_CS1(XTALOSC24M_LPC_MISC1, CPU_PWRGATE, v)
#endif

/* --- Register HW_XTALOSC24M_LPC_MISC1, field DISPLAY_PWRGATE[11] (RW)
 *
 * Display logic power gate control. Used as software override. Not related to oscillator.
 */

#define BP_XTALOSC24M_LPC_MISC1_DISPLAY_PWRGATE      (11)      //!< Bit position for XTALOSC24M_LPC_MISC1_DISPLAY_PWRGATE.
#define BM_XTALOSC24M_LPC_MISC1_DISPLAY_PWRGATE      (0x00000800)  //!< Bit mask for XTALOSC24M_LPC_MISC1_DISPLAY_PWRGATE.

//! @brief Get value of XTALOSC24M_LPC_MISC1_DISPLAY_PWRGATE from a register value.
#define BG_XTALOSC24M_LPC_MISC1_DISPLAY_PWRGATE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_LPC_MISC1_DISPLAY_PWRGATE) >> BP_XTALOSC24M_LPC_MISC1_DISPLAY_PWRGATE)

//! @brief Format value for bitfield XTALOSC24M_LPC_MISC1_DISPLAY_PWRGATE.
#define BF_XTALOSC24M_LPC_MISC1_DISPLAY_PWRGATE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_LPC_MISC1_DISPLAY_PWRGATE) & BM_XTALOSC24M_LPC_MISC1_DISPLAY_PWRGATE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DISPLAY_PWRGATE field to a new value.
#define BW_XTALOSC24M_LPC_MISC1_DISPLAY_PWRGATE(v)   BF_CS1(XTALOSC24M_LPC_MISC1, DISPLAY_PWRGATE, v)
#endif

/* --- Register HW_XTALOSC24M_LPC_MISC1, field RWB_EN[12] (RW)
 *
 * Reverse well bias enable control. Not related to oscillator.
 *
 * Values:
 * 0 - Disabled
 * 1 - Enabled
 */

#define BP_XTALOSC24M_LPC_MISC1_RWB_EN      (12)      //!< Bit position for XTALOSC24M_LPC_MISC1_RWB_EN.
#define BM_XTALOSC24M_LPC_MISC1_RWB_EN      (0x00001000)  //!< Bit mask for XTALOSC24M_LPC_MISC1_RWB_EN.

//! @brief Get value of XTALOSC24M_LPC_MISC1_RWB_EN from a register value.
#define BG_XTALOSC24M_LPC_MISC1_RWB_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_LPC_MISC1_RWB_EN) >> BP_XTALOSC24M_LPC_MISC1_RWB_EN)

//! @brief Format value for bitfield XTALOSC24M_LPC_MISC1_RWB_EN.
#define BF_XTALOSC24M_LPC_MISC1_RWB_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_LPC_MISC1_RWB_EN) & BM_XTALOSC24M_LPC_MISC1_RWB_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RWB_EN field to a new value.
#define BW_XTALOSC24M_LPC_MISC1_RWB_EN(v)   BF_CS1(XTALOSC24M_LPC_MISC1, RWB_EN, v)
#endif


/* --- Register HW_XTALOSC24M_LPC_MISC1, field RCOSC_CG_OVERRIDE[13] (RW)
 *
 * For debug purposes only. This bit effects clock gating of certain digital logic clocked by the
 * 24MHz clk.
 */

#define BP_XTALOSC24M_LPC_MISC1_RCOSC_CG_OVERRIDE      (13)      //!< Bit position for XTALOSC24M_LPC_MISC1_RCOSC_CG_OVERRIDE.
#define BM_XTALOSC24M_LPC_MISC1_RCOSC_CG_OVERRIDE      (0x00002000)  //!< Bit mask for XTALOSC24M_LPC_MISC1_RCOSC_CG_OVERRIDE.

//! @brief Get value of XTALOSC24M_LPC_MISC1_RCOSC_CG_OVERRIDE from a register value.
#define BG_XTALOSC24M_LPC_MISC1_RCOSC_CG_OVERRIDE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_LPC_MISC1_RCOSC_CG_OVERRIDE) >> BP_XTALOSC24M_LPC_MISC1_RCOSC_CG_OVERRIDE)

//! @brief Format value for bitfield XTALOSC24M_LPC_MISC1_RCOSC_CG_OVERRIDE.
#define BF_XTALOSC24M_LPC_MISC1_RCOSC_CG_OVERRIDE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_LPC_MISC1_RCOSC_CG_OVERRIDE) & BM_XTALOSC24M_LPC_MISC1_RCOSC_CG_OVERRIDE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RCOSC_CG_OVERRIDE field to a new value.
#define BW_XTALOSC24M_LPC_MISC1_RCOSC_CG_OVERRIDE(v)   BF_CS1(XTALOSC24M_LPC_MISC1, RCOSC_CG_OVERRIDE, v)
#endif

/* --- Register HW_XTALOSC24M_LPC_MISC1, field XTALOSC_PWRUP_DELAY[15:14] (RW)
 *
 * Specifies the time delay between when the 24MHz xtal is powered up until it is stable and ready
 * to use.
 *
 * Values:
 * 00 - 0.25ms
 * 01 - 0.5ms
 * 10 - 1ms
 * 11 - 2ms
 */

#define BP_XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_DELAY      (14)      //!< Bit position for XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_DELAY.
#define BM_XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_DELAY      (0x0000c000)  //!< Bit mask for XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_DELAY.

//! @brief Get value of XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_DELAY from a register value.
#define BG_XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_DELAY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_DELAY) >> BP_XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_DELAY)

//! @brief Format value for bitfield XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_DELAY.
#define BF_XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_DELAY(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_DELAY) & BM_XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_DELAY)

#ifndef __LANGUAGE_ASM__
//! @brief Set the XTALOSC_PWRUP_DELAY field to a new value.
#define BW_XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_DELAY(v)   BF_CS1(XTALOSC24M_LPC_MISC1, XTALOSC_PWRUP_DELAY, v)
#endif


/* --- Register HW_XTALOSC24M_LPC_MISC1, field XTALOSC_PWRUP_STAT[16] (RO)
 *
 * Status of the 24MHz xtal oscillator.
 *
 * Values:
 * 0 - Not stable
 * 1 - Stable and ready to use
 */

#define BP_XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_STAT      (16)      //!< Bit position for XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_STAT.
#define BM_XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_STAT      (0x00010000)  //!< Bit mask for XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_STAT.

//! @brief Get value of XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_STAT from a register value.
#define BG_XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_STAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_STAT) >> BP_XTALOSC24M_LPC_MISC1_XTALOSC_PWRUP_STAT)



/*!
 * @brief All XTALOSC24M module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_xtalosc24m
{
    reg32_t _reserved0[84];
    volatile hw_xtalosc24m_misc0_t MISC0; //!< Miscellaneous Register 0
    reg32_t _reserved1[67];
    volatile hw_xtalosc24m_lpc_misc1_t LPC_MISC1; //!< XTAL OSC MISC1 (LPC) Control Register
    volatile reg32_t LPC_MISC1_SET; //!< XTAL OSC MISC1 (LPC) Control Register Set
    volatile reg32_t LPC_MISC1_CLR; //!< XTAL OSC MISC1 (LPC) Control Register Clear
    volatile reg32_t LPC_MISC1_TOG; //!< XTAL OSC MISC1 (LPC) Control Register Toggle
} hw_xtalosc24m_t;
#pragma pack()

//! @brief Macro to access all XTALOSC24M registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_XTALOSC24M(0)</code>.
#define HW_XTALOSC24M     (*(volatile hw_xtalosc24m_t *) REGS_XTALOSC24M_BASE)

#endif


#endif // __HW_XTALOSC24M_REGISTERS_H__
