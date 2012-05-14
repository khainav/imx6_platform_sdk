/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef __HW_ECSPI_REGISTERS_H__
#define __HW_ECSPI_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SDL ECSPI registers defined in this header file.
 *
 * - HW_ECSPI_RXDATA - Receive Data Register
 * - HW_ECSPI_TXDATA - Transmit Data Register
 * - HW_ECSPI_CONREG - Control Register
 * - HW_ECSPI_CONFIGREG - Config Register
 * - HW_ECSPI_INTREG - Interrupt Control Register
 * - HW_ECSPI_DMAREG - DMA Control Register
 * - HW_ECSPI_STATREG - Status Register
 * - HW_ECSPI_PERIODREG - Sample Period Control Register
 * - HW_ECSPI_TESTREG - Test Control Register
 * - HW_ECSPI_MSGDATA - Message Data Register
 *
 * - hw_ecspi_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_ECSPI_BASE
#define HW_ECSPI_INSTANCE_COUNT (4) //!< Number of instances of the ECSPI module.
#define HW_ECSPI1 (1) //!< Instance number for ECSPI1.
#define HW_ECSPI2 (2) //!< Instance number for ECSPI2.
#define HW_ECSPI3 (3) //!< Instance number for ECSPI3.
#define HW_ECSPI4 (4) //!< Instance number for ECSPI4.

#define REGS_ECSPI1_BASE (0x02008000) //!< Base address for ECSPI instance number 1.
#define REGS_ECSPI2_BASE (0x0200c000) //!< Base address for ECSPI instance number 2.
#define REGS_ECSPI3_BASE (0x02010000) //!< Base address for ECSPI instance number 3.
#define REGS_ECSPI4_BASE (0x02014000) //!< Base address for ECSPI instance number 4.

//! @brief Get the base address of ECSPI by instance number.
//! @param x ECSPI instance number, from 1 through 4.
#define REGS_ECSPI_BASE(x) ( (x) == HW_ECSPI1 ? REGS_ECSPI1_BASE : (x) == HW_ECSPI2 ? REGS_ECSPI2_BASE : (x) == HW_ECSPI3 ? REGS_ECSPI3_BASE : (x) == HW_ECSPI4 ? REGS_ECSPI4_BASE : 0x00d00000)

//! @brief Get the instance number given a base address.
//! @param b Base address for an instance of ECSPI.
#define REGS_ECSPI_INSTANCE(b) ( (b) == REGS_ECSPI1_BASE ? HW_ECSPI1 : (b) == REGS_ECSPI2_BASE ? HW_ECSPI2 : (b) == REGS_ECSPI3_BASE ? HW_ECSPI3 : (b) == REGS_ECSPI4_BASE ? HW_ECSPI4 : 0)
#endif
//@}


//-------------------------------------------------------------------------------------------
// HW_ECSPI_RXDATA - Receive Data Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_ECSPI_RXDATA - Receive Data Register (RO)
 *
 * Reset value: 0x00000000
 *
 * The Receive Data register (ECSPI_RXDATA) is a read-only register that forms the top word of the
 * 64 x 32 receive FIFO. This register holds the data received from an external SPI device during a
 * data transaction. Only word-sized read operations are allowed.
 */
typedef union _hw_ecspi_rxdata
{
    reg32_t U;
    struct _hw_ecspi_rxdata_bitfields
    {
        unsigned ECSPI_RXDATA : 32; //!< [31:0] Receive Data.
    } B;
} hw_ecspi_rxdata_t;
#endif

/*
 * constants & macros for entire multi-block ECSPI_RXDATA register
 */
#define HW_ECSPI_RXDATA_ADDR(x)      (REGS_ECSPI_BASE(x) + 0x0)

#ifndef __LANGUAGE_ASM__
#define HW_ECSPI_RXDATA(x)           (*(volatile hw_ecspi_rxdata_t *) HW_ECSPI_RXDATA_ADDR(x))
#define HW_ECSPI_RXDATA_RD(x)        (HW_ECSPI_RXDATA(x).U)
#endif

/*
 * constants & macros for individual ECSPI_RXDATA bitfields
 */

/* --- Register HW_ECSPI_RXDATA, field ECSPI_RXDATA[31:0] (RO)
 *
 * Receive Data. This register holds the top word of the receive data FIFO. The FIFO is advanced for
 * each read of this register. The data read is undefined when the Receive Data Ready (RR) bit in
 * the Interrupt Control/Status register is cleared. Zeros are read when ECSPI is disabled.
 */

#define BP_ECSPI_RXDATA_ECSPI_RXDATA      (0)      //!< Bit position for ECSPI_RXDATA_ECSPI_RXDATA.
#define BM_ECSPI_RXDATA_ECSPI_RXDATA      (0xffffffff)  //!< Bit mask for ECSPI_RXDATA_ECSPI_RXDATA.

//! @brief Get value of ECSPI_RXDATA_ECSPI_RXDATA from a register value.
#define BG_ECSPI_RXDATA_ECSPI_RXDATA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_RXDATA_ECSPI_RXDATA) >> BP_ECSPI_RXDATA_ECSPI_RXDATA)

//-------------------------------------------------------------------------------------------
// HW_ECSPI_TXDATA - Transmit Data Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_ECSPI_TXDATA - Transmit Data Register (WO)
 *
 * Reset value: 0x00000000
 *
 * The Transmit Data (ECSPI_TXDATA) register is a write-only data register that forms the bottom
 * word of the 64 x 32 TXFIFO. The TXFIFO can be written to as long as it is not full, even when the
 * SPI Exchange bit (XCH) in ECSPI_CONREG is set. This allows software to write to the TXFIFO during
 * a SPI data exchange process. Writes to this register are ignored when the ECSPI is disabled
 * (ECSPI_CONREG[EN] bit is cleared).
 */
typedef union _hw_ecspi_txdata
{
    reg32_t U;
    struct _hw_ecspi_txdata_bitfields
    {
        unsigned ECSPI_TXDATA : 32; //!< [31:0] Transmit Data.
    } B;
} hw_ecspi_txdata_t;
#endif

/*
 * constants & macros for entire multi-block ECSPI_TXDATA register
 */
#define HW_ECSPI_TXDATA_ADDR(x)      (REGS_ECSPI_BASE(x) + 0x4)

#ifndef __LANGUAGE_ASM__
#define HW_ECSPI_TXDATA(x)           (*(volatile hw_ecspi_txdata_t *) HW_ECSPI_TXDATA_ADDR(x))
#define HW_ECSPI_TXDATA_WR(x, v)     (HW_ECSPI_TXDATA(x).U = (v))
#endif

/*
 * constants & macros for individual ECSPI_TXDATA bitfields
 */

/* --- Register HW_ECSPI_TXDATA, field ECSPI_TXDATA[31:0] (WO)
 *
 * Transmit Data. This register holds the top word of data loaded into the FIFO. Data written to
 * this register must be a word operation. The number of bits actually transmitted is determined by
 * the BIT_COUNT field of the corresponding SPI Control register. If this field contains more bits
 * than the number specified by BIT_COUNT, the extra bits are ignored. For example, to transfer 10
 * bits of data, a 32-bit word must be written to this register. Bits 9-0 are shifted out and bits
 * 31-10 are ignored. When the ECSPI is operating in Slave mode, zeros are shifted out when the FIFO
 * is empty. Zeros are read when ECSPI is disabled.
 */

#define BP_ECSPI_TXDATA_ECSPI_TXDATA      (0)      //!< Bit position for ECSPI_TXDATA_ECSPI_TXDATA.
#define BM_ECSPI_TXDATA_ECSPI_TXDATA      (0xffffffff)  //!< Bit mask for ECSPI_TXDATA_ECSPI_TXDATA.

//! @brief Get value of ECSPI_TXDATA_ECSPI_TXDATA from a register value.
#define BG_ECSPI_TXDATA_ECSPI_TXDATA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_TXDATA_ECSPI_TXDATA) >> BP_ECSPI_TXDATA_ECSPI_TXDATA)

//! @brief Format value for bitfield ECSPI_TXDATA_ECSPI_TXDATA.
#define BF_ECSPI_TXDATA_ECSPI_TXDATA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_TXDATA_ECSPI_TXDATA) & BM_ECSPI_TXDATA_ECSPI_TXDATA)

//-------------------------------------------------------------------------------------------
// HW_ECSPI_CONREG - Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_ECSPI_CONREG - Control Register (RW)
 *
 * Reset value: 0x00000000
 *
 * The Control Register (ECSPI_CONREG) allows software to enable the ECSPI , configure its operating
 * modes, specify the divider value, and SPI_RDY control signal, and define the transfer length.
 */
typedef union _hw_ecspi_conreg
{
    reg32_t U;
    struct _hw_ecspi_conreg_bitfields
    {
        unsigned EN : 1; //!< [0] SPI Block Enable Control.
        unsigned HT : 1; //!< [1] Hardware Trigger Enable.
        unsigned XCH : 1; //!< [2] SPI Exchange Bit.
        unsigned SMC : 1; //!< [3] Start Mode Control.
        unsigned CHANNEL_MODE : 4; //!< [7:4] SPI CHANNEL MODE selects the mode for each SPI channel.
        unsigned POST_DIVIDER : 4; //!< [11:8] SPI Post Divider.
        unsigned PRE_DIVIDER : 4; //!< [15:12] SPI Pre Divider.
        unsigned DRCTL : 2; //!< [17:16] SPI Data Ready Control.
        unsigned CHANNEL_SELECT : 2; //!< [19:18] SPI CHANNEL SELECT bits.
        unsigned BURST_LENGTH : 12; //!< [31:20] Burst Length.
    } B;
} hw_ecspi_conreg_t;
#endif

/*
 * constants & macros for entire multi-block ECSPI_CONREG register
 */
#define HW_ECSPI_CONREG_ADDR(x)      (REGS_ECSPI_BASE(x) + 0x8)

#ifndef __LANGUAGE_ASM__
#define HW_ECSPI_CONREG(x)           (*(volatile hw_ecspi_conreg_t *) HW_ECSPI_CONREG_ADDR(x))
#define HW_ECSPI_CONREG_RD(x)        (HW_ECSPI_CONREG(x).U)
#define HW_ECSPI_CONREG_WR(x, v)     (HW_ECSPI_CONREG(x).U = (v))
#define HW_ECSPI_CONREG_SET(x, v)    (HW_ECSPI_CONREG_WR(x, HW_ECSPI_CONREG_RD(x) |  (v)))
#define HW_ECSPI_CONREG_CLR(x, v)    (HW_ECSPI_CONREG_WR(x, HW_ECSPI_CONREG_RD(x) & ~(v)))
#define HW_ECSPI_CONREG_TOG(x, v)    (HW_ECSPI_CONREG_WR(x, HW_ECSPI_CONREG_RD(x) ^  (v)))
#endif

/*
 * constants & macros for individual ECSPI_CONREG bitfields
 */

/* --- Register HW_ECSPI_CONREG, field EN[0] (RW)
 *
 * SPI Block Enable Control. This bit enables the ECSPI. This bit must be set before writing to
 * other registers or initiating an exchange. Writing zero to this bit disables the block and resets
 * the internal logic with the exception of the ECSPI_CONREG. The block's internal clocks are gated
 * off whenever the block is disabled.
 *
 * Values:
 * 0 - Disable the block.
 * 1 - Enable the block.
 */

#define BP_ECSPI_CONREG_EN      (0)      //!< Bit position for ECSPI_CONREG_EN.
#define BM_ECSPI_CONREG_EN      (0x00000001)  //!< Bit mask for ECSPI_CONREG_EN.

//! @brief Get value of ECSPI_CONREG_EN from a register value.
#define BG_ECSPI_CONREG_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONREG_EN) >> BP_ECSPI_CONREG_EN)

