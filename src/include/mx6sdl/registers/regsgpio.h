/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef __HW_GPIO_REGISTERS_H__
#define __HW_GPIO_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SDL GPIO registers defined in this header file.
 *
 * - HW_GPIO_DR - GPIO data register
 * - HW_GPIO_GDIR - GPIO direction register
 * - HW_GPIO_PSR - GPIO pad status register
 * - HW_GPIO_ICR1 - GPIO interrupt configuration register1
 * - HW_GPIO_ICR2 - GPIO interrupt configuration register2
 * - HW_GPIO_IMR - GPIO interrupt mask register
 * - HW_GPIO_ISR - GPIO interrupt status register
 * - HW_GPIO_EDGE_SEL - GPIO edge select register
 *
 * - hw_gpio_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_GPIO_BASE
#define HW_GPIO_INSTANCE_COUNT (7) //!< Number of instances of the GPIO module.
#define HW_GPIO1 (1) //!< Instance number for GPIO1.
#define HW_GPIO2 (2) //!< Instance number for GPIO2.
#define HW_GPIO3 (3) //!< Instance number for GPIO3.
#define HW_GPIO4 (4) //!< Instance number for GPIO4.
#define HW_GPIO5 (5) //!< Instance number for GPIO5.
#define HW_GPIO6 (6) //!< Instance number for GPIO6.
#define HW_GPIO7 (7) //!< Instance number for GPIO7.

#define REGS_GPIO1_BASE (0x0209c000) //!< Base address for GPIO instance number 1.
#define REGS_GPIO2_BASE (0x020a0000) //!< Base address for GPIO instance number 2.
#define REGS_GPIO3_BASE (0x020a4000) //!< Base address for GPIO instance number 3.
#define REGS_GPIO4_BASE (0x020a8000) //!< Base address for GPIO instance number 4.
#define REGS_GPIO5_BASE (0x020ac000) //!< Base address for GPIO instance number 5.
#define REGS_GPIO6_BASE (0x020b0000) //!< Base address for GPIO instance number 6.
#define REGS_GPIO7_BASE (0x020b4000) //!< Base address for GPIO instance number 7.

//! @brief Get the base address of GPIO by instance number.
//! @param x GPIO instance number, from 1 through 7.
#define REGS_GPIO_BASE(x) ( (x) == HW_GPIO1 ? REGS_GPIO1_BASE : (x) == HW_GPIO2 ? REGS_GPIO2_BASE : (x) == HW_GPIO3 ? REGS_GPIO3_BASE : (x) == HW_GPIO4 ? REGS_GPIO4_BASE : (x) == HW_GPIO5 ? REGS_GPIO5_BASE : (x) == HW_GPIO6 ? REGS_GPIO6_BASE : (x) == HW_GPIO7 ? REGS_GPIO7_BASE : 0x00d00000)

//! @brief Get the instance number given a base address.
//! @param b Base address for an instance of GPIO.
#define REGS_GPIO_INSTANCE(b) ( (b) == REGS_GPIO1_BASE ? HW_GPIO1 : (b) == REGS_GPIO2_BASE ? HW_GPIO2 : (b) == REGS_GPIO3_BASE ? HW_GPIO3 : (b) == REGS_GPIO4_BASE ? HW_GPIO4 : (b) == REGS_GPIO5_BASE ? HW_GPIO5 : (b) == REGS_GPIO6_BASE ? HW_GPIO6 : (b) == REGS_GPIO7_BASE ? HW_GPIO7 : 0)
#endif
//@}


//-------------------------------------------------------------------------------------------
// HW_GPIO_DR - GPIO data register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPIO_DR - GPIO data register (RW)
 *
 * Reset value: 0x00000000
 *
 * The 32-bit GPIO_DR register stores data that is ready to be driven to the output lines. If the
 * IOMUXC is in GPIO mode and a given GPIO direction bit is set, then the corresponding DR bit is
 * driven to the output. If a given GPIO direction bit is cleared, then a read of GPIO_DR reflects
 * the value of the corresponding signal.Two wait states are required in read access for
 * synchronization.  The results of a read of a DR bit depends on the IOMUXC input mode settings and
 * the corresponding GDIR bit as follows:   If GDIR[ n ] is set and IOMUXC input mode is GPIO, then
 * reading DR[ n ] returns the contents of DR[ n ].  If GDIR[ n ] is cleared and IOMUXC input mode
 * is GPIO, then reading DR[ n ] returns the corresponding input signal's value.  If GDIR[ n ] is
 * set and IOMUXC input mode is not GPIO, then reading DR[ n ] returns the contents of DR[ n ].  If
 * GDIR[ n ] is cleared and IOMUXC input mode is not GPIO, then reading DR[ n ] always returns zero.
 */
typedef union _hw_gpio_dr
{
    reg32_t U;
    struct _hw_gpio_dr_bitfields
    {
        unsigned DR : 32; //!< [31:0] Data bits.
    } B;
} hw_gpio_dr_t;
#endif

/*
 * constants & macros for entire multi-block GPIO_DR register
 */
#define HW_GPIO_DR_ADDR(x)      (REGS_GPIO_BASE(x) + 0x0)

#ifndef __LANGUAGE_ASM__
#define HW_GPIO_DR(x)           (*(volatile hw_gpio_dr_t *) HW_GPIO_DR_ADDR(x))
#define HW_GPIO_DR_RD(x)        (HW_GPIO_DR(x).U)
#define HW_GPIO_DR_WR(x, v)     (HW_GPIO_DR(x).U = (v))
#define HW_GPIO_DR_SET(x, v)    (HW_GPIO_DR_WR(x, HW_GPIO_DR_RD(x) |  (v)))
#define HW_GPIO_DR_CLR(x, v)    (HW_GPIO_DR_WR(x, HW_GPIO_DR_RD(x) & ~(v)))
#define HW_GPIO_DR_TOG(x, v)    (HW_GPIO_DR_WR(x, HW_GPIO_DR_RD(x) ^  (v)))
#endif

/*
 * constants & macros for individual GPIO_DR bitfields
 */

/* --- Register HW_GPIO_DR, field DR[31:0] (RW)
 *
 * Data bits. This register defines the value of the GPIO output when the signal is configured as an
 * output (GDIR[n]=1). Writes to this register are stored in a register. Reading GPIO_DR returns the
 * value stored in the register if the signal is configured as an output (GDIR[n]=1), or the input
 * signal's value if configured as an input (GDIR[n]=0). The I/O multiplexer must be configured to
 * GPIO mode for the GPIO_DR value to connect with the signal. Reading the data register with the
 * input path disabled always returns a zero value.
 */

#define BP_GPIO_DR_DR      (0)      //!< Bit position for GPIO_DR_DR.
#define BM_GPIO_DR_DR      (0xffffffff)  //!< Bit mask for GPIO_DR_DR.

//! @brief Get value of GPIO_DR_DR from a register value.
#define BG_GPIO_DR_DR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_DR_DR) >> BP_GPIO_DR_DR)

//! @brief Format value for bitfield GPIO_DR_DR.
#define BF_GPIO_DR_DR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_DR_DR) & BM_GPIO_DR_DR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DR field to a new value.
#define BW_GPIO_DR_DR(x, v)   (HW_GPIO_DR_WR(x, (HW_GPIO_DR_RD(x) & ~BM_GPIO_DR_DR) | BF_GPIO_DR_DR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_GPIO_GDIR - GPIO direction register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPIO_GDIR - GPIO direction register (RW)
 *
 * Reset value: 0x00000000
 *
 * GPIO_GDIR functions as direction control when the IOMUXC is in GPIO mode. Each bit specifies the
 * direction of a one-bit signal. The mapping of each DIR bit to a corresponding SoC signal is
 * determined by the SoC's pin assignment and the IOMUX table-for more details consult the IOMUXC
 * chapter.
 */
typedef union _hw_gpio_gdir
{
    reg32_t U;
    struct _hw_gpio_gdir_bitfields
    {
        unsigned GDIR : 32; //!< [31:0] GPIO direction bits.
    } B;
} hw_gpio_gdir_t;
#endif

/*
 * constants & macros for entire multi-block GPIO_GDIR register
 */
#define HW_GPIO_GDIR_ADDR(x)      (REGS_GPIO_BASE(x) + 0x4)

