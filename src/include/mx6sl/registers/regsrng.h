/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef __HW_RNG_REGISTERS_H__
#define __HW_RNG_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SL RNG registers defined in this header file.
 *
 * - HW_RNG_VER - RNGB Version ID Register
 * - HW_RNG_CMD - RNGB Command Register
 * - HW_RNG_CR - RNGB Control Register
 * - HW_RNG_SR - RNGB Status Register
 * - HW_RNG_ESR - RNGB Error Status Register
 * - HW_RNG_OUT - RNGB Output FIFO
 *
 * - hw_rng_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_RNG_BASE
#define HW_RNG_INSTANCE_COUNT (1) //!< Number of instances of the RNG module.
#define REGS_RNG_BASE (0x021b4000) //!< Base address for RNG.
#endif
//@}


//-------------------------------------------------------------------------------------------
// HW_RNG_VER - RNGB Version ID Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_RNG_VER - RNGB Version ID Register (RO)
 *
 * Reset value: 0x10000280
 *
 * The read-only RNG_VER register contains the current version of the RNGB. It consists of the RNG
 * type and major and minor revision numbers.
 */
typedef union _hw_rng_ver
{
    reg32_t U;
    struct _hw_rng_ver_bitfields
    {
        unsigned MINOR : 8; //!< [7:0] Subjiect to change.
        unsigned MAJOR : 8; //!< [15:8] This field is always set to 0x02.
        unsigned RESERVED0 : 12; //!< [27:16] Reserved, must be cleared.
        unsigned TYPE : 4; //!< [31:28] 
    } B;
} hw_rng_ver_t;
#endif

/*
 * constants & macros for entire RNG_VER register
 */
#define HW_RNG_VER_ADDR      (REGS_RNG_BASE + 0x0)

#ifndef __LANGUAGE_ASM__
#define HW_RNG_VER           (*(volatile hw_rng_ver_t *) HW_RNG_VER_ADDR)
#define HW_RNG_VER_RD()      (HW_RNG_VER.U)
#endif

/*
 * constants & macros for individual RNG_VER bitfields
 */

/* --- Register HW_RNG_VER, field MINOR[7:0] (RO)
 *
 * Subjiect to change.
 */

#define BP_RNG_VER_MINOR      (0)      //!< Bit position for RNG_VER_MINOR.
#define BM_RNG_VER_MINOR      (0x000000ff)  //!< Bit mask for RNG_VER_MINOR.

//! @brief Get value of RNG_VER_MINOR from a register value.
#define BG_RNG_VER_MINOR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_VER_MINOR) >> BP_RNG_VER_MINOR)

/* --- Register HW_RNG_VER, field MAJOR[15:8] (RO)
 *
 * This field is always set to 0x02.
 */

#define BP_RNG_VER_MAJOR      (8)      //!< Bit position for RNG_VER_MAJOR.
#define BM_RNG_VER_MAJOR      (0x0000ff00)  //!< Bit mask for RNG_VER_MAJOR.

//! @brief Get value of RNG_VER_MAJOR from a register value.
#define BG_RNG_VER_MAJOR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_VER_MAJOR) >> BP_RNG_VER_MAJOR)

/* --- Register HW_RNG_VER, field TYPE[31:28] (RO)
 *

 *
 * Values:
 * 0000 - RNGA
 * 0001 - RNGB (This is the type used in this module)
 * 0010 - RNGC
 * Else - Reserved
 */

#define BP_RNG_VER_TYPE      (28)      //!< Bit position for RNG_VER_TYPE.
#define BM_RNG_VER_TYPE      (0xf0000000)  //!< Bit mask for RNG_VER_TYPE.

//! @brief Get value of RNG_VER_TYPE from a register value.
#define BG_RNG_VER_TYPE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_VER_TYPE) >> BP_RNG_VER_TYPE)


//-------------------------------------------------------------------------------------------
// HW_RNG_CMD - RNGB Command Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_RNG_CMD - RNGB Command Register (RW)
 *
 * Reset value: 0x00000000
 *
 * RNG_CMD controls the RNG's operating modes and interrupt status.
 */
typedef union _hw_rng_cmd
{
    reg32_t U;
    struct _hw_rng_cmd_bitfields
    {
        unsigned ST : 1; //!< [0] Initiates a self test of the RNGB's internal logic.
        unsigned GS : 1; //!< [1] Initiates the seed generation process.
        unsigned RESERVED0 : 2; //!< [3:2] Reserved, must be cleared.
        unsigned CI : 1; //!< [4] Clears the RNGB interrupt if an error is not present.
        unsigned CE : 1; //!< [5] Clears the errors in the RNG_ESR register and the RNGB interrupt.This bit is self-clearing.
        unsigned SR : 1; //!< [6] Performs a software reset of the RNGB.
        unsigned RESERVED1 : 25; //!< [31:7] Reserved, must be cleared.
    } B;
} hw_rng_cmd_t;
#endif