//! @brief Format value for bitfield ECSPI_CONREG_EN.
#define BF_ECSPI_CONREG_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONREG_EN) & BM_ECSPI_CONREG_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EN field to a new value.
#define BW_ECSPI_CONREG_EN(x, v)   (HW_ECSPI_CONREG_WR(x, (HW_ECSPI_CONREG_RD(x) & ~BM_ECSPI_CONREG_EN) | BF_ECSPI_CONREG_EN(v)))
#endif


/* --- Register HW_ECSPI_CONREG, field HT[1] (RW)
 *
 * Hardware Trigger Enable. This bit is used in master mode only. It enables hardware trigger (HT)
 * mode.
 *
 * Values:
 * 0 - Disable HT mode.
 * 1 - Enable HT mode.
 */

#define BP_ECSPI_CONREG_HT      (1)      //!< Bit position for ECSPI_CONREG_HT.
#define BM_ECSPI_CONREG_HT      (0x00000002)  //!< Bit mask for ECSPI_CONREG_HT.

//! @brief Get value of ECSPI_CONREG_HT from a register value.
#define BG_ECSPI_CONREG_HT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONREG_HT) >> BP_ECSPI_CONREG_HT)

//! @brief Format value for bitfield ECSPI_CONREG_HT.
#define BF_ECSPI_CONREG_HT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONREG_HT) & BM_ECSPI_CONREG_HT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HT field to a new value.
#define BW_ECSPI_CONREG_HT(x, v)   (HW_ECSPI_CONREG_WR(x, (HW_ECSPI_CONREG_RD(x) & ~BM_ECSPI_CONREG_HT) | BF_ECSPI_CONREG_HT(v)))
#endif


/* --- Register HW_ECSPI_CONREG, field XCH[2] (RW)
 *
 * SPI Exchange Bit. This bit applies only to channels configured in Master mode (CHANNEL MODE = 1).
 * If the Start Mode Control (SMC) bit is cleared, writing a 1 to this bit starts one SPI burst or
 * multiple SPI bursts according to the SPI SS Wave Form Select (SS_CTL). The XCH bit remains set
 * while either the data exchange is in progress, or when the ECSPI is waiting for an active input
 * if SPIRDY is enabled through DRCTL. This bit is cleared automatically when all data in the TXFIFO
 * and the shift register has been shifted out.
 *
 * Values:
 * 0 - Idle.
 * 1 - Initiates exchange (write) or busy (read).
 */

#define BP_ECSPI_CONREG_XCH      (2)      //!< Bit position for ECSPI_CONREG_XCH.
#define BM_ECSPI_CONREG_XCH      (0x00000004)  //!< Bit mask for ECSPI_CONREG_XCH.

//! @brief Get value of ECSPI_CONREG_XCH from a register value.
#define BG_ECSPI_CONREG_XCH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONREG_XCH) >> BP_ECSPI_CONREG_XCH)

//! @brief Format value for bitfield ECSPI_CONREG_XCH.
#define BF_ECSPI_CONREG_XCH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONREG_XCH) & BM_ECSPI_CONREG_XCH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the XCH field to a new value.
#define BW_ECSPI_CONREG_XCH(x, v)   (HW_ECSPI_CONREG_WR(x, (HW_ECSPI_CONREG_RD(x) & ~BM_ECSPI_CONREG_XCH) | BF_ECSPI_CONREG_XCH(v)))
#endif


/* --- Register HW_ECSPI_CONREG, field SMC[3] (RW)
 *
 * Start Mode Control. This bit applies only to channels configured in Master mode (CHANNEL MODE =
 * 1). It controls how the ECSPI starts a SPI burst, either through the SPI exchange bit, or
 * immediately when the TXFIFO is written to.
 *
 * Values:
 * 0 - SPI Exchange Bit (XCH) controls when a SPI burst can start. Setting the XCH bit will start a SPI
 *     burst or multiple bursts. This is controlled by the SPI SS Wave Form Select (SS_CTL). Refer
 *     to XCH and SS_CTL descriptions.
 * 1 - Immediately starts a SPI burst when data is written in TXFIFO.
 */

#define BP_ECSPI_CONREG_SMC      (3)      //!< Bit position for ECSPI_CONREG_SMC.
#define BM_ECSPI_CONREG_SMC      (0x00000008)  //!< Bit mask for ECSPI_CONREG_SMC.

//! @brief Get value of ECSPI_CONREG_SMC from a register value.
#define BG_ECSPI_CONREG_SMC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONREG_SMC) >> BP_ECSPI_CONREG_SMC)

//! @brief Format value for bitfield ECSPI_CONREG_SMC.
#define BF_ECSPI_CONREG_SMC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONREG_SMC) & BM_ECSPI_CONREG_SMC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SMC field to a new value.
#define BW_ECSPI_CONREG_SMC(x, v)   (HW_ECSPI_CONREG_WR(x, (HW_ECSPI_CONREG_RD(x) & ~BM_ECSPI_CONREG_SMC) | BF_ECSPI_CONREG_SMC(v)))
#endif


/* --- Register HW_ECSPI_CONREG, field CHANNEL_MODE[7:4] (RW)
 *
 * SPI CHANNEL MODE selects the mode for each SPI channel. CHANNEL MODE[3] is for SPI channel 3.
 * CHANNEL MODE[2] is for SPI channel 2. CHANNEL MODE[1] is for SPI channel 1. CHANNEL MODE[0] is
 * for SPI channel 0.
 *
 * Values:
 * 0 - Slave mode.
 * 1 - Master mode.
 */

#define BP_ECSPI_CONREG_CHANNEL_MODE      (4)      //!< Bit position for ECSPI_CONREG_CHANNEL_MODE.
#define BM_ECSPI_CONREG_CHANNEL_MODE      (0x000000f0)  //!< Bit mask for ECSPI_CONREG_CHANNEL_MODE.

//! @brief Get value of ECSPI_CONREG_CHANNEL_MODE from a register value.
#define BG_ECSPI_CONREG_CHANNEL_MODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONREG_CHANNEL_MODE) >> BP_ECSPI_CONREG_CHANNEL_MODE)

//! @brief Format value for bitfield ECSPI_CONREG_CHANNEL_MODE.
#define BF_ECSPI_CONREG_CHANNEL_MODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONREG_CHANNEL_MODE) & BM_ECSPI_CONREG_CHANNEL_MODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CHANNEL_MODE field to a new value.
#define BW_ECSPI_CONREG_CHANNEL_MODE(x, v)   (HW_ECSPI_CONREG_WR(x, (HW_ECSPI_CONREG_RD(x) & ~BM_ECSPI_CONREG_CHANNEL_MODE) | BF_ECSPI_CONREG_CHANNEL_MODE(v)))
#endif


/* --- Register HW_ECSPI_CONREG, field POST_DIVIDER[11:8] (RW)
 *
 * SPI Post Divider. ECSPI uses a two-stage divider to generate the SPI clock. This field defines
 * the post-divider of the reference clock using the equation: 2 n .
 *
 * Values:
 * 0000 - Divide by 1.
 * 0001 - Divide by 2.
 * 0010 - Divide by 4.
 * 1110 - Divide by 2 14 .
 * 1111 - Divide by 2 15 .
 */

#define BP_ECSPI_CONREG_POST_DIVIDER      (8)      //!< Bit position for ECSPI_CONREG_POST_DIVIDER.
#define BM_ECSPI_CONREG_POST_DIVIDER      (0x00000f00)  //!< Bit mask for ECSPI_CONREG_POST_DIVIDER.

//! @brief Get value of ECSPI_CONREG_POST_DIVIDER from a register value.
#define BG_ECSPI_CONREG_POST_DIVIDER(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONREG_POST_DIVIDER) >> BP_ECSPI_CONREG_POST_DIVIDER)

//! @brief Format value for bitfield ECSPI_CONREG_POST_DIVIDER.
#define BF_ECSPI_CONREG_POST_DIVIDER(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONREG_POST_DIVIDER) & BM_ECSPI_CONREG_POST_DIVIDER)

#ifndef __LANGUAGE_ASM__
//! @brief Set the POST_DIVIDER field to a new value.
#define BW_ECSPI_CONREG_POST_DIVIDER(x, v)   (HW_ECSPI_CONREG_WR(x, (HW_ECSPI_CONREG_RD(x) & ~BM_ECSPI_CONREG_POST_DIVIDER) | BF_ECSPI_CONREG_POST_DIVIDER(v)))
#endif


/* --- Register HW_ECSPI_CONREG, field PRE_DIVIDER[15:12] (RW)
 *
 * SPI Pre Divider. ECSPI uses a two-stage divider to generate the SPI clock. This field defines the
 * pre-divider of the reference clock.
 *
 * Values:
 * 0000 - Divide by 1.
 * 0001 - Divide by 2.
 * 0010 - Divide by 3.
 * 1101 - Divide by 14.
 * 1110 - Divide by 15.
 * 1111 - Divide by 16.
 */

#define BP_ECSPI_CONREG_PRE_DIVIDER      (12)      //!< Bit position for ECSPI_CONREG_PRE_DIVIDER.
#define BM_ECSPI_CONREG_PRE_DIVIDER      (0x0000f000)  //!< Bit mask for ECSPI_CONREG_PRE_DIVIDER.

//! @brief Get value of ECSPI_CONREG_PRE_DIVIDER from a register value.
#define BG_ECSPI_CONREG_PRE_DIVIDER(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONREG_PRE_DIVIDER) >> BP_ECSPI_CONREG_PRE_DIVIDER)

//! @brief Format value for bitfield ECSPI_CONREG_PRE_DIVIDER.
#define BF_ECSPI_CONREG_PRE_DIVIDER(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONREG_PRE_DIVIDER) & BM_ECSPI_CONREG_PRE_DIVIDER)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PRE_DIVIDER field to a new value.
#define BW_ECSPI_CONREG_PRE_DIVIDER(x, v)   (HW_ECSPI_CONREG_WR(x, (HW_ECSPI_CONREG_RD(x) & ~BM_ECSPI_CONREG_PRE_DIVIDER) | BF_ECSPI_CONREG_PRE_DIVIDER(v)))
#endif


/* --- Register HW_ECSPI_CONREG, field DRCTL[17:16] (RW)
 *
 * SPI Data Ready Control. This field selects the utilization of the SPI_RDY signal in master mode.
 * ECSPI checks this field before it starts an SPI burst.
 *
 * Values:
 * 00 - The SPI_RDY signal is a don't care.
 * 01 - Burst will be triggered by the falling edge of the SPI_RDY signal (edge-triggered).
 * 10 - Burst will be triggered by a low level of the SPI_RDY signal (level-triggered).
 * 11 - Reserved.
 */

#define BP_ECSPI_CONREG_DRCTL      (16)      //!< Bit position for ECSPI_CONREG_DRCTL.
#define BM_ECSPI_CONREG_DRCTL      (0x00030000)  //!< Bit mask for ECSPI_CONREG_DRCTL.

//! @brief Get value of ECSPI_CONREG_DRCTL from a register value.
#define BG_ECSPI_CONREG_DRCTL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONREG_DRCTL) >> BP_ECSPI_CONREG_DRCTL)

//! @brief Format value for bitfield ECSPI_CONREG_DRCTL.
#define BF_ECSPI_CONREG_DRCTL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONREG_DRCTL) & BM_ECSPI_CONREG_DRCTL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DRCTL field to a new value.
#define BW_ECSPI_CONREG_DRCTL(x, v)   (HW_ECSPI_CONREG_WR(x, (HW_ECSPI_CONREG_RD(x) & ~BM_ECSPI_CONREG_DRCTL) | BF_ECSPI_CONREG_DRCTL(v)))
#endif