#ifndef __LANGUAGE_ASM__
#define HW_GPIO_GDIR(x)           (*(volatile hw_gpio_gdir_t *) HW_GPIO_GDIR_ADDR(x))
#define HW_GPIO_GDIR_RD(x)        (HW_GPIO_GDIR(x).U)
#define HW_GPIO_GDIR_WR(x, v)     (HW_GPIO_GDIR(x).U = (v))
#define HW_GPIO_GDIR_SET(x, v)    (HW_GPIO_GDIR_WR(x, HW_GPIO_GDIR_RD(x) |  (v)))
#define HW_GPIO_GDIR_CLR(x, v)    (HW_GPIO_GDIR_WR(x, HW_GPIO_GDIR_RD(x) & ~(v)))
#define HW_GPIO_GDIR_TOG(x, v)    (HW_GPIO_GDIR_WR(x, HW_GPIO_GDIR_RD(x) ^  (v)))
#endif

/*
 * constants & macros for individual GPIO_GDIR bitfields
 */

/* --- Register HW_GPIO_GDIR, field GDIR[31:0] (RW)
 *
 * GPIO direction bits. Bit n of this register defines the direction of the GPIO[n] signal.
 * GPIO_GDIR affects only the direction of the I/O signal when the corresponding bit in the I/O MUX
 * is configured for GPIO.
 *
 * Values:
 * 0 - GPIO is configured as input.
 * 1 - GPIO is configured as output.
 */

#define BP_GPIO_GDIR_GDIR      (0)      //!< Bit position for GPIO_GDIR_GDIR.
#define BM_GPIO_GDIR_GDIR      (0xffffffff)  //!< Bit mask for GPIO_GDIR_GDIR.

//! @brief Get value of GPIO_GDIR_GDIR from a register value.
#define BG_GPIO_GDIR_GDIR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_GDIR_GDIR) >> BP_GPIO_GDIR_GDIR)

//! @brief Format value for bitfield GPIO_GDIR_GDIR.
#define BF_GPIO_GDIR_GDIR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_GDIR_GDIR) & BM_GPIO_GDIR_GDIR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GDIR field to a new value.
#define BW_GPIO_GDIR_GDIR(x, v)   (HW_GPIO_GDIR_WR(x, (HW_GPIO_GDIR_RD(x) & ~BM_GPIO_GDIR_GDIR) | BF_GPIO_GDIR_GDIR(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_GPIO_PSR - GPIO pad status register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPIO_PSR - GPIO pad status register (RO)
 *
 * Reset value: 0x00000000
 *
 * GPIO_PSR is a read-only register. Each bit stores the value of the corresponding input signal (as
 * configured in the IOMUX). This register is clocked with the ipg_clk_s clock, meaning that the
 * input signal is sampled only when accessing this location. Two wait states are required any time
 * this register is accessed for synchronization.
 */
typedef union _hw_gpio_psr
{
    reg32_t U;
    struct _hw_gpio_psr_bitfields
    {
        unsigned PSR : 32; //!< [31:0] GPIO pad status bits (status bits).
    } B;
} hw_gpio_psr_t;
#endif

/*
 * constants & macros for entire multi-block GPIO_PSR register
 */
#define HW_GPIO_PSR_ADDR(x)      (REGS_GPIO_BASE(x) + 0x8)

#ifndef __LANGUAGE_ASM__
#define HW_GPIO_PSR(x)           (*(volatile hw_gpio_psr_t *) HW_GPIO_PSR_ADDR(x))
#define HW_GPIO_PSR_RD(x)        (HW_GPIO_PSR(x).U)
#endif

/*
 * constants & macros for individual GPIO_PSR bitfields
 */

/* --- Register HW_GPIO_PSR, field PSR[31:0] (RO)
 *
 * GPIO pad status bits (status bits). Reading GPIO_PSR returns the state of the corresponding input
 * signal. Settings: The I/O multiplexer must be configured to GPIO mode for GPIO_PSR to reflect the
 * state of the corresponding signal.
 */

#define BP_GPIO_PSR_PSR      (0)      //!< Bit position for GPIO_PSR_PSR.
#define BM_GPIO_PSR_PSR      (0xffffffff)  //!< Bit mask for GPIO_PSR_PSR.

//! @brief Get value of GPIO_PSR_PSR from a register value.
#define BG_GPIO_PSR_PSR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_PSR_PSR) >> BP_GPIO_PSR_PSR)

//-------------------------------------------------------------------------------------------
// HW_GPIO_ICR1 - GPIO interrupt configuration register1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPIO_ICR1 - GPIO interrupt configuration register1 (RW)
 *
 * Reset value: 0x00000000
 *
 * GPIO_ICR1 contains 16 two-bit fields, where each field specifies the interrupt configuration for
 * a different input signal.
 */
typedef union _hw_gpio_icr1
{
    reg32_t U;
    struct _hw_gpio_icr1_bitfields
    {
        unsigned ICR0 : 2; //!< [1:0] Interrupt configuration 1 fields.
        unsigned ICR1 : 2; //!< [3:2] Interrupt configuration 1 fields.
        unsigned ICR2 : 2; //!< [5:4] Interrupt configuration 1 fields.
        unsigned ICR3 : 2; //!< [7:6] Interrupt configuration 1 fields.
        unsigned ICR4 : 2; //!< [9:8] Interrupt configuration 1 fields.
        unsigned ICR5 : 2; //!< [11:10] Interrupt configuration 1 fields.
        unsigned ICR6 : 2; //!< [13:12] Interrupt configuration 1 fields.
        unsigned ICR7 : 2; //!< [15:14] Interrupt configuration 1 fields.
        unsigned ICR8 : 2; //!< [17:16] Interrupt configuration 1 fields.
        unsigned ICR9 : 2; //!< [19:18] Interrupt configuration 1 fields.
        unsigned ICR10 : 2; //!< [21:20] Interrupt configuration 1 fields.
        unsigned ICR11 : 2; //!< [23:22] Interrupt configuration 1 fields.
        unsigned ICR12 : 2; //!< [25:24] Interrupt configuration 1 fields.
        unsigned ICR13 : 2; //!< [27:26] Interrupt configuration 1 fields.
        unsigned ICR14 : 2; //!< [29:28] Interrupt configuration 1 fields.
        unsigned ICR15 : 2; //!< [31:30] Interrupt configuration 1 fields.
    } B;
} hw_gpio_icr1_t;
#endif

/*
 * constants & macros for entire multi-block GPIO_ICR1 register
 */
#define HW_GPIO_ICR1_ADDR(x)      (REGS_GPIO_BASE(x) + 0xc)

#ifndef __LANGUAGE_ASM__
#define HW_GPIO_ICR1(x)           (*(volatile hw_gpio_icr1_t *) HW_GPIO_ICR1_ADDR(x))
#define HW_GPIO_ICR1_RD(x)        (HW_GPIO_ICR1(x).U)
#define HW_GPIO_ICR1_WR(x, v)     (HW_GPIO_ICR1(x).U = (v))
#define HW_GPIO_ICR1_SET(x, v)    (HW_GPIO_ICR1_WR(x, HW_GPIO_ICR1_RD(x) |  (v)))
#define HW_GPIO_ICR1_CLR(x, v)    (HW_GPIO_ICR1_WR(x, HW_GPIO_ICR1_RD(x) & ~(v)))
#define HW_GPIO_ICR1_TOG(x, v)    (HW_GPIO_ICR1_WR(x, HW_GPIO_ICR1_RD(x) ^  (v)))
#endif

/*
 * constants & macros for individual GPIO_ICR1 bitfields
 */