/*
 * constants & macros for entire RNG_CMD register
 */
#define HW_RNG_CMD_ADDR      (REGS_RNG_BASE + 0x4)

#ifndef __LANGUAGE_ASM__
#define HW_RNG_CMD           (*(volatile hw_rng_cmd_t *) HW_RNG_CMD_ADDR)
#define HW_RNG_CMD_RD()      (HW_RNG_CMD.U)
#define HW_RNG_CMD_WR(v)     (HW_RNG_CMD.U = (v))
#define HW_RNG_CMD_SET(v)    (HW_RNG_CMD_WR(HW_RNG_CMD_RD() |  (v)))
#define HW_RNG_CMD_CLR(v)    (HW_RNG_CMD_WR(HW_RNG_CMD_RD() & ~(v)))
#define HW_RNG_CMD_TOG(v)    (HW_RNG_CMD_WR(HW_RNG_CMD_RD() ^  (v)))
#endif

/*
 * constants & macros for individual RNG_CMD bitfields
 */

/* --- Register HW_RNG_CMD, field ST[0] (RW)
 *
 * Initiates a self test of the RNGB's internal logic. The self-test starts When RNG_SR[BUSY] is
 * cleared, or If set simultaneously with GS, self test takes precedence and is completed first.
 * When self test completes, this bit automatically clears and an interrupt may be generated if all
 * requested operations are complete.
 *
 * Values:
 * 0 - Not in self test mode.
 * 1 - Self test mode.
 */

#define BP_RNG_CMD_ST      (0)      //!< Bit position for RNG_CMD_ST.
#define BM_RNG_CMD_ST      (0x00000001)  //!< Bit mask for RNG_CMD_ST.

//! @brief Get value of RNG_CMD_ST from a register value.
#define BG_RNG_CMD_ST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_CMD_ST) >> BP_RNG_CMD_ST)

//! @brief Format value for bitfield RNG_CMD_ST.
#define BF_RNG_CMD_ST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_RNG_CMD_ST) & BM_RNG_CMD_ST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ST field to a new value.
#define BW_RNG_CMD_ST(v)   (HW_RNG_CMD_WR((HW_RNG_CMD_RD() & ~BM_RNG_CMD_ST) | BF_RNG_CMD_ST(v)))
#endif


/* --- Register HW_RNG_CMD, field GS[1] (RW)
 *
 * Initiates the seed generation process. Seed generation starts When RNG_SR[BUSY] is cleared If set
 * simultaneously with ST, after self-test When the seed generation process completes, this bit
 * automatically clears and an interrupt may be generated if all requested operations are complete.
 *
 * Values:
 * 0 - Not in seed generation mode.
 * 1 - Generate seed mode.
 */

#define BP_RNG_CMD_GS      (1)      //!< Bit position for RNG_CMD_GS.
#define BM_RNG_CMD_GS      (0x00000002)  //!< Bit mask for RNG_CMD_GS.

//! @brief Get value of RNG_CMD_GS from a register value.
#define BG_RNG_CMD_GS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_CMD_GS) >> BP_RNG_CMD_GS)

//! @brief Format value for bitfield RNG_CMD_GS.
#define BF_RNG_CMD_GS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_RNG_CMD_GS) & BM_RNG_CMD_GS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GS field to a new value.
#define BW_RNG_CMD_GS(v)   (HW_RNG_CMD_WR((HW_RNG_CMD_RD() & ~BM_RNG_CMD_GS) | BF_RNG_CMD_GS(v)))
#endif


/* --- Register HW_RNG_CMD, field CI[4] (WORZ)
 *
 * Clears the RNGB interrupt if an error is not present. This bit is self-clearing.
 *
 * Values:
 * 0 - Do not clear interrupt.
 * 1 - Clear interrupt.
 */

#define BP_RNG_CMD_CI      (4)      //!< Bit position for RNG_CMD_CI.
#define BM_RNG_CMD_CI      (0x00000010)  //!< Bit mask for RNG_CMD_CI.

//! @brief Get value of RNG_CMD_CI from a register value.
#define BG_RNG_CMD_CI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_CMD_CI) >> BP_RNG_CMD_CI)

//! @brief Format value for bitfield RNG_CMD_CI.
#define BF_RNG_CMD_CI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_RNG_CMD_CI) & BM_RNG_CMD_CI)


