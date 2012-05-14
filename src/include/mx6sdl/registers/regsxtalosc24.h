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
 * i.MX6SDL XTALOSC24M registers defined in this header file.
 *
 * - HW_XTALOSC24M_MISC0 - Miscellaneous Register 0
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



/*!
 * @brief All XTALOSC24M module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_xtalosc24m
{
    reg32_t _reserved0[84];
    volatile hw_xtalosc24m_misc0_t MISC0; //!< Miscellaneous Register 0
} hw_xtalosc24m_t;
#pragma pack()

//! @brief Macro to access all XTALOSC24M registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_XTALOSC24M(0)</code>.
#define HW_XTALOSC24M     (*(volatile hw_xtalosc24m_t *) REGS_XTALOSC24M_BASE)

#endif


#endif // __HW_XTALOSC24M_REGISTERS_H__