/* --- Register HW_GPIO_ICR1, field ICR0[1:0] (RW)
 *
 * Interrupt configuration 1 fields. This register controls the active condition of the interrupt
 * function for lines 15 to 0. Settings: Bits ICRn[1:0] determine the interrupt condition for signal
 * n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR1_ICR0      (0)      //!< Bit position for GPIO_ICR1_ICR0.
#define BM_GPIO_ICR1_ICR0      (0x00000003)  //!< Bit mask for GPIO_ICR1_ICR0.

//! @brief Get value of GPIO_ICR1_ICR0 from a register value.
#define BG_GPIO_ICR1_ICR0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR1_ICR0) >> BP_GPIO_ICR1_ICR0)

//! @brief Format value for bitfield GPIO_ICR1_ICR0.
#define BF_GPIO_ICR1_ICR0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR1_ICR0) & BM_GPIO_ICR1_ICR0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR0 field to a new value.
#define BW_GPIO_ICR1_ICR0(x, v)   (HW_GPIO_ICR1_WR(x, (HW_GPIO_ICR1_RD(x) & ~BM_GPIO_ICR1_ICR0) | BF_GPIO_ICR1_ICR0(v)))
#endif


/* --- Register HW_GPIO_ICR1, field ICR1[3:2] (RW)
 *
 * Interrupt configuration 1 fields. This register controls the active condition of the interrupt
 * function for lines 15 to 0. Settings: Bits ICRn[1:0] determine the interrupt condition for signal
 * n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR1_ICR1      (2)      //!< Bit position for GPIO_ICR1_ICR1.
#define BM_GPIO_ICR1_ICR1      (0x0000000c)  //!< Bit mask for GPIO_ICR1_ICR1.

//! @brief Get value of GPIO_ICR1_ICR1 from a register value.
#define BG_GPIO_ICR1_ICR1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR1_ICR1) >> BP_GPIO_ICR1_ICR1)

//! @brief Format value for bitfield GPIO_ICR1_ICR1.
#define BF_GPIO_ICR1_ICR1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR1_ICR1) & BM_GPIO_ICR1_ICR1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR1 field to a new value.
#define BW_GPIO_ICR1_ICR1(x, v)   (HW_GPIO_ICR1_WR(x, (HW_GPIO_ICR1_RD(x) & ~BM_GPIO_ICR1_ICR1) | BF_GPIO_ICR1_ICR1(v)))
#endif


/* --- Register HW_GPIO_ICR1, field ICR2[5:4] (RW)
 *
 * Interrupt configuration 1 fields. This register controls the active condition of the interrupt
 * function for lines 15 to 0. Settings: Bits ICRn[1:0] determine the interrupt condition for signal
 * n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR1_ICR2      (4)      //!< Bit position for GPIO_ICR1_ICR2.
#define BM_GPIO_ICR1_ICR2      (0x00000030)  //!< Bit mask for GPIO_ICR1_ICR2.

//! @brief Get value of GPIO_ICR1_ICR2 from a register value.
#define BG_GPIO_ICR1_ICR2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR1_ICR2) >> BP_GPIO_ICR1_ICR2)

//! @brief Format value for bitfield GPIO_ICR1_ICR2.
#define BF_GPIO_ICR1_ICR2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR1_ICR2) & BM_GPIO_ICR1_ICR2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR2 field to a new value.
#define BW_GPIO_ICR1_ICR2(x, v)   (HW_GPIO_ICR1_WR(x, (HW_GPIO_ICR1_RD(x) & ~BM_GPIO_ICR1_ICR2) | BF_GPIO_ICR1_ICR2(v)))
#endif


/* --- Register HW_GPIO_ICR1, field ICR3[7:6] (RW)
 *
 * Interrupt configuration 1 fields. This register controls the active condition of the interrupt
 * function for lines 15 to 0. Settings: Bits ICRn[1:0] determine the interrupt condition for signal
 * n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR1_ICR3      (6)      //!< Bit position for GPIO_ICR1_ICR3.
#define BM_GPIO_ICR1_ICR3      (0x000000c0)  //!< Bit mask for GPIO_ICR1_ICR3.

//! @brief Get value of GPIO_ICR1_ICR3 from a register value.
#define BG_GPIO_ICR1_ICR3(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR1_ICR3) >> BP_GPIO_ICR1_ICR3)

//! @brief Format value for bitfield GPIO_ICR1_ICR3.
#define BF_GPIO_ICR1_ICR3(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR1_ICR3) & BM_GPIO_ICR1_ICR3)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR3 field to a new value.
#define BW_GPIO_ICR1_ICR3(x, v)   (HW_GPIO_ICR1_WR(x, (HW_GPIO_ICR1_RD(x) & ~BM_GPIO_ICR1_ICR3) | BF_GPIO_ICR1_ICR3(v)))
#endif


/* --- Register HW_GPIO_ICR1, field ICR4[9:8] (RW)
 *
 * Interrupt configuration 1 fields. This register controls the active condition of the interrupt
 * function for lines 15 to 0. Settings: Bits ICRn[1:0] determine the interrupt condition for signal
 * n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR1_ICR4      (8)      //!< Bit position for GPIO_ICR1_ICR4.
#define BM_GPIO_ICR1_ICR4      (0x00000300)  //!< Bit mask for GPIO_ICR1_ICR4.

//! @brief Get value of GPIO_ICR1_ICR4 from a register value.
#define BG_GPIO_ICR1_ICR4(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR1_ICR4) >> BP_GPIO_ICR1_ICR4)

//! @brief Format value for bitfield GPIO_ICR1_ICR4.
#define BF_GPIO_ICR1_ICR4(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR1_ICR4) & BM_GPIO_ICR1_ICR4)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR4 field to a new value.
#define BW_GPIO_ICR1_ICR4(x, v)   (HW_GPIO_ICR1_WR(x, (HW_GPIO_ICR1_RD(x) & ~BM_GPIO_ICR1_ICR4) | BF_GPIO_ICR1_ICR4(v)))
#endif


/* --- Register HW_GPIO_ICR1, field ICR5[11:10] (RW)
 *
 * Interrupt configuration 1 fields. This register controls the active condition of the interrupt
 * function for lines 15 to 0. Settings: Bits ICRn[1:0] determine the interrupt condition for signal
 * n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR1_ICR5      (10)      //!< Bit position for GPIO_ICR1_ICR5.
#define BM_GPIO_ICR1_ICR5      (0x00000c00)  //!< Bit mask for GPIO_ICR1_ICR5.

//! @brief Get value of GPIO_ICR1_ICR5 from a register value.
#define BG_GPIO_ICR1_ICR5(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR1_ICR5) >> BP_GPIO_ICR1_ICR5)

//! @brief Format value for bitfield GPIO_ICR1_ICR5.
#define BF_GPIO_ICR1_ICR5(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR1_ICR5) & BM_GPIO_ICR1_ICR5)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR5 field to a new value.
#define BW_GPIO_ICR1_ICR5(x, v)   (HW_GPIO_ICR1_WR(x, (HW_GPIO_ICR1_RD(x) & ~BM_GPIO_ICR1_ICR5) | BF_GPIO_ICR1_ICR5(v)))
#endif


/* --- Register HW_GPIO_ICR1, field ICR6[13:12] (RW)
 *
 * Interrupt configuration 1 fields. This register controls the active condition of the interrupt
 * function for lines 15 to 0. Settings: Bits ICRn[1:0] determine the interrupt condition for signal
 * n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR1_ICR6      (12)      //!< Bit position for GPIO_ICR1_ICR6.
#define BM_GPIO_ICR1_ICR6      (0x00003000)  //!< Bit mask for GPIO_ICR1_ICR6.

//! @brief Get value of GPIO_ICR1_ICR6 from a register value.
#define BG_GPIO_ICR1_ICR6(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR1_ICR6) >> BP_GPIO_ICR1_ICR6)

//! @brief Format value for bitfield GPIO_ICR1_ICR6.
#define BF_GPIO_ICR1_ICR6(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR1_ICR6) & BM_GPIO_ICR1_ICR6)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR6 field to a new value.
#define BW_GPIO_ICR1_ICR6(x, v)   (HW_GPIO_ICR1_WR(x, (HW_GPIO_ICR1_RD(x) & ~BM_GPIO_ICR1_ICR6) | BF_GPIO_ICR1_ICR6(v)))
#endif


/* --- Register HW_GPIO_ICR1, field ICR7[15:14] (RW)
 *
 * Interrupt configuration 1 fields. This register controls the active condition of the interrupt
 * function for lines 15 to 0. Settings: Bits ICRn[1:0] determine the interrupt condition for signal
 * n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR1_ICR7      (14)      //!< Bit position for GPIO_ICR1_ICR7.
#define BM_GPIO_ICR1_ICR7      (0x0000c000)  //!< Bit mask for GPIO_ICR1_ICR7.

//! @brief Get value of GPIO_ICR1_ICR7 from a register value.
#define BG_GPIO_ICR1_ICR7(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR1_ICR7) >> BP_GPIO_ICR1_ICR7)

//! @brief Format value for bitfield GPIO_ICR1_ICR7.
#define BF_GPIO_ICR1_ICR7(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR1_ICR7) & BM_GPIO_ICR1_ICR7)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR7 field to a new value.
#define BW_GPIO_ICR1_ICR7(x, v)   (HW_GPIO_ICR1_WR(x, (HW_GPIO_ICR1_RD(x) & ~BM_GPIO_ICR1_ICR7) | BF_GPIO_ICR1_ICR7(v)))
#endif


/* --- Register HW_GPIO_ICR1, field ICR8[17:16] (RW)
 *
 * Interrupt configuration 1 fields. This register controls the active condition of the interrupt
 * function for lines 15 to 0. Settings: Bits ICRn[1:0] determine the interrupt condition for signal
 * n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR1_ICR8      (16)      //!< Bit position for GPIO_ICR1_ICR8.
#define BM_GPIO_ICR1_ICR8      (0x00030000)  //!< Bit mask for GPIO_ICR1_ICR8.

//! @brief Get value of GPIO_ICR1_ICR8 from a register value.
#define BG_GPIO_ICR1_ICR8(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR1_ICR8) >> BP_GPIO_ICR1_ICR8)

//! @brief Format value for bitfield GPIO_ICR1_ICR8.
#define BF_GPIO_ICR1_ICR8(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR1_ICR8) & BM_GPIO_ICR1_ICR8)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR8 field to a new value.
#define BW_GPIO_ICR1_ICR8(x, v)   (HW_GPIO_ICR1_WR(x, (HW_GPIO_ICR1_RD(x) & ~BM_GPIO_ICR1_ICR8) | BF_GPIO_ICR1_ICR8(v)))
#endif


/* --- Register HW_GPIO_ICR1, field ICR9[19:18] (RW)
 *
 * Interrupt configuration 1 fields. This register controls the active condition of the interrupt
 * function for lines 15 to 0. Settings: Bits ICRn[1:0] determine the interrupt condition for signal
 * n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR1_ICR9      (18)      //!< Bit position for GPIO_ICR1_ICR9.
#define BM_GPIO_ICR1_ICR9      (0x000c0000)  //!< Bit mask for GPIO_ICR1_ICR9.

//! @brief Get value of GPIO_ICR1_ICR9 from a register value.
#define BG_GPIO_ICR1_ICR9(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR1_ICR9) >> BP_GPIO_ICR1_ICR9)

//! @brief Format value for bitfield GPIO_ICR1_ICR9.
#define BF_GPIO_ICR1_ICR9(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR1_ICR9) & BM_GPIO_ICR1_ICR9)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR9 field to a new value.
#define BW_GPIO_ICR1_ICR9(x, v)   (HW_GPIO_ICR1_WR(x, (HW_GPIO_ICR1_RD(x) & ~BM_GPIO_ICR1_ICR9) | BF_GPIO_ICR1_ICR9(v)))
#endif


/* --- Register HW_GPIO_ICR1, field ICR10[21:20] (RW)
 *
 * Interrupt configuration 1 fields. This register controls the active condition of the interrupt
 * function for lines 15 to 0. Settings: Bits ICRn[1:0] determine the interrupt condition for signal
 * n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR1_ICR10      (20)      //!< Bit position for GPIO_ICR1_ICR10.
#define BM_GPIO_ICR1_ICR10      (0x00300000)  //!< Bit mask for GPIO_ICR1_ICR10.

//! @brief Get value of GPIO_ICR1_ICR10 from a register value.
#define BG_GPIO_ICR1_ICR10(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR1_ICR10) >> BP_GPIO_ICR1_ICR10)

//! @brief Format value for bitfield GPIO_ICR1_ICR10.
#define BF_GPIO_ICR1_ICR10(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR1_ICR10) & BM_GPIO_ICR1_ICR10)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR10 field to a new value.
#define BW_GPIO_ICR1_ICR10(x, v)   (HW_GPIO_ICR1_WR(x, (HW_GPIO_ICR1_RD(x) & ~BM_GPIO_ICR1_ICR10) | BF_GPIO_ICR1_ICR10(v)))
#endif


/* --- Register HW_GPIO_ICR1, field ICR11[23:22] (RW)
 *
 * Interrupt configuration 1 fields. This register controls the active condition of the interrupt
 * function for lines 15 to 0. Settings: Bits ICRn[1:0] determine the interrupt condition for signal
 * n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR1_ICR11      (22)      //!< Bit position for GPIO_ICR1_ICR11.
#define BM_GPIO_ICR1_ICR11      (0x00c00000)  //!< Bit mask for GPIO_ICR1_ICR11.

//! @brief Get value of GPIO_ICR1_ICR11 from a register value.
#define BG_GPIO_ICR1_ICR11(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR1_ICR11) >> BP_GPIO_ICR1_ICR11)

//! @brief Format value for bitfield GPIO_ICR1_ICR11.
#define BF_GPIO_ICR1_ICR11(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR1_ICR11) & BM_GPIO_ICR1_ICR11)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR11 field to a new value.
#define BW_GPIO_ICR1_ICR11(x, v)   (HW_GPIO_ICR1_WR(x, (HW_GPIO_ICR1_RD(x) & ~BM_GPIO_ICR1_ICR11) | BF_GPIO_ICR1_ICR11(v)))
#endif


/* --- Register HW_GPIO_ICR1, field ICR12[25:24] (RW)
 *
 * Interrupt configuration 1 fields. This register controls the active condition of the interrupt
 * function for lines 15 to 0. Settings: Bits ICRn[1:0] determine the interrupt condition for signal
 * n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR1_ICR12      (24)      //!< Bit position for GPIO_ICR1_ICR12.
#define BM_GPIO_ICR1_ICR12      (0x03000000)  //!< Bit mask for GPIO_ICR1_ICR12.

//! @brief Get value of GPIO_ICR1_ICR12 from a register value.
#define BG_GPIO_ICR1_ICR12(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR1_ICR12) >> BP_GPIO_ICR1_ICR12)

//! @brief Format value for bitfield GPIO_ICR1_ICR12.
#define BF_GPIO_ICR1_ICR12(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR1_ICR12) & BM_GPIO_ICR1_ICR12)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR12 field to a new value.
#define BW_GPIO_ICR1_ICR12(x, v)   (HW_GPIO_ICR1_WR(x, (HW_GPIO_ICR1_RD(x) & ~BM_GPIO_ICR1_ICR12) | BF_GPIO_ICR1_ICR12(v)))
#endif


/* --- Register HW_GPIO_ICR1, field ICR13[27:26] (RW)
 *
 * Interrupt configuration 1 fields. This register controls the active condition of the interrupt
 * function for lines 15 to 0. Settings: Bits ICRn[1:0] determine the interrupt condition for signal
 * n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR1_ICR13      (26)      //!< Bit position for GPIO_ICR1_ICR13.
#define BM_GPIO_ICR1_ICR13      (0x0c000000)  //!< Bit mask for GPIO_ICR1_ICR13.

//! @brief Get value of GPIO_ICR1_ICR13 from a register value.
#define BG_GPIO_ICR1_ICR13(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR1_ICR13) >> BP_GPIO_ICR1_ICR13)

//! @brief Format value for bitfield GPIO_ICR1_ICR13.
#define BF_GPIO_ICR1_ICR13(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR1_ICR13) & BM_GPIO_ICR1_ICR13)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR13 field to a new value.
#define BW_GPIO_ICR1_ICR13(x, v)   (HW_GPIO_ICR1_WR(x, (HW_GPIO_ICR1_RD(x) & ~BM_GPIO_ICR1_ICR13) | BF_GPIO_ICR1_ICR13(v)))
#endif


/* --- Register HW_GPIO_ICR1, field ICR14[29:28] (RW)
 *
 * Interrupt configuration 1 fields. This register controls the active condition of the interrupt
 * function for lines 15 to 0. Settings: Bits ICRn[1:0] determine the interrupt condition for signal
 * n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR1_ICR14      (28)      //!< Bit position for GPIO_ICR1_ICR14.
#define BM_GPIO_ICR1_ICR14      (0x30000000)  //!< Bit mask for GPIO_ICR1_ICR14.

//! @brief Get value of GPIO_ICR1_ICR14 from a register value.
#define BG_GPIO_ICR1_ICR14(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR1_ICR14) >> BP_GPIO_ICR1_ICR14)

//! @brief Format value for bitfield GPIO_ICR1_ICR14.
#define BF_GPIO_ICR1_ICR14(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR1_ICR14) & BM_GPIO_ICR1_ICR14)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR14 field to a new value.
#define BW_GPIO_ICR1_ICR14(x, v)   (HW_GPIO_ICR1_WR(x, (HW_GPIO_ICR1_RD(x) & ~BM_GPIO_ICR1_ICR14) | BF_GPIO_ICR1_ICR14(v)))
#endif


/* --- Register HW_GPIO_ICR1, field ICR15[31:30] (RW)
 *
 * Interrupt configuration 1 fields. This register controls the active condition of the interrupt
 * function for lines 15 to 0. Settings: Bits ICRn[1:0] determine the interrupt condition for signal
 * n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR1_ICR15      (30)      //!< Bit position for GPIO_ICR1_ICR15.
#define BM_GPIO_ICR1_ICR15      (0xc0000000)  //!< Bit mask for GPIO_ICR1_ICR15.

//! @brief Get value of GPIO_ICR1_ICR15 from a register value.
#define BG_GPIO_ICR1_ICR15(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR1_ICR15) >> BP_GPIO_ICR1_ICR15)

//! @brief Format value for bitfield GPIO_ICR1_ICR15.
#define BF_GPIO_ICR1_ICR15(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR1_ICR15) & BM_GPIO_ICR1_ICR15)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR15 field to a new value.
#define BW_GPIO_ICR1_ICR15(x, v)   (HW_GPIO_ICR1_WR(x, (HW_GPIO_ICR1_RD(x) & ~BM_GPIO_ICR1_ICR15) | BF_GPIO_ICR1_ICR15(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_GPIO_ICR2 - GPIO interrupt configuration register2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPIO_ICR2 - GPIO interrupt configuration register2 (RW)
 *
 * Reset value: 0x00000000
 *
 * GPIO_ICR2 contains 16 two-bit fields, where each field specifies the interrupt configuration for
 * a different input signal.
 */