/* --- Register HW_RNG_CMD, field CE[5] (WORZ)
 *
 * Clears the errors in the RNG_ESR register and the RNGB interrupt.This bit is self-clearing.
 *
 * Values:
 * 0 - Do not clear errors and interrupt.
 * 1 - Clear errors and interrupt.
 */

#define BP_RNG_CMD_CE      (5)      //!< Bit position for RNG_CMD_CE.
#define BM_RNG_CMD_CE      (0x00000020)  //!< Bit mask for RNG_CMD_CE.

//! @brief Get value of RNG_CMD_CE from a register value.
#define BG_RNG_CMD_CE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_CMD_CE) >> BP_RNG_CMD_CE)

//! @brief Format value for bitfield RNG_CMD_CE.
#define BF_RNG_CMD_CE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_RNG_CMD_CE) & BM_RNG_CMD_CE)


/* --- Register HW_RNG_CMD, field SR[6] (WORZ)
 *
 * Performs a software reset of the RNGB. This bit is self-clearing.
 *
 * Values:
 * 0 - Do not perform a software reset.
 * 1 - Software reset.
 */

#define BP_RNG_CMD_SR      (6)      //!< Bit position for RNG_CMD_SR.
#define BM_RNG_CMD_SR      (0x00000040)  //!< Bit mask for RNG_CMD_SR.

//! @brief Get value of RNG_CMD_SR from a register value.
#define BG_RNG_CMD_SR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_CMD_SR) >> BP_RNG_CMD_SR)

//! @brief Format value for bitfield RNG_CMD_SR.
#define BF_RNG_CMD_SR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_RNG_CMD_SR) & BM_RNG_CMD_SR)


//-------------------------------------------------------------------------------------------
// HW_RNG_CR - RNGB Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_RNG_CR - RNGB Control Register (RW)
 *
 * Reset value: 0x00000000
 *
 * Through use of this register, the RNGB can be programmed to provide slightly different
 * functionality based on its desired use.
 */
typedef union _hw_rng_cr
{
    reg32_t U;
    struct _hw_rng_cr_bitfields
    {
        unsigned FUFMOD : 2; //!< [1:0] Controls the RNGB's response to a FIFO underflow condition.
        unsigned RESERVED0 : 2; //!< [3:2] Reserved, must be cleared.
        unsigned AR : 1; //!< [4] Setting this bit allows the RNGB to automatically generate a new seed whenever one is needed.
        unsigned MASKDONE : 1; //!< [5] Masks interrupts generated upon completion of seed and self test modes.
        unsigned MASKERR : 1; //!< [6] Masks interrupts generated by errors in the RNGB.
        unsigned RESERVED1 : 25; //!< [31:7] Reserved.
    } B;
} hw_rng_cr_t;
#endif

/*
 * constants & macros for entire RNG_CR register
 */
#define HW_RNG_CR_ADDR      (REGS_RNG_BASE + 0x8)

#ifndef __LANGUAGE_ASM__
#define HW_RNG_CR           (*(volatile hw_rng_cr_t *) HW_RNG_CR_ADDR)
#define HW_RNG_CR_RD()      (HW_RNG_CR.U)
#define HW_RNG_CR_WR(v)     (HW_RNG_CR.U = (v))
#define HW_RNG_CR_SET(v)    (HW_RNG_CR_WR(HW_RNG_CR_RD() |  (v)))
#define HW_RNG_CR_CLR(v)    (HW_RNG_CR_WR(HW_RNG_CR_RD() & ~(v)))
#define HW_RNG_CR_TOG(v)    (HW_RNG_CR_WR(HW_RNG_CR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual RNG_CR bitfields
 */

/* --- Register HW_RNG_CR, field FUFMOD[1:0] (RW)
 *
 * Controls the RNGB's response to a FIFO underflow condition.
 *
 * Values:
 * 00 - Return all zeros and set RNG_ESR[FUFE]
 * 01 - Return all zeros and set RNG_ESR[FUFE]
 * 10 - Generate bus transfer error
 * 11 - Generate interrupt and return all zeros (Overrides RNG_CR[MASKERR])
 */

#define BP_RNG_CR_FUFMOD      (0)      //!< Bit position for RNG_CR_FUFMOD.
#define BM_RNG_CR_FUFMOD      (0x00000003)  //!< Bit mask for RNG_CR_FUFMOD.

//! @brief Get value of RNG_CR_FUFMOD from a register value.
#define BG_RNG_CR_FUFMOD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_CR_FUFMOD) >> BP_RNG_CR_FUFMOD)

