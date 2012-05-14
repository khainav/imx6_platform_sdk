/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef __HW_FEC_REGISTERS_H__
#define __HW_FEC_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SL FEC registers defined in this header file.
 *
 * - HW_FEC_EIR - Ethernet interrupt event register
 * - HW_FEC_EIMR - Ethernet interrupt mask register
 * - HW_FEC_RDAR - Receive descriptor active register
 * - HW_FEC_TDAR - Transmit descriptor active register
 * - HW_FEC_ECR - Ethernet control register
 * - HW_FEC_MMFR - MII management frame register
 * - HW_FEC_MSCR - MII speed control register
 * - HW_FEC_MIBC - MIB control register
 * - HW_FEC_RCR - Receive control register
 * - HW_FEC_TCR - Transmit control register
 * - HW_FEC_PALR - Physical address low register
 * - HW_FEC_PAUR - Physical address upper register
 * - HW_FEC_OPDR - Opcode and pause duration register
 * - HW_FEC_IAUR - Descriptor individual address upper register
 * - HW_FEC_IALR - Descriptor individual address lower register
 * - HW_FEC_GAUR - Descriptor group address upper register
 * - HW_FEC_GALR - Descriptor group address lower register
 * - HW_FEC_TFWR - Transmit FIFO watermark register
 * - HW_FEC_FRBR - FIFO receive bound register
 * - HW_FEC_FRSR - FIFO receive FIFO start registers
 * - HW_FEC_ERDSR - Receive buffer descriptor ring start register
 * - HW_FEC_ETDSR - Transmit buffer descriptor ring start register
 * - HW_FEC_EMRBR - Maximum receive buffer size register
 *
 * - hw_fec_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_FEC_BASE
#define HW_FEC_INSTANCE_COUNT (1) //!< Number of instances of the FEC module.
#define REGS_FEC_BASE (0x02188000) //!< Base address for FEC.
#endif
//@}


//-------------------------------------------------------------------------------------------
// HW_FEC_EIR - Ethernet interrupt event register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_EIR - Ethernet interrupt event register (RW)
 *
 * Reset value: 0x00000000
 *
 * The FEC_EIR bit assignments are shown below. When an event occurs that sets a bit in the FEC_EIR,
 * an interrupt is generated if the corresponding bit in the interrupt mask register (FEC_EIMR) is
 * also set. The bit in the FEC_EIR is cleared if a one is written to that bit position; writing
 * zero has no effect. This register is cleared upon hardware reset.  Interrupts can be divided into
 * three classes as follows:   Interrupts that occur in normal operation: these include GRA, TXF,
 * TXB, RXF, RXB, and MII.  Interrupts that result from errors or problems detected in the network
 * or transceiver: these include HBERR, BABR, BABT, LC, and RL.  Interrupts that result from
 * internal errors are EBERR and UN.   Some of the error interrupts are independently counted in the
 * MIB block counters. The correspondence between interrupts and counters is shown in the following
 * table. Software can choose to mask off the interrupts because these errors are visible to network
 * management through the MIB counters.   Error Interrupts and Block Counters        Interrupt
 * Counter(s)        HBERR    IEEE_T_SQE      BABR    RMON_R_OVERSIZE (good CRC), RMON_R_JAB (bad
 * CRC)      BABT    RMON_T_OVERSIZE (good CRC), RMON_T_JAB (bad CRC)      LATE_COL    IEEE_T_LCOL
 * COL_RETRY_LIM    IEEE_T_EXCOL      XFIFO_UN    IEEE_T_MACERR
 */
typedef union _hw_fec_eir
{
    reg32_t U;
    struct _hw_fec_eir_bitfields
    {
        unsigned RESERVED0 : 19; //!< [18:0] Reserved, read as 0
        unsigned UN : 1; //!< [19] Transmit FIFO underrun.
        unsigned RL : 1; //!< [20] Collision retry limit.
        unsigned LC : 1; //!< [21] Late collision.
        unsigned EBERR : 1; //!< [22] Ethernet bus error.
        unsigned MII : 1; //!< [23] MII interrupt.
        unsigned RXB : 1; //!< [24] Receive buffer interrupt.
        unsigned RXF : 1; //!< [25] Receive frame interrupt.
        unsigned TXB : 1; //!< [26] Transmit buffer interrupt.
        unsigned TXF : 1; //!< [27] Transmit frame interrupt.
        unsigned GRA : 1; //!< [28] Graceful stop complete.
        unsigned BABT : 1; //!< [29] Babbling transmit error.
        unsigned BABR : 1; //!< [30] Babbling receive error.
        unsigned HBERR : 1; //!< [31] Heartbeat error.
    } B;
} hw_fec_eir_t;
#endif

/*
 * constants & macros for entire FEC_EIR register
 */
#define HW_FEC_EIR_ADDR      (REGS_FEC_BASE + 0x4)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_EIR           (*(volatile hw_fec_eir_t *) HW_FEC_EIR_ADDR)
#define HW_FEC_EIR_RD()      (HW_FEC_EIR.U)
#define HW_FEC_EIR_WR(v)     (HW_FEC_EIR.U = (v))
#define HW_FEC_EIR_SET(v)    (HW_FEC_EIR_WR(HW_FEC_EIR_RD() |  (v)))
#define HW_FEC_EIR_CLR(v)    (HW_FEC_EIR_WR(HW_FEC_EIR_RD() & ~(v)))
#define HW_FEC_EIR_TOG(v)    (HW_FEC_EIR_WR(HW_FEC_EIR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_EIR bitfields
 */

/* --- Register HW_FEC_EIR, field UN[19] (RW)
 *
 * Transmit FIFO underrun. This bit indicates that the transmit FIFO became empty before the
 * complete frame was transmitted. A bad CRC is appended to the frame fragment and the remainder of
 * the frame is discarded.
 */

#define BP_FEC_EIR_UN      (19)      //!< Bit position for FEC_EIR_UN.
#define BM_FEC_EIR_UN      (0x00080000)  //!< Bit mask for FEC_EIR_UN.

//! @brief Get value of FEC_EIR_UN from a register value.
#define BG_FEC_EIR_UN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIR_UN) >> BP_FEC_EIR_UN)

//! @brief Format value for bitfield FEC_EIR_UN.
#define BF_FEC_EIR_UN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIR_UN) & BM_FEC_EIR_UN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UN field to a new value.
#define BW_FEC_EIR_UN(v)   (HW_FEC_EIR_WR((HW_FEC_EIR_RD() & ~BM_FEC_EIR_UN) | BF_FEC_EIR_UN(v)))
#endif

/* --- Register HW_FEC_EIR, field RL[20] (RW)
 *
 * Collision retry limit. This bit indicates that a collision occurred on each of 16 successive
 * attempts to transmit the frame. The frame is discarded without being transmitted and transmission
 * of the next frame commences. Can only occur in half-duplex mode.
 */

#define BP_FEC_EIR_RL      (20)      //!< Bit position for FEC_EIR_RL.
#define BM_FEC_EIR_RL      (0x00100000)  //!< Bit mask for FEC_EIR_RL.

//! @brief Get value of FEC_EIR_RL from a register value.
#define BG_FEC_EIR_RL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIR_RL) >> BP_FEC_EIR_RL)

//! @brief Format value for bitfield FEC_EIR_RL.
#define BF_FEC_EIR_RL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIR_RL) & BM_FEC_EIR_RL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RL field to a new value.
#define BW_FEC_EIR_RL(v)   (HW_FEC_EIR_WR((HW_FEC_EIR_RD() & ~BM_FEC_EIR_RL) | BF_FEC_EIR_RL(v)))
#endif

/* --- Register HW_FEC_EIR, field LC[21] (RW)
 *
 * Late collision. This bit indicates that a collision occurred beyond the collision window (slot
 * time) in half-duplex mode. The frame is truncated with a bad CRC and the remainder of the frame
 * is discarded.
 */

#define BP_FEC_EIR_LC      (21)      //!< Bit position for FEC_EIR_LC.
#define BM_FEC_EIR_LC      (0x00200000)  //!< Bit mask for FEC_EIR_LC.

//! @brief Get value of FEC_EIR_LC from a register value.
#define BG_FEC_EIR_LC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIR_LC) >> BP_FEC_EIR_LC)

//! @brief Format value for bitfield FEC_EIR_LC.
#define BF_FEC_EIR_LC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIR_LC) & BM_FEC_EIR_LC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LC field to a new value.
#define BW_FEC_EIR_LC(v)   (HW_FEC_EIR_WR((HW_FEC_EIR_RD() & ~BM_FEC_EIR_LC) | BF_FEC_EIR_LC(v)))
#endif

/* --- Register HW_FEC_EIR, field EBERR[22] (RW)
 *
 * Ethernet bus error. This bit indicates that a system bus error occurred when a DMA transaction
 * was underway. When the EBERR bit is set, FEC_ECR[ETHER_EN] is cleared, halting frame processing
 * by the FEC_ When this occurs software needs to insure that the FIFO controller and DMA are also
 * soft reset.
 */

#define BP_FEC_EIR_EBERR      (22)      //!< Bit position for FEC_EIR_EBERR.
#define BM_FEC_EIR_EBERR      (0x00400000)  //!< Bit mask for FEC_EIR_EBERR.

//! @brief Get value of FEC_EIR_EBERR from a register value.
#define BG_FEC_EIR_EBERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIR_EBERR) >> BP_FEC_EIR_EBERR)

//! @brief Format value for bitfield FEC_EIR_EBERR.
#define BF_FEC_EIR_EBERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIR_EBERR) & BM_FEC_EIR_EBERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EBERR field to a new value.
#define BW_FEC_EIR_EBERR(v)   (HW_FEC_EIR_WR((HW_FEC_EIR_RD() & ~BM_FEC_EIR_EBERR) | BF_FEC_EIR_EBERR(v)))
#endif

/* --- Register HW_FEC_EIR, field MII[23] (RW)
 *
 * MII interrupt. This bit indicates that the MII has completed the data transfer requested.
 */

#define BP_FEC_EIR_MII      (23)      //!< Bit position for FEC_EIR_MII.
#define BM_FEC_EIR_MII      (0x00800000)  //!< Bit mask for FEC_EIR_MII.

//! @brief Get value of FEC_EIR_MII from a register value.
#define BG_FEC_EIR_MII(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIR_MII) >> BP_FEC_EIR_MII)

//! @brief Format value for bitfield FEC_EIR_MII.
#define BF_FEC_EIR_MII(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIR_MII) & BM_FEC_EIR_MII)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MII field to a new value.
#define BW_FEC_EIR_MII(v)   (HW_FEC_EIR_WR((HW_FEC_EIR_RD() & ~BM_FEC_EIR_MII) | BF_FEC_EIR_MII(v)))
#endif

/* --- Register HW_FEC_EIR, field RXB[24] (RW)
 *
 * Receive buffer interrupt. This bit indicates that a receive buffer descriptor has been updated
 * that was not the last in the frame.
 */

#define BP_FEC_EIR_RXB      (24)      //!< Bit position for FEC_EIR_RXB.
#define BM_FEC_EIR_RXB      (0x01000000)  //!< Bit mask for FEC_EIR_RXB.

//! @brief Get value of FEC_EIR_RXB from a register value.
#define BG_FEC_EIR_RXB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIR_RXB) >> BP_FEC_EIR_RXB)

//! @brief Format value for bitfield FEC_EIR_RXB.
#define BF_FEC_EIR_RXB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIR_RXB) & BM_FEC_EIR_RXB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXB field to a new value.
#define BW_FEC_EIR_RXB(v)   (HW_FEC_EIR_WR((HW_FEC_EIR_RD() & ~BM_FEC_EIR_RXB) | BF_FEC_EIR_RXB(v)))
#endif

/* --- Register HW_FEC_EIR, field RXF[25] (RW)
 *
 * Receive frame interrupt. This bit indicates that a frame has been received and that the last
 * corresponding buffer descriptor has been updated.
 */

#define BP_FEC_EIR_RXF      (25)      //!< Bit position for FEC_EIR_RXF.
#define BM_FEC_EIR_RXF      (0x02000000)  //!< Bit mask for FEC_EIR_RXF.

//! @brief Get value of FEC_EIR_RXF from a register value.
#define BG_FEC_EIR_RXF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIR_RXF) >> BP_FEC_EIR_RXF)

//! @brief Format value for bitfield FEC_EIR_RXF.
#define BF_FEC_EIR_RXF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIR_RXF) & BM_FEC_EIR_RXF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXF field to a new value.
#define BW_FEC_EIR_RXF(v)   (HW_FEC_EIR_WR((HW_FEC_EIR_RD() & ~BM_FEC_EIR_RXF) | BF_FEC_EIR_RXF(v)))
#endif

/* --- Register HW_FEC_EIR, field TXB[26] (RW)
 *
 * Transmit buffer interrupt. This bit indicates that a transmit buffer descriptor has been updated.
 */

#define BP_FEC_EIR_TXB      (26)      //!< Bit position for FEC_EIR_TXB.
#define BM_FEC_EIR_TXB      (0x04000000)  //!< Bit mask for FEC_EIR_TXB.

//! @brief Get value of FEC_EIR_TXB from a register value.
#define BG_FEC_EIR_TXB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIR_TXB) >> BP_FEC_EIR_TXB)

//! @brief Format value for bitfield FEC_EIR_TXB.
#define BF_FEC_EIR_TXB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIR_TXB) & BM_FEC_EIR_TXB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXB field to a new value.
#define BW_FEC_EIR_TXB(v)   (HW_FEC_EIR_WR((HW_FEC_EIR_RD() & ~BM_FEC_EIR_TXB) | BF_FEC_EIR_TXB(v)))
#endif

/* --- Register HW_FEC_EIR, field TXF[27] (RW)
 *
 * Transmit frame interrupt. This bit indicates that a frame has been transmitted and that the last
 * corresponding buffer descriptor has been updated.
 */

#define BP_FEC_EIR_TXF      (27)      //!< Bit position for FEC_EIR_TXF.
#define BM_FEC_EIR_TXF      (0x08000000)  //!< Bit mask for FEC_EIR_TXF.

//! @brief Get value of FEC_EIR_TXF from a register value.
#define BG_FEC_EIR_TXF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIR_TXF) >> BP_FEC_EIR_TXF)

//! @brief Format value for bitfield FEC_EIR_TXF.
#define BF_FEC_EIR_TXF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIR_TXF) & BM_FEC_EIR_TXF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXF field to a new value.
#define BW_FEC_EIR_TXF(v)   (HW_FEC_EIR_WR((HW_FEC_EIR_RD() & ~BM_FEC_EIR_TXF) | BF_FEC_EIR_TXF(v)))
#endif

/* --- Register HW_FEC_EIR, field GRA[28] (RW)
 *
 * Graceful stop complete. This interrupt is asserted for one of three reasons. Graceful stop means
 * that the transmitter is put into a pause state after completion of the frame currently being
 * transmitted. 1) A graceful stop, which was initiated by the setting of the FEC_TCR[GTS] bit is
 * now complete. 2) A graceful stop, which was initiated by the setting of the FEC_TCR[TFC_PAUSE]
 * bit is now complete. 3) A graceful stop, which was initiated by the reception of a valid full-
 * duplex flow control "pause" frame is now complete. See the "Full-Duplex Flow Control" section of
 * the Functional Description chapter.
 */

#define BP_FEC_EIR_GRA      (28)      //!< Bit position for FEC_EIR_GRA.
#define BM_FEC_EIR_GRA      (0x10000000)  //!< Bit mask for FEC_EIR_GRA.

//! @brief Get value of FEC_EIR_GRA from a register value.
#define BG_FEC_EIR_GRA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIR_GRA) >> BP_FEC_EIR_GRA)

//! @brief Format value for bitfield FEC_EIR_GRA.
#define BF_FEC_EIR_GRA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIR_GRA) & BM_FEC_EIR_GRA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GRA field to a new value.
#define BW_FEC_EIR_GRA(v)   (HW_FEC_EIR_WR((HW_FEC_EIR_RD() & ~BM_FEC_EIR_GRA) | BF_FEC_EIR_GRA(v)))
#endif

/* --- Register HW_FEC_EIR, field BABT[29] (RW)
 *
 * Babbling transmit error. This bit indicates that the transmitted frame length has exceeded
 * FEC_RCR[MAX_FL] bytes. This condition is usually caused by a frame that is too long being placed
 * into the transmit data buffer(s). Truncation does not occur.
 */

#define BP_FEC_EIR_BABT      (29)      //!< Bit position for FEC_EIR_BABT.
#define BM_FEC_EIR_BABT      (0x20000000)  //!< Bit mask for FEC_EIR_BABT.