typedef union _hw_gpio_icr2
{
    reg32_t U;
    struct _hw_gpio_icr2_bitfields
    {
        unsigned ICR16 : 2; //!< [1:0] Interrupt configuration 2 fields.
        unsigned ICR17 : 2; //!< [3:2] Interrupt configuration 2 fields.
        unsigned ICR18 : 2; //!< [5:4] Interrupt configuration 2 fields.
        unsigned ICR19 : 2; //!< [7:6] Interrupt configuration 2 fields.
        unsigned ICR20 : 2; //!< [9:8] Interrupt configuration 2 fields.
        unsigned ICR21 : 2; //!< [11:10] Interrupt configuration 2 fields.
        unsigned ICR22 : 2; //!< [13:12] Interrupt configuration 2 fields.
        unsigned ICR23 : 2; //!< [15:14] Interrupt configuration 2 fields.
        unsigned ICR24 : 2; //!< [17:16] Interrupt configuration 2 fields.
        unsigned ICR25 : 2; //!< [19:18] Interrupt configuration 2 fields.
        unsigned ICR26 : 2; //!< [21:20] Interrupt configuration 2 fields.
        unsigned ICR27 : 2; //!< [23:22] Interrupt configuration 2 fields.
        unsigned ICR28 : 2; //!< [25:24] Interrupt configuration 2 fields.
        unsigned ICR29 : 2; //!< [27:26] Interrupt configuration 2 fields.
        unsigned ICR30 : 2; //!< [29:28] Interrupt configuration 2 fields.
        unsigned ICR31 : 2; //!< [31:30] Interrupt configuration 2 fields.
    } B;
} hw_gpio_icr2_t;
#endif