/* --- Register HW_ECSPI_CONREG, field CHANNEL_SELECT[19:18] (RW)
 *
 * SPI CHANNEL SELECT bits. Select one of four external SPI Master/Slave Devices. In master mode,
 * these two bits select the external slave devices by asserting the Chip Select (SSn) outputs. Only
 * the selected Chip Select (SSn) signal can be active at a given time; the remaining three signals
 * will be negated.
 *
 * Values:
 * 00 - Channel 0 is selected. Chip Select 0 (SS0) will be asserted.
 * 01 - Channel 1 is selected. Chip Select 1 (SS1) will be asserted.
 * 10 - Channel 2 is selected. Chip Select 2 (SS2) will be asserted.
 * 11 - Channel 3 is selected. Chip Select 3 (SS3) will be asserted.
 */

#define BP_ECSPI_CONREG_CHANNEL_SELECT      (18)      //!< Bit position for ECSPI_CONREG_CHANNEL_SELECT.
#define BM_ECSPI_CONREG_CHANNEL_SELECT      (0x000c0000)  //!< Bit mask for ECSPI_CONREG_CHANNEL_SELECT.

//! @brief Get value of ECSPI_CONREG_CHANNEL_SELECT from a register value.
#define BG_ECSPI_CONREG_CHANNEL_SELECT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONREG_CHANNEL_SELECT) >> BP_ECSPI_CONREG_CHANNEL_SELECT)

//! @brief Format value for bitfield ECSPI_CONREG_CHANNEL_SELECT.
#define BF_ECSPI_CONREG_CHANNEL_SELECT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONREG_CHANNEL_SELECT) & BM_ECSPI_CONREG_CHANNEL_SELECT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CHANNEL_SELECT field to a new value.
#define BW_ECSPI_CONREG_CHANNEL_SELECT(x, v)   (HW_ECSPI_CONREG_WR(x, (HW_ECSPI_CONREG_RD(x) & ~BM_ECSPI_CONREG_CHANNEL_SELECT) | BF_ECSPI_CONREG_CHANNEL_SELECT(v)))
#endif


/* --- Register HW_ECSPI_CONREG, field BURST_LENGTH[31:20] (RW)
 *
 * Burst Length. This field defines the length of a SPI burst to be transferred. The Chip Select
 * (SS) will remain asserted until all bits in a SPI burst are shifted out. A maximum of 2^12 bits
 * can be transferred in a single SPI burst. In master mode, it controls the number of bits per SPI
 * burst. Since the shift register always loads 32-bit data from transmit FIFO, only the n least-
 * significant (n = BURST LENGTH + 1) will be shifted out. The remaining bits will be ignored. In
 * slave mode, only when SS_CTL is cleared, this field will take effect in the transfer. Number of
 * Valid Bits in a SPI burst.
 *
 * Values:
 * 0x000 - A SPI burst contains the 1 LSB in a word.
 * 0x001 - A SPI burst contains the 2 LSB in a word.
 * 0x002 - A SPI burst contains the 3 LSB in a word.
 * 0x01F - A SPI burst contains all 32 bits in a word.
 * 0x020 - A SPI burst contains the 1 LSB in first word and all 32 bits in second word.
 * 0x021 - A SPI burst contains the 2 LSB in first word and all 32 bits in second word.
 * 0xFFE - A SPI burst contains the 31 LSB in first word and 2^7 -1 words.
 * 0xFFF - A SPI burst contains 2^7 words.
 */

#define BP_ECSPI_CONREG_BURST_LENGTH      (20)      //!< Bit position for ECSPI_CONREG_BURST_LENGTH.
#define BM_ECSPI_CONREG_BURST_LENGTH      (0xfff00000)  //!< Bit mask for ECSPI_CONREG_BURST_LENGTH.

//! @brief Get value of ECSPI_CONREG_BURST_LENGTH from a register value.
#define BG_ECSPI_CONREG_BURST_LENGTH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONREG_BURST_LENGTH) >> BP_ECSPI_CONREG_BURST_LENGTH)

//! @brief Format value for bitfield ECSPI_CONREG_BURST_LENGTH.
#define BF_ECSPI_CONREG_BURST_LENGTH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONREG_BURST_LENGTH) & BM_ECSPI_CONREG_BURST_LENGTH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BURST_LENGTH field to a new value.
#define BW_ECSPI_CONREG_BURST_LENGTH(x, v)   (HW_ECSPI_CONREG_WR(x, (HW_ECSPI_CONREG_RD(x) & ~BM_ECSPI_CONREG_BURST_LENGTH) | BF_ECSPI_CONREG_BURST_LENGTH(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_ECSPI_CONFIGREG - Config Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_ECSPI_CONFIGREG - Config Register (RW)
 *
 * Reset value: 0x00000000
 *
 * The Config Register (ECSPI_CONFIGREG) allows software to configure each SPI channel, configure
 * its operating modes, specify the phase and polarity of the clock, configure the Chip Select (SS),
 * and define the HT transfer length.
 */
typedef union _hw_ecspi_configreg
{
    reg32_t U;
    struct _hw_ecspi_configreg_bitfields
    {
        unsigned SCLK_PHA : 4; //!< [3:0] SPI Clock/Data Phase Control.
        unsigned SCLK_POL : 4; //!< [7:4] SPI Clock Polarity Control.
        unsigned SS_CTL : 4; //!< [11:8] SPI SS Wave Form Select.
        unsigned SS_POL : 4; //!< [15:12] SPI SS Polarity Select.
        unsigned DATA_CTL : 4; //!< [19:16] DATA CTL.
        unsigned SCLK_CTL : 4; //!< [23:20] SCLK CTL.
        unsigned HT_LENGTH : 5; //!< [28:24] HT LENGTH.
        unsigned RESERVED0 : 3; //!< [31:29] Reserved
    } B;
} hw_ecspi_configreg_t;
#endif

/*
 * constants & macros for entire multi-block ECSPI_CONFIGREG register
 */
#define HW_ECSPI_CONFIGREG_ADDR(x)      (REGS_ECSPI_BASE(x) + 0xc)

#ifndef __LANGUAGE_ASM__
#define HW_ECSPI_CONFIGREG(x)           (*(volatile hw_ecspi_configreg_t *) HW_ECSPI_CONFIGREG_ADDR(x))
#define HW_ECSPI_CONFIGREG_RD(x)        (HW_ECSPI_CONFIGREG(x).U)
#define HW_ECSPI_CONFIGREG_WR(x, v)     (HW_ECSPI_CONFIGREG(x).U = (v))
#define HW_ECSPI_CONFIGREG_SET(x, v)    (HW_ECSPI_CONFIGREG_WR(x, HW_ECSPI_CONFIGREG_RD(x) |  (v)))
#define HW_ECSPI_CONFIGREG_CLR(x, v)    (HW_ECSPI_CONFIGREG_WR(x, HW_ECSPI_CONFIGREG_RD(x) & ~(v)))
#define HW_ECSPI_CONFIGREG_TOG(x, v)    (HW_ECSPI_CONFIGREG_WR(x, HW_ECSPI_CONFIGREG_RD(x) ^  (v)))
#endif

/*
 * constants & macros for individual ECSPI_CONFIGREG bitfields
 */

/* --- Register HW_ECSPI_CONFIGREG, field SCLK_PHA[3:0] (RW)
 *
 * SPI Clock/Data Phase Control. This field controls the clock/data phase relationship. See for more
 * information. SCLK PHA[3] is for SPI channel 3. SCLK PHA[2] is for SPI channel 2. SCLK PHA[1] is
 * for SPI channel 1. SCLK PHA[0] is for SPI channel 0.
 *
 * Values:
 * 0 - Phase 0 operation.
 * 1 - Phase 1 operation.
 */

#define BP_ECSPI_CONFIGREG_SCLK_PHA      (0)      //!< Bit position for ECSPI_CONFIGREG_SCLK_PHA.
#define BM_ECSPI_CONFIGREG_SCLK_PHA      (0x0000000f)  //!< Bit mask for ECSPI_CONFIGREG_SCLK_PHA.

//! @brief Get value of ECSPI_CONFIGREG_SCLK_PHA from a register value.
#define BG_ECSPI_CONFIGREG_SCLK_PHA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONFIGREG_SCLK_PHA) >> BP_ECSPI_CONFIGREG_SCLK_PHA)

//! @brief Format value for bitfield ECSPI_CONFIGREG_SCLK_PHA.
#define BF_ECSPI_CONFIGREG_SCLK_PHA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONFIGREG_SCLK_PHA) & BM_ECSPI_CONFIGREG_SCLK_PHA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SCLK_PHA field to a new value.
#define BW_ECSPI_CONFIGREG_SCLK_PHA(x, v)   (HW_ECSPI_CONFIGREG_WR(x, (HW_ECSPI_CONFIGREG_RD(x) & ~BM_ECSPI_CONFIGREG_SCLK_PHA) | BF_ECSPI_CONFIGREG_SCLK_PHA(v)))
#endif


/* --- Register HW_ECSPI_CONFIGREG, field SCLK_POL[7:4] (RW)
 *
 * SPI Clock Polarity Control. This field controls the polarity of the SCLK signal. See for more
 * information. SCLK POL[3] is for SPI channel 3. SCLK POL[2] is for SPI channel 2. SCLK POL[1] is
 * for SPI channel 1. SCLK POL[0] is for SPI channel 0.
 *
 * Values:
 * 0 - Active high polarity (0 = Idle).
 * 1 - Active low polarity (1 = Idle).
 */

#define BP_ECSPI_CONFIGREG_SCLK_POL      (4)      //!< Bit position for ECSPI_CONFIGREG_SCLK_POL.
#define BM_ECSPI_CONFIGREG_SCLK_POL      (0x000000f0)  //!< Bit mask for ECSPI_CONFIGREG_SCLK_POL.

//! @brief Get value of ECSPI_CONFIGREG_SCLK_POL from a register value.
#define BG_ECSPI_CONFIGREG_SCLK_POL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONFIGREG_SCLK_POL) >> BP_ECSPI_CONFIGREG_SCLK_POL)

//! @brief Format value for bitfield ECSPI_CONFIGREG_SCLK_POL.
#define BF_ECSPI_CONFIGREG_SCLK_POL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONFIGREG_SCLK_POL) & BM_ECSPI_CONFIGREG_SCLK_POL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SCLK_POL field to a new value.
#define BW_ECSPI_CONFIGREG_SCLK_POL(x, v)   (HW_ECSPI_CONFIGREG_WR(x, (HW_ECSPI_CONFIGREG_RD(x) & ~BM_ECSPI_CONFIGREG_SCLK_POL) | BF_ECSPI_CONFIGREG_SCLK_POL(v)))
#endif


/* --- Register HW_ECSPI_CONFIGREG, field SS_CTL[11:8] (RW)
 *
 * SPI SS Wave Form Select. In master mode, this field controls the output wave form of the Chip
 * Select (SS) signal when the SMC (Start Mode Control) bit is cleared. The SS_CTL are ignored if
 * the SMC bit is set. SS CTL[3] is for SPI channel 3. SS CTL[2] is for SPI channel 2. SS CTL[1] is
 * for SPI channel 1. SS CTL[0] is for SPI channel 0. In slave mode, this bit controls when the SPI
 * burst is completed. 1 An SPI burst is completed by the Chip Select (SS) signal edges. (SSPOL = 0:
 * rising edge; SSPOL = 1: falling edge) The RXFIFO is advanced whenever a Chip Select (SS) signal
 * edge is detected or the shift register contains 32-bits of valid data.
 *
 * Values:
 * 0 - In master mode - only one SPI burst will be transmitted.
 * 0 - In slave mode - an SPI burst is completed when the number of bits received in the shift register is
 *     equal to (BURST LENGTH + 1). Only the n least-significant bits (n = BURST LENGTH[4:0] + 1) of
 *     the first received word are valid. All bits subsequent to the first received word in RXFIFO
 *     are valid.
 * 1 - In master mode - Negate Chip Select (SS) signal between SPI bursts. Multiple SPI bursts will be
 *     transmitted. The SPI transfer will automatically stop when the TXFIFO is empty.
 * 1 - In slave mode - an SPI burst is completed by the Chip Select (SS) signal edges. (SSPOL = 0: rising
 *     edge; SSPOL = 1: falling edge) The RXFIFO is advanced whenever a Chip Select (SS) signal edge
 *     is detected or the shift register contains 32-bits of valid data.
 */