//! @brief Get value of FEC_EIR_BABT from a register value.
#define BG_FEC_EIR_BABT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIR_BABT) >> BP_FEC_EIR_BABT)

//! @brief Format value for bitfield FEC_EIR_BABT.
#define BF_FEC_EIR_BABT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIR_BABT) & BM_FEC_EIR_BABT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BABT field to a new value.
#define BW_FEC_EIR_BABT(v)   (HW_FEC_EIR_WR((HW_FEC_EIR_RD() & ~BM_FEC_EIR_BABT) | BF_FEC_EIR_BABT(v)))
#endif

/* --- Register HW_FEC_EIR, field BABR[30] (RW)
 *
 * Babbling receive error. This bit indicates a frame was received with length in excess of
 * FEC_RCR[MAX_FL] bytes.
 */

#define BP_FEC_EIR_BABR      (30)      //!< Bit position for FEC_EIR_BABR.
#define BM_FEC_EIR_BABR      (0x40000000)  //!< Bit mask for FEC_EIR_BABR.

//! @brief Get value of FEC_EIR_BABR from a register value.
#define BG_FEC_EIR_BABR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIR_BABR) >> BP_FEC_EIR_BABR)

//! @brief Format value for bitfield FEC_EIR_BABR.
#define BF_FEC_EIR_BABR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIR_BABR) & BM_FEC_EIR_BABR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BABR field to a new value.
#define BW_FEC_EIR_BABR(v)   (HW_FEC_EIR_WR((HW_FEC_EIR_RD() & ~BM_FEC_EIR_BABR) | BF_FEC_EIR_BABR(v)))
#endif

/* --- Register HW_FEC_EIR, field HBERR[31] (RW)
 *
 * Heartbeat error. This interrupt indicates that HBC is set in the FEC_TCR register and that the
 * COL input was not asserted within the Heartbeat window following a transmission.
 */

#define BP_FEC_EIR_HBERR      (31)      //!< Bit position for FEC_EIR_HBERR.
#define BM_FEC_EIR_HBERR      (0x80000000)  //!< Bit mask for FEC_EIR_HBERR.

//! @brief Get value of FEC_EIR_HBERR from a register value.
#define BG_FEC_EIR_HBERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIR_HBERR) >> BP_FEC_EIR_HBERR)

//! @brief Format value for bitfield FEC_EIR_HBERR.
#define BF_FEC_EIR_HBERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIR_HBERR) & BM_FEC_EIR_HBERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HBERR field to a new value.
#define BW_FEC_EIR_HBERR(v)   (HW_FEC_EIR_WR((HW_FEC_EIR_RD() & ~BM_FEC_EIR_HBERR) | BF_FEC_EIR_HBERR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_EIMR - Ethernet interrupt mask register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_EIMR - Ethernet interrupt mask register (RW)
 *
 * Reset value: 0x00000000
 *
 * The FEC_EIMR controls which of the interrupt events flagged in the FEC_EIR are allowed to
 * generate actual interrupts. If the corresponding bits in both the FEC_EIR and FEC_EIMR are set,
 * the interrupt is signaled to the ARM platform. The interrupt signal remains asserted until a 1 is
 * written to the FEC_EIR bit (write 1 to clear) or a 0 is written to the FEC_EIMR bit. This
 * register is cleared upon a hardware reset.  The FEC_EIMR bit assignments are the same as for the
 * FEC_EIR.
 */
typedef union _hw_fec_eimr
{
    reg32_t U;
    struct _hw_fec_eimr_bitfields
    {
        unsigned RESERVED0 : 19; //!< [18:0] Reserved, read as 0
        unsigned UN : 1; //!< [19] Interrupt mask.
        unsigned RL : 1; //!< [20] Interrupt mask.
        unsigned LC : 1; //!< [21] Interrupt mask.
        unsigned EBERR : 1; //!< [22] Interrupt mask.
        unsigned MII : 1; //!< [23] Interrupt mask.
        unsigned RXB : 1; //!< [24] Interrupt mask.
        unsigned RXF : 1; //!< [25] Interrupt mask.
        unsigned TXB : 1; //!< [26] Interrupt mask.
        unsigned TXF : 1; //!< [27] Interrupt mask.
        unsigned GRA : 1; //!< [28] Interrupt mask.
        unsigned BABT : 1; //!< [29] Interrupt mask.
        unsigned BABR : 1; //!< [30] Interrupt mask.
        unsigned HBERR : 1; //!< [31] Interrupt mask.
    } B;
} hw_fec_eimr_t;
#endif

/*
 * constants & macros for entire FEC_EIMR register
 */
#define HW_FEC_EIMR_ADDR      (REGS_FEC_BASE + 0x8)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_EIMR           (*(volatile hw_fec_eimr_t *) HW_FEC_EIMR_ADDR)
#define HW_FEC_EIMR_RD()      (HW_FEC_EIMR.U)
#define HW_FEC_EIMR_WR(v)     (HW_FEC_EIMR.U = (v))
#define HW_FEC_EIMR_SET(v)    (HW_FEC_EIMR_WR(HW_FEC_EIMR_RD() |  (v)))
#define HW_FEC_EIMR_CLR(v)    (HW_FEC_EIMR_WR(HW_FEC_EIMR_RD() & ~(v)))
#define HW_FEC_EIMR_TOG(v)    (HW_FEC_EIMR_WR(HW_FEC_EIMR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_EIMR bitfields
 */

/* --- Register HW_FEC_EIMR, field UN[19] (RW)
 *
 * Interrupt mask. This bit corresponds to an interrupt source defined by the FEC_EIR register. This
 * FEC_EIMR bit determines whether an interrupt will be generated when the interrupt condition is
 * fulfilled. At every system clock, the FEC_EIR samples the signals generated from the interrupting
 * sources. The corresponding FEC_EIR bit reflects the state of the interrupt signal even if the
 * corresponding FEC_EIMR bit is cleared.
 *
 * Values:
 * 0 - The corresponding interrupt source is masked.
 * 1 - The corresponding interrupt source is not masked.
 */

#define BP_FEC_EIMR_UN      (19)      //!< Bit position for FEC_EIMR_UN.
#define BM_FEC_EIMR_UN      (0x00080000)  //!< Bit mask for FEC_EIMR_UN.

//! @brief Get value of FEC_EIMR_UN from a register value.
#define BG_FEC_EIMR_UN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIMR_UN) >> BP_FEC_EIMR_UN)

//! @brief Format value for bitfield FEC_EIMR_UN.
#define BF_FEC_EIMR_UN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIMR_UN) & BM_FEC_EIMR_UN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UN field to a new value.
#define BW_FEC_EIMR_UN(v)   (HW_FEC_EIMR_WR((HW_FEC_EIMR_RD() & ~BM_FEC_EIMR_UN) | BF_FEC_EIMR_UN(v)))
#endif


/* --- Register HW_FEC_EIMR, field RL[20] (RW)
 *
 * Interrupt mask. This bit corresponds to an interrupt source defined by the FEC_EIR register. This
 * FEC_EIMR bit determines whether an interrupt will be generated when the interrupt condition is
 * fulfilled. At every system clock, the FEC_EIR samples the signals generated from the interrupting
 * sources. The corresponding FEC_EIR bit reflects the state of the interrupt signal even if the
 * corresponding FEC_EIMR bit is cleared.
 *
 * Values:
 * 0 - The corresponding interrupt source is masked.
 * 1 - The corresponding interrupt source is not masked.
 */

#define BP_FEC_EIMR_RL      (20)      //!< Bit position for FEC_EIMR_RL.
#define BM_FEC_EIMR_RL      (0x00100000)  //!< Bit mask for FEC_EIMR_RL.

//! @brief Get value of FEC_EIMR_RL from a register value.
#define BG_FEC_EIMR_RL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIMR_RL) >> BP_FEC_EIMR_RL)

//! @brief Format value for bitfield FEC_EIMR_RL.
#define BF_FEC_EIMR_RL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIMR_RL) & BM_FEC_EIMR_RL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RL field to a new value.
#define BW_FEC_EIMR_RL(v)   (HW_FEC_EIMR_WR((HW_FEC_EIMR_RD() & ~BM_FEC_EIMR_RL) | BF_FEC_EIMR_RL(v)))
#endif


/* --- Register HW_FEC_EIMR, field LC[21] (RW)
 *
 * Interrupt mask. This bit corresponds to an interrupt source defined by the FEC_EIR register. This
 * FEC_EIMR bit determines whether an interrupt will be generated when the interrupt condition is
 * fulfilled. At every system clock, the FEC_EIR samples the signals generated from the interrupting
 * sources. The corresponding FEC_EIR bit reflects the state of the interrupt signal even if the
 * corresponding FEC_EIMR bit is cleared.
 *
 * Values:
 * 0 - The corresponding interrupt source is masked.
 * 1 - The corresponding interrupt source is not masked.
 */

#define BP_FEC_EIMR_LC      (21)      //!< Bit position for FEC_EIMR_LC.
#define BM_FEC_EIMR_LC      (0x00200000)  //!< Bit mask for FEC_EIMR_LC.

//! @brief Get value of FEC_EIMR_LC from a register value.
#define BG_FEC_EIMR_LC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIMR_LC) >> BP_FEC_EIMR_LC)

//! @brief Format value for bitfield FEC_EIMR_LC.
#define BF_FEC_EIMR_LC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIMR_LC) & BM_FEC_EIMR_LC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LC field to a new value.
#define BW_FEC_EIMR_LC(v)   (HW_FEC_EIMR_WR((HW_FEC_EIMR_RD() & ~BM_FEC_EIMR_LC) | BF_FEC_EIMR_LC(v)))
#endif


/* --- Register HW_FEC_EIMR, field EBERR[22] (RW)
 *
 * Interrupt mask. This bit corresponds to an interrupt source defined by the FEC_EIR register. This
 * FEC_EIMR bit determines whether an interrupt will be generated when the interrupt condition is
 * fulfilled. At every system clock, the FEC_EIR samples the signals generated from the interrupting
 * sources. The corresponding FEC_EIR bit reflects the state of the interrupt signal even if the
 * corresponding FEC_EIMR bit is cleared.
 *
 * Values:
 * 0 - The corresponding interrupt source is masked.
 * 1 - The corresponding interrupt source is not masked.
 */

#define BP_FEC_EIMR_EBERR      (22)      //!< Bit position for FEC_EIMR_EBERR.
#define BM_FEC_EIMR_EBERR      (0x00400000)  //!< Bit mask for FEC_EIMR_EBERR.

//! @brief Get value of FEC_EIMR_EBERR from a register value.
#define BG_FEC_EIMR_EBERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIMR_EBERR) >> BP_FEC_EIMR_EBERR)

//! @brief Format value for bitfield FEC_EIMR_EBERR.
#define BF_FEC_EIMR_EBERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIMR_EBERR) & BM_FEC_EIMR_EBERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EBERR field to a new value.
#define BW_FEC_EIMR_EBERR(v)   (HW_FEC_EIMR_WR((HW_FEC_EIMR_RD() & ~BM_FEC_EIMR_EBERR) | BF_FEC_EIMR_EBERR(v)))
#endif


/* --- Register HW_FEC_EIMR, field MII[23] (RW)
 *
 * Interrupt mask. This bit corresponds to an interrupt source defined by the FEC_EIR register. This
 * FEC_EIMR bit determines whether an interrupt will be generated when the interrupt condition is
 * fulfilled. At every system clock, the FEC_EIR samples the signals generated from the interrupting
 * sources. The corresponding FEC_EIR bit reflects the state of the interrupt signal even if the
 * corresponding FEC_EIMR bit is cleared.
 *
 * Values:
 * 0 - The corresponding interrupt source is masked.
 * 1 - The corresponding interrupt source is not masked.
 */

#define BP_FEC_EIMR_MII      (23)      //!< Bit position for FEC_EIMR_MII.
#define BM_FEC_EIMR_MII      (0x00800000)  //!< Bit mask for FEC_EIMR_MII.

//! @brief Get value of FEC_EIMR_MII from a register value.
#define BG_FEC_EIMR_MII(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIMR_MII) >> BP_FEC_EIMR_MII)

//! @brief Format value for bitfield FEC_EIMR_MII.
#define BF_FEC_EIMR_MII(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIMR_MII) & BM_FEC_EIMR_MII)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MII field to a new value.
#define BW_FEC_EIMR_MII(v)   (HW_FEC_EIMR_WR((HW_FEC_EIMR_RD() & ~BM_FEC_EIMR_MII) | BF_FEC_EIMR_MII(v)))
#endif


/* --- Register HW_FEC_EIMR, field RXB[24] (RW)
 *
 * Interrupt mask. This bit corresponds to an interrupt source defined by the FEC_EIR register. This
 * FEC_EIMR bit determines whether an interrupt will be generated when the interrupt condition is
 * fulfilled. At every system clock, the FEC_EIR samples the signals generated from the interrupting
 * sources. The corresponding FEC_EIR bit reflects the state of the interrupt signal even if the
 * corresponding FEC_EIMR bit is cleared.
 *
 * Values:
 * 0 - The corresponding interrupt source is masked.
 * 1 - The corresponding interrupt source is not masked.
 */

#define BP_FEC_EIMR_RXB      (24)      //!< Bit position for FEC_EIMR_RXB.
#define BM_FEC_EIMR_RXB      (0x01000000)  //!< Bit mask for FEC_EIMR_RXB.

//! @brief Get value of FEC_EIMR_RXB from a register value.
#define BG_FEC_EIMR_RXB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIMR_RXB) >> BP_FEC_EIMR_RXB)

//! @brief Format value for bitfield FEC_EIMR_RXB.
#define BF_FEC_EIMR_RXB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIMR_RXB) & BM_FEC_EIMR_RXB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXB field to a new value.
#define BW_FEC_EIMR_RXB(v)   (HW_FEC_EIMR_WR((HW_FEC_EIMR_RD() & ~BM_FEC_EIMR_RXB) | BF_FEC_EIMR_RXB(v)))
#endif


/* --- Register HW_FEC_EIMR, field RXF[25] (RW)
 *
 * Interrupt mask. This bit corresponds to an interrupt source defined by the FEC_EIR register. This
 * FEC_EIMR bit determines whether an interrupt will be generated when the interrupt condition is
 * fulfilled. At every system clock, the FEC_EIR samples the signals generated from the interrupting
 * sources. The corresponding FEC_EIR bit reflects the state of the interrupt signal even if the
 * corresponding FEC_EIMR bit is cleared.
 *
 * Values:
 * 0 - The corresponding interrupt source is masked.
 * 1 - The corresponding interrupt source is not masked.
 */

#define BP_FEC_EIMR_RXF      (25)      //!< Bit position for FEC_EIMR_RXF.
#define BM_FEC_EIMR_RXF      (0x02000000)  //!< Bit mask for FEC_EIMR_RXF.

//! @brief Get value of FEC_EIMR_RXF from a register value.
#define BG_FEC_EIMR_RXF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIMR_RXF) >> BP_FEC_EIMR_RXF)

//! @brief Format value for bitfield FEC_EIMR_RXF.
#define BF_FEC_EIMR_RXF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIMR_RXF) & BM_FEC_EIMR_RXF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXF field to a new value.
#define BW_FEC_EIMR_RXF(v)   (HW_FEC_EIMR_WR((HW_FEC_EIMR_RD() & ~BM_FEC_EIMR_RXF) | BF_FEC_EIMR_RXF(v)))
#endif


/* --- Register HW_FEC_EIMR, field TXB[26] (RW)
 *
 * Interrupt mask. This bit corresponds to an interrupt source defined by the FEC_EIR register. This
 * FEC_EIMR bit determines whether an interrupt will be generated when the interrupt condition is
 * fulfilled. At every system clock, the FEC_EIR samples the signals generated from the interrupting
 * sources. The corresponding FEC_EIR bit reflects the state of the interrupt signal even if the
 * corresponding FEC_EIMR bit is cleared.
 *
 * Values:
 * 0 - The corresponding interrupt source is masked.
 * 1 - The corresponding interrupt source is not masked.
 */

#define BP_FEC_EIMR_TXB      (26)      //!< Bit position for FEC_EIMR_TXB.
#define BM_FEC_EIMR_TXB      (0x04000000)  //!< Bit mask for FEC_EIMR_TXB.

//! @brief Get value of FEC_EIMR_TXB from a register value.
#define BG_FEC_EIMR_TXB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIMR_TXB) >> BP_FEC_EIMR_TXB)

//! @brief Format value for bitfield FEC_EIMR_TXB.
#define BF_FEC_EIMR_TXB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIMR_TXB) & BM_FEC_EIMR_TXB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXB field to a new value.
#define BW_FEC_EIMR_TXB(v)   (HW_FEC_EIMR_WR((HW_FEC_EIMR_RD() & ~BM_FEC_EIMR_TXB) | BF_FEC_EIMR_TXB(v)))
#endif


