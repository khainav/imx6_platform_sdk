/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef __HW_USBNC_REGISTERS_H__
#define __HW_USBNC_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SL USBNC registers defined in this header file.
 *
 * - HW_USBNC_USB_OTG1_CTRL - USB OTG1 Control Register
 * - HW_USBNC_USB_OTG2_CTRL - USB OTG2 Control Register
 * - HW_USBNC_USB_UH_CTRL - USB Host Control Register
 * - HW_USBNC_USB_UH_HSIC_CTRL - USB Host HSIC Control Register
 * - HW_USBNC_USB_OTG1_PHY_CTRL_0 - OTG1 UTMI PHY Control 0 Register
 * - HW_USBNC_USB_OTG2_PHY_CTRL_0 - OTG2 UTMI PHY Control 0 Register
 *
 * - hw_usbnc_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_USBNC_BASE
#define HW_USBNC_INSTANCE_COUNT (1) //!< Number of instances of the USBNC module.
#define REGS_USBNC_BASE (0x02184000) //!< Base address for USBNC.
#endif
//@}


//-------------------------------------------------------------------------------------------
// HW_USBNC_USB_OTG1_CTRL - USB OTG1 Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBNC_USB_OTG1_CTRL - USB OTG1 Control Register (RW)
 *
 * Reset value: 0x00003000
 *
 * The USB OTG1 control register controls the integration specific features of the USB OTG1 module.
 * These features are not directly related to the USB functionality, but control special features,
 * interfacing on the USB ports, as well as power control and wake-up functionality.
 */
typedef union _hw_usbnc_usb_otg1_ctrl
{
    reg32_t U;
    struct _hw_usbnc_usb_otg1_ctrl_bitfields
    {
        unsigned RESERVED0 : 7; //!< [6:0] Reserved
        unsigned OVER_CUR_DIS : 1; //!< [7] Disable OTG1 Overcurrent Detection
        unsigned OVER_CUR_POL : 1; //!< [8] OTG1 Polarity of Overcurrent The polarity of OTG1 port overcurrent event
        unsigned PWR_POL : 1; //!< [9] OTG1 Power Polarity This bit should be set according to PMIC Power Pin polarity.
        unsigned WIE : 1; //!< [10] OTG1 Wake-up Interrupt Enable This bit enables or disables the OTG1 wake-up interrupt.
        unsigned RESERVED1 : 3; //!< [13:11] Reserved
        unsigned WKUP_SW_EN : 1; //!< [14] OTG1 Software Wake-up Enable
        unsigned WKUP_SW : 1; //!< [15] OTG1 Software Wake-up
        unsigned WKUP_ID_EN : 1; //!< [16] OTG1 Wake-up on ID change enable
        unsigned WKUP_VBUS_EN : 1; //!< [17] OTG1 wake-up on VBUS change enable
        unsigned RESERVED2 : 13; //!< [30:18] Reserved
        unsigned WIR : 1; //!< [31] OTG1 Wake-up Interrupt Request This bit indicates that a wake-up interrupt request is received on the OTG1 port.
    } B;
} hw_usbnc_usb_otg1_ctrl_t;
#endif

/*
 * constants & macros for entire USBNC_USB_OTG1_CTRL register
 */
#define HW_USBNC_USB_OTG1_CTRL_ADDR      (REGS_USBNC_BASE + 0x800)

#ifndef __LANGUAGE_ASM__
#define HW_USBNC_USB_OTG1_CTRL           (*(volatile hw_usbnc_usb_otg1_ctrl_t *) HW_USBNC_USB_OTG1_CTRL_ADDR)
#define HW_USBNC_USB_OTG1_CTRL_RD()      (HW_USBNC_USB_OTG1_CTRL.U)
#define HW_USBNC_USB_OTG1_CTRL_WR(v)     (HW_USBNC_USB_OTG1_CTRL.U = (v))
#define HW_USBNC_USB_OTG1_CTRL_SET(v)    (HW_USBNC_USB_OTG1_CTRL_WR(HW_USBNC_USB_OTG1_CTRL_RD() |  (v)))
#define HW_USBNC_USB_OTG1_CTRL_CLR(v)    (HW_USBNC_USB_OTG1_CTRL_WR(HW_USBNC_USB_OTG1_CTRL_RD() & ~(v)))
#define HW_USBNC_USB_OTG1_CTRL_TOG(v)    (HW_USBNC_USB_OTG1_CTRL_WR(HW_USBNC_USB_OTG1_CTRL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBNC_USB_OTG1_CTRL bitfields
 */

/* --- Register HW_USBNC_USB_OTG1_CTRL, field OVER_CUR_DIS[7] (RW)
 *
 * Disable OTG1 Overcurrent Detection
 *
 * Values:
 * 0 - Enables overcurrent detection
 * 1 - Disables overcurrent detection
 */

#define BP_USBNC_USB_OTG1_CTRL_OVER_CUR_DIS      (7)      //!< Bit position for USBNC_USB_OTG1_CTRL_OVER_CUR_DIS.
#define BM_USBNC_USB_OTG1_CTRL_OVER_CUR_DIS      (0x00000080)  //!< Bit mask for USBNC_USB_OTG1_CTRL_OVER_CUR_DIS.

//! @brief Get value of USBNC_USB_OTG1_CTRL_OVER_CUR_DIS from a register value.
#define BG_USBNC_USB_OTG1_CTRL_OVER_CUR_DIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG1_CTRL_OVER_CUR_DIS) >> BP_USBNC_USB_OTG1_CTRL_OVER_CUR_DIS)

//! @brief Format value for bitfield USBNC_USB_OTG1_CTRL_OVER_CUR_DIS.
#define BF_USBNC_USB_OTG1_CTRL_OVER_CUR_DIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG1_CTRL_OVER_CUR_DIS) & BM_USBNC_USB_OTG1_CTRL_OVER_CUR_DIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OVER_CUR_DIS field to a new value.
#define BW_USBNC_USB_OTG1_CTRL_OVER_CUR_DIS(v)   (HW_USBNC_USB_OTG1_CTRL_WR((HW_USBNC_USB_OTG1_CTRL_RD() & ~BM_USBNC_USB_OTG1_CTRL_OVER_CUR_DIS) | BF_USBNC_USB_OTG1_CTRL_OVER_CUR_DIS(v)))
#endif


/* --- Register HW_USBNC_USB_OTG1_CTRL, field OVER_CUR_POL[8] (RW)
 *
 * OTG1 Polarity of Overcurrent The polarity of OTG1 port overcurrent event
 *
 * Values:
 * 0 - High active
 * 1 - Low active
 */

#define BP_USBNC_USB_OTG1_CTRL_OVER_CUR_POL      (8)      //!< Bit position for USBNC_USB_OTG1_CTRL_OVER_CUR_POL.
#define BM_USBNC_USB_OTG1_CTRL_OVER_CUR_POL      (0x00000100)  //!< Bit mask for USBNC_USB_OTG1_CTRL_OVER_CUR_POL.

//! @brief Get value of USBNC_USB_OTG1_CTRL_OVER_CUR_POL from a register value.
#define BG_USBNC_USB_OTG1_CTRL_OVER_CUR_POL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG1_CTRL_OVER_CUR_POL) >> BP_USBNC_USB_OTG1_CTRL_OVER_CUR_POL)

//! @brief Format value for bitfield USBNC_USB_OTG1_CTRL_OVER_CUR_POL.
#define BF_USBNC_USB_OTG1_CTRL_OVER_CUR_POL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG1_CTRL_OVER_CUR_POL) & BM_USBNC_USB_OTG1_CTRL_OVER_CUR_POL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OVER_CUR_POL field to a new value.
#define BW_USBNC_USB_OTG1_CTRL_OVER_CUR_POL(v)   (HW_USBNC_USB_OTG1_CTRL_WR((HW_USBNC_USB_OTG1_CTRL_RD() & ~BM_USBNC_USB_OTG1_CTRL_OVER_CUR_POL) | BF_USBNC_USB_OTG1_CTRL_OVER_CUR_POL(v)))
#endif


/* --- Register HW_USBNC_USB_OTG1_CTRL, field PWR_POL[9] (RW)
 *
 * OTG1 Power Polarity This bit should be set according to PMIC Power Pin polarity.
 *
 * Values:
 * 0 - PMIC Power Pin is Low active.
 * 1 - PMIC Power Pin is High active.
 */

#define BP_USBNC_USB_OTG1_CTRL_PWR_POL      (9)      //!< Bit position for USBNC_USB_OTG1_CTRL_PWR_POL.
#define BM_USBNC_USB_OTG1_CTRL_PWR_POL      (0x00000200)  //!< Bit mask for USBNC_USB_OTG1_CTRL_PWR_POL.