/*
 * constants & macros for entire multi-block GPIO_ICR2 register
 */
#define HW_GPIO_ICR2_ADDR(x)      (REGS_GPIO_BASE(x) + 0x10)

#ifndef __LANGUAGE_ASM__
#define HW_GPIO_ICR2(x)           (*(volatile hw_gpio_icr2_t *) HW_GPIO_ICR2_ADDR(x))
#define HW_GPIO_ICR2_RD(x)        (HW_GPIO_ICR2(x).U)
#define HW_GPIO_ICR2_WR(x, v)     (HW_GPIO_ICR2(x).U = (v))
#define HW_GPIO_ICR2_SET(x, v)    (HW_GPIO_ICR2_WR(x, HW_GPIO_ICR2_RD(x) |  (v)))
#define HW_GPIO_ICR2_CLR(x, v)    (HW_GPIO_ICR2_WR(x, HW_GPIO_ICR2_RD(x) & ~(v)))
#define HW_GPIO_ICR2_TOG(x, v)    (HW_GPIO_ICR2_WR(x, HW_GPIO_ICR2_RD(x) ^  (v)))
#endif

/*
 * constants & macros for individual GPIO_ICR2 bitfields
 */

/* --- Register HW_GPIO_ICR2, field ICR16[1:0] (RW)
 *
 * Interrupt configuration 2 fields. This register controls the active condition of the interrupt
 * function for lines 31 to 16. Settings: Bits ICRn[1:0] determine the interrupt condition for
 * signal n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR2_ICR16      (0)      //!< Bit position for GPIO_ICR2_ICR16.
#define BM_GPIO_ICR2_ICR16      (0x00000003)  //!< Bit mask for GPIO_ICR2_ICR16.

//! @brief Get value of GPIO_ICR2_ICR16 from a register value.
#define BG_GPIO_ICR2_ICR16(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR2_ICR16) >> BP_GPIO_ICR2_ICR16)

//! @brief Format value for bitfield GPIO_ICR2_ICR16.
#define BF_GPIO_ICR2_ICR16(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR2_ICR16) & BM_GPIO_ICR2_ICR16)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR16 field to a new value.
#define BW_GPIO_ICR2_ICR16(x, v)   (HW_GPIO_ICR2_WR(x, (HW_GPIO_ICR2_RD(x) & ~BM_GPIO_ICR2_ICR16) | BF_GPIO_ICR2_ICR16(v)))
#endif


/* --- Register HW_GPIO_ICR2, field ICR17[3:2] (RW)
 *
 * Interrupt configuration 2 fields. This register controls the active condition of the interrupt
 * function for lines 31 to 16. Settings: Bits ICRn[1:0] determine the interrupt condition for
 * signal n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR2_ICR17      (2)      //!< Bit position for GPIO_ICR2_ICR17.
#define BM_GPIO_ICR2_ICR17      (0x0000000c)  //!< Bit mask for GPIO_ICR2_ICR17.

//! @brief Get value of GPIO_ICR2_ICR17 from a register value.
#define BG_GPIO_ICR2_ICR17(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR2_ICR17) >> BP_GPIO_ICR2_ICR17)

//! @brief Format value for bitfield GPIO_ICR2_ICR17.
#define BF_GPIO_ICR2_ICR17(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR2_ICR17) & BM_GPIO_ICR2_ICR17)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR17 field to a new value.
#define BW_GPIO_ICR2_ICR17(x, v)   (HW_GPIO_ICR2_WR(x, (HW_GPIO_ICR2_RD(x) & ~BM_GPIO_ICR2_ICR17) | BF_GPIO_ICR2_ICR17(v)))
#endif


/* --- Register HW_GPIO_ICR2, field ICR18[5:4] (RW)
 *
 * Interrupt configuration 2 fields. This register controls the active condition of the interrupt
 * function for lines 31 to 16. Settings: Bits ICRn[1:0] determine the interrupt condition for
 * signal n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR2_ICR18      (4)      //!< Bit position for GPIO_ICR2_ICR18.
#define BM_GPIO_ICR2_ICR18      (0x00000030)  //!< Bit mask for GPIO_ICR2_ICR18.

//! @brief Get value of GPIO_ICR2_ICR18 from a register value.
#define BG_GPIO_ICR2_ICR18(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR2_ICR18) >> BP_GPIO_ICR2_ICR18)

//! @brief Format value for bitfield GPIO_ICR2_ICR18.
#define BF_GPIO_ICR2_ICR18(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR2_ICR18) & BM_GPIO_ICR2_ICR18)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR18 field to a new value.
#define BW_GPIO_ICR2_ICR18(x, v)   (HW_GPIO_ICR2_WR(x, (HW_GPIO_ICR2_RD(x) & ~BM_GPIO_ICR2_ICR18) | BF_GPIO_ICR2_ICR18(v)))
#endif


/* --- Register HW_GPIO_ICR2, field ICR19[7:6] (RW)
 *
 * Interrupt configuration 2 fields. This register controls the active condition of the interrupt
 * function for lines 31 to 16. Settings: Bits ICRn[1:0] determine the interrupt condition for
 * signal n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR2_ICR19      (6)      //!< Bit position for GPIO_ICR2_ICR19.
#define BM_GPIO_ICR2_ICR19      (0x000000c0)  //!< Bit mask for GPIO_ICR2_ICR19.

//! @brief Get value of GPIO_ICR2_ICR19 from a register value.
#define BG_GPIO_ICR2_ICR19(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR2_ICR19) >> BP_GPIO_ICR2_ICR19)

//! @brief Format value for bitfield GPIO_ICR2_ICR19.
#define BF_GPIO_ICR2_ICR19(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR2_ICR19) & BM_GPIO_ICR2_ICR19)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR19 field to a new value.
#define BW_GPIO_ICR2_ICR19(x, v)   (HW_GPIO_ICR2_WR(x, (HW_GPIO_ICR2_RD(x) & ~BM_GPIO_ICR2_ICR19) | BF_GPIO_ICR2_ICR19(v)))
#endif


/* --- Register HW_GPIO_ICR2, field ICR20[9:8] (RW)
 *
 * Interrupt configuration 2 fields. This register controls the active condition of the interrupt
 * function for lines 31 to 16. Settings: Bits ICRn[1:0] determine the interrupt condition for
 * signal n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR2_ICR20      (8)      //!< Bit position for GPIO_ICR2_ICR20.
#define BM_GPIO_ICR2_ICR20      (0x00000300)  //!< Bit mask for GPIO_ICR2_ICR20.

//! @brief Get value of GPIO_ICR2_ICR20 from a register value.
#define BG_GPIO_ICR2_ICR20(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR2_ICR20) >> BP_GPIO_ICR2_ICR20)

//! @brief Format value for bitfield GPIO_ICR2_ICR20.
#define BF_GPIO_ICR2_ICR20(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR2_ICR20) & BM_GPIO_ICR2_ICR20)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR20 field to a new value.
#define BW_GPIO_ICR2_ICR20(x, v)   (HW_GPIO_ICR2_WR(x, (HW_GPIO_ICR2_RD(x) & ~BM_GPIO_ICR2_ICR20) | BF_GPIO_ICR2_ICR20(v)))
#endif


/* --- Register HW_GPIO_ICR2, field ICR21[11:10] (RW)
 *
 * Interrupt configuration 2 fields. This register controls the active condition of the interrupt
 * function for lines 31 to 16. Settings: Bits ICRn[1:0] determine the interrupt condition for
 * signal n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR2_ICR21      (10)      //!< Bit position for GPIO_ICR2_ICR21.
#define BM_GPIO_ICR2_ICR21      (0x00000c00)  //!< Bit mask for GPIO_ICR2_ICR21.

//! @brief Get value of GPIO_ICR2_ICR21 from a register value.
#define BG_GPIO_ICR2_ICR21(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR2_ICR21) >> BP_GPIO_ICR2_ICR21)

//! @brief Format value for bitfield GPIO_ICR2_ICR21.
#define BF_GPIO_ICR2_ICR21(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR2_ICR21) & BM_GPIO_ICR2_ICR21)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR21 field to a new value.
#define BW_GPIO_ICR2_ICR21(x, v)   (HW_GPIO_ICR2_WR(x, (HW_GPIO_ICR2_RD(x) & ~BM_GPIO_ICR2_ICR21) | BF_GPIO_ICR2_ICR21(v)))
#endif


/* --- Register HW_GPIO_ICR2, field ICR22[13:12] (RW)
 *
 * Interrupt configuration 2 fields. This register controls the active condition of the interrupt
 * function for lines 31 to 16. Settings: Bits ICRn[1:0] determine the interrupt condition for
 * signal n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR2_ICR22      (12)      //!< Bit position for GPIO_ICR2_ICR22.
#define BM_GPIO_ICR2_ICR22      (0x00003000)  //!< Bit mask for GPIO_ICR2_ICR22.

//! @brief Get value of GPIO_ICR2_ICR22 from a register value.
#define BG_GPIO_ICR2_ICR22(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR2_ICR22) >> BP_GPIO_ICR2_ICR22)

//! @brief Format value for bitfield GPIO_ICR2_ICR22.
#define BF_GPIO_ICR2_ICR22(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR2_ICR22) & BM_GPIO_ICR2_ICR22)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR22 field to a new value.
#define BW_GPIO_ICR2_ICR22(x, v)   (HW_GPIO_ICR2_WR(x, (HW_GPIO_ICR2_RD(x) & ~BM_GPIO_ICR2_ICR22) | BF_GPIO_ICR2_ICR22(v)))
#endif


/* --- Register HW_GPIO_ICR2, field ICR23[15:14] (RW)
 *
 * Interrupt configuration 2 fields. This register controls the active condition of the interrupt
 * function for lines 31 to 16. Settings: Bits ICRn[1:0] determine the interrupt condition for
 * signal n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR2_ICR23      (14)      //!< Bit position for GPIO_ICR2_ICR23.
#define BM_GPIO_ICR2_ICR23      (0x0000c000)  //!< Bit mask for GPIO_ICR2_ICR23.

//! @brief Get value of GPIO_ICR2_ICR23 from a register value.
#define BG_GPIO_ICR2_ICR23(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR2_ICR23) >> BP_GPIO_ICR2_ICR23)

//! @brief Format value for bitfield GPIO_ICR2_ICR23.
#define BF_GPIO_ICR2_ICR23(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR2_ICR23) & BM_GPIO_ICR2_ICR23)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR23 field to a new value.
#define BW_GPIO_ICR2_ICR23(x, v)   (HW_GPIO_ICR2_WR(x, (HW_GPIO_ICR2_RD(x) & ~BM_GPIO_ICR2_ICR23) | BF_GPIO_ICR2_ICR23(v)))
#endif


/* --- Register HW_GPIO_ICR2, field ICR24[17:16] (RW)
 *
 * Interrupt configuration 2 fields. This register controls the active condition of the interrupt
 * function for lines 31 to 16. Settings: Bits ICRn[1:0] determine the interrupt condition for
 * signal n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR2_ICR24      (16)      //!< Bit position for GPIO_ICR2_ICR24.
#define BM_GPIO_ICR2_ICR24      (0x00030000)  //!< Bit mask for GPIO_ICR2_ICR24.

//! @brief Get value of GPIO_ICR2_ICR24 from a register value.
#define BG_GPIO_ICR2_ICR24(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR2_ICR24) >> BP_GPIO_ICR2_ICR24)

//! @brief Format value for bitfield GPIO_ICR2_ICR24.
#define BF_GPIO_ICR2_ICR24(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR2_ICR24) & BM_GPIO_ICR2_ICR24)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR24 field to a new value.
#define BW_GPIO_ICR2_ICR24(x, v)   (HW_GPIO_ICR2_WR(x, (HW_GPIO_ICR2_RD(x) & ~BM_GPIO_ICR2_ICR24) | BF_GPIO_ICR2_ICR24(v)))
#endif


/* --- Register HW_GPIO_ICR2, field ICR25[19:18] (RW)
 *
 * Interrupt configuration 2 fields. This register controls the active condition of the interrupt
 * function for lines 31 to 16. Settings: Bits ICRn[1:0] determine the interrupt condition for
 * signal n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR2_ICR25      (18)      //!< Bit position for GPIO_ICR2_ICR25.
#define BM_GPIO_ICR2_ICR25      (0x000c0000)  //!< Bit mask for GPIO_ICR2_ICR25.

//! @brief Get value of GPIO_ICR2_ICR25 from a register value.
#define BG_GPIO_ICR2_ICR25(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR2_ICR25) >> BP_GPIO_ICR2_ICR25)

//! @brief Format value for bitfield GPIO_ICR2_ICR25.
#define BF_GPIO_ICR2_ICR25(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR2_ICR25) & BM_GPIO_ICR2_ICR25)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR25 field to a new value.
#define BW_GPIO_ICR2_ICR25(x, v)   (HW_GPIO_ICR2_WR(x, (HW_GPIO_ICR2_RD(x) & ~BM_GPIO_ICR2_ICR25) | BF_GPIO_ICR2_ICR25(v)))
#endif


/* --- Register HW_GPIO_ICR2, field ICR26[21:20] (RW)
 *
 * Interrupt configuration 2 fields. This register controls the active condition of the interrupt
 * function for lines 31 to 16. Settings: Bits ICRn[1:0] determine the interrupt condition for
 * signal n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR2_ICR26      (20)      //!< Bit position for GPIO_ICR2_ICR26.
#define BM_GPIO_ICR2_ICR26      (0x00300000)  //!< Bit mask for GPIO_ICR2_ICR26.

//! @brief Get value of GPIO_ICR2_ICR26 from a register value.
#define BG_GPIO_ICR2_ICR26(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR2_ICR26) >> BP_GPIO_ICR2_ICR26)

//! @brief Format value for bitfield GPIO_ICR2_ICR26.
#define BF_GPIO_ICR2_ICR26(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR2_ICR26) & BM_GPIO_ICR2_ICR26)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR26 field to a new value.
#define BW_GPIO_ICR2_ICR26(x, v)   (HW_GPIO_ICR2_WR(x, (HW_GPIO_ICR2_RD(x) & ~BM_GPIO_ICR2_ICR26) | BF_GPIO_ICR2_ICR26(v)))
#endif


/* --- Register HW_GPIO_ICR2, field ICR27[23:22] (RW)
 *
 * Interrupt configuration 2 fields. This register controls the active condition of the interrupt
 * function for lines 31 to 16. Settings: Bits ICRn[1:0] determine the interrupt condition for
 * signal n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR2_ICR27      (22)      //!< Bit position for GPIO_ICR2_ICR27.
#define BM_GPIO_ICR2_ICR27      (0x00c00000)  //!< Bit mask for GPIO_ICR2_ICR27.

//! @brief Get value of GPIO_ICR2_ICR27 from a register value.
#define BG_GPIO_ICR2_ICR27(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR2_ICR27) >> BP_GPIO_ICR2_ICR27)

//! @brief Format value for bitfield GPIO_ICR2_ICR27.
#define BF_GPIO_ICR2_ICR27(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR2_ICR27) & BM_GPIO_ICR2_ICR27)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR27 field to a new value.
#define BW_GPIO_ICR2_ICR27(x, v)   (HW_GPIO_ICR2_WR(x, (HW_GPIO_ICR2_RD(x) & ~BM_GPIO_ICR2_ICR27) | BF_GPIO_ICR2_ICR27(v)))
#endif


/* --- Register HW_GPIO_ICR2, field ICR28[25:24] (RW)
 *
 * Interrupt configuration 2 fields. This register controls the active condition of the interrupt
 * function for lines 31 to 16. Settings: Bits ICRn[1:0] determine the interrupt condition for
 * signal n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR2_ICR28      (24)      //!< Bit position for GPIO_ICR2_ICR28.
#define BM_GPIO_ICR2_ICR28      (0x03000000)  //!< Bit mask for GPIO_ICR2_ICR28.

//! @brief Get value of GPIO_ICR2_ICR28 from a register value.
#define BG_GPIO_ICR2_ICR28(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR2_ICR28) >> BP_GPIO_ICR2_ICR28)

//! @brief Format value for bitfield GPIO_ICR2_ICR28.
#define BF_GPIO_ICR2_ICR28(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR2_ICR28) & BM_GPIO_ICR2_ICR28)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR28 field to a new value.
#define BW_GPIO_ICR2_ICR28(x, v)   (HW_GPIO_ICR2_WR(x, (HW_GPIO_ICR2_RD(x) & ~BM_GPIO_ICR2_ICR28) | BF_GPIO_ICR2_ICR28(v)))
#endif


/* --- Register HW_GPIO_ICR2, field ICR29[27:26] (RW)
 *
 * Interrupt configuration 2 fields. This register controls the active condition of the interrupt
 * function for lines 31 to 16. Settings: Bits ICRn[1:0] determine the interrupt condition for
 * signal n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR2_ICR29      (26)      //!< Bit position for GPIO_ICR2_ICR29.
#define BM_GPIO_ICR2_ICR29      (0x0c000000)  //!< Bit mask for GPIO_ICR2_ICR29.

//! @brief Get value of GPIO_ICR2_ICR29 from a register value.
#define BG_GPIO_ICR2_ICR29(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR2_ICR29) >> BP_GPIO_ICR2_ICR29)

//! @brief Format value for bitfield GPIO_ICR2_ICR29.
#define BF_GPIO_ICR2_ICR29(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR2_ICR29) & BM_GPIO_ICR2_ICR29)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR29 field to a new value.
#define BW_GPIO_ICR2_ICR29(x, v)   (HW_GPIO_ICR2_WR(x, (HW_GPIO_ICR2_RD(x) & ~BM_GPIO_ICR2_ICR29) | BF_GPIO_ICR2_ICR29(v)))
#endif


/* --- Register HW_GPIO_ICR2, field ICR30[29:28] (RW)
 *
 * Interrupt configuration 2 fields. This register controls the active condition of the interrupt
 * function for lines 31 to 16. Settings: Bits ICRn[1:0] determine the interrupt condition for
 * signal n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR2_ICR30      (28)      //!< Bit position for GPIO_ICR2_ICR30.
#define BM_GPIO_ICR2_ICR30      (0x30000000)  //!< Bit mask for GPIO_ICR2_ICR30.

//! @brief Get value of GPIO_ICR2_ICR30 from a register value.
#define BG_GPIO_ICR2_ICR30(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR2_ICR30) >> BP_GPIO_ICR2_ICR30)

//! @brief Format value for bitfield GPIO_ICR2_ICR30.
#define BF_GPIO_ICR2_ICR30(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR2_ICR30) & BM_GPIO_ICR2_ICR30)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR30 field to a new value.
#define BW_GPIO_ICR2_ICR30(x, v)   (HW_GPIO_ICR2_WR(x, (HW_GPIO_ICR2_RD(x) & ~BM_GPIO_ICR2_ICR30) | BF_GPIO_ICR2_ICR30(v)))
#endif


/* --- Register HW_GPIO_ICR2, field ICR31[31:30] (RW)
 *
 * Interrupt configuration 2 fields. This register controls the active condition of the interrupt
 * function for lines 31 to 16. Settings: Bits ICRn[1:0] determine the interrupt condition for
 * signal n as follows:
 *
 * Values:
 * 00 - Interrupt n is low-level sensitive.
 * 01 - Interrupt n is high-level sensitive.
 * 10 - Interrupt n is rising-edge sensitive.
 * 11 - Interrupt n is falling-edge sensitive.
 */