#define BP_ECSPI_CONFIGREG_SS_CTL      (8)      //!< Bit position for ECSPI_CONFIGREG_SS_CTL.
#define BM_ECSPI_CONFIGREG_SS_CTL      (0x00000f00)  //!< Bit mask for ECSPI_CONFIGREG_SS_CTL.

//! @brief Get value of ECSPI_CONFIGREG_SS_CTL from a register value.
#define BG_ECSPI_CONFIGREG_SS_CTL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONFIGREG_SS_CTL) >> BP_ECSPI_CONFIGREG_SS_CTL)

//! @brief Format value for bitfield ECSPI_CONFIGREG_SS_CTL.
#define BF_ECSPI_CONFIGREG_SS_CTL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONFIGREG_SS_CTL) & BM_ECSPI_CONFIGREG_SS_CTL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SS_CTL field to a new value.
#define BW_ECSPI_CONFIGREG_SS_CTL(x, v)   (HW_ECSPI_CONFIGREG_WR(x, (HW_ECSPI_CONFIGREG_RD(x) & ~BM_ECSPI_CONFIGREG_SS_CTL) | BF_ECSPI_CONFIGREG_SS_CTL(v)))
#endif


/* --- Register HW_ECSPI_CONFIGREG, field SS_POL[15:12] (RW)
 *
 * SPI SS Polarity Select. In both Master and Slave modes, this field selects the polarity of the
 * Chip Select (SS) signal. SS POL[3] is for SPI channel 3. SS POL[2] is for SPI channel 2. SS
 * POL[1] is for SPI channel 1. SS POL[0] is for SPI channel 0.
 *
 * Values:
 * 0 - Active low.
 * 1 - Active high.
 */

#define BP_ECSPI_CONFIGREG_SS_POL      (12)      //!< Bit position for ECSPI_CONFIGREG_SS_POL.
#define BM_ECSPI_CONFIGREG_SS_POL      (0x0000f000)  //!< Bit mask for ECSPI_CONFIGREG_SS_POL.

//! @brief Get value of ECSPI_CONFIGREG_SS_POL from a register value.
#define BG_ECSPI_CONFIGREG_SS_POL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONFIGREG_SS_POL) >> BP_ECSPI_CONFIGREG_SS_POL)

//! @brief Format value for bitfield ECSPI_CONFIGREG_SS_POL.
#define BF_ECSPI_CONFIGREG_SS_POL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONFIGREG_SS_POL) & BM_ECSPI_CONFIGREG_SS_POL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SS_POL field to a new value.
#define BW_ECSPI_CONFIGREG_SS_POL(x, v)   (HW_ECSPI_CONFIGREG_WR(x, (HW_ECSPI_CONFIGREG_RD(x) & ~BM_ECSPI_CONFIGREG_SS_POL) | BF_ECSPI_CONFIGREG_SS_POL(v)))
#endif


/* --- Register HW_ECSPI_CONFIGREG, field DATA_CTL[19:16] (RW)
 *
 * DATA CTL. This field controls inactive state of the data line for each SPI channel. DATA CTL[3]
 * is for SPI channel 3. DATA CTL[2] is for SPI channel 2. DATA CTL[1] is for SPI channel 1. DATA
 * CTL[0] is for SPI channel 0.
 *
 * Values:
 * 0 - Stay high.
 * 1 - Stay low.
 */

#define BP_ECSPI_CONFIGREG_DATA_CTL      (16)      //!< Bit position for ECSPI_CONFIGREG_DATA_CTL.
#define BM_ECSPI_CONFIGREG_DATA_CTL      (0x000f0000)  //!< Bit mask for ECSPI_CONFIGREG_DATA_CTL.

//! @brief Get value of ECSPI_CONFIGREG_DATA_CTL from a register value.
#define BG_ECSPI_CONFIGREG_DATA_CTL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONFIGREG_DATA_CTL) >> BP_ECSPI_CONFIGREG_DATA_CTL)

//! @brief Format value for bitfield ECSPI_CONFIGREG_DATA_CTL.
#define BF_ECSPI_CONFIGREG_DATA_CTL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONFIGREG_DATA_CTL) & BM_ECSPI_CONFIGREG_DATA_CTL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DATA_CTL field to a new value.
#define BW_ECSPI_CONFIGREG_DATA_CTL(x, v)   (HW_ECSPI_CONFIGREG_WR(x, (HW_ECSPI_CONFIGREG_RD(x) & ~BM_ECSPI_CONFIGREG_DATA_CTL) | BF_ECSPI_CONFIGREG_DATA_CTL(v)))
#endif


/* --- Register HW_ECSPI_CONFIGREG, field SCLK_CTL[23:20] (RW)
 *
 * SCLK CTL. This field controls the inactive state of SCLK for each SPI channel. SCLK CTL[3] is for
 * SPI channel 3. SCLK CTL[2] is for SPI channel 2. SCLK CTL[1] is for SPI channel 1. SCLK CTL[0] is
 * for SPI channel 0.
 *
 * Values:
 * 0 - Stay low.
 * 1 - Stay high.
 */

#define BP_ECSPI_CONFIGREG_SCLK_CTL      (20)      //!< Bit position for ECSPI_CONFIGREG_SCLK_CTL.
#define BM_ECSPI_CONFIGREG_SCLK_CTL      (0x00f00000)  //!< Bit mask for ECSPI_CONFIGREG_SCLK_CTL.

//! @brief Get value of ECSPI_CONFIGREG_SCLK_CTL from a register value.
#define BG_ECSPI_CONFIGREG_SCLK_CTL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONFIGREG_SCLK_CTL) >> BP_ECSPI_CONFIGREG_SCLK_CTL)

//! @brief Format value for bitfield ECSPI_CONFIGREG_SCLK_CTL.
#define BF_ECSPI_CONFIGREG_SCLK_CTL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONFIGREG_SCLK_CTL) & BM_ECSPI_CONFIGREG_SCLK_CTL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SCLK_CTL field to a new value.
#define BW_ECSPI_CONFIGREG_SCLK_CTL(x, v)   (HW_ECSPI_CONFIGREG_WR(x, (HW_ECSPI_CONFIGREG_RD(x) & ~BM_ECSPI_CONFIGREG_SCLK_CTL) | BF_ECSPI_CONFIGREG_SCLK_CTL(v)))
#endif


/* --- Register HW_ECSPI_CONFIGREG, field HT_LENGTH[28:24] (RW)
 *
 * HT LENGTH. This field defines the message length in HT Mode. The length in bits of one message is
 * (HT LENGTH + 1).
 */

#define BP_ECSPI_CONFIGREG_HT_LENGTH      (24)      //!< Bit position for ECSPI_CONFIGREG_HT_LENGTH.
#define BM_ECSPI_CONFIGREG_HT_LENGTH      (0x1f000000)  //!< Bit mask for ECSPI_CONFIGREG_HT_LENGTH.

//! @brief Get value of ECSPI_CONFIGREG_HT_LENGTH from a register value.
#define BG_ECSPI_CONFIGREG_HT_LENGTH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_CONFIGREG_HT_LENGTH) >> BP_ECSPI_CONFIGREG_HT_LENGTH)

//! @brief Format value for bitfield ECSPI_CONFIGREG_HT_LENGTH.
#define BF_ECSPI_CONFIGREG_HT_LENGTH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_CONFIGREG_HT_LENGTH) & BM_ECSPI_CONFIGREG_HT_LENGTH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HT_LENGTH field to a new value.
#define BW_ECSPI_CONFIGREG_HT_LENGTH(x, v)   (HW_ECSPI_CONFIGREG_WR(x, (HW_ECSPI_CONFIGREG_RD(x) & ~BM_ECSPI_CONFIGREG_HT_LENGTH) | BF_ECSPI_CONFIGREG_HT_LENGTH(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_ECSPI_INTREG - Interrupt Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_ECSPI_INTREG - Interrupt Control Register (RW)
 *
 * Reset value: 0x00000000
 *
 * The Interrupt Control Register (ECSPI_INTREG) enables the generation of interrupts to the host
 * processor. If the ECSPI is disabled, this register reads zero.
 */
typedef union _hw_ecspi_intreg
{
    reg32_t U;
    struct _hw_ecspi_intreg_bitfields
    {
        unsigned TEEN : 1; //!< [0] TXFIFO Empty Interrupt enable.
        unsigned TDREN : 1; //!< [1] TXFIFO Data Request Interrupt enable.
        unsigned TFEN : 1; //!< [2] TXFIFO Full Interrupt enable.
        unsigned RREN : 1; //!< [3] RXFIFO Ready Interrupt enable.
        unsigned RDREN : 1; //!< [4] RXFIFO Data Request Interrupt enable.
        unsigned RFEN : 1; //!< [5] RXFIFO Full Interrupt enable.
        unsigned ROEN : 1; //!< [6] RXFIFO Overflow Interrupt enable.
        unsigned TCEN : 1; //!< [7] Transfer Completed Interrupt enable.
        unsigned RESERVED0 : 24; //!< [31:8] Reserved
    } B;
} hw_ecspi_intreg_t;
#endif

/*
 * constants & macros for entire multi-block ECSPI_INTREG register
 */
#define HW_ECSPI_INTREG_ADDR(x)      (REGS_ECSPI_BASE(x) + 0x10)

#ifndef __LANGUAGE_ASM__
#define HW_ECSPI_INTREG(x)           (*(volatile hw_ecspi_intreg_t *) HW_ECSPI_INTREG_ADDR(x))
#define HW_ECSPI_INTREG_RD(x)        (HW_ECSPI_INTREG(x).U)
#define HW_ECSPI_INTREG_WR(x, v)     (HW_ECSPI_INTREG(x).U = (v))
#define HW_ECSPI_INTREG_SET(x, v)    (HW_ECSPI_INTREG_WR(x, HW_ECSPI_INTREG_RD(x) |  (v)))
#define HW_ECSPI_INTREG_CLR(x, v)    (HW_ECSPI_INTREG_WR(x, HW_ECSPI_INTREG_RD(x) & ~(v)))
#define HW_ECSPI_INTREG_TOG(x, v)    (HW_ECSPI_INTREG_WR(x, HW_ECSPI_INTREG_RD(x) ^  (v)))
#endif

/*
 * constants & macros for individual ECSPI_INTREG bitfields
 */