/* --- Register HW_FEC_EIMR, field TXF[27] (RW)
 *
 * Interrupt mask. This bit corresponds to an interrupt source defined by the FEC_EIR register. This
 * FEC_EIMR bit determines whether an interrupt will be generated when the interrupt condition is
 * fulfilled. At every system clock, the FEC_EIR samples the signals generated from the interrupting
 * sources. The corresponding FEC_EIR bit reflects the state of the interrupt signal even if the
 * corresponding FEC_EIMR bit is cleared.
 *
 * Values:
 * 0 - The corresponding interrupt source is masked.
 * 1 - The corresponding interrupt source is not masked.
 */

#define BP_FEC_EIMR_TXF      (27)      //!< Bit position for FEC_EIMR_TXF.
#define BM_FEC_EIMR_TXF      (0x08000000)  //!< Bit mask for FEC_EIMR_TXF.

//! @brief Get value of FEC_EIMR_TXF from a register value.
#define BG_FEC_EIMR_TXF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIMR_TXF) >> BP_FEC_EIMR_TXF)

//! @brief Format value for bitfield FEC_EIMR_TXF.
#define BF_FEC_EIMR_TXF(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIMR_TXF) & BM_FEC_EIMR_TXF)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXF field to a new value.
#define BW_FEC_EIMR_TXF(v)   (HW_FEC_EIMR_WR((HW_FEC_EIMR_RD() & ~BM_FEC_EIMR_TXF) | BF_FEC_EIMR_TXF(v)))
#endif


/* --- Register HW_FEC_EIMR, field GRA[28] (RW)
 *
 * Interrupt mask. This bit corresponds to an interrupt source defined by the FEC_EIR register. This
 * FEC_EIMR bit determines whether an interrupt will be generated when the interrupt condition is
 * fulfilled. At every system clock, the FEC_EIR samples the signals generated from the interrupting
 * sources. The corresponding FEC_EIR bit reflects the state of the interrupt signal even if the
 * corresponding FEC_EIMR bit is cleared.
 *
 * Values:
 * 0 - The corresponding interrupt source is masked.
 * 1 - The corresponding interrupt source is not masked.
 */

#define BP_FEC_EIMR_GRA      (28)      //!< Bit position for FEC_EIMR_GRA.
#define BM_FEC_EIMR_GRA      (0x10000000)  //!< Bit mask for FEC_EIMR_GRA.

//! @brief Get value of FEC_EIMR_GRA from a register value.
#define BG_FEC_EIMR_GRA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIMR_GRA) >> BP_FEC_EIMR_GRA)

//! @brief Format value for bitfield FEC_EIMR_GRA.
#define BF_FEC_EIMR_GRA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIMR_GRA) & BM_FEC_EIMR_GRA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GRA field to a new value.
#define BW_FEC_EIMR_GRA(v)   (HW_FEC_EIMR_WR((HW_FEC_EIMR_RD() & ~BM_FEC_EIMR_GRA) | BF_FEC_EIMR_GRA(v)))
#endif


/* --- Register HW_FEC_EIMR, field BABT[29] (RW)
 *
 * Interrupt mask. This bit corresponds to an interrupt source defined by the FEC_EIR register. This
 * FEC_EIMR bit determines whether an interrupt will be generated when the interrupt condition is
 * fulfilled. At every system clock, the FEC_EIR samples the signals generated from the interrupting
 * sources. The corresponding FEC_EIR bit reflects the state of the interrupt signal even if the
 * corresponding FEC_EIMR bit is cleared.
 *
 * Values:
 * 0 - The corresponding interrupt source is masked.
 * 1 - The corresponding interrupt source is not masked.
 */

#define BP_FEC_EIMR_BABT      (29)      //!< Bit position for FEC_EIMR_BABT.
#define BM_FEC_EIMR_BABT      (0x20000000)  //!< Bit mask for FEC_EIMR_BABT.

//! @brief Get value of FEC_EIMR_BABT from a register value.
#define BG_FEC_EIMR_BABT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIMR_BABT) >> BP_FEC_EIMR_BABT)

//! @brief Format value for bitfield FEC_EIMR_BABT.
#define BF_FEC_EIMR_BABT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIMR_BABT) & BM_FEC_EIMR_BABT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BABT field to a new value.
#define BW_FEC_EIMR_BABT(v)   (HW_FEC_EIMR_WR((HW_FEC_EIMR_RD() & ~BM_FEC_EIMR_BABT) | BF_FEC_EIMR_BABT(v)))
#endif


/* --- Register HW_FEC_EIMR, field BABR[30] (RW)
 *
 * Interrupt mask. This bit corresponds to an interrupt source defined by the FEC_EIR register. This
 * FEC_EIMR bit determines whether an interrupt will be generated when the interrupt condition is
 * fulfilled. At every system clock, the FEC_EIR samples the signals generated from the interrupting
 * sources. The corresponding FEC_EIR bit reflects the state of the interrupt signal even if the
 * corresponding FEC_EIMR bit is cleared.
 *
 * Values:
 * 0 - The corresponding interrupt source is masked.
 * 1 - The corresponding interrupt source is not masked.
 */

#define BP_FEC_EIMR_BABR      (30)      //!< Bit position for FEC_EIMR_BABR.
#define BM_FEC_EIMR_BABR      (0x40000000)  //!< Bit mask for FEC_EIMR_BABR.

//! @brief Get value of FEC_EIMR_BABR from a register value.
#define BG_FEC_EIMR_BABR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIMR_BABR) >> BP_FEC_EIMR_BABR)

//! @brief Format value for bitfield FEC_EIMR_BABR.
#define BF_FEC_EIMR_BABR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIMR_BABR) & BM_FEC_EIMR_BABR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BABR field to a new value.
#define BW_FEC_EIMR_BABR(v)   (HW_FEC_EIMR_WR((HW_FEC_EIMR_RD() & ~BM_FEC_EIMR_BABR) | BF_FEC_EIMR_BABR(v)))
#endif


/* --- Register HW_FEC_EIMR, field HBERR[31] (RW)
 *
 * Interrupt mask. This bit corresponds to an interrupt source defined by the FEC_EIR register. This
 * FEC_EIMR bit determines whether an interrupt will be generated when the interrupt condition is
 * fulfilled. At every system clock, the FEC_EIR samples the signals generated from the interrupting
 * sources. The corresponding FEC_EIR bit reflects the state of the interrupt signal even if the
 * corresponding FEC_EIMR bit is cleared.
 *
 * Values:
 * 0 - The corresponding interrupt source is masked.
 * 1 - The corresponding interrupt source is not masked.
 */

#define BP_FEC_EIMR_HBERR      (31)      //!< Bit position for FEC_EIMR_HBERR.
#define BM_FEC_EIMR_HBERR      (0x80000000)  //!< Bit mask for FEC_EIMR_HBERR.

//! @brief Get value of FEC_EIMR_HBERR from a register value.
#define BG_FEC_EIMR_HBERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EIMR_HBERR) >> BP_FEC_EIMR_HBERR)

//! @brief Format value for bitfield FEC_EIMR_HBERR.
#define BF_FEC_EIMR_HBERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EIMR_HBERR) & BM_FEC_EIMR_HBERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HBERR field to a new value.
#define BW_FEC_EIMR_HBERR(v)   (HW_FEC_EIMR_WR((HW_FEC_EIMR_RD() & ~BM_FEC_EIMR_HBERR) | BF_FEC_EIMR_HBERR(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_FEC_RDAR - Receive descriptor active register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_RDAR - Receive descriptor active register (RW)
 *
 * Reset value: 0x00000000
 *
 * FEC_RDAR is a user-writeable command register which indicates that the receive descriptor ring
 * has been updated, and that empty receive buffers have been produced by the driver with the empty
 * bit in RxBD set.  The FEC_RDAR[R_DES_ACTIVE] bit is set whenever the register is written,
 * independent of the data actually written by the user. When it is set, the FEC polls the receive
 * descriptor ring and processes receive frames (provided FEC_ECR[ETHER_EN] is also set to 1). After
 * the FEC finds a receive descriptor whose empty bit is not set, the FEC clears the
 * FEC_RDAR[R_DES_ACTIVE] bit and ceases the polling in the receive descriptor ring polling until
 * the user sets the bit again to sign the availability of additional descriptors in the receive
 * descriptor ring.  The FEC_RDAR is cleared when FEC_ECR[ETHER_EN] is cleared or system is reset.
 */
typedef union _hw_fec_rdar
{
    reg32_t U;
    struct _hw_fec_rdar_bitfields
    {
        unsigned RESERVED0 : 24; //!< [23:0] Reserved, read as 0
        unsigned R_DES_ACTIVE : 1; //!< [24] Set to one when this register is written, regardless of the value written.
        unsigned RESERVED1 : 7; //!< [31:25] Reserved, read as 0
    } B;
} hw_fec_rdar_t;
#endif

/*
 * constants & macros for entire FEC_RDAR register
 */
#define HW_FEC_RDAR_ADDR      (REGS_FEC_BASE + 0x10)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_RDAR           (*(volatile hw_fec_rdar_t *) HW_FEC_RDAR_ADDR)
#define HW_FEC_RDAR_RD()      (HW_FEC_RDAR.U)
#define HW_FEC_RDAR_WR(v)     (HW_FEC_RDAR.U = (v))
#define HW_FEC_RDAR_SET(v)    (HW_FEC_RDAR_WR(HW_FEC_RDAR_RD() |  (v)))
#define HW_FEC_RDAR_CLR(v)    (HW_FEC_RDAR_WR(HW_FEC_RDAR_RD() & ~(v)))
#define HW_FEC_RDAR_TOG(v)    (HW_FEC_RDAR_WR(HW_FEC_RDAR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_RDAR bitfields
 */

/* --- Register HW_FEC_RDAR, field R_DES_ACTIVE[24] (RW)
 *
 * Set to one when this register is written, regardless of the value written. Cleared by the FEC
 * device when the FEC finds a receive descriptor whose empty bit is not set. Also cleared when
 * FEC_ECR[ETHER_EN] is cleared.
 */

#define BP_FEC_RDAR_R_DES_ACTIVE      (24)      //!< Bit position for FEC_RDAR_R_DES_ACTIVE.
#define BM_FEC_RDAR_R_DES_ACTIVE      (0x01000000)  //!< Bit mask for FEC_RDAR_R_DES_ACTIVE.

//! @brief Get value of FEC_RDAR_R_DES_ACTIVE from a register value.
#define BG_FEC_RDAR_R_DES_ACTIVE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_RDAR_R_DES_ACTIVE) >> BP_FEC_RDAR_R_DES_ACTIVE)

//! @brief Format value for bitfield FEC_RDAR_R_DES_ACTIVE.
#define BF_FEC_RDAR_R_DES_ACTIVE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_RDAR_R_DES_ACTIVE) & BM_FEC_RDAR_R_DES_ACTIVE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the R_DES_ACTIVE field to a new value.
#define BW_FEC_RDAR_R_DES_ACTIVE(v)   (HW_FEC_RDAR_WR((HW_FEC_RDAR_RD() & ~BM_FEC_RDAR_R_DES_ACTIVE) | BF_FEC_RDAR_R_DES_ACTIVE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_TDAR - Transmit descriptor active register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_TDAR - Transmit descriptor active register (RW)
 *
 * Reset value: 0x00000000
 *
 * The FEC_TDAR is a command register,which is written by the user, to indicate that the transmit
 * descriptor ring has been updated (transmit buffers have been produced by the driver with the
 * ready bit set in the buffer descriptor).  Whenever the register is written, the
 * FEC_TDAR[X_DES_ACTIVE] bit is set to 1, independent of the data actually written by the user.
 * When set, the FEC polls the transmit descriptor ring and process transmit frames (provided
 * FEC_ECR[ETHER_EN] is also set to 1). After the FEC finds a transmit descriptor whose ready bit is
 * not set, then the FEC clears the FEC_TDAR[X_DES_ACTIVE] bit and ceases transmit descriptor ring
 * polling until the user sets the bit again, the transmit descriptor ring.  The FEC_TDAR is
 * cleared, when FEC_ECR[ETHER_EN] is cleared, or when FEC_ECR[RESET] is set to 1 or system is
 * reset.
 */
typedef union _hw_fec_tdar
{
    reg32_t U;
    struct _hw_fec_tdar_bitfields
    {
        unsigned RESERVED0 : 24; //!< [23:0] Reserved, read as 0
        unsigned X_DES_ACTIVE : 1; //!< [24] Set to one when this register is written, regardless of the value written.
        unsigned RESERVED1 : 7; //!< [31:25] Reserved, read as 0
    } B;
} hw_fec_tdar_t;
#endif

/*
 * constants & macros for entire FEC_TDAR register
 */
#define HW_FEC_TDAR_ADDR      (REGS_FEC_BASE + 0x14)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_TDAR           (*(volatile hw_fec_tdar_t *) HW_FEC_TDAR_ADDR)
#define HW_FEC_TDAR_RD()      (HW_FEC_TDAR.U)
#define HW_FEC_TDAR_WR(v)     (HW_FEC_TDAR.U = (v))
#define HW_FEC_TDAR_SET(v)    (HW_FEC_TDAR_WR(HW_FEC_TDAR_RD() |  (v)))
#define HW_FEC_TDAR_CLR(v)    (HW_FEC_TDAR_WR(HW_FEC_TDAR_RD() & ~(v)))
#define HW_FEC_TDAR_TOG(v)    (HW_FEC_TDAR_WR(HW_FEC_TDAR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_TDAR bitfields
 */

/* --- Register HW_FEC_TDAR, field X_DES_ACTIVE[24] (RW)
 *
 * Set to one when this register is written, regardless of the value written. Cleared by the FEC
 * device when the FEC finds a transmit descriptor whose ready bit is not set. Also cleared when
 * FEC_ECR[ETHER_EN] is cleared.
 */

#define BP_FEC_TDAR_X_DES_ACTIVE      (24)      //!< Bit position for FEC_TDAR_X_DES_ACTIVE.
#define BM_FEC_TDAR_X_DES_ACTIVE      (0x01000000)  //!< Bit mask for FEC_TDAR_X_DES_ACTIVE.

//! @brief Get value of FEC_TDAR_X_DES_ACTIVE from a register value.
#define BG_FEC_TDAR_X_DES_ACTIVE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_TDAR_X_DES_ACTIVE) >> BP_FEC_TDAR_X_DES_ACTIVE)

//! @brief Format value for bitfield FEC_TDAR_X_DES_ACTIVE.
#define BF_FEC_TDAR_X_DES_ACTIVE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_TDAR_X_DES_ACTIVE) & BM_FEC_TDAR_X_DES_ACTIVE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the X_DES_ACTIVE field to a new value.
#define BW_FEC_TDAR_X_DES_ACTIVE(v)   (HW_FEC_TDAR_WR((HW_FEC_TDAR_RD() & ~BM_FEC_TDAR_X_DES_ACTIVE) | BF_FEC_TDAR_X_DES_ACTIVE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_ECR - Ethernet control register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_ECR - Ethernet control register (RW)
 *
 * Reset value: 0xf0000000
 *
 * The ECR is used to enable/disable the FEC_ ECR which is a read/write user register, though both
 * fields in this register can also be altered by hardware.
 */
typedef union _hw_fec_ecr
{
    reg32_t U;
    struct _hw_fec_ecr_bitfields
    {
        unsigned RESET : 1; //!< [0] When this bit is set, the equivalent of a hardware reset is performed but it is local to the FEC, ETHER_EN is cleared and all other FEC registers take their reset values.
        unsigned ETHER_EN : 1; //!< [1] When this bit is set, the FEC is enabled, and reception and transmission are possible.
        unsigned RESERVED0 : 30; //!< [31:2] Reserved.
    } B;
} hw_fec_ecr_t;
#endif

/*
 * constants & macros for entire FEC_ECR register
 */
#define HW_FEC_ECR_ADDR      (REGS_FEC_BASE + 0x24)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_ECR           (*(volatile hw_fec_ecr_t *) HW_FEC_ECR_ADDR)
#define HW_FEC_ECR_RD()      (HW_FEC_ECR.U)
#define HW_FEC_ECR_WR(v)     (HW_FEC_ECR.U = (v))
#define HW_FEC_ECR_SET(v)    (HW_FEC_ECR_WR(HW_FEC_ECR_RD() |  (v)))
#define HW_FEC_ECR_CLR(v)    (HW_FEC_ECR_WR(HW_FEC_ECR_RD() & ~(v)))
#define HW_FEC_ECR_TOG(v)    (HW_FEC_ECR_WR(HW_FEC_ECR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_ECR bitfields
 */