//! @brief Get value of USBNC_USB_OTG1_CTRL_PWR_POL from a register value.
#define BG_USBNC_USB_OTG1_CTRL_PWR_POL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG1_CTRL_PWR_POL) >> BP_USBNC_USB_OTG1_CTRL_PWR_POL)

//! @brief Format value for bitfield USBNC_USB_OTG1_CTRL_PWR_POL.
#define BF_USBNC_USB_OTG1_CTRL_PWR_POL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG1_CTRL_PWR_POL) & BM_USBNC_USB_OTG1_CTRL_PWR_POL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PWR_POL field to a new value.
#define BW_USBNC_USB_OTG1_CTRL_PWR_POL(v)   (HW_USBNC_USB_OTG1_CTRL_WR((HW_USBNC_USB_OTG1_CTRL_RD() & ~BM_USBNC_USB_OTG1_CTRL_PWR_POL) | BF_USBNC_USB_OTG1_CTRL_PWR_POL(v)))
#endif


/* --- Register HW_USBNC_USB_OTG1_CTRL, field WIE[10] (RW)
 *
 * OTG1 Wake-up Interrupt Enable This bit enables or disables the OTG1 wake-up interrupt. Disabling
 * the interrupt also clears the Interrupt request bit. Wake-up interrupt enable should be turned
 * off after receiving a wake-up interrupt and turned on again prior to going in suspend mode
 *
 * Values:
 * 0 - Interrupt Disabled
 * 1 - Interrupt Enabled
 */

#define BP_USBNC_USB_OTG1_CTRL_WIE      (10)      //!< Bit position for USBNC_USB_OTG1_CTRL_WIE.
#define BM_USBNC_USB_OTG1_CTRL_WIE      (0x00000400)  //!< Bit mask for USBNC_USB_OTG1_CTRL_WIE.

//! @brief Get value of USBNC_USB_OTG1_CTRL_WIE from a register value.
#define BG_USBNC_USB_OTG1_CTRL_WIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG1_CTRL_WIE) >> BP_USBNC_USB_OTG1_CTRL_WIE)

//! @brief Format value for bitfield USBNC_USB_OTG1_CTRL_WIE.
#define BF_USBNC_USB_OTG1_CTRL_WIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG1_CTRL_WIE) & BM_USBNC_USB_OTG1_CTRL_WIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WIE field to a new value.
#define BW_USBNC_USB_OTG1_CTRL_WIE(v)   (HW_USBNC_USB_OTG1_CTRL_WR((HW_USBNC_USB_OTG1_CTRL_RD() & ~BM_USBNC_USB_OTG1_CTRL_WIE) | BF_USBNC_USB_OTG1_CTRL_WIE(v)))
#endif


/* --- Register HW_USBNC_USB_OTG1_CTRL, field WKUP_SW_EN[14] (RW)
 *
 * OTG1 Software Wake-up Enable
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_USBNC_USB_OTG1_CTRL_WKUP_SW_EN      (14)      //!< Bit position for USBNC_USB_OTG1_CTRL_WKUP_SW_EN.
#define BM_USBNC_USB_OTG1_CTRL_WKUP_SW_EN      (0x00004000)  //!< Bit mask for USBNC_USB_OTG1_CTRL_WKUP_SW_EN.

//! @brief Get value of USBNC_USB_OTG1_CTRL_WKUP_SW_EN from a register value.
#define BG_USBNC_USB_OTG1_CTRL_WKUP_SW_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG1_CTRL_WKUP_SW_EN) >> BP_USBNC_USB_OTG1_CTRL_WKUP_SW_EN)

//! @brief Format value for bitfield USBNC_USB_OTG1_CTRL_WKUP_SW_EN.
#define BF_USBNC_USB_OTG1_CTRL_WKUP_SW_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG1_CTRL_WKUP_SW_EN) & BM_USBNC_USB_OTG1_CTRL_WKUP_SW_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKUP_SW_EN field to a new value.
#define BW_USBNC_USB_OTG1_CTRL_WKUP_SW_EN(v)   (HW_USBNC_USB_OTG1_CTRL_WR((HW_USBNC_USB_OTG1_CTRL_RD() & ~BM_USBNC_USB_OTG1_CTRL_WKUP_SW_EN) | BF_USBNC_USB_OTG1_CTRL_WKUP_SW_EN(v)))
#endif


/* --- Register HW_USBNC_USB_OTG1_CTRL, field WKUP_SW[15] (RW)
 *
 * OTG1 Software Wake-up
 *
 * Values:
 * 0 - Inactive
 * 1 - Force wake-up
 */

#define BP_USBNC_USB_OTG1_CTRL_WKUP_SW      (15)      //!< Bit position for USBNC_USB_OTG1_CTRL_WKUP_SW.
#define BM_USBNC_USB_OTG1_CTRL_WKUP_SW      (0x00008000)  //!< Bit mask for USBNC_USB_OTG1_CTRL_WKUP_SW.

//! @brief Get value of USBNC_USB_OTG1_CTRL_WKUP_SW from a register value.
#define BG_USBNC_USB_OTG1_CTRL_WKUP_SW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG1_CTRL_WKUP_SW) >> BP_USBNC_USB_OTG1_CTRL_WKUP_SW)

//! @brief Format value for bitfield USBNC_USB_OTG1_CTRL_WKUP_SW.
#define BF_USBNC_USB_OTG1_CTRL_WKUP_SW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG1_CTRL_WKUP_SW) & BM_USBNC_USB_OTG1_CTRL_WKUP_SW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKUP_SW field to a new value.
#define BW_USBNC_USB_OTG1_CTRL_WKUP_SW(v)   (HW_USBNC_USB_OTG1_CTRL_WR((HW_USBNC_USB_OTG1_CTRL_RD() & ~BM_USBNC_USB_OTG1_CTRL_WKUP_SW) | BF_USBNC_USB_OTG1_CTRL_WKUP_SW(v)))
#endif


/* --- Register HW_USBNC_USB_OTG1_CTRL, field WKUP_ID_EN[16] (RW)
 *
 * OTG1 Wake-up on ID change enable
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_USBNC_USB_OTG1_CTRL_WKUP_ID_EN      (16)      //!< Bit position for USBNC_USB_OTG1_CTRL_WKUP_ID_EN.
#define BM_USBNC_USB_OTG1_CTRL_WKUP_ID_EN      (0x00010000)  //!< Bit mask for USBNC_USB_OTG1_CTRL_WKUP_ID_EN.

//! @brief Get value of USBNC_USB_OTG1_CTRL_WKUP_ID_EN from a register value.
#define BG_USBNC_USB_OTG1_CTRL_WKUP_ID_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG1_CTRL_WKUP_ID_EN) >> BP_USBNC_USB_OTG1_CTRL_WKUP_ID_EN)

//! @brief Format value for bitfield USBNC_USB_OTG1_CTRL_WKUP_ID_EN.
#define BF_USBNC_USB_OTG1_CTRL_WKUP_ID_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG1_CTRL_WKUP_ID_EN) & BM_USBNC_USB_OTG1_CTRL_WKUP_ID_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKUP_ID_EN field to a new value.
#define BW_USBNC_USB_OTG1_CTRL_WKUP_ID_EN(v)   (HW_USBNC_USB_OTG1_CTRL_WR((HW_USBNC_USB_OTG1_CTRL_RD() & ~BM_USBNC_USB_OTG1_CTRL_WKUP_ID_EN) | BF_USBNC_USB_OTG1_CTRL_WKUP_ID_EN(v)))
#endif


/* --- Register HW_USBNC_USB_OTG1_CTRL, field WKUP_VBUS_EN[17] (RW)
 *
 * OTG1 wake-up on VBUS change enable
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_USBNC_USB_OTG1_CTRL_WKUP_VBUS_EN      (17)      //!< Bit position for USBNC_USB_OTG1_CTRL_WKUP_VBUS_EN.
#define BM_USBNC_USB_OTG1_CTRL_WKUP_VBUS_EN      (0x00020000)  //!< Bit mask for USBNC_USB_OTG1_CTRL_WKUP_VBUS_EN.

//! @brief Get value of USBNC_USB_OTG1_CTRL_WKUP_VBUS_EN from a register value.
#define BG_USBNC_USB_OTG1_CTRL_WKUP_VBUS_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG1_CTRL_WKUP_VBUS_EN) >> BP_USBNC_USB_OTG1_CTRL_WKUP_VBUS_EN)

//! @brief Format value for bitfield USBNC_USB_OTG1_CTRL_WKUP_VBUS_EN.
#define BF_USBNC_USB_OTG1_CTRL_WKUP_VBUS_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG1_CTRL_WKUP_VBUS_EN) & BM_USBNC_USB_OTG1_CTRL_WKUP_VBUS_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKUP_VBUS_EN field to a new value.
#define BW_USBNC_USB_OTG1_CTRL_WKUP_VBUS_EN(v)   (HW_USBNC_USB_OTG1_CTRL_WR((HW_USBNC_USB_OTG1_CTRL_RD() & ~BM_USBNC_USB_OTG1_CTRL_WKUP_VBUS_EN) | BF_USBNC_USB_OTG1_CTRL_WKUP_VBUS_EN(v)))
#endif


/* --- Register HW_USBNC_USB_OTG1_CTRL, field WIR[31] (RO)
 *
 * OTG1 Wake-up Interrupt Request This bit indicates that a wake-up interrupt request is received on
 * the OTG1 port. This bit is cleared by disabling the wake-up interrupt (clearing bit "OWIE").
 *
 * Values:
 * 0 - No wake-up interrupt request received
 * 1 - Wake-up Interrupt Request received
 */