/* --- Register HW_ECSPI_INTREG, field TEEN[0] (RW)
 *
 * TXFIFO Empty Interrupt enable. This bit enables the TXFIFO Empty Interrupt.
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_ECSPI_INTREG_TEEN      (0)      //!< Bit position for ECSPI_INTREG_TEEN.
#define BM_ECSPI_INTREG_TEEN      (0x00000001)  //!< Bit mask for ECSPI_INTREG_TEEN.

//! @brief Get value of ECSPI_INTREG_TEEN from a register value.
#define BG_ECSPI_INTREG_TEEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_INTREG_TEEN) >> BP_ECSPI_INTREG_TEEN)

//! @brief Format value for bitfield ECSPI_INTREG_TEEN.
#define BF_ECSPI_INTREG_TEEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_INTREG_TEEN) & BM_ECSPI_INTREG_TEEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TEEN field to a new value.
#define BW_ECSPI_INTREG_TEEN(x, v)   (HW_ECSPI_INTREG_WR(x, (HW_ECSPI_INTREG_RD(x) & ~BM_ECSPI_INTREG_TEEN) | BF_ECSPI_INTREG_TEEN(v)))
#endif


/* --- Register HW_ECSPI_INTREG, field TDREN[1] (RW)
 *
 * TXFIFO Data Request Interrupt enable. This bit enables the TXFIFO Data Request Interrupt when the
 * number of data entries in the TXFIFO is less than or equal to TX THRESHOLD.
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_ECSPI_INTREG_TDREN      (1)      //!< Bit position for ECSPI_INTREG_TDREN.
#define BM_ECSPI_INTREG_TDREN      (0x00000002)  //!< Bit mask for ECSPI_INTREG_TDREN.

//! @brief Get value of ECSPI_INTREG_TDREN from a register value.
#define BG_ECSPI_INTREG_TDREN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_INTREG_TDREN) >> BP_ECSPI_INTREG_TDREN)

//! @brief Format value for bitfield ECSPI_INTREG_TDREN.
#define BF_ECSPI_INTREG_TDREN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_INTREG_TDREN) & BM_ECSPI_INTREG_TDREN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TDREN field to a new value.
#define BW_ECSPI_INTREG_TDREN(x, v)   (HW_ECSPI_INTREG_WR(x, (HW_ECSPI_INTREG_RD(x) & ~BM_ECSPI_INTREG_TDREN) | BF_ECSPI_INTREG_TDREN(v)))
#endif


/* --- Register HW_ECSPI_INTREG, field TFEN[2] (RW)
 *
 * TXFIFO Full Interrupt enable. This bit enables the TXFIFO Full Interrupt.
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_ECSPI_INTREG_TFEN      (2)      //!< Bit position for ECSPI_INTREG_TFEN.
#define BM_ECSPI_INTREG_TFEN      (0x00000004)  //!< Bit mask for ECSPI_INTREG_TFEN.

//! @brief Get value of ECSPI_INTREG_TFEN from a register value.
#define BG_ECSPI_INTREG_TFEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_INTREG_TFEN) >> BP_ECSPI_INTREG_TFEN)

//! @brief Format value for bitfield ECSPI_INTREG_TFEN.
#define BF_ECSPI_INTREG_TFEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_INTREG_TFEN) & BM_ECSPI_INTREG_TFEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TFEN field to a new value.
#define BW_ECSPI_INTREG_TFEN(x, v)   (HW_ECSPI_INTREG_WR(x, (HW_ECSPI_INTREG_RD(x) & ~BM_ECSPI_INTREG_TFEN) | BF_ECSPI_INTREG_TFEN(v)))
#endif


/* --- Register HW_ECSPI_INTREG, field RREN[3] (RW)
 *
 * RXFIFO Ready Interrupt enable. This bit enables the RXFIFO Ready Interrupt.
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_ECSPI_INTREG_RREN      (3)      //!< Bit position for ECSPI_INTREG_RREN.
#define BM_ECSPI_INTREG_RREN      (0x00000008)  //!< Bit mask for ECSPI_INTREG_RREN.

//! @brief Get value of ECSPI_INTREG_RREN from a register value.
#define BG_ECSPI_INTREG_RREN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_INTREG_RREN) >> BP_ECSPI_INTREG_RREN)

//! @brief Format value for bitfield ECSPI_INTREG_RREN.
#define BF_ECSPI_INTREG_RREN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_INTREG_RREN) & BM_ECSPI_INTREG_RREN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RREN field to a new value.
#define BW_ECSPI_INTREG_RREN(x, v)   (HW_ECSPI_INTREG_WR(x, (HW_ECSPI_INTREG_RD(x) & ~BM_ECSPI_INTREG_RREN) | BF_ECSPI_INTREG_RREN(v)))
#endif


/* --- Register HW_ECSPI_INTREG, field RDREN[4] (RW)
 *
 * RXFIFO Data Request Interrupt enable. This bit enables the RXFIFO Data Request Interrupt when the
 * number of data entries in the RXFIFO is greater than RX THRESHOLD.
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_ECSPI_INTREG_RDREN      (4)      //!< Bit position for ECSPI_INTREG_RDREN.
#define BM_ECSPI_INTREG_RDREN      (0x00000010)  //!< Bit mask for ECSPI_INTREG_RDREN.

//! @brief Get value of ECSPI_INTREG_RDREN from a register value.
#define BG_ECSPI_INTREG_RDREN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_INTREG_RDREN) >> BP_ECSPI_INTREG_RDREN)

//! @brief Format value for bitfield ECSPI_INTREG_RDREN.
#define BF_ECSPI_INTREG_RDREN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_INTREG_RDREN) & BM_ECSPI_INTREG_RDREN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RDREN field to a new value.
#define BW_ECSPI_INTREG_RDREN(x, v)   (HW_ECSPI_INTREG_WR(x, (HW_ECSPI_INTREG_RD(x) & ~BM_ECSPI_INTREG_RDREN) | BF_ECSPI_INTREG_RDREN(v)))
#endif


/* --- Register HW_ECSPI_INTREG, field RFEN[5] (RW)
 *
 * RXFIFO Full Interrupt enable. This bit enables the RXFIFO Full Interrupt.
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_ECSPI_INTREG_RFEN      (5)      //!< Bit position for ECSPI_INTREG_RFEN.
#define BM_ECSPI_INTREG_RFEN      (0x00000020)  //!< Bit mask for ECSPI_INTREG_RFEN.

//! @brief Get value of ECSPI_INTREG_RFEN from a register value.
#define BG_ECSPI_INTREG_RFEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_INTREG_RFEN) >> BP_ECSPI_INTREG_RFEN)

//! @brief Format value for bitfield ECSPI_INTREG_RFEN.
#define BF_ECSPI_INTREG_RFEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_INTREG_RFEN) & BM_ECSPI_INTREG_RFEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RFEN field to a new value.
#define BW_ECSPI_INTREG_RFEN(x, v)   (HW_ECSPI_INTREG_WR(x, (HW_ECSPI_INTREG_RD(x) & ~BM_ECSPI_INTREG_RFEN) | BF_ECSPI_INTREG_RFEN(v)))
#endif


/* --- Register HW_ECSPI_INTREG, field ROEN[6] (RW)
 *
 * RXFIFO Overflow Interrupt enable. This bit enables the RXFIFO Overflow Interrupt.
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_ECSPI_INTREG_ROEN      (6)      //!< Bit position for ECSPI_INTREG_ROEN.
#define BM_ECSPI_INTREG_ROEN      (0x00000040)  //!< Bit mask for ECSPI_INTREG_ROEN.

//! @brief Get value of ECSPI_INTREG_ROEN from a register value.
#define BG_ECSPI_INTREG_ROEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_INTREG_ROEN) >> BP_ECSPI_INTREG_ROEN)

//! @brief Format value for bitfield ECSPI_INTREG_ROEN.
#define BF_ECSPI_INTREG_ROEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_INTREG_ROEN) & BM_ECSPI_INTREG_ROEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ROEN field to a new value.
#define BW_ECSPI_INTREG_ROEN(x, v)   (HW_ECSPI_INTREG_WR(x, (HW_ECSPI_INTREG_RD(x) & ~BM_ECSPI_INTREG_ROEN) | BF_ECSPI_INTREG_ROEN(v)))
#endif


/* --- Register HW_ECSPI_INTREG, field TCEN[7] (RW)
 *
 * Transfer Completed Interrupt enable. This bit enables the Transfer Completed Interrupt.
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_ECSPI_INTREG_TCEN      (7)      //!< Bit position for ECSPI_INTREG_TCEN.
#define BM_ECSPI_INTREG_TCEN      (0x00000080)  //!< Bit mask for ECSPI_INTREG_TCEN.

//! @brief Get value of ECSPI_INTREG_TCEN from a register value.
#define BG_ECSPI_INTREG_TCEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_INTREG_TCEN) >> BP_ECSPI_INTREG_TCEN)

//! @brief Format value for bitfield ECSPI_INTREG_TCEN.
#define BF_ECSPI_INTREG_TCEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_INTREG_TCEN) & BM_ECSPI_INTREG_TCEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TCEN field to a new value.
#define BW_ECSPI_INTREG_TCEN(x, v)   (HW_ECSPI_INTREG_WR(x, (HW_ECSPI_INTREG_RD(x) & ~BM_ECSPI_INTREG_TCEN) | BF_ECSPI_INTREG_TCEN(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_ECSPI_DMAREG - DMA Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_ECSPI_DMAREG - DMA Control Register (RW)
 *
 * Reset value: 0x00000000
 *
 * The Direct Memory Access Control Register (ECSPI_DMAREG) provides software a way to use an on-
 * chip DMA controller for ECSPI data. Internal DMA request signals enable direct data transfers
 * between the ECSPI FIFOs and system memory. The ECSPI sends out DMA requests when the appropriate
 * FIFO conditions are matched.  If the ECSPI is disabled, this register is read as 0.
 */
typedef union _hw_ecspi_dmareg
{
    reg32_t U;
    struct _hw_ecspi_dmareg_bitfields
    {
        unsigned TX_THRESHOLD : 6; //!< [5:0] TX THRESHOLD.
        unsigned RESERVED0 : 1; //!< [6] Reserved
        unsigned TEDEN : 1; //!< [7] TXFIFO Empty DMA Request Enable.
        unsigned RESERVED1 : 8; //!< [15:8] Reserved
        unsigned RX_THRESHOLD : 6; //!< [21:16] RX THRESHOLD.
        unsigned RESERVED2 : 1; //!< [22] Reserved
        unsigned RXDEN : 1; //!< [23] RXFIFO DMA Request Enable.
        unsigned RX_DMA_LENGTH : 6; //!< [29:24] RX DMA LENGTH.
        unsigned RESERVED3 : 1; //!< [30] Reserved
        unsigned RXTDEN : 1; //!< [31] RXFIFO TAIL DMA Request Enable.
    } B;
} hw_ecspi_dmareg_t;
#endif

/*
 * constants & macros for entire multi-block ECSPI_DMAREG register
 */
#define HW_ECSPI_DMAREG_ADDR(x)      (REGS_ECSPI_BASE(x) + 0x14)

#ifndef __LANGUAGE_ASM__
#define HW_ECSPI_DMAREG(x)           (*(volatile hw_ecspi_dmareg_t *) HW_ECSPI_DMAREG_ADDR(x))
#define HW_ECSPI_DMAREG_RD(x)        (HW_ECSPI_DMAREG(x).U)
#define HW_ECSPI_DMAREG_WR(x, v)     (HW_ECSPI_DMAREG(x).U = (v))
#define HW_ECSPI_DMAREG_SET(x, v)    (HW_ECSPI_DMAREG_WR(x, HW_ECSPI_DMAREG_RD(x) |  (v)))
#define HW_ECSPI_DMAREG_CLR(x, v)    (HW_ECSPI_DMAREG_WR(x, HW_ECSPI_DMAREG_RD(x) & ~(v)))
#define HW_ECSPI_DMAREG_TOG(x, v)    (HW_ECSPI_DMAREG_WR(x, HW_ECSPI_DMAREG_RD(x) ^  (v)))
#endif

/*
 * constants & macros for individual ECSPI_DMAREG bitfields
 */

/* --- Register HW_ECSPI_DMAREG, field TX_THRESHOLD[5:0] (RW)
 *
 * TX THRESHOLD. This field defines the FIFO threshold that triggers a TX DMA/INT request. A TX
 * DMA/INT request is issued when the number of data entries in the TXFIFO is greater than TX
 * THRESHOLD.
 */