#define BP_GPIO_ICR2_ICR31      (30)      //!< Bit position for GPIO_ICR2_ICR31.
#define BM_GPIO_ICR2_ICR31      (0xc0000000)  //!< Bit mask for GPIO_ICR2_ICR31.

//! @brief Get value of GPIO_ICR2_ICR31 from a register value.
#define BG_GPIO_ICR2_ICR31(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ICR2_ICR31) >> BP_GPIO_ICR2_ICR31)

//! @brief Format value for bitfield GPIO_ICR2_ICR31.
#define BF_GPIO_ICR2_ICR31(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ICR2_ICR31) & BM_GPIO_ICR2_ICR31)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ICR31 field to a new value.
#define BW_GPIO_ICR2_ICR31(x, v)   (HW_GPIO_ICR2_WR(x, (HW_GPIO_ICR2_RD(x) & ~BM_GPIO_ICR2_ICR31) | BF_GPIO_ICR2_ICR31(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_GPIO_IMR - GPIO interrupt mask register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPIO_IMR - GPIO interrupt mask register (RW)
 *
 * Reset value: 0x00000000
 *
 * GPIO_IMR contains masking bits for each interrupt line.
 */
typedef union _hw_gpio_imr
{
    reg32_t U;
    struct _hw_gpio_imr_bitfields
    {
        unsigned IMR : 32; //!< [31:0] Interrupt Mask bits.
    } B;
} hw_gpio_imr_t;
#endif