//! @brief Format value for bitfield RNG_CR_FUFMOD.
#define BF_RNG_CR_FUFMOD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_RNG_CR_FUFMOD) & BM_RNG_CR_FUFMOD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FUFMOD field to a new value.
#define BW_RNG_CR_FUFMOD(v)   (HW_RNG_CR_WR((HW_RNG_CR_RD() & ~BM_RNG_CR_FUFMOD) | BF_RNG_CR_FUFMOD(v)))
#endif


/* --- Register HW_RNG_CR, field AR[4] (RW)
 *
 * Setting this bit allows the RNGB to automatically generate a new seed whenever one is needed.
 * This allows software to never use the RNG_CMD[GS], although it is still possible. A new seed is
 * needed whenever the RNG_SR[RS] is set.
 *
 * Values:
 * 0 - Do not enable automatic reseeding.
 * 1 - Enable automatic reseeding.
 */

#define BP_RNG_CR_AR      (4)      //!< Bit position for RNG_CR_AR.
#define BM_RNG_CR_AR      (0x00000010)  //!< Bit mask for RNG_CR_AR.

//! @brief Get value of RNG_CR_AR from a register value.
#define BG_RNG_CR_AR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_CR_AR) >> BP_RNG_CR_AR)

//! @brief Format value for bitfield RNG_CR_AR.
#define BF_RNG_CR_AR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_RNG_CR_AR) & BM_RNG_CR_AR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AR field to a new value.
#define BW_RNG_CR_AR(v)   (HW_RNG_CR_WR((HW_RNG_CR_RD() & ~BM_RNG_CR_AR) | BF_RNG_CR_AR(v)))
#endif


/* --- Register HW_RNG_CR, field MASKDONE[5] (RW)
 *
 * Masks interrupts generated upon completion of seed and self test modes. The status of these jobs
 * can be viewed by: Reading RNG_SR and viewing the seed done and self test done bits (RNG_SR[SDN,
 * STDN]) Viewing RNG_CMD for generate seed or self test bits (RNG_CMD[GS,ST]) being set, indicating
 * that the operation is still taking place.
 *
 * Values:
 * 0 - No mask applied.
 * 1 - Mask applied.
 */

#define BP_RNG_CR_MASKDONE      (5)      //!< Bit position for RNG_CR_MASKDONE.
#define BM_RNG_CR_MASKDONE      (0x00000020)  //!< Bit mask for RNG_CR_MASKDONE.

//! @brief Get value of RNG_CR_MASKDONE from a register value.
#define BG_RNG_CR_MASKDONE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_CR_MASKDONE) >> BP_RNG_CR_MASKDONE)

//! @brief Format value for bitfield RNG_CR_MASKDONE.
#define BF_RNG_CR_MASKDONE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_RNG_CR_MASKDONE) & BM_RNG_CR_MASKDONE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MASKDONE field to a new value.
#define BW_RNG_CR_MASKDONE(v)   (HW_RNG_CR_WR((HW_RNG_CR_RD() & ~BM_RNG_CR_MASKDONE) | BF_RNG_CR_MASKDONE(v)))
#endif


/* --- Register HW_RNG_CR, field MASKERR[6] (RW)
 *
 * Masks interrupts generated by errors in the RNGB. These errors can still be viewed in RNG_ESR.
 * Since masked errors do not interrupt the operation of the RNGB and thus hide potentially fatal
 * errors or conditions that could result in corrupted results, it is strongly recommended that
 * errors only be masked while debugging. All errors are considered fatal, requiring the RNGB to be
 * reset. Until the a reset occurs, the RNGB does not service any random data.
 *
 * Values:
 * 0 - No mask applied.
 * 1 - Mask applied to the error interrupt.
 */

#define BP_RNG_CR_MASKERR      (6)      //!< Bit position for RNG_CR_MASKERR.
#define BM_RNG_CR_MASKERR      (0x00000040)  //!< Bit mask for RNG_CR_MASKERR.

//! @brief Get value of RNG_CR_MASKERR from a register value.
#define BG_RNG_CR_MASKERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_CR_MASKERR) >> BP_RNG_CR_MASKERR)

//! @brief Format value for bitfield RNG_CR_MASKERR.
#define BF_RNG_CR_MASKERR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_RNG_CR_MASKERR) & BM_RNG_CR_MASKERR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the MASKERR field to a new value.
#define BW_RNG_CR_MASKERR(v)   (HW_RNG_CR_WR((HW_RNG_CR_RD() & ~BM_RNG_CR_MASKERR) | BF_RNG_CR_MASKERR(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_RNG_SR - RNGB Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_RNG_SR - RNGB Status Register (RO)
 *
 * Reset value: 0x0000500d
 *
 * The RNGBSR is a read-only register which reflects the internal status of the RNGB.
 */