#define BP_ECSPI_DMAREG_TX_THRESHOLD      (0)      //!< Bit position for ECSPI_DMAREG_TX_THRESHOLD.
#define BM_ECSPI_DMAREG_TX_THRESHOLD      (0x0000003f)  //!< Bit mask for ECSPI_DMAREG_TX_THRESHOLD.

//! @brief Get value of ECSPI_DMAREG_TX_THRESHOLD from a register value.
#define BG_ECSPI_DMAREG_TX_THRESHOLD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_DMAREG_TX_THRESHOLD) >> BP_ECSPI_DMAREG_TX_THRESHOLD)

//! @brief Format value for bitfield ECSPI_DMAREG_TX_THRESHOLD.
#define BF_ECSPI_DMAREG_TX_THRESHOLD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_DMAREG_TX_THRESHOLD) & BM_ECSPI_DMAREG_TX_THRESHOLD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TX_THRESHOLD field to a new value.
#define BW_ECSPI_DMAREG_TX_THRESHOLD(x, v)   (HW_ECSPI_DMAREG_WR(x, (HW_ECSPI_DMAREG_RD(x) & ~BM_ECSPI_DMAREG_TX_THRESHOLD) | BF_ECSPI_DMAREG_TX_THRESHOLD(v)))
#endif

/* --- Register HW_ECSPI_DMAREG, field TEDEN[7] (RW)
 *
 * TXFIFO Empty DMA Request Enable. This bit enables/disables the TXFIFO Empty DMA Request.
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_ECSPI_DMAREG_TEDEN      (7)      //!< Bit position for ECSPI_DMAREG_TEDEN.
#define BM_ECSPI_DMAREG_TEDEN      (0x00000080)  //!< Bit mask for ECSPI_DMAREG_TEDEN.

//! @brief Get value of ECSPI_DMAREG_TEDEN from a register value.
#define BG_ECSPI_DMAREG_TEDEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_DMAREG_TEDEN) >> BP_ECSPI_DMAREG_TEDEN)

//! @brief Format value for bitfield ECSPI_DMAREG_TEDEN.
#define BF_ECSPI_DMAREG_TEDEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_DMAREG_TEDEN) & BM_ECSPI_DMAREG_TEDEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TEDEN field to a new value.
#define BW_ECSPI_DMAREG_TEDEN(x, v)   (HW_ECSPI_DMAREG_WR(x, (HW_ECSPI_DMAREG_RD(x) & ~BM_ECSPI_DMAREG_TEDEN) | BF_ECSPI_DMAREG_TEDEN(v)))
#endif


/* --- Register HW_ECSPI_DMAREG, field RX_THRESHOLD[21:16] (RW)
 *
 * RX THRESHOLD. This field defines the FIFO threshold that triggers a RX DMA/INT request. A RX
 * DMA/INT request is issued when the number of data entries in the RXFIFO is greater than RX
 * THRESHOLD.
 */

#define BP_ECSPI_DMAREG_RX_THRESHOLD      (16)      //!< Bit position for ECSPI_DMAREG_RX_THRESHOLD.
#define BM_ECSPI_DMAREG_RX_THRESHOLD      (0x003f0000)  //!< Bit mask for ECSPI_DMAREG_RX_THRESHOLD.

//! @brief Get value of ECSPI_DMAREG_RX_THRESHOLD from a register value.
#define BG_ECSPI_DMAREG_RX_THRESHOLD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_DMAREG_RX_THRESHOLD) >> BP_ECSPI_DMAREG_RX_THRESHOLD)

//! @brief Format value for bitfield ECSPI_DMAREG_RX_THRESHOLD.
#define BF_ECSPI_DMAREG_RX_THRESHOLD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_DMAREG_RX_THRESHOLD) & BM_ECSPI_DMAREG_RX_THRESHOLD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RX_THRESHOLD field to a new value.
#define BW_ECSPI_DMAREG_RX_THRESHOLD(x, v)   (HW_ECSPI_DMAREG_WR(x, (HW_ECSPI_DMAREG_RD(x) & ~BM_ECSPI_DMAREG_RX_THRESHOLD) | BF_ECSPI_DMAREG_RX_THRESHOLD(v)))
#endif

/* --- Register HW_ECSPI_DMAREG, field RXDEN[23] (RW)
 *
 * RXFIFO DMA Request Enable. This bit enables/disables the RXFIFO DMA Request.
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_ECSPI_DMAREG_RXDEN      (23)      //!< Bit position for ECSPI_DMAREG_RXDEN.
#define BM_ECSPI_DMAREG_RXDEN      (0x00800000)  //!< Bit mask for ECSPI_DMAREG_RXDEN.

//! @brief Get value of ECSPI_DMAREG_RXDEN from a register value.
#define BG_ECSPI_DMAREG_RXDEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_DMAREG_RXDEN) >> BP_ECSPI_DMAREG_RXDEN)

//! @brief Format value for bitfield ECSPI_DMAREG_RXDEN.
#define BF_ECSPI_DMAREG_RXDEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_DMAREG_RXDEN) & BM_ECSPI_DMAREG_RXDEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXDEN field to a new value.
#define BW_ECSPI_DMAREG_RXDEN(x, v)   (HW_ECSPI_DMAREG_WR(x, (HW_ECSPI_DMAREG_RD(x) & ~BM_ECSPI_DMAREG_RXDEN) | BF_ECSPI_DMAREG_RXDEN(v)))
#endif


/* --- Register HW_ECSPI_DMAREG, field RX_DMA_LENGTH[29:24] (RW)
 *
 * RX DMA LENGTH. This field defines the burst length of a DMA operation. Applies only when RXTDEN
 * is set.
 */

#define BP_ECSPI_DMAREG_RX_DMA_LENGTH      (24)      //!< Bit position for ECSPI_DMAREG_RX_DMA_LENGTH.
#define BM_ECSPI_DMAREG_RX_DMA_LENGTH      (0x3f000000)  //!< Bit mask for ECSPI_DMAREG_RX_DMA_LENGTH.

//! @brief Get value of ECSPI_DMAREG_RX_DMA_LENGTH from a register value.
#define BG_ECSPI_DMAREG_RX_DMA_LENGTH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_DMAREG_RX_DMA_LENGTH) >> BP_ECSPI_DMAREG_RX_DMA_LENGTH)

//! @brief Format value for bitfield ECSPI_DMAREG_RX_DMA_LENGTH.
#define BF_ECSPI_DMAREG_RX_DMA_LENGTH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_DMAREG_RX_DMA_LENGTH) & BM_ECSPI_DMAREG_RX_DMA_LENGTH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RX_DMA_LENGTH field to a new value.
#define BW_ECSPI_DMAREG_RX_DMA_LENGTH(x, v)   (HW_ECSPI_DMAREG_WR(x, (HW_ECSPI_DMAREG_RD(x) & ~BM_ECSPI_DMAREG_RX_DMA_LENGTH) | BF_ECSPI_DMAREG_RX_DMA_LENGTH(v)))
#endif

/* --- Register HW_ECSPI_DMAREG, field RXTDEN[31] (RW)
 *
 * RXFIFO TAIL DMA Request Enable. This bit enables an internal counter that is increased at each
 * read of the RXFIFO. This counter is cleared automatically when it reaches RX DMA LENGTH. If the
 * number of words remaining in the RXFIFO is greater than or equal to RX DMA LENGTH, a DMA request
 * is generated even if it is less than or equal to RX THRESHOLD.
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_ECSPI_DMAREG_RXTDEN      (31)      //!< Bit position for ECSPI_DMAREG_RXTDEN.
#define BM_ECSPI_DMAREG_RXTDEN      (0x80000000)  //!< Bit mask for ECSPI_DMAREG_RXTDEN.

//! @brief Get value of ECSPI_DMAREG_RXTDEN from a register value.
#define BG_ECSPI_DMAREG_RXTDEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_DMAREG_RXTDEN) >> BP_ECSPI_DMAREG_RXTDEN)

//! @brief Format value for bitfield ECSPI_DMAREG_RXTDEN.
#define BF_ECSPI_DMAREG_RXTDEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_DMAREG_RXTDEN) & BM_ECSPI_DMAREG_RXTDEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXTDEN field to a new value.
#define BW_ECSPI_DMAREG_RXTDEN(x, v)   (HW_ECSPI_DMAREG_WR(x, (HW_ECSPI_DMAREG_RD(x) & ~BM_ECSPI_DMAREG_RXTDEN) | BF_ECSPI_DMAREG_RXTDEN(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_ECSPI_STATREG - Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_ECSPI_STATREG - Status Register (RW)
 *
 * Reset value: 0x00000003
 *
 * The ECSPI Status Register (ECSPI_STATREG) reflects the status of the ECSPI's operating condition.
 * If the ECSPI is disabled, this register reads 0x0000_0003.
 */
typedef union _hw_ecspi_statreg
{
    reg32_t U;
    struct _hw_ecspi_statreg_bitfields
    {
        unsigned TE : 1; //!< [0] TXFIFO Empty.
        unsigned TDR : 1; //!< [1] TXFIFO Data Request.
        unsigned TF : 1; //!< [2] TXFIFO Full.
        unsigned RR : 1; //!< [3] RXFIFO Ready.
        unsigned RDR : 1; //!< [4] RXFIFO Data Request.
        unsigned RF : 1; //!< [5] RXFIFO Full.
        unsigned RO : 1; //!< [6] RXFIFO Overflow.
        unsigned TC : 1; //!< [7] Transfer Completed Status bit.
        unsigned RESERVED0 : 24; //!< [31:8] Reserved
    } B;
} hw_ecspi_statreg_t;
#endif

/*
 * constants & macros for entire multi-block ECSPI_STATREG register
 */
#define HW_ECSPI_STATREG_ADDR(x)      (REGS_ECSPI_BASE(x) + 0x18)

#ifndef __LANGUAGE_ASM__
#define HW_ECSPI_STATREG(x)           (*(volatile hw_ecspi_statreg_t *) HW_ECSPI_STATREG_ADDR(x))
#define HW_ECSPI_STATREG_RD(x)        (HW_ECSPI_STATREG(x).U)
#define HW_ECSPI_STATREG_WR(x, v)     (HW_ECSPI_STATREG(x).U = (v))
#define HW_ECSPI_STATREG_SET(x, v)    (HW_ECSPI_STATREG_WR(x, HW_ECSPI_STATREG_RD(x) |  (v)))
#define HW_ECSPI_STATREG_CLR(x, v)    (HW_ECSPI_STATREG_WR(x, HW_ECSPI_STATREG_RD(x) & ~(v)))
#define HW_ECSPI_STATREG_TOG(x, v)    (HW_ECSPI_STATREG_WR(x, HW_ECSPI_STATREG_RD(x) ^  (v)))
#endif

/*
 * constants & macros for individual ECSPI_STATREG bitfields
 */

/* --- Register HW_ECSPI_STATREG, field TE[0] (RO)
 *
 * TXFIFO Empty. This bit is set if the TXFIFO is empty.
 *
 * Values:
 * 0 - TXFIFO contains one or more words.
 * 1 - TXFIFO is empty.
 */

#define BP_ECSPI_STATREG_TE      (0)      //!< Bit position for ECSPI_STATREG_TE.
#define BM_ECSPI_STATREG_TE      (0x00000001)  //!< Bit mask for ECSPI_STATREG_TE.

//! @brief Get value of ECSPI_STATREG_TE from a register value.
#define BG_ECSPI_STATREG_TE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_STATREG_TE) >> BP_ECSPI_STATREG_TE)


/* --- Register HW_ECSPI_STATREG, field TDR[1] (RO)
 *
 * TXFIFO Data Request.
 *
 * Values:
 * 0 - Number of empty slots in TXFIFO is greater than TX THRESHOLD.
 * 1 - Number of empty slots in TXFIFO is not greater than TX THRESHOLD.
 */