#define BP_USBNC_USB_OTG1_CTRL_WIR      (31)      //!< Bit position for USBNC_USB_OTG1_CTRL_WIR.
#define BM_USBNC_USB_OTG1_CTRL_WIR      (0x80000000)  //!< Bit mask for USBNC_USB_OTG1_CTRL_WIR.

//! @brief Get value of USBNC_USB_OTG1_CTRL_WIR from a register value.
#define BG_USBNC_USB_OTG1_CTRL_WIR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG1_CTRL_WIR) >> BP_USBNC_USB_OTG1_CTRL_WIR)


//-------------------------------------------------------------------------------------------
// HW_USBNC_USB_OTG2_CTRL - USB OTG2 Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBNC_USB_OTG2_CTRL - USB OTG2 Control Register (RW)
 *
 * Reset value: 0x00003000
 *
 * The USB OTG2 control register controls the integration specific features of the USB OTG2 module.
 * These features are not directly related to the USB functionality, but control special features,
 * interfacing on the USB ports, as well as power control and wake-up functionality.
 */
typedef union _hw_usbnc_usb_otg2_ctrl
{
    reg32_t U;
    struct _hw_usbnc_usb_otg2_ctrl_bitfields
    {
        unsigned RESERVED0 : 7; //!< [6:0] Reserved
        unsigned OVER_CUR_DIS : 1; //!< [7] Disable OTG2 Overcurrent Detection
        unsigned OVER_CUR_POL : 1; //!< [8] OTG2 Polarity of Overcurrent The polarity of OTG2 port overcurrent event
        unsigned PWR_POL : 1; //!< [9] OTG2 Power Polarity This bit should be set according to PMIC Power Pin polarity.
        unsigned WIE : 1; //!< [10] OTG2 Wake-up Interrupt Enable This bit enables or disables the OTG2 wake-up interrupt.
        unsigned RESERVED1 : 3; //!< [13:11] Reserved
        unsigned WKUP_SW_EN : 1; //!< [14] OTG2 Software Wake-up Enable
        unsigned WKUP_SW : 1; //!< [15] OTG2 Software Wake-up
        unsigned WKUP_ID_EN : 1; //!< [16] OTG2 Wake-up on ID change enable
        unsigned WKUP_VBUS_EN : 1; //!< [17] OTG2 wake-up on VBUS change enable
        unsigned RESERVED2 : 13; //!< [30:18] Reserved
        unsigned WIR : 1; //!< [31] OTG2 Wake-up Interrupt Request This bit indicates that a wake-up interrupt request is received on the OTG port.
    } B;
} hw_usbnc_usb_otg2_ctrl_t;
#endif

/*
 * constants & macros for entire USBNC_USB_OTG2_CTRL register
 */
#define HW_USBNC_USB_OTG2_CTRL_ADDR      (REGS_USBNC_BASE + 0x804)

#ifndef __LANGUAGE_ASM__
#define HW_USBNC_USB_OTG2_CTRL           (*(volatile hw_usbnc_usb_otg2_ctrl_t *) HW_USBNC_USB_OTG2_CTRL_ADDR)
#define HW_USBNC_USB_OTG2_CTRL_RD()      (HW_USBNC_USB_OTG2_CTRL.U)
#define HW_USBNC_USB_OTG2_CTRL_WR(v)     (HW_USBNC_USB_OTG2_CTRL.U = (v))
#define HW_USBNC_USB_OTG2_CTRL_SET(v)    (HW_USBNC_USB_OTG2_CTRL_WR(HW_USBNC_USB_OTG2_CTRL_RD() |  (v)))
#define HW_USBNC_USB_OTG2_CTRL_CLR(v)    (HW_USBNC_USB_OTG2_CTRL_WR(HW_USBNC_USB_OTG2_CTRL_RD() & ~(v)))
#define HW_USBNC_USB_OTG2_CTRL_TOG(v)    (HW_USBNC_USB_OTG2_CTRL_WR(HW_USBNC_USB_OTG2_CTRL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBNC_USB_OTG2_CTRL bitfields
 */

/* --- Register HW_USBNC_USB_OTG2_CTRL, field OVER_CUR_DIS[7] (RW)
 *
 * Disable OTG2 Overcurrent Detection
 *
 * Values:
 * 0 - Enables overcurrent detection
 * 1 - Disables overcurrent detection
 */

#define BP_USBNC_USB_OTG2_CTRL_OVER_CUR_DIS      (7)      //!< Bit position for USBNC_USB_OTG2_CTRL_OVER_CUR_DIS.
#define BM_USBNC_USB_OTG2_CTRL_OVER_CUR_DIS      (0x00000080)  //!< Bit mask for USBNC_USB_OTG2_CTRL_OVER_CUR_DIS.

//! @brief Get value of USBNC_USB_OTG2_CTRL_OVER_CUR_DIS from a register value.
#define BG_USBNC_USB_OTG2_CTRL_OVER_CUR_DIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG2_CTRL_OVER_CUR_DIS) >> BP_USBNC_USB_OTG2_CTRL_OVER_CUR_DIS)

//! @brief Format value for bitfield USBNC_USB_OTG2_CTRL_OVER_CUR_DIS.
#define BF_USBNC_USB_OTG2_CTRL_OVER_CUR_DIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG2_CTRL_OVER_CUR_DIS) & BM_USBNC_USB_OTG2_CTRL_OVER_CUR_DIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OVER_CUR_DIS field to a new value.
#define BW_USBNC_USB_OTG2_CTRL_OVER_CUR_DIS(v)   (HW_USBNC_USB_OTG2_CTRL_WR((HW_USBNC_USB_OTG2_CTRL_RD() & ~BM_USBNC_USB_OTG2_CTRL_OVER_CUR_DIS) | BF_USBNC_USB_OTG2_CTRL_OVER_CUR_DIS(v)))
#endif


/* --- Register HW_USBNC_USB_OTG2_CTRL, field OVER_CUR_POL[8] (RW)
 *
 * OTG2 Polarity of Overcurrent The polarity of OTG2 port overcurrent event
 *
 * Values:
 * 0 - High active
 * 1 - Low active
 */

#define BP_USBNC_USB_OTG2_CTRL_OVER_CUR_POL      (8)      //!< Bit position for USBNC_USB_OTG2_CTRL_OVER_CUR_POL.
#define BM_USBNC_USB_OTG2_CTRL_OVER_CUR_POL      (0x00000100)  //!< Bit mask for USBNC_USB_OTG2_CTRL_OVER_CUR_POL.

//! @brief Get value of USBNC_USB_OTG2_CTRL_OVER_CUR_POL from a register value.
#define BG_USBNC_USB_OTG2_CTRL_OVER_CUR_POL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG2_CTRL_OVER_CUR_POL) >> BP_USBNC_USB_OTG2_CTRL_OVER_CUR_POL)

//! @brief Format value for bitfield USBNC_USB_OTG2_CTRL_OVER_CUR_POL.
#define BF_USBNC_USB_OTG2_CTRL_OVER_CUR_POL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG2_CTRL_OVER_CUR_POL) & BM_USBNC_USB_OTG2_CTRL_OVER_CUR_POL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OVER_CUR_POL field to a new value.
#define BW_USBNC_USB_OTG2_CTRL_OVER_CUR_POL(v)   (HW_USBNC_USB_OTG2_CTRL_WR((HW_USBNC_USB_OTG2_CTRL_RD() & ~BM_USBNC_USB_OTG2_CTRL_OVER_CUR_POL) | BF_USBNC_USB_OTG2_CTRL_OVER_CUR_POL(v)))
#endif