typedef union _hw_rng_sr
{
    reg32_t U;
    struct _hw_rng_sr_bitfields
    {
        unsigned RESERVED0 : 1; //!< [0] Reserved, must be set.
        unsigned BUSY : 1; //!< [1] Reflects the current state of RNGB.
        unsigned SLP : 1; //!< [2] Indicates if the RNGB is in sleep mode.
        unsigned RS : 1; //!< [3] Indicates the RNGB needs to be reseeded.
        unsigned STDN : 1; //!< [4] Indicates the self test is complete.
        unsigned SDN : 1; //!< [5] Indicates the RNG has generated the first seed.
        unsigned NSDN : 1; //!< [6] Indicates that a new seed is ready for use during the next seed generation process.
        unsigned RESERVED1 : 1; //!< [7] 
        unsigned FIFO_LVL : 4; //!< [11:8] Indicates the number of random words currently in the output FIFO.
        unsigned FIFO_SIZE : 4; //!< [15:12] Size of the FIFO, and maximum possible FIFO level.
        unsigned ERR : 1; //!< [16] Indicates an error was detected in the RNGB.
        unsigned RESERVED2 : 4; //!< [20:17] 
        unsigned ST_PF : 3; //!< [23:21] Indicates Pass or Fail status of the TRNG, PRNG, and RESEED self tests, Bit 23 - TRNG self test pass/fail Bit 22 - PRNG self test pass/fail Bit 21 - RESEED self test pass/fail
        unsigned STATPF : 8; //!< [31:24] Indicates pass or fail status of the various statistics tests on the last seed generated.
    } B;
} hw_rng_sr_t;
#endif

/*
 * constants & macros for entire RNG_SR register
 */
#define HW_RNG_SR_ADDR      (REGS_RNG_BASE + 0xc)

#ifndef __LANGUAGE_ASM__
#define HW_RNG_SR           (*(volatile hw_rng_sr_t *) HW_RNG_SR_ADDR)
#define HW_RNG_SR_RD()      (HW_RNG_SR.U)
#endif

/*
 * constants & macros for individual RNG_SR bitfields
 */

/* --- Register HW_RNG_SR, field BUSY[1] (RO)
 *
 * Reflects the current state of RNGB. If RNGB is currently seeding, generating the next seed,
 * creating a new random number, or performing a self test, this bit is set.
 *
 * Values:
 * 0 - Not busy.
 * 1 - Busy.
 */

#define BP_RNG_SR_BUSY      (1)      //!< Bit position for RNG_SR_BUSY.
#define BM_RNG_SR_BUSY      (0x00000002)  //!< Bit mask for RNG_SR_BUSY.

//! @brief Get value of RNG_SR_BUSY from a register value.
#define BG_RNG_SR_BUSY(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_SR_BUSY) >> BP_RNG_SR_BUSY)


/* --- Register HW_RNG_SR, field SLP[2] (RO)
 *
 * Indicates if the RNGB is in sleep mode. When set, the RNGB is in sleep mode and all internal
 * clocks are disabled. While in this mode, access to the FIFO is allowed. Once the FIFO is empty,
 * the RNGB fills the FIFO and then enters sleep mode again.
 *
 * Values:
 * 0 - RNGB is not in sleep mode.
 * 1 - RNGB is in sleep mode.
 */

#define BP_RNG_SR_SLP      (2)      //!< Bit position for RNG_SR_SLP.
#define BM_RNG_SR_SLP      (0x00000004)  //!< Bit mask for RNG_SR_SLP.

//! @brief Get value of RNG_SR_SLP from a register value.
#define BG_RNG_SR_SLP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_SR_SLP) >> BP_RNG_SR_SLP)


/* --- Register HW_RNG_SR, field RS[3] (RO)
 *
 * Indicates the RNGB needs to be reseeded. This is done by setting RNG_CMD[GS], or automatically if
 * RNG_CR[AR] is set.
 *
 * Values:
 * 0 - RNGB does not need to be reseeded.
 * 1 - RNGB needs to be reseeded.
 */

#define BP_RNG_SR_RS      (3)      //!< Bit position for RNG_SR_RS.
#define BM_RNG_SR_RS      (0x00000008)  //!< Bit mask for RNG_SR_RS.

//! @brief Get value of RNG_SR_RS from a register value.
#define BG_RNG_SR_RS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_SR_RS) >> BP_RNG_SR_RS)


