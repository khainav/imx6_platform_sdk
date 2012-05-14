/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef __HW_SPBA_REGISTERS_H__
#define __HW_SPBA_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SDL SPBA registers defined in this header file.
 *
 * - HW_SPBA_PRR0 - Peripheral Rights Register
 * - HW_SPBA_PRR1 - Peripheral Rights Register
 * - HW_SPBA_PRR2 - Peripheral Rights Register
 * - HW_SPBA_PRR3 - Peripheral Rights Register
 * - HW_SPBA_PRR4 - Peripheral Rights Register
 * - HW_SPBA_PRR5 - Peripheral Rights Register
 * - HW_SPBA_PRR6 - Peripheral Rights Register
 * - HW_SPBA_PRR7 - Peripheral Rights Register
 * - HW_SPBA_PRR8 - Peripheral Rights Register
 * - HW_SPBA_PRR9 - Peripheral Rights Register
 * - HW_SPBA_PRR10 - Peripheral Rights Register
 * - HW_SPBA_PRR11 - Peripheral Rights Register
 * - HW_SPBA_PRR12 - Peripheral Rights Register
 * - HW_SPBA_PRR13 - Peripheral Rights Register
 * - HW_SPBA_PRR14 - Peripheral Rights Register
 * - HW_SPBA_PRR15 - Peripheral Rights Register
 * - HW_SPBA_PRR16 - Peripheral Rights Register
 * - HW_SPBA_PRR17 - Peripheral Rights Register
 * - HW_SPBA_PRR18 - Peripheral Rights Register
 * - HW_SPBA_PRR19 - Peripheral Rights Register
 * - HW_SPBA_PRR20 - Peripheral Rights Register
 * - HW_SPBA_PRR21 - Peripheral Rights Register
 * - HW_SPBA_PRR22 - Peripheral Rights Register
 * - HW_SPBA_PRR23 - Peripheral Rights Register
 * - HW_SPBA_PRR24 - Peripheral Rights Register
 * - HW_SPBA_PRR25 - Peripheral Rights Register
 * - HW_SPBA_PRR26 - Peripheral Rights Register
 * - HW_SPBA_PRR27 - Peripheral Rights Register
 * - HW_SPBA_PRR28 - Peripheral Rights Register
 * - HW_SPBA_PRR29 - Peripheral Rights Register
 * - HW_SPBA_PRR30 - Peripheral Rights Register
 * - HW_SPBA_PRR31 - Peripheral Rights Register
 *
 * - hw_spba_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_SPBA_BASE
#define HW_SPBA_INSTANCE_COUNT (1) //!< Number of instances of the SPBA module.
#define REGS_SPBA_BASE (0x0203c000) //!< Base address for SPBA.
#endif
//@}