/* --- Register HW_USBNC_USB_OTG2_CTRL, field PWR_POL[9] (RW)
 *
 * OTG2 Power Polarity This bit should be set according to PMIC Power Pin polarity.
 *
 * Values:
 * 0 - PMIC Power Pin is Low active.
 * 1 - PMIC Power Pin is High active.
 */

#define BP_USBNC_USB_OTG2_CTRL_PWR_POL      (9)      //!< Bit position for USBNC_USB_OTG2_CTRL_PWR_POL.
#define BM_USBNC_USB_OTG2_CTRL_PWR_POL      (0x00000200)  //!< Bit mask for USBNC_USB_OTG2_CTRL_PWR_POL.

//! @brief Get value of USBNC_USB_OTG2_CTRL_PWR_POL from a register value.
#define BG_USBNC_USB_OTG2_CTRL_PWR_POL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG2_CTRL_PWR_POL) >> BP_USBNC_USB_OTG2_CTRL_PWR_POL)

//! @brief Format value for bitfield USBNC_USB_OTG2_CTRL_PWR_POL.
#define BF_USBNC_USB_OTG2_CTRL_PWR_POL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG2_CTRL_PWR_POL) & BM_USBNC_USB_OTG2_CTRL_PWR_POL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PWR_POL field to a new value.
#define BW_USBNC_USB_OTG2_CTRL_PWR_POL(v)   (HW_USBNC_USB_OTG2_CTRL_WR((HW_USBNC_USB_OTG2_CTRL_RD() & ~BM_USBNC_USB_OTG2_CTRL_PWR_POL) | BF_USBNC_USB_OTG2_CTRL_PWR_POL(v)))
#endif


/* --- Register HW_USBNC_USB_OTG2_CTRL, field WIE[10] (RW)
 *
 * OTG2 Wake-up Interrupt Enable This bit enables or disables the OTG2 wake-up interrupt. Disabling
 * the interrupt also clears the Interrupt request bit. Wake-up interrupt enable should be turned
 * off after receiving a wake-up interrupt and turned on again prior to going in suspend mode
 *
 * Values:
 * 0 - Interrupt Disabled
 * 1 - Interrupt Enabled
 */

#define BP_USBNC_USB_OTG2_CTRL_WIE      (10)      //!< Bit position for USBNC_USB_OTG2_CTRL_WIE.
#define BM_USBNC_USB_OTG2_CTRL_WIE      (0x00000400)  //!< Bit mask for USBNC_USB_OTG2_CTRL_WIE.

//! @brief Get value of USBNC_USB_OTG2_CTRL_WIE from a register value.
#define BG_USBNC_USB_OTG2_CTRL_WIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG2_CTRL_WIE) >> BP_USBNC_USB_OTG2_CTRL_WIE)

//! @brief Format value for bitfield USBNC_USB_OTG2_CTRL_WIE.
#define BF_USBNC_USB_OTG2_CTRL_WIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG2_CTRL_WIE) & BM_USBNC_USB_OTG2_CTRL_WIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WIE field to a new value.
#define BW_USBNC_USB_OTG2_CTRL_WIE(v)   (HW_USBNC_USB_OTG2_CTRL_WR((HW_USBNC_USB_OTG2_CTRL_RD() & ~BM_USBNC_USB_OTG2_CTRL_WIE) | BF_USBNC_USB_OTG2_CTRL_WIE(v)))
#endif


/* --- Register HW_USBNC_USB_OTG2_CTRL, field WKUP_SW_EN[14] (RW)
 *
 * OTG2 Software Wake-up Enable
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_USBNC_USB_OTG2_CTRL_WKUP_SW_EN      (14)      //!< Bit position for USBNC_USB_OTG2_CTRL_WKUP_SW_EN.
#define BM_USBNC_USB_OTG2_CTRL_WKUP_SW_EN      (0x00004000)  //!< Bit mask for USBNC_USB_OTG2_CTRL_WKUP_SW_EN.

//! @brief Get value of USBNC_USB_OTG2_CTRL_WKUP_SW_EN from a register value.
#define BG_USBNC_USB_OTG2_CTRL_WKUP_SW_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG2_CTRL_WKUP_SW_EN) >> BP_USBNC_USB_OTG2_CTRL_WKUP_SW_EN)

//! @brief Format value for bitfield USBNC_USB_OTG2_CTRL_WKUP_SW_EN.
#define BF_USBNC_USB_OTG2_CTRL_WKUP_SW_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG2_CTRL_WKUP_SW_EN) & BM_USBNC_USB_OTG2_CTRL_WKUP_SW_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKUP_SW_EN field to a new value.
#define BW_USBNC_USB_OTG2_CTRL_WKUP_SW_EN(v)   (HW_USBNC_USB_OTG2_CTRL_WR((HW_USBNC_USB_OTG2_CTRL_RD() & ~BM_USBNC_USB_OTG2_CTRL_WKUP_SW_EN) | BF_USBNC_USB_OTG2_CTRL_WKUP_SW_EN(v)))
#endif


/* --- Register HW_USBNC_USB_OTG2_CTRL, field WKUP_SW[15] (RW)
 *
 * OTG2 Software Wake-up
 *
 * Values:
 * 0 - Inactive
 * 1 - Force wake-up
 */

#define BP_USBNC_USB_OTG2_CTRL_WKUP_SW      (15)      //!< Bit position for USBNC_USB_OTG2_CTRL_WKUP_SW.
#define BM_USBNC_USB_OTG2_CTRL_WKUP_SW      (0x00008000)  //!< Bit mask for USBNC_USB_OTG2_CTRL_WKUP_SW.

//! @brief Get value of USBNC_USB_OTG2_CTRL_WKUP_SW from a register value.
#define BG_USBNC_USB_OTG2_CTRL_WKUP_SW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG2_CTRL_WKUP_SW) >> BP_USBNC_USB_OTG2_CTRL_WKUP_SW)

//! @brief Format value for bitfield USBNC_USB_OTG2_CTRL_WKUP_SW.
#define BF_USBNC_USB_OTG2_CTRL_WKUP_SW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG2_CTRL_WKUP_SW) & BM_USBNC_USB_OTG2_CTRL_WKUP_SW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKUP_SW field to a new value.
#define BW_USBNC_USB_OTG2_CTRL_WKUP_SW(v)   (HW_USBNC_USB_OTG2_CTRL_WR((HW_USBNC_USB_OTG2_CTRL_RD() & ~BM_USBNC_USB_OTG2_CTRL_WKUP_SW) | BF_USBNC_USB_OTG2_CTRL_WKUP_SW(v)))
#endif