#define BP_ECSPI_STATREG_TDR      (1)      //!< Bit position for ECSPI_STATREG_TDR.
#define BM_ECSPI_STATREG_TDR      (0x00000002)  //!< Bit mask for ECSPI_STATREG_TDR.

//! @brief Get value of ECSPI_STATREG_TDR from a register value.
#define BG_ECSPI_STATREG_TDR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_STATREG_TDR) >> BP_ECSPI_STATREG_TDR)


/* --- Register HW_ECSPI_STATREG, field TF[2] (RO)
 *
 * TXFIFO Full. This bit is set when if the TXFIFO is full.
 *
 * Values:
 * 0 - TXFIFO is not Full.
 * 1 - TXFIFO is Full.
 */

#define BP_ECSPI_STATREG_TF      (2)      //!< Bit position for ECSPI_STATREG_TF.
#define BM_ECSPI_STATREG_TF      (0x00000004)  //!< Bit mask for ECSPI_STATREG_TF.

//! @brief Get value of ECSPI_STATREG_TF from a register value.
#define BG_ECSPI_STATREG_TF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_STATREG_TF) >> BP_ECSPI_STATREG_TF)


/* --- Register HW_ECSPI_STATREG, field RR[3] (RO)
 *
 * RXFIFO Ready. This bit is set when one or more words are stored in the RXFIFO.
 *
 * Values:
 * 0 - No valid data in RXFIFO.
 * 1 - More than 1 word in RXFIFO.
 */

#define BP_ECSPI_STATREG_RR      (3)      //!< Bit position for ECSPI_STATREG_RR.
#define BM_ECSPI_STATREG_RR      (0x00000008)  //!< Bit mask for ECSPI_STATREG_RR.

//! @brief Get value of ECSPI_STATREG_RR from a register value.
#define BG_ECSPI_STATREG_RR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_STATREG_RR) >> BP_ECSPI_STATREG_RR)


/* --- Register HW_ECSPI_STATREG, field RDR[4] (RO)
 *
 * RXFIFO Data Request.
 *
 * Values:
 * 0 - When RXTDE is set - Number of data entries in the RXFIFO is not greater than RX THRESHOLD.
 * 0 - When RXTDE is clear - Number of data entries in the RXFIFO is not greater than RX THRESHOLD.
 * 1 - When RXTDE is set - Number of data entries in the RXFIFO is greater than RX THRESHOLD or a DMA TAIL
 *     DMA condition exists.
 * 1 - When RXTDE is clear - Number of data entries in the RXFIFO is greater than RX THRESHOLD.
 */

#define BP_ECSPI_STATREG_RDR      (4)      //!< Bit position for ECSPI_STATREG_RDR.
#define BM_ECSPI_STATREG_RDR      (0x00000010)  //!< Bit mask for ECSPI_STATREG_RDR.

//! @brief Get value of ECSPI_STATREG_RDR from a register value.
#define BG_ECSPI_STATREG_RDR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_STATREG_RDR) >> BP_ECSPI_STATREG_RDR)


/* --- Register HW_ECSPI_STATREG, field RF[5] (RO)
 *
 * RXFIFO Full. This bit is set when the RXFIFO is full.
 *
 * Values:
 * 0 - Not Full.
 * 1 - Full.
 */

#define BP_ECSPI_STATREG_RF      (5)      //!< Bit position for ECSPI_STATREG_RF.
#define BM_ECSPI_STATREG_RF      (0x00000020)  //!< Bit mask for ECSPI_STATREG_RF.

//! @brief Get value of ECSPI_STATREG_RF from a register value.
#define BG_ECSPI_STATREG_RF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_STATREG_RF) >> BP_ECSPI_STATREG_RF)


/* --- Register HW_ECSPI_STATREG, field RO[6] (W1C)
 *
 * RXFIFO Overflow. When set, this bit indicates that RXFIFO has overflowed. Writing 1 to this bit
 * clears it.
 *
 * Values:
 * 0 - RXFIFO has no overflow.
 * 1 - RXFIFO has overflowed.
 */

#define BP_ECSPI_STATREG_RO      (6)      //!< Bit position for ECSPI_STATREG_RO.
#define BM_ECSPI_STATREG_RO      (0x00000040)  //!< Bit mask for ECSPI_STATREG_RO.

//! @brief Get value of ECSPI_STATREG_RO from a register value.
#define BG_ECSPI_STATREG_RO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_STATREG_RO) >> BP_ECSPI_STATREG_RO)

//! @brief Format value for bitfield ECSPI_STATREG_RO.
#define BF_ECSPI_STATREG_RO(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_STATREG_RO) & BM_ECSPI_STATREG_RO)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RO field to a new value.
#define BW_ECSPI_STATREG_RO(x, v)   (HW_ECSPI_STATREG_WR(x, (HW_ECSPI_STATREG_RD(x) & ~BM_ECSPI_STATREG_RO) | BF_ECSPI_STATREG_RO(v)))
#endif


/* --- Register HW_ECSPI_STATREG, field TC[7] (W1C)
 *
 * Transfer Completed Status bit. Writing 1 to this bit clears it.
 *
 * Values:
 * 0 - Transfer in progress.
 * 1 - Transfer completed.
 */

#define BP_ECSPI_STATREG_TC      (7)      //!< Bit position for ECSPI_STATREG_TC.
#define BM_ECSPI_STATREG_TC      (0x00000080)  //!< Bit mask for ECSPI_STATREG_TC.

//! @brief Get value of ECSPI_STATREG_TC from a register value.
#define BG_ECSPI_STATREG_TC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_STATREG_TC) >> BP_ECSPI_STATREG_TC)

//! @brief Format value for bitfield ECSPI_STATREG_TC.
#define BF_ECSPI_STATREG_TC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_STATREG_TC) & BM_ECSPI_STATREG_TC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TC field to a new value.
#define BW_ECSPI_STATREG_TC(x, v)   (HW_ECSPI_STATREG_WR(x, (HW_ECSPI_STATREG_RD(x) & ~BM_ECSPI_STATREG_TC) | BF_ECSPI_STATREG_TC(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_ECSPI_PERIODREG - Sample Period Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_ECSPI_PERIODREG - Sample Period Control Register (RW)
 *
 * Reset value: 0x00000000
 *
 * The Sample Period Control Register (ECSPI_PERIODREG) provides software a way to insert delays
 * (wait states) between consecutive SPI transfers. Control bits in this register select the clock
 * source for the sample period counter and the delay count indicating the number of wait states to
 * be inserted between data transfers.   The delay counts apply only when the current channel is
 * operating in Master mode (ECSPI_CONREG[CHANNEL MODE] = 1).ECSPI_PERIODREG also contains the CSD
 * CTRL field used to insert a delay between the Chip Select's active edge and the first SPI Clock
 * edge.
 */
typedef union _hw_ecspi_periodreg
{
    reg32_t U;
    struct _hw_ecspi_periodreg_bitfields
    {
        unsigned SAMPLE_PERIOD : 15; //!< [14:0] Sample Period Control.
        unsigned CSRC : 1; //!< [15] Clock Source Control.
        unsigned CSD_CTL : 6; //!< [21:16] Chip Select Delay Control bits.
        unsigned RESERVED0 : 10; //!< [31:22] Reserved
    } B;
} hw_ecspi_periodreg_t;
#endif

/*
 * constants & macros for entire multi-block ECSPI_PERIODREG register
 */
#define HW_ECSPI_PERIODREG_ADDR(x)      (REGS_ECSPI_BASE(x) + 0x1c)

#ifndef __LANGUAGE_ASM__
#define HW_ECSPI_PERIODREG(x)           (*(volatile hw_ecspi_periodreg_t *) HW_ECSPI_PERIODREG_ADDR(x))
#define HW_ECSPI_PERIODREG_RD(x)        (HW_ECSPI_PERIODREG(x).U)
#define HW_ECSPI_PERIODREG_WR(x, v)     (HW_ECSPI_PERIODREG(x).U = (v))
#define HW_ECSPI_PERIODREG_SET(x, v)    (HW_ECSPI_PERIODREG_WR(x, HW_ECSPI_PERIODREG_RD(x) |  (v)))
#define HW_ECSPI_PERIODREG_CLR(x, v)    (HW_ECSPI_PERIODREG_WR(x, HW_ECSPI_PERIODREG_RD(x) & ~(v)))
#define HW_ECSPI_PERIODREG_TOG(x, v)    (HW_ECSPI_PERIODREG_WR(x, HW_ECSPI_PERIODREG_RD(x) ^  (v)))
#endif

/*
 * constants & macros for individual ECSPI_PERIODREG bitfields
 */

/* --- Register HW_ECSPI_PERIODREG, field SAMPLE_PERIOD[14:0] (RW)
 *
 * Sample Period Control. These bits control the number of wait states to be inserted in data
 * transfers. During the idle clocks, the state of the SS output will operate according to the
 * SS_CTL control field in the ECSPI_CONREG register.
 *
 * Values:
 * 0x0000 - 0 wait states inserted
 * ... - ...
 * 0x0001 - 1 wait state inserted
 * 0x7FFE - 32766 wait states inserted
 * 0x7FFF - 32767 wait states inserted
 */

#define BP_ECSPI_PERIODREG_SAMPLE_PERIOD      (0)      //!< Bit position for ECSPI_PERIODREG_SAMPLE_PERIOD.
#define BM_ECSPI_PERIODREG_SAMPLE_PERIOD      (0x00007fff)  //!< Bit mask for ECSPI_PERIODREG_SAMPLE_PERIOD.

//! @brief Get value of ECSPI_PERIODREG_SAMPLE_PERIOD from a register value.
#define BG_ECSPI_PERIODREG_SAMPLE_PERIOD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_PERIODREG_SAMPLE_PERIOD) >> BP_ECSPI_PERIODREG_SAMPLE_PERIOD)

//! @brief Format value for bitfield ECSPI_PERIODREG_SAMPLE_PERIOD.
#define BF_ECSPI_PERIODREG_SAMPLE_PERIOD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_PERIODREG_SAMPLE_PERIOD) & BM_ECSPI_PERIODREG_SAMPLE_PERIOD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SAMPLE_PERIOD field to a new value.
#define BW_ECSPI_PERIODREG_SAMPLE_PERIOD(x, v)   (HW_ECSPI_PERIODREG_WR(x, (HW_ECSPI_PERIODREG_RD(x) & ~BM_ECSPI_PERIODREG_SAMPLE_PERIOD) | BF_ECSPI_PERIODREG_SAMPLE_PERIOD(v)))
#endif


/* --- Register HW_ECSPI_PERIODREG, field CSRC[15] (RW)
 *
 * Clock Source Control. This bit selects the clock source for the sample period counter.
 *
 * Values:
 * 0 - SPI Clock (SCLK)
 * 1 - Low-Frequency Reference Clock (32.768 KHz)
 */

#define BP_ECSPI_PERIODREG_CSRC      (15)      //!< Bit position for ECSPI_PERIODREG_CSRC.
#define BM_ECSPI_PERIODREG_CSRC      (0x00008000)  //!< Bit mask for ECSPI_PERIODREG_CSRC.

//! @brief Get value of ECSPI_PERIODREG_CSRC from a register value.
#define BG_ECSPI_PERIODREG_CSRC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_PERIODREG_CSRC) >> BP_ECSPI_PERIODREG_CSRC)

//! @brief Format value for bitfield ECSPI_PERIODREG_CSRC.
#define BF_ECSPI_PERIODREG_CSRC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_PERIODREG_CSRC) & BM_ECSPI_PERIODREG_CSRC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSRC field to a new value.
#define BW_ECSPI_PERIODREG_CSRC(x, v)   (HW_ECSPI_PERIODREG_WR(x, (HW_ECSPI_PERIODREG_RD(x) & ~BM_ECSPI_PERIODREG_CSRC) | BF_ECSPI_PERIODREG_CSRC(v)))
#endif