/* --- Register HW_FEC_ECR, field RESET[0] (RW)
 *
 * When this bit is set, the equivalent of a hardware reset is performed but it is local to the FEC,
 * ETHER_EN is cleared and all other FEC registers take their reset values. Also, any
 * transmission/reception currently in progress is abruptly aborted. This bit is automatically
 * cleared by hardware during the reset sequence. The reset sequence takes approximately 8 system
 * clock cycles after RESET is written with a 1.
 */

#define BP_FEC_ECR_RESET      (0)      //!< Bit position for FEC_ECR_RESET.
#define BM_FEC_ECR_RESET      (0x00000001)  //!< Bit mask for FEC_ECR_RESET.

//! @brief Get value of FEC_ECR_RESET from a register value.
#define BG_FEC_ECR_RESET(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_ECR_RESET) >> BP_FEC_ECR_RESET)

//! @brief Format value for bitfield FEC_ECR_RESET.
#define BF_FEC_ECR_RESET(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_ECR_RESET) & BM_FEC_ECR_RESET)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RESET field to a new value.
#define BW_FEC_ECR_RESET(v)   (HW_FEC_ECR_WR((HW_FEC_ECR_RD() & ~BM_FEC_ECR_RESET) | BF_FEC_ECR_RESET(v)))
#endif

/* --- Register HW_FEC_ECR, field ETHER_EN[1] (RW)
 *
 * When this bit is set, the FEC is enabled, and reception and transmission are possible. When this
 * bit is cleared, reception is immediately stopped and transmission is stopped after a bad CRC is
 * appended to any currently transmitted frame. The buffer descriptor(s) for an aborted transmit
 * frame are not updated after clearing this bit. When ETHER_EN is cleared, the DMA, buffer
 * descriptor, and FIFO control logic are reset, including the buffer descriptor and FIFO pointers.
 * The ETHER_EN bit is altered by hardware under the following conditions: FEC_ECR[RESET] is set by
 * software, in which case ETHER_EN is cleared an error condition causes the FEC_EIR[EBERR] bit to
 * set, in which case ETHER_EN is cleared
 */

#define BP_FEC_ECR_ETHER_EN      (1)      //!< Bit position for FEC_ECR_ETHER_EN.
#define BM_FEC_ECR_ETHER_EN      (0x00000002)  //!< Bit mask for FEC_ECR_ETHER_EN.

//! @brief Get value of FEC_ECR_ETHER_EN from a register value.
#define BG_FEC_ECR_ETHER_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_ECR_ETHER_EN) >> BP_FEC_ECR_ETHER_EN)

//! @brief Format value for bitfield FEC_ECR_ETHER_EN.
#define BF_FEC_ECR_ETHER_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_ECR_ETHER_EN) & BM_FEC_ECR_ETHER_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ETHER_EN field to a new value.
#define BW_FEC_ECR_ETHER_EN(v)   (HW_FEC_ECR_WR((HW_FEC_ECR_RD() & ~BM_FEC_ECR_ETHER_EN) | BF_FEC_ECR_ETHER_EN(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_MMFR - MII management frame register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_MMFR - MII management frame register (RW)
 *
 * Reset value: 0x00000000
 *
 * The FEC_MMFR is used to communicate with the attached MII compatible PHY device(s) by providing
 * read/write access to their MII registers. Performing a write to FEC_MMFR causes a management
 * frame to be generated unless the MII-SPEED field of the FEC_MSCR has been set to 0. MII frame is
 * generated with the data previously written to FEC_MMFR. This allows FEC_MMFR and FEC_MSCR to be
 * programmed in any order if the MII-SPEED field of FEC_MSCR is zero (for further details see ).
 * The FEC_MMFR does not reset to a definite value.  To perform a read or write operation on the MII
 * Management Interface, the FEC_MMFR must be written by the user. To generate a valid read or write
 * management frame, the ST field must be written with a 01 pattern, and the TA field must be
 * written with a 10 pattern. If other patterns are written to these fields, a frame is generated
 * but does not comply with the IEEE 802.3 MII definition.  To generate an IEEE 802.3-compliant MII
 * management interface write frame (write to a PHY register), the user must write {01 01 PHYAD
 * REGAD 10 DATA} to the bit fields of the FEC_MMFR, as shown in , causes the control logic to shift
 * out the data in the FEC_MMFR following a preamble generated by the control state machine. During
 * this time, the contents of the FEC_MMFR is altering as the contents are serially shifted so the
 * value is unpredictable if it is read by the user. After the write management frame operation has
 * completed, the MII interrupt is generated. At this time, the contents of the FEC_MMFR matches to
 * the original value written.  To generate an MII management interface read frame (read a PHY
 * register) the user must write {01 10 PHYAD REGAD 10 XXXX} to the bit fields of the FEC_MMFR shown
 * in (the contents of the 4-bit DATA field are arbitrary). This causes the control logic to shift
 * out the data in the FEC_MMFR following a preamble generated by the control state machine. During
 * this time, the contents of the FEC_MMFR is altering as the contents are serially shifted to the
 * register value, it is unpredictable if it is read by the user. After the read management frame
 * operation has completed, the MII interrupt is generated. At this time the contents of the
 * FEC_MMFR matches to the original value written except for the DATA field whose contents have been
 * replaced by the value read from the PHY register.  If the FEC_MMFR is written during the progress
 * of frame greneration, the frame contents is altered. Thus software should use the MII interrupt
 * to avoid writing to the FEC_MMFR while frame generation is in progress.
 */
typedef union _hw_fec_mmfr
{
    reg32_t U;
    struct _hw_fec_mmfr_bitfields
    {
        unsigned DATA : 16; //!< [15:0] Management frame data.
        unsigned TA : 2; //!< [17:16] Turn around.
        unsigned RA : 5; //!< [22:18] Register address.
        unsigned PA : 5; //!< [27:23] PHY address.
        unsigned OP : 2; //!< [29:28] Operation code.
        unsigned ST : 2; //!< [31:30] Start of frame delimiter.
    } B;
} hw_fec_mmfr_t;
#endif

/*
 * constants & macros for entire FEC_MMFR register
 */
#define HW_FEC_MMFR_ADDR      (REGS_FEC_BASE + 0x40)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_MMFR           (*(volatile hw_fec_mmfr_t *) HW_FEC_MMFR_ADDR)
#define HW_FEC_MMFR_RD()      (HW_FEC_MMFR.U)
#define HW_FEC_MMFR_WR(v)     (HW_FEC_MMFR.U = (v))
#define HW_FEC_MMFR_SET(v)    (HW_FEC_MMFR_WR(HW_FEC_MMFR_RD() |  (v)))
#define HW_FEC_MMFR_CLR(v)    (HW_FEC_MMFR_WR(HW_FEC_MMFR_RD() & ~(v)))
#define HW_FEC_MMFR_TOG(v)    (HW_FEC_MMFR_WR(HW_FEC_MMFR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_MMFR bitfields
 */

/* --- Register HW_FEC_MMFR, field DATA[15:0] (RW)
 *
 * Management frame data. This is the field for data to be written to or read from the PHY register.
 */

#define BP_FEC_MMFR_DATA      (0)      //!< Bit position for FEC_MMFR_DATA.
#define BM_FEC_MMFR_DATA      (0x0000ffff)  //!< Bit mask for FEC_MMFR_DATA.

//! @brief Get value of FEC_MMFR_DATA from a register value.
#define BG_FEC_MMFR_DATA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_MMFR_DATA) >> BP_FEC_MMFR_DATA)

//! @brief Format value for bitfield FEC_MMFR_DATA.
#define BF_FEC_MMFR_DATA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_MMFR_DATA) & BM_FEC_MMFR_DATA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DATA field to a new value.
#define BW_FEC_MMFR_DATA(v)   (HW_FEC_MMFR_WR((HW_FEC_MMFR_RD() & ~BM_FEC_MMFR_DATA) | BF_FEC_MMFR_DATA(v)))
#endif

/* --- Register HW_FEC_MMFR, field TA[17:16] (RW)
 *
 * Turn around. This field must be programmed to 10 to generate a valid MII management frame.
 */

#define BP_FEC_MMFR_TA      (16)      //!< Bit position for FEC_MMFR_TA.
#define BM_FEC_MMFR_TA      (0x00030000)  //!< Bit mask for FEC_MMFR_TA.

//! @brief Get value of FEC_MMFR_TA from a register value.
#define BG_FEC_MMFR_TA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_MMFR_TA) >> BP_FEC_MMFR_TA)

//! @brief Format value for bitfield FEC_MMFR_TA.
#define BF_FEC_MMFR_TA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_MMFR_TA) & BM_FEC_MMFR_TA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TA field to a new value.
#define BW_FEC_MMFR_TA(v)   (HW_FEC_MMFR_WR((HW_FEC_MMFR_RD() & ~BM_FEC_MMFR_TA) | BF_FEC_MMFR_TA(v)))
#endif

/* --- Register HW_FEC_MMFR, field RA[22:18] (RW)
 *
 * Register address. This field specifies one of up to 32 registers within the specified PHY device.
 */

#define BP_FEC_MMFR_RA      (18)      //!< Bit position for FEC_MMFR_RA.
#define BM_FEC_MMFR_RA      (0x007c0000)  //!< Bit mask for FEC_MMFR_RA.

//! @brief Get value of FEC_MMFR_RA from a register value.
#define BG_FEC_MMFR_RA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_MMFR_RA) >> BP_FEC_MMFR_RA)

//! @brief Format value for bitfield FEC_MMFR_RA.
#define BF_FEC_MMFR_RA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_MMFR_RA) & BM_FEC_MMFR_RA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RA field to a new value.
#define BW_FEC_MMFR_RA(v)   (HW_FEC_MMFR_WR((HW_FEC_MMFR_RD() & ~BM_FEC_MMFR_RA) | BF_FEC_MMFR_RA(v)))
#endif

/* --- Register HW_FEC_MMFR, field PA[27:23] (RW)
 *
 * PHY address. This field specifies one of up to 32 attached PHY devices.
 */

#define BP_FEC_MMFR_PA      (23)      //!< Bit position for FEC_MMFR_PA.
#define BM_FEC_MMFR_PA      (0x0f800000)  //!< Bit mask for FEC_MMFR_PA.

//! @brief Get value of FEC_MMFR_PA from a register value.
#define BG_FEC_MMFR_PA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_MMFR_PA) >> BP_FEC_MMFR_PA)

//! @brief Format value for bitfield FEC_MMFR_PA.
#define BF_FEC_MMFR_PA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_MMFR_PA) & BM_FEC_MMFR_PA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PA field to a new value.
#define BW_FEC_MMFR_PA(v)   (HW_FEC_MMFR_WR((HW_FEC_MMFR_RD() & ~BM_FEC_MMFR_PA) | BF_FEC_MMFR_PA(v)))
#endif

/* --- Register HW_FEC_MMFR, field OP[29:28] (RW)
 *
 * Operation code. This field must be programmed to 10 (read) or 01 (write) to generate a valid MII
 * management frame. A value of 11 produces "read" frame operation while a value of 00 produces
 * "write" frame operation, but these frames is not MII compliant.
 */

#define BP_FEC_MMFR_OP      (28)      //!< Bit position for FEC_MMFR_OP.
#define BM_FEC_MMFR_OP      (0x30000000)  //!< Bit mask for FEC_MMFR_OP.

//! @brief Get value of FEC_MMFR_OP from a register value.
#define BG_FEC_MMFR_OP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_MMFR_OP) >> BP_FEC_MMFR_OP)

//! @brief Format value for bitfield FEC_MMFR_OP.
#define BF_FEC_MMFR_OP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_MMFR_OP) & BM_FEC_MMFR_OP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OP field to a new value.
#define BW_FEC_MMFR_OP(v)   (HW_FEC_MMFR_WR((HW_FEC_MMFR_RD() & ~BM_FEC_MMFR_OP) | BF_FEC_MMFR_OP(v)))
#endif

/* --- Register HW_FEC_MMFR, field ST[31:30] (RW)
 *
 * Start of frame delimiter. These bits must be programmed to 01 for a valid MII management frame.
 */

#define BP_FEC_MMFR_ST      (30)      //!< Bit position for FEC_MMFR_ST.
#define BM_FEC_MMFR_ST      (0xc0000000)  //!< Bit mask for FEC_MMFR_ST.

//! @brief Get value of FEC_MMFR_ST from a register value.
#define BG_FEC_MMFR_ST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_MMFR_ST) >> BP_FEC_MMFR_ST)

//! @brief Format value for bitfield FEC_MMFR_ST.
#define BF_FEC_MMFR_ST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_MMFR_ST) & BM_FEC_MMFR_ST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ST field to a new value.
#define BW_FEC_MMFR_ST(v)   (HW_FEC_MMFR_WR((HW_FEC_MMFR_RD() & ~BM_FEC_MMFR_ST) | BF_FEC_MMFR_ST(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_MSCR - MII speed control register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_MSCR - MII speed control register (RW)
 *
 * Reset value: 0x00000000
 *
 * The FEC_MSCR provides control of the frequency of the MII clock (FEC_MDC signal), and allows a
 * preamble drop on the MII management frame .  The MII_SPEED field must be programmed with a value
 * to generate an FEC_MDC frequency which is less than or equal to 2.5 MHz so that it is compliant
 * with the IEEE 802.3 MII specification. The MII_SPEED must be set to a non-zero value in order to
 * generate a read or write management frame. After the management frame is completed, the FEC_MSCR
 * can optionally be set to zero in order to turn off the FEC_MDC. The FEC_MDC frequency has a 50%
 * duty cycle except when MII_SPEED is changed during operation (change takes effect following
 * either a rising or falling edge of FEC_MDC).  The FEC_MDC frequency depends on both the system
 * clock frequency and the MII_SPEED register. If the system clock is 25 MHz, programming the
 * MII_SPEED register to 0x0000_0005 results in an FEC_MDC frequency of 25 MHz * 1/10 = 2.5 MHz. A
 * table showing optimum values for MII_SPEED at different system clock frequencies is provided
 * below.   Programming Examples for FEC_MSCR         System Clock Frequency    MII_SPEED (field in
 * reg)    FEC_MDC frequency        25 MHz    0x5    2.5 MHz      33 MHz    0x7    2.36 MHz      40
 * MHz    0x8    2.5 MHz      50 MHz    0xA    2.5 MHz      66 MHz    0xD    2.54 MHz
 */
typedef union _hw_fec_mscr
{
    reg32_t U;
    struct _hw_fec_mscr_bitfields
    {
        unsigned RESERVED0 : 1; //!< [0] Reserved, read as 0
        unsigned MII_SPEED : 6; //!< [6:1] MII_SPEED controls the frequency of the MII management interface clock (FEC_MDC) relative to the system clock.
        unsigned DIS_PREAMBLE : 1; //!< [7] Asserting this bit causes preamble (0xFFFF_FFFF) not to be prepended to the MII management frame.
        unsigned RESERVED1 : 24; //!< [31:8] Reserved, read as 0
    } B;
} hw_fec_mscr_t;
#endif

/*
 * constants & macros for entire FEC_MSCR register
 */
#define HW_FEC_MSCR_ADDR      (REGS_FEC_BASE + 0x44)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_MSCR           (*(volatile hw_fec_mscr_t *) HW_FEC_MSCR_ADDR)
#define HW_FEC_MSCR_RD()      (HW_FEC_MSCR.U)
#define HW_FEC_MSCR_WR(v)     (HW_FEC_MSCR.U = (v))
#define HW_FEC_MSCR_SET(v)    (HW_FEC_MSCR_WR(HW_FEC_MSCR_RD() |  (v)))
#define HW_FEC_MSCR_CLR(v)    (HW_FEC_MSCR_WR(HW_FEC_MSCR_RD() & ~(v)))
#define HW_FEC_MSCR_TOG(v)    (HW_FEC_MSCR_WR(HW_FEC_MSCR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_MSCR bitfields
 */

/* --- Register HW_FEC_MSCR, field MII_SPEED[6:1] (RW)
 *
 * MII_SPEED controls the frequency of the MII management interface clock (FEC_MDC) relative to the
 * system clock. A value of 0 in this field "turns off" the FEC_MDC and leave it in low voltage
 * state. Any non-zero value results in the FEC_MDC frequency of 1/(MII_SPEED*2) of the system clock
 * frequency.
 */

#define BP_FEC_MSCR_MII_SPEED      (1)      //!< Bit position for FEC_MSCR_MII_SPEED.
#define BM_FEC_MSCR_MII_SPEED      (0x0000007e)  //!< Bit mask for FEC_MSCR_MII_SPEED.

//! @brief Get value of FEC_MSCR_MII_SPEED from a register value.
#define BG_FEC_MSCR_MII_SPEED(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_MSCR_MII_SPEED) >> BP_FEC_MSCR_MII_SPEED)