/*
 * constants & macros for entire multi-block GPIO_IMR register
 */
#define HW_GPIO_IMR_ADDR(x)      (REGS_GPIO_BASE(x) + 0x14)

#ifndef __LANGUAGE_ASM__
#define HW_GPIO_IMR(x)           (*(volatile hw_gpio_imr_t *) HW_GPIO_IMR_ADDR(x))
#define HW_GPIO_IMR_RD(x)        (HW_GPIO_IMR(x).U)
#define HW_GPIO_IMR_WR(x, v)     (HW_GPIO_IMR(x).U = (v))
#define HW_GPIO_IMR_SET(x, v)    (HW_GPIO_IMR_WR(x, HW_GPIO_IMR_RD(x) |  (v)))
#define HW_GPIO_IMR_CLR(x, v)    (HW_GPIO_IMR_WR(x, HW_GPIO_IMR_RD(x) & ~(v)))
#define HW_GPIO_IMR_TOG(x, v)    (HW_GPIO_IMR_WR(x, HW_GPIO_IMR_RD(x) ^  (v)))
#endif

/*
 * constants & macros for individual GPIO_IMR bitfields
 */

/* --- Register HW_GPIO_IMR, field IMR[31:0] (RW)
 *
 * Interrupt Mask bits. This register is used to enable or disable the interrupt function on each of
 * the 32 GPIO signals. Settings: Bit IMR[n] (n=0...31) controls interrupt n as follows:
 *
 * Values:
 * 0 - Interrupt n is disabled.
 * 1 - Interrupt n is enabled.
 */

#define BP_GPIO_IMR_IMR      (0)      //!< Bit position for GPIO_IMR_IMR.
#define BM_GPIO_IMR_IMR      (0xffffffff)  //!< Bit mask for GPIO_IMR_IMR.

//! @brief Get value of GPIO_IMR_IMR from a register value.
#define BG_GPIO_IMR_IMR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_IMR_IMR) >> BP_GPIO_IMR_IMR)