/* --- Register HW_USBNC_USB_OTG2_CTRL, field WKUP_ID_EN[16] (RW)
 *
 * OTG2 Wake-up on ID change enable
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_USBNC_USB_OTG2_CTRL_WKUP_ID_EN      (16)      //!< Bit position for USBNC_USB_OTG2_CTRL_WKUP_ID_EN.
#define BM_USBNC_USB_OTG2_CTRL_WKUP_ID_EN      (0x00010000)  //!< Bit mask for USBNC_USB_OTG2_CTRL_WKUP_ID_EN.

//! @brief Get value of USBNC_USB_OTG2_CTRL_WKUP_ID_EN from a register value.
#define BG_USBNC_USB_OTG2_CTRL_WKUP_ID_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG2_CTRL_WKUP_ID_EN) >> BP_USBNC_USB_OTG2_CTRL_WKUP_ID_EN)

//! @brief Format value for bitfield USBNC_USB_OTG2_CTRL_WKUP_ID_EN.
#define BF_USBNC_USB_OTG2_CTRL_WKUP_ID_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG2_CTRL_WKUP_ID_EN) & BM_USBNC_USB_OTG2_CTRL_WKUP_ID_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKUP_ID_EN field to a new value.
#define BW_USBNC_USB_OTG2_CTRL_WKUP_ID_EN(v)   (HW_USBNC_USB_OTG2_CTRL_WR((HW_USBNC_USB_OTG2_CTRL_RD() & ~BM_USBNC_USB_OTG2_CTRL_WKUP_ID_EN) | BF_USBNC_USB_OTG2_CTRL_WKUP_ID_EN(v)))
#endif


/* --- Register HW_USBNC_USB_OTG2_CTRL, field WKUP_VBUS_EN[17] (RW)
 *
 * OTG2 wake-up on VBUS change enable
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_USBNC_USB_OTG2_CTRL_WKUP_VBUS_EN      (17)      //!< Bit position for USBNC_USB_OTG2_CTRL_WKUP_VBUS_EN.
#define BM_USBNC_USB_OTG2_CTRL_WKUP_VBUS_EN      (0x00020000)  //!< Bit mask for USBNC_USB_OTG2_CTRL_WKUP_VBUS_EN.

//! @brief Get value of USBNC_USB_OTG2_CTRL_WKUP_VBUS_EN from a register value.
#define BG_USBNC_USB_OTG2_CTRL_WKUP_VBUS_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG2_CTRL_WKUP_VBUS_EN) >> BP_USBNC_USB_OTG2_CTRL_WKUP_VBUS_EN)

//! @brief Format value for bitfield USBNC_USB_OTG2_CTRL_WKUP_VBUS_EN.
#define BF_USBNC_USB_OTG2_CTRL_WKUP_VBUS_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG2_CTRL_WKUP_VBUS_EN) & BM_USBNC_USB_OTG2_CTRL_WKUP_VBUS_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKUP_VBUS_EN field to a new value.
#define BW_USBNC_USB_OTG2_CTRL_WKUP_VBUS_EN(v)   (HW_USBNC_USB_OTG2_CTRL_WR((HW_USBNC_USB_OTG2_CTRL_RD() & ~BM_USBNC_USB_OTG2_CTRL_WKUP_VBUS_EN) | BF_USBNC_USB_OTG2_CTRL_WKUP_VBUS_EN(v)))
#endif


/* --- Register HW_USBNC_USB_OTG2_CTRL, field WIR[31] (RO)
 *
 * OTG2 Wake-up Interrupt Request This bit indicates that a wake-up interrupt request is received on
 * the OTG port. This bit is cleared by disabling the wake-up interrupt (clearing bit "OWIE").
 *
 * Values:
 * 0 - No wake-up interrupt request received
 * 1 - Wake-up Interrupt Request received
 */

#define BP_USBNC_USB_OTG2_CTRL_WIR      (31)      //!< Bit position for USBNC_USB_OTG2_CTRL_WIR.
#define BM_USBNC_USB_OTG2_CTRL_WIR      (0x80000000)  //!< Bit mask for USBNC_USB_OTG2_CTRL_WIR.

//! @brief Get value of USBNC_USB_OTG2_CTRL_WIR from a register value.
#define BG_USBNC_USB_OTG2_CTRL_WIR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG2_CTRL_WIR) >> BP_USBNC_USB_OTG2_CTRL_WIR)


//-------------------------------------------------------------------------------------------
// HW_USBNC_USB_UH_CTRL - USB Host Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBNC_USB_UH_CTRL - USB Host Control Register (RW)
 *
 * Reset value: 0x00001000
 *
 * The USB Host control register controls the integration specific features of the USB host module.
 * These features are not directly related to the USB functionality, but control special features,
 * interfacing on the USB ports, as well as power control and wake-up functionality.
 */
typedef union _hw_usbnc_usb_uh_ctrl
{
    reg32_t U;
    struct _hw_usbnc_usb_uh_ctrl_bitfields
    {
        unsigned RESERVED0 : 10; //!< [9:0] Reserved
        unsigned WIE : 1; //!< [10] Host Wake-up Interrupt Enable This bit enables or disables the Host wake-up interrupt.
        unsigned RESET : 1; //!< [11] Force Host UTMI PHY Reset This bit is used to force a reset to the UTMI PHY.
        unsigned SUSPENDM : 1; //!< [12] Force Host UTMI PHY Suspend This bit is used to put PHY into suspend mode.
        unsigned _480M_CLK_ON : 1; //!< [13] Force OTG UTMI PHY 480M clock output on when Host is not in suspend mode.
        unsigned WKUP_SW_EN : 1; //!< [14] Host Software Wake-up Enable
        unsigned WKUP_SW : 1; //!< [15] Host Software Wake-up
        unsigned RESERVED1 : 15; //!< [30:16] Reserved
        unsigned WIR : 1; //!< [31] Host Wake-up Interrupt Request This bit indicates that a wake-up interrupt request is received on the Host port.
    } B;
} hw_usbnc_usb_uh_ctrl_t;
#endif

/*
 * constants & macros for entire USBNC_USB_UH_CTRL register
 */
#define HW_USBNC_USB_UH_CTRL_ADDR      (REGS_USBNC_BASE + 0x808)

#ifndef __LANGUAGE_ASM__
#define HW_USBNC_USB_UH_CTRL           (*(volatile hw_usbnc_usb_uh_ctrl_t *) HW_USBNC_USB_UH_CTRL_ADDR)
#define HW_USBNC_USB_UH_CTRL_RD()      (HW_USBNC_USB_UH_CTRL.U)
#define HW_USBNC_USB_UH_CTRL_WR(v)     (HW_USBNC_USB_UH_CTRL.U = (v))
#define HW_USBNC_USB_UH_CTRL_SET(v)    (HW_USBNC_USB_UH_CTRL_WR(HW_USBNC_USB_UH_CTRL_RD() |  (v)))
#define HW_USBNC_USB_UH_CTRL_CLR(v)    (HW_USBNC_USB_UH_CTRL_WR(HW_USBNC_USB_UH_CTRL_RD() & ~(v)))
#define HW_USBNC_USB_UH_CTRL_TOG(v)    (HW_USBNC_USB_UH_CTRL_WR(HW_USBNC_USB_UH_CTRL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBNC_USB_UH_CTRL bitfields
 */

/* --- Register HW_USBNC_USB_UH_CTRL, field WIE[10] (RW)
 *
 * Host Wake-up Interrupt Enable This bit enables or disables the Host wake-up interrupt. Disabling
 * the interrupt also clears the Interrupt request bit. Wake-up interrupt enable should be turned
 * off after receiving a wake-up interrupt and turned on again prior to going in suspend mode
 *
 * Values:
 * 0 - Interrupt Disabled
 * 1 - Interrupt Enabled
 */

#define BP_USBNC_USB_UH_CTRL_WIE      (10)      //!< Bit position for USBNC_USB_UH_CTRL_WIE.
#define BM_USBNC_USB_UH_CTRL_WIE      (0x00000400)  //!< Bit mask for USBNC_USB_UH_CTRL_WIE.

//! @brief Get value of USBNC_USB_UH_CTRL_WIE from a register value.
#define BG_USBNC_USB_UH_CTRL_WIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_UH_CTRL_WIE) >> BP_USBNC_USB_UH_CTRL_WIE)

//! @brief Format value for bitfield USBNC_USB_UH_CTRL_WIE.
#define BF_USBNC_USB_UH_CTRL_WIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_UH_CTRL_WIE) & BM_USBNC_USB_UH_CTRL_WIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WIE field to a new value.
#define BW_USBNC_USB_UH_CTRL_WIE(v)   (HW_USBNC_USB_UH_CTRL_WR((HW_USBNC_USB_UH_CTRL_RD() & ~BM_USBNC_USB_UH_CTRL_WIE) | BF_USBNC_USB_UH_CTRL_WIE(v)))
#endif


/* --- Register HW_USBNC_USB_UH_CTRL, field RESET[11] (RW)
 *
 * Force Host UTMI PHY Reset This bit is used to force a reset to the UTMI PHY. During normal
 * operation, S/W should set USBCMD.RST bit to reset the UTMI PHY For Freescale test only.
 *
 * Values:
 * 0 - Inactive
 * 1 - Reset the PHY
 */

#define BP_USBNC_USB_UH_CTRL_RESET      (11)      //!< Bit position for USBNC_USB_UH_CTRL_RESET.
#define BM_USBNC_USB_UH_CTRL_RESET      (0x00000800)  //!< Bit mask for USBNC_USB_UH_CTRL_RESET.

//! @brief Get value of USBNC_USB_UH_CTRL_RESET from a register value.
#define BG_USBNC_USB_UH_CTRL_RESET(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_UH_CTRL_RESET) >> BP_USBNC_USB_UH_CTRL_RESET)

//! @brief Format value for bitfield USBNC_USB_UH_CTRL_RESET.
#define BF_USBNC_USB_UH_CTRL_RESET(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_UH_CTRL_RESET) & BM_USBNC_USB_UH_CTRL_RESET)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RESET field to a new value.
#define BW_USBNC_USB_UH_CTRL_RESET(v)   (HW_USBNC_USB_UH_CTRL_WR((HW_USBNC_USB_UH_CTRL_RD() & ~BM_USBNC_USB_UH_CTRL_RESET) | BF_USBNC_USB_UH_CTRL_RESET(v)))
#endif