//! @brief Format value for bitfield FEC_MSCR_MII_SPEED.
#define BF_FEC_MSCR_MII_SPEED(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_MSCR_MII_SPEED) & BM_FEC_MSCR_MII_SPEED)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MII_SPEED field to a new value.
#define BW_FEC_MSCR_MII_SPEED(v)   (HW_FEC_MSCR_WR((HW_FEC_MSCR_RD() & ~BM_FEC_MSCR_MII_SPEED) | BF_FEC_MSCR_MII_SPEED(v)))
#endif

/* --- Register HW_FEC_MSCR, field DIS_PREAMBLE[7] (RW)
 *
 * Asserting this bit causes preamble (0xFFFF_FFFF) not to be prepended to the MII management frame.
 * The MII standard allows the preamble to be dropped if the attached PHY device(s) does not require
 * it.
 */

#define BP_FEC_MSCR_DIS_PREAMBLE      (7)      //!< Bit position for FEC_MSCR_DIS_PREAMBLE.
#define BM_FEC_MSCR_DIS_PREAMBLE      (0x00000080)  //!< Bit mask for FEC_MSCR_DIS_PREAMBLE.

//! @brief Get value of FEC_MSCR_DIS_PREAMBLE from a register value.
#define BG_FEC_MSCR_DIS_PREAMBLE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_MSCR_DIS_PREAMBLE) >> BP_FEC_MSCR_DIS_PREAMBLE)

//! @brief Format value for bitfield FEC_MSCR_DIS_PREAMBLE.
#define BF_FEC_MSCR_DIS_PREAMBLE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_MSCR_DIS_PREAMBLE) & BM_FEC_MSCR_DIS_PREAMBLE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DIS_PREAMBLE field to a new value.
#define BW_FEC_MSCR_DIS_PREAMBLE(v)   (HW_FEC_MSCR_WR((HW_FEC_MSCR_RD() & ~BM_FEC_MSCR_DIS_PREAMBLE) | BF_FEC_MSCR_DIS_PREAMBLE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_MIBC - MIB control register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_MIBC - MIB control register (RW)
 *
 * Reset value: 0xc0000000
 *
 * The MIB control register is a read/write register which is used to provide control of and to
 * observe the state of the Message Information Block (MIB). This register is accessed by user
 * software if there is a need to disable the MIB operation. For example,the user wants to clear all
 * MIB counters in RAM. the user disables the MIB, then clears all the MIB RAM locations, then
 * enables the MIB. The reset value of MIB_DISABLE bit is 1. See for the locations of the MIB
 * counters.
 */
typedef union _hw_fec_mibc
{
    reg32_t U;
    struct _hw_fec_mibc_bitfields
    {
        unsigned RESERVED0 : 30; //!< [29:0] Reserved.
        unsigned MB_IDLE : 1; //!< [30] A read-only status bit.
        unsigned MIB_DISABLE : 1; //!< [31] A read/write control bit.
    } B;
} hw_fec_mibc_t;
#endif

/*
 * constants & macros for entire FEC_MIBC register
 */
#define HW_FEC_MIBC_ADDR      (REGS_FEC_BASE + 0x64)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_MIBC           (*(volatile hw_fec_mibc_t *) HW_FEC_MIBC_ADDR)
#define HW_FEC_MIBC_RD()      (HW_FEC_MIBC.U)
#define HW_FEC_MIBC_WR(v)     (HW_FEC_MIBC.U = (v))
#define HW_FEC_MIBC_SET(v)    (HW_FEC_MIBC_WR(HW_FEC_MIBC_RD() |  (v)))
#define HW_FEC_MIBC_CLR(v)    (HW_FEC_MIBC_WR(HW_FEC_MIBC_RD() & ~(v)))
#define HW_FEC_MIBC_TOG(v)    (HW_FEC_MIBC_WR(HW_FEC_MIBC_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_MIBC bitfields
 */

/* --- Register HW_FEC_MIBC, field MB_IDLE[30] (RO)
 *
 * A read-only status bit. If set, the MIB block is not currently updating any MIB counters.
 */

#define BP_FEC_MIBC_MB_IDLE      (30)      //!< Bit position for FEC_MIBC_MB_IDLE.
#define BM_FEC_MIBC_MB_IDLE      (0x40000000)  //!< Bit mask for FEC_MIBC_MB_IDLE.

//! @brief Get value of FEC_MIBC_MB_IDLE from a register value.
#define BG_FEC_MIBC_MB_IDLE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_MIBC_MB_IDLE) >> BP_FEC_MIBC_MB_IDLE)

/* --- Register HW_FEC_MIBC, field MIB_DISABLE[31] (RW)
 *
 * A read/write control bit. If set, the MIB logic halts and does not update any MIB counters.
 */

#define BP_FEC_MIBC_MIB_DISABLE      (31)      //!< Bit position for FEC_MIBC_MIB_DISABLE.
#define BM_FEC_MIBC_MIB_DISABLE      (0x80000000)  //!< Bit mask for FEC_MIBC_MIB_DISABLE.

//! @brief Get value of FEC_MIBC_MIB_DISABLE from a register value.
#define BG_FEC_MIBC_MIB_DISABLE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_MIBC_MIB_DISABLE) >> BP_FEC_MIBC_MIB_DISABLE)

//! @brief Format value for bitfield FEC_MIBC_MIB_DISABLE.
#define BF_FEC_MIBC_MIB_DISABLE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_MIBC_MIB_DISABLE) & BM_FEC_MIBC_MIB_DISABLE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MIB_DISABLE field to a new value.
#define BW_FEC_MIBC_MIB_DISABLE(v)   (HW_FEC_MIBC_WR((HW_FEC_MIBC_RD() & ~BM_FEC_MIBC_MIB_DISABLE) | BF_FEC_MIBC_MIB_DISABLE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_RCR - Receive control register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_RCR - Receive control register (RW)
 *
 * Reset value: 0x05ee0001
 *
 * The FEC_RCR is programmed by the user, and controls the operational mode of the receive block. It
 * can only be written when FEC_ECR[ETHER_EN] = 0 (that is, during initialization).
 */
typedef union _hw_fec_rcr
{
    reg32_t U;
    struct _hw_fec_rcr_bitfields
    {
        unsigned LOOP : 1; //!< [0] Internal loopback.When LOOP is set to 1, transmitted frames are looped back internal to the device and the transmit output signals are not asserted.
        unsigned DRT : 1; //!< [1] Disable receive on transmit.
        unsigned MII_MODE : 1; //!< [2] Media independent interface mode.
        unsigned PROM : 1; //!< [3] Promiscuous mode.
        unsigned BC_REJ : 1; //!< [4] Broadcast frame reject.
        unsigned FCE : 1; //!< [5] Flow control enable.
        unsigned RESERVED0 : 10; //!< [15:6] Reserved, read as 0
        unsigned MAX_FL : 11; //!< [26:16] Maximum frame length.
        unsigned RESERVED1 : 5; //!< [31:27] Reserved, read as 0
    } B;
} hw_fec_rcr_t;
#endif

/*
 * constants & macros for entire FEC_RCR register
 */
#define HW_FEC_RCR_ADDR      (REGS_FEC_BASE + 0x84)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_RCR           (*(volatile hw_fec_rcr_t *) HW_FEC_RCR_ADDR)
#define HW_FEC_RCR_RD()      (HW_FEC_RCR.U)
#define HW_FEC_RCR_WR(v)     (HW_FEC_RCR.U = (v))
#define HW_FEC_RCR_SET(v)    (HW_FEC_RCR_WR(HW_FEC_RCR_RD() |  (v)))
#define HW_FEC_RCR_CLR(v)    (HW_FEC_RCR_WR(HW_FEC_RCR_RD() & ~(v)))
#define HW_FEC_RCR_TOG(v)    (HW_FEC_RCR_WR(HW_FEC_RCR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_RCR bitfields
 */

/* --- Register HW_FEC_RCR, field LOOP[0] (RW)
 *
 * Internal loopback.When LOOP is set to 1, transmitted frames are looped back internal to the
 * device and the transmit output signals are not asserted. The system clock is substituted for the
 * FEC_TX_CLK when LOOP is set to 1. DRT must be set to 0 when setting LOOP to 1.
 */

#define BP_FEC_RCR_LOOP      (0)      //!< Bit position for FEC_RCR_LOOP.
#define BM_FEC_RCR_LOOP      (0x00000001)  //!< Bit mask for FEC_RCR_LOOP.

//! @brief Get value of FEC_RCR_LOOP from a register value.
#define BG_FEC_RCR_LOOP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_RCR_LOOP) >> BP_FEC_RCR_LOOP)

//! @brief Format value for bitfield FEC_RCR_LOOP.
#define BF_FEC_RCR_LOOP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_RCR_LOOP) & BM_FEC_RCR_LOOP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LOOP field to a new value.
#define BW_FEC_RCR_LOOP(v)   (HW_FEC_RCR_WR((HW_FEC_RCR_RD() & ~BM_FEC_RCR_LOOP) | BF_FEC_RCR_LOOP(v)))
#endif

/* --- Register HW_FEC_RCR, field DRT[1] (RW)
 *
 * Disable receive on transmit.
 *
 * Values:
 * 0 - Receive path operates independently of transmit (use for full-duplex or to monitor transmit activity
 *     in half-duplex mode).
 * 1 - Disable reception of frames while transmitting (normally used for half-duplex mode).
 */

#define BP_FEC_RCR_DRT      (1)      //!< Bit position for FEC_RCR_DRT.
#define BM_FEC_RCR_DRT      (0x00000002)  //!< Bit mask for FEC_RCR_DRT.

//! @brief Get value of FEC_RCR_DRT from a register value.
#define BG_FEC_RCR_DRT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_RCR_DRT) >> BP_FEC_RCR_DRT)

//! @brief Format value for bitfield FEC_RCR_DRT.
#define BF_FEC_RCR_DRT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_RCR_DRT) & BM_FEC_RCR_DRT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DRT field to a new value.
#define BW_FEC_RCR_DRT(v)   (HW_FEC_RCR_WR((HW_FEC_RCR_RD() & ~BM_FEC_RCR_DRT) | BF_FEC_RCR_DRT(v)))
#endif


/* --- Register HW_FEC_RCR, field MII_MODE[2] (RW)
 *
 * Media independent interface mode. Setting this bit to 1 selects MII mode, setting this bit equal
 * to 1 selects 7-wire mode (used only for serial 10 Mbps). This bit controls the external interface
 * mode for both transmit and receive blocks.
 */

#define BP_FEC_RCR_MII_MODE      (2)      //!< Bit position for FEC_RCR_MII_MODE.
#define BM_FEC_RCR_MII_MODE      (0x00000004)  //!< Bit mask for FEC_RCR_MII_MODE.

//! @brief Get value of FEC_RCR_MII_MODE from a register value.
#define BG_FEC_RCR_MII_MODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_RCR_MII_MODE) >> BP_FEC_RCR_MII_MODE)

//! @brief Format value for bitfield FEC_RCR_MII_MODE.
#define BF_FEC_RCR_MII_MODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_RCR_MII_MODE) & BM_FEC_RCR_MII_MODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MII_MODE field to a new value.
#define BW_FEC_RCR_MII_MODE(v)   (HW_FEC_RCR_WR((HW_FEC_RCR_RD() & ~BM_FEC_RCR_MII_MODE) | BF_FEC_RCR_MII_MODE(v)))
#endif

/* --- Register HW_FEC_RCR, field PROM[3] (RW)
 *
 * Promiscuous mode. All frames are accepted regardless of address matching.
 */

#define BP_FEC_RCR_PROM      (3)      //!< Bit position for FEC_RCR_PROM.
#define BM_FEC_RCR_PROM      (0x00000008)  //!< Bit mask for FEC_RCR_PROM.

//! @brief Get value of FEC_RCR_PROM from a register value.
#define BG_FEC_RCR_PROM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_RCR_PROM) >> BP_FEC_RCR_PROM)

//! @brief Format value for bitfield FEC_RCR_PROM.
#define BF_FEC_RCR_PROM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_RCR_PROM) & BM_FEC_RCR_PROM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PROM field to a new value.
#define BW_FEC_RCR_PROM(v)   (HW_FEC_RCR_WR((HW_FEC_RCR_RD() & ~BM_FEC_RCR_PROM) | BF_FEC_RCR_PROM(v)))
#endif

/* --- Register HW_FEC_RCR, field BC_REJ[4] (RW)
 *
 * Broadcast frame reject. When BC_REJ is set to 1, frames with DA (destination address) =
 * 0xFF_FF_FF_FF_FF_FF are rejected unless the PROM bit is set to 1. If both BC_REJ and PROM are set
 * to 1, then frames with broadcast DA is accepted and the M (MISS) bit is set in the receive buffer
 * descriptor.
 */

#define BP_FEC_RCR_BC_REJ      (4)      //!< Bit position for FEC_RCR_BC_REJ.
#define BM_FEC_RCR_BC_REJ      (0x00000010)  //!< Bit mask for FEC_RCR_BC_REJ.

//! @brief Get value of FEC_RCR_BC_REJ from a register value.
#define BG_FEC_RCR_BC_REJ(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_RCR_BC_REJ) >> BP_FEC_RCR_BC_REJ)

//! @brief Format value for bitfield FEC_RCR_BC_REJ.
#define BF_FEC_RCR_BC_REJ(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_RCR_BC_REJ) & BM_FEC_RCR_BC_REJ)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BC_REJ field to a new value.
#define BW_FEC_RCR_BC_REJ(v)   (HW_FEC_RCR_WR((HW_FEC_RCR_RD() & ~BM_FEC_RCR_BC_REJ) | BF_FEC_RCR_BC_REJ(v)))
#endif

/* --- Register HW_FEC_RCR, field FCE[5] (RW)
 *
 * Flow control enable. When FCE is set to 1, the receiver detects pause frames. Upon pause frame
 * detection, the transmitter stops transmitting data frames for a given duration.
 */

#define BP_FEC_RCR_FCE      (5)      //!< Bit position for FEC_RCR_FCE.
#define BM_FEC_RCR_FCE      (0x00000020)  //!< Bit mask for FEC_RCR_FCE.

//! @brief Get value of FEC_RCR_FCE from a register value.
#define BG_FEC_RCR_FCE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_RCR_FCE) >> BP_FEC_RCR_FCE)

//! @brief Format value for bitfield FEC_RCR_FCE.
#define BF_FEC_RCR_FCE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_RCR_FCE) & BM_FEC_RCR_FCE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FCE field to a new value.
#define BW_FEC_RCR_FCE(v)   (HW_FEC_RCR_WR((HW_FEC_RCR_RD() & ~BM_FEC_RCR_FCE) | BF_FEC_RCR_FCE(v)))
#endif

/* --- Register HW_FEC_RCR, field MAX_FL[26:16] (RW)
 *
 * Maximum frame length. Resets to decimal 1518. Length is measured from DA and up to the CRC at the
 * end of the frame. Transmit frames longer than MAX_FL causes the BABT interrupt to occur. Receive
 * Frames longer than MAX_FL causes the BABR interrupt to occur and sets the LG bit in the last
 * frame receive buffer descriptor. The recommended default value to be programmed by the user is
 * 1518 or 1522 (if VLAN Tags are supported).
 */

#define BP_FEC_RCR_MAX_FL      (16)      //!< Bit position for FEC_RCR_MAX_FL.
#define BM_FEC_RCR_MAX_FL      (0x07ff0000)  //!< Bit mask for FEC_RCR_MAX_FL.

//! @brief Get value of FEC_RCR_MAX_FL from a register value.
#define BG_FEC_RCR_MAX_FL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_RCR_MAX_FL) >> BP_FEC_RCR_MAX_FL)

//! @brief Format value for bitfield FEC_RCR_MAX_FL.
#define BF_FEC_RCR_MAX_FL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_RCR_MAX_FL) & BM_FEC_RCR_MAX_FL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MAX_FL field to a new value.
#define BW_FEC_RCR_MAX_FL(v)   (HW_FEC_RCR_WR((HW_FEC_RCR_RD() & ~BM_FEC_RCR_MAX_FL) | BF_FEC_RCR_MAX_FL(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_TCR - Transmit control register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_TCR - Transmit control register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is read/write register which is written by the user to configure the transmit
 * block. Bits [2:1] must only be modified when FEC_ECR[ETHER_EN] = 0 (that is, during
 * initialization). This register is cleared at system reset.
 */