/* --- Register HW_RNG_SR, field STDN[4] (RO)
 *
 * Indicates the self test is complete. This bit is cleared by hardware reset or a new self test is
 * initiated by setting RNG_CMD[ST].
 *
 * Values:
 * 0 - Self test not complete.
 * 1 - Completed a self test since the last reset.
 */

#define BP_RNG_SR_STDN      (4)      //!< Bit position for RNG_SR_STDN.
#define BM_RNG_SR_STDN      (0x00000010)  //!< Bit mask for RNG_SR_STDN.

//! @brief Get value of RNG_SR_STDN from a register value.
#define BG_RNG_SR_STDN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_SR_STDN) >> BP_RNG_SR_STDN)


/* --- Register HW_RNG_SR, field SDN[5] (RO)
 *
 * Indicates the RNG has generated the first seed.
 *
 * Values:
 * 0 - Seed generation process not complete.
 * 1 - Completed seed generation since the last reset.
 */

#define BP_RNG_SR_SDN      (5)      //!< Bit position for RNG_SR_SDN.
#define BM_RNG_SR_SDN      (0x00000020)  //!< Bit mask for RNG_SR_SDN.

//! @brief Get value of RNG_SR_SDN from a register value.
#define BG_RNG_SR_SDN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_SR_SDN) >> BP_RNG_SR_SDN)


/* --- Register HW_RNG_SR, field NSDN[6] (RO)
 *
 * Indicates that a new seed is ready for use during the next seed generation process.
 */

#define BP_RNG_SR_NSDN      (6)      //!< Bit position for RNG_SR_NSDN.
#define BM_RNG_SR_NSDN      (0x00000040)  //!< Bit mask for RNG_SR_NSDN.

//! @brief Get value of RNG_SR_NSDN from a register value.
#define BG_RNG_SR_NSDN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_SR_NSDN) >> BP_RNG_SR_NSDN)

/* --- Register HW_RNG_SR, field FIFO_LVL[11:8] (RO)
 *
 * Indicates the number of random words currently in the output FIFO. The bits should be interpreted
 * as an integer.
 */

#define BP_RNG_SR_FIFO_LVL      (8)      //!< Bit position for RNG_SR_FIFO_LVL.
#define BM_RNG_SR_FIFO_LVL      (0x00000f00)  //!< Bit mask for RNG_SR_FIFO_LVL.

//! @brief Get value of RNG_SR_FIFO_LVL from a register value.
#define BG_RNG_SR_FIFO_LVL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_SR_FIFO_LVL) >> BP_RNG_SR_FIFO_LVL)

/* --- Register HW_RNG_SR, field FIFO_SIZE[15:12] (RO)
 *
 * Size of the FIFO, and maximum possible FIFO level. The bits should be interpreted as an integer.
 * This value is set to five on the default version of RNGB .
 */

#define BP_RNG_SR_FIFO_SIZE      (12)      //!< Bit position for RNG_SR_FIFO_SIZE.
#define BM_RNG_SR_FIFO_SIZE      (0x0000f000)  //!< Bit mask for RNG_SR_FIFO_SIZE.

//! @brief Get value of RNG_SR_FIFO_SIZE from a register value.
#define BG_RNG_SR_FIFO_SIZE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_SR_FIFO_SIZE) >> BP_RNG_SR_FIFO_SIZE)

/* --- Register HW_RNG_SR, field ERR[16] (RO)
 *
 * Indicates an error was detected in the RNGB. Read the RNG_ESR register for details.
 *
 * Values:
 * 0 - No error.
 * 1 - Error detected.
 */

#define BP_RNG_SR_ERR      (16)      //!< Bit position for RNG_SR_ERR.
#define BM_RNG_SR_ERR      (0x00010000)  //!< Bit mask for RNG_SR_ERR.

//! @brief Get value of RNG_SR_ERR from a register value.
#define BG_RNG_SR_ERR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_SR_ERR) >> BP_RNG_SR_ERR)


/* --- Register HW_RNG_SR, field ST_PF[23:21] (RO)
 *
 * Indicates Pass or Fail status of the TRNG, PRNG, and RESEED self tests, Bit 23 - TRNG self test
 * pass/fail Bit 22 - PRNG self test pass/fail Bit 21 - RESEED self test pass/fail
 *
 * Values:
 * 0 - Pass.
 * 1 - Fail.
 */

#define BP_RNG_SR_ST_PF      (21)      //!< Bit position for RNG_SR_ST_PF.
#define BM_RNG_SR_ST_PF      (0x00e00000)  //!< Bit mask for RNG_SR_ST_PF.

//! @brief Get value of RNG_SR_ST_PF from a register value.
#define BG_RNG_SR_ST_PF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_SR_ST_PF) >> BP_RNG_SR_ST_PF)