/* --- Register HW_USBNC_USB_UH_CTRL, field SUSPENDM[12] (RW)
 *
 * Force Host UTMI PHY Suspend This bit is used to put PHY into suspend mode. During normal
 * operation, S/W should set bits SUSP and PHCD in USB core register PORTSC1 to put PHY into suspend
 * mode. For Freescale test only.
 *
 * Values:
 * 0 - Enable
 * 1 - Disable
 */

#define BP_USBNC_USB_UH_CTRL_SUSPENDM      (12)      //!< Bit position for USBNC_USB_UH_CTRL_SUSPENDM.
#define BM_USBNC_USB_UH_CTRL_SUSPENDM      (0x00001000)  //!< Bit mask for USBNC_USB_UH_CTRL_SUSPENDM.

//! @brief Get value of USBNC_USB_UH_CTRL_SUSPENDM from a register value.
#define BG_USBNC_USB_UH_CTRL_SUSPENDM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_UH_CTRL_SUSPENDM) >> BP_USBNC_USB_UH_CTRL_SUSPENDM)

//! @brief Format value for bitfield USBNC_USB_UH_CTRL_SUSPENDM.
#define BF_USBNC_USB_UH_CTRL_SUSPENDM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_UH_CTRL_SUSPENDM) & BM_USBNC_USB_UH_CTRL_SUSPENDM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SUSPENDM field to a new value.
#define BW_USBNC_USB_UH_CTRL_SUSPENDM(v)   (HW_USBNC_USB_UH_CTRL_WR((HW_USBNC_USB_UH_CTRL_RD() & ~BM_USBNC_USB_UH_CTRL_SUSPENDM) | BF_USBNC_USB_UH_CTRL_SUSPENDM(v)))
#endif


/* --- Register HW_USBNC_USB_UH_CTRL, field _480M_CLK_ON[13] (RW)
 *
 * Force OTG UTMI PHY 480M clock output on when Host is not in suspend mode.
 *
 * Values:
 * 0 - Inactive
 * 1 - Force OTG UTMI PHY 480M clock output on
 */

#define BP_USBNC_USB_UH_CTRL__480M_CLK_ON      (13)      //!< Bit position for USBNC_USB_UH_CTRL__480M_CLK_ON.
#define BM_USBNC_USB_UH_CTRL__480M_CLK_ON      (0x00002000)  //!< Bit mask for USBNC_USB_UH_CTRL__480M_CLK_ON.

//! @brief Get value of USBNC_USB_UH_CTRL__480M_CLK_ON from a register value.
#define BG_USBNC_USB_UH_CTRL__480M_CLK_ON(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_UH_CTRL__480M_CLK_ON) >> BP_USBNC_USB_UH_CTRL__480M_CLK_ON)

//! @brief Format value for bitfield USBNC_USB_UH_CTRL__480M_CLK_ON.
#define BF_USBNC_USB_UH_CTRL__480M_CLK_ON(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_UH_CTRL__480M_CLK_ON) & BM_USBNC_USB_UH_CTRL__480M_CLK_ON)

#ifndef __LANGUAGE_ASM__
//! @brief Set the _480M_CLK_ON field to a new value.
#define BW_USBNC_USB_UH_CTRL__480M_CLK_ON(v)   (HW_USBNC_USB_UH_CTRL_WR((HW_USBNC_USB_UH_CTRL_RD() & ~BM_USBNC_USB_UH_CTRL__480M_CLK_ON) | BF_USBNC_USB_UH_CTRL__480M_CLK_ON(v)))
#endif


/* --- Register HW_USBNC_USB_UH_CTRL, field WKUP_SW_EN[14] (RW)
 *
 * Host Software Wake-up Enable
 *
 * Values:
 * 0 - Disable
 * 1 - Enable
 */

#define BP_USBNC_USB_UH_CTRL_WKUP_SW_EN      (14)      //!< Bit position for USBNC_USB_UH_CTRL_WKUP_SW_EN.
#define BM_USBNC_USB_UH_CTRL_WKUP_SW_EN      (0x00004000)  //!< Bit mask for USBNC_USB_UH_CTRL_WKUP_SW_EN.

//! @brief Get value of USBNC_USB_UH_CTRL_WKUP_SW_EN from a register value.
#define BG_USBNC_USB_UH_CTRL_WKUP_SW_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_UH_CTRL_WKUP_SW_EN) >> BP_USBNC_USB_UH_CTRL_WKUP_SW_EN)

//! @brief Format value for bitfield USBNC_USB_UH_CTRL_WKUP_SW_EN.
#define BF_USBNC_USB_UH_CTRL_WKUP_SW_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_UH_CTRL_WKUP_SW_EN) & BM_USBNC_USB_UH_CTRL_WKUP_SW_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKUP_SW_EN field to a new value.
#define BW_USBNC_USB_UH_CTRL_WKUP_SW_EN(v)   (HW_USBNC_USB_UH_CTRL_WR((HW_USBNC_USB_UH_CTRL_RD() & ~BM_USBNC_USB_UH_CTRL_WKUP_SW_EN) | BF_USBNC_USB_UH_CTRL_WKUP_SW_EN(v)))
#endif


/* --- Register HW_USBNC_USB_UH_CTRL, field WKUP_SW[15] (RW)
 *
 * Host Software Wake-up
 *
 * Values:
 * 0 - Inactive
 * 1 - Force wake-up
 */

#define BP_USBNC_USB_UH_CTRL_WKUP_SW      (15)      //!< Bit position for USBNC_USB_UH_CTRL_WKUP_SW.
#define BM_USBNC_USB_UH_CTRL_WKUP_SW      (0x00008000)  //!< Bit mask for USBNC_USB_UH_CTRL_WKUP_SW.

//! @brief Get value of USBNC_USB_UH_CTRL_WKUP_SW from a register value.
#define BG_USBNC_USB_UH_CTRL_WKUP_SW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_UH_CTRL_WKUP_SW) >> BP_USBNC_USB_UH_CTRL_WKUP_SW)

//! @brief Format value for bitfield USBNC_USB_UH_CTRL_WKUP_SW.
#define BF_USBNC_USB_UH_CTRL_WKUP_SW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_UH_CTRL_WKUP_SW) & BM_USBNC_USB_UH_CTRL_WKUP_SW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKUP_SW field to a new value.
#define BW_USBNC_USB_UH_CTRL_WKUP_SW(v)   (HW_USBNC_USB_UH_CTRL_WR((HW_USBNC_USB_UH_CTRL_RD() & ~BM_USBNC_USB_UH_CTRL_WKUP_SW) | BF_USBNC_USB_UH_CTRL_WKUP_SW(v)))
#endif


/* --- Register HW_USBNC_USB_UH_CTRL, field WIR[31] (RO)
 *
 * Host Wake-up Interrupt Request This bit indicates that a wake-up interrupt request is received on
 * the Host port. This bit is cleared by disabling the wake-up interrupt (clearing bit "WIE").
 *
 * Values:
 * 0 - No wake-up interrupt request received
 * 1 - Wake-up Interrupt Request received
 */

#define BP_USBNC_USB_UH_CTRL_WIR      (31)      //!< Bit position for USBNC_USB_UH_CTRL_WIR.
#define BM_USBNC_USB_UH_CTRL_WIR      (0x80000000)  //!< Bit mask for USBNC_USB_UH_CTRL_WIR.

//! @brief Get value of USBNC_USB_UH_CTRL_WIR from a register value.
#define BG_USBNC_USB_UH_CTRL_WIR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_UH_CTRL_WIR) >> BP_USBNC_USB_UH_CTRL_WIR)


//-------------------------------------------------------------------------------------------
// HW_USBNC_USB_UH_HSIC_CTRL - USB Host HSIC Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBNC_USB_UH_HSIC_CTRL - USB Host HSIC Control Register (RW)
 *
 * Reset value: 0x00000042
 *
 * The USB Host HSIC control register controls Host high speed IC configuration. These features are
 * not directly related to the USB functionality, but control special features, interfacing on the
 * USB ports, as well as power control.
 */
typedef union _hw_usbnc_usb_uh_hsic_ctrl
{
    reg32_t U;
    struct _hw_usbnc_usb_uh_hsic_ctrl_bitfields
    {
        unsigned RESERVED0 : 11; //!< [10:0] Reserved
        unsigned HSIC_CLK_ON : 1; //!< [11] Force Host HSIC module 480M clock on, even when in Host is in suspend mode.
        unsigned HSIC_EN : 1; //!< [12] Host HSIC enable
        unsigned RESERVED1 : 18; //!< [30:13] Reserved
        unsigned CLK_VLD : 1; //!< [31] Indicating whether Host HSIC clock is valid.
    } B;
} hw_usbnc_usb_uh_hsic_ctrl_t;
#endif