typedef union _hw_fec_tcr
{
    reg32_t U;
    struct _hw_fec_tcr_bitfields
    {
        unsigned GTS : 1; //!< [0] Graceful transmit stop.
        unsigned HBC : 1; //!< [1] Heartbeat control.
        unsigned FDEN : 1; //!< [2] Full duplex enable.
        unsigned TFC_PAUSE : 1; //!< [3] Transmit frame control pause.
        unsigned RFC_PAUSE : 1; //!< [4] Receive frame control pause.
        unsigned RESERVED0 : 27; //!< [31:5] Reserved read as 0
    } B;
} hw_fec_tcr_t;
#endif

/*
 * constants & macros for entire FEC_TCR register
 */
#define HW_FEC_TCR_ADDR      (REGS_FEC_BASE + 0xc4)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_TCR           (*(volatile hw_fec_tcr_t *) HW_FEC_TCR_ADDR)
#define HW_FEC_TCR_RD()      (HW_FEC_TCR.U)
#define HW_FEC_TCR_WR(v)     (HW_FEC_TCR.U = (v))
#define HW_FEC_TCR_SET(v)    (HW_FEC_TCR_WR(HW_FEC_TCR_RD() |  (v)))
#define HW_FEC_TCR_CLR(v)    (HW_FEC_TCR_WR(HW_FEC_TCR_RD() & ~(v)))
#define HW_FEC_TCR_TOG(v)    (HW_FEC_TCR_WR(HW_FEC_TCR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_TCR bitfields
 */

/* --- Register HW_FEC_TCR, field GTS[0] (RW)
 *
 * Graceful transmit stop. When GTS is set to 1, the FEC stops transmission after any frame that is
 * currently being transmitted is completed and the GRA interrupt in the FEC_EIR register is
 * asserted. If frame transmission is not currently underway, the GRA interrupt is asserted
 * immediately. After transmission has completed, a "restart" can be accomplished by clearing the
 * GTS bit. The next frame in the transmit FIFO is then transmitted. If an early collision occurs
 * during transmission when GTS = 1, transmission stops after the collision. The frame is
 * transmitted again after GTS is cleared. There can be old frames in the transmit FIFO that is
 * transmitted when GTS is reasserted. To avoid this, clear FEC_ECR[ETHER_EN] following the GRA
 * interrupt.
 *
 * Values:
 * 0 - Graceful transmit stop is not enabled
 * 1 - Graceful transmit stop is enabled.
 */

#define BP_FEC_TCR_GTS      (0)      //!< Bit position for FEC_TCR_GTS.
#define BM_FEC_TCR_GTS      (0x00000001)  //!< Bit mask for FEC_TCR_GTS.

//! @brief Get value of FEC_TCR_GTS from a register value.
#define BG_FEC_TCR_GTS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_TCR_GTS) >> BP_FEC_TCR_GTS)

//! @brief Format value for bitfield FEC_TCR_GTS.
#define BF_FEC_TCR_GTS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_TCR_GTS) & BM_FEC_TCR_GTS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GTS field to a new value.
#define BW_FEC_TCR_GTS(v)   (HW_FEC_TCR_WR((HW_FEC_TCR_RD() & ~BM_FEC_TCR_GTS) | BF_FEC_TCR_GTS(v)))
#endif


/* --- Register HW_FEC_TCR, field HBC[1] (RW)
 *
 * Heartbeat control. When HBC is set to 1, the heartbeat check is performed after end of
 * transmission and the HB bit in the status register is set if the collision input does not assert
 * within the heartbeat window. This bit must only be modified when ETHER_EN is cleared.
 *
 * Values:
 * 0 - Heartbeat check is not performed after end of transmission
 * 1 - Heartbeat check is performed after end of transmission
 */

#define BP_FEC_TCR_HBC      (1)      //!< Bit position for FEC_TCR_HBC.
#define BM_FEC_TCR_HBC      (0x00000002)  //!< Bit mask for FEC_TCR_HBC.

//! @brief Get value of FEC_TCR_HBC from a register value.
#define BG_FEC_TCR_HBC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_TCR_HBC) >> BP_FEC_TCR_HBC)

//! @brief Format value for bitfield FEC_TCR_HBC.
#define BF_FEC_TCR_HBC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_TCR_HBC) & BM_FEC_TCR_HBC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HBC field to a new value.
#define BW_FEC_TCR_HBC(v)   (HW_FEC_TCR_WR((HW_FEC_TCR_RD() & ~BM_FEC_TCR_HBC) | BF_FEC_TCR_HBC(v)))
#endif


/* --- Register HW_FEC_TCR, field FDEN[2] (RW)
 *
 * Full duplex enable. When FDEN is set to 1, frames are transmitted independent of carrier sense
 * and collision inputs. This bit must only be modified when ETHER_EN is cleared.
 *
 * Values:
 * 0 - Full duplex is not enabled
 * 1 - Full duplex is enabled
 */

#define BP_FEC_TCR_FDEN      (2)      //!< Bit position for FEC_TCR_FDEN.
#define BM_FEC_TCR_FDEN      (0x00000004)  //!< Bit mask for FEC_TCR_FDEN.

//! @brief Get value of FEC_TCR_FDEN from a register value.
#define BG_FEC_TCR_FDEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_TCR_FDEN) >> BP_FEC_TCR_FDEN)

//! @brief Format value for bitfield FEC_TCR_FDEN.
#define BF_FEC_TCR_FDEN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_TCR_FDEN) & BM_FEC_TCR_FDEN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FDEN field to a new value.
#define BW_FEC_TCR_FDEN(v)   (HW_FEC_TCR_WR((HW_FEC_TCR_RD() & ~BM_FEC_TCR_FDEN) | BF_FEC_TCR_FDEN(v)))
#endif


/* --- Register HW_FEC_TCR, field TFC_PAUSE[3] (RW)
 *
 * Transmit frame control pause. When this bit is set to 1, a pause frame is transmitted according
 * to the following steps: 1. FEC stops transmission of data frames after the current transmission
 * is complete. 2. The GRA interrupt in the FEC_EIR register is asserted. 3. With transmission of
 * data frames stopped, the FEC transmits a MAC control pause frame. 4. The FEC clears the TFC_PAUSE
 * bit and resume transmitting data frames. The FEC can still transmit a MAC control pause frame
 * when the transmitter is paused due to user assertion of GTS or reception of a pause frame.
 *
 * Values:
 * 0 - No pause frame is transmitted
 * 1 - Pause frame is transmitted
 */

#define BP_FEC_TCR_TFC_PAUSE      (3)      //!< Bit position for FEC_TCR_TFC_PAUSE.
#define BM_FEC_TCR_TFC_PAUSE      (0x00000008)  //!< Bit mask for FEC_TCR_TFC_PAUSE.

//! @brief Get value of FEC_TCR_TFC_PAUSE from a register value.
#define BG_FEC_TCR_TFC_PAUSE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_TCR_TFC_PAUSE) >> BP_FEC_TCR_TFC_PAUSE)

//! @brief Format value for bitfield FEC_TCR_TFC_PAUSE.
#define BF_FEC_TCR_TFC_PAUSE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_TCR_TFC_PAUSE) & BM_FEC_TCR_TFC_PAUSE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TFC_PAUSE field to a new value.
#define BW_FEC_TCR_TFC_PAUSE(v)   (HW_FEC_TCR_WR((HW_FEC_TCR_RD() & ~BM_FEC_TCR_TFC_PAUSE) | BF_FEC_TCR_TFC_PAUSE(v)))
#endif


/* --- Register HW_FEC_TCR, field RFC_PAUSE[4] (RO)
 *
 * Receive frame control pause. This read-only status bit is set to 1 when a full-duplex flow
 * control pause frame has been received and the transmitter is paused for the duration defined in
 * this pause frame. This bit automatically clears when the pause duration is complete.
 *
 * Values:
 * 0 - Transmitter is not paused
 * 1 - Transmitter is paused after reception of full-duplex flow control pause frame
 */

#define BP_FEC_TCR_RFC_PAUSE      (4)      //!< Bit position for FEC_TCR_RFC_PAUSE.
#define BM_FEC_TCR_RFC_PAUSE      (0x00000010)  //!< Bit mask for FEC_TCR_RFC_PAUSE.

//! @brief Get value of FEC_TCR_RFC_PAUSE from a register value.
#define BG_FEC_TCR_RFC_PAUSE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_TCR_RFC_PAUSE) >> BP_FEC_TCR_RFC_PAUSE)


//-------------------------------------------------------------------------------------------
// HW_FEC_PALR - Physical address low register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_PALR - Physical address low register (RW)
 *
 * Reset value: 0x00000000
 *
 * The FEC_PALR, which is written by the user, contains the lower 32 bits (bytes 0,1,2,3) of the
 * 48-bit address used in the address recognition process to check for possible match between the DA
 * field of receive frames and an individual DA. This register is also used for bytes 0 through 3 of
 * the 6-byte source address field when transmitting pause frames. This register is unaffected by
 * reset and must be initialized by the user.
 */
typedef union _hw_fec_palr
{
    reg32_t U;
    struct _hw_fec_palr_bitfields
    {
        unsigned PADDR1 : 32; //!< [31:0] Bytes 0 (bits 31:24), 1 (bits 23:16), 2 (bits 15:8) and 3 (bits 7:0) of the 6-byte individual address to be used for exact match, and the source address field in pause frames.
    } B;
} hw_fec_palr_t;
#endif

/*
 * constants & macros for entire FEC_PALR register
 */
#define HW_FEC_PALR_ADDR      (REGS_FEC_BASE + 0xe4)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_PALR           (*(volatile hw_fec_palr_t *) HW_FEC_PALR_ADDR)
#define HW_FEC_PALR_RD()      (HW_FEC_PALR.U)
#define HW_FEC_PALR_WR(v)     (HW_FEC_PALR.U = (v))
#define HW_FEC_PALR_SET(v)    (HW_FEC_PALR_WR(HW_FEC_PALR_RD() |  (v)))
#define HW_FEC_PALR_CLR(v)    (HW_FEC_PALR_WR(HW_FEC_PALR_RD() & ~(v)))
#define HW_FEC_PALR_TOG(v)    (HW_FEC_PALR_WR(HW_FEC_PALR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_PALR bitfields
 */

/* --- Register HW_FEC_PALR, field PADDR1[31:0] (RW)
 *
 * Bytes 0 (bits 31:24), 1 (bits 23:16), 2 (bits 15:8) and 3 (bits 7:0) of the 6-byte individual
 * address to be used for exact match, and the source address field in pause frames.
 */

#define BP_FEC_PALR_PADDR1      (0)      //!< Bit position for FEC_PALR_PADDR1.
#define BM_FEC_PALR_PADDR1      (0xffffffff)  //!< Bit mask for FEC_PALR_PADDR1.

//! @brief Get value of FEC_PALR_PADDR1 from a register value.
#define BG_FEC_PALR_PADDR1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_PALR_PADDR1) >> BP_FEC_PALR_PADDR1)

//! @brief Format value for bitfield FEC_PALR_PADDR1.
#define BF_FEC_PALR_PADDR1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_PALR_PADDR1) & BM_FEC_PALR_PADDR1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PADDR1 field to a new value.
#define BW_FEC_PALR_PADDR1(v)   (HW_FEC_PALR_WR((HW_FEC_PALR_RD() & ~BM_FEC_PALR_PADDR1) | BF_FEC_PALR_PADDR1(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_PAUR - Physical address upper register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_PAUR - Physical address upper register (RW)
 *
 * Reset value: 0x00008808
 *
 * The FEC_PAUR, which is written by the user, and contains the upper 16 bits (bytes 4 and 5) of the
 * 48-bit address used in the address recognition process to check for possible match between the DA
 * field of receive frames and an individual DA. In addition, this register is used in bytes 4 and 5
 * of the 6-byte source address field when transmitting pause frames. Bits 15:0 of FEC_PAUR are a
 * constant type field (0x8808) which is used for transmission of pause frames. This register is
 * unaffected by reset, and bits 31:16 must be initialized by the user.
 */
typedef union _hw_fec_paur
{
    reg32_t U;
    struct _hw_fec_paur_bitfields
    {
        unsigned TYPE : 16; //!< [15:0] Type field in pause frames.
        unsigned PADDR2 : 16; //!< [31:16] Bytes 4 (bits 31:24) and 5 (bits 23:16) of the 6-byte individual address to be used for exact match, and the source address field in pause frames.
    } B;
} hw_fec_paur_t;
#endif

/*
 * constants & macros for entire FEC_PAUR register
 */
#define HW_FEC_PAUR_ADDR      (REGS_FEC_BASE + 0xe8)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_PAUR           (*(volatile hw_fec_paur_t *) HW_FEC_PAUR_ADDR)
#define HW_FEC_PAUR_RD()      (HW_FEC_PAUR.U)
#define HW_FEC_PAUR_WR(v)     (HW_FEC_PAUR.U = (v))
#define HW_FEC_PAUR_SET(v)    (HW_FEC_PAUR_WR(HW_FEC_PAUR_RD() |  (v)))
#define HW_FEC_PAUR_CLR(v)    (HW_FEC_PAUR_WR(HW_FEC_PAUR_RD() & ~(v)))
#define HW_FEC_PAUR_TOG(v)    (HW_FEC_PAUR_WR(HW_FEC_PAUR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_PAUR bitfields
 */

/* --- Register HW_FEC_PAUR, field TYPE[15:0] (RO)
 *
 * Type field in pause frames. This field has a constant value of 0x8808.
 */

#define BP_FEC_PAUR_TYPE      (0)      //!< Bit position for FEC_PAUR_TYPE.
#define BM_FEC_PAUR_TYPE      (0x0000ffff)  //!< Bit mask for FEC_PAUR_TYPE.

//! @brief Get value of FEC_PAUR_TYPE from a register value.
#define BG_FEC_PAUR_TYPE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_PAUR_TYPE) >> BP_FEC_PAUR_TYPE)

/* --- Register HW_FEC_PAUR, field PADDR2[31:16] (RW)
 *
 * Bytes 4 (bits 31:24) and 5 (bits 23:16) of the 6-byte individual address to be used for exact
 * match, and the source address field in pause frames.
 */

#define BP_FEC_PAUR_PADDR2      (16)      //!< Bit position for FEC_PAUR_PADDR2.
#define BM_FEC_PAUR_PADDR2      (0xffff0000)  //!< Bit mask for FEC_PAUR_PADDR2.

//! @brief Get value of FEC_PAUR_PADDR2 from a register value.
#define BG_FEC_PAUR_PADDR2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_PAUR_PADDR2) >> BP_FEC_PAUR_PADDR2)

//! @brief Format value for bitfield FEC_PAUR_PADDR2.
#define BF_FEC_PAUR_PADDR2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_PAUR_PADDR2) & BM_FEC_PAUR_PADDR2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PADDR2 field to a new value.
#define BW_FEC_PAUR_PADDR2(v)   (HW_FEC_PAUR_WR((HW_FEC_PAUR_RD() & ~BM_FEC_PAUR_PADDR2) | BF_FEC_PAUR_PADDR2(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_OPDR - Opcode and pause duration register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_OPDR - Opcode and pause duration register (RW)
 *
 * Reset value: 0x00010000
 *
 * FEC_OPDR contains the 16-bit Opcode, and 16-bit pause duration fields used in transmission of a
 * pause frame. The Opcode field is a constant value, 0x0001. When another node detects a pause
 * frame, that node pauses transmission for the duration specified in the pause duration field. This
 * register is not reset and must be initialized by the user.
 */
typedef union _hw_fec_opdr
{
    reg32_t U;
    struct _hw_fec_opdr_bitfields
    {
        unsigned PAUSE_DUR : 16; //!< [15:0] Pause duration field used in pause frames.
        unsigned OPCODE : 16; //!< [31:16] Opcode field used in pause frames.
    } B;
} hw_fec_opdr_t;
#endif

/*
 * constants & macros for entire FEC_OPDR register
 */
#define HW_FEC_OPDR_ADDR      (REGS_FEC_BASE + 0xec)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_OPDR           (*(volatile hw_fec_opdr_t *) HW_FEC_OPDR_ADDR)
#define HW_FEC_OPDR_RD()      (HW_FEC_OPDR.U)
#define HW_FEC_OPDR_WR(v)     (HW_FEC_OPDR.U = (v))
#define HW_FEC_OPDR_SET(v)    (HW_FEC_OPDR_WR(HW_FEC_OPDR_RD() |  (v)))
#define HW_FEC_OPDR_CLR(v)    (HW_FEC_OPDR_WR(HW_FEC_OPDR_RD() & ~(v)))
#define HW_FEC_OPDR_TOG(v)    (HW_FEC_OPDR_WR(HW_FEC_OPDR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_OPDR bitfields
 */

/* --- Register HW_FEC_OPDR, field PAUSE_DUR[15:0] (RW)
 *
 * Pause duration field used in pause frames.
 */