//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR0 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR0 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr0
{
    reg32_t U;
    struct _hw_spba_prr0_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr0_t;
#endif

/*
 * constants & macros for entire SPBA_PRR0 register
 */
#define HW_SPBA_PRR0_ADDR      (REGS_SPBA_BASE + 0x0)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR0           (*(volatile hw_spba_prr0_t *) HW_SPBA_PRR0_ADDR)
#define HW_SPBA_PRR0_RD()      (HW_SPBA_PRR0.U)
#define HW_SPBA_PRR0_WR(v)     (HW_SPBA_PRR0.U = (v))
#define HW_SPBA_PRR0_SET(v)    (HW_SPBA_PRR0_WR(HW_SPBA_PRR0_RD() |  (v)))
#define HW_SPBA_PRR0_CLR(v)    (HW_SPBA_PRR0_WR(HW_SPBA_PRR0_RD() & ~(v)))
#define HW_SPBA_PRR0_TOG(v)    (HW_SPBA_PRR0_WR(HW_SPBA_PRR0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR0 bitfields
 */

/* --- Register HW_SPBA_PRR0, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR0_RARA      (0)      //!< Bit position for SPBA_PRR0_RARA.
#define BM_SPBA_PRR0_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR0_RARA.

//! @brief Get value of SPBA_PRR0_RARA from a register value.
#define BG_SPBA_PRR0_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR0_RARA) >> BP_SPBA_PRR0_RARA)

//! @brief Format value for bitfield SPBA_PRR0_RARA.
#define BF_SPBA_PRR0_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR0_RARA) & BM_SPBA_PRR0_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR0_RARA(v)   (HW_SPBA_PRR0_WR((HW_SPBA_PRR0_RD() & ~BM_SPBA_PRR0_RARA) | BF_SPBA_PRR0_RARA(v)))
#endif

#define BV_SPBA_PRR0_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR0_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR0, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR0_RARB      (1)      //!< Bit position for SPBA_PRR0_RARB.
#define BM_SPBA_PRR0_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR0_RARB.

//! @brief Get value of SPBA_PRR0_RARB from a register value.
#define BG_SPBA_PRR0_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR0_RARB) >> BP_SPBA_PRR0_RARB)

//! @brief Format value for bitfield SPBA_PRR0_RARB.
#define BF_SPBA_PRR0_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR0_RARB) & BM_SPBA_PRR0_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR0_RARB(v)   (HW_SPBA_PRR0_WR((HW_SPBA_PRR0_RD() & ~BM_SPBA_PRR0_RARB) | BF_SPBA_PRR0_RARB(v)))
#endif

#define BV_SPBA_PRR0_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR0_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR0, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR0_RARC      (2)      //!< Bit position for SPBA_PRR0_RARC.
#define BM_SPBA_PRR0_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR0_RARC.

//! @brief Get value of SPBA_PRR0_RARC from a register value.
#define BG_SPBA_PRR0_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR0_RARC) >> BP_SPBA_PRR0_RARC)

//! @brief Format value for bitfield SPBA_PRR0_RARC.
#define BF_SPBA_PRR0_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR0_RARC) & BM_SPBA_PRR0_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR0_RARC(v)   (HW_SPBA_PRR0_WR((HW_SPBA_PRR0_RD() & ~BM_SPBA_PRR0_RARC) | BF_SPBA_PRR0_RARC(v)))
#endif

#define BV_SPBA_PRR0_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR0_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR0, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR0_ROI      (16)      //!< Bit position for SPBA_PRR0_ROI.
#define BM_SPBA_PRR0_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR0_ROI.

//! @brief Get value of SPBA_PRR0_ROI from a register value.
#define BG_SPBA_PRR0_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR0_ROI) >> BP_SPBA_PRR0_ROI)

#define BV_SPBA_PRR0_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR0_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR0_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR0_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR0, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR0_RMO      (30)      //!< Bit position for SPBA_PRR0_RMO.
#define BM_SPBA_PRR0_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR0_RMO.

//! @brief Get value of SPBA_PRR0_RMO from a register value.
#define BG_SPBA_PRR0_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR0_RMO) >> BP_SPBA_PRR0_RMO)

#define BV_SPBA_PRR0_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR0_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR0_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR1 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR1 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr1
{
    reg32_t U;
    struct _hw_spba_prr1_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr1_t;
#endif

/*
 * constants & macros for entire SPBA_PRR1 register
 */
#define HW_SPBA_PRR1_ADDR      (REGS_SPBA_BASE + 0x4)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR1           (*(volatile hw_spba_prr1_t *) HW_SPBA_PRR1_ADDR)
#define HW_SPBA_PRR1_RD()      (HW_SPBA_PRR1.U)
#define HW_SPBA_PRR1_WR(v)     (HW_SPBA_PRR1.U = (v))
#define HW_SPBA_PRR1_SET(v)    (HW_SPBA_PRR1_WR(HW_SPBA_PRR1_RD() |  (v)))
#define HW_SPBA_PRR1_CLR(v)    (HW_SPBA_PRR1_WR(HW_SPBA_PRR1_RD() & ~(v)))
#define HW_SPBA_PRR1_TOG(v)    (HW_SPBA_PRR1_WR(HW_SPBA_PRR1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR1 bitfields
 */

/* --- Register HW_SPBA_PRR1, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR1_RARA      (0)      //!< Bit position for SPBA_PRR1_RARA.
#define BM_SPBA_PRR1_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR1_RARA.

//! @brief Get value of SPBA_PRR1_RARA from a register value.
#define BG_SPBA_PRR1_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR1_RARA) >> BP_SPBA_PRR1_RARA)

//! @brief Format value for bitfield SPBA_PRR1_RARA.
#define BF_SPBA_PRR1_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR1_RARA) & BM_SPBA_PRR1_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR1_RARA(v)   (HW_SPBA_PRR1_WR((HW_SPBA_PRR1_RD() & ~BM_SPBA_PRR1_RARA) | BF_SPBA_PRR1_RARA(v)))
#endif

#define BV_SPBA_PRR1_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR1_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR1, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR1_RARB      (1)      //!< Bit position for SPBA_PRR1_RARB.
#define BM_SPBA_PRR1_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR1_RARB.

//! @brief Get value of SPBA_PRR1_RARB from a register value.
#define BG_SPBA_PRR1_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR1_RARB) >> BP_SPBA_PRR1_RARB)

//! @brief Format value for bitfield SPBA_PRR1_RARB.
#define BF_SPBA_PRR1_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR1_RARB) & BM_SPBA_PRR1_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR1_RARB(v)   (HW_SPBA_PRR1_WR((HW_SPBA_PRR1_RD() & ~BM_SPBA_PRR1_RARB) | BF_SPBA_PRR1_RARB(v)))
#endif

#define BV_SPBA_PRR1_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR1_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR1, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR1_RARC      (2)      //!< Bit position for SPBA_PRR1_RARC.
#define BM_SPBA_PRR1_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR1_RARC.

//! @brief Get value of SPBA_PRR1_RARC from a register value.
#define BG_SPBA_PRR1_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR1_RARC) >> BP_SPBA_PRR1_RARC)

//! @brief Format value for bitfield SPBA_PRR1_RARC.
#define BF_SPBA_PRR1_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR1_RARC) & BM_SPBA_PRR1_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR1_RARC(v)   (HW_SPBA_PRR1_WR((HW_SPBA_PRR1_RD() & ~BM_SPBA_PRR1_RARC) | BF_SPBA_PRR1_RARC(v)))
#endif

#define BV_SPBA_PRR1_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR1_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR1, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR1_ROI      (16)      //!< Bit position for SPBA_PRR1_ROI.
#define BM_SPBA_PRR1_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR1_ROI.

//! @brief Get value of SPBA_PRR1_ROI from a register value.
#define BG_SPBA_PRR1_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR1_ROI) >> BP_SPBA_PRR1_ROI)

#define BV_SPBA_PRR1_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR1_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR1_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR1_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR1, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR1_RMO      (30)      //!< Bit position for SPBA_PRR1_RMO.
#define BM_SPBA_PRR1_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR1_RMO.

//! @brief Get value of SPBA_PRR1_RMO from a register value.
#define BG_SPBA_PRR1_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR1_RMO) >> BP_SPBA_PRR1_RMO)

#define BV_SPBA_PRR1_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR1_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR1_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR2 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR2 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr2
{
    reg32_t U;
    struct _hw_spba_prr2_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr2_t;
#endif

/*
 * constants & macros for entire SPBA_PRR2 register
 */
#define HW_SPBA_PRR2_ADDR      (REGS_SPBA_BASE + 0x8)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR2           (*(volatile hw_spba_prr2_t *) HW_SPBA_PRR2_ADDR)
#define HW_SPBA_PRR2_RD()      (HW_SPBA_PRR2.U)
#define HW_SPBA_PRR2_WR(v)     (HW_SPBA_PRR2.U = (v))
#define HW_SPBA_PRR2_SET(v)    (HW_SPBA_PRR2_WR(HW_SPBA_PRR2_RD() |  (v)))
#define HW_SPBA_PRR2_CLR(v)    (HW_SPBA_PRR2_WR(HW_SPBA_PRR2_RD() & ~(v)))
#define HW_SPBA_PRR2_TOG(v)    (HW_SPBA_PRR2_WR(HW_SPBA_PRR2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR2 bitfields
 */

/* --- Register HW_SPBA_PRR2, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR2_RARA      (0)      //!< Bit position for SPBA_PRR2_RARA.
#define BM_SPBA_PRR2_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR2_RARA.

//! @brief Get value of SPBA_PRR2_RARA from a register value.
#define BG_SPBA_PRR2_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR2_RARA) >> BP_SPBA_PRR2_RARA)

//! @brief Format value for bitfield SPBA_PRR2_RARA.
#define BF_SPBA_PRR2_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR2_RARA) & BM_SPBA_PRR2_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR2_RARA(v)   (HW_SPBA_PRR2_WR((HW_SPBA_PRR2_RD() & ~BM_SPBA_PRR2_RARA) | BF_SPBA_PRR2_RARA(v)))
#endif

#define BV_SPBA_PRR2_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR2_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR2, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR2_RARB      (1)      //!< Bit position for SPBA_PRR2_RARB.
#define BM_SPBA_PRR2_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR2_RARB.

//! @brief Get value of SPBA_PRR2_RARB from a register value.
#define BG_SPBA_PRR2_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR2_RARB) >> BP_SPBA_PRR2_RARB)

//! @brief Format value for bitfield SPBA_PRR2_RARB.
#define BF_SPBA_PRR2_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR2_RARB) & BM_SPBA_PRR2_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR2_RARB(v)   (HW_SPBA_PRR2_WR((HW_SPBA_PRR2_RD() & ~BM_SPBA_PRR2_RARB) | BF_SPBA_PRR2_RARB(v)))
#endif

#define BV_SPBA_PRR2_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR2_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR2, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR2_RARC      (2)      //!< Bit position for SPBA_PRR2_RARC.
#define BM_SPBA_PRR2_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR2_RARC.

//! @brief Get value of SPBA_PRR2_RARC from a register value.
#define BG_SPBA_PRR2_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR2_RARC) >> BP_SPBA_PRR2_RARC)

//! @brief Format value for bitfield SPBA_PRR2_RARC.
#define BF_SPBA_PRR2_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR2_RARC) & BM_SPBA_PRR2_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR2_RARC(v)   (HW_SPBA_PRR2_WR((HW_SPBA_PRR2_RD() & ~BM_SPBA_PRR2_RARC) | BF_SPBA_PRR2_RARC(v)))
#endif

#define BV_SPBA_PRR2_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR2_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR2, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR2_ROI      (16)      //!< Bit position for SPBA_PRR2_ROI.
#define BM_SPBA_PRR2_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR2_ROI.

//! @brief Get value of SPBA_PRR2_ROI from a register value.
#define BG_SPBA_PRR2_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR2_ROI) >> BP_SPBA_PRR2_ROI)

#define BV_SPBA_PRR2_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR2_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR2_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR2_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR2, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR2_RMO      (30)      //!< Bit position for SPBA_PRR2_RMO.
#define BM_SPBA_PRR2_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR2_RMO.

//! @brief Get value of SPBA_PRR2_RMO from a register value.
#define BG_SPBA_PRR2_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR2_RMO) >> BP_SPBA_PRR2_RMO)

#define BV_SPBA_PRR2_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR2_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR2_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR3 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR3 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr3
{
    reg32_t U;
    struct _hw_spba_prr3_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr3_t;
#endif

/*
 * constants & macros for entire SPBA_PRR3 register
 */
#define HW_SPBA_PRR3_ADDR      (REGS_SPBA_BASE + 0xc)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR3           (*(volatile hw_spba_prr3_t *) HW_SPBA_PRR3_ADDR)
#define HW_SPBA_PRR3_RD()      (HW_SPBA_PRR3.U)
#define HW_SPBA_PRR3_WR(v)     (HW_SPBA_PRR3.U = (v))
#define HW_SPBA_PRR3_SET(v)    (HW_SPBA_PRR3_WR(HW_SPBA_PRR3_RD() |  (v)))
#define HW_SPBA_PRR3_CLR(v)    (HW_SPBA_PRR3_WR(HW_SPBA_PRR3_RD() & ~(v)))
#define HW_SPBA_PRR3_TOG(v)    (HW_SPBA_PRR3_WR(HW_SPBA_PRR3_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR3 bitfields
 */

/* --- Register HW_SPBA_PRR3, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR3_RARA      (0)      //!< Bit position for SPBA_PRR3_RARA.
#define BM_SPBA_PRR3_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR3_RARA.

//! @brief Get value of SPBA_PRR3_RARA from a register value.
#define BG_SPBA_PRR3_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR3_RARA) >> BP_SPBA_PRR3_RARA)

//! @brief Format value for bitfield SPBA_PRR3_RARA.
#define BF_SPBA_PRR3_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR3_RARA) & BM_SPBA_PRR3_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR3_RARA(v)   (HW_SPBA_PRR3_WR((HW_SPBA_PRR3_RD() & ~BM_SPBA_PRR3_RARA) | BF_SPBA_PRR3_RARA(v)))
#endif

#define BV_SPBA_PRR3_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR3_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR3, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR3_RARB      (1)      //!< Bit position for SPBA_PRR3_RARB.
#define BM_SPBA_PRR3_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR3_RARB.

//! @brief Get value of SPBA_PRR3_RARB from a register value.
#define BG_SPBA_PRR3_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR3_RARB) >> BP_SPBA_PRR3_RARB)

//! @brief Format value for bitfield SPBA_PRR3_RARB.
#define BF_SPBA_PRR3_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR3_RARB) & BM_SPBA_PRR3_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR3_RARB(v)   (HW_SPBA_PRR3_WR((HW_SPBA_PRR3_RD() & ~BM_SPBA_PRR3_RARB) | BF_SPBA_PRR3_RARB(v)))
#endif

#define BV_SPBA_PRR3_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR3_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR3, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR3_RARC      (2)      //!< Bit position for SPBA_PRR3_RARC.
#define BM_SPBA_PRR3_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR3_RARC.

//! @brief Get value of SPBA_PRR3_RARC from a register value.
#define BG_SPBA_PRR3_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR3_RARC) >> BP_SPBA_PRR3_RARC)

//! @brief Format value for bitfield SPBA_PRR3_RARC.
#define BF_SPBA_PRR3_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR3_RARC) & BM_SPBA_PRR3_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR3_RARC(v)   (HW_SPBA_PRR3_WR((HW_SPBA_PRR3_RD() & ~BM_SPBA_PRR3_RARC) | BF_SPBA_PRR3_RARC(v)))
#endif

#define BV_SPBA_PRR3_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR3_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR3, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR3_ROI      (16)      //!< Bit position for SPBA_PRR3_ROI.
#define BM_SPBA_PRR3_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR3_ROI.

//! @brief Get value of SPBA_PRR3_ROI from a register value.
#define BG_SPBA_PRR3_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR3_ROI) >> BP_SPBA_PRR3_ROI)

#define BV_SPBA_PRR3_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR3_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR3_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR3_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR3, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR3_RMO      (30)      //!< Bit position for SPBA_PRR3_RMO.
#define BM_SPBA_PRR3_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR3_RMO.

//! @brief Get value of SPBA_PRR3_RMO from a register value.
#define BG_SPBA_PRR3_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR3_RMO) >> BP_SPBA_PRR3_RMO)

#define BV_SPBA_PRR3_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR3_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR3_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR4 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR4 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr4
{
    reg32_t U;
    struct _hw_spba_prr4_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr4_t;
#endif

/*
 * constants & macros for entire SPBA_PRR4 register
 */
#define HW_SPBA_PRR4_ADDR      (REGS_SPBA_BASE + 0x10)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR4           (*(volatile hw_spba_prr4_t *) HW_SPBA_PRR4_ADDR)
#define HW_SPBA_PRR4_RD()      (HW_SPBA_PRR4.U)
#define HW_SPBA_PRR4_WR(v)     (HW_SPBA_PRR4.U = (v))
#define HW_SPBA_PRR4_SET(v)    (HW_SPBA_PRR4_WR(HW_SPBA_PRR4_RD() |  (v)))
#define HW_SPBA_PRR4_CLR(v)    (HW_SPBA_PRR4_WR(HW_SPBA_PRR4_RD() & ~(v)))
#define HW_SPBA_PRR4_TOG(v)    (HW_SPBA_PRR4_WR(HW_SPBA_PRR4_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR4 bitfields
 */

/* --- Register HW_SPBA_PRR4, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR4_RARA      (0)      //!< Bit position for SPBA_PRR4_RARA.
#define BM_SPBA_PRR4_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR4_RARA.

//! @brief Get value of SPBA_PRR4_RARA from a register value.
#define BG_SPBA_PRR4_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR4_RARA) >> BP_SPBA_PRR4_RARA)

//! @brief Format value for bitfield SPBA_PRR4_RARA.
#define BF_SPBA_PRR4_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR4_RARA) & BM_SPBA_PRR4_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR4_RARA(v)   (HW_SPBA_PRR4_WR((HW_SPBA_PRR4_RD() & ~BM_SPBA_PRR4_RARA) | BF_SPBA_PRR4_RARA(v)))
#endif

#define BV_SPBA_PRR4_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR4_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR4, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR4_RARB      (1)      //!< Bit position for SPBA_PRR4_RARB.
#define BM_SPBA_PRR4_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR4_RARB.

//! @brief Get value of SPBA_PRR4_RARB from a register value.
#define BG_SPBA_PRR4_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR4_RARB) >> BP_SPBA_PRR4_RARB)

//! @brief Format value for bitfield SPBA_PRR4_RARB.
#define BF_SPBA_PRR4_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR4_RARB) & BM_SPBA_PRR4_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR4_RARB(v)   (HW_SPBA_PRR4_WR((HW_SPBA_PRR4_RD() & ~BM_SPBA_PRR4_RARB) | BF_SPBA_PRR4_RARB(v)))
#endif

#define BV_SPBA_PRR4_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR4_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR4, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR4_RARC      (2)      //!< Bit position for SPBA_PRR4_RARC.
#define BM_SPBA_PRR4_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR4_RARC.

//! @brief Get value of SPBA_PRR4_RARC from a register value.
#define BG_SPBA_PRR4_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR4_RARC) >> BP_SPBA_PRR4_RARC)

//! @brief Format value for bitfield SPBA_PRR4_RARC.
#define BF_SPBA_PRR4_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR4_RARC) & BM_SPBA_PRR4_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR4_RARC(v)   (HW_SPBA_PRR4_WR((HW_SPBA_PRR4_RD() & ~BM_SPBA_PRR4_RARC) | BF_SPBA_PRR4_RARC(v)))
#endif

#define BV_SPBA_PRR4_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR4_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR4, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR4_ROI      (16)      //!< Bit position for SPBA_PRR4_ROI.
#define BM_SPBA_PRR4_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR4_ROI.

//! @brief Get value of SPBA_PRR4_ROI from a register value.
#define BG_SPBA_PRR4_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR4_ROI) >> BP_SPBA_PRR4_ROI)

#define BV_SPBA_PRR4_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR4_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR4_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR4_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR4, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR4_RMO      (30)      //!< Bit position for SPBA_PRR4_RMO.
#define BM_SPBA_PRR4_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR4_RMO.

//! @brief Get value of SPBA_PRR4_RMO from a register value.
#define BG_SPBA_PRR4_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR4_RMO) >> BP_SPBA_PRR4_RMO)

#define BV_SPBA_PRR4_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR4_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR4_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR5 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR5 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr5
{
    reg32_t U;
    struct _hw_spba_prr5_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr5_t;
#endif

/*
 * constants & macros for entire SPBA_PRR5 register
 */
#define HW_SPBA_PRR5_ADDR      (REGS_SPBA_BASE + 0x14)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR5           (*(volatile hw_spba_prr5_t *) HW_SPBA_PRR5_ADDR)
#define HW_SPBA_PRR5_RD()      (HW_SPBA_PRR5.U)
#define HW_SPBA_PRR5_WR(v)     (HW_SPBA_PRR5.U = (v))
#define HW_SPBA_PRR5_SET(v)    (HW_SPBA_PRR5_WR(HW_SPBA_PRR5_RD() |  (v)))
#define HW_SPBA_PRR5_CLR(v)    (HW_SPBA_PRR5_WR(HW_SPBA_PRR5_RD() & ~(v)))
#define HW_SPBA_PRR5_TOG(v)    (HW_SPBA_PRR5_WR(HW_SPBA_PRR5_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR5 bitfields
 */

/* --- Register HW_SPBA_PRR5, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR5_RARA      (0)      //!< Bit position for SPBA_PRR5_RARA.
#define BM_SPBA_PRR5_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR5_RARA.

//! @brief Get value of SPBA_PRR5_RARA from a register value.
#define BG_SPBA_PRR5_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR5_RARA) >> BP_SPBA_PRR5_RARA)

//! @brief Format value for bitfield SPBA_PRR5_RARA.
#define BF_SPBA_PRR5_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR5_RARA) & BM_SPBA_PRR5_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR5_RARA(v)   (HW_SPBA_PRR5_WR((HW_SPBA_PRR5_RD() & ~BM_SPBA_PRR5_RARA) | BF_SPBA_PRR5_RARA(v)))
#endif

#define BV_SPBA_PRR5_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR5_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR5, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR5_RARB      (1)      //!< Bit position for SPBA_PRR5_RARB.
#define BM_SPBA_PRR5_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR5_RARB.

//! @brief Get value of SPBA_PRR5_RARB from a register value.
#define BG_SPBA_PRR5_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR5_RARB) >> BP_SPBA_PRR5_RARB)

//! @brief Format value for bitfield SPBA_PRR5_RARB.
#define BF_SPBA_PRR5_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR5_RARB) & BM_SPBA_PRR5_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR5_RARB(v)   (HW_SPBA_PRR5_WR((HW_SPBA_PRR5_RD() & ~BM_SPBA_PRR5_RARB) | BF_SPBA_PRR5_RARB(v)))
#endif

#define BV_SPBA_PRR5_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR5_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR5, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR5_RARC      (2)      //!< Bit position for SPBA_PRR5_RARC.
#define BM_SPBA_PRR5_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR5_RARC.

//! @brief Get value of SPBA_PRR5_RARC from a register value.
#define BG_SPBA_PRR5_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR5_RARC) >> BP_SPBA_PRR5_RARC)

//! @brief Format value for bitfield SPBA_PRR5_RARC.
#define BF_SPBA_PRR5_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR5_RARC) & BM_SPBA_PRR5_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR5_RARC(v)   (HW_SPBA_PRR5_WR((HW_SPBA_PRR5_RD() & ~BM_SPBA_PRR5_RARC) | BF_SPBA_PRR5_RARC(v)))
#endif

#define BV_SPBA_PRR5_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR5_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR5, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR5_ROI      (16)      //!< Bit position for SPBA_PRR5_ROI.
#define BM_SPBA_PRR5_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR5_ROI.

//! @brief Get value of SPBA_PRR5_ROI from a register value.
#define BG_SPBA_PRR5_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR5_ROI) >> BP_SPBA_PRR5_ROI)

#define BV_SPBA_PRR5_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR5_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR5_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR5_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR5, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR5_RMO      (30)      //!< Bit position for SPBA_PRR5_RMO.
#define BM_SPBA_PRR5_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR5_RMO.

//! @brief Get value of SPBA_PRR5_RMO from a register value.
#define BG_SPBA_PRR5_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR5_RMO) >> BP_SPBA_PRR5_RMO)

#define BV_SPBA_PRR5_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR5_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR5_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR6 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR6 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr6
{
    reg32_t U;
    struct _hw_spba_prr6_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr6_t;
#endif

/*
 * constants & macros for entire SPBA_PRR6 register
 */
#define HW_SPBA_PRR6_ADDR      (REGS_SPBA_BASE + 0x18)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR6           (*(volatile hw_spba_prr6_t *) HW_SPBA_PRR6_ADDR)
#define HW_SPBA_PRR6_RD()      (HW_SPBA_PRR6.U)
#define HW_SPBA_PRR6_WR(v)     (HW_SPBA_PRR6.U = (v))
#define HW_SPBA_PRR6_SET(v)    (HW_SPBA_PRR6_WR(HW_SPBA_PRR6_RD() |  (v)))
#define HW_SPBA_PRR6_CLR(v)    (HW_SPBA_PRR6_WR(HW_SPBA_PRR6_RD() & ~(v)))
#define HW_SPBA_PRR6_TOG(v)    (HW_SPBA_PRR6_WR(HW_SPBA_PRR6_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR6 bitfields
 */

/* --- Register HW_SPBA_PRR6, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR6_RARA      (0)      //!< Bit position for SPBA_PRR6_RARA.
#define BM_SPBA_PRR6_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR6_RARA.

//! @brief Get value of SPBA_PRR6_RARA from a register value.
#define BG_SPBA_PRR6_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR6_RARA) >> BP_SPBA_PRR6_RARA)

//! @brief Format value for bitfield SPBA_PRR6_RARA.
#define BF_SPBA_PRR6_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR6_RARA) & BM_SPBA_PRR6_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR6_RARA(v)   (HW_SPBA_PRR6_WR((HW_SPBA_PRR6_RD() & ~BM_SPBA_PRR6_RARA) | BF_SPBA_PRR6_RARA(v)))
#endif

#define BV_SPBA_PRR6_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR6_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR6, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR6_RARB      (1)      //!< Bit position for SPBA_PRR6_RARB.
#define BM_SPBA_PRR6_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR6_RARB.

//! @brief Get value of SPBA_PRR6_RARB from a register value.
#define BG_SPBA_PRR6_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR6_RARB) >> BP_SPBA_PRR6_RARB)

//! @brief Format value for bitfield SPBA_PRR6_RARB.
#define BF_SPBA_PRR6_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR6_RARB) & BM_SPBA_PRR6_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR6_RARB(v)   (HW_SPBA_PRR6_WR((HW_SPBA_PRR6_RD() & ~BM_SPBA_PRR6_RARB) | BF_SPBA_PRR6_RARB(v)))
#endif

#define BV_SPBA_PRR6_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR6_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR6, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR6_RARC      (2)      //!< Bit position for SPBA_PRR6_RARC.
#define BM_SPBA_PRR6_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR6_RARC.

//! @brief Get value of SPBA_PRR6_RARC from a register value.
#define BG_SPBA_PRR6_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR6_RARC) >> BP_SPBA_PRR6_RARC)

//! @brief Format value for bitfield SPBA_PRR6_RARC.
#define BF_SPBA_PRR6_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR6_RARC) & BM_SPBA_PRR6_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR6_RARC(v)   (HW_SPBA_PRR6_WR((HW_SPBA_PRR6_RD() & ~BM_SPBA_PRR6_RARC) | BF_SPBA_PRR6_RARC(v)))
#endif

#define BV_SPBA_PRR6_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR6_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR6, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR6_ROI      (16)      //!< Bit position for SPBA_PRR6_ROI.
#define BM_SPBA_PRR6_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR6_ROI.

//! @brief Get value of SPBA_PRR6_ROI from a register value.
#define BG_SPBA_PRR6_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR6_ROI) >> BP_SPBA_PRR6_ROI)

#define BV_SPBA_PRR6_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR6_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR6_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR6_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR6, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR6_RMO      (30)      //!< Bit position for SPBA_PRR6_RMO.
#define BM_SPBA_PRR6_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR6_RMO.

//! @brief Get value of SPBA_PRR6_RMO from a register value.
#define BG_SPBA_PRR6_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR6_RMO) >> BP_SPBA_PRR6_RMO)

#define BV_SPBA_PRR6_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR6_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR6_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR7 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR7 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr7
{
    reg32_t U;
    struct _hw_spba_prr7_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr7_t;
#endif

/*
 * constants & macros for entire SPBA_PRR7 register
 */
#define HW_SPBA_PRR7_ADDR      (REGS_SPBA_BASE + 0x1c)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR7           (*(volatile hw_spba_prr7_t *) HW_SPBA_PRR7_ADDR)
#define HW_SPBA_PRR7_RD()      (HW_SPBA_PRR7.U)
#define HW_SPBA_PRR7_WR(v)     (HW_SPBA_PRR7.U = (v))
#define HW_SPBA_PRR7_SET(v)    (HW_SPBA_PRR7_WR(HW_SPBA_PRR7_RD() |  (v)))
#define HW_SPBA_PRR7_CLR(v)    (HW_SPBA_PRR7_WR(HW_SPBA_PRR7_RD() & ~(v)))
#define HW_SPBA_PRR7_TOG(v)    (HW_SPBA_PRR7_WR(HW_SPBA_PRR7_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR7 bitfields
 */

/* --- Register HW_SPBA_PRR7, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR7_RARA      (0)      //!< Bit position for SPBA_PRR7_RARA.
#define BM_SPBA_PRR7_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR7_RARA.

//! @brief Get value of SPBA_PRR7_RARA from a register value.
#define BG_SPBA_PRR7_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR7_RARA) >> BP_SPBA_PRR7_RARA)

//! @brief Format value for bitfield SPBA_PRR7_RARA.
#define BF_SPBA_PRR7_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR7_RARA) & BM_SPBA_PRR7_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR7_RARA(v)   (HW_SPBA_PRR7_WR((HW_SPBA_PRR7_RD() & ~BM_SPBA_PRR7_RARA) | BF_SPBA_PRR7_RARA(v)))
#endif

#define BV_SPBA_PRR7_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR7_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR7, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR7_RARB      (1)      //!< Bit position for SPBA_PRR7_RARB.
#define BM_SPBA_PRR7_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR7_RARB.

//! @brief Get value of SPBA_PRR7_RARB from a register value.
#define BG_SPBA_PRR7_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR7_RARB) >> BP_SPBA_PRR7_RARB)

//! @brief Format value for bitfield SPBA_PRR7_RARB.
#define BF_SPBA_PRR7_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR7_RARB) & BM_SPBA_PRR7_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR7_RARB(v)   (HW_SPBA_PRR7_WR((HW_SPBA_PRR7_RD() & ~BM_SPBA_PRR7_RARB) | BF_SPBA_PRR7_RARB(v)))
#endif

#define BV_SPBA_PRR7_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR7_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR7, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR7_RARC      (2)      //!< Bit position for SPBA_PRR7_RARC.
#define BM_SPBA_PRR7_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR7_RARC.

//! @brief Get value of SPBA_PRR7_RARC from a register value.
#define BG_SPBA_PRR7_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR7_RARC) >> BP_SPBA_PRR7_RARC)

//! @brief Format value for bitfield SPBA_PRR7_RARC.
#define BF_SPBA_PRR7_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR7_RARC) & BM_SPBA_PRR7_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR7_RARC(v)   (HW_SPBA_PRR7_WR((HW_SPBA_PRR7_RD() & ~BM_SPBA_PRR7_RARC) | BF_SPBA_PRR7_RARC(v)))
#endif

#define BV_SPBA_PRR7_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR7_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR7, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR7_ROI      (16)      //!< Bit position for SPBA_PRR7_ROI.
#define BM_SPBA_PRR7_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR7_ROI.

//! @brief Get value of SPBA_PRR7_ROI from a register value.
#define BG_SPBA_PRR7_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR7_ROI) >> BP_SPBA_PRR7_ROI)

#define BV_SPBA_PRR7_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR7_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR7_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR7_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR7, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR7_RMO      (30)      //!< Bit position for SPBA_PRR7_RMO.
#define BM_SPBA_PRR7_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR7_RMO.

//! @brief Get value of SPBA_PRR7_RMO from a register value.
#define BG_SPBA_PRR7_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR7_RMO) >> BP_SPBA_PRR7_RMO)

#define BV_SPBA_PRR7_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR7_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR7_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR8 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR8 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr8
{
    reg32_t U;
    struct _hw_spba_prr8_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr8_t;
#endif

/*
 * constants & macros for entire SPBA_PRR8 register
 */
#define HW_SPBA_PRR8_ADDR      (REGS_SPBA_BASE + 0x20)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR8           (*(volatile hw_spba_prr8_t *) HW_SPBA_PRR8_ADDR)
#define HW_SPBA_PRR8_RD()      (HW_SPBA_PRR8.U)
#define HW_SPBA_PRR8_WR(v)     (HW_SPBA_PRR8.U = (v))
#define HW_SPBA_PRR8_SET(v)    (HW_SPBA_PRR8_WR(HW_SPBA_PRR8_RD() |  (v)))
#define HW_SPBA_PRR8_CLR(v)    (HW_SPBA_PRR8_WR(HW_SPBA_PRR8_RD() & ~(v)))
#define HW_SPBA_PRR8_TOG(v)    (HW_SPBA_PRR8_WR(HW_SPBA_PRR8_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR8 bitfields
 */

/* --- Register HW_SPBA_PRR8, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR8_RARA      (0)      //!< Bit position for SPBA_PRR8_RARA.
#define BM_SPBA_PRR8_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR8_RARA.

//! @brief Get value of SPBA_PRR8_RARA from a register value.
#define BG_SPBA_PRR8_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR8_RARA) >> BP_SPBA_PRR8_RARA)

//! @brief Format value for bitfield SPBA_PRR8_RARA.
#define BF_SPBA_PRR8_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR8_RARA) & BM_SPBA_PRR8_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR8_RARA(v)   (HW_SPBA_PRR8_WR((HW_SPBA_PRR8_RD() & ~BM_SPBA_PRR8_RARA) | BF_SPBA_PRR8_RARA(v)))
#endif

#define BV_SPBA_PRR8_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR8_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR8, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR8_RARB      (1)      //!< Bit position for SPBA_PRR8_RARB.
#define BM_SPBA_PRR8_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR8_RARB.

//! @brief Get value of SPBA_PRR8_RARB from a register value.
#define BG_SPBA_PRR8_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR8_RARB) >> BP_SPBA_PRR8_RARB)

//! @brief Format value for bitfield SPBA_PRR8_RARB.
#define BF_SPBA_PRR8_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR8_RARB) & BM_SPBA_PRR8_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR8_RARB(v)   (HW_SPBA_PRR8_WR((HW_SPBA_PRR8_RD() & ~BM_SPBA_PRR8_RARB) | BF_SPBA_PRR8_RARB(v)))
#endif

#define BV_SPBA_PRR8_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR8_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR8, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR8_RARC      (2)      //!< Bit position for SPBA_PRR8_RARC.
#define BM_SPBA_PRR8_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR8_RARC.

//! @brief Get value of SPBA_PRR8_RARC from a register value.
#define BG_SPBA_PRR8_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR8_RARC) >> BP_SPBA_PRR8_RARC)

//! @brief Format value for bitfield SPBA_PRR8_RARC.
#define BF_SPBA_PRR8_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR8_RARC) & BM_SPBA_PRR8_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR8_RARC(v)   (HW_SPBA_PRR8_WR((HW_SPBA_PRR8_RD() & ~BM_SPBA_PRR8_RARC) | BF_SPBA_PRR8_RARC(v)))
#endif

#define BV_SPBA_PRR8_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR8_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR8, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR8_ROI      (16)      //!< Bit position for SPBA_PRR8_ROI.
#define BM_SPBA_PRR8_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR8_ROI.

//! @brief Get value of SPBA_PRR8_ROI from a register value.
#define BG_SPBA_PRR8_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR8_ROI) >> BP_SPBA_PRR8_ROI)

#define BV_SPBA_PRR8_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR8_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR8_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR8_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR8, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR8_RMO      (30)      //!< Bit position for SPBA_PRR8_RMO.
#define BM_SPBA_PRR8_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR8_RMO.

//! @brief Get value of SPBA_PRR8_RMO from a register value.
#define BG_SPBA_PRR8_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR8_RMO) >> BP_SPBA_PRR8_RMO)

#define BV_SPBA_PRR8_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR8_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR8_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR9 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR9 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr9
{
    reg32_t U;
    struct _hw_spba_prr9_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr9_t;
#endif

/*
 * constants & macros for entire SPBA_PRR9 register
 */
#define HW_SPBA_PRR9_ADDR      (REGS_SPBA_BASE + 0x24)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR9           (*(volatile hw_spba_prr9_t *) HW_SPBA_PRR9_ADDR)
#define HW_SPBA_PRR9_RD()      (HW_SPBA_PRR9.U)
#define HW_SPBA_PRR9_WR(v)     (HW_SPBA_PRR9.U = (v))
#define HW_SPBA_PRR9_SET(v)    (HW_SPBA_PRR9_WR(HW_SPBA_PRR9_RD() |  (v)))
#define HW_SPBA_PRR9_CLR(v)    (HW_SPBA_PRR9_WR(HW_SPBA_PRR9_RD() & ~(v)))
#define HW_SPBA_PRR9_TOG(v)    (HW_SPBA_PRR9_WR(HW_SPBA_PRR9_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR9 bitfields
 */

/* --- Register HW_SPBA_PRR9, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR9_RARA      (0)      //!< Bit position for SPBA_PRR9_RARA.
#define BM_SPBA_PRR9_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR9_RARA.

//! @brief Get value of SPBA_PRR9_RARA from a register value.
#define BG_SPBA_PRR9_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR9_RARA) >> BP_SPBA_PRR9_RARA)

//! @brief Format value for bitfield SPBA_PRR9_RARA.
#define BF_SPBA_PRR9_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR9_RARA) & BM_SPBA_PRR9_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR9_RARA(v)   (HW_SPBA_PRR9_WR((HW_SPBA_PRR9_RD() & ~BM_SPBA_PRR9_RARA) | BF_SPBA_PRR9_RARA(v)))
#endif

#define BV_SPBA_PRR9_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR9_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR9, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR9_RARB      (1)      //!< Bit position for SPBA_PRR9_RARB.
#define BM_SPBA_PRR9_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR9_RARB.

//! @brief Get value of SPBA_PRR9_RARB from a register value.
#define BG_SPBA_PRR9_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR9_RARB) >> BP_SPBA_PRR9_RARB)

//! @brief Format value for bitfield SPBA_PRR9_RARB.
#define BF_SPBA_PRR9_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR9_RARB) & BM_SPBA_PRR9_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR9_RARB(v)   (HW_SPBA_PRR9_WR((HW_SPBA_PRR9_RD() & ~BM_SPBA_PRR9_RARB) | BF_SPBA_PRR9_RARB(v)))
#endif

#define BV_SPBA_PRR9_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR9_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR9, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR9_RARC      (2)      //!< Bit position for SPBA_PRR9_RARC.
#define BM_SPBA_PRR9_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR9_RARC.

//! @brief Get value of SPBA_PRR9_RARC from a register value.
#define BG_SPBA_PRR9_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR9_RARC) >> BP_SPBA_PRR9_RARC)

//! @brief Format value for bitfield SPBA_PRR9_RARC.
#define BF_SPBA_PRR9_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR9_RARC) & BM_SPBA_PRR9_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR9_RARC(v)   (HW_SPBA_PRR9_WR((HW_SPBA_PRR9_RD() & ~BM_SPBA_PRR9_RARC) | BF_SPBA_PRR9_RARC(v)))
#endif

#define BV_SPBA_PRR9_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR9_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR9, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR9_ROI      (16)      //!< Bit position for SPBA_PRR9_ROI.
#define BM_SPBA_PRR9_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR9_ROI.

//! @brief Get value of SPBA_PRR9_ROI from a register value.
#define BG_SPBA_PRR9_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR9_ROI) >> BP_SPBA_PRR9_ROI)

#define BV_SPBA_PRR9_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR9_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR9_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR9_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR9, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR9_RMO      (30)      //!< Bit position for SPBA_PRR9_RMO.
#define BM_SPBA_PRR9_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR9_RMO.

//! @brief Get value of SPBA_PRR9_RMO from a register value.
#define BG_SPBA_PRR9_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR9_RMO) >> BP_SPBA_PRR9_RMO)

#define BV_SPBA_PRR9_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR9_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR9_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR10 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR10 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr10
{
    reg32_t U;
    struct _hw_spba_prr10_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr10_t;
#endif

/*
 * constants & macros for entire SPBA_PRR10 register
 */
#define HW_SPBA_PRR10_ADDR      (REGS_SPBA_BASE + 0x28)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR10           (*(volatile hw_spba_prr10_t *) HW_SPBA_PRR10_ADDR)
#define HW_SPBA_PRR10_RD()      (HW_SPBA_PRR10.U)
#define HW_SPBA_PRR10_WR(v)     (HW_SPBA_PRR10.U = (v))
#define HW_SPBA_PRR10_SET(v)    (HW_SPBA_PRR10_WR(HW_SPBA_PRR10_RD() |  (v)))
#define HW_SPBA_PRR10_CLR(v)    (HW_SPBA_PRR10_WR(HW_SPBA_PRR10_RD() & ~(v)))
#define HW_SPBA_PRR10_TOG(v)    (HW_SPBA_PRR10_WR(HW_SPBA_PRR10_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR10 bitfields
 */

/* --- Register HW_SPBA_PRR10, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR10_RARA      (0)      //!< Bit position for SPBA_PRR10_RARA.
#define BM_SPBA_PRR10_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR10_RARA.

//! @brief Get value of SPBA_PRR10_RARA from a register value.
#define BG_SPBA_PRR10_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR10_RARA) >> BP_SPBA_PRR10_RARA)

//! @brief Format value for bitfield SPBA_PRR10_RARA.
#define BF_SPBA_PRR10_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR10_RARA) & BM_SPBA_PRR10_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR10_RARA(v)   (HW_SPBA_PRR10_WR((HW_SPBA_PRR10_RD() & ~BM_SPBA_PRR10_RARA) | BF_SPBA_PRR10_RARA(v)))
#endif

#define BV_SPBA_PRR10_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR10_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR10, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR10_RARB      (1)      //!< Bit position for SPBA_PRR10_RARB.
#define BM_SPBA_PRR10_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR10_RARB.

//! @brief Get value of SPBA_PRR10_RARB from a register value.
#define BG_SPBA_PRR10_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR10_RARB) >> BP_SPBA_PRR10_RARB)

//! @brief Format value for bitfield SPBA_PRR10_RARB.
#define BF_SPBA_PRR10_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR10_RARB) & BM_SPBA_PRR10_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR10_RARB(v)   (HW_SPBA_PRR10_WR((HW_SPBA_PRR10_RD() & ~BM_SPBA_PRR10_RARB) | BF_SPBA_PRR10_RARB(v)))
#endif

#define BV_SPBA_PRR10_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR10_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR10, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR10_RARC      (2)      //!< Bit position for SPBA_PRR10_RARC.
#define BM_SPBA_PRR10_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR10_RARC.

//! @brief Get value of SPBA_PRR10_RARC from a register value.
#define BG_SPBA_PRR10_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR10_RARC) >> BP_SPBA_PRR10_RARC)

//! @brief Format value for bitfield SPBA_PRR10_RARC.
#define BF_SPBA_PRR10_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR10_RARC) & BM_SPBA_PRR10_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR10_RARC(v)   (HW_SPBA_PRR10_WR((HW_SPBA_PRR10_RD() & ~BM_SPBA_PRR10_RARC) | BF_SPBA_PRR10_RARC(v)))
#endif

#define BV_SPBA_PRR10_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR10_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR10, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR10_ROI      (16)      //!< Bit position for SPBA_PRR10_ROI.
#define BM_SPBA_PRR10_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR10_ROI.

//! @brief Get value of SPBA_PRR10_ROI from a register value.
#define BG_SPBA_PRR10_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR10_ROI) >> BP_SPBA_PRR10_ROI)

#define BV_SPBA_PRR10_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR10_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR10_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR10_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR10, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR10_RMO      (30)      //!< Bit position for SPBA_PRR10_RMO.
#define BM_SPBA_PRR10_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR10_RMO.

//! @brief Get value of SPBA_PRR10_RMO from a register value.
#define BG_SPBA_PRR10_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR10_RMO) >> BP_SPBA_PRR10_RMO)

#define BV_SPBA_PRR10_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR10_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR10_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR11 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR11 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr11
{
    reg32_t U;
    struct _hw_spba_prr11_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr11_t;
#endif

/*
 * constants & macros for entire SPBA_PRR11 register
 */
#define HW_SPBA_PRR11_ADDR      (REGS_SPBA_BASE + 0x2c)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR11           (*(volatile hw_spba_prr11_t *) HW_SPBA_PRR11_ADDR)
#define HW_SPBA_PRR11_RD()      (HW_SPBA_PRR11.U)
#define HW_SPBA_PRR11_WR(v)     (HW_SPBA_PRR11.U = (v))
#define HW_SPBA_PRR11_SET(v)    (HW_SPBA_PRR11_WR(HW_SPBA_PRR11_RD() |  (v)))
#define HW_SPBA_PRR11_CLR(v)    (HW_SPBA_PRR11_WR(HW_SPBA_PRR11_RD() & ~(v)))
#define HW_SPBA_PRR11_TOG(v)    (HW_SPBA_PRR11_WR(HW_SPBA_PRR11_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR11 bitfields
 */

/* --- Register HW_SPBA_PRR11, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR11_RARA      (0)      //!< Bit position for SPBA_PRR11_RARA.
#define BM_SPBA_PRR11_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR11_RARA.

//! @brief Get value of SPBA_PRR11_RARA from a register value.
#define BG_SPBA_PRR11_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR11_RARA) >> BP_SPBA_PRR11_RARA)

//! @brief Format value for bitfield SPBA_PRR11_RARA.
#define BF_SPBA_PRR11_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR11_RARA) & BM_SPBA_PRR11_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR11_RARA(v)   (HW_SPBA_PRR11_WR((HW_SPBA_PRR11_RD() & ~BM_SPBA_PRR11_RARA) | BF_SPBA_PRR11_RARA(v)))
#endif

#define BV_SPBA_PRR11_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR11_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR11, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR11_RARB      (1)      //!< Bit position for SPBA_PRR11_RARB.
#define BM_SPBA_PRR11_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR11_RARB.

//! @brief Get value of SPBA_PRR11_RARB from a register value.
#define BG_SPBA_PRR11_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR11_RARB) >> BP_SPBA_PRR11_RARB)

//! @brief Format value for bitfield SPBA_PRR11_RARB.
#define BF_SPBA_PRR11_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR11_RARB) & BM_SPBA_PRR11_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR11_RARB(v)   (HW_SPBA_PRR11_WR((HW_SPBA_PRR11_RD() & ~BM_SPBA_PRR11_RARB) | BF_SPBA_PRR11_RARB(v)))
#endif

#define BV_SPBA_PRR11_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR11_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR11, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR11_RARC      (2)      //!< Bit position for SPBA_PRR11_RARC.
#define BM_SPBA_PRR11_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR11_RARC.

//! @brief Get value of SPBA_PRR11_RARC from a register value.
#define BG_SPBA_PRR11_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR11_RARC) >> BP_SPBA_PRR11_RARC)

//! @brief Format value for bitfield SPBA_PRR11_RARC.
#define BF_SPBA_PRR11_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR11_RARC) & BM_SPBA_PRR11_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR11_RARC(v)   (HW_SPBA_PRR11_WR((HW_SPBA_PRR11_RD() & ~BM_SPBA_PRR11_RARC) | BF_SPBA_PRR11_RARC(v)))
#endif

#define BV_SPBA_PRR11_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR11_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR11, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR11_ROI      (16)      //!< Bit position for SPBA_PRR11_ROI.
#define BM_SPBA_PRR11_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR11_ROI.

//! @brief Get value of SPBA_PRR11_ROI from a register value.
#define BG_SPBA_PRR11_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR11_ROI) >> BP_SPBA_PRR11_ROI)

#define BV_SPBA_PRR11_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR11_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR11_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR11_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR11, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR11_RMO      (30)      //!< Bit position for SPBA_PRR11_RMO.
#define BM_SPBA_PRR11_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR11_RMO.

//! @brief Get value of SPBA_PRR11_RMO from a register value.
#define BG_SPBA_PRR11_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR11_RMO) >> BP_SPBA_PRR11_RMO)

#define BV_SPBA_PRR11_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR11_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR11_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR12 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR12 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr12
{
    reg32_t U;
    struct _hw_spba_prr12_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr12_t;
#endif

/*
 * constants & macros for entire SPBA_PRR12 register
 */
#define HW_SPBA_PRR12_ADDR      (REGS_SPBA_BASE + 0x30)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR12           (*(volatile hw_spba_prr12_t *) HW_SPBA_PRR12_ADDR)
#define HW_SPBA_PRR12_RD()      (HW_SPBA_PRR12.U)
#define HW_SPBA_PRR12_WR(v)     (HW_SPBA_PRR12.U = (v))
#define HW_SPBA_PRR12_SET(v)    (HW_SPBA_PRR12_WR(HW_SPBA_PRR12_RD() |  (v)))
#define HW_SPBA_PRR12_CLR(v)    (HW_SPBA_PRR12_WR(HW_SPBA_PRR12_RD() & ~(v)))
#define HW_SPBA_PRR12_TOG(v)    (HW_SPBA_PRR12_WR(HW_SPBA_PRR12_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR12 bitfields
 */

/* --- Register HW_SPBA_PRR12, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR12_RARA      (0)      //!< Bit position for SPBA_PRR12_RARA.
#define BM_SPBA_PRR12_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR12_RARA.

//! @brief Get value of SPBA_PRR12_RARA from a register value.
#define BG_SPBA_PRR12_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR12_RARA) >> BP_SPBA_PRR12_RARA)

//! @brief Format value for bitfield SPBA_PRR12_RARA.
#define BF_SPBA_PRR12_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR12_RARA) & BM_SPBA_PRR12_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR12_RARA(v)   (HW_SPBA_PRR12_WR((HW_SPBA_PRR12_RD() & ~BM_SPBA_PRR12_RARA) | BF_SPBA_PRR12_RARA(v)))
#endif

#define BV_SPBA_PRR12_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR12_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR12, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR12_RARB      (1)      //!< Bit position for SPBA_PRR12_RARB.
#define BM_SPBA_PRR12_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR12_RARB.

//! @brief Get value of SPBA_PRR12_RARB from a register value.
#define BG_SPBA_PRR12_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR12_RARB) >> BP_SPBA_PRR12_RARB)

//! @brief Format value for bitfield SPBA_PRR12_RARB.
#define BF_SPBA_PRR12_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR12_RARB) & BM_SPBA_PRR12_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR12_RARB(v)   (HW_SPBA_PRR12_WR((HW_SPBA_PRR12_RD() & ~BM_SPBA_PRR12_RARB) | BF_SPBA_PRR12_RARB(v)))
#endif

#define BV_SPBA_PRR12_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR12_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR12, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR12_RARC      (2)      //!< Bit position for SPBA_PRR12_RARC.
#define BM_SPBA_PRR12_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR12_RARC.

//! @brief Get value of SPBA_PRR12_RARC from a register value.
#define BG_SPBA_PRR12_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR12_RARC) >> BP_SPBA_PRR12_RARC)

//! @brief Format value for bitfield SPBA_PRR12_RARC.
#define BF_SPBA_PRR12_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR12_RARC) & BM_SPBA_PRR12_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR12_RARC(v)   (HW_SPBA_PRR12_WR((HW_SPBA_PRR12_RD() & ~BM_SPBA_PRR12_RARC) | BF_SPBA_PRR12_RARC(v)))
#endif

#define BV_SPBA_PRR12_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR12_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR12, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR12_ROI      (16)      //!< Bit position for SPBA_PRR12_ROI.
#define BM_SPBA_PRR12_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR12_ROI.

//! @brief Get value of SPBA_PRR12_ROI from a register value.
#define BG_SPBA_PRR12_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR12_ROI) >> BP_SPBA_PRR12_ROI)

#define BV_SPBA_PRR12_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR12_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR12_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR12_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR12, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR12_RMO      (30)      //!< Bit position for SPBA_PRR12_RMO.
#define BM_SPBA_PRR12_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR12_RMO.

//! @brief Get value of SPBA_PRR12_RMO from a register value.
#define BG_SPBA_PRR12_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR12_RMO) >> BP_SPBA_PRR12_RMO)

#define BV_SPBA_PRR12_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR12_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR12_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR13 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR13 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr13
{
    reg32_t U;
    struct _hw_spba_prr13_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr13_t;
#endif

/*
 * constants & macros for entire SPBA_PRR13 register
 */
#define HW_SPBA_PRR13_ADDR      (REGS_SPBA_BASE + 0x34)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR13           (*(volatile hw_spba_prr13_t *) HW_SPBA_PRR13_ADDR)
#define HW_SPBA_PRR13_RD()      (HW_SPBA_PRR13.U)
#define HW_SPBA_PRR13_WR(v)     (HW_SPBA_PRR13.U = (v))
#define HW_SPBA_PRR13_SET(v)    (HW_SPBA_PRR13_WR(HW_SPBA_PRR13_RD() |  (v)))
#define HW_SPBA_PRR13_CLR(v)    (HW_SPBA_PRR13_WR(HW_SPBA_PRR13_RD() & ~(v)))
#define HW_SPBA_PRR13_TOG(v)    (HW_SPBA_PRR13_WR(HW_SPBA_PRR13_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR13 bitfields
 */

/* --- Register HW_SPBA_PRR13, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR13_RARA      (0)      //!< Bit position for SPBA_PRR13_RARA.
#define BM_SPBA_PRR13_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR13_RARA.

//! @brief Get value of SPBA_PRR13_RARA from a register value.
#define BG_SPBA_PRR13_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR13_RARA) >> BP_SPBA_PRR13_RARA)

//! @brief Format value for bitfield SPBA_PRR13_RARA.
#define BF_SPBA_PRR13_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR13_RARA) & BM_SPBA_PRR13_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR13_RARA(v)   (HW_SPBA_PRR13_WR((HW_SPBA_PRR13_RD() & ~BM_SPBA_PRR13_RARA) | BF_SPBA_PRR13_RARA(v)))
#endif

#define BV_SPBA_PRR13_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR13_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR13, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR13_RARB      (1)      //!< Bit position for SPBA_PRR13_RARB.
#define BM_SPBA_PRR13_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR13_RARB.

//! @brief Get value of SPBA_PRR13_RARB from a register value.
#define BG_SPBA_PRR13_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR13_RARB) >> BP_SPBA_PRR13_RARB)

//! @brief Format value for bitfield SPBA_PRR13_RARB.
#define BF_SPBA_PRR13_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR13_RARB) & BM_SPBA_PRR13_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR13_RARB(v)   (HW_SPBA_PRR13_WR((HW_SPBA_PRR13_RD() & ~BM_SPBA_PRR13_RARB) | BF_SPBA_PRR13_RARB(v)))
#endif

#define BV_SPBA_PRR13_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR13_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR13, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR13_RARC      (2)      //!< Bit position for SPBA_PRR13_RARC.
#define BM_SPBA_PRR13_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR13_RARC.

//! @brief Get value of SPBA_PRR13_RARC from a register value.
#define BG_SPBA_PRR13_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR13_RARC) >> BP_SPBA_PRR13_RARC)

//! @brief Format value for bitfield SPBA_PRR13_RARC.
#define BF_SPBA_PRR13_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR13_RARC) & BM_SPBA_PRR13_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR13_RARC(v)   (HW_SPBA_PRR13_WR((HW_SPBA_PRR13_RD() & ~BM_SPBA_PRR13_RARC) | BF_SPBA_PRR13_RARC(v)))
#endif

#define BV_SPBA_PRR13_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR13_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR13, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR13_ROI      (16)      //!< Bit position for SPBA_PRR13_ROI.
#define BM_SPBA_PRR13_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR13_ROI.

//! @brief Get value of SPBA_PRR13_ROI from a register value.
#define BG_SPBA_PRR13_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR13_ROI) >> BP_SPBA_PRR13_ROI)

#define BV_SPBA_PRR13_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR13_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR13_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR13_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR13, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR13_RMO      (30)      //!< Bit position for SPBA_PRR13_RMO.
#define BM_SPBA_PRR13_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR13_RMO.

//! @brief Get value of SPBA_PRR13_RMO from a register value.
#define BG_SPBA_PRR13_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR13_RMO) >> BP_SPBA_PRR13_RMO)

#define BV_SPBA_PRR13_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR13_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR13_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR14 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR14 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr14
{
    reg32_t U;
    struct _hw_spba_prr14_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr14_t;
#endif

/*
 * constants & macros for entire SPBA_PRR14 register
 */
#define HW_SPBA_PRR14_ADDR      (REGS_SPBA_BASE + 0x38)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR14           (*(volatile hw_spba_prr14_t *) HW_SPBA_PRR14_ADDR)
#define HW_SPBA_PRR14_RD()      (HW_SPBA_PRR14.U)
#define HW_SPBA_PRR14_WR(v)     (HW_SPBA_PRR14.U = (v))
#define HW_SPBA_PRR14_SET(v)    (HW_SPBA_PRR14_WR(HW_SPBA_PRR14_RD() |  (v)))
#define HW_SPBA_PRR14_CLR(v)    (HW_SPBA_PRR14_WR(HW_SPBA_PRR14_RD() & ~(v)))
#define HW_SPBA_PRR14_TOG(v)    (HW_SPBA_PRR14_WR(HW_SPBA_PRR14_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR14 bitfields
 */

/* --- Register HW_SPBA_PRR14, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR14_RARA      (0)      //!< Bit position for SPBA_PRR14_RARA.
#define BM_SPBA_PRR14_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR14_RARA.

//! @brief Get value of SPBA_PRR14_RARA from a register value.
#define BG_SPBA_PRR14_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR14_RARA) >> BP_SPBA_PRR14_RARA)

//! @brief Format value for bitfield SPBA_PRR14_RARA.
#define BF_SPBA_PRR14_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR14_RARA) & BM_SPBA_PRR14_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR14_RARA(v)   (HW_SPBA_PRR14_WR((HW_SPBA_PRR14_RD() & ~BM_SPBA_PRR14_RARA) | BF_SPBA_PRR14_RARA(v)))
#endif

#define BV_SPBA_PRR14_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR14_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR14, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR14_RARB      (1)      //!< Bit position for SPBA_PRR14_RARB.
#define BM_SPBA_PRR14_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR14_RARB.

//! @brief Get value of SPBA_PRR14_RARB from a register value.
#define BG_SPBA_PRR14_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR14_RARB) >> BP_SPBA_PRR14_RARB)

//! @brief Format value for bitfield SPBA_PRR14_RARB.
#define BF_SPBA_PRR14_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR14_RARB) & BM_SPBA_PRR14_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR14_RARB(v)   (HW_SPBA_PRR14_WR((HW_SPBA_PRR14_RD() & ~BM_SPBA_PRR14_RARB) | BF_SPBA_PRR14_RARB(v)))
#endif

#define BV_SPBA_PRR14_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR14_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR14, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR14_RARC      (2)      //!< Bit position for SPBA_PRR14_RARC.
#define BM_SPBA_PRR14_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR14_RARC.

//! @brief Get value of SPBA_PRR14_RARC from a register value.
#define BG_SPBA_PRR14_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR14_RARC) >> BP_SPBA_PRR14_RARC)

//! @brief Format value for bitfield SPBA_PRR14_RARC.
#define BF_SPBA_PRR14_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR14_RARC) & BM_SPBA_PRR14_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR14_RARC(v)   (HW_SPBA_PRR14_WR((HW_SPBA_PRR14_RD() & ~BM_SPBA_PRR14_RARC) | BF_SPBA_PRR14_RARC(v)))
#endif

#define BV_SPBA_PRR14_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR14_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR14, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR14_ROI      (16)      //!< Bit position for SPBA_PRR14_ROI.
#define BM_SPBA_PRR14_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR14_ROI.

//! @brief Get value of SPBA_PRR14_ROI from a register value.
#define BG_SPBA_PRR14_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR14_ROI) >> BP_SPBA_PRR14_ROI)

#define BV_SPBA_PRR14_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR14_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR14_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR14_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR14, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR14_RMO      (30)      //!< Bit position for SPBA_PRR14_RMO.
#define BM_SPBA_PRR14_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR14_RMO.

//! @brief Get value of SPBA_PRR14_RMO from a register value.
#define BG_SPBA_PRR14_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR14_RMO) >> BP_SPBA_PRR14_RMO)

#define BV_SPBA_PRR14_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR14_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR14_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR15 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR15 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr15
{
    reg32_t U;
    struct _hw_spba_prr15_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr15_t;
#endif

/*
 * constants & macros for entire SPBA_PRR15 register
 */
#define HW_SPBA_PRR15_ADDR      (REGS_SPBA_BASE + 0x3c)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR15           (*(volatile hw_spba_prr15_t *) HW_SPBA_PRR15_ADDR)
#define HW_SPBA_PRR15_RD()      (HW_SPBA_PRR15.U)
#define HW_SPBA_PRR15_WR(v)     (HW_SPBA_PRR15.U = (v))
#define HW_SPBA_PRR15_SET(v)    (HW_SPBA_PRR15_WR(HW_SPBA_PRR15_RD() |  (v)))
#define HW_SPBA_PRR15_CLR(v)    (HW_SPBA_PRR15_WR(HW_SPBA_PRR15_RD() & ~(v)))
#define HW_SPBA_PRR15_TOG(v)    (HW_SPBA_PRR15_WR(HW_SPBA_PRR15_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR15 bitfields
 */

/* --- Register HW_SPBA_PRR15, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR15_RARA      (0)      //!< Bit position for SPBA_PRR15_RARA.
#define BM_SPBA_PRR15_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR15_RARA.

//! @brief Get value of SPBA_PRR15_RARA from a register value.
#define BG_SPBA_PRR15_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR15_RARA) >> BP_SPBA_PRR15_RARA)

//! @brief Format value for bitfield SPBA_PRR15_RARA.
#define BF_SPBA_PRR15_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR15_RARA) & BM_SPBA_PRR15_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR15_RARA(v)   (HW_SPBA_PRR15_WR((HW_SPBA_PRR15_RD() & ~BM_SPBA_PRR15_RARA) | BF_SPBA_PRR15_RARA(v)))
#endif

#define BV_SPBA_PRR15_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR15_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR15, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR15_RARB      (1)      //!< Bit position for SPBA_PRR15_RARB.
#define BM_SPBA_PRR15_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR15_RARB.

//! @brief Get value of SPBA_PRR15_RARB from a register value.
#define BG_SPBA_PRR15_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR15_RARB) >> BP_SPBA_PRR15_RARB)

//! @brief Format value for bitfield SPBA_PRR15_RARB.
#define BF_SPBA_PRR15_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR15_RARB) & BM_SPBA_PRR15_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR15_RARB(v)   (HW_SPBA_PRR15_WR((HW_SPBA_PRR15_RD() & ~BM_SPBA_PRR15_RARB) | BF_SPBA_PRR15_RARB(v)))
#endif

#define BV_SPBA_PRR15_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR15_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR15, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR15_RARC      (2)      //!< Bit position for SPBA_PRR15_RARC.
#define BM_SPBA_PRR15_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR15_RARC.

//! @brief Get value of SPBA_PRR15_RARC from a register value.
#define BG_SPBA_PRR15_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR15_RARC) >> BP_SPBA_PRR15_RARC)

//! @brief Format value for bitfield SPBA_PRR15_RARC.
#define BF_SPBA_PRR15_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR15_RARC) & BM_SPBA_PRR15_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR15_RARC(v)   (HW_SPBA_PRR15_WR((HW_SPBA_PRR15_RD() & ~BM_SPBA_PRR15_RARC) | BF_SPBA_PRR15_RARC(v)))
#endif

#define BV_SPBA_PRR15_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR15_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR15, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR15_ROI      (16)      //!< Bit position for SPBA_PRR15_ROI.
#define BM_SPBA_PRR15_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR15_ROI.

//! @brief Get value of SPBA_PRR15_ROI from a register value.
#define BG_SPBA_PRR15_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR15_ROI) >> BP_SPBA_PRR15_ROI)

#define BV_SPBA_PRR15_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR15_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR15_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR15_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR15, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR15_RMO      (30)      //!< Bit position for SPBA_PRR15_RMO.
#define BM_SPBA_PRR15_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR15_RMO.

//! @brief Get value of SPBA_PRR15_RMO from a register value.
#define BG_SPBA_PRR15_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR15_RMO) >> BP_SPBA_PRR15_RMO)

#define BV_SPBA_PRR15_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR15_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR15_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR16 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR16 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr16
{
    reg32_t U;
    struct _hw_spba_prr16_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr16_t;
#endif

/*
 * constants & macros for entire SPBA_PRR16 register
 */
#define HW_SPBA_PRR16_ADDR      (REGS_SPBA_BASE + 0x40)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR16           (*(volatile hw_spba_prr16_t *) HW_SPBA_PRR16_ADDR)
#define HW_SPBA_PRR16_RD()      (HW_SPBA_PRR16.U)
#define HW_SPBA_PRR16_WR(v)     (HW_SPBA_PRR16.U = (v))
#define HW_SPBA_PRR16_SET(v)    (HW_SPBA_PRR16_WR(HW_SPBA_PRR16_RD() |  (v)))
#define HW_SPBA_PRR16_CLR(v)    (HW_SPBA_PRR16_WR(HW_SPBA_PRR16_RD() & ~(v)))
#define HW_SPBA_PRR16_TOG(v)    (HW_SPBA_PRR16_WR(HW_SPBA_PRR16_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR16 bitfields
 */

/* --- Register HW_SPBA_PRR16, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR16_RARA      (0)      //!< Bit position for SPBA_PRR16_RARA.
#define BM_SPBA_PRR16_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR16_RARA.

//! @brief Get value of SPBA_PRR16_RARA from a register value.
#define BG_SPBA_PRR16_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR16_RARA) >> BP_SPBA_PRR16_RARA)

//! @brief Format value for bitfield SPBA_PRR16_RARA.
#define BF_SPBA_PRR16_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR16_RARA) & BM_SPBA_PRR16_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR16_RARA(v)   (HW_SPBA_PRR16_WR((HW_SPBA_PRR16_RD() & ~BM_SPBA_PRR16_RARA) | BF_SPBA_PRR16_RARA(v)))
#endif

#define BV_SPBA_PRR16_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR16_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR16, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR16_RARB      (1)      //!< Bit position for SPBA_PRR16_RARB.
#define BM_SPBA_PRR16_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR16_RARB.

//! @brief Get value of SPBA_PRR16_RARB from a register value.
#define BG_SPBA_PRR16_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR16_RARB) >> BP_SPBA_PRR16_RARB)

//! @brief Format value for bitfield SPBA_PRR16_RARB.
#define BF_SPBA_PRR16_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR16_RARB) & BM_SPBA_PRR16_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR16_RARB(v)   (HW_SPBA_PRR16_WR((HW_SPBA_PRR16_RD() & ~BM_SPBA_PRR16_RARB) | BF_SPBA_PRR16_RARB(v)))
#endif

#define BV_SPBA_PRR16_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR16_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR16, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR16_RARC      (2)      //!< Bit position for SPBA_PRR16_RARC.
#define BM_SPBA_PRR16_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR16_RARC.

//! @brief Get value of SPBA_PRR16_RARC from a register value.
#define BG_SPBA_PRR16_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR16_RARC) >> BP_SPBA_PRR16_RARC)

//! @brief Format value for bitfield SPBA_PRR16_RARC.
#define BF_SPBA_PRR16_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR16_RARC) & BM_SPBA_PRR16_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR16_RARC(v)   (HW_SPBA_PRR16_WR((HW_SPBA_PRR16_RD() & ~BM_SPBA_PRR16_RARC) | BF_SPBA_PRR16_RARC(v)))
#endif

#define BV_SPBA_PRR16_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR16_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR16, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR16_ROI      (16)      //!< Bit position for SPBA_PRR16_ROI.
#define BM_SPBA_PRR16_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR16_ROI.

//! @brief Get value of SPBA_PRR16_ROI from a register value.
#define BG_SPBA_PRR16_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR16_ROI) >> BP_SPBA_PRR16_ROI)

#define BV_SPBA_PRR16_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR16_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR16_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR16_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR16, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR16_RMO      (30)      //!< Bit position for SPBA_PRR16_RMO.
#define BM_SPBA_PRR16_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR16_RMO.

//! @brief Get value of SPBA_PRR16_RMO from a register value.
#define BG_SPBA_PRR16_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR16_RMO) >> BP_SPBA_PRR16_RMO)

#define BV_SPBA_PRR16_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR16_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR16_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR17 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR17 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr17
{
    reg32_t U;
    struct _hw_spba_prr17_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr17_t;
#endif

/*
 * constants & macros for entire SPBA_PRR17 register
 */
#define HW_SPBA_PRR17_ADDR      (REGS_SPBA_BASE + 0x44)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR17           (*(volatile hw_spba_prr17_t *) HW_SPBA_PRR17_ADDR)
#define HW_SPBA_PRR17_RD()      (HW_SPBA_PRR17.U)
#define HW_SPBA_PRR17_WR(v)     (HW_SPBA_PRR17.U = (v))
#define HW_SPBA_PRR17_SET(v)    (HW_SPBA_PRR17_WR(HW_SPBA_PRR17_RD() |  (v)))
#define HW_SPBA_PRR17_CLR(v)    (HW_SPBA_PRR17_WR(HW_SPBA_PRR17_RD() & ~(v)))
#define HW_SPBA_PRR17_TOG(v)    (HW_SPBA_PRR17_WR(HW_SPBA_PRR17_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR17 bitfields
 */

/* --- Register HW_SPBA_PRR17, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR17_RARA      (0)      //!< Bit position for SPBA_PRR17_RARA.
#define BM_SPBA_PRR17_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR17_RARA.

//! @brief Get value of SPBA_PRR17_RARA from a register value.
#define BG_SPBA_PRR17_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR17_RARA) >> BP_SPBA_PRR17_RARA)

//! @brief Format value for bitfield SPBA_PRR17_RARA.
#define BF_SPBA_PRR17_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR17_RARA) & BM_SPBA_PRR17_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR17_RARA(v)   (HW_SPBA_PRR17_WR((HW_SPBA_PRR17_RD() & ~BM_SPBA_PRR17_RARA) | BF_SPBA_PRR17_RARA(v)))
#endif

#define BV_SPBA_PRR17_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR17_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR17, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR17_RARB      (1)      //!< Bit position for SPBA_PRR17_RARB.
#define BM_SPBA_PRR17_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR17_RARB.

//! @brief Get value of SPBA_PRR17_RARB from a register value.
#define BG_SPBA_PRR17_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR17_RARB) >> BP_SPBA_PRR17_RARB)

//! @brief Format value for bitfield SPBA_PRR17_RARB.
#define BF_SPBA_PRR17_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR17_RARB) & BM_SPBA_PRR17_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR17_RARB(v)   (HW_SPBA_PRR17_WR((HW_SPBA_PRR17_RD() & ~BM_SPBA_PRR17_RARB) | BF_SPBA_PRR17_RARB(v)))
#endif

#define BV_SPBA_PRR17_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR17_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR17, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR17_RARC      (2)      //!< Bit position for SPBA_PRR17_RARC.
#define BM_SPBA_PRR17_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR17_RARC.

//! @brief Get value of SPBA_PRR17_RARC from a register value.
#define BG_SPBA_PRR17_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR17_RARC) >> BP_SPBA_PRR17_RARC)

//! @brief Format value for bitfield SPBA_PRR17_RARC.
#define BF_SPBA_PRR17_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR17_RARC) & BM_SPBA_PRR17_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR17_RARC(v)   (HW_SPBA_PRR17_WR((HW_SPBA_PRR17_RD() & ~BM_SPBA_PRR17_RARC) | BF_SPBA_PRR17_RARC(v)))
#endif

#define BV_SPBA_PRR17_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR17_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR17, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR17_ROI      (16)      //!< Bit position for SPBA_PRR17_ROI.
#define BM_SPBA_PRR17_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR17_ROI.

//! @brief Get value of SPBA_PRR17_ROI from a register value.
#define BG_SPBA_PRR17_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR17_ROI) >> BP_SPBA_PRR17_ROI)

#define BV_SPBA_PRR17_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR17_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR17_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR17_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR17, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR17_RMO      (30)      //!< Bit position for SPBA_PRR17_RMO.
#define BM_SPBA_PRR17_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR17_RMO.

//! @brief Get value of SPBA_PRR17_RMO from a register value.
#define BG_SPBA_PRR17_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR17_RMO) >> BP_SPBA_PRR17_RMO)

#define BV_SPBA_PRR17_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR17_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR17_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR18 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR18 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr18
{
    reg32_t U;
    struct _hw_spba_prr18_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr18_t;
#endif

/*
 * constants & macros for entire SPBA_PRR18 register
 */
#define HW_SPBA_PRR18_ADDR      (REGS_SPBA_BASE + 0x48)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR18           (*(volatile hw_spba_prr18_t *) HW_SPBA_PRR18_ADDR)
#define HW_SPBA_PRR18_RD()      (HW_SPBA_PRR18.U)
#define HW_SPBA_PRR18_WR(v)     (HW_SPBA_PRR18.U = (v))
#define HW_SPBA_PRR18_SET(v)    (HW_SPBA_PRR18_WR(HW_SPBA_PRR18_RD() |  (v)))
#define HW_SPBA_PRR18_CLR(v)    (HW_SPBA_PRR18_WR(HW_SPBA_PRR18_RD() & ~(v)))
#define HW_SPBA_PRR18_TOG(v)    (HW_SPBA_PRR18_WR(HW_SPBA_PRR18_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR18 bitfields
 */

/* --- Register HW_SPBA_PRR18, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR18_RARA      (0)      //!< Bit position for SPBA_PRR18_RARA.
#define BM_SPBA_PRR18_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR18_RARA.

//! @brief Get value of SPBA_PRR18_RARA from a register value.
#define BG_SPBA_PRR18_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR18_RARA) >> BP_SPBA_PRR18_RARA)

//! @brief Format value for bitfield SPBA_PRR18_RARA.
#define BF_SPBA_PRR18_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR18_RARA) & BM_SPBA_PRR18_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR18_RARA(v)   (HW_SPBA_PRR18_WR((HW_SPBA_PRR18_RD() & ~BM_SPBA_PRR18_RARA) | BF_SPBA_PRR18_RARA(v)))
#endif

#define BV_SPBA_PRR18_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR18_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR18, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR18_RARB      (1)      //!< Bit position for SPBA_PRR18_RARB.
#define BM_SPBA_PRR18_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR18_RARB.

//! @brief Get value of SPBA_PRR18_RARB from a register value.
#define BG_SPBA_PRR18_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR18_RARB) >> BP_SPBA_PRR18_RARB)

//! @brief Format value for bitfield SPBA_PRR18_RARB.
#define BF_SPBA_PRR18_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR18_RARB) & BM_SPBA_PRR18_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR18_RARB(v)   (HW_SPBA_PRR18_WR((HW_SPBA_PRR18_RD() & ~BM_SPBA_PRR18_RARB) | BF_SPBA_PRR18_RARB(v)))
#endif

#define BV_SPBA_PRR18_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR18_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR18, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR18_RARC      (2)      //!< Bit position for SPBA_PRR18_RARC.
#define BM_SPBA_PRR18_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR18_RARC.

//! @brief Get value of SPBA_PRR18_RARC from a register value.
#define BG_SPBA_PRR18_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR18_RARC) >> BP_SPBA_PRR18_RARC)

//! @brief Format value for bitfield SPBA_PRR18_RARC.
#define BF_SPBA_PRR18_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR18_RARC) & BM_SPBA_PRR18_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR18_RARC(v)   (HW_SPBA_PRR18_WR((HW_SPBA_PRR18_RD() & ~BM_SPBA_PRR18_RARC) | BF_SPBA_PRR18_RARC(v)))
#endif

#define BV_SPBA_PRR18_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR18_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR18, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR18_ROI      (16)      //!< Bit position for SPBA_PRR18_ROI.
#define BM_SPBA_PRR18_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR18_ROI.

//! @brief Get value of SPBA_PRR18_ROI from a register value.
#define BG_SPBA_PRR18_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR18_ROI) >> BP_SPBA_PRR18_ROI)

#define BV_SPBA_PRR18_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR18_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR18_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR18_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR18, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR18_RMO      (30)      //!< Bit position for SPBA_PRR18_RMO.
#define BM_SPBA_PRR18_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR18_RMO.

//! @brief Get value of SPBA_PRR18_RMO from a register value.
#define BG_SPBA_PRR18_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR18_RMO) >> BP_SPBA_PRR18_RMO)

#define BV_SPBA_PRR18_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR18_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR18_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR19 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR19 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr19
{
    reg32_t U;
    struct _hw_spba_prr19_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr19_t;
#endif

/*
 * constants & macros for entire SPBA_PRR19 register
 */
#define HW_SPBA_PRR19_ADDR      (REGS_SPBA_BASE + 0x4c)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR19           (*(volatile hw_spba_prr19_t *) HW_SPBA_PRR19_ADDR)
#define HW_SPBA_PRR19_RD()      (HW_SPBA_PRR19.U)
#define HW_SPBA_PRR19_WR(v)     (HW_SPBA_PRR19.U = (v))
#define HW_SPBA_PRR19_SET(v)    (HW_SPBA_PRR19_WR(HW_SPBA_PRR19_RD() |  (v)))
#define HW_SPBA_PRR19_CLR(v)    (HW_SPBA_PRR19_WR(HW_SPBA_PRR19_RD() & ~(v)))
#define HW_SPBA_PRR19_TOG(v)    (HW_SPBA_PRR19_WR(HW_SPBA_PRR19_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR19 bitfields
 */

/* --- Register HW_SPBA_PRR19, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR19_RARA      (0)      //!< Bit position for SPBA_PRR19_RARA.
#define BM_SPBA_PRR19_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR19_RARA.

//! @brief Get value of SPBA_PRR19_RARA from a register value.
#define BG_SPBA_PRR19_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR19_RARA) >> BP_SPBA_PRR19_RARA)

//! @brief Format value for bitfield SPBA_PRR19_RARA.
#define BF_SPBA_PRR19_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR19_RARA) & BM_SPBA_PRR19_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR19_RARA(v)   (HW_SPBA_PRR19_WR((HW_SPBA_PRR19_RD() & ~BM_SPBA_PRR19_RARA) | BF_SPBA_PRR19_RARA(v)))
#endif

#define BV_SPBA_PRR19_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR19_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR19, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR19_RARB      (1)      //!< Bit position for SPBA_PRR19_RARB.
#define BM_SPBA_PRR19_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR19_RARB.

//! @brief Get value of SPBA_PRR19_RARB from a register value.
#define BG_SPBA_PRR19_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR19_RARB) >> BP_SPBA_PRR19_RARB)

//! @brief Format value for bitfield SPBA_PRR19_RARB.
#define BF_SPBA_PRR19_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR19_RARB) & BM_SPBA_PRR19_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR19_RARB(v)   (HW_SPBA_PRR19_WR((HW_SPBA_PRR19_RD() & ~BM_SPBA_PRR19_RARB) | BF_SPBA_PRR19_RARB(v)))
#endif

#define BV_SPBA_PRR19_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR19_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR19, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR19_RARC      (2)      //!< Bit position for SPBA_PRR19_RARC.
#define BM_SPBA_PRR19_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR19_RARC.

//! @brief Get value of SPBA_PRR19_RARC from a register value.
#define BG_SPBA_PRR19_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR19_RARC) >> BP_SPBA_PRR19_RARC)

//! @brief Format value for bitfield SPBA_PRR19_RARC.
#define BF_SPBA_PRR19_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR19_RARC) & BM_SPBA_PRR19_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR19_RARC(v)   (HW_SPBA_PRR19_WR((HW_SPBA_PRR19_RD() & ~BM_SPBA_PRR19_RARC) | BF_SPBA_PRR19_RARC(v)))
#endif

#define BV_SPBA_PRR19_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR19_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR19, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR19_ROI      (16)      //!< Bit position for SPBA_PRR19_ROI.
#define BM_SPBA_PRR19_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR19_ROI.

//! @brief Get value of SPBA_PRR19_ROI from a register value.
#define BG_SPBA_PRR19_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR19_ROI) >> BP_SPBA_PRR19_ROI)

#define BV_SPBA_PRR19_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR19_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR19_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR19_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR19, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR19_RMO      (30)      //!< Bit position for SPBA_PRR19_RMO.
#define BM_SPBA_PRR19_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR19_RMO.

//! @brief Get value of SPBA_PRR19_RMO from a register value.
#define BG_SPBA_PRR19_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR19_RMO) >> BP_SPBA_PRR19_RMO)

#define BV_SPBA_PRR19_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR19_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR19_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR20 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR20 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr20
{
    reg32_t U;
    struct _hw_spba_prr20_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr20_t;
#endif

/*
 * constants & macros for entire SPBA_PRR20 register
 */
#define HW_SPBA_PRR20_ADDR      (REGS_SPBA_BASE + 0x50)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR20           (*(volatile hw_spba_prr20_t *) HW_SPBA_PRR20_ADDR)
#define HW_SPBA_PRR20_RD()      (HW_SPBA_PRR20.U)
#define HW_SPBA_PRR20_WR(v)     (HW_SPBA_PRR20.U = (v))
#define HW_SPBA_PRR20_SET(v)    (HW_SPBA_PRR20_WR(HW_SPBA_PRR20_RD() |  (v)))
#define HW_SPBA_PRR20_CLR(v)    (HW_SPBA_PRR20_WR(HW_SPBA_PRR20_RD() & ~(v)))
#define HW_SPBA_PRR20_TOG(v)    (HW_SPBA_PRR20_WR(HW_SPBA_PRR20_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR20 bitfields
 */

/* --- Register HW_SPBA_PRR20, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR20_RARA      (0)      //!< Bit position for SPBA_PRR20_RARA.
#define BM_SPBA_PRR20_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR20_RARA.

//! @brief Get value of SPBA_PRR20_RARA from a register value.
#define BG_SPBA_PRR20_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR20_RARA) >> BP_SPBA_PRR20_RARA)

//! @brief Format value for bitfield SPBA_PRR20_RARA.
#define BF_SPBA_PRR20_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR20_RARA) & BM_SPBA_PRR20_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR20_RARA(v)   (HW_SPBA_PRR20_WR((HW_SPBA_PRR20_RD() & ~BM_SPBA_PRR20_RARA) | BF_SPBA_PRR20_RARA(v)))
#endif

#define BV_SPBA_PRR20_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR20_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR20, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR20_RARB      (1)      //!< Bit position for SPBA_PRR20_RARB.
#define BM_SPBA_PRR20_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR20_RARB.

//! @brief Get value of SPBA_PRR20_RARB from a register value.
#define BG_SPBA_PRR20_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR20_RARB) >> BP_SPBA_PRR20_RARB)

//! @brief Format value for bitfield SPBA_PRR20_RARB.
#define BF_SPBA_PRR20_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR20_RARB) & BM_SPBA_PRR20_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR20_RARB(v)   (HW_SPBA_PRR20_WR((HW_SPBA_PRR20_RD() & ~BM_SPBA_PRR20_RARB) | BF_SPBA_PRR20_RARB(v)))
#endif

#define BV_SPBA_PRR20_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR20_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR20, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR20_RARC      (2)      //!< Bit position for SPBA_PRR20_RARC.
#define BM_SPBA_PRR20_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR20_RARC.

//! @brief Get value of SPBA_PRR20_RARC from a register value.
#define BG_SPBA_PRR20_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR20_RARC) >> BP_SPBA_PRR20_RARC)

//! @brief Format value for bitfield SPBA_PRR20_RARC.
#define BF_SPBA_PRR20_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR20_RARC) & BM_SPBA_PRR20_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR20_RARC(v)   (HW_SPBA_PRR20_WR((HW_SPBA_PRR20_RD() & ~BM_SPBA_PRR20_RARC) | BF_SPBA_PRR20_RARC(v)))
#endif

#define BV_SPBA_PRR20_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR20_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR20, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR20_ROI      (16)      //!< Bit position for SPBA_PRR20_ROI.
#define BM_SPBA_PRR20_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR20_ROI.

//! @brief Get value of SPBA_PRR20_ROI from a register value.
#define BG_SPBA_PRR20_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR20_ROI) >> BP_SPBA_PRR20_ROI)

#define BV_SPBA_PRR20_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR20_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR20_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR20_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR20, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR20_RMO      (30)      //!< Bit position for SPBA_PRR20_RMO.
#define BM_SPBA_PRR20_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR20_RMO.

//! @brief Get value of SPBA_PRR20_RMO from a register value.
#define BG_SPBA_PRR20_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR20_RMO) >> BP_SPBA_PRR20_RMO)

#define BV_SPBA_PRR20_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR20_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR20_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR21 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR21 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr21
{
    reg32_t U;
    struct _hw_spba_prr21_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr21_t;
#endif

/*
 * constants & macros for entire SPBA_PRR21 register
 */
#define HW_SPBA_PRR21_ADDR      (REGS_SPBA_BASE + 0x54)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR21           (*(volatile hw_spba_prr21_t *) HW_SPBA_PRR21_ADDR)
#define HW_SPBA_PRR21_RD()      (HW_SPBA_PRR21.U)
#define HW_SPBA_PRR21_WR(v)     (HW_SPBA_PRR21.U = (v))
#define HW_SPBA_PRR21_SET(v)    (HW_SPBA_PRR21_WR(HW_SPBA_PRR21_RD() |  (v)))
#define HW_SPBA_PRR21_CLR(v)    (HW_SPBA_PRR21_WR(HW_SPBA_PRR21_RD() & ~(v)))
#define HW_SPBA_PRR21_TOG(v)    (HW_SPBA_PRR21_WR(HW_SPBA_PRR21_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR21 bitfields
 */

/* --- Register HW_SPBA_PRR21, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR21_RARA      (0)      //!< Bit position for SPBA_PRR21_RARA.
#define BM_SPBA_PRR21_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR21_RARA.

//! @brief Get value of SPBA_PRR21_RARA from a register value.
#define BG_SPBA_PRR21_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR21_RARA) >> BP_SPBA_PRR21_RARA)

//! @brief Format value for bitfield SPBA_PRR21_RARA.
#define BF_SPBA_PRR21_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR21_RARA) & BM_SPBA_PRR21_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR21_RARA(v)   (HW_SPBA_PRR21_WR((HW_SPBA_PRR21_RD() & ~BM_SPBA_PRR21_RARA) | BF_SPBA_PRR21_RARA(v)))
#endif

#define BV_SPBA_PRR21_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR21_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR21, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR21_RARB      (1)      //!< Bit position for SPBA_PRR21_RARB.
#define BM_SPBA_PRR21_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR21_RARB.

//! @brief Get value of SPBA_PRR21_RARB from a register value.
#define BG_SPBA_PRR21_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR21_RARB) >> BP_SPBA_PRR21_RARB)

//! @brief Format value for bitfield SPBA_PRR21_RARB.
#define BF_SPBA_PRR21_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR21_RARB) & BM_SPBA_PRR21_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR21_RARB(v)   (HW_SPBA_PRR21_WR((HW_SPBA_PRR21_RD() & ~BM_SPBA_PRR21_RARB) | BF_SPBA_PRR21_RARB(v)))
#endif

#define BV_SPBA_PRR21_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR21_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR21, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR21_RARC      (2)      //!< Bit position for SPBA_PRR21_RARC.
#define BM_SPBA_PRR21_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR21_RARC.

//! @brief Get value of SPBA_PRR21_RARC from a register value.
#define BG_SPBA_PRR21_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR21_RARC) >> BP_SPBA_PRR21_RARC)

//! @brief Format value for bitfield SPBA_PRR21_RARC.
#define BF_SPBA_PRR21_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR21_RARC) & BM_SPBA_PRR21_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR21_RARC(v)   (HW_SPBA_PRR21_WR((HW_SPBA_PRR21_RD() & ~BM_SPBA_PRR21_RARC) | BF_SPBA_PRR21_RARC(v)))
#endif

#define BV_SPBA_PRR21_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR21_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR21, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR21_ROI      (16)      //!< Bit position for SPBA_PRR21_ROI.
#define BM_SPBA_PRR21_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR21_ROI.

//! @brief Get value of SPBA_PRR21_ROI from a register value.
#define BG_SPBA_PRR21_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR21_ROI) >> BP_SPBA_PRR21_ROI)

#define BV_SPBA_PRR21_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR21_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR21_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR21_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR21, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR21_RMO      (30)      //!< Bit position for SPBA_PRR21_RMO.
#define BM_SPBA_PRR21_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR21_RMO.

//! @brief Get value of SPBA_PRR21_RMO from a register value.
#define BG_SPBA_PRR21_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR21_RMO) >> BP_SPBA_PRR21_RMO)

#define BV_SPBA_PRR21_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR21_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR21_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR22 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR22 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr22
{
    reg32_t U;
    struct _hw_spba_prr22_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr22_t;
#endif

/*
 * constants & macros for entire SPBA_PRR22 register
 */
#define HW_SPBA_PRR22_ADDR      (REGS_SPBA_BASE + 0x58)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR22           (*(volatile hw_spba_prr22_t *) HW_SPBA_PRR22_ADDR)
#define HW_SPBA_PRR22_RD()      (HW_SPBA_PRR22.U)
#define HW_SPBA_PRR22_WR(v)     (HW_SPBA_PRR22.U = (v))
#define HW_SPBA_PRR22_SET(v)    (HW_SPBA_PRR22_WR(HW_SPBA_PRR22_RD() |  (v)))
#define HW_SPBA_PRR22_CLR(v)    (HW_SPBA_PRR22_WR(HW_SPBA_PRR22_RD() & ~(v)))
#define HW_SPBA_PRR22_TOG(v)    (HW_SPBA_PRR22_WR(HW_SPBA_PRR22_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR22 bitfields
 */

/* --- Register HW_SPBA_PRR22, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR22_RARA      (0)      //!< Bit position for SPBA_PRR22_RARA.
#define BM_SPBA_PRR22_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR22_RARA.

//! @brief Get value of SPBA_PRR22_RARA from a register value.
#define BG_SPBA_PRR22_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR22_RARA) >> BP_SPBA_PRR22_RARA)

//! @brief Format value for bitfield SPBA_PRR22_RARA.
#define BF_SPBA_PRR22_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR22_RARA) & BM_SPBA_PRR22_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR22_RARA(v)   (HW_SPBA_PRR22_WR((HW_SPBA_PRR22_RD() & ~BM_SPBA_PRR22_RARA) | BF_SPBA_PRR22_RARA(v)))
#endif

#define BV_SPBA_PRR22_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR22_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR22, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR22_RARB      (1)      //!< Bit position for SPBA_PRR22_RARB.
#define BM_SPBA_PRR22_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR22_RARB.

//! @brief Get value of SPBA_PRR22_RARB from a register value.
#define BG_SPBA_PRR22_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR22_RARB) >> BP_SPBA_PRR22_RARB)

//! @brief Format value for bitfield SPBA_PRR22_RARB.
#define BF_SPBA_PRR22_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR22_RARB) & BM_SPBA_PRR22_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR22_RARB(v)   (HW_SPBA_PRR22_WR((HW_SPBA_PRR22_RD() & ~BM_SPBA_PRR22_RARB) | BF_SPBA_PRR22_RARB(v)))
#endif

#define BV_SPBA_PRR22_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR22_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR22, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR22_RARC      (2)      //!< Bit position for SPBA_PRR22_RARC.
#define BM_SPBA_PRR22_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR22_RARC.

//! @brief Get value of SPBA_PRR22_RARC from a register value.
#define BG_SPBA_PRR22_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR22_RARC) >> BP_SPBA_PRR22_RARC)

//! @brief Format value for bitfield SPBA_PRR22_RARC.
#define BF_SPBA_PRR22_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR22_RARC) & BM_SPBA_PRR22_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR22_RARC(v)   (HW_SPBA_PRR22_WR((HW_SPBA_PRR22_RD() & ~BM_SPBA_PRR22_RARC) | BF_SPBA_PRR22_RARC(v)))
#endif

#define BV_SPBA_PRR22_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR22_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR22, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR22_ROI      (16)      //!< Bit position for SPBA_PRR22_ROI.
#define BM_SPBA_PRR22_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR22_ROI.

//! @brief Get value of SPBA_PRR22_ROI from a register value.
#define BG_SPBA_PRR22_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR22_ROI) >> BP_SPBA_PRR22_ROI)

#define BV_SPBA_PRR22_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR22_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR22_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR22_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR22, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR22_RMO      (30)      //!< Bit position for SPBA_PRR22_RMO.
#define BM_SPBA_PRR22_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR22_RMO.

//! @brief Get value of SPBA_PRR22_RMO from a register value.
#define BG_SPBA_PRR22_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR22_RMO) >> BP_SPBA_PRR22_RMO)

#define BV_SPBA_PRR22_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR22_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR22_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR23 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR23 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr23
{
    reg32_t U;
    struct _hw_spba_prr23_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr23_t;
#endif

/*
 * constants & macros for entire SPBA_PRR23 register
 */
#define HW_SPBA_PRR23_ADDR      (REGS_SPBA_BASE + 0x5c)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR23           (*(volatile hw_spba_prr23_t *) HW_SPBA_PRR23_ADDR)
#define HW_SPBA_PRR23_RD()      (HW_SPBA_PRR23.U)
#define HW_SPBA_PRR23_WR(v)     (HW_SPBA_PRR23.U = (v))
#define HW_SPBA_PRR23_SET(v)    (HW_SPBA_PRR23_WR(HW_SPBA_PRR23_RD() |  (v)))
#define HW_SPBA_PRR23_CLR(v)    (HW_SPBA_PRR23_WR(HW_SPBA_PRR23_RD() & ~(v)))
#define HW_SPBA_PRR23_TOG(v)    (HW_SPBA_PRR23_WR(HW_SPBA_PRR23_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR23 bitfields
 */

/* --- Register HW_SPBA_PRR23, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR23_RARA      (0)      //!< Bit position for SPBA_PRR23_RARA.
#define BM_SPBA_PRR23_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR23_RARA.

//! @brief Get value of SPBA_PRR23_RARA from a register value.
#define BG_SPBA_PRR23_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR23_RARA) >> BP_SPBA_PRR23_RARA)

//! @brief Format value for bitfield SPBA_PRR23_RARA.
#define BF_SPBA_PRR23_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR23_RARA) & BM_SPBA_PRR23_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR23_RARA(v)   (HW_SPBA_PRR23_WR((HW_SPBA_PRR23_RD() & ~BM_SPBA_PRR23_RARA) | BF_SPBA_PRR23_RARA(v)))
#endif

#define BV_SPBA_PRR23_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR23_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR23, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR23_RARB      (1)      //!< Bit position for SPBA_PRR23_RARB.
#define BM_SPBA_PRR23_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR23_RARB.

//! @brief Get value of SPBA_PRR23_RARB from a register value.
#define BG_SPBA_PRR23_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR23_RARB) >> BP_SPBA_PRR23_RARB)

//! @brief Format value for bitfield SPBA_PRR23_RARB.
#define BF_SPBA_PRR23_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR23_RARB) & BM_SPBA_PRR23_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR23_RARB(v)   (HW_SPBA_PRR23_WR((HW_SPBA_PRR23_RD() & ~BM_SPBA_PRR23_RARB) | BF_SPBA_PRR23_RARB(v)))
#endif

#define BV_SPBA_PRR23_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR23_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR23, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR23_RARC      (2)      //!< Bit position for SPBA_PRR23_RARC.
#define BM_SPBA_PRR23_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR23_RARC.

//! @brief Get value of SPBA_PRR23_RARC from a register value.
#define BG_SPBA_PRR23_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR23_RARC) >> BP_SPBA_PRR23_RARC)

//! @brief Format value for bitfield SPBA_PRR23_RARC.
#define BF_SPBA_PRR23_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR23_RARC) & BM_SPBA_PRR23_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR23_RARC(v)   (HW_SPBA_PRR23_WR((HW_SPBA_PRR23_RD() & ~BM_SPBA_PRR23_RARC) | BF_SPBA_PRR23_RARC(v)))
#endif

#define BV_SPBA_PRR23_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR23_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR23, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR23_ROI      (16)      //!< Bit position for SPBA_PRR23_ROI.
#define BM_SPBA_PRR23_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR23_ROI.

//! @brief Get value of SPBA_PRR23_ROI from a register value.
#define BG_SPBA_PRR23_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR23_ROI) >> BP_SPBA_PRR23_ROI)

#define BV_SPBA_PRR23_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR23_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR23_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR23_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR23, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR23_RMO      (30)      //!< Bit position for SPBA_PRR23_RMO.
#define BM_SPBA_PRR23_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR23_RMO.

//! @brief Get value of SPBA_PRR23_RMO from a register value.
#define BG_SPBA_PRR23_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR23_RMO) >> BP_SPBA_PRR23_RMO)

#define BV_SPBA_PRR23_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR23_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR23_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR24 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR24 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr24
{
    reg32_t U;
    struct _hw_spba_prr24_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr24_t;
#endif

/*
 * constants & macros for entire SPBA_PRR24 register
 */
#define HW_SPBA_PRR24_ADDR      (REGS_SPBA_BASE + 0x60)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR24           (*(volatile hw_spba_prr24_t *) HW_SPBA_PRR24_ADDR)
#define HW_SPBA_PRR24_RD()      (HW_SPBA_PRR24.U)
#define HW_SPBA_PRR24_WR(v)     (HW_SPBA_PRR24.U = (v))
#define HW_SPBA_PRR24_SET(v)    (HW_SPBA_PRR24_WR(HW_SPBA_PRR24_RD() |  (v)))
#define HW_SPBA_PRR24_CLR(v)    (HW_SPBA_PRR24_WR(HW_SPBA_PRR24_RD() & ~(v)))
#define HW_SPBA_PRR24_TOG(v)    (HW_SPBA_PRR24_WR(HW_SPBA_PRR24_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR24 bitfields
 */

/* --- Register HW_SPBA_PRR24, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR24_RARA      (0)      //!< Bit position for SPBA_PRR24_RARA.
#define BM_SPBA_PRR24_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR24_RARA.

//! @brief Get value of SPBA_PRR24_RARA from a register value.
#define BG_SPBA_PRR24_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR24_RARA) >> BP_SPBA_PRR24_RARA)

//! @brief Format value for bitfield SPBA_PRR24_RARA.
#define BF_SPBA_PRR24_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR24_RARA) & BM_SPBA_PRR24_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR24_RARA(v)   (HW_SPBA_PRR24_WR((HW_SPBA_PRR24_RD() & ~BM_SPBA_PRR24_RARA) | BF_SPBA_PRR24_RARA(v)))
#endif

#define BV_SPBA_PRR24_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR24_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR24, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR24_RARB      (1)      //!< Bit position for SPBA_PRR24_RARB.
#define BM_SPBA_PRR24_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR24_RARB.

//! @brief Get value of SPBA_PRR24_RARB from a register value.
#define BG_SPBA_PRR24_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR24_RARB) >> BP_SPBA_PRR24_RARB)

//! @brief Format value for bitfield SPBA_PRR24_RARB.
#define BF_SPBA_PRR24_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR24_RARB) & BM_SPBA_PRR24_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR24_RARB(v)   (HW_SPBA_PRR24_WR((HW_SPBA_PRR24_RD() & ~BM_SPBA_PRR24_RARB) | BF_SPBA_PRR24_RARB(v)))
#endif

#define BV_SPBA_PRR24_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR24_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR24, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR24_RARC      (2)      //!< Bit position for SPBA_PRR24_RARC.
#define BM_SPBA_PRR24_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR24_RARC.

//! @brief Get value of SPBA_PRR24_RARC from a register value.
#define BG_SPBA_PRR24_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR24_RARC) >> BP_SPBA_PRR24_RARC)

//! @brief Format value for bitfield SPBA_PRR24_RARC.
#define BF_SPBA_PRR24_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR24_RARC) & BM_SPBA_PRR24_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR24_RARC(v)   (HW_SPBA_PRR24_WR((HW_SPBA_PRR24_RD() & ~BM_SPBA_PRR24_RARC) | BF_SPBA_PRR24_RARC(v)))
#endif

#define BV_SPBA_PRR24_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR24_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR24, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR24_ROI      (16)      //!< Bit position for SPBA_PRR24_ROI.
#define BM_SPBA_PRR24_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR24_ROI.

//! @brief Get value of SPBA_PRR24_ROI from a register value.
#define BG_SPBA_PRR24_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR24_ROI) >> BP_SPBA_PRR24_ROI)

#define BV_SPBA_PRR24_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR24_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR24_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR24_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR24, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR24_RMO      (30)      //!< Bit position for SPBA_PRR24_RMO.
#define BM_SPBA_PRR24_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR24_RMO.

//! @brief Get value of SPBA_PRR24_RMO from a register value.
#define BG_SPBA_PRR24_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR24_RMO) >> BP_SPBA_PRR24_RMO)

#define BV_SPBA_PRR24_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR24_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR24_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR25 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR25 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr25
{
    reg32_t U;
    struct _hw_spba_prr25_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr25_t;
#endif

/*
 * constants & macros for entire SPBA_PRR25 register
 */
#define HW_SPBA_PRR25_ADDR      (REGS_SPBA_BASE + 0x64)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR25           (*(volatile hw_spba_prr25_t *) HW_SPBA_PRR25_ADDR)
#define HW_SPBA_PRR25_RD()      (HW_SPBA_PRR25.U)
#define HW_SPBA_PRR25_WR(v)     (HW_SPBA_PRR25.U = (v))
#define HW_SPBA_PRR25_SET(v)    (HW_SPBA_PRR25_WR(HW_SPBA_PRR25_RD() |  (v)))
#define HW_SPBA_PRR25_CLR(v)    (HW_SPBA_PRR25_WR(HW_SPBA_PRR25_RD() & ~(v)))
#define HW_SPBA_PRR25_TOG(v)    (HW_SPBA_PRR25_WR(HW_SPBA_PRR25_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR25 bitfields
 */

/* --- Register HW_SPBA_PRR25, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR25_RARA      (0)      //!< Bit position for SPBA_PRR25_RARA.
#define BM_SPBA_PRR25_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR25_RARA.

//! @brief Get value of SPBA_PRR25_RARA from a register value.
#define BG_SPBA_PRR25_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR25_RARA) >> BP_SPBA_PRR25_RARA)

//! @brief Format value for bitfield SPBA_PRR25_RARA.
#define BF_SPBA_PRR25_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR25_RARA) & BM_SPBA_PRR25_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR25_RARA(v)   (HW_SPBA_PRR25_WR((HW_SPBA_PRR25_RD() & ~BM_SPBA_PRR25_RARA) | BF_SPBA_PRR25_RARA(v)))
#endif

#define BV_SPBA_PRR25_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR25_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR25, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR25_RARB      (1)      //!< Bit position for SPBA_PRR25_RARB.
#define BM_SPBA_PRR25_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR25_RARB.

//! @brief Get value of SPBA_PRR25_RARB from a register value.
#define BG_SPBA_PRR25_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR25_RARB) >> BP_SPBA_PRR25_RARB)

//! @brief Format value for bitfield SPBA_PRR25_RARB.
#define BF_SPBA_PRR25_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR25_RARB) & BM_SPBA_PRR25_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR25_RARB(v)   (HW_SPBA_PRR25_WR((HW_SPBA_PRR25_RD() & ~BM_SPBA_PRR25_RARB) | BF_SPBA_PRR25_RARB(v)))
#endif

#define BV_SPBA_PRR25_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR25_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR25, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR25_RARC      (2)      //!< Bit position for SPBA_PRR25_RARC.
#define BM_SPBA_PRR25_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR25_RARC.

//! @brief Get value of SPBA_PRR25_RARC from a register value.
#define BG_SPBA_PRR25_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR25_RARC) >> BP_SPBA_PRR25_RARC)

//! @brief Format value for bitfield SPBA_PRR25_RARC.
#define BF_SPBA_PRR25_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR25_RARC) & BM_SPBA_PRR25_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR25_RARC(v)   (HW_SPBA_PRR25_WR((HW_SPBA_PRR25_RD() & ~BM_SPBA_PRR25_RARC) | BF_SPBA_PRR25_RARC(v)))
#endif

#define BV_SPBA_PRR25_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR25_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR25, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR25_ROI      (16)      //!< Bit position for SPBA_PRR25_ROI.
#define BM_SPBA_PRR25_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR25_ROI.

//! @brief Get value of SPBA_PRR25_ROI from a register value.
#define BG_SPBA_PRR25_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR25_ROI) >> BP_SPBA_PRR25_ROI)

#define BV_SPBA_PRR25_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR25_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR25_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR25_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR25, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR25_RMO      (30)      //!< Bit position for SPBA_PRR25_RMO.
#define BM_SPBA_PRR25_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR25_RMO.

//! @brief Get value of SPBA_PRR25_RMO from a register value.
#define BG_SPBA_PRR25_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR25_RMO) >> BP_SPBA_PRR25_RMO)

#define BV_SPBA_PRR25_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR25_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR25_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR26 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR26 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr26
{
    reg32_t U;
    struct _hw_spba_prr26_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr26_t;
#endif

/*
 * constants & macros for entire SPBA_PRR26 register
 */
#define HW_SPBA_PRR26_ADDR      (REGS_SPBA_BASE + 0x68)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR26           (*(volatile hw_spba_prr26_t *) HW_SPBA_PRR26_ADDR)
#define HW_SPBA_PRR26_RD()      (HW_SPBA_PRR26.U)
#define HW_SPBA_PRR26_WR(v)     (HW_SPBA_PRR26.U = (v))
#define HW_SPBA_PRR26_SET(v)    (HW_SPBA_PRR26_WR(HW_SPBA_PRR26_RD() |  (v)))
#define HW_SPBA_PRR26_CLR(v)    (HW_SPBA_PRR26_WR(HW_SPBA_PRR26_RD() & ~(v)))
#define HW_SPBA_PRR26_TOG(v)    (HW_SPBA_PRR26_WR(HW_SPBA_PRR26_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR26 bitfields
 */

/* --- Register HW_SPBA_PRR26, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR26_RARA      (0)      //!< Bit position for SPBA_PRR26_RARA.
#define BM_SPBA_PRR26_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR26_RARA.

//! @brief Get value of SPBA_PRR26_RARA from a register value.
#define BG_SPBA_PRR26_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR26_RARA) >> BP_SPBA_PRR26_RARA)

//! @brief Format value for bitfield SPBA_PRR26_RARA.
#define BF_SPBA_PRR26_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR26_RARA) & BM_SPBA_PRR26_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR26_RARA(v)   (HW_SPBA_PRR26_WR((HW_SPBA_PRR26_RD() & ~BM_SPBA_PRR26_RARA) | BF_SPBA_PRR26_RARA(v)))
#endif

#define BV_SPBA_PRR26_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR26_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR26, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR26_RARB      (1)      //!< Bit position for SPBA_PRR26_RARB.
#define BM_SPBA_PRR26_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR26_RARB.

//! @brief Get value of SPBA_PRR26_RARB from a register value.
#define BG_SPBA_PRR26_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR26_RARB) >> BP_SPBA_PRR26_RARB)

//! @brief Format value for bitfield SPBA_PRR26_RARB.
#define BF_SPBA_PRR26_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR26_RARB) & BM_SPBA_PRR26_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR26_RARB(v)   (HW_SPBA_PRR26_WR((HW_SPBA_PRR26_RD() & ~BM_SPBA_PRR26_RARB) | BF_SPBA_PRR26_RARB(v)))
#endif

#define BV_SPBA_PRR26_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR26_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR26, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR26_RARC      (2)      //!< Bit position for SPBA_PRR26_RARC.
#define BM_SPBA_PRR26_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR26_RARC.

//! @brief Get value of SPBA_PRR26_RARC from a register value.
#define BG_SPBA_PRR26_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR26_RARC) >> BP_SPBA_PRR26_RARC)

//! @brief Format value for bitfield SPBA_PRR26_RARC.
#define BF_SPBA_PRR26_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR26_RARC) & BM_SPBA_PRR26_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR26_RARC(v)   (HW_SPBA_PRR26_WR((HW_SPBA_PRR26_RD() & ~BM_SPBA_PRR26_RARC) | BF_SPBA_PRR26_RARC(v)))
#endif

#define BV_SPBA_PRR26_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR26_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR26, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR26_ROI      (16)      //!< Bit position for SPBA_PRR26_ROI.
#define BM_SPBA_PRR26_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR26_ROI.

//! @brief Get value of SPBA_PRR26_ROI from a register value.
#define BG_SPBA_PRR26_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR26_ROI) >> BP_SPBA_PRR26_ROI)

#define BV_SPBA_PRR26_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR26_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR26_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR26_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR26, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR26_RMO      (30)      //!< Bit position for SPBA_PRR26_RMO.
#define BM_SPBA_PRR26_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR26_RMO.

//! @brief Get value of SPBA_PRR26_RMO from a register value.
#define BG_SPBA_PRR26_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR26_RMO) >> BP_SPBA_PRR26_RMO)

#define BV_SPBA_PRR26_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR26_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR26_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR27 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR27 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr27
{
    reg32_t U;
    struct _hw_spba_prr27_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr27_t;
#endif

/*
 * constants & macros for entire SPBA_PRR27 register
 */
#define HW_SPBA_PRR27_ADDR      (REGS_SPBA_BASE + 0x6c)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR27           (*(volatile hw_spba_prr27_t *) HW_SPBA_PRR27_ADDR)
#define HW_SPBA_PRR27_RD()      (HW_SPBA_PRR27.U)
#define HW_SPBA_PRR27_WR(v)     (HW_SPBA_PRR27.U = (v))
#define HW_SPBA_PRR27_SET(v)    (HW_SPBA_PRR27_WR(HW_SPBA_PRR27_RD() |  (v)))
#define HW_SPBA_PRR27_CLR(v)    (HW_SPBA_PRR27_WR(HW_SPBA_PRR27_RD() & ~(v)))
#define HW_SPBA_PRR27_TOG(v)    (HW_SPBA_PRR27_WR(HW_SPBA_PRR27_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR27 bitfields
 */

/* --- Register HW_SPBA_PRR27, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR27_RARA      (0)      //!< Bit position for SPBA_PRR27_RARA.
#define BM_SPBA_PRR27_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR27_RARA.

//! @brief Get value of SPBA_PRR27_RARA from a register value.
#define BG_SPBA_PRR27_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR27_RARA) >> BP_SPBA_PRR27_RARA)

//! @brief Format value for bitfield SPBA_PRR27_RARA.
#define BF_SPBA_PRR27_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR27_RARA) & BM_SPBA_PRR27_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR27_RARA(v)   (HW_SPBA_PRR27_WR((HW_SPBA_PRR27_RD() & ~BM_SPBA_PRR27_RARA) | BF_SPBA_PRR27_RARA(v)))
#endif

#define BV_SPBA_PRR27_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR27_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR27, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR27_RARB      (1)      //!< Bit position for SPBA_PRR27_RARB.
#define BM_SPBA_PRR27_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR27_RARB.

//! @brief Get value of SPBA_PRR27_RARB from a register value.
#define BG_SPBA_PRR27_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR27_RARB) >> BP_SPBA_PRR27_RARB)

//! @brief Format value for bitfield SPBA_PRR27_RARB.
#define BF_SPBA_PRR27_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR27_RARB) & BM_SPBA_PRR27_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR27_RARB(v)   (HW_SPBA_PRR27_WR((HW_SPBA_PRR27_RD() & ~BM_SPBA_PRR27_RARB) | BF_SPBA_PRR27_RARB(v)))
#endif

#define BV_SPBA_PRR27_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR27_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR27, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR27_RARC      (2)      //!< Bit position for SPBA_PRR27_RARC.
#define BM_SPBA_PRR27_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR27_RARC.

//! @brief Get value of SPBA_PRR27_RARC from a register value.
#define BG_SPBA_PRR27_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR27_RARC) >> BP_SPBA_PRR27_RARC)

//! @brief Format value for bitfield SPBA_PRR27_RARC.
#define BF_SPBA_PRR27_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR27_RARC) & BM_SPBA_PRR27_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR27_RARC(v)   (HW_SPBA_PRR27_WR((HW_SPBA_PRR27_RD() & ~BM_SPBA_PRR27_RARC) | BF_SPBA_PRR27_RARC(v)))
#endif

#define BV_SPBA_PRR27_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR27_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR27, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR27_ROI      (16)      //!< Bit position for SPBA_PRR27_ROI.
#define BM_SPBA_PRR27_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR27_ROI.

//! @brief Get value of SPBA_PRR27_ROI from a register value.
#define BG_SPBA_PRR27_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR27_ROI) >> BP_SPBA_PRR27_ROI)

#define BV_SPBA_PRR27_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR27_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR27_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR27_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR27, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR27_RMO      (30)      //!< Bit position for SPBA_PRR27_RMO.
#define BM_SPBA_PRR27_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR27_RMO.

//! @brief Get value of SPBA_PRR27_RMO from a register value.
#define BG_SPBA_PRR27_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR27_RMO) >> BP_SPBA_PRR27_RMO)

#define BV_SPBA_PRR27_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR27_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR27_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR28 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR28 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr28
{
    reg32_t U;
    struct _hw_spba_prr28_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr28_t;
#endif

/*
 * constants & macros for entire SPBA_PRR28 register
 */
#define HW_SPBA_PRR28_ADDR      (REGS_SPBA_BASE + 0x70)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR28           (*(volatile hw_spba_prr28_t *) HW_SPBA_PRR28_ADDR)
#define HW_SPBA_PRR28_RD()      (HW_SPBA_PRR28.U)
#define HW_SPBA_PRR28_WR(v)     (HW_SPBA_PRR28.U = (v))
#define HW_SPBA_PRR28_SET(v)    (HW_SPBA_PRR28_WR(HW_SPBA_PRR28_RD() |  (v)))
#define HW_SPBA_PRR28_CLR(v)    (HW_SPBA_PRR28_WR(HW_SPBA_PRR28_RD() & ~(v)))
#define HW_SPBA_PRR28_TOG(v)    (HW_SPBA_PRR28_WR(HW_SPBA_PRR28_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR28 bitfields
 */

/* --- Register HW_SPBA_PRR28, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR28_RARA      (0)      //!< Bit position for SPBA_PRR28_RARA.
#define BM_SPBA_PRR28_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR28_RARA.

//! @brief Get value of SPBA_PRR28_RARA from a register value.
#define BG_SPBA_PRR28_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR28_RARA) >> BP_SPBA_PRR28_RARA)

//! @brief Format value for bitfield SPBA_PRR28_RARA.
#define BF_SPBA_PRR28_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR28_RARA) & BM_SPBA_PRR28_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR28_RARA(v)   (HW_SPBA_PRR28_WR((HW_SPBA_PRR28_RD() & ~BM_SPBA_PRR28_RARA) | BF_SPBA_PRR28_RARA(v)))
#endif

#define BV_SPBA_PRR28_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR28_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR28, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR28_RARB      (1)      //!< Bit position for SPBA_PRR28_RARB.
#define BM_SPBA_PRR28_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR28_RARB.

//! @brief Get value of SPBA_PRR28_RARB from a register value.
#define BG_SPBA_PRR28_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR28_RARB) >> BP_SPBA_PRR28_RARB)

//! @brief Format value for bitfield SPBA_PRR28_RARB.
#define BF_SPBA_PRR28_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR28_RARB) & BM_SPBA_PRR28_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR28_RARB(v)   (HW_SPBA_PRR28_WR((HW_SPBA_PRR28_RD() & ~BM_SPBA_PRR28_RARB) | BF_SPBA_PRR28_RARB(v)))
#endif

#define BV_SPBA_PRR28_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR28_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR28, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR28_RARC      (2)      //!< Bit position for SPBA_PRR28_RARC.
#define BM_SPBA_PRR28_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR28_RARC.

//! @brief Get value of SPBA_PRR28_RARC from a register value.
#define BG_SPBA_PRR28_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR28_RARC) >> BP_SPBA_PRR28_RARC)

//! @brief Format value for bitfield SPBA_PRR28_RARC.
#define BF_SPBA_PRR28_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR28_RARC) & BM_SPBA_PRR28_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR28_RARC(v)   (HW_SPBA_PRR28_WR((HW_SPBA_PRR28_RD() & ~BM_SPBA_PRR28_RARC) | BF_SPBA_PRR28_RARC(v)))
#endif

#define BV_SPBA_PRR28_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR28_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR28, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR28_ROI      (16)      //!< Bit position for SPBA_PRR28_ROI.
#define BM_SPBA_PRR28_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR28_ROI.

//! @brief Get value of SPBA_PRR28_ROI from a register value.
#define BG_SPBA_PRR28_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR28_ROI) >> BP_SPBA_PRR28_ROI)

#define BV_SPBA_PRR28_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR28_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR28_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR28_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR28, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR28_RMO      (30)      //!< Bit position for SPBA_PRR28_RMO.
#define BM_SPBA_PRR28_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR28_RMO.

//! @brief Get value of SPBA_PRR28_RMO from a register value.
#define BG_SPBA_PRR28_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR28_RMO) >> BP_SPBA_PRR28_RMO)

#define BV_SPBA_PRR28_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR28_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR28_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR29 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR29 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr29
{
    reg32_t U;
    struct _hw_spba_prr29_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr29_t;
#endif

/*
 * constants & macros for entire SPBA_PRR29 register
 */
#define HW_SPBA_PRR29_ADDR      (REGS_SPBA_BASE + 0x74)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR29           (*(volatile hw_spba_prr29_t *) HW_SPBA_PRR29_ADDR)
#define HW_SPBA_PRR29_RD()      (HW_SPBA_PRR29.U)
#define HW_SPBA_PRR29_WR(v)     (HW_SPBA_PRR29.U = (v))
#define HW_SPBA_PRR29_SET(v)    (HW_SPBA_PRR29_WR(HW_SPBA_PRR29_RD() |  (v)))
#define HW_SPBA_PRR29_CLR(v)    (HW_SPBA_PRR29_WR(HW_SPBA_PRR29_RD() & ~(v)))
#define HW_SPBA_PRR29_TOG(v)    (HW_SPBA_PRR29_WR(HW_SPBA_PRR29_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR29 bitfields
 */

/* --- Register HW_SPBA_PRR29, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR29_RARA      (0)      //!< Bit position for SPBA_PRR29_RARA.
#define BM_SPBA_PRR29_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR29_RARA.

//! @brief Get value of SPBA_PRR29_RARA from a register value.
#define BG_SPBA_PRR29_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR29_RARA) >> BP_SPBA_PRR29_RARA)

//! @brief Format value for bitfield SPBA_PRR29_RARA.
#define BF_SPBA_PRR29_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR29_RARA) & BM_SPBA_PRR29_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR29_RARA(v)   (HW_SPBA_PRR29_WR((HW_SPBA_PRR29_RD() & ~BM_SPBA_PRR29_RARA) | BF_SPBA_PRR29_RARA(v)))
#endif

#define BV_SPBA_PRR29_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR29_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR29, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR29_RARB      (1)      //!< Bit position for SPBA_PRR29_RARB.
#define BM_SPBA_PRR29_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR29_RARB.

//! @brief Get value of SPBA_PRR29_RARB from a register value.
#define BG_SPBA_PRR29_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR29_RARB) >> BP_SPBA_PRR29_RARB)

//! @brief Format value for bitfield SPBA_PRR29_RARB.
#define BF_SPBA_PRR29_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR29_RARB) & BM_SPBA_PRR29_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR29_RARB(v)   (HW_SPBA_PRR29_WR((HW_SPBA_PRR29_RD() & ~BM_SPBA_PRR29_RARB) | BF_SPBA_PRR29_RARB(v)))
#endif

#define BV_SPBA_PRR29_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR29_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR29, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR29_RARC      (2)      //!< Bit position for SPBA_PRR29_RARC.
#define BM_SPBA_PRR29_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR29_RARC.

//! @brief Get value of SPBA_PRR29_RARC from a register value.
#define BG_SPBA_PRR29_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR29_RARC) >> BP_SPBA_PRR29_RARC)

//! @brief Format value for bitfield SPBA_PRR29_RARC.
#define BF_SPBA_PRR29_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR29_RARC) & BM_SPBA_PRR29_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR29_RARC(v)   (HW_SPBA_PRR29_WR((HW_SPBA_PRR29_RD() & ~BM_SPBA_PRR29_RARC) | BF_SPBA_PRR29_RARC(v)))
#endif

#define BV_SPBA_PRR29_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR29_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR29, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR29_ROI      (16)      //!< Bit position for SPBA_PRR29_ROI.
#define BM_SPBA_PRR29_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR29_ROI.

//! @brief Get value of SPBA_PRR29_ROI from a register value.
#define BG_SPBA_PRR29_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR29_ROI) >> BP_SPBA_PRR29_ROI)

#define BV_SPBA_PRR29_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR29_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR29_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR29_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR29, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR29_RMO      (30)      //!< Bit position for SPBA_PRR29_RMO.
#define BM_SPBA_PRR29_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR29_RMO.

//! @brief Get value of SPBA_PRR29_RMO from a register value.
#define BG_SPBA_PRR29_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR29_RMO) >> BP_SPBA_PRR29_RMO)

#define BV_SPBA_PRR29_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR29_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR29_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR30 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR30 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr30
{
    reg32_t U;
    struct _hw_spba_prr30_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr30_t;
#endif

/*
 * constants & macros for entire SPBA_PRR30 register
 */
#define HW_SPBA_PRR30_ADDR      (REGS_SPBA_BASE + 0x78)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR30           (*(volatile hw_spba_prr30_t *) HW_SPBA_PRR30_ADDR)
#define HW_SPBA_PRR30_RD()      (HW_SPBA_PRR30.U)
#define HW_SPBA_PRR30_WR(v)     (HW_SPBA_PRR30.U = (v))
#define HW_SPBA_PRR30_SET(v)    (HW_SPBA_PRR30_WR(HW_SPBA_PRR30_RD() |  (v)))
#define HW_SPBA_PRR30_CLR(v)    (HW_SPBA_PRR30_WR(HW_SPBA_PRR30_RD() & ~(v)))
#define HW_SPBA_PRR30_TOG(v)    (HW_SPBA_PRR30_WR(HW_SPBA_PRR30_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR30 bitfields
 */

/* --- Register HW_SPBA_PRR30, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR30_RARA      (0)      //!< Bit position for SPBA_PRR30_RARA.
#define BM_SPBA_PRR30_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR30_RARA.

//! @brief Get value of SPBA_PRR30_RARA from a register value.
#define BG_SPBA_PRR30_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR30_RARA) >> BP_SPBA_PRR30_RARA)

//! @brief Format value for bitfield SPBA_PRR30_RARA.
#define BF_SPBA_PRR30_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR30_RARA) & BM_SPBA_PRR30_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR30_RARA(v)   (HW_SPBA_PRR30_WR((HW_SPBA_PRR30_RD() & ~BM_SPBA_PRR30_RARA) | BF_SPBA_PRR30_RARA(v)))
#endif

#define BV_SPBA_PRR30_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR30_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR30, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR30_RARB      (1)      //!< Bit position for SPBA_PRR30_RARB.
#define BM_SPBA_PRR30_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR30_RARB.

//! @brief Get value of SPBA_PRR30_RARB from a register value.
#define BG_SPBA_PRR30_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR30_RARB) >> BP_SPBA_PRR30_RARB)

//! @brief Format value for bitfield SPBA_PRR30_RARB.
#define BF_SPBA_PRR30_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR30_RARB) & BM_SPBA_PRR30_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR30_RARB(v)   (HW_SPBA_PRR30_WR((HW_SPBA_PRR30_RD() & ~BM_SPBA_PRR30_RARB) | BF_SPBA_PRR30_RARB(v)))
#endif

#define BV_SPBA_PRR30_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR30_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR30, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR30_RARC      (2)      //!< Bit position for SPBA_PRR30_RARC.
#define BM_SPBA_PRR30_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR30_RARC.

//! @brief Get value of SPBA_PRR30_RARC from a register value.
#define BG_SPBA_PRR30_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR30_RARC) >> BP_SPBA_PRR30_RARC)

//! @brief Format value for bitfield SPBA_PRR30_RARC.
#define BF_SPBA_PRR30_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR30_RARC) & BM_SPBA_PRR30_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR30_RARC(v)   (HW_SPBA_PRR30_WR((HW_SPBA_PRR30_RD() & ~BM_SPBA_PRR30_RARC) | BF_SPBA_PRR30_RARC(v)))
#endif

#define BV_SPBA_PRR30_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR30_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR30, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR30_ROI      (16)      //!< Bit position for SPBA_PRR30_ROI.
#define BM_SPBA_PRR30_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR30_ROI.

//! @brief Get value of SPBA_PRR30_ROI from a register value.
#define BG_SPBA_PRR30_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR30_ROI) >> BP_SPBA_PRR30_ROI)

#define BV_SPBA_PRR30_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR30_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR30_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR30_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR30, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR30_RMO      (30)      //!< Bit position for SPBA_PRR30_RMO.
#define BM_SPBA_PRR30_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR30_RMO.

//! @brief Get value of SPBA_PRR30_RMO from a register value.
#define BG_SPBA_PRR30_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR30_RMO) >> BP_SPBA_PRR30_RMO)

#define BV_SPBA_PRR30_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR30_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR30_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.

//-------------------------------------------------------------------------------------------
// HW_SPBA_PRR31 - Peripheral Rights Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_SPBA_PRR31 - Peripheral Rights Register (RW)
 *
 * Reset value: 0x00000007
 *
 * This register controls master ownership and access for a peripheral.
 */
typedef union _hw_spba_prr31
{
    reg32_t U;
    struct _hw_spba_prr31_bitfields
    {
        unsigned RARA : 1; //!< [0] Resource Access Right.
        unsigned RARB : 1; //!< [1] Resource Access Right.
        unsigned RARC : 1; //!< [2] Resource Access Right.
        unsigned RESERVED0 : 13; //!< [15:3] Reserved
        unsigned ROI : 2; //!< [17:16] Resource Owner ID.
        unsigned RESERVED1 : 12; //!< [29:18] Reserved
        unsigned RMO : 2; //!< [31:30] Requesting Master Owner.
    } B;
} hw_spba_prr31_t;
#endif

/*
 * constants & macros for entire SPBA_PRR31 register
 */
#define HW_SPBA_PRR31_ADDR      (REGS_SPBA_BASE + 0x7c)

#ifndef __LANGUAGE_ASM__
#define HW_SPBA_PRR31           (*(volatile hw_spba_prr31_t *) HW_SPBA_PRR31_ADDR)
#define HW_SPBA_PRR31_RD()      (HW_SPBA_PRR31.U)
#define HW_SPBA_PRR31_WR(v)     (HW_SPBA_PRR31.U = (v))
#define HW_SPBA_PRR31_SET(v)    (HW_SPBA_PRR31_WR(HW_SPBA_PRR31_RD() |  (v)))
#define HW_SPBA_PRR31_CLR(v)    (HW_SPBA_PRR31_WR(HW_SPBA_PRR31_RD() & ~(v)))
#define HW_SPBA_PRR31_TOG(v)    (HW_SPBA_PRR31_WR(HW_SPBA_PRR31_RD() ^  (v)))
#endif

/*
 * constants & macros for individual SPBA_PRR31 bitfields
 */

/* --- Register HW_SPBA_PRR31, field RARA[0] (RW)
 *
 * Resource Access Right. Control and Status bit for master A. This field indicates whether master A
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR31_RARA      (0)      //!< Bit position for SPBA_PRR31_RARA.
#define BM_SPBA_PRR31_RARA      (0x00000001)  //!< Bit mask for SPBA_PRR31_RARA.

//! @brief Get value of SPBA_PRR31_RARA from a register value.
#define BG_SPBA_PRR31_RARA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR31_RARA) >> BP_SPBA_PRR31_RARA)

//! @brief Format value for bitfield SPBA_PRR31_RARA.
#define BF_SPBA_PRR31_RARA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR31_RARA) & BM_SPBA_PRR31_RARA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARA field to a new value.
#define BW_SPBA_PRR31_RARA(v)   (HW_SPBA_PRR31_WR((HW_SPBA_PRR31_RD() & ~BM_SPBA_PRR31_RARA) | BF_SPBA_PRR31_RARA(v)))
#endif

#define BV_SPBA_PRR31_RARA__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR31_RARA__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR31, field RARB[1] (RW)
 *
 * Resource Access Right. Control and Status bit for master B. This field indicates whether master B
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR31_RARB      (1)      //!< Bit position for SPBA_PRR31_RARB.
#define BM_SPBA_PRR31_RARB      (0x00000002)  //!< Bit mask for SPBA_PRR31_RARB.

//! @brief Get value of SPBA_PRR31_RARB from a register value.
#define BG_SPBA_PRR31_RARB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR31_RARB) >> BP_SPBA_PRR31_RARB)

//! @brief Format value for bitfield SPBA_PRR31_RARB.
#define BF_SPBA_PRR31_RARB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR31_RARB) & BM_SPBA_PRR31_RARB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARB field to a new value.
#define BW_SPBA_PRR31_RARB(v)   (HW_SPBA_PRR31_WR((HW_SPBA_PRR31_RD() & ~BM_SPBA_PRR31_RARB) | BF_SPBA_PRR31_RARB(v)))
#endif

#define BV_SPBA_PRR31_RARB__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR31_RARB__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR31, field RARC[2] (RW)
 *
 * Resource Access Right. Control and Status bit for master C. This field indicates whether master C
 * can access the peripheral. From 0 up to 3 masters can have permission to access a resource (all
 * the master can be granted on a peripheral, but only one access at a time will be granted by
 * SPBA).
 *
 * Values:
 * PROHIBITED = 0 - Access to peripheral is not allowed.
 * ALLOWED = 1 - Access to peripheral is granted.
 */

#define BP_SPBA_PRR31_RARC      (2)      //!< Bit position for SPBA_PRR31_RARC.
#define BM_SPBA_PRR31_RARC      (0x00000004)  //!< Bit mask for SPBA_PRR31_RARC.

//! @brief Get value of SPBA_PRR31_RARC from a register value.
#define BG_SPBA_PRR31_RARC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR31_RARC) >> BP_SPBA_PRR31_RARC)

//! @brief Format value for bitfield SPBA_PRR31_RARC.
#define BF_SPBA_PRR31_RARC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_SPBA_PRR31_RARC) & BM_SPBA_PRR31_RARC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RARC field to a new value.
#define BW_SPBA_PRR31_RARC(v)   (HW_SPBA_PRR31_WR((HW_SPBA_PRR31_RD() & ~BM_SPBA_PRR31_RARC) | BF_SPBA_PRR31_RARC(v)))
#endif

#define BV_SPBA_PRR31_RARC__PROHIBITED (0x0) //!< Access to peripheral is not allowed.
#define BV_SPBA_PRR31_RARC__ALLOWED (0x1) //!< Access to peripheral is granted.

/* --- Register HW_SPBA_PRR31, field ROI[17:16] (RO)
 *
 * Resource Owner ID. This field indicates which master (one at a time) can access to the PRR for
 * rights modification. This is a read-only register. After reset, ROI bits are cleared ("00" -> un-
 * owned resource). A master performing a write access to the an un-owned PRR will get its ID
 * automatically written into ROI, while modifying RARx bits. It can then read back the RMO, RAR,
 * ROI bits to make sure RMO returns the right value, ROI bits contain its ID and RARx bits are
 * correctly asserted. Then no other master (whom ID is different from the one stored in ROI) will
 * be able to modify RAR fields. Owner master of a peripheral can assert its dead_owner signal, or
 * write 1'b0 in the RARx to release the ownership (ROI[1:0] reset to 2'b0).
 *
 * Values:
 * UNOWNED = 00 - Unowned resource.
 * MASTER_A = 01 - The resource is owned by master A port.
 * MASTER_B = 10 - The resource is owned by master B port.
 * MASTER_C = 11 - The resource is owned by master C port.
 */

#define BP_SPBA_PRR31_ROI      (16)      //!< Bit position for SPBA_PRR31_ROI.
#define BM_SPBA_PRR31_ROI      (0x00030000)  //!< Bit mask for SPBA_PRR31_ROI.

//! @brief Get value of SPBA_PRR31_ROI from a register value.
#define BG_SPBA_PRR31_ROI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR31_ROI) >> BP_SPBA_PRR31_ROI)

#define BV_SPBA_PRR31_ROI__UNOWNED (0x0) //!< Unowned resource.
#define BV_SPBA_PRR31_ROI__MASTER_A (0x1) //!< The resource is owned by master A port.
#define BV_SPBA_PRR31_ROI__MASTER_B (0x2) //!< The resource is owned by master B port.
#define BV_SPBA_PRR31_ROI__MASTER_C (0x3) //!< The resource is owned by master C port.

/* --- Register HW_SPBA_PRR31, field RMO[31:30] (RO)
 *
 * Requesting Master Owner. This 2-bit register field indicates if the corresponding resource is
 * owned by the requesting master or not. This register is reset to 2'b0 if ROI = 2'b0.
 *
 * Values:
 * UNOWNED = 00 - The resource is unowned.
 * 01 - Reserved.
 * ANOTHER_MASTER = 10 - The resource is owned by another master.
 * REQUESTING_MASTER = 11 - The resource is owned by the requesting master.
 */

#define BP_SPBA_PRR31_RMO      (30)      //!< Bit position for SPBA_PRR31_RMO.
#define BM_SPBA_PRR31_RMO      (0xc0000000)  //!< Bit mask for SPBA_PRR31_RMO.

//! @brief Get value of SPBA_PRR31_RMO from a register value.
#define BG_SPBA_PRR31_RMO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_SPBA_PRR31_RMO) >> BP_SPBA_PRR31_RMO)

#define BV_SPBA_PRR31_RMO__UNOWNED (0x0) //!< The resource is unowned.
#define BV_SPBA_PRR31_RMO__ANOTHER_MASTER (0x2) //!< The resource is owned by another master.
#define BV_SPBA_PRR31_RMO__REQUESTING_MASTER (0x3) //!< The resource is owned by the requesting master.


/*!
 * @brief All SPBA module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_spba
{
    volatile hw_spba_prr0_t PRR0; //!< Peripheral Rights Register
    volatile hw_spba_prr1_t PRR1; //!< Peripheral Rights Register
    volatile hw_spba_prr2_t PRR2; //!< Peripheral Rights Register
    volatile hw_spba_prr3_t PRR3; //!< Peripheral Rights Register
    volatile hw_spba_prr4_t PRR4; //!< Peripheral Rights Register
    volatile hw_spba_prr5_t PRR5; //!< Peripheral Rights Register
    volatile hw_spba_prr6_t PRR6; //!< Peripheral Rights Register
    volatile hw_spba_prr7_t PRR7; //!< Peripheral Rights Register
    volatile hw_spba_prr8_t PRR8; //!< Peripheral Rights Register
    volatile hw_spba_prr9_t PRR9; //!< Peripheral Rights Register
    volatile hw_spba_prr10_t PRR10; //!< Peripheral Rights Register
    volatile hw_spba_prr11_t PRR11; //!< Peripheral Rights Register
    volatile hw_spba_prr12_t PRR12; //!< Peripheral Rights Register
    volatile hw_spba_prr13_t PRR13; //!< Peripheral Rights Register
    volatile hw_spba_prr14_t PRR14; //!< Peripheral Rights Register
    volatile hw_spba_prr15_t PRR15; //!< Peripheral Rights Register
    volatile hw_spba_prr16_t PRR16; //!< Peripheral Rights Register
    volatile hw_spba_prr17_t PRR17; //!< Peripheral Rights Register
    volatile hw_spba_prr18_t PRR18; //!< Peripheral Rights Register
    volatile hw_spba_prr19_t PRR19; //!< Peripheral Rights Register
    volatile hw_spba_prr20_t PRR20; //!< Peripheral Rights Register
    volatile hw_spba_prr21_t PRR21; //!< Peripheral Rights Register
    volatile hw_spba_prr22_t PRR22; //!< Peripheral Rights Register
    volatile hw_spba_prr23_t PRR23; //!< Peripheral Rights Register
    volatile hw_spba_prr24_t PRR24; //!< Peripheral Rights Register
    volatile hw_spba_prr25_t PRR25; //!< Peripheral Rights Register
    volatile hw_spba_prr26_t PRR26; //!< Peripheral Rights Register
    volatile hw_spba_prr27_t PRR27; //!< Peripheral Rights Register
    volatile hw_spba_prr28_t PRR28; //!< Peripheral Rights Register
    volatile hw_spba_prr29_t PRR29; //!< Peripheral Rights Register
    volatile hw_spba_prr30_t PRR30; //!< Peripheral Rights Register
    volatile hw_spba_prr31_t PRR31; //!< Peripheral Rights Register
} hw_spba_t;
#pragma pack()

//! @brief Macro to access all SPBA registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_SPBA(0)</code>.
#define HW_SPBA     (*(volatile hw_spba_t *) REGS_SPBA_BASE)

#endif


#endif // __HW_SPBA_REGISTERS_H__