/*
 * constants & macros for entire USBNC_USB_UH_HSIC_CTRL register
 */
#define HW_USBNC_USB_UH_HSIC_CTRL_ADDR      (REGS_USBNC_BASE + 0x810)

#ifndef __LANGUAGE_ASM__
#define HW_USBNC_USB_UH_HSIC_CTRL           (*(volatile hw_usbnc_usb_uh_hsic_ctrl_t *) HW_USBNC_USB_UH_HSIC_CTRL_ADDR)
#define HW_USBNC_USB_UH_HSIC_CTRL_RD()      (HW_USBNC_USB_UH_HSIC_CTRL.U)
#define HW_USBNC_USB_UH_HSIC_CTRL_WR(v)     (HW_USBNC_USB_UH_HSIC_CTRL.U = (v))
#define HW_USBNC_USB_UH_HSIC_CTRL_SET(v)    (HW_USBNC_USB_UH_HSIC_CTRL_WR(HW_USBNC_USB_UH_HSIC_CTRL_RD() |  (v)))
#define HW_USBNC_USB_UH_HSIC_CTRL_CLR(v)    (HW_USBNC_USB_UH_HSIC_CTRL_WR(HW_USBNC_USB_UH_HSIC_CTRL_RD() & ~(v)))
#define HW_USBNC_USB_UH_HSIC_CTRL_TOG(v)    (HW_USBNC_USB_UH_HSIC_CTRL_WR(HW_USBNC_USB_UH_HSIC_CTRL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBNC_USB_UH_HSIC_CTRL bitfields
 */

/* --- Register HW_USBNC_USB_UH_HSIC_CTRL, field HSIC_CLK_ON[11] (RW)
 *
 * Force Host HSIC module 480M clock on, even when in Host is in suspend mode.
 *
 * Values:
 * 0 - Inactive
 * 1 - Active
 */

#define BP_USBNC_USB_UH_HSIC_CTRL_HSIC_CLK_ON      (11)      //!< Bit position for USBNC_USB_UH_HSIC_CTRL_HSIC_CLK_ON.
#define BM_USBNC_USB_UH_HSIC_CTRL_HSIC_CLK_ON      (0x00000800)  //!< Bit mask for USBNC_USB_UH_HSIC_CTRL_HSIC_CLK_ON.

//! @brief Get value of USBNC_USB_UH_HSIC_CTRL_HSIC_CLK_ON from a register value.
#define BG_USBNC_USB_UH_HSIC_CTRL_HSIC_CLK_ON(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_UH_HSIC_CTRL_HSIC_CLK_ON) >> BP_USBNC_USB_UH_HSIC_CTRL_HSIC_CLK_ON)

//! @brief Format value for bitfield USBNC_USB_UH_HSIC_CTRL_HSIC_CLK_ON.
#define BF_USBNC_USB_UH_HSIC_CTRL_HSIC_CLK_ON(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_UH_HSIC_CTRL_HSIC_CLK_ON) & BM_USBNC_USB_UH_HSIC_CTRL_HSIC_CLK_ON)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HSIC_CLK_ON field to a new value.
#define BW_USBNC_USB_UH_HSIC_CTRL_HSIC_CLK_ON(v)   (HW_USBNC_USB_UH_HSIC_CTRL_WR((HW_USBNC_USB_UH_HSIC_CTRL_RD() & ~BM_USBNC_USB_UH_HSIC_CTRL_HSIC_CLK_ON) | BF_USBNC_USB_UH_HSIC_CTRL_HSIC_CLK_ON(v)))
#endif


/* --- Register HW_USBNC_USB_UH_HSIC_CTRL, field HSIC_EN[12] (RW)
 *
 * Host HSIC enable
 *
 * Values:
 * 0 - Disabled
 * 1 - Enabled
 */

#define BP_USBNC_USB_UH_HSIC_CTRL_HSIC_EN      (12)      //!< Bit position for USBNC_USB_UH_HSIC_CTRL_HSIC_EN.
#define BM_USBNC_USB_UH_HSIC_CTRL_HSIC_EN      (0x00001000)  //!< Bit mask for USBNC_USB_UH_HSIC_CTRL_HSIC_EN.

//! @brief Get value of USBNC_USB_UH_HSIC_CTRL_HSIC_EN from a register value.
#define BG_USBNC_USB_UH_HSIC_CTRL_HSIC_EN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_UH_HSIC_CTRL_HSIC_EN) >> BP_USBNC_USB_UH_HSIC_CTRL_HSIC_EN)

//! @brief Format value for bitfield USBNC_USB_UH_HSIC_CTRL_HSIC_EN.
#define BF_USBNC_USB_UH_HSIC_CTRL_HSIC_EN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_UH_HSIC_CTRL_HSIC_EN) & BM_USBNC_USB_UH_HSIC_CTRL_HSIC_EN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HSIC_EN field to a new value.
#define BW_USBNC_USB_UH_HSIC_CTRL_HSIC_EN(v)   (HW_USBNC_USB_UH_HSIC_CTRL_WR((HW_USBNC_USB_UH_HSIC_CTRL_RD() & ~BM_USBNC_USB_UH_HSIC_CTRL_HSIC_EN) | BF_USBNC_USB_UH_HSIC_CTRL_HSIC_EN(v)))
#endif


/* --- Register HW_USBNC_USB_UH_HSIC_CTRL, field CLK_VLD[31] (RO)
 *
 * Indicating whether Host HSIC clock is valid.
 *
 * Values:
 * 1 - Valid
 * 2 - Invalid
 */

#define BP_USBNC_USB_UH_HSIC_CTRL_CLK_VLD      (31)      //!< Bit position for USBNC_USB_UH_HSIC_CTRL_CLK_VLD.
#define BM_USBNC_USB_UH_HSIC_CTRL_CLK_VLD      (0x80000000)  //!< Bit mask for USBNC_USB_UH_HSIC_CTRL_CLK_VLD.

//! @brief Get value of USBNC_USB_UH_HSIC_CTRL_CLK_VLD from a register value.
#define BG_USBNC_USB_UH_HSIC_CTRL_CLK_VLD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_UH_HSIC_CTRL_CLK_VLD) >> BP_USBNC_USB_UH_HSIC_CTRL_CLK_VLD)


//-------------------------------------------------------------------------------------------
// HW_USBNC_USB_OTG1_PHY_CTRL_0 - OTG1 UTMI PHY Control 0 Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBNC_USB_OTG1_PHY_CTRL_0 - OTG1 UTMI PHY Control 0 Register (RW)
 *
 * Reset value: 0x00000000
 *
 * USB OTG1 UTMI PHY control register 0 is used to control the on-chip OTG1 UTMI PHY.
 */
typedef union _hw_usbnc_usb_otg1_phy_ctrl_0
{
    reg32_t U;
    struct _hw_usbnc_usb_otg1_phy_ctrl_0_bitfields
    {
        unsigned RESERVED0 : 31; //!< [30:0] Reserved.
        unsigned UTMI_CLK_VLD : 1; //!< [31] Indicating whether OTG1 UTMI PHY clock is valid
    } B;
} hw_usbnc_usb_otg1_phy_ctrl_0_t;
#endif

/*
 * constants & macros for entire USBNC_USB_OTG1_PHY_CTRL_0 register
 */
#define HW_USBNC_USB_OTG1_PHY_CTRL_0_ADDR      (REGS_USBNC_BASE + 0x818)

#ifndef __LANGUAGE_ASM__
#define HW_USBNC_USB_OTG1_PHY_CTRL_0           (*(volatile hw_usbnc_usb_otg1_phy_ctrl_0_t *) HW_USBNC_USB_OTG1_PHY_CTRL_0_ADDR)
#define HW_USBNC_USB_OTG1_PHY_CTRL_0_RD()      (HW_USBNC_USB_OTG1_PHY_CTRL_0.U)
#define HW_USBNC_USB_OTG1_PHY_CTRL_0_WR(v)     (HW_USBNC_USB_OTG1_PHY_CTRL_0.U = (v))
#define HW_USBNC_USB_OTG1_PHY_CTRL_0_SET(v)    (HW_USBNC_USB_OTG1_PHY_CTRL_0_WR(HW_USBNC_USB_OTG1_PHY_CTRL_0_RD() |  (v)))
#define HW_USBNC_USB_OTG1_PHY_CTRL_0_CLR(v)    (HW_USBNC_USB_OTG1_PHY_CTRL_0_WR(HW_USBNC_USB_OTG1_PHY_CTRL_0_RD() & ~(v)))
#define HW_USBNC_USB_OTG1_PHY_CTRL_0_TOG(v)    (HW_USBNC_USB_OTG1_PHY_CTRL_0_WR(HW_USBNC_USB_OTG1_PHY_CTRL_0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBNC_USB_OTG1_PHY_CTRL_0 bitfields
 */