#define BP_FEC_OPDR_PAUSE_DUR      (0)      //!< Bit position for FEC_OPDR_PAUSE_DUR.
#define BM_FEC_OPDR_PAUSE_DUR      (0x0000ffff)  //!< Bit mask for FEC_OPDR_PAUSE_DUR.

//! @brief Get value of FEC_OPDR_PAUSE_DUR from a register value.
#define BG_FEC_OPDR_PAUSE_DUR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_OPDR_PAUSE_DUR) >> BP_FEC_OPDR_PAUSE_DUR)

//! @brief Format value for bitfield FEC_OPDR_PAUSE_DUR.
#define BF_FEC_OPDR_PAUSE_DUR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_OPDR_PAUSE_DUR) & BM_FEC_OPDR_PAUSE_DUR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PAUSE_DUR field to a new value.
#define BW_FEC_OPDR_PAUSE_DUR(v)   (HW_FEC_OPDR_WR((HW_FEC_OPDR_RD() & ~BM_FEC_OPDR_PAUSE_DUR) | BF_FEC_OPDR_PAUSE_DUR(v)))
#endif

/* --- Register HW_FEC_OPDR, field OPCODE[31:16] (RO)
 *
 * Opcode field used in pause frames. These bits are a constant, 0x0001.
 */

#define BP_FEC_OPDR_OPCODE      (16)      //!< Bit position for FEC_OPDR_OPCODE.
#define BM_FEC_OPDR_OPCODE      (0xffff0000)  //!< Bit mask for FEC_OPDR_OPCODE.

//! @brief Get value of FEC_OPDR_OPCODE from a register value.
#define BG_FEC_OPDR_OPCODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_OPDR_OPCODE) >> BP_FEC_OPDR_OPCODE)

//-------------------------------------------------------------------------------------------
// HW_FEC_IAUR - Descriptor individual address upper register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_IAUR - Descriptor individual address upper register (RW)
 *
 * Reset value: 0x00000000
 *
 * The FEC_IAUR, which is written by the user, contains the upper 32 bits of the 64-bit individual
 * address hash table used in the address recognition process to check for possible match between
 * the DA field of receive frames and an individual DA. This register is unaffected by reset, and
 * must be initialized by the user.
 */
typedef union _hw_fec_iaur
{
    reg32_t U;
    struct _hw_fec_iaur_bitfields
    {
        unsigned IADDR1 : 32; //!< [31:0] The upper 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a unicast address.
    } B;
} hw_fec_iaur_t;
#endif

/*
 * constants & macros for entire FEC_IAUR register
 */
#define HW_FEC_IAUR_ADDR      (REGS_FEC_BASE + 0x118)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_IAUR           (*(volatile hw_fec_iaur_t *) HW_FEC_IAUR_ADDR)
#define HW_FEC_IAUR_RD()      (HW_FEC_IAUR.U)
#define HW_FEC_IAUR_WR(v)     (HW_FEC_IAUR.U = (v))
#define HW_FEC_IAUR_SET(v)    (HW_FEC_IAUR_WR(HW_FEC_IAUR_RD() |  (v)))
#define HW_FEC_IAUR_CLR(v)    (HW_FEC_IAUR_WR(HW_FEC_IAUR_RD() & ~(v)))
#define HW_FEC_IAUR_TOG(v)    (HW_FEC_IAUR_WR(HW_FEC_IAUR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_IAUR bitfields
 */

/* --- Register HW_FEC_IAUR, field IADDR1[31:0] (RW)
 *
 * The upper 32 bits of the 64-bit hash table used in the address recognition process for receive
 * frames with a unicast address. Bit 31 of IADDR1 contains hash index bit 63. Bit 0 of IADDR1
 * contains hash index bit 32.
 */

#define BP_FEC_IAUR_IADDR1      (0)      //!< Bit position for FEC_IAUR_IADDR1.
#define BM_FEC_IAUR_IADDR1      (0xffffffff)  //!< Bit mask for FEC_IAUR_IADDR1.

//! @brief Get value of FEC_IAUR_IADDR1 from a register value.
#define BG_FEC_IAUR_IADDR1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_IAUR_IADDR1) >> BP_FEC_IAUR_IADDR1)

//! @brief Format value for bitfield FEC_IAUR_IADDR1.
#define BF_FEC_IAUR_IADDR1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_IAUR_IADDR1) & BM_FEC_IAUR_IADDR1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IADDR1 field to a new value.
#define BW_FEC_IAUR_IADDR1(v)   (HW_FEC_IAUR_WR((HW_FEC_IAUR_RD() & ~BM_FEC_IAUR_IADDR1) | BF_FEC_IAUR_IADDR1(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_IALR - Descriptor individual address lower register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_IALR - Descriptor individual address lower register (RW)
 *
 * Reset value: 0x00000000
 *
 * The FEC_IALR, which is written by the user, contains the lower 32 bits of the 64-bit individual
 * address hash table used in the address recognition process to check for possible match with the
 * DA field of receive frames with an individual DA. This register is unaffected by reset, and must
 * be initialized by the user.
 */
typedef union _hw_fec_ialr
{
    reg32_t U;
    struct _hw_fec_ialr_bitfields
    {
        unsigned IADDR2 : 32; //!< [31:0] The lower 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a unicast address.
    } B;
} hw_fec_ialr_t;
#endif

/*
 * constants & macros for entire FEC_IALR register
 */
#define HW_FEC_IALR_ADDR      (REGS_FEC_BASE + 0x11c)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_IALR           (*(volatile hw_fec_ialr_t *) HW_FEC_IALR_ADDR)
#define HW_FEC_IALR_RD()      (HW_FEC_IALR.U)
#define HW_FEC_IALR_WR(v)     (HW_FEC_IALR.U = (v))
#define HW_FEC_IALR_SET(v)    (HW_FEC_IALR_WR(HW_FEC_IALR_RD() |  (v)))
#define HW_FEC_IALR_CLR(v)    (HW_FEC_IALR_WR(HW_FEC_IALR_RD() & ~(v)))
#define HW_FEC_IALR_TOG(v)    (HW_FEC_IALR_WR(HW_FEC_IALR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_IALR bitfields
 */

/* --- Register HW_FEC_IALR, field IADDR2[31:0] (RW)
 *
 * The lower 32 bits of the 64-bit hash table used in the address recognition process for receive
 * frames with a unicast address. Bit 31 of IADDR2 contains hash index bit 31. Bit 0 of IADDR2
 * contains hash index bit 0.
 */

#define BP_FEC_IALR_IADDR2      (0)      //!< Bit position for FEC_IALR_IADDR2.
#define BM_FEC_IALR_IADDR2      (0xffffffff)  //!< Bit mask for FEC_IALR_IADDR2.

//! @brief Get value of FEC_IALR_IADDR2 from a register value.
#define BG_FEC_IALR_IADDR2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_IALR_IADDR2) >> BP_FEC_IALR_IADDR2)

//! @brief Format value for bitfield FEC_IALR_IADDR2.
#define BF_FEC_IALR_IADDR2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_IALR_IADDR2) & BM_FEC_IALR_IADDR2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IADDR2 field to a new value.
#define BW_FEC_IALR_IADDR2(v)   (HW_FEC_IALR_WR((HW_FEC_IALR_RD() & ~BM_FEC_IALR_IADDR2) | BF_FEC_IALR_IADDR2(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_GAUR - Descriptor group address upper register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_GAUR - Descriptor group address upper register (RW)
 *
 * Reset value: 0x00000000
 *
 * The FEC_GAUR, which is written by the user, contains the upper 32 bits of the 64-bit hash table
 * used in the address recognition process for receive frames with a multicast address. This
 * register must be initialized by the user.
 */
typedef union _hw_fec_gaur
{
    reg32_t U;
    struct _hw_fec_gaur_bitfields
    {
        unsigned GADDR1 : 32; //!< [31:0] The GADDR1 register contains the upper 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a multicast address.
    } B;
} hw_fec_gaur_t;
#endif

/*
 * constants & macros for entire FEC_GAUR register
 */
#define HW_FEC_GAUR_ADDR      (REGS_FEC_BASE + 0x120)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_GAUR           (*(volatile hw_fec_gaur_t *) HW_FEC_GAUR_ADDR)
#define HW_FEC_GAUR_RD()      (HW_FEC_GAUR.U)
#define HW_FEC_GAUR_WR(v)     (HW_FEC_GAUR.U = (v))
#define HW_FEC_GAUR_SET(v)    (HW_FEC_GAUR_WR(HW_FEC_GAUR_RD() |  (v)))
#define HW_FEC_GAUR_CLR(v)    (HW_FEC_GAUR_WR(HW_FEC_GAUR_RD() & ~(v)))
#define HW_FEC_GAUR_TOG(v)    (HW_FEC_GAUR_WR(HW_FEC_GAUR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_GAUR bitfields
 */

/* --- Register HW_FEC_GAUR, field GADDR1[31:0] (RW)
 *
 * The GADDR1 register contains the upper 32 bits of the 64-bit hash table used in the address
 * recognition process for receive frames with a multicast address. Bit 31 of GADDR1 contains hash
 * index bit 63. Bit 0 of GADDR1 contains hash index bit 32.
 */

#define BP_FEC_GAUR_GADDR1      (0)      //!< Bit position for FEC_GAUR_GADDR1.
#define BM_FEC_GAUR_GADDR1      (0xffffffff)  //!< Bit mask for FEC_GAUR_GADDR1.

//! @brief Get value of FEC_GAUR_GADDR1 from a register value.
#define BG_FEC_GAUR_GADDR1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_GAUR_GADDR1) >> BP_FEC_GAUR_GADDR1)

//! @brief Format value for bitfield FEC_GAUR_GADDR1.
#define BF_FEC_GAUR_GADDR1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_GAUR_GADDR1) & BM_FEC_GAUR_GADDR1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GADDR1 field to a new value.
#define BW_FEC_GAUR_GADDR1(v)   (HW_FEC_GAUR_WR((HW_FEC_GAUR_RD() & ~BM_FEC_GAUR_GADDR1) | BF_FEC_GAUR_GADDR1(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_GALR - Descriptor group address lower register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_GALR - Descriptor group address lower register (RW)
 *
 * Reset value: 0x00000000
 *
 * The FEC_GALR, which is written by the user, contains the lower 32 bits of the 64-bit hash table
 * used in the address recognition process for receive frames with a multicast address. This
 * register must be initialized by the user.
 */
typedef union _hw_fec_galr
{
    reg32_t U;
    struct _hw_fec_galr_bitfields
    {
        unsigned GADDR2 : 32; //!< [31:0] The GADDR2 register contains the lower 32 bits of the 64-bit hash table used in the address recognition process for receive frames with a multicast address.
    } B;
} hw_fec_galr_t;
#endif

/*
 * constants & macros for entire FEC_GALR register
 */
#define HW_FEC_GALR_ADDR      (REGS_FEC_BASE + 0x124)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_GALR           (*(volatile hw_fec_galr_t *) HW_FEC_GALR_ADDR)
#define HW_FEC_GALR_RD()      (HW_FEC_GALR.U)
#define HW_FEC_GALR_WR(v)     (HW_FEC_GALR.U = (v))
#define HW_FEC_GALR_SET(v)    (HW_FEC_GALR_WR(HW_FEC_GALR_RD() |  (v)))
#define HW_FEC_GALR_CLR(v)    (HW_FEC_GALR_WR(HW_FEC_GALR_RD() & ~(v)))
#define HW_FEC_GALR_TOG(v)    (HW_FEC_GALR_WR(HW_FEC_GALR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_GALR bitfields
 */

/* --- Register HW_FEC_GALR, field GADDR2[31:0] (RW)
 *
 * The GADDR2 register contains the lower 32 bits of the 64-bit hash table used in the address
 * recognition process for receive frames with a multicast address. Bit 31 of GADDR2 contains hash
 * index bit 31. Bit 0 of GADDR2 contains hash index bit 0.
 */

#define BP_FEC_GALR_GADDR2      (0)      //!< Bit position for FEC_GALR_GADDR2.
#define BM_FEC_GALR_GADDR2      (0xffffffff)  //!< Bit mask for FEC_GALR_GADDR2.

//! @brief Get value of FEC_GALR_GADDR2 from a register value.
#define BG_FEC_GALR_GADDR2(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_GALR_GADDR2) >> BP_FEC_GALR_GADDR2)

//! @brief Format value for bitfield FEC_GALR_GADDR2.
#define BF_FEC_GALR_GADDR2(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_GALR_GADDR2) & BM_FEC_GALR_GADDR2)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GADDR2 field to a new value.
#define BW_FEC_GALR_GADDR2(v)   (HW_FEC_GALR_WR((HW_FEC_GALR_RD() & ~BM_FEC_GALR_GADDR2) | BF_FEC_GALR_GADDR2(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_TFWR - Transmit FIFO watermark register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_TFWR - Transmit FIFO watermark register (RW)
 *
 * Reset value: 0x00000000
 *
 * The FEC_TFWR is programmed by the user to control the amount of data required in the transmit
 * FIFO before transmission of a frame can begin. This allows the user to minimize transmit latency
 * (FEC_TFWR[1:0] = 0x n ) or allow for larger bus access latency (FEC_TFWR[1:0] = 11) due to
 * contention for the system bus. Setting the watermark to a high value minimizes the risk of
 * transmit FIFO underrun due to contention for the system bus. In some use cases the byte counts
 * associated with the FEC_TFWR field need to be modified to match system requirements, such as the
 * worst-case bus access latency by the transmit data DMA channel.
 */
typedef union _hw_fec_tfwr
{
    reg32_t U;
    struct _hw_fec_tfwr_bitfields
    {
        unsigned X_WMRK : 2; //!< [1:0] Number of bytes written to transmit FIFO before transmission of a frame begins
        unsigned RESERVED0 : 30; //!< [31:2] Reserved, read as 0
    } B;
} hw_fec_tfwr_t;
#endif

/*
 * constants & macros for entire FEC_TFWR register
 */
#define HW_FEC_TFWR_ADDR      (REGS_FEC_BASE + 0x144)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_TFWR           (*(volatile hw_fec_tfwr_t *) HW_FEC_TFWR_ADDR)
#define HW_FEC_TFWR_RD()      (HW_FEC_TFWR.U)
#define HW_FEC_TFWR_WR(v)     (HW_FEC_TFWR.U = (v))
#define HW_FEC_TFWR_SET(v)    (HW_FEC_TFWR_WR(HW_FEC_TFWR_RD() |  (v)))
#define HW_FEC_TFWR_CLR(v)    (HW_FEC_TFWR_WR(HW_FEC_TFWR_RD() & ~(v)))
#define HW_FEC_TFWR_TOG(v)    (HW_FEC_TFWR_WR(HW_FEC_TFWR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_TFWR bitfields
 */

/* --- Register HW_FEC_TFWR, field X_WMRK[1:0] (RW)
 *
 * Number of bytes written to transmit FIFO before transmission of a frame begins
 *
 * Values:
 * 0x - 64 bytes written
 * 10 - 128 bytes written
 * 11 - 192 bytes written
 */

#define BP_FEC_TFWR_X_WMRK      (0)      //!< Bit position for FEC_TFWR_X_WMRK.
#define BM_FEC_TFWR_X_WMRK      (0x00000003)  //!< Bit mask for FEC_TFWR_X_WMRK.

//! @brief Get value of FEC_TFWR_X_WMRK from a register value.
#define BG_FEC_TFWR_X_WMRK(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_TFWR_X_WMRK) >> BP_FEC_TFWR_X_WMRK)

//! @brief Format value for bitfield FEC_TFWR_X_WMRK.
#define BF_FEC_TFWR_X_WMRK(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_TFWR_X_WMRK) & BM_FEC_TFWR_X_WMRK)

#ifndef __LANGUAGE_ASM__
//! @brief Set the X_WMRK field to a new value.
#define BW_FEC_TFWR_X_WMRK(v)   (HW_FEC_TFWR_WR((HW_FEC_TFWR_RD() & ~BM_FEC_TFWR_X_WMRK) | BF_FEC_TFWR_X_WMRK(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_FEC_FRBR - FIFO receive bound register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_FRBR - FIFO receive bound register (RO)
 *
 * Reset value: 0x00000600
 *
 * The FEC_FRBR register can be read to determine the upper address bound of the FIFO RAM. Drivers
 * can use this value, along with the FEC_FRSR to appropriately divide the available FIFO RAM
 * between the transmit and receive data paths.
 */
typedef union _hw_fec_frbr
{
    reg32_t U;
    struct _hw_fec_frbr_bitfields
    {
        unsigned RESERVED0 : 2; //!< [1:0] Reserved, read as 0.
        unsigned R_BOUND : 8; //!< [9:2] Read-only.
        unsigned RESERVED1 : 22; //!< [31:10] Reserved, read as 0 (except bit 10, which is read as 1).
    } B;
} hw_fec_frbr_t;
#endif