/* --- Register HW_ECSPI_PERIODREG, field CSD_CTL[21:16] (RW)
 *
 * Chip Select Delay Control bits. This field defines how many SPI clocks will be inserted between
 * the chip select's active edge and the first SPI clock edge. The range is from 0 to 63.
 */

#define BP_ECSPI_PERIODREG_CSD_CTL      (16)      //!< Bit position for ECSPI_PERIODREG_CSD_CTL.
#define BM_ECSPI_PERIODREG_CSD_CTL      (0x003f0000)  //!< Bit mask for ECSPI_PERIODREG_CSD_CTL.

//! @brief Get value of ECSPI_PERIODREG_CSD_CTL from a register value.
#define BG_ECSPI_PERIODREG_CSD_CTL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_PERIODREG_CSD_CTL) >> BP_ECSPI_PERIODREG_CSD_CTL)

//! @brief Format value for bitfield ECSPI_PERIODREG_CSD_CTL.
#define BF_ECSPI_PERIODREG_CSD_CTL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_PERIODREG_CSD_CTL) & BM_ECSPI_PERIODREG_CSD_CTL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSD_CTL field to a new value.
#define BW_ECSPI_PERIODREG_CSD_CTL(x, v)   (HW_ECSPI_PERIODREG_WR(x, (HW_ECSPI_PERIODREG_RD(x) & ~BM_ECSPI_PERIODREG_CSD_CTL) | BF_ECSPI_PERIODREG_CSD_CTL(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_ECSPI_TESTREG - Test Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_ECSPI_TESTREG - Test Control Register (RW)
 *
 * Reset value: 0x00000000
 *
 * The Test Control Register (ECSPI_TESTREG) provides software a mechanism to internally connect the
 * receive and transmit devices of the ECSPI  , and monitor the contents of the receive and transmit
 * FIFOs.
 */
typedef union _hw_ecspi_testreg
{
    reg32_t U;
    struct _hw_ecspi_testreg_bitfields
    {
        unsigned TXCNT : 7; //!< [6:0] TXFIFO Counter.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned RXCNT : 7; //!< [14:8] RXFIFO Counter.
        unsigned RESERVED1 : 16; //!< [30:15] Reserved.
        unsigned LBC : 1; //!< [31] Loop Back Control.
    } B;
} hw_ecspi_testreg_t;
#endif

/*
 * constants & macros for entire multi-block ECSPI_TESTREG register
 */
#define HW_ECSPI_TESTREG_ADDR(x)      (REGS_ECSPI_BASE(x) + 0x20)

#ifndef __LANGUAGE_ASM__
#define HW_ECSPI_TESTREG(x)           (*(volatile hw_ecspi_testreg_t *) HW_ECSPI_TESTREG_ADDR(x))
#define HW_ECSPI_TESTREG_RD(x)        (HW_ECSPI_TESTREG(x).U)
#define HW_ECSPI_TESTREG_WR(x, v)     (HW_ECSPI_TESTREG(x).U = (v))
#define HW_ECSPI_TESTREG_SET(x, v)    (HW_ECSPI_TESTREG_WR(x, HW_ECSPI_TESTREG_RD(x) |  (v)))
#define HW_ECSPI_TESTREG_CLR(x, v)    (HW_ECSPI_TESTREG_WR(x, HW_ECSPI_TESTREG_RD(x) & ~(v)))
#define HW_ECSPI_TESTREG_TOG(x, v)    (HW_ECSPI_TESTREG_WR(x, HW_ECSPI_TESTREG_RD(x) ^  (v)))
#endif

/*
 * constants & macros for individual ECSPI_TESTREG bitfields
 */

/* --- Register HW_ECSPI_TESTREG, field TXCNT[6:0] (RW)
 *
 * TXFIFO Counter. This field indicates the number of words in the TXFIFO.
 */

#define BP_ECSPI_TESTREG_TXCNT      (0)      //!< Bit position for ECSPI_TESTREG_TXCNT.
#define BM_ECSPI_TESTREG_TXCNT      (0x0000007f)  //!< Bit mask for ECSPI_TESTREG_TXCNT.

//! @brief Get value of ECSPI_TESTREG_TXCNT from a register value.
#define BG_ECSPI_TESTREG_TXCNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_TESTREG_TXCNT) >> BP_ECSPI_TESTREG_TXCNT)

//! @brief Format value for bitfield ECSPI_TESTREG_TXCNT.
#define BF_ECSPI_TESTREG_TXCNT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_TESTREG_TXCNT) & BM_ECSPI_TESTREG_TXCNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXCNT field to a new value.
#define BW_ECSPI_TESTREG_TXCNT(x, v)   (HW_ECSPI_TESTREG_WR(x, (HW_ECSPI_TESTREG_RD(x) & ~BM_ECSPI_TESTREG_TXCNT) | BF_ECSPI_TESTREG_TXCNT(v)))
#endif

/* --- Register HW_ECSPI_TESTREG, field RXCNT[14:8] (RW)
 *
 * RXFIFO Counter. This field indicates the number of words in the RXFIFO.
 */

#define BP_ECSPI_TESTREG_RXCNT      (8)      //!< Bit position for ECSPI_TESTREG_RXCNT.
#define BM_ECSPI_TESTREG_RXCNT      (0x00007f00)  //!< Bit mask for ECSPI_TESTREG_RXCNT.

//! @brief Get value of ECSPI_TESTREG_RXCNT from a register value.
#define BG_ECSPI_TESTREG_RXCNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_TESTREG_RXCNT) >> BP_ECSPI_TESTREG_RXCNT)

//! @brief Format value for bitfield ECSPI_TESTREG_RXCNT.
#define BF_ECSPI_TESTREG_RXCNT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_TESTREG_RXCNT) & BM_ECSPI_TESTREG_RXCNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXCNT field to a new value.
#define BW_ECSPI_TESTREG_RXCNT(x, v)   (HW_ECSPI_TESTREG_WR(x, (HW_ECSPI_TESTREG_RD(x) & ~BM_ECSPI_TESTREG_RXCNT) | BF_ECSPI_TESTREG_RXCNT(v)))
#endif

/* --- Register HW_ECSPI_TESTREG, field LBC[31] (RW)
 *
 * Loop Back Control. This bit is used in Master mode only. When this bit is set, the ECSPI connects
 * the transmitter and receiver sections internally, and the data shifted out from the most-
 * significant bit of the shift register is looped back into the least-significant bit of the Shift
 * register. In this way, a self-test of the complete transmit/receive path can be made. The output
 * pins are not affected, and the input pins are ignored.
 *
 * Values:
 * 0 - Not connected.
 * 1 - Transmitter and receiver sections internally connected for Loopback.
 */

#define BP_ECSPI_TESTREG_LBC      (31)      //!< Bit position for ECSPI_TESTREG_LBC.
#define BM_ECSPI_TESTREG_LBC      (0x80000000)  //!< Bit mask for ECSPI_TESTREG_LBC.

//! @brief Get value of ECSPI_TESTREG_LBC from a register value.
#define BG_ECSPI_TESTREG_LBC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_TESTREG_LBC) >> BP_ECSPI_TESTREG_LBC)

//! @brief Format value for bitfield ECSPI_TESTREG_LBC.
#define BF_ECSPI_TESTREG_LBC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_TESTREG_LBC) & BM_ECSPI_TESTREG_LBC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LBC field to a new value.
#define BW_ECSPI_TESTREG_LBC(x, v)   (HW_ECSPI_TESTREG_WR(x, (HW_ECSPI_TESTREG_RD(x) & ~BM_ECSPI_TESTREG_LBC) | BF_ECSPI_TESTREG_LBC(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_ECSPI_MSGDATA - Message Data Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_ECSPI_MSGDATA - Message Data Register (WO)
 *
 * Reset value: 0x00000000
 *
 * The Message Data Register (ECSPI_MSGDATA) forms the top word of the 16 x 32 MSG Data FIFO. Only
 * word-size accesses are allowed for this register. Reads to this register return zero, and writes
 * to this register store data in the MSG Data FIFO. See .
 */
typedef union _hw_ecspi_msgdata
{
    reg32_t U;
    struct _hw_ecspi_msgdata_bitfields
    {
        unsigned ECSPI_MSGDATA : 32; //!< [31:0] ECSPI_MSGDATA holds the top word of MSG Data FIFO.
    } B;
} hw_ecspi_msgdata_t;
#endif

/*
 * constants & macros for entire multi-block ECSPI_MSGDATA register
 */
#define HW_ECSPI_MSGDATA_ADDR(x)      (REGS_ECSPI_BASE(x) + 0x40)

#ifndef __LANGUAGE_ASM__
#define HW_ECSPI_MSGDATA(x)           (*(volatile hw_ecspi_msgdata_t *) HW_ECSPI_MSGDATA_ADDR(x))
#define HW_ECSPI_MSGDATA_WR(x, v)     (HW_ECSPI_MSGDATA(x).U = (v))
#endif

/*
 * constants & macros for individual ECSPI_MSGDATA bitfields
 */

/* --- Register HW_ECSPI_MSGDATA, field ECSPI_MSGDATA[31:0] (WO)
 *
 * ECSPI_MSGDATA holds the top word of MSG Data FIFO. The MSG Data FIFO is advanced for each write
 * of this register. The data read is zero. The data written to this register is stored in the MSG
 * Data FIFO.
 */

#define BP_ECSPI_MSGDATA_ECSPI_MSGDATA      (0)      //!< Bit position for ECSPI_MSGDATA_ECSPI_MSGDATA.
#define BM_ECSPI_MSGDATA_ECSPI_MSGDATA      (0xffffffff)  //!< Bit mask for ECSPI_MSGDATA_ECSPI_MSGDATA.

//! @brief Get value of ECSPI_MSGDATA_ECSPI_MSGDATA from a register value.
#define BG_ECSPI_MSGDATA_ECSPI_MSGDATA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_ECSPI_MSGDATA_ECSPI_MSGDATA) >> BP_ECSPI_MSGDATA_ECSPI_MSGDATA)

//! @brief Format value for bitfield ECSPI_MSGDATA_ECSPI_MSGDATA.
#define BF_ECSPI_MSGDATA_ECSPI_MSGDATA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_ECSPI_MSGDATA_ECSPI_MSGDATA) & BM_ECSPI_MSGDATA_ECSPI_MSGDATA)


/*!
 * @brief All ECSPI module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_ecspi
{
    volatile hw_ecspi_rxdata_t RXDATA; //!< Receive Data Register
    volatile hw_ecspi_txdata_t TXDATA; //!< Transmit Data Register
    volatile hw_ecspi_conreg_t CONREG; //!< Control Register
    volatile hw_ecspi_configreg_t CONFIGREG; //!< Config Register
    volatile hw_ecspi_intreg_t INTREG; //!< Interrupt Control Register
    volatile hw_ecspi_dmareg_t DMAREG; //!< DMA Control Register
    volatile hw_ecspi_statreg_t STATREG; //!< Status Register
    volatile hw_ecspi_periodreg_t PERIODREG; //!< Sample Period Control Register
    volatile hw_ecspi_testreg_t TESTREG; //!< Test Control Register
    reg32_t _reserved0[7];
    volatile hw_ecspi_msgdata_t MSGDATA; //!< Message Data Register
} hw_ecspi_t;
#pragma pack()

//! @brief Macro to access all ECSPI registers.
//! @param x ECSPI instance number.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_ECSPI(0)</code>.
#define HW_ECSPI(x)     (*(volatile hw_ecspi_t *) REGS_ECSPI_BASE(x))

#endif


#endif // __HW_ECSPI_REGISTERS_H__