/* --- Register HW_USBNC_USB_OTG1_PHY_CTRL_0, field UTMI_CLK_VLD[31] (RW)
 *
 * Indicating whether OTG1 UTMI PHY clock is valid
 *
 * Values:
 * 0 - Invalid
 * 1 - Valid
 */

#define BP_USBNC_USB_OTG1_PHY_CTRL_0_UTMI_CLK_VLD      (31)      //!< Bit position for USBNC_USB_OTG1_PHY_CTRL_0_UTMI_CLK_VLD.
#define BM_USBNC_USB_OTG1_PHY_CTRL_0_UTMI_CLK_VLD      (0x80000000)  //!< Bit mask for USBNC_USB_OTG1_PHY_CTRL_0_UTMI_CLK_VLD.

//! @brief Get value of USBNC_USB_OTG1_PHY_CTRL_0_UTMI_CLK_VLD from a register value.
#define BG_USBNC_USB_OTG1_PHY_CTRL_0_UTMI_CLK_VLD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG1_PHY_CTRL_0_UTMI_CLK_VLD) >> BP_USBNC_USB_OTG1_PHY_CTRL_0_UTMI_CLK_VLD)

//! @brief Format value for bitfield USBNC_USB_OTG1_PHY_CTRL_0_UTMI_CLK_VLD.
#define BF_USBNC_USB_OTG1_PHY_CTRL_0_UTMI_CLK_VLD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG1_PHY_CTRL_0_UTMI_CLK_VLD) & BM_USBNC_USB_OTG1_PHY_CTRL_0_UTMI_CLK_VLD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UTMI_CLK_VLD field to a new value.
#define BW_USBNC_USB_OTG1_PHY_CTRL_0_UTMI_CLK_VLD(v)   (HW_USBNC_USB_OTG1_PHY_CTRL_0_WR((HW_USBNC_USB_OTG1_PHY_CTRL_0_RD() & ~BM_USBNC_USB_OTG1_PHY_CTRL_0_UTMI_CLK_VLD) | BF_USBNC_USB_OTG1_PHY_CTRL_0_UTMI_CLK_VLD(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_USBNC_USB_OTG2_PHY_CTRL_0 - OTG2 UTMI PHY Control 0 Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBNC_USB_OTG2_PHY_CTRL_0 - OTG2 UTMI PHY Control 0 Register (RW)
 *
 * Reset value: 0x00000098
 *
 * USB OTG2 UTMI PHY Control Register 0 are used to control the on-chip OTG2 UTMI PHY.
 */
typedef union _hw_usbnc_usb_otg2_phy_ctrl_0
{
    reg32_t U;
    struct _hw_usbnc_usb_otg2_phy_ctrl_0_bitfields
    {
        unsigned RESERVED0 : 31; //!< [30:0] Reserved.
        unsigned UTMI_CLK_VLD : 1; //!< [31] Indicating whether OTG2 UTMI PHY clock is valid
    } B;
} hw_usbnc_usb_otg2_phy_ctrl_0_t;
#endif

/*
 * constants & macros for entire USBNC_USB_OTG2_PHY_CTRL_0 register
 */
#define HW_USBNC_USB_OTG2_PHY_CTRL_0_ADDR      (REGS_USBNC_BASE + 0x81c)

#ifndef __LANGUAGE_ASM__
#define HW_USBNC_USB_OTG2_PHY_CTRL_0           (*(volatile hw_usbnc_usb_otg2_phy_ctrl_0_t *) HW_USBNC_USB_OTG2_PHY_CTRL_0_ADDR)
#define HW_USBNC_USB_OTG2_PHY_CTRL_0_RD()      (HW_USBNC_USB_OTG2_PHY_CTRL_0.U)
#define HW_USBNC_USB_OTG2_PHY_CTRL_0_WR(v)     (HW_USBNC_USB_OTG2_PHY_CTRL_0.U = (v))
#define HW_USBNC_USB_OTG2_PHY_CTRL_0_SET(v)    (HW_USBNC_USB_OTG2_PHY_CTRL_0_WR(HW_USBNC_USB_OTG2_PHY_CTRL_0_RD() |  (v)))
#define HW_USBNC_USB_OTG2_PHY_CTRL_0_CLR(v)    (HW_USBNC_USB_OTG2_PHY_CTRL_0_WR(HW_USBNC_USB_OTG2_PHY_CTRL_0_RD() & ~(v)))
#define HW_USBNC_USB_OTG2_PHY_CTRL_0_TOG(v)    (HW_USBNC_USB_OTG2_PHY_CTRL_0_WR(HW_USBNC_USB_OTG2_PHY_CTRL_0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBNC_USB_OTG2_PHY_CTRL_0 bitfields
 */

/* --- Register HW_USBNC_USB_OTG2_PHY_CTRL_0, field UTMI_CLK_VLD[31] (RW)
 *
 * Indicating whether OTG2 UTMI PHY clock is valid
 *
 * Values:
 * 0 - Invalid
 * 1 - Valid
 */

#define BP_USBNC_USB_OTG2_PHY_CTRL_0_UTMI_CLK_VLD      (31)      //!< Bit position for USBNC_USB_OTG2_PHY_CTRL_0_UTMI_CLK_VLD.
#define BM_USBNC_USB_OTG2_PHY_CTRL_0_UTMI_CLK_VLD      (0x80000000)  //!< Bit mask for USBNC_USB_OTG2_PHY_CTRL_0_UTMI_CLK_VLD.

//! @brief Get value of USBNC_USB_OTG2_PHY_CTRL_0_UTMI_CLK_VLD from a register value.
#define BG_USBNC_USB_OTG2_PHY_CTRL_0_UTMI_CLK_VLD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBNC_USB_OTG2_PHY_CTRL_0_UTMI_CLK_VLD) >> BP_USBNC_USB_OTG2_PHY_CTRL_0_UTMI_CLK_VLD)

//! @brief Format value for bitfield USBNC_USB_OTG2_PHY_CTRL_0_UTMI_CLK_VLD.
#define BF_USBNC_USB_OTG2_PHY_CTRL_0_UTMI_CLK_VLD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBNC_USB_OTG2_PHY_CTRL_0_UTMI_CLK_VLD) & BM_USBNC_USB_OTG2_PHY_CTRL_0_UTMI_CLK_VLD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UTMI_CLK_VLD field to a new value.
#define BW_USBNC_USB_OTG2_PHY_CTRL_0_UTMI_CLK_VLD(v)   (HW_USBNC_USB_OTG2_PHY_CTRL_0_WR((HW_USBNC_USB_OTG2_PHY_CTRL_0_RD() & ~BM_USBNC_USB_OTG2_PHY_CTRL_0_UTMI_CLK_VLD) | BF_USBNC_USB_OTG2_PHY_CTRL_0_UTMI_CLK_VLD(v)))
#endif



/*!
 * @brief All USBNC module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_usbnc
{
    reg32_t _reserved0[512];
    volatile hw_usbnc_usb_otg1_ctrl_t USB_OTG1_CTRL; //!< USB OTG1 Control Register
    volatile hw_usbnc_usb_otg2_ctrl_t USB_OTG2_CTRL; //!< USB OTG2 Control Register
    volatile hw_usbnc_usb_uh_ctrl_t USB_UH_CTRL; //!< USB Host Control Register
    reg32_t _reserved1;
    volatile hw_usbnc_usb_uh_hsic_ctrl_t USB_UH_HSIC_CTRL; //!< USB Host HSIC Control Register
    reg32_t _reserved2;
    volatile hw_usbnc_usb_otg1_phy_ctrl_0_t USB_OTG1_PHY_CTRL_0; //!< OTG1 UTMI PHY Control 0 Register
    volatile hw_usbnc_usb_otg2_phy_ctrl_0_t USB_OTG2_PHY_CTRL_0; //!< OTG2 UTMI PHY Control 0 Register
} hw_usbnc_t;
#pragma pack()

//! @brief Macro to access all USBNC registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_USBNC(0)</code>.
#define HW_USBNC     (*(volatile hw_usbnc_t *) REGS_USBNC_BASE)

#endif


#endif // __HW_USBNC_REGISTERS_H__