/*
 * constants & macros for entire FEC_FRBR register
 */
#define HW_FEC_FRBR_ADDR      (REGS_FEC_BASE + 0x14c)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_FRBR           (*(volatile hw_fec_frbr_t *) HW_FEC_FRBR_ADDR)
#define HW_FEC_FRBR_RD()      (HW_FEC_FRBR.U)
#endif

/*
 * constants & macros for individual FEC_FRBR bitfields
 */

/* --- Register HW_FEC_FRBR, field R_BOUND[9:2] (RO)
 *
 * Read-only. Highest valid FIFO RAM address.
 */

#define BP_FEC_FRBR_R_BOUND      (2)      //!< Bit position for FEC_FRBR_R_BOUND.
#define BM_FEC_FRBR_R_BOUND      (0x000003fc)  //!< Bit mask for FEC_FRBR_R_BOUND.

//! @brief Get value of FEC_FRBR_R_BOUND from a register value.
#define BG_FEC_FRBR_R_BOUND(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_FRBR_R_BOUND) >> BP_FEC_FRBR_R_BOUND)

//-------------------------------------------------------------------------------------------
// HW_FEC_FRSR - FIFO receive FIFO start registers
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_FRSR - FIFO receive FIFO start registers (RW)
 *
 * Reset value: 0x00000500
 *
 * FEC_FRSR is an 8-bit register programmed by the user to indicate the starting address of the
 * receive FIFO. FEC_FRSR marks the boundary between the transmit and receive FIFOs. The transmit
 * FIFO uses addresses from the start of the FIFO to the location four bytes before the address
 * programmed into the FEC_FRSR. The receive FIFO uses the addresses from FEC_FRSR to FEC_FRBR
 * inclusive.  The default value of the receive FIFO starting address is 0x40. This is the value
 * assigned by hardware at reset.
 */
typedef union _hw_fec_frsr
{
    reg32_t U;
    struct _hw_fec_frsr_bitfields
    {
        unsigned RESERVED0 : 2; //!< [1:0] Reserved, read as 0.
        unsigned R_FSTART : 8; //!< [9:2] Address of first receive FIFO location.
        unsigned RESERVED1 : 22; //!< [31:10] Reserved, read as 0 (except bit 10, which is read as 1).
    } B;
} hw_fec_frsr_t;
#endif

/*
 * constants & macros for entire FEC_FRSR register
 */
#define HW_FEC_FRSR_ADDR      (REGS_FEC_BASE + 0x150)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_FRSR           (*(volatile hw_fec_frsr_t *) HW_FEC_FRSR_ADDR)
#define HW_FEC_FRSR_RD()      (HW_FEC_FRSR.U)
#define HW_FEC_FRSR_WR(v)     (HW_FEC_FRSR.U = (v))
#define HW_FEC_FRSR_SET(v)    (HW_FEC_FRSR_WR(HW_FEC_FRSR_RD() |  (v)))
#define HW_FEC_FRSR_CLR(v)    (HW_FEC_FRSR_WR(HW_FEC_FRSR_RD() & ~(v)))
#define HW_FEC_FRSR_TOG(v)    (HW_FEC_FRSR_WR(HW_FEC_FRSR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_FRSR bitfields
 */

/* --- Register HW_FEC_FRSR, field R_FSTART[9:2] (RW)
 *
 * Address of first receive FIFO location. Acts as delimiter between receive and transmit FIFOs.
 */

#define BP_FEC_FRSR_R_FSTART      (2)      //!< Bit position for FEC_FRSR_R_FSTART.
#define BM_FEC_FRSR_R_FSTART      (0x000003fc)  //!< Bit mask for FEC_FRSR_R_FSTART.

//! @brief Get value of FEC_FRSR_R_FSTART from a register value.
#define BG_FEC_FRSR_R_FSTART(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_FRSR_R_FSTART) >> BP_FEC_FRSR_R_FSTART)

//! @brief Format value for bitfield FEC_FRSR_R_FSTART.
#define BF_FEC_FRSR_R_FSTART(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_FRSR_R_FSTART) & BM_FEC_FRSR_R_FSTART)

#ifndef __LANGUAGE_ASM__
//! @brief Set the R_FSTART field to a new value.
#define BW_FEC_FRSR_R_FSTART(v)   (HW_FEC_FRSR_WR((HW_FEC_FRSR_RD() & ~BM_FEC_FRSR_R_FSTART) | BF_FEC_FRSR_R_FSTART(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_ERDSR - Receive buffer descriptor ring start register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_ERDSR - Receive buffer descriptor ring start register (RW)
 *
 * Reset value: 0x00000000
 *
 * The register, which is written by the user, provides a pointer to the start of the circular
 * receive buffer descriptor queue in external memory. This pointer must be 128-bit aligned (that
 * is, evenly divisible by 16).  This register is unaffected by reset and must be initialized by the
 * user prior to operation.
 */
typedef union _hw_fec_erdsr
{
    reg32_t U;
    struct _hw_fec_erdsr_bitfields
    {
        unsigned RESERVED0 : 2; //!< [1:0] Reserved, read as 0
        unsigned R_DES_START : 30; //!< [31:2] Pointer to start of receive buffer descriptor queue.
    } B;
} hw_fec_erdsr_t;
#endif

/*
 * constants & macros for entire FEC_ERDSR register
 */
#define HW_FEC_ERDSR_ADDR      (REGS_FEC_BASE + 0x180)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_ERDSR           (*(volatile hw_fec_erdsr_t *) HW_FEC_ERDSR_ADDR)
#define HW_FEC_ERDSR_RD()      (HW_FEC_ERDSR.U)
#define HW_FEC_ERDSR_WR(v)     (HW_FEC_ERDSR.U = (v))
#define HW_FEC_ERDSR_SET(v)    (HW_FEC_ERDSR_WR(HW_FEC_ERDSR_RD() |  (v)))
#define HW_FEC_ERDSR_CLR(v)    (HW_FEC_ERDSR_WR(HW_FEC_ERDSR_RD() & ~(v)))
#define HW_FEC_ERDSR_TOG(v)    (HW_FEC_ERDSR_WR(HW_FEC_ERDSR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_ERDSR bitfields
 */

/* --- Register HW_FEC_ERDSR, field R_DES_START[31:2] (RW)
 *
 * Pointer to start of receive buffer descriptor queue.
 */

#define BP_FEC_ERDSR_R_DES_START      (2)      //!< Bit position for FEC_ERDSR_R_DES_START.
#define BM_FEC_ERDSR_R_DES_START      (0xfffffffc)  //!< Bit mask for FEC_ERDSR_R_DES_START.

//! @brief Get value of FEC_ERDSR_R_DES_START from a register value.
#define BG_FEC_ERDSR_R_DES_START(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_ERDSR_R_DES_START) >> BP_FEC_ERDSR_R_DES_START)

//! @brief Format value for bitfield FEC_ERDSR_R_DES_START.
#define BF_FEC_ERDSR_R_DES_START(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_ERDSR_R_DES_START) & BM_FEC_ERDSR_R_DES_START)

#ifndef __LANGUAGE_ASM__
//! @brief Set the R_DES_START field to a new value.
#define BW_FEC_ERDSR_R_DES_START(v)   (HW_FEC_ERDSR_WR((HW_FEC_ERDSR_RD() & ~BM_FEC_ERDSR_R_DES_START) | BF_FEC_ERDSR_R_DES_START(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_ETDSR - Transmit buffer descriptor ring start register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_ETDSR - Transmit buffer descriptor ring start register (RW)
 *
 * Reset value: 0x00000000
 *
 * The register, which is written by the user, provides a pointer to the start of the circular
 * transmit buffer descriptor queue in external memory. This pointer must be 128-bit aligned (that
 * is, evenly divisible by 16).  This register is unaffected by reset and must be initialized by the
 * user prior to operation.
 */
typedef union _hw_fec_etdsr
{
    reg32_t U;
    struct _hw_fec_etdsr_bitfields
    {
        unsigned RESERVED0 : 2; //!< [1:0] Reserved, read as 0
        unsigned X_DES_START : 30; //!< [31:2] Pointer to start of transmit buffer descriptor queue.
    } B;
} hw_fec_etdsr_t;
#endif

/*
 * constants & macros for entire FEC_ETDSR register
 */
#define HW_FEC_ETDSR_ADDR      (REGS_FEC_BASE + 0x184)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_ETDSR           (*(volatile hw_fec_etdsr_t *) HW_FEC_ETDSR_ADDR)
#define HW_FEC_ETDSR_RD()      (HW_FEC_ETDSR.U)
#define HW_FEC_ETDSR_WR(v)     (HW_FEC_ETDSR.U = (v))
#define HW_FEC_ETDSR_SET(v)    (HW_FEC_ETDSR_WR(HW_FEC_ETDSR_RD() |  (v)))
#define HW_FEC_ETDSR_CLR(v)    (HW_FEC_ETDSR_WR(HW_FEC_ETDSR_RD() & ~(v)))
#define HW_FEC_ETDSR_TOG(v)    (HW_FEC_ETDSR_WR(HW_FEC_ETDSR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_ETDSR bitfields
 */

/* --- Register HW_FEC_ETDSR, field X_DES_START[31:2] (RW)
 *
 * Pointer to start of transmit buffer descriptor queue.
 */

#define BP_FEC_ETDSR_X_DES_START      (2)      //!< Bit position for FEC_ETDSR_X_DES_START.
#define BM_FEC_ETDSR_X_DES_START      (0xfffffffc)  //!< Bit mask for FEC_ETDSR_X_DES_START.

//! @brief Get value of FEC_ETDSR_X_DES_START from a register value.
#define BG_FEC_ETDSR_X_DES_START(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_ETDSR_X_DES_START) >> BP_FEC_ETDSR_X_DES_START)

//! @brief Format value for bitfield FEC_ETDSR_X_DES_START.
#define BF_FEC_ETDSR_X_DES_START(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_ETDSR_X_DES_START) & BM_FEC_ETDSR_X_DES_START)

#ifndef __LANGUAGE_ASM__
//! @brief Set the X_DES_START field to a new value.
#define BW_FEC_ETDSR_X_DES_START(v)   (HW_FEC_ETDSR_WR((HW_FEC_ETDSR_RD() & ~BM_FEC_ETDSR_X_DES_START) | BF_FEC_ETDSR_X_DES_START(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_FEC_EMRBR - Maximum receive buffer size register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_FEC_EMRBR - Maximum receive buffer size register (RW)
 *
 * Reset value: 0x00000000
 *
 * The FEC_EMRBR is a user-programmable register which dictates the maximum size of all receive
 * buffers. Note that receive frames is truncated at 2k-1(2047) bytes, so bits 31-11 are not used.
 * The programmed value accounts for the fact that the receive CRC is always written into the last
 * receive buffer. To allow one maximum size frame per buffer, FEC_EMRBR must be set to
 * FEC_RCR[MAX_FL] or larger. The FEC_EMRBR must be evenly divisible by 16. To ensure this, bits 3-0
 * are forced to low, and hence only bits 10-4 are actually used. To minimize bus utilization
 * (descriptor fetches), it is recommended that FEC_EMRBR must be greater than or equal to 256
 * bytes.  The FEC_EMRBR is unaffected by reset, and must be initialized by the user.
 */
typedef union _hw_fec_emrbr
{
    reg32_t U;
    struct _hw_fec_emrbr_bitfields
    {
        unsigned RESERVED0 : 4; //!< [3:0] Reserved, is written to 0 by the host processor.
        unsigned R_BUF_SIZE : 7; //!< [10:4] Receive buffer size.
        unsigned RESERVED1 : 21; //!< [31:11] Reserved, is written to 0 by the host processor.
    } B;
} hw_fec_emrbr_t;
#endif

/*
 * constants & macros for entire FEC_EMRBR register
 */
#define HW_FEC_EMRBR_ADDR      (REGS_FEC_BASE + 0x188)

#ifndef __LANGUAGE_ASM__
#define HW_FEC_EMRBR           (*(volatile hw_fec_emrbr_t *) HW_FEC_EMRBR_ADDR)
#define HW_FEC_EMRBR_RD()      (HW_FEC_EMRBR.U)
#define HW_FEC_EMRBR_WR(v)     (HW_FEC_EMRBR.U = (v))
#define HW_FEC_EMRBR_SET(v)    (HW_FEC_EMRBR_WR(HW_FEC_EMRBR_RD() |  (v)))
#define HW_FEC_EMRBR_CLR(v)    (HW_FEC_EMRBR_WR(HW_FEC_EMRBR_RD() & ~(v)))
#define HW_FEC_EMRBR_TOG(v)    (HW_FEC_EMRBR_WR(HW_FEC_EMRBR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual FEC_EMRBR bitfields
 */

/* --- Register HW_FEC_EMRBR, field R_BUF_SIZE[10:4] (RW)
 *
 * Receive buffer size.
 */

#define BP_FEC_EMRBR_R_BUF_SIZE      (4)      //!< Bit position for FEC_EMRBR_R_BUF_SIZE.
#define BM_FEC_EMRBR_R_BUF_SIZE      (0x000007f0)  //!< Bit mask for FEC_EMRBR_R_BUF_SIZE.

//! @brief Get value of FEC_EMRBR_R_BUF_SIZE from a register value.
#define BG_FEC_EMRBR_R_BUF_SIZE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_FEC_EMRBR_R_BUF_SIZE) >> BP_FEC_EMRBR_R_BUF_SIZE)

//! @brief Format value for bitfield FEC_EMRBR_R_BUF_SIZE.
#define BF_FEC_EMRBR_R_BUF_SIZE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_FEC_EMRBR_R_BUF_SIZE) & BM_FEC_EMRBR_R_BUF_SIZE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the R_BUF_SIZE field to a new value.
#define BW_FEC_EMRBR_R_BUF_SIZE(v)   (HW_FEC_EMRBR_WR((HW_FEC_EMRBR_RD() & ~BM_FEC_EMRBR_R_BUF_SIZE) | BF_FEC_EMRBR_R_BUF_SIZE(v)))
#endif


/*!
 * @brief All FEC module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_fec
{
    reg32_t _reserved0;
    volatile hw_fec_eir_t EIR; //!< Ethernet interrupt event register
    volatile hw_fec_eimr_t EIMR; //!< Ethernet interrupt mask register
    reg32_t _reserved1;
    volatile hw_fec_rdar_t RDAR; //!< Receive descriptor active register
    volatile hw_fec_tdar_t TDAR; //!< Transmit descriptor active register
    reg32_t _reserved2[3];
    volatile hw_fec_ecr_t ECR; //!< Ethernet control register
    reg32_t _reserved3[6];
    volatile hw_fec_mmfr_t MMFR; //!< MII management frame register
    volatile hw_fec_mscr_t MSCR; //!< MII speed control register
    reg32_t _reserved4[7];
    volatile hw_fec_mibc_t MIBC; //!< MIB control register
    reg32_t _reserved5[7];
    volatile hw_fec_rcr_t RCR; //!< Receive control register
    reg32_t _reserved6[15];
    volatile hw_fec_tcr_t TCR; //!< Transmit control register
    reg32_t _reserved7[7];
    volatile hw_fec_palr_t PALR; //!< Physical address low register
    volatile hw_fec_paur_t PAUR; //!< Physical address upper register
    volatile hw_fec_opdr_t OPDR; //!< Opcode and pause duration register
    reg32_t _reserved8[10];
    volatile hw_fec_iaur_t IAUR; //!< Descriptor individual address upper register
    volatile hw_fec_ialr_t IALR; //!< Descriptor individual address lower register
    volatile hw_fec_gaur_t GAUR; //!< Descriptor group address upper register
    volatile hw_fec_galr_t GALR; //!< Descriptor group address lower register
    reg32_t _reserved9[7];
    volatile hw_fec_tfwr_t TFWR; //!< Transmit FIFO watermark register
    reg32_t _reserved10;
    volatile hw_fec_frbr_t FRBR; //!< FIFO receive bound register
    volatile hw_fec_frsr_t FRSR; //!< FIFO receive FIFO start registers
    reg32_t _reserved11[11];
    volatile hw_fec_erdsr_t ERDSR; //!< Receive buffer descriptor ring start register
    volatile hw_fec_etdsr_t ETDSR; //!< Transmit buffer descriptor ring start register
    volatile hw_fec_emrbr_t EMRBR; //!< Maximum receive buffer size register
} hw_fec_t;
#pragma pack()

//! @brief Macro to access all FEC registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_FEC(0)</code>.
#define HW_FEC     (*(volatile hw_fec_t *) REGS_FEC_BASE)

#endif


#endif // __HW_FEC_REGISTERS_H__