/* --- Register HW_RNG_SR, field STATPF[31:24] (RO)
 *
 * Indicates pass or fail status of the various statistics tests on the last seed generated. Bit 31
 * - Long run test (>34) Bit 30 - Length 6+ run test Bit 29 - Length 5 run test Bit 28 - Length 4
 * run test Bit 27 - Length 3 run test Bit 26 - Length 2 run test Bit 25 - Length 1 run test Bit 24
 * - Monobit test
 *
 * Values:
 * 0 - Pass.
 * 1 - Fail.
 */

#define BP_RNG_SR_STATPF      (24)      //!< Bit position for RNG_SR_STATPF.
#define BM_RNG_SR_STATPF      (0xff000000)  //!< Bit mask for RNG_SR_STATPF.

//! @brief Get value of RNG_SR_STATPF from a register value.
#define BG_RNG_SR_STATPF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_SR_STATPF) >> BP_RNG_SR_STATPF)


//-------------------------------------------------------------------------------------------
// HW_RNG_ESR - RNGB Error Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_RNG_ESR - RNGB Error Status Register (RO)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_rng_esr
{
    reg32_t U;
    struct _hw_rng_esr_bitfields
    {
        unsigned LFE : 1; //!< [0] When this bit is set, the interrupt generated was caused by a failure of one of the LFSRs in one of the RNGB's three entropy sources.
        unsigned OSCE : 1; //!< [1] Indicates the oscillator in the RNG may be broken.
        unsigned STE : 1; //!< [2] Indicates the RNGB has failed the most recent self test.
        unsigned SATE : 1; //!< [3] Indicates if RNGB has failed the statistical tests for the last generated seed.
        unsigned FUFE : 1; //!< [4] Indicates the RNGB has experienced a FIFO underflow condition resulting in the last random data read being unreliable.
        unsigned RESERVED0 : 27; //!< [31:5] Reserved, must be cleared.
    } B;
} hw_rng_esr_t;
#endif

/*
 * constants & macros for entire RNG_ESR register
 */
#define HW_RNG_ESR_ADDR      (REGS_RNG_BASE + 0x10)

#ifndef __LANGUAGE_ASM__
#define HW_RNG_ESR           (*(volatile hw_rng_esr_t *) HW_RNG_ESR_ADDR)
#define HW_RNG_ESR_RD()      (HW_RNG_ESR.U)
#endif

/*
 * constants & macros for individual RNG_ESR bitfields
 */

/* --- Register HW_RNG_ESR, field LFE[0] (RO)
 *
 * When this bit is set, the interrupt generated was caused by a failure of one of the LFSRs in one
 * of the RNGB's three entropy sources. This bit is sticky and can only be cleared by a software or
 * hardware reset.
 *
 * Values:
 * 0 - LFSRs are working properly.
 * 1 - LFSR failure has occurred.
 */

#define BP_RNG_ESR_LFE      (0)      //!< Bit position for RNG_ESR_LFE.
#define BM_RNG_ESR_LFE      (0x00000001)  //!< Bit mask for RNG_ESR_LFE.

//! @brief Get value of RNG_ESR_LFE from a register value.
#define BG_RNG_ESR_LFE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_ESR_LFE) >> BP_RNG_ESR_LFE)


/* --- Register HW_RNG_ESR, field OSCE[1] (RO)
 *
 * Indicates the oscillator in the RNG may be broken. This bit is sticky and can only be cleared by
 * a software or hardware reset.
 *
 * Values:
 * 0 - RNG oscillator is working properly.
 * 1 - Problem detected with the RNG oscillator.
 */

#define BP_RNG_ESR_OSCE      (1)      //!< Bit position for RNG_ESR_OSCE.
#define BM_RNG_ESR_OSCE      (0x00000002)  //!< Bit mask for RNG_ESR_OSCE.

//! @brief Get value of RNG_ESR_OSCE from a register value.
#define BG_RNG_ESR_OSCE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_ESR_OSCE) >> BP_RNG_ESR_OSCE)


/* --- Register HW_RNG_ESR, field STE[2] (RO)
 *
 * Indicates the RNGB has failed the most recent self test. This bit is sticky and can only be reset
 * by a hardware reset or by writing one to RNG_CMD[CE].
 *
 * Values:
 * 0 - RNGB has not failed self test.
 * 1 - RNGB has failed self test.
 */

#define BP_RNG_ESR_STE      (2)      //!< Bit position for RNG_ESR_STE.
#define BM_RNG_ESR_STE      (0x00000004)  //!< Bit mask for RNG_ESR_STE.