//! @brief Format value for bitfield GPIO_IMR_IMR.
#define BF_GPIO_IMR_IMR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_IMR_IMR) & BM_GPIO_IMR_IMR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IMR field to a new value.
#define BW_GPIO_IMR_IMR(x, v)   (HW_GPIO_IMR_WR(x, (HW_GPIO_IMR_RD(x) & ~BM_GPIO_IMR_IMR) | BF_GPIO_IMR_IMR(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_GPIO_ISR - GPIO interrupt status register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPIO_ISR - GPIO interrupt status register (W1C)
 *
 * Reset value: 0x00000000
 *
 * The GPIO_ISR functions as an interrupt status indicator. Each bit indicates whether an interrupt
 * condition has been met for the corresponding input signal. When an interrupt condition is met (as
 * determined by the corresponding interrupt condition register field), the corresponding bit in
 * this register is set. Two wait states are required in read access for synchronization. One wait
 * state is required for reset.
 */
typedef union _hw_gpio_isr
{
    reg32_t U;
    struct _hw_gpio_isr_bitfields
    {
        unsigned ISR : 32; //!< [31:0] Interrupt status bits - Bit n of this register is asserted (active high) when the active condition (as determined by the corresponding ICR bit) is detected on the GPIO input and is waiting for service.
    } B;
} hw_gpio_isr_t;
#endif

/*
 * constants & macros for entire multi-block GPIO_ISR register
 */
#define HW_GPIO_ISR_ADDR(x)      (REGS_GPIO_BASE(x) + 0x18)

#ifndef __LANGUAGE_ASM__
#define HW_GPIO_ISR(x)           (*(volatile hw_gpio_isr_t *) HW_GPIO_ISR_ADDR(x))
#define HW_GPIO_ISR_RD(x)        (HW_GPIO_ISR(x).U)
#define HW_GPIO_ISR_WR(x, v)     (HW_GPIO_ISR(x).U = (v))
#define HW_GPIO_ISR_SET(x, v)    (HW_GPIO_ISR_WR(x, HW_GPIO_ISR_RD(x) |  (v)))
#define HW_GPIO_ISR_CLR(x, v)    (HW_GPIO_ISR_WR(x, HW_GPIO_ISR_RD(x) & ~(v)))
#define HW_GPIO_ISR_TOG(x, v)    (HW_GPIO_ISR_WR(x, HW_GPIO_ISR_RD(x) ^  (v)))
#endif

/*
 * constants & macros for individual GPIO_ISR bitfields
 */

/* --- Register HW_GPIO_ISR, field ISR[31:0] (W1C)
 *
 * Interrupt status bits - Bit n of this register is asserted (active high) when the active
 * condition (as determined by the corresponding ICR bit) is detected on the GPIO input and is
 * waiting for service. The value of this register is independent of the value in GPIO_IMR. When the
 * active condition has been detected, the corresponding bit remains set until cleared by software.
 * Status flags are cleared by writing a 1 to the corresponding bit position.
 */

#define BP_GPIO_ISR_ISR      (0)      //!< Bit position for GPIO_ISR_ISR.
#define BM_GPIO_ISR_ISR      (0xffffffff)  //!< Bit mask for GPIO_ISR_ISR.

//! @brief Get value of GPIO_ISR_ISR from a register value.
#define BG_GPIO_ISR_ISR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_ISR_ISR) >> BP_GPIO_ISR_ISR)

//! @brief Format value for bitfield GPIO_ISR_ISR.
#define BF_GPIO_ISR_ISR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_ISR_ISR) & BM_GPIO_ISR_ISR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ISR field to a new value.
#define BW_GPIO_ISR_ISR(x, v)   (HW_GPIO_ISR_WR(x, (HW_GPIO_ISR_RD(x) & ~BM_GPIO_ISR_ISR) | BF_GPIO_ISR_ISR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_GPIO_EDGE_SEL - GPIO edge select register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_GPIO_EDGE_SEL - GPIO edge select register (RW)
 *
 * Reset value: 0x00000000
 *
 * GPIO_EDGE_SEL may be used to override the ICR registers' configuration. If the GPIO_EDGE_SEL bit
 * is set, then a rising edge or falling edge in the corresponding signal generates an interrupt.
 * This register provides backward compatibility. On reset all bits are cleared (ICR is not
 * overridden).
 */
typedef union _hw_gpio_edge_sel
{
    reg32_t U;
    struct _hw_gpio_edge_sel_bitfields
    {
        unsigned GPIO_EDGE_SEL : 32; //!< [31:0] Edge select.
    } B;
} hw_gpio_edge_sel_t;
#endif

/*
 * constants & macros for entire multi-block GPIO_EDGE_SEL register
 */
#define HW_GPIO_EDGE_SEL_ADDR(x)      (REGS_GPIO_BASE(x) + 0x1c)

#ifndef __LANGUAGE_ASM__
#define HW_GPIO_EDGE_SEL(x)           (*(volatile hw_gpio_edge_sel_t *) HW_GPIO_EDGE_SEL_ADDR(x))
#define HW_GPIO_EDGE_SEL_RD(x)        (HW_GPIO_EDGE_SEL(x).U)
#define HW_GPIO_EDGE_SEL_WR(x, v)     (HW_GPIO_EDGE_SEL(x).U = (v))
#define HW_GPIO_EDGE_SEL_SET(x, v)    (HW_GPIO_EDGE_SEL_WR(x, HW_GPIO_EDGE_SEL_RD(x) |  (v)))
#define HW_GPIO_EDGE_SEL_CLR(x, v)    (HW_GPIO_EDGE_SEL_WR(x, HW_GPIO_EDGE_SEL_RD(x) & ~(v)))
#define HW_GPIO_EDGE_SEL_TOG(x, v)    (HW_GPIO_EDGE_SEL_WR(x, HW_GPIO_EDGE_SEL_RD(x) ^  (v)))
#endif

/*
 * constants & macros for individual GPIO_EDGE_SEL bitfields
 */

/* --- Register HW_GPIO_EDGE_SEL, field GPIO_EDGE_SEL[31:0] (RW)
 *
 * Edge select. When GPIO_EDGE_SEL[ n ] is set, the GPIO disregards the ICR[ n ] setting, and
 * detects any edge on the corresponding input signal.
 */

#define BP_GPIO_EDGE_SEL_GPIO_EDGE_SEL      (0)      //!< Bit position for GPIO_EDGE_SEL_GPIO_EDGE_SEL.
#define BM_GPIO_EDGE_SEL_GPIO_EDGE_SEL      (0xffffffff)  //!< Bit mask for GPIO_EDGE_SEL_GPIO_EDGE_SEL.

//! @brief Get value of GPIO_EDGE_SEL_GPIO_EDGE_SEL from a register value.
#define BG_GPIO_EDGE_SEL_GPIO_EDGE_SEL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_GPIO_EDGE_SEL_GPIO_EDGE_SEL) >> BP_GPIO_EDGE_SEL_GPIO_EDGE_SEL)

//! @brief Format value for bitfield GPIO_EDGE_SEL_GPIO_EDGE_SEL.
#define BF_GPIO_EDGE_SEL_GPIO_EDGE_SEL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_GPIO_EDGE_SEL_GPIO_EDGE_SEL) & BM_GPIO_EDGE_SEL_GPIO_EDGE_SEL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPIO_EDGE_SEL field to a new value.
#define BW_GPIO_EDGE_SEL_GPIO_EDGE_SEL(x, v)   (HW_GPIO_EDGE_SEL_WR(x, (HW_GPIO_EDGE_SEL_RD(x) & ~BM_GPIO_EDGE_SEL_GPIO_EDGE_SEL) | BF_GPIO_EDGE_SEL_GPIO_EDGE_SEL(v)))
#endif


/*!
 * @brief All GPIO module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_gpio
{
    volatile hw_gpio_dr_t DR; //!< GPIO data register
    volatile hw_gpio_gdir_t GDIR; //!< GPIO direction register
    volatile hw_gpio_psr_t PSR; //!< GPIO pad status register
    volatile hw_gpio_icr1_t ICR1; //!< GPIO interrupt configuration register1
    volatile hw_gpio_icr2_t ICR2; //!< GPIO interrupt configuration register2
    volatile hw_gpio_imr_t IMR; //!< GPIO interrupt mask register
    volatile hw_gpio_isr_t ISR; //!< GPIO interrupt status register
    volatile hw_gpio_edge_sel_t EDGE_SEL; //!< GPIO edge select register
} hw_gpio_t;
#pragma pack()

//! @brief Macro to access all GPIO registers.
//! @param x GPIO instance number.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_GPIO(0)</code>.
#define HW_GPIO(x)     (*(volatile hw_gpio_t *) REGS_GPIO_BASE(x))

#endif


#endif // __HW_GPIO_REGISTERS_H__