//! @brief Get value of RNG_ESR_STE from a register value.
#define BG_RNG_ESR_STE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_ESR_STE) >> BP_RNG_ESR_STE)


/* --- Register HW_RNG_ESR, field SATE[3] (RO)
 *
 * Indicates if RNGB has failed the statistical tests for the last generated seed. This bit is
 * sticky and is cleared by a hardware or software reset or by writing one to RNG_CMD[CE].
 *
 * Values:
 * 0 - RNGB has not failed the statistical tests.
 * 1 - RNGB has failed the statistical tests during initialization.
 */

#define BP_RNG_ESR_SATE      (3)      //!< Bit position for RNG_ESR_SATE.
#define BM_RNG_ESR_SATE      (0x00000008)  //!< Bit mask for RNG_ESR_SATE.

//! @brief Get value of RNG_ESR_SATE from a register value.
#define BG_RNG_ESR_SATE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_ESR_SATE) >> BP_RNG_ESR_SATE)


/* --- Register HW_RNG_ESR, field FUFE[4] (RO)
 *
 * Indicates the RNGB has experienced a FIFO underflow condition resulting in the last random data
 * read being unreliable. This bit can be masked by RNG_CR[FUFMOD] and is cleared by hardware or
 * software reset or by writing one to RNG_CMD[CE].
 *
 * Values:
 * 0 - FIFO underflow has not occurred.
 * 1 - FIFO underflow has occurred
 */

#define BP_RNG_ESR_FUFE      (4)      //!< Bit position for RNG_ESR_FUFE.
#define BM_RNG_ESR_FUFE      (0x00000010)  //!< Bit mask for RNG_ESR_FUFE.

//! @brief Get value of RNG_ESR_FUFE from a register value.
#define BG_RNG_ESR_FUFE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_ESR_FUFE) >> BP_RNG_ESR_FUFE)


//-------------------------------------------------------------------------------------------
// HW_RNG_OUT - RNGB Output FIFO
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_RNG_OUT - RNGB Output FIFO (RO)
 *
 * Reset value: 0x00000000
 *
 * The RNGBOUT provides temporary storage for random data generated by the RNGB. This allows the
 * user to read multiple random longwords back-to-back. A read of this address when the FIFO is not
 * empty, returns 32 bits of random data. If the FIFO is read when empty, a FIFO underrun response
 * is returned according to RNG_CR[FUFMOD]. For optimal system performance, poll RNG_SR[FIFO_LVL] to
 * ensure random values are present before reading the FIFO.
 */
typedef union _hw_rng_out
{
    reg32_t U;
    struct _hw_rng_out_bitfields
    {
        unsigned RANDOUT : 32; //!< [31:0] 
    } B;
} hw_rng_out_t;
#endif

/*
 * constants & macros for entire RNG_OUT register
 */
#define HW_RNG_OUT_ADDR      (REGS_RNG_BASE + 0x14)

#ifndef __LANGUAGE_ASM__
#define HW_RNG_OUT           (*(volatile hw_rng_out_t *) HW_RNG_OUT_ADDR)
#define HW_RNG_OUT_RD()      (HW_RNG_OUT.U)
#endif

/*
 * constants & macros for individual RNG_OUT bitfields
 */

/* --- Register HW_RNG_OUT, field RANDOUT[31:0] (RO)
 *

 */

#define BP_RNG_OUT_RANDOUT      (0)      //!< Bit position for RNG_OUT_RANDOUT.
#define BM_RNG_OUT_RANDOUT      (0xffffffff)  //!< Bit mask for RNG_OUT_RANDOUT.

//! @brief Get value of RNG_OUT_RANDOUT from a register value.
#define BG_RNG_OUT_RANDOUT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_RNG_OUT_RANDOUT) >> BP_RNG_OUT_RANDOUT)


/*!
 * @brief All RNG module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_rng
{
    volatile hw_rng_ver_t VER; //!< RNGB Version ID Register
    volatile hw_rng_cmd_t CMD; //!< RNGB Command Register
    volatile hw_rng_cr_t CR; //!< RNGB Control Register
    volatile hw_rng_sr_t SR; //!< RNGB Status Register
    volatile hw_rng_esr_t ESR; //!< RNGB Error Status Register
    volatile hw_rng_out_t OUT; //!< RNGB Output FIFO
} hw_rng_t;
#pragma pack()

//! @brief Macro to access all RNG registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_RNG(0)</code>.
#define HW_RNG     (*(volatile hw_rng_t *) REGS_RNG_BASE)

#endif


#endif // __HW_RNG_REGISTERS_H__
