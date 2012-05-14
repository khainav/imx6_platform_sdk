/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef __HW_QOS_REGISTERS_H__
#define __HW_QOS_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SL QOS registers defined in this header file.
 *
 * - HW_QOS_CTRL - QOS Control Register
 * - HW_QOS_AXI_QOS0 - AXI QOS Register
 * - HW_QOS_AXI_QOS1 - AXI QOS Register
 * - HW_QOS_AXI_QOS2 - AXI QOS Register
 * - HW_QOS_EMI_PRIORITY0 - EMI priority Registers
 * - HW_QOS_EMI_PRIORITY1 - EMI priority Registers
 * - HW_QOS_EMI_PRIORITY2 - EMI priority Registers
 * - HW_QOS_DISABLE - AXI Master Disble Register
 * - HW_QOS_VERSION - QOS Version Register
 *
 * - hw_qos_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_QOS_BASE
#define HW_QOS_INSTANCE_COUNT (1) //!< Number of instances of the QOS module.
#define REGS_QOS_BASE (0x02094000) //!< Base address for QOS.
#endif
//@}


//-------------------------------------------------------------------------------------------
// HW_QOS_CTRL - QOS Control Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_QOS_CTRL - QOS Control Register (RW)
 *
 * Reset value: 0xc0000000
 *
 * The Control Register specifies the reset state and the interrupt controls for the Performance
 * Monitor.  This register controls functions of the QoS module.
 */
typedef union _hw_qos_ctrl
{
    reg32_t U;
    struct _hw_qos_ctrl_bitfields
    {
        unsigned EMI_PRIORITY_MODE : 1; //!< [0] Set this bit to one to enable QoS and priority values to be set separately for the AXI fabric and EMI.
        unsigned XLATE_AXI_MODE : 1; //!< [1] This bit selects the way in which AXI QoS information is translated into EMI priority values.
        unsigned EPDC_PRIORITY_BOOST : 2; //!< [3:2] Set this field to enable a feedback path that allows the EPDC to request higher priority for its accesses when needed.
        unsigned LCDIF_PRIORITY_BOOST : 2; //!< [5:4] Set this field to enable a feedback path that allows the eLCDIF to request higher priority for its accesses when needed.
        unsigned RESERVED0 : 24; //!< [29:6] Always set this bit field to zero.
        unsigned CLKGATE : 1; //!< [30] This bit must be set to zero for normal operation.
        unsigned SFTRST : 1; //!< [31] Set to zero for normal operation.
    } B;
} hw_qos_ctrl_t;
#endif

/*
 * constants & macros for entire QOS_CTRL register
 */
#define HW_QOS_CTRL_ADDR      (REGS_QOS_BASE + 0x0)
#define HW_QOS_CTRL_SET_ADDR  (HW_QOS_CTRL_ADDR + 0x4)
#define HW_QOS_CTRL_CLR_ADDR  (HW_QOS_CTRL_ADDR + 0x8)
#define HW_QOS_CTRL_TOG_ADDR  (HW_QOS_CTRL_ADDR + 0xC)

#ifndef __LANGUAGE_ASM__
#define HW_QOS_CTRL           (*(volatile hw_qos_ctrl_t *) HW_QOS_CTRL_ADDR)
#define HW_QOS_CTRL_RD()      (HW_QOS_CTRL.U)
#define HW_QOS_CTRL_WR(v)     (HW_QOS_CTRL.U = (v))
#define HW_QOS_CTRL_SET(v)    ((*(volatile reg32_t *) HW_QOS_CTRL_SET_ADDR) = (v))
#define HW_QOS_CTRL_CLR(v)    ((*(volatile reg32_t *) HW_QOS_CTRL_CLR_ADDR) = (v))
#define HW_QOS_CTRL_TOG(v)    ((*(volatile reg32_t *) HW_QOS_CTRL_TOG_ADDR) = (v))
#endif

/*
 * constants & macros for individual QOS_CTRL bitfields
 */

/* --- Register HW_QOS_CTRL, field EMI_PRIORITY_MODE[0] (RW)
 *
 * Set this bit to one to enable QoS and priority values to be set separately for the AXI fabric and
 * EMI.
 *
 * Values:
 * PASSTHROUGH_PRIORITY = 0x0 - Translate and pass the AXI fabric QoS settings for each master and command type through to the EMI
 *     with each command.
 * MANUAL_PRIORITY = 0x1 - Pass the register priority settings for each master and command type through to the EMI with each
 *     command.
 */

#define BP_QOS_CTRL_EMI_PRIORITY_MODE      (0)      //!< Bit position for QOS_CTRL_EMI_PRIORITY_MODE.
#define BM_QOS_CTRL_EMI_PRIORITY_MODE      (0x00000001)  //!< Bit mask for QOS_CTRL_EMI_PRIORITY_MODE.

//! @brief Get value of QOS_CTRL_EMI_PRIORITY_MODE from a register value.
#define BG_QOS_CTRL_EMI_PRIORITY_MODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_CTRL_EMI_PRIORITY_MODE) >> BP_QOS_CTRL_EMI_PRIORITY_MODE)

//! @brief Format value for bitfield QOS_CTRL_EMI_PRIORITY_MODE.
#define BF_QOS_CTRL_EMI_PRIORITY_MODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_CTRL_EMI_PRIORITY_MODE) & BM_QOS_CTRL_EMI_PRIORITY_MODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EMI_PRIORITY_MODE field to a new value.
#define BW_QOS_CTRL_EMI_PRIORITY_MODE(v)   BF_CS1(QOS_CTRL, EMI_PRIORITY_MODE, v)
#endif

#define BV_QOS_CTRL_EMI_PRIORITY_MODE__PASSTHROUGH_PRIORITY (0x0) //!< Translate and pass the AXI fabric QoS settings for each master and command type through to the EMI with each command.
#define BV_QOS_CTRL_EMI_PRIORITY_MODE__MANUAL_PRIORITY (0x1) //!< Pass the register priority settings for each master and command type through to the EMI with each command.

/* --- Register HW_QOS_CTRL, field XLATE_AXI_MODE[1] (RW)
 *
 * This bit selects the way in which AXI QoS information is translated into EMI priority values.
 * This bit is only used when the EMI_PRIORITY_MODE bit in this register is set to
 * PASSTHROUGH_PRIORITY.
 *
 * Values:
 * DISALLOW_PRIORITY0 = 0x0 - Never map transaction priorities to level 0 (highest priority). Allow the EMI itself to exclusively
 *     use this level to elevate transactions to through aging.
 * ALLOW_PRIORITY0 = 0x1 - Map transactions to all EMI priority levels including level 0 (highest).
 */

#define BP_QOS_CTRL_XLATE_AXI_MODE      (1)      //!< Bit position for QOS_CTRL_XLATE_AXI_MODE.
#define BM_QOS_CTRL_XLATE_AXI_MODE      (0x00000002)  //!< Bit mask for QOS_CTRL_XLATE_AXI_MODE.

//! @brief Get value of QOS_CTRL_XLATE_AXI_MODE from a register value.
#define BG_QOS_CTRL_XLATE_AXI_MODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_CTRL_XLATE_AXI_MODE) >> BP_QOS_CTRL_XLATE_AXI_MODE)

//! @brief Format value for bitfield QOS_CTRL_XLATE_AXI_MODE.
#define BF_QOS_CTRL_XLATE_AXI_MODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_CTRL_XLATE_AXI_MODE) & BM_QOS_CTRL_XLATE_AXI_MODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the XLATE_AXI_MODE field to a new value.
#define BW_QOS_CTRL_XLATE_AXI_MODE(v)   BF_CS1(QOS_CTRL, XLATE_AXI_MODE, v)
#endif

#define BV_QOS_CTRL_XLATE_AXI_MODE__DISALLOW_PRIORITY0 (0x0) //!< Never map transaction priorities to level 0 (highest priority). Allow the EMI itself to exclusively use this level to elevate transactions to through aging.
#define BV_QOS_CTRL_XLATE_AXI_MODE__ALLOW_PRIORITY0 (0x1) //!< Map transactions to all EMI priority levels including level 0 (highest).

/* --- Register HW_QOS_CTRL, field EPDC_PRIORITY_BOOST[3:2] (RW)
 *
 * Set this field to enable a feedback path that allows the EPDC to request higher priority for its
 * accesses when needed. This functionality works in both passthrough and manual priority modes.
 *
 * Values:
 * DISABLE = 0x0 - Disable priority boost mode for the EPDC accesses.
 * INC_PRIORITY = 0x1 - This setting will raise the access priority level by 1 for the EPDC when it requests a priority
 *     boost.
 * HIGHEST_PRIORITY = 0x2 - This setting will raise the access priority to the highest level for the EPDC when it requests a
 *     priority boost.
 * RESERVED = 0x3 - Reserved.
 */

#define BP_QOS_CTRL_EPDC_PRIORITY_BOOST      (2)      //!< Bit position for QOS_CTRL_EPDC_PRIORITY_BOOST.
#define BM_QOS_CTRL_EPDC_PRIORITY_BOOST      (0x0000000c)  //!< Bit mask for QOS_CTRL_EPDC_PRIORITY_BOOST.

//! @brief Get value of QOS_CTRL_EPDC_PRIORITY_BOOST from a register value.
#define BG_QOS_CTRL_EPDC_PRIORITY_BOOST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_CTRL_EPDC_PRIORITY_BOOST) >> BP_QOS_CTRL_EPDC_PRIORITY_BOOST)

//! @brief Format value for bitfield QOS_CTRL_EPDC_PRIORITY_BOOST.
#define BF_QOS_CTRL_EPDC_PRIORITY_BOOST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_CTRL_EPDC_PRIORITY_BOOST) & BM_QOS_CTRL_EPDC_PRIORITY_BOOST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EPDC_PRIORITY_BOOST field to a new value.
#define BW_QOS_CTRL_EPDC_PRIORITY_BOOST(v)   BF_CS1(QOS_CTRL, EPDC_PRIORITY_BOOST, v)
#endif

#define BV_QOS_CTRL_EPDC_PRIORITY_BOOST__DISABLE (0x0) //!< Disable priority boost mode for the EPDC accesses.
#define BV_QOS_CTRL_EPDC_PRIORITY_BOOST__INC_PRIORITY (0x1) //!< This setting will raise the access priority level by 1 for the EPDC when it requests a priority boost.
#define BV_QOS_CTRL_EPDC_PRIORITY_BOOST__HIGHEST_PRIORITY (0x2) //!< This setting will raise the access priority to the highest level for the EPDC when it requests a priority boost.
#define BV_QOS_CTRL_EPDC_PRIORITY_BOOST__RESERVED (0x3) //!< Reserved.

/* --- Register HW_QOS_CTRL, field LCDIF_PRIORITY_BOOST[5:4] (RW)
 *
 * Set this field to enable a feedback path that allows the eLCDIF to request higher priority for
 * its accesses when needed. This functionality works in both passthrough and manual priority modes.
 *
 * Values:
 * DISABLE = 0x0 - Disable priority boost mode for the eLCDIF accesses.
 * INC_PRIORITY = 0x1 - This setting will raise the access priority level by 1 for the eLCDIF when it requests a priority
 *     boost.
 * HIGHEST_PRIORITY = 0x2 - This setting will raise the access priority to the highest level for the eLCDIF when it requests a
 *     priority boost.
 * RESERVED = 0x3 - Reserved.
 */

#define BP_QOS_CTRL_LCDIF_PRIORITY_BOOST      (4)      //!< Bit position for QOS_CTRL_LCDIF_PRIORITY_BOOST.
#define BM_QOS_CTRL_LCDIF_PRIORITY_BOOST      (0x00000030)  //!< Bit mask for QOS_CTRL_LCDIF_PRIORITY_BOOST.

//! @brief Get value of QOS_CTRL_LCDIF_PRIORITY_BOOST from a register value.
#define BG_QOS_CTRL_LCDIF_PRIORITY_BOOST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_CTRL_LCDIF_PRIORITY_BOOST) >> BP_QOS_CTRL_LCDIF_PRIORITY_BOOST)

//! @brief Format value for bitfield QOS_CTRL_LCDIF_PRIORITY_BOOST.
#define BF_QOS_CTRL_LCDIF_PRIORITY_BOOST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_CTRL_LCDIF_PRIORITY_BOOST) & BM_QOS_CTRL_LCDIF_PRIORITY_BOOST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LCDIF_PRIORITY_BOOST field to a new value.
#define BW_QOS_CTRL_LCDIF_PRIORITY_BOOST(v)   BF_CS1(QOS_CTRL, LCDIF_PRIORITY_BOOST, v)
#endif

#define BV_QOS_CTRL_LCDIF_PRIORITY_BOOST__DISABLE (0x0) //!< Disable priority boost mode for the eLCDIF accesses.
#define BV_QOS_CTRL_LCDIF_PRIORITY_BOOST__INC_PRIORITY (0x1) //!< This setting will raise the access priority level by 1 for the eLCDIF when it requests a priority boost.
#define BV_QOS_CTRL_LCDIF_PRIORITY_BOOST__HIGHEST_PRIORITY (0x2) //!< This setting will raise the access priority to the highest level for the eLCDIF when it requests a priority boost.
#define BV_QOS_CTRL_LCDIF_PRIORITY_BOOST__RESERVED (0x3) //!< Reserved.

/* --- Register HW_QOS_CTRL, field CLKGATE[30] (RW)
 *
 * This bit must be set to zero for normal operation. When set to one it gates off the clocks to the
 * block.
 *
 * Values:
 * RUN = 0x0 - Allow QoS to operate normally.
 * NO_CLKS = 0x1 - Do not clock QoS gates in order to minimize power consumption.
 */

#define BP_QOS_CTRL_CLKGATE      (30)      //!< Bit position for QOS_CTRL_CLKGATE.
#define BM_QOS_CTRL_CLKGATE      (0x40000000)  //!< Bit mask for QOS_CTRL_CLKGATE.

//! @brief Get value of QOS_CTRL_CLKGATE from a register value.
#define BG_QOS_CTRL_CLKGATE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_CTRL_CLKGATE) >> BP_QOS_CTRL_CLKGATE)

//! @brief Format value for bitfield QOS_CTRL_CLKGATE.
#define BF_QOS_CTRL_CLKGATE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_CTRL_CLKGATE) & BM_QOS_CTRL_CLKGATE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CLKGATE field to a new value.
#define BW_QOS_CTRL_CLKGATE(v)   BF_CS1(QOS_CTRL, CLKGATE, v)
#endif

#define BV_QOS_CTRL_CLKGATE__RUN (0x0) //!< Allow QoS to operate normally.
#define BV_QOS_CTRL_CLKGATE__NO_CLKS (0x1) //!< Do not clock QoS gates in order to minimize power consumption.

/* --- Register HW_QOS_CTRL, field SFTRST[31] (RW)
 *
 * Set to zero for normal operation. When this bit is set to one (default), then the entire block is
 * held in its reset state.
 *
 * Values:
 * RUN = 0x0 - Allow QoS to operate normally.
 * RESET = 0x1 - Hold QoS in reset.
 */

#define BP_QOS_CTRL_SFTRST      (31)      //!< Bit position for QOS_CTRL_SFTRST.
#define BM_QOS_CTRL_SFTRST      (0x80000000)  //!< Bit mask for QOS_CTRL_SFTRST.

//! @brief Get value of QOS_CTRL_SFTRST from a register value.
#define BG_QOS_CTRL_SFTRST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_CTRL_SFTRST) >> BP_QOS_CTRL_SFTRST)

//! @brief Format value for bitfield QOS_CTRL_SFTRST.
#define BF_QOS_CTRL_SFTRST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_CTRL_SFTRST) & BM_QOS_CTRL_SFTRST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SFTRST field to a new value.
#define BW_QOS_CTRL_SFTRST(v)   BF_CS1(QOS_CTRL, SFTRST, v)
#endif

#define BV_QOS_CTRL_SFTRST__RUN (0x0) //!< Allow QoS to operate normally.
#define BV_QOS_CTRL_SFTRST__RESET (0x1) //!< Hold QoS in reset.

//-------------------------------------------------------------------------------------------
// HW_QOS_AXI_QOS0 - AXI QOS Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_QOS_AXI_QOS0 - AXI QOS Register (RW)
 *
 * Reset value: 0x55555555
 *
 * This register specifies the AWQOS and ARQOS parameters for masters 0-3.   EXAMPLE
 */
typedef union _hw_qos_axi_qos0
{
    reg32_t U;
    struct _hw_qos_axi_qos0_bitfields
    {
        unsigned M0_AWQOS : 3; //!< [2:0] Specifies the QOS level for the write commands on MasterID 0.
        unsigned RESERVED0 : 1; //!< [3] Always set this bit field to zero.
        unsigned M0_ARQOS : 3; //!< [6:4] Specifies the QOS level for the read commands on MasterID 0.
        unsigned RESERVED1 : 1; //!< [7] Always set this bit field to zero.
        unsigned M1_0_AWQOS : 3; //!< [10:8] Specifies the QOS level for the write commands on MasterID 1.
        unsigned RESERVED2 : 1; //!< [11] Always set this bit field to zero.
        unsigned M1_0_ARQOS : 3; //!< [14:12] Specifies the QOS level for the read commands on MasterID 1.
        unsigned RESERVED3 : 1; //!< [15] Always set this bit field to zero.
        unsigned M1_1_AWQOS : 3; //!< [18:16] Specifies the QOS level for the write commands on MasterID 2.
        unsigned RESERVED4 : 1; //!< [19] Always set this bit field to zero.
        unsigned M1_1_ARQOS : 3; //!< [22:20] Specifies the QOS level for the read commands on MasterID 2.
        unsigned RESERVED5 : 1; //!< [23] Always set this bit field to zero.
        unsigned M1_2_AWQOS : 3; //!< [26:24] Specifies the QOS level for the write commands on MasterID 3.
        unsigned RESERVED6 : 1; //!< [27] Always set this bit field to zero.
        unsigned M1_2_ARQOS : 3; //!< [30:28] Specifies the QOS level for the read commands on MasterID 3.
        unsigned RESERVED7 : 1; //!< [31] Always set this bit field to zero.
    } B;
} hw_qos_axi_qos0_t;
#endif

/*
 * constants & macros for entire QOS_AXI_QOS0 register
 */
#define HW_QOS_AXI_QOS0_ADDR      (REGS_QOS_BASE + 0x10)
#define HW_QOS_AXI_QOS0_SET_ADDR  (HW_QOS_AXI_QOS0_ADDR + 0x4)
#define HW_QOS_AXI_QOS0_CLR_ADDR  (HW_QOS_AXI_QOS0_ADDR + 0x8)
#define HW_QOS_AXI_QOS0_TOG_ADDR  (HW_QOS_AXI_QOS0_ADDR + 0xC)

#ifndef __LANGUAGE_ASM__
#define HW_QOS_AXI_QOS0           (*(volatile hw_qos_axi_qos0_t *) HW_QOS_AXI_QOS0_ADDR)
#define HW_QOS_AXI_QOS0_RD()      (HW_QOS_AXI_QOS0.U)
#define HW_QOS_AXI_QOS0_WR(v)     (HW_QOS_AXI_QOS0.U = (v))
#define HW_QOS_AXI_QOS0_SET(v)    ((*(volatile reg32_t *) HW_QOS_AXI_QOS0_SET_ADDR) = (v))
#define HW_QOS_AXI_QOS0_CLR(v)    ((*(volatile reg32_t *) HW_QOS_AXI_QOS0_CLR_ADDR) = (v))
#define HW_QOS_AXI_QOS0_TOG(v)    ((*(volatile reg32_t *) HW_QOS_AXI_QOS0_TOG_ADDR) = (v))
#endif

/*
 * constants & macros for individual QOS_AXI_QOS0 bitfields
 */

/* --- Register HW_QOS_AXI_QOS0, field M0_AWQOS[2:0] (RW)
 *
 * Specifies the QOS level for the write commands on MasterID 0. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS0_M0_AWQOS      (0)      //!< Bit position for QOS_AXI_QOS0_M0_AWQOS.
#define BM_QOS_AXI_QOS0_M0_AWQOS      (0x00000007)  //!< Bit mask for QOS_AXI_QOS0_M0_AWQOS.

//! @brief Get value of QOS_AXI_QOS0_M0_AWQOS from a register value.
#define BG_QOS_AXI_QOS0_M0_AWQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS0_M0_AWQOS) >> BP_QOS_AXI_QOS0_M0_AWQOS)

//! @brief Format value for bitfield QOS_AXI_QOS0_M0_AWQOS.
#define BF_QOS_AXI_QOS0_M0_AWQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS0_M0_AWQOS) & BM_QOS_AXI_QOS0_M0_AWQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M0_AWQOS field to a new value.
#define BW_QOS_AXI_QOS0_M0_AWQOS(v)   BF_CS1(QOS_AXI_QOS0, M0_AWQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS0, field M0_ARQOS[6:4] (RW)
 *
 * Specifies the QOS level for the read commands on MasterID 0. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS0_M0_ARQOS      (4)      //!< Bit position for QOS_AXI_QOS0_M0_ARQOS.
#define BM_QOS_AXI_QOS0_M0_ARQOS      (0x00000070)  //!< Bit mask for QOS_AXI_QOS0_M0_ARQOS.

//! @brief Get value of QOS_AXI_QOS0_M0_ARQOS from a register value.
#define BG_QOS_AXI_QOS0_M0_ARQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS0_M0_ARQOS) >> BP_QOS_AXI_QOS0_M0_ARQOS)

//! @brief Format value for bitfield QOS_AXI_QOS0_M0_ARQOS.
#define BF_QOS_AXI_QOS0_M0_ARQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS0_M0_ARQOS) & BM_QOS_AXI_QOS0_M0_ARQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M0_ARQOS field to a new value.
#define BW_QOS_AXI_QOS0_M0_ARQOS(v)   BF_CS1(QOS_AXI_QOS0, M0_ARQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS0, field M1_0_AWQOS[10:8] (RW)
 *
 * Specifies the QOS level for the write commands on MasterID 1. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS0_M1_0_AWQOS      (8)      //!< Bit position for QOS_AXI_QOS0_M1_0_AWQOS.
#define BM_QOS_AXI_QOS0_M1_0_AWQOS      (0x00000700)  //!< Bit mask for QOS_AXI_QOS0_M1_0_AWQOS.

//! @brief Get value of QOS_AXI_QOS0_M1_0_AWQOS from a register value.
#define BG_QOS_AXI_QOS0_M1_0_AWQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS0_M1_0_AWQOS) >> BP_QOS_AXI_QOS0_M1_0_AWQOS)

//! @brief Format value for bitfield QOS_AXI_QOS0_M1_0_AWQOS.
#define BF_QOS_AXI_QOS0_M1_0_AWQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS0_M1_0_AWQOS) & BM_QOS_AXI_QOS0_M1_0_AWQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M1_0_AWQOS field to a new value.
#define BW_QOS_AXI_QOS0_M1_0_AWQOS(v)   BF_CS1(QOS_AXI_QOS0, M1_0_AWQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS0, field M1_0_ARQOS[14:12] (RW)
 *
 * Specifies the QOS level for the read commands on MasterID 1. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS0_M1_0_ARQOS      (12)      //!< Bit position for QOS_AXI_QOS0_M1_0_ARQOS.
#define BM_QOS_AXI_QOS0_M1_0_ARQOS      (0x00007000)  //!< Bit mask for QOS_AXI_QOS0_M1_0_ARQOS.

//! @brief Get value of QOS_AXI_QOS0_M1_0_ARQOS from a register value.
#define BG_QOS_AXI_QOS0_M1_0_ARQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS0_M1_0_ARQOS) >> BP_QOS_AXI_QOS0_M1_0_ARQOS)

//! @brief Format value for bitfield QOS_AXI_QOS0_M1_0_ARQOS.
#define BF_QOS_AXI_QOS0_M1_0_ARQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS0_M1_0_ARQOS) & BM_QOS_AXI_QOS0_M1_0_ARQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M1_0_ARQOS field to a new value.
#define BW_QOS_AXI_QOS0_M1_0_ARQOS(v)   BF_CS1(QOS_AXI_QOS0, M1_0_ARQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS0, field M1_1_AWQOS[18:16] (RW)
 *
 * Specifies the QOS level for the write commands on MasterID 2. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS0_M1_1_AWQOS      (16)      //!< Bit position for QOS_AXI_QOS0_M1_1_AWQOS.
#define BM_QOS_AXI_QOS0_M1_1_AWQOS      (0x00070000)  //!< Bit mask for QOS_AXI_QOS0_M1_1_AWQOS.

//! @brief Get value of QOS_AXI_QOS0_M1_1_AWQOS from a register value.
#define BG_QOS_AXI_QOS0_M1_1_AWQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS0_M1_1_AWQOS) >> BP_QOS_AXI_QOS0_M1_1_AWQOS)

//! @brief Format value for bitfield QOS_AXI_QOS0_M1_1_AWQOS.
#define BF_QOS_AXI_QOS0_M1_1_AWQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS0_M1_1_AWQOS) & BM_QOS_AXI_QOS0_M1_1_AWQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M1_1_AWQOS field to a new value.
#define BW_QOS_AXI_QOS0_M1_1_AWQOS(v)   BF_CS1(QOS_AXI_QOS0, M1_1_AWQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS0, field M1_1_ARQOS[22:20] (RW)
 *
 * Specifies the QOS level for the read commands on MasterID 2. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS0_M1_1_ARQOS      (20)      //!< Bit position for QOS_AXI_QOS0_M1_1_ARQOS.
#define BM_QOS_AXI_QOS0_M1_1_ARQOS      (0x00700000)  //!< Bit mask for QOS_AXI_QOS0_M1_1_ARQOS.

//! @brief Get value of QOS_AXI_QOS0_M1_1_ARQOS from a register value.
#define BG_QOS_AXI_QOS0_M1_1_ARQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS0_M1_1_ARQOS) >> BP_QOS_AXI_QOS0_M1_1_ARQOS)

//! @brief Format value for bitfield QOS_AXI_QOS0_M1_1_ARQOS.
#define BF_QOS_AXI_QOS0_M1_1_ARQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS0_M1_1_ARQOS) & BM_QOS_AXI_QOS0_M1_1_ARQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M1_1_ARQOS field to a new value.
#define BW_QOS_AXI_QOS0_M1_1_ARQOS(v)   BF_CS1(QOS_AXI_QOS0, M1_1_ARQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS0, field M1_2_AWQOS[26:24] (RW)
 *
 * Specifies the QOS level for the write commands on MasterID 3. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS0_M1_2_AWQOS      (24)      //!< Bit position for QOS_AXI_QOS0_M1_2_AWQOS.
#define BM_QOS_AXI_QOS0_M1_2_AWQOS      (0x07000000)  //!< Bit mask for QOS_AXI_QOS0_M1_2_AWQOS.

//! @brief Get value of QOS_AXI_QOS0_M1_2_AWQOS from a register value.
#define BG_QOS_AXI_QOS0_M1_2_AWQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS0_M1_2_AWQOS) >> BP_QOS_AXI_QOS0_M1_2_AWQOS)

//! @brief Format value for bitfield QOS_AXI_QOS0_M1_2_AWQOS.
#define BF_QOS_AXI_QOS0_M1_2_AWQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS0_M1_2_AWQOS) & BM_QOS_AXI_QOS0_M1_2_AWQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M1_2_AWQOS field to a new value.
#define BW_QOS_AXI_QOS0_M1_2_AWQOS(v)   BF_CS1(QOS_AXI_QOS0, M1_2_AWQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS0, field M1_2_ARQOS[30:28] (RW)
 *
 * Specifies the QOS level for the read commands on MasterID 3. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS0_M1_2_ARQOS      (28)      //!< Bit position for QOS_AXI_QOS0_M1_2_ARQOS.
#define BM_QOS_AXI_QOS0_M1_2_ARQOS      (0x70000000)  //!< Bit mask for QOS_AXI_QOS0_M1_2_ARQOS.

//! @brief Get value of QOS_AXI_QOS0_M1_2_ARQOS from a register value.
#define BG_QOS_AXI_QOS0_M1_2_ARQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS0_M1_2_ARQOS) >> BP_QOS_AXI_QOS0_M1_2_ARQOS)

//! @brief Format value for bitfield QOS_AXI_QOS0_M1_2_ARQOS.
#define BF_QOS_AXI_QOS0_M1_2_ARQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS0_M1_2_ARQOS) & BM_QOS_AXI_QOS0_M1_2_ARQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M1_2_ARQOS field to a new value.
#define BW_QOS_AXI_QOS0_M1_2_ARQOS(v)   BF_CS1(QOS_AXI_QOS0, M1_2_ARQOS, v)
#endif

//-------------------------------------------------------------------------------------------
// HW_QOS_AXI_QOS1 - AXI QOS Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_QOS_AXI_QOS1 - AXI QOS Register (RW)
 *
 * Reset value: 0x55555555
 *
 * This register specifies the AWQOS and ARQOS parameters for masters 4-7.
 */
typedef union _hw_qos_axi_qos1
{
    reg32_t U;
    struct _hw_qos_axi_qos1_bitfields
    {
        unsigned M2_AWQOS : 3; //!< [2:0] Specifies the QOS level for the write commands on MasterID 4.
        unsigned RESERVED0 : 1; //!< [3] Always set this bit field to zero.
        unsigned M2_ARQOS : 3; //!< [6:4] Specifies the QOS level for the read commands on MasterID 4.
        unsigned RESERVED1 : 1; //!< [7] Always set this bit field to zero.
        unsigned M3_AWQOS : 3; //!< [10:8] Specifies the QOS level for the write commands on MasterID 5.
        unsigned RESERVED2 : 1; //!< [11] Always set this bit field to zero.
        unsigned M3_ARQOS : 3; //!< [14:12] Specifies the QOS level for the read commands on MasterID 5.
        unsigned RESERVED3 : 1; //!< [15] Always set this bit field to zero.
        unsigned M4_AWQOS : 3; //!< [18:16] Specifies the QOS level for the write commands on MasterID 6.
        unsigned RESERVED4 : 1; //!< [19] Always set this bit field to zero.
        unsigned M4_ARQOS : 3; //!< [22:20] Specifies the QOS level for the read commands on MasterID 6.
        unsigned RESERVED5 : 1; //!< [23] Always set this bit field to zero.
        unsigned M5_AWQOS : 3; //!< [26:24] Specifies the QOS level for the write commands on MasterID 7.
        unsigned RESERVED6 : 1; //!< [27] Always set this bit field to zero.
        unsigned M5_ARQOS : 3; //!< [30:28] Specifies the QOS level for the read commands on MasterID 7.
        unsigned RESERVED7 : 1; //!< [31] Always set this bit field to zero.
    } B;
} hw_qos_axi_qos1_t;
#endif

/*
 * constants & macros for entire QOS_AXI_QOS1 register
 */
#define HW_QOS_AXI_QOS1_ADDR      (REGS_QOS_BASE + 0x20)
#define HW_QOS_AXI_QOS1_SET_ADDR  (HW_QOS_AXI_QOS1_ADDR + 0x4)
#define HW_QOS_AXI_QOS1_CLR_ADDR  (HW_QOS_AXI_QOS1_ADDR + 0x8)
#define HW_QOS_AXI_QOS1_TOG_ADDR  (HW_QOS_AXI_QOS1_ADDR + 0xC)

#ifndef __LANGUAGE_ASM__
#define HW_QOS_AXI_QOS1           (*(volatile hw_qos_axi_qos1_t *) HW_QOS_AXI_QOS1_ADDR)
#define HW_QOS_AXI_QOS1_RD()      (HW_QOS_AXI_QOS1.U)
#define HW_QOS_AXI_QOS1_WR(v)     (HW_QOS_AXI_QOS1.U = (v))
#define HW_QOS_AXI_QOS1_SET(v)    ((*(volatile reg32_t *) HW_QOS_AXI_QOS1_SET_ADDR) = (v))
#define HW_QOS_AXI_QOS1_CLR(v)    ((*(volatile reg32_t *) HW_QOS_AXI_QOS1_CLR_ADDR) = (v))
#define HW_QOS_AXI_QOS1_TOG(v)    ((*(volatile reg32_t *) HW_QOS_AXI_QOS1_TOG_ADDR) = (v))
#endif

/*
 * constants & macros for individual QOS_AXI_QOS1 bitfields
 */

/* --- Register HW_QOS_AXI_QOS1, field M2_AWQOS[2:0] (RW)
 *
 * Specifies the QOS level for the write commands on MasterID 4. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS1_M2_AWQOS      (0)      //!< Bit position for QOS_AXI_QOS1_M2_AWQOS.
#define BM_QOS_AXI_QOS1_M2_AWQOS      (0x00000007)  //!< Bit mask for QOS_AXI_QOS1_M2_AWQOS.

//! @brief Get value of QOS_AXI_QOS1_M2_AWQOS from a register value.
#define BG_QOS_AXI_QOS1_M2_AWQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS1_M2_AWQOS) >> BP_QOS_AXI_QOS1_M2_AWQOS)

//! @brief Format value for bitfield QOS_AXI_QOS1_M2_AWQOS.
#define BF_QOS_AXI_QOS1_M2_AWQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS1_M2_AWQOS) & BM_QOS_AXI_QOS1_M2_AWQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M2_AWQOS field to a new value.
#define BW_QOS_AXI_QOS1_M2_AWQOS(v)   BF_CS1(QOS_AXI_QOS1, M2_AWQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS1, field M2_ARQOS[6:4] (RW)
 *
 * Specifies the QOS level for the read commands on MasterID 4. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS1_M2_ARQOS      (4)      //!< Bit position for QOS_AXI_QOS1_M2_ARQOS.
#define BM_QOS_AXI_QOS1_M2_ARQOS      (0x00000070)  //!< Bit mask for QOS_AXI_QOS1_M2_ARQOS.

//! @brief Get value of QOS_AXI_QOS1_M2_ARQOS from a register value.
#define BG_QOS_AXI_QOS1_M2_ARQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS1_M2_ARQOS) >> BP_QOS_AXI_QOS1_M2_ARQOS)

//! @brief Format value for bitfield QOS_AXI_QOS1_M2_ARQOS.
#define BF_QOS_AXI_QOS1_M2_ARQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS1_M2_ARQOS) & BM_QOS_AXI_QOS1_M2_ARQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M2_ARQOS field to a new value.
#define BW_QOS_AXI_QOS1_M2_ARQOS(v)   BF_CS1(QOS_AXI_QOS1, M2_ARQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS1, field M3_AWQOS[10:8] (RW)
 *
 * Specifies the QOS level for the write commands on MasterID 5. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS1_M3_AWQOS      (8)      //!< Bit position for QOS_AXI_QOS1_M3_AWQOS.
#define BM_QOS_AXI_QOS1_M3_AWQOS      (0x00000700)  //!< Bit mask for QOS_AXI_QOS1_M3_AWQOS.

//! @brief Get value of QOS_AXI_QOS1_M3_AWQOS from a register value.
#define BG_QOS_AXI_QOS1_M3_AWQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS1_M3_AWQOS) >> BP_QOS_AXI_QOS1_M3_AWQOS)

//! @brief Format value for bitfield QOS_AXI_QOS1_M3_AWQOS.
#define BF_QOS_AXI_QOS1_M3_AWQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS1_M3_AWQOS) & BM_QOS_AXI_QOS1_M3_AWQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M3_AWQOS field to a new value.
#define BW_QOS_AXI_QOS1_M3_AWQOS(v)   BF_CS1(QOS_AXI_QOS1, M3_AWQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS1, field M3_ARQOS[14:12] (RW)
 *
 * Specifies the QOS level for the read commands on MasterID 5. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS1_M3_ARQOS      (12)      //!< Bit position for QOS_AXI_QOS1_M3_ARQOS.
#define BM_QOS_AXI_QOS1_M3_ARQOS      (0x00007000)  //!< Bit mask for QOS_AXI_QOS1_M3_ARQOS.

//! @brief Get value of QOS_AXI_QOS1_M3_ARQOS from a register value.
#define BG_QOS_AXI_QOS1_M3_ARQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS1_M3_ARQOS) >> BP_QOS_AXI_QOS1_M3_ARQOS)

//! @brief Format value for bitfield QOS_AXI_QOS1_M3_ARQOS.
#define BF_QOS_AXI_QOS1_M3_ARQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS1_M3_ARQOS) & BM_QOS_AXI_QOS1_M3_ARQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M3_ARQOS field to a new value.
#define BW_QOS_AXI_QOS1_M3_ARQOS(v)   BF_CS1(QOS_AXI_QOS1, M3_ARQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS1, field M4_AWQOS[18:16] (RW)
 *
 * Specifies the QOS level for the write commands on MasterID 6. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS1_M4_AWQOS      (16)      //!< Bit position for QOS_AXI_QOS1_M4_AWQOS.
#define BM_QOS_AXI_QOS1_M4_AWQOS      (0x00070000)  //!< Bit mask for QOS_AXI_QOS1_M4_AWQOS.

//! @brief Get value of QOS_AXI_QOS1_M4_AWQOS from a register value.
#define BG_QOS_AXI_QOS1_M4_AWQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS1_M4_AWQOS) >> BP_QOS_AXI_QOS1_M4_AWQOS)

//! @brief Format value for bitfield QOS_AXI_QOS1_M4_AWQOS.
#define BF_QOS_AXI_QOS1_M4_AWQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS1_M4_AWQOS) & BM_QOS_AXI_QOS1_M4_AWQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M4_AWQOS field to a new value.
#define BW_QOS_AXI_QOS1_M4_AWQOS(v)   BF_CS1(QOS_AXI_QOS1, M4_AWQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS1, field M4_ARQOS[22:20] (RW)
 *
 * Specifies the QOS level for the read commands on MasterID 6. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS1_M4_ARQOS      (20)      //!< Bit position for QOS_AXI_QOS1_M4_ARQOS.
#define BM_QOS_AXI_QOS1_M4_ARQOS      (0x00700000)  //!< Bit mask for QOS_AXI_QOS1_M4_ARQOS.

//! @brief Get value of QOS_AXI_QOS1_M4_ARQOS from a register value.
#define BG_QOS_AXI_QOS1_M4_ARQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS1_M4_ARQOS) >> BP_QOS_AXI_QOS1_M4_ARQOS)

//! @brief Format value for bitfield QOS_AXI_QOS1_M4_ARQOS.
#define BF_QOS_AXI_QOS1_M4_ARQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS1_M4_ARQOS) & BM_QOS_AXI_QOS1_M4_ARQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M4_ARQOS field to a new value.
#define BW_QOS_AXI_QOS1_M4_ARQOS(v)   BF_CS1(QOS_AXI_QOS1, M4_ARQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS1, field M5_AWQOS[26:24] (RW)
 *
 * Specifies the QOS level for the write commands on MasterID 7. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS1_M5_AWQOS      (24)      //!< Bit position for QOS_AXI_QOS1_M5_AWQOS.
#define BM_QOS_AXI_QOS1_M5_AWQOS      (0x07000000)  //!< Bit mask for QOS_AXI_QOS1_M5_AWQOS.

//! @brief Get value of QOS_AXI_QOS1_M5_AWQOS from a register value.
#define BG_QOS_AXI_QOS1_M5_AWQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS1_M5_AWQOS) >> BP_QOS_AXI_QOS1_M5_AWQOS)

//! @brief Format value for bitfield QOS_AXI_QOS1_M5_AWQOS.
#define BF_QOS_AXI_QOS1_M5_AWQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS1_M5_AWQOS) & BM_QOS_AXI_QOS1_M5_AWQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M5_AWQOS field to a new value.
#define BW_QOS_AXI_QOS1_M5_AWQOS(v)   BF_CS1(QOS_AXI_QOS1, M5_AWQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS1, field M5_ARQOS[30:28] (RW)
 *
 * Specifies the QOS level for the read commands on MasterID 7. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS1_M5_ARQOS      (28)      //!< Bit position for QOS_AXI_QOS1_M5_ARQOS.
#define BM_QOS_AXI_QOS1_M5_ARQOS      (0x70000000)  //!< Bit mask for QOS_AXI_QOS1_M5_ARQOS.

//! @brief Get value of QOS_AXI_QOS1_M5_ARQOS from a register value.
#define BG_QOS_AXI_QOS1_M5_ARQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS1_M5_ARQOS) >> BP_QOS_AXI_QOS1_M5_ARQOS)

//! @brief Format value for bitfield QOS_AXI_QOS1_M5_ARQOS.
#define BF_QOS_AXI_QOS1_M5_ARQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS1_M5_ARQOS) & BM_QOS_AXI_QOS1_M5_ARQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M5_ARQOS field to a new value.
#define BW_QOS_AXI_QOS1_M5_ARQOS(v)   BF_CS1(QOS_AXI_QOS1, M5_ARQOS, v)
#endif

//-------------------------------------------------------------------------------------------
// HW_QOS_AXI_QOS2 - AXI QOS Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_QOS_AXI_QOS2 - AXI QOS Register (RW)
 *
 * Reset value: 0x66665555
 *
 * This register specifies the AWQOS and ARQOS parameters for masters 8-11.
 */
typedef union _hw_qos_axi_qos2
{
    reg32_t U;
    struct _hw_qos_axi_qos2_bitfields
    {
        unsigned M6_AWQOS : 3; //!< [2:0] Specifies the QOS level for the write commands on MasterID 8.
        unsigned RESERVED0 : 1; //!< [3] Always set this bit field to zero.
        unsigned M6_ARQOS : 3; //!< [6:4] Specifies the QOS level for the read commands on MasterID 8.
        unsigned RESERVED1 : 1; //!< [7] Always set this bit field to zero.
        unsigned M7_AWQOS : 3; //!< [10:8] Specifies the QOS level for the write commands on MasterID 9.
        unsigned RESERVED2 : 1; //!< [11] Always set this bit field to zero.
        unsigned M7_ARQOS : 3; //!< [14:12] Specifies the QOS level for the read commands on MasterID 9.
        unsigned RESERVED3 : 1; //!< [15] Always set this bit field to zero.
        unsigned M8_AWQOS : 3; //!< [18:16] Specifies the QOS level for the write commands on MasterID 10.
        unsigned RESERVED4 : 1; //!< [19] Always set this bit field to zero.
        unsigned M8_ARQOS : 3; //!< [22:20] Specifies the QOS level for the read commands on MasterID 10.
        unsigned RESERVED5 : 1; //!< [23] Always set this bit field to zero.
        unsigned M9_AWQOS : 3; //!< [26:24] Specifies the QOS level for the write commands on MasterID 10.
        unsigned RESERVED6 : 1; //!< [27] Always set this bit field to zero.
        unsigned M9_ARQOS : 3; //!< [30:28] Specifies the QOS level for the read commands on MasterID 11.
        unsigned RESERVED7 : 1; //!< [31] Always set this bit field to zero.
    } B;
} hw_qos_axi_qos2_t;
#endif

/*
 * constants & macros for entire QOS_AXI_QOS2 register
 */
#define HW_QOS_AXI_QOS2_ADDR      (REGS_QOS_BASE + 0x30)
#define HW_QOS_AXI_QOS2_SET_ADDR  (HW_QOS_AXI_QOS2_ADDR + 0x4)
#define HW_QOS_AXI_QOS2_CLR_ADDR  (HW_QOS_AXI_QOS2_ADDR + 0x8)
#define HW_QOS_AXI_QOS2_TOG_ADDR  (HW_QOS_AXI_QOS2_ADDR + 0xC)

#ifndef __LANGUAGE_ASM__
#define HW_QOS_AXI_QOS2           (*(volatile hw_qos_axi_qos2_t *) HW_QOS_AXI_QOS2_ADDR)
#define HW_QOS_AXI_QOS2_RD()      (HW_QOS_AXI_QOS2.U)
#define HW_QOS_AXI_QOS2_WR(v)     (HW_QOS_AXI_QOS2.U = (v))
#define HW_QOS_AXI_QOS2_SET(v)    ((*(volatile reg32_t *) HW_QOS_AXI_QOS2_SET_ADDR) = (v))
#define HW_QOS_AXI_QOS2_CLR(v)    ((*(volatile reg32_t *) HW_QOS_AXI_QOS2_CLR_ADDR) = (v))
#define HW_QOS_AXI_QOS2_TOG(v)    ((*(volatile reg32_t *) HW_QOS_AXI_QOS2_TOG_ADDR) = (v))
#endif

/*
 * constants & macros for individual QOS_AXI_QOS2 bitfields
 */

/* --- Register HW_QOS_AXI_QOS2, field M6_AWQOS[2:0] (RW)
 *
 * Specifies the QOS level for the write commands on MasterID 8. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS2_M6_AWQOS      (0)      //!< Bit position for QOS_AXI_QOS2_M6_AWQOS.
#define BM_QOS_AXI_QOS2_M6_AWQOS      (0x00000007)  //!< Bit mask for QOS_AXI_QOS2_M6_AWQOS.

//! @brief Get value of QOS_AXI_QOS2_M6_AWQOS from a register value.
#define BG_QOS_AXI_QOS2_M6_AWQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS2_M6_AWQOS) >> BP_QOS_AXI_QOS2_M6_AWQOS)

//! @brief Format value for bitfield QOS_AXI_QOS2_M6_AWQOS.
#define BF_QOS_AXI_QOS2_M6_AWQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS2_M6_AWQOS) & BM_QOS_AXI_QOS2_M6_AWQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M6_AWQOS field to a new value.
#define BW_QOS_AXI_QOS2_M6_AWQOS(v)   BF_CS1(QOS_AXI_QOS2, M6_AWQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS2, field M6_ARQOS[6:4] (RW)
 *
 * Specifies the QOS level for the read commands on MasterID 8. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS2_M6_ARQOS      (4)      //!< Bit position for QOS_AXI_QOS2_M6_ARQOS.
#define BM_QOS_AXI_QOS2_M6_ARQOS      (0x00000070)  //!< Bit mask for QOS_AXI_QOS2_M6_ARQOS.

//! @brief Get value of QOS_AXI_QOS2_M6_ARQOS from a register value.
#define BG_QOS_AXI_QOS2_M6_ARQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS2_M6_ARQOS) >> BP_QOS_AXI_QOS2_M6_ARQOS)

//! @brief Format value for bitfield QOS_AXI_QOS2_M6_ARQOS.
#define BF_QOS_AXI_QOS2_M6_ARQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS2_M6_ARQOS) & BM_QOS_AXI_QOS2_M6_ARQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M6_ARQOS field to a new value.
#define BW_QOS_AXI_QOS2_M6_ARQOS(v)   BF_CS1(QOS_AXI_QOS2, M6_ARQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS2, field M7_AWQOS[10:8] (RW)
 *
 * Specifies the QOS level for the write commands on MasterID 9. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS2_M7_AWQOS      (8)      //!< Bit position for QOS_AXI_QOS2_M7_AWQOS.
#define BM_QOS_AXI_QOS2_M7_AWQOS      (0x00000700)  //!< Bit mask for QOS_AXI_QOS2_M7_AWQOS.

//! @brief Get value of QOS_AXI_QOS2_M7_AWQOS from a register value.
#define BG_QOS_AXI_QOS2_M7_AWQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS2_M7_AWQOS) >> BP_QOS_AXI_QOS2_M7_AWQOS)

//! @brief Format value for bitfield QOS_AXI_QOS2_M7_AWQOS.
#define BF_QOS_AXI_QOS2_M7_AWQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS2_M7_AWQOS) & BM_QOS_AXI_QOS2_M7_AWQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M7_AWQOS field to a new value.
#define BW_QOS_AXI_QOS2_M7_AWQOS(v)   BF_CS1(QOS_AXI_QOS2, M7_AWQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS2, field M7_ARQOS[14:12] (RW)
 *
 * Specifies the QOS level for the read commands on MasterID 9. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS2_M7_ARQOS      (12)      //!< Bit position for QOS_AXI_QOS2_M7_ARQOS.
#define BM_QOS_AXI_QOS2_M7_ARQOS      (0x00007000)  //!< Bit mask for QOS_AXI_QOS2_M7_ARQOS.

//! @brief Get value of QOS_AXI_QOS2_M7_ARQOS from a register value.
#define BG_QOS_AXI_QOS2_M7_ARQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS2_M7_ARQOS) >> BP_QOS_AXI_QOS2_M7_ARQOS)

//! @brief Format value for bitfield QOS_AXI_QOS2_M7_ARQOS.
#define BF_QOS_AXI_QOS2_M7_ARQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS2_M7_ARQOS) & BM_QOS_AXI_QOS2_M7_ARQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M7_ARQOS field to a new value.
#define BW_QOS_AXI_QOS2_M7_ARQOS(v)   BF_CS1(QOS_AXI_QOS2, M7_ARQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS2, field M8_AWQOS[18:16] (RW)
 *
 * Specifies the QOS level for the write commands on MasterID 10. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS2_M8_AWQOS      (16)      //!< Bit position for QOS_AXI_QOS2_M8_AWQOS.
#define BM_QOS_AXI_QOS2_M8_AWQOS      (0x00070000)  //!< Bit mask for QOS_AXI_QOS2_M8_AWQOS.

//! @brief Get value of QOS_AXI_QOS2_M8_AWQOS from a register value.
#define BG_QOS_AXI_QOS2_M8_AWQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS2_M8_AWQOS) >> BP_QOS_AXI_QOS2_M8_AWQOS)

//! @brief Format value for bitfield QOS_AXI_QOS2_M8_AWQOS.
#define BF_QOS_AXI_QOS2_M8_AWQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS2_M8_AWQOS) & BM_QOS_AXI_QOS2_M8_AWQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M8_AWQOS field to a new value.
#define BW_QOS_AXI_QOS2_M8_AWQOS(v)   BF_CS1(QOS_AXI_QOS2, M8_AWQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS2, field M8_ARQOS[22:20] (RW)
 *
 * Specifies the QOS level for the read commands on MasterID 10. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS2_M8_ARQOS      (20)      //!< Bit position for QOS_AXI_QOS2_M8_ARQOS.
#define BM_QOS_AXI_QOS2_M8_ARQOS      (0x00700000)  //!< Bit mask for QOS_AXI_QOS2_M8_ARQOS.

//! @brief Get value of QOS_AXI_QOS2_M8_ARQOS from a register value.
#define BG_QOS_AXI_QOS2_M8_ARQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS2_M8_ARQOS) >> BP_QOS_AXI_QOS2_M8_ARQOS)

//! @brief Format value for bitfield QOS_AXI_QOS2_M8_ARQOS.
#define BF_QOS_AXI_QOS2_M8_ARQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS2_M8_ARQOS) & BM_QOS_AXI_QOS2_M8_ARQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M8_ARQOS field to a new value.
#define BW_QOS_AXI_QOS2_M8_ARQOS(v)   BF_CS1(QOS_AXI_QOS2, M8_ARQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS2, field M9_AWQOS[26:24] (RW)
 *
 * Specifies the QOS level for the write commands on MasterID 10. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS2_M9_AWQOS      (24)      //!< Bit position for QOS_AXI_QOS2_M9_AWQOS.
#define BM_QOS_AXI_QOS2_M9_AWQOS      (0x07000000)  //!< Bit mask for QOS_AXI_QOS2_M9_AWQOS.

//! @brief Get value of QOS_AXI_QOS2_M9_AWQOS from a register value.
#define BG_QOS_AXI_QOS2_M9_AWQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS2_M9_AWQOS) >> BP_QOS_AXI_QOS2_M9_AWQOS)

//! @brief Format value for bitfield QOS_AXI_QOS2_M9_AWQOS.
#define BF_QOS_AXI_QOS2_M9_AWQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS2_M9_AWQOS) & BM_QOS_AXI_QOS2_M9_AWQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M9_AWQOS field to a new value.
#define BW_QOS_AXI_QOS2_M9_AWQOS(v)   BF_CS1(QOS_AXI_QOS2, M9_AWQOS, v)
#endif

/* --- Register HW_QOS_AXI_QOS2, field M9_ARQOS[30:28] (RW)
 *
 * Specifies the QOS level for the read commands on MasterID 11. 15 = highest QOS. 0 = lowest QOS.
 */

#define BP_QOS_AXI_QOS2_M9_ARQOS      (28)      //!< Bit position for QOS_AXI_QOS2_M9_ARQOS.
#define BM_QOS_AXI_QOS2_M9_ARQOS      (0x70000000)  //!< Bit mask for QOS_AXI_QOS2_M9_ARQOS.

//! @brief Get value of QOS_AXI_QOS2_M9_ARQOS from a register value.
#define BG_QOS_AXI_QOS2_M9_ARQOS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_AXI_QOS2_M9_ARQOS) >> BP_QOS_AXI_QOS2_M9_ARQOS)

//! @brief Format value for bitfield QOS_AXI_QOS2_M9_ARQOS.
#define BF_QOS_AXI_QOS2_M9_ARQOS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_AXI_QOS2_M9_ARQOS) & BM_QOS_AXI_QOS2_M9_ARQOS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M9_ARQOS field to a new value.
#define BW_QOS_AXI_QOS2_M9_ARQOS(v)   BF_CS1(QOS_AXI_QOS2, M9_ARQOS, v)
#endif

//-------------------------------------------------------------------------------------------
// HW_QOS_EMI_PRIORITY0 - EMI priority Registers
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_QOS_EMI_PRIORITY0 - EMI priority Registers (RW)
 *
 * Reset value: 0x22222222
 *
 * For EMI manual priority mode, this register specifies the AWPRIORITY and ARPRIORITY parameters
 * for masters 0-3.
 */
typedef union _hw_qos_emi_priority0
{
    reg32_t U;
    struct _hw_qos_emi_priority0_bitfields
    {
        unsigned M0_WR : 3; //!< [2:0] Specifies the priority level for the write commands on MasterID 0.
        unsigned RESERVED0 : 1; //!< [3] Always set this bit field to zero.
        unsigned M0_RD : 3; //!< [6:4] Specifies the priority level for the read commands on MasterID 0.
        unsigned RESERVED1 : 1; //!< [7] Always set this bit field to zero.
        unsigned M1_0_WR : 3; //!< [10:8] Specifies the priority level for the write commands on MasterID 1.
        unsigned RESERVED2 : 1; //!< [11] Always set this bit field to zero.
        unsigned M1_0_RD : 3; //!< [14:12] Specifies the priority level for the read commands on MasterID 1.
        unsigned RESERVED3 : 1; //!< [15] Always set this bit field to zero.
        unsigned M1_1_WR : 3; //!< [18:16] Specifies the priority level for the write commands on MasterID 2.
        unsigned RESERVED4 : 1; //!< [19] Always set this bit field to zero.
        unsigned M1_1_RD : 3; //!< [22:20] Specifies the priority level for the read commands on MasterID 2.
        unsigned RESERVED5 : 1; //!< [23] Always set this bit field to zero.
        unsigned M1_2_WR : 3; //!< [26:24] Specifies the priority level for the write commands on MasterID 3.
        unsigned RESERVED6 : 1; //!< [27] Always set this bit field to zero.
        unsigned M1_2_RD : 3; //!< [30:28] Specifies the priority level for the read commands on MasterID 3.
        unsigned RESERVED7 : 1; //!< [31] Always set this bit field to zero.
    } B;
} hw_qos_emi_priority0_t;
#endif

/*
 * constants & macros for entire QOS_EMI_PRIORITY0 register
 */
#define HW_QOS_EMI_PRIORITY0_ADDR      (REGS_QOS_BASE + 0x40)
#define HW_QOS_EMI_PRIORITY0_SET_ADDR  (HW_QOS_EMI_PRIORITY0_ADDR + 0x4)
#define HW_QOS_EMI_PRIORITY0_CLR_ADDR  (HW_QOS_EMI_PRIORITY0_ADDR + 0x8)
#define HW_QOS_EMI_PRIORITY0_TOG_ADDR  (HW_QOS_EMI_PRIORITY0_ADDR + 0xC)

#ifndef __LANGUAGE_ASM__
#define HW_QOS_EMI_PRIORITY0           (*(volatile hw_qos_emi_priority0_t *) HW_QOS_EMI_PRIORITY0_ADDR)
#define HW_QOS_EMI_PRIORITY0_RD()      (HW_QOS_EMI_PRIORITY0.U)
#define HW_QOS_EMI_PRIORITY0_WR(v)     (HW_QOS_EMI_PRIORITY0.U = (v))
#define HW_QOS_EMI_PRIORITY0_SET(v)    ((*(volatile reg32_t *) HW_QOS_EMI_PRIORITY0_SET_ADDR) = (v))
#define HW_QOS_EMI_PRIORITY0_CLR(v)    ((*(volatile reg32_t *) HW_QOS_EMI_PRIORITY0_CLR_ADDR) = (v))
#define HW_QOS_EMI_PRIORITY0_TOG(v)    ((*(volatile reg32_t *) HW_QOS_EMI_PRIORITY0_TOG_ADDR) = (v))
#endif

/*
 * constants & macros for individual QOS_EMI_PRIORITY0 bitfields
 */

/* --- Register HW_QOS_EMI_PRIORITY0, field M0_WR[2:0] (RW)
 *
 * Specifies the priority level for the write commands on MasterID 0. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY0_M0_WR      (0)      //!< Bit position for QOS_EMI_PRIORITY0_M0_WR.
#define BM_QOS_EMI_PRIORITY0_M0_WR      (0x00000007)  //!< Bit mask for QOS_EMI_PRIORITY0_M0_WR.

//! @brief Get value of QOS_EMI_PRIORITY0_M0_WR from a register value.
#define BG_QOS_EMI_PRIORITY0_M0_WR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY0_M0_WR) >> BP_QOS_EMI_PRIORITY0_M0_WR)

//! @brief Format value for bitfield QOS_EMI_PRIORITY0_M0_WR.
#define BF_QOS_EMI_PRIORITY0_M0_WR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY0_M0_WR) & BM_QOS_EMI_PRIORITY0_M0_WR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M0_WR field to a new value.
#define BW_QOS_EMI_PRIORITY0_M0_WR(v)   BF_CS1(QOS_EMI_PRIORITY0, M0_WR, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY0, field M0_RD[6:4] (RW)
 *
 * Specifies the priority level for the read commands on MasterID 0. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY0_M0_RD      (4)      //!< Bit position for QOS_EMI_PRIORITY0_M0_RD.
#define BM_QOS_EMI_PRIORITY0_M0_RD      (0x00000070)  //!< Bit mask for QOS_EMI_PRIORITY0_M0_RD.

//! @brief Get value of QOS_EMI_PRIORITY0_M0_RD from a register value.
#define BG_QOS_EMI_PRIORITY0_M0_RD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY0_M0_RD) >> BP_QOS_EMI_PRIORITY0_M0_RD)

//! @brief Format value for bitfield QOS_EMI_PRIORITY0_M0_RD.
#define BF_QOS_EMI_PRIORITY0_M0_RD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY0_M0_RD) & BM_QOS_EMI_PRIORITY0_M0_RD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M0_RD field to a new value.
#define BW_QOS_EMI_PRIORITY0_M0_RD(v)   BF_CS1(QOS_EMI_PRIORITY0, M0_RD, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY0, field M1_0_WR[10:8] (RW)
 *
 * Specifies the priority level for the write commands on MasterID 1. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY0_M1_0_WR      (8)      //!< Bit position for QOS_EMI_PRIORITY0_M1_0_WR.
#define BM_QOS_EMI_PRIORITY0_M1_0_WR      (0x00000700)  //!< Bit mask for QOS_EMI_PRIORITY0_M1_0_WR.

//! @brief Get value of QOS_EMI_PRIORITY0_M1_0_WR from a register value.
#define BG_QOS_EMI_PRIORITY0_M1_0_WR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY0_M1_0_WR) >> BP_QOS_EMI_PRIORITY0_M1_0_WR)

//! @brief Format value for bitfield QOS_EMI_PRIORITY0_M1_0_WR.
#define BF_QOS_EMI_PRIORITY0_M1_0_WR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY0_M1_0_WR) & BM_QOS_EMI_PRIORITY0_M1_0_WR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M1_0_WR field to a new value.
#define BW_QOS_EMI_PRIORITY0_M1_0_WR(v)   BF_CS1(QOS_EMI_PRIORITY0, M1_0_WR, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY0, field M1_0_RD[14:12] (RW)
 *
 * Specifies the priority level for the read commands on MasterID 1. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY0_M1_0_RD      (12)      //!< Bit position for QOS_EMI_PRIORITY0_M1_0_RD.
#define BM_QOS_EMI_PRIORITY0_M1_0_RD      (0x00007000)  //!< Bit mask for QOS_EMI_PRIORITY0_M1_0_RD.

//! @brief Get value of QOS_EMI_PRIORITY0_M1_0_RD from a register value.
#define BG_QOS_EMI_PRIORITY0_M1_0_RD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY0_M1_0_RD) >> BP_QOS_EMI_PRIORITY0_M1_0_RD)

//! @brief Format value for bitfield QOS_EMI_PRIORITY0_M1_0_RD.
#define BF_QOS_EMI_PRIORITY0_M1_0_RD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY0_M1_0_RD) & BM_QOS_EMI_PRIORITY0_M1_0_RD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M1_0_RD field to a new value.
#define BW_QOS_EMI_PRIORITY0_M1_0_RD(v)   BF_CS1(QOS_EMI_PRIORITY0, M1_0_RD, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY0, field M1_1_WR[18:16] (RW)
 *
 * Specifies the priority level for the write commands on MasterID 2. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY0_M1_1_WR      (16)      //!< Bit position for QOS_EMI_PRIORITY0_M1_1_WR.
#define BM_QOS_EMI_PRIORITY0_M1_1_WR      (0x00070000)  //!< Bit mask for QOS_EMI_PRIORITY0_M1_1_WR.

//! @brief Get value of QOS_EMI_PRIORITY0_M1_1_WR from a register value.
#define BG_QOS_EMI_PRIORITY0_M1_1_WR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY0_M1_1_WR) >> BP_QOS_EMI_PRIORITY0_M1_1_WR)

//! @brief Format value for bitfield QOS_EMI_PRIORITY0_M1_1_WR.
#define BF_QOS_EMI_PRIORITY0_M1_1_WR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY0_M1_1_WR) & BM_QOS_EMI_PRIORITY0_M1_1_WR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M1_1_WR field to a new value.
#define BW_QOS_EMI_PRIORITY0_M1_1_WR(v)   BF_CS1(QOS_EMI_PRIORITY0, M1_1_WR, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY0, field M1_1_RD[22:20] (RW)
 *
 * Specifies the priority level for the read commands on MasterID 2. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY0_M1_1_RD      (20)      //!< Bit position for QOS_EMI_PRIORITY0_M1_1_RD.
#define BM_QOS_EMI_PRIORITY0_M1_1_RD      (0x00700000)  //!< Bit mask for QOS_EMI_PRIORITY0_M1_1_RD.

//! @brief Get value of QOS_EMI_PRIORITY0_M1_1_RD from a register value.
#define BG_QOS_EMI_PRIORITY0_M1_1_RD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY0_M1_1_RD) >> BP_QOS_EMI_PRIORITY0_M1_1_RD)

//! @brief Format value for bitfield QOS_EMI_PRIORITY0_M1_1_RD.
#define BF_QOS_EMI_PRIORITY0_M1_1_RD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY0_M1_1_RD) & BM_QOS_EMI_PRIORITY0_M1_1_RD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M1_1_RD field to a new value.
#define BW_QOS_EMI_PRIORITY0_M1_1_RD(v)   BF_CS1(QOS_EMI_PRIORITY0, M1_1_RD, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY0, field M1_2_WR[26:24] (RW)
 *
 * Specifies the priority level for the write commands on MasterID 3. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY0_M1_2_WR      (24)      //!< Bit position for QOS_EMI_PRIORITY0_M1_2_WR.
#define BM_QOS_EMI_PRIORITY0_M1_2_WR      (0x07000000)  //!< Bit mask for QOS_EMI_PRIORITY0_M1_2_WR.

//! @brief Get value of QOS_EMI_PRIORITY0_M1_2_WR from a register value.
#define BG_QOS_EMI_PRIORITY0_M1_2_WR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY0_M1_2_WR) >> BP_QOS_EMI_PRIORITY0_M1_2_WR)

//! @brief Format value for bitfield QOS_EMI_PRIORITY0_M1_2_WR.
#define BF_QOS_EMI_PRIORITY0_M1_2_WR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY0_M1_2_WR) & BM_QOS_EMI_PRIORITY0_M1_2_WR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M1_2_WR field to a new value.
#define BW_QOS_EMI_PRIORITY0_M1_2_WR(v)   BF_CS1(QOS_EMI_PRIORITY0, M1_2_WR, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY0, field M1_2_RD[30:28] (RW)
 *
 * Specifies the priority level for the read commands on MasterID 3. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY0_M1_2_RD      (28)      //!< Bit position for QOS_EMI_PRIORITY0_M1_2_RD.
#define BM_QOS_EMI_PRIORITY0_M1_2_RD      (0x70000000)  //!< Bit mask for QOS_EMI_PRIORITY0_M1_2_RD.

//! @brief Get value of QOS_EMI_PRIORITY0_M1_2_RD from a register value.
#define BG_QOS_EMI_PRIORITY0_M1_2_RD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY0_M1_2_RD) >> BP_QOS_EMI_PRIORITY0_M1_2_RD)

//! @brief Format value for bitfield QOS_EMI_PRIORITY0_M1_2_RD.
#define BF_QOS_EMI_PRIORITY0_M1_2_RD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY0_M1_2_RD) & BM_QOS_EMI_PRIORITY0_M1_2_RD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M1_2_RD field to a new value.
#define BW_QOS_EMI_PRIORITY0_M1_2_RD(v)   BF_CS1(QOS_EMI_PRIORITY0, M1_2_RD, v)
#endif

//-------------------------------------------------------------------------------------------
// HW_QOS_EMI_PRIORITY1 - EMI priority Registers
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_QOS_EMI_PRIORITY1 - EMI priority Registers (RW)
 *
 * Reset value: 0x22222222
 *
 * For EMI manual priority mode, this register specifies the AWPRIORITY and ARPRIORITY parameters
 * for masters 4-7.
 */
typedef union _hw_qos_emi_priority1
{
    reg32_t U;
    struct _hw_qos_emi_priority1_bitfields
    {
        unsigned M2_WR : 3; //!< [2:0] Specifies the priority level for the write commands on MasterID 4.
        unsigned RESERVED0 : 1; //!< [3] Always set this bit field to zero.
        unsigned M2_RD : 3; //!< [6:4] Specifies the priority level for the read commands on MasterID 4.
        unsigned RESERVED1 : 1; //!< [7] Always set this bit field to zero.
        unsigned M3_WR : 3; //!< [10:8] Specifies the priority level for the write commands on MasterID 5.
        unsigned RESERVED2 : 1; //!< [11] Always set this bit field to zero.
        unsigned M3_RD : 3; //!< [14:12] Specifies the priority level for the read commands on MasterID 5.
        unsigned RESERVED3 : 1; //!< [15] Always set this bit field to zero.
        unsigned M4_WR : 3; //!< [18:16] Specifies the priority level for the write commands on MasterID 6.
        unsigned RESERVED4 : 1; //!< [19] Always set this bit field to zero.
        unsigned M4_RD : 3; //!< [22:20] Specifies the priority level for the read commands on MasterID 6.
        unsigned RESERVED5 : 1; //!< [23] Always set this bit field to zero.
        unsigned M5_WR : 3; //!< [26:24] Specifies the priority level for the write commands on MasterID 7.
        unsigned RESERVED6 : 1; //!< [27] Always set this bit field to zero.
        unsigned M5_RD : 3; //!< [30:28] Specifies the priority level for the read commands on MasterID 7.
        unsigned RESERVED7 : 1; //!< [31] Always set this bit field to zero.
    } B;
} hw_qos_emi_priority1_t;
#endif

/*
 * constants & macros for entire QOS_EMI_PRIORITY1 register
 */
#define HW_QOS_EMI_PRIORITY1_ADDR      (REGS_QOS_BASE + 0x50)
#define HW_QOS_EMI_PRIORITY1_SET_ADDR  (HW_QOS_EMI_PRIORITY1_ADDR + 0x4)
#define HW_QOS_EMI_PRIORITY1_CLR_ADDR  (HW_QOS_EMI_PRIORITY1_ADDR + 0x8)
#define HW_QOS_EMI_PRIORITY1_TOG_ADDR  (HW_QOS_EMI_PRIORITY1_ADDR + 0xC)

#ifndef __LANGUAGE_ASM__
#define HW_QOS_EMI_PRIORITY1           (*(volatile hw_qos_emi_priority1_t *) HW_QOS_EMI_PRIORITY1_ADDR)
#define HW_QOS_EMI_PRIORITY1_RD()      (HW_QOS_EMI_PRIORITY1.U)
#define HW_QOS_EMI_PRIORITY1_WR(v)     (HW_QOS_EMI_PRIORITY1.U = (v))
#define HW_QOS_EMI_PRIORITY1_SET(v)    ((*(volatile reg32_t *) HW_QOS_EMI_PRIORITY1_SET_ADDR) = (v))
#define HW_QOS_EMI_PRIORITY1_CLR(v)    ((*(volatile reg32_t *) HW_QOS_EMI_PRIORITY1_CLR_ADDR) = (v))
#define HW_QOS_EMI_PRIORITY1_TOG(v)    ((*(volatile reg32_t *) HW_QOS_EMI_PRIORITY1_TOG_ADDR) = (v))
#endif

/*
 * constants & macros for individual QOS_EMI_PRIORITY1 bitfields
 */

/* --- Register HW_QOS_EMI_PRIORITY1, field M2_WR[2:0] (RW)
 *
 * Specifies the priority level for the write commands on MasterID 4. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY1_M2_WR      (0)      //!< Bit position for QOS_EMI_PRIORITY1_M2_WR.
#define BM_QOS_EMI_PRIORITY1_M2_WR      (0x00000007)  //!< Bit mask for QOS_EMI_PRIORITY1_M2_WR.

//! @brief Get value of QOS_EMI_PRIORITY1_M2_WR from a register value.
#define BG_QOS_EMI_PRIORITY1_M2_WR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY1_M2_WR) >> BP_QOS_EMI_PRIORITY1_M2_WR)

//! @brief Format value for bitfield QOS_EMI_PRIORITY1_M2_WR.
#define BF_QOS_EMI_PRIORITY1_M2_WR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY1_M2_WR) & BM_QOS_EMI_PRIORITY1_M2_WR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M2_WR field to a new value.
#define BW_QOS_EMI_PRIORITY1_M2_WR(v)   BF_CS1(QOS_EMI_PRIORITY1, M2_WR, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY1, field M2_RD[6:4] (RW)
 *
 * Specifies the priority level for the read commands on MasterID 4. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY1_M2_RD      (4)      //!< Bit position for QOS_EMI_PRIORITY1_M2_RD.
#define BM_QOS_EMI_PRIORITY1_M2_RD      (0x00000070)  //!< Bit mask for QOS_EMI_PRIORITY1_M2_RD.

//! @brief Get value of QOS_EMI_PRIORITY1_M2_RD from a register value.
#define BG_QOS_EMI_PRIORITY1_M2_RD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY1_M2_RD) >> BP_QOS_EMI_PRIORITY1_M2_RD)

//! @brief Format value for bitfield QOS_EMI_PRIORITY1_M2_RD.
#define BF_QOS_EMI_PRIORITY1_M2_RD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY1_M2_RD) & BM_QOS_EMI_PRIORITY1_M2_RD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M2_RD field to a new value.
#define BW_QOS_EMI_PRIORITY1_M2_RD(v)   BF_CS1(QOS_EMI_PRIORITY1, M2_RD, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY1, field M3_WR[10:8] (RW)
 *
 * Specifies the priority level for the write commands on MasterID 5. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY1_M3_WR      (8)      //!< Bit position for QOS_EMI_PRIORITY1_M3_WR.
#define BM_QOS_EMI_PRIORITY1_M3_WR      (0x00000700)  //!< Bit mask for QOS_EMI_PRIORITY1_M3_WR.

//! @brief Get value of QOS_EMI_PRIORITY1_M3_WR from a register value.
#define BG_QOS_EMI_PRIORITY1_M3_WR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY1_M3_WR) >> BP_QOS_EMI_PRIORITY1_M3_WR)

//! @brief Format value for bitfield QOS_EMI_PRIORITY1_M3_WR.
#define BF_QOS_EMI_PRIORITY1_M3_WR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY1_M3_WR) & BM_QOS_EMI_PRIORITY1_M3_WR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M3_WR field to a new value.
#define BW_QOS_EMI_PRIORITY1_M3_WR(v)   BF_CS1(QOS_EMI_PRIORITY1, M3_WR, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY1, field M3_RD[14:12] (RW)
 *
 * Specifies the priority level for the read commands on MasterID 5. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY1_M3_RD      (12)      //!< Bit position for QOS_EMI_PRIORITY1_M3_RD.
#define BM_QOS_EMI_PRIORITY1_M3_RD      (0x00007000)  //!< Bit mask for QOS_EMI_PRIORITY1_M3_RD.

//! @brief Get value of QOS_EMI_PRIORITY1_M3_RD from a register value.
#define BG_QOS_EMI_PRIORITY1_M3_RD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY1_M3_RD) >> BP_QOS_EMI_PRIORITY1_M3_RD)

//! @brief Format value for bitfield QOS_EMI_PRIORITY1_M3_RD.
#define BF_QOS_EMI_PRIORITY1_M3_RD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY1_M3_RD) & BM_QOS_EMI_PRIORITY1_M3_RD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M3_RD field to a new value.
#define BW_QOS_EMI_PRIORITY1_M3_RD(v)   BF_CS1(QOS_EMI_PRIORITY1, M3_RD, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY1, field M4_WR[18:16] (RW)
 *
 * Specifies the priority level for the write commands on MasterID 6. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY1_M4_WR      (16)      //!< Bit position for QOS_EMI_PRIORITY1_M4_WR.
#define BM_QOS_EMI_PRIORITY1_M4_WR      (0x00070000)  //!< Bit mask for QOS_EMI_PRIORITY1_M4_WR.

//! @brief Get value of QOS_EMI_PRIORITY1_M4_WR from a register value.
#define BG_QOS_EMI_PRIORITY1_M4_WR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY1_M4_WR) >> BP_QOS_EMI_PRIORITY1_M4_WR)

//! @brief Format value for bitfield QOS_EMI_PRIORITY1_M4_WR.
#define BF_QOS_EMI_PRIORITY1_M4_WR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY1_M4_WR) & BM_QOS_EMI_PRIORITY1_M4_WR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M4_WR field to a new value.
#define BW_QOS_EMI_PRIORITY1_M4_WR(v)   BF_CS1(QOS_EMI_PRIORITY1, M4_WR, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY1, field M4_RD[22:20] (RW)
 *
 * Specifies the priority level for the read commands on MasterID 6. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY1_M4_RD      (20)      //!< Bit position for QOS_EMI_PRIORITY1_M4_RD.
#define BM_QOS_EMI_PRIORITY1_M4_RD      (0x00700000)  //!< Bit mask for QOS_EMI_PRIORITY1_M4_RD.

//! @brief Get value of QOS_EMI_PRIORITY1_M4_RD from a register value.
#define BG_QOS_EMI_PRIORITY1_M4_RD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY1_M4_RD) >> BP_QOS_EMI_PRIORITY1_M4_RD)

//! @brief Format value for bitfield QOS_EMI_PRIORITY1_M4_RD.
#define BF_QOS_EMI_PRIORITY1_M4_RD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY1_M4_RD) & BM_QOS_EMI_PRIORITY1_M4_RD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M4_RD field to a new value.
#define BW_QOS_EMI_PRIORITY1_M4_RD(v)   BF_CS1(QOS_EMI_PRIORITY1, M4_RD, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY1, field M5_WR[26:24] (RW)
 *
 * Specifies the priority level for the write commands on MasterID 7. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY1_M5_WR      (24)      //!< Bit position for QOS_EMI_PRIORITY1_M5_WR.
#define BM_QOS_EMI_PRIORITY1_M5_WR      (0x07000000)  //!< Bit mask for QOS_EMI_PRIORITY1_M5_WR.

//! @brief Get value of QOS_EMI_PRIORITY1_M5_WR from a register value.
#define BG_QOS_EMI_PRIORITY1_M5_WR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY1_M5_WR) >> BP_QOS_EMI_PRIORITY1_M5_WR)

//! @brief Format value for bitfield QOS_EMI_PRIORITY1_M5_WR.
#define BF_QOS_EMI_PRIORITY1_M5_WR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY1_M5_WR) & BM_QOS_EMI_PRIORITY1_M5_WR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M5_WR field to a new value.
#define BW_QOS_EMI_PRIORITY1_M5_WR(v)   BF_CS1(QOS_EMI_PRIORITY1, M5_WR, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY1, field M5_RD[30:28] (RW)
 *
 * Specifies the priority level for the read commands on MasterID 7. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY1_M5_RD      (28)      //!< Bit position for QOS_EMI_PRIORITY1_M5_RD.
#define BM_QOS_EMI_PRIORITY1_M5_RD      (0x70000000)  //!< Bit mask for QOS_EMI_PRIORITY1_M5_RD.

//! @brief Get value of QOS_EMI_PRIORITY1_M5_RD from a register value.
#define BG_QOS_EMI_PRIORITY1_M5_RD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY1_M5_RD) >> BP_QOS_EMI_PRIORITY1_M5_RD)

//! @brief Format value for bitfield QOS_EMI_PRIORITY1_M5_RD.
#define BF_QOS_EMI_PRIORITY1_M5_RD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY1_M5_RD) & BM_QOS_EMI_PRIORITY1_M5_RD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M5_RD field to a new value.
#define BW_QOS_EMI_PRIORITY1_M5_RD(v)   BF_CS1(QOS_EMI_PRIORITY1, M5_RD, v)
#endif

//-------------------------------------------------------------------------------------------
// HW_QOS_EMI_PRIORITY2 - EMI priority Registers
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_QOS_EMI_PRIORITY2 - EMI priority Registers (RW)
 *
 * Reset value: 0x11112222
 *
 * For EMI manual priority mode, this register specifies the AWPRIORITY and ARPRIORITY parameters
 * for masters 8-11.
 */
typedef union _hw_qos_emi_priority2
{
    reg32_t U;
    struct _hw_qos_emi_priority2_bitfields
    {
        unsigned M6_WR : 3; //!< [2:0] Specifies the priority level for the write commands on MasterID 8.
        unsigned RESERVED0 : 1; //!< [3] Always set this bit field to zero.
        unsigned M6_RD : 3; //!< [6:4] Specifies the priority level for the read commands on MasterID 8.
        unsigned RESERVED1 : 1; //!< [7] Always set this bit field to zero.
        unsigned M7_WR : 3; //!< [10:8] Specifies the priority level for the write commands on MasterID 9.
        unsigned RESERVED2 : 1; //!< [11] Always set this bit field to zero.
        unsigned M7_RD : 3; //!< [14:12] Specifies the priority level for the read commands on MasterID 9.
        unsigned RESERVED3 : 1; //!< [15] Always set this bit field to zero.
        unsigned M8_WR : 3; //!< [18:16] Specifies the priority level for the write commands on MasterID 10.
        unsigned RESERVED4 : 1; //!< [19] Always set this bit field to zero.
        unsigned M8_RD : 3; //!< [22:20] Specifies the priority level for the read commands on MasterID 10.
        unsigned RESERVED5 : 1; //!< [23] Always set this bit field to zero.
        unsigned M9_WR : 3; //!< [26:24] Specifies the priority level for the write commands on MasterID 10.
        unsigned RESERVED6 : 1; //!< [27] Always set this bit field to zero.
        unsigned M9_RD : 3; //!< [30:28] Specifies the priority level for the read commands on MasterID 11.
        unsigned RESERVED7 : 1; //!< [31] Always set this bit field to zero.
    } B;
} hw_qos_emi_priority2_t;
#endif

/*
 * constants & macros for entire QOS_EMI_PRIORITY2 register
 */
#define HW_QOS_EMI_PRIORITY2_ADDR      (REGS_QOS_BASE + 0x60)
#define HW_QOS_EMI_PRIORITY2_SET_ADDR  (HW_QOS_EMI_PRIORITY2_ADDR + 0x4)
#define HW_QOS_EMI_PRIORITY2_CLR_ADDR  (HW_QOS_EMI_PRIORITY2_ADDR + 0x8)
#define HW_QOS_EMI_PRIORITY2_TOG_ADDR  (HW_QOS_EMI_PRIORITY2_ADDR + 0xC)

#ifndef __LANGUAGE_ASM__
#define HW_QOS_EMI_PRIORITY2           (*(volatile hw_qos_emi_priority2_t *) HW_QOS_EMI_PRIORITY2_ADDR)
#define HW_QOS_EMI_PRIORITY2_RD()      (HW_QOS_EMI_PRIORITY2.U)
#define HW_QOS_EMI_PRIORITY2_WR(v)     (HW_QOS_EMI_PRIORITY2.U = (v))
#define HW_QOS_EMI_PRIORITY2_SET(v)    ((*(volatile reg32_t *) HW_QOS_EMI_PRIORITY2_SET_ADDR) = (v))
#define HW_QOS_EMI_PRIORITY2_CLR(v)    ((*(volatile reg32_t *) HW_QOS_EMI_PRIORITY2_CLR_ADDR) = (v))
#define HW_QOS_EMI_PRIORITY2_TOG(v)    ((*(volatile reg32_t *) HW_QOS_EMI_PRIORITY2_TOG_ADDR) = (v))
#endif

/*
 * constants & macros for individual QOS_EMI_PRIORITY2 bitfields
 */

/* --- Register HW_QOS_EMI_PRIORITY2, field M6_WR[2:0] (RW)
 *
 * Specifies the priority level for the write commands on MasterID 8. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY2_M6_WR      (0)      //!< Bit position for QOS_EMI_PRIORITY2_M6_WR.
#define BM_QOS_EMI_PRIORITY2_M6_WR      (0x00000007)  //!< Bit mask for QOS_EMI_PRIORITY2_M6_WR.

//! @brief Get value of QOS_EMI_PRIORITY2_M6_WR from a register value.
#define BG_QOS_EMI_PRIORITY2_M6_WR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY2_M6_WR) >> BP_QOS_EMI_PRIORITY2_M6_WR)

//! @brief Format value for bitfield QOS_EMI_PRIORITY2_M6_WR.
#define BF_QOS_EMI_PRIORITY2_M6_WR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY2_M6_WR) & BM_QOS_EMI_PRIORITY2_M6_WR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M6_WR field to a new value.
#define BW_QOS_EMI_PRIORITY2_M6_WR(v)   BF_CS1(QOS_EMI_PRIORITY2, M6_WR, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY2, field M6_RD[6:4] (RW)
 *
 * Specifies the priority level for the read commands on MasterID 8. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY2_M6_RD      (4)      //!< Bit position for QOS_EMI_PRIORITY2_M6_RD.
#define BM_QOS_EMI_PRIORITY2_M6_RD      (0x00000070)  //!< Bit mask for QOS_EMI_PRIORITY2_M6_RD.

//! @brief Get value of QOS_EMI_PRIORITY2_M6_RD from a register value.
#define BG_QOS_EMI_PRIORITY2_M6_RD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY2_M6_RD) >> BP_QOS_EMI_PRIORITY2_M6_RD)

//! @brief Format value for bitfield QOS_EMI_PRIORITY2_M6_RD.
#define BF_QOS_EMI_PRIORITY2_M6_RD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY2_M6_RD) & BM_QOS_EMI_PRIORITY2_M6_RD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M6_RD field to a new value.
#define BW_QOS_EMI_PRIORITY2_M6_RD(v)   BF_CS1(QOS_EMI_PRIORITY2, M6_RD, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY2, field M7_WR[10:8] (RW)
 *
 * Specifies the priority level for the write commands on MasterID 9. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY2_M7_WR      (8)      //!< Bit position for QOS_EMI_PRIORITY2_M7_WR.
#define BM_QOS_EMI_PRIORITY2_M7_WR      (0x00000700)  //!< Bit mask for QOS_EMI_PRIORITY2_M7_WR.

//! @brief Get value of QOS_EMI_PRIORITY2_M7_WR from a register value.
#define BG_QOS_EMI_PRIORITY2_M7_WR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY2_M7_WR) >> BP_QOS_EMI_PRIORITY2_M7_WR)

//! @brief Format value for bitfield QOS_EMI_PRIORITY2_M7_WR.
#define BF_QOS_EMI_PRIORITY2_M7_WR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY2_M7_WR) & BM_QOS_EMI_PRIORITY2_M7_WR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M7_WR field to a new value.
#define BW_QOS_EMI_PRIORITY2_M7_WR(v)   BF_CS1(QOS_EMI_PRIORITY2, M7_WR, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY2, field M7_RD[14:12] (RW)
 *
 * Specifies the priority level for the read commands on MasterID 9. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY2_M7_RD      (12)      //!< Bit position for QOS_EMI_PRIORITY2_M7_RD.
#define BM_QOS_EMI_PRIORITY2_M7_RD      (0x00007000)  //!< Bit mask for QOS_EMI_PRIORITY2_M7_RD.

//! @brief Get value of QOS_EMI_PRIORITY2_M7_RD from a register value.
#define BG_QOS_EMI_PRIORITY2_M7_RD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY2_M7_RD) >> BP_QOS_EMI_PRIORITY2_M7_RD)

//! @brief Format value for bitfield QOS_EMI_PRIORITY2_M7_RD.
#define BF_QOS_EMI_PRIORITY2_M7_RD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY2_M7_RD) & BM_QOS_EMI_PRIORITY2_M7_RD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M7_RD field to a new value.
#define BW_QOS_EMI_PRIORITY2_M7_RD(v)   BF_CS1(QOS_EMI_PRIORITY2, M7_RD, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY2, field M8_WR[18:16] (RW)
 *
 * Specifies the priority level for the write commands on MasterID 10. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY2_M8_WR      (16)      //!< Bit position for QOS_EMI_PRIORITY2_M8_WR.
#define BM_QOS_EMI_PRIORITY2_M8_WR      (0x00070000)  //!< Bit mask for QOS_EMI_PRIORITY2_M8_WR.

//! @brief Get value of QOS_EMI_PRIORITY2_M8_WR from a register value.
#define BG_QOS_EMI_PRIORITY2_M8_WR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY2_M8_WR) >> BP_QOS_EMI_PRIORITY2_M8_WR)

//! @brief Format value for bitfield QOS_EMI_PRIORITY2_M8_WR.
#define BF_QOS_EMI_PRIORITY2_M8_WR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY2_M8_WR) & BM_QOS_EMI_PRIORITY2_M8_WR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M8_WR field to a new value.
#define BW_QOS_EMI_PRIORITY2_M8_WR(v)   BF_CS1(QOS_EMI_PRIORITY2, M8_WR, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY2, field M8_RD[22:20] (RW)
 *
 * Specifies the priority level for the read commands on MasterID 10. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY2_M8_RD      (20)      //!< Bit position for QOS_EMI_PRIORITY2_M8_RD.
#define BM_QOS_EMI_PRIORITY2_M8_RD      (0x00700000)  //!< Bit mask for QOS_EMI_PRIORITY2_M8_RD.

//! @brief Get value of QOS_EMI_PRIORITY2_M8_RD from a register value.
#define BG_QOS_EMI_PRIORITY2_M8_RD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY2_M8_RD) >> BP_QOS_EMI_PRIORITY2_M8_RD)

//! @brief Format value for bitfield QOS_EMI_PRIORITY2_M8_RD.
#define BF_QOS_EMI_PRIORITY2_M8_RD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY2_M8_RD) & BM_QOS_EMI_PRIORITY2_M8_RD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M8_RD field to a new value.
#define BW_QOS_EMI_PRIORITY2_M8_RD(v)   BF_CS1(QOS_EMI_PRIORITY2, M8_RD, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY2, field M9_WR[26:24] (RW)
 *
 * Specifies the priority level for the write commands on MasterID 10. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY2_M9_WR      (24)      //!< Bit position for QOS_EMI_PRIORITY2_M9_WR.
#define BM_QOS_EMI_PRIORITY2_M9_WR      (0x07000000)  //!< Bit mask for QOS_EMI_PRIORITY2_M9_WR.

//! @brief Get value of QOS_EMI_PRIORITY2_M9_WR from a register value.
#define BG_QOS_EMI_PRIORITY2_M9_WR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY2_M9_WR) >> BP_QOS_EMI_PRIORITY2_M9_WR)

//! @brief Format value for bitfield QOS_EMI_PRIORITY2_M9_WR.
#define BF_QOS_EMI_PRIORITY2_M9_WR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY2_M9_WR) & BM_QOS_EMI_PRIORITY2_M9_WR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M9_WR field to a new value.
#define BW_QOS_EMI_PRIORITY2_M9_WR(v)   BF_CS1(QOS_EMI_PRIORITY2, M9_WR, v)
#endif

/* --- Register HW_QOS_EMI_PRIORITY2, field M9_RD[30:28] (RW)
 *
 * Specifies the priority level for the read commands on MasterID 11. 0 = highest priority. 7 =
 * lowest priority.
 */

#define BP_QOS_EMI_PRIORITY2_M9_RD      (28)      //!< Bit position for QOS_EMI_PRIORITY2_M9_RD.
#define BM_QOS_EMI_PRIORITY2_M9_RD      (0x70000000)  //!< Bit mask for QOS_EMI_PRIORITY2_M9_RD.

//! @brief Get value of QOS_EMI_PRIORITY2_M9_RD from a register value.
#define BG_QOS_EMI_PRIORITY2_M9_RD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_EMI_PRIORITY2_M9_RD) >> BP_QOS_EMI_PRIORITY2_M9_RD)

//! @brief Format value for bitfield QOS_EMI_PRIORITY2_M9_RD.
#define BF_QOS_EMI_PRIORITY2_M9_RD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_EMI_PRIORITY2_M9_RD) & BM_QOS_EMI_PRIORITY2_M9_RD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M9_RD field to a new value.
#define BW_QOS_EMI_PRIORITY2_M9_RD(v)   BF_CS1(QOS_EMI_PRIORITY2, M9_RD, v)
#endif

//-------------------------------------------------------------------------------------------
// HW_QOS_DISABLE - AXI Master Disble Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_QOS_DISABLE - AXI Master Disble Register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register allows disabling of the individual master ports of the AXI fabric. This can be
 * useful during system clock frequency programming.
 */
typedef union _hw_qos_disable
{
    reg32_t U;
    struct _hw_qos_disable_bitfields
    {
        unsigned RESERVED0 : 1; //!< [0] Always set this bit field to zero.
        unsigned M1_0_DIS : 1; //!< [1] Setting this bit disables the interface between master1_0 and the AXI fabric.
        unsigned M1_1_DIS : 1; //!< [2] Setting this bit disables the interface between master1_1 and the AXI fabric.
        unsigned M1_2_DIS : 1; //!< [3] Setting this bit disables the interface between master1_2 and the AXI fabric.
        unsigned M2_DIS : 1; //!< [4] Setting this bit disables the interface between master2 and the AXI fabric.
        unsigned M3_DIS : 1; //!< [5] Setting this bit disables the interface between master3 and the AXI fabric.
        unsigned M4_DIS : 1; //!< [6] Setting this bit disables the interface between master4 and the AXI fabric.
        unsigned M5_DIS : 1; //!< [7] Setting this bit disables the interface between master5 and the AXI fabric.
        unsigned M6_DIS : 1; //!< [8] Setting this bit disables the interface between master6 and the AXI fabric.
        unsigned M7_DIS : 1; //!< [9] Setting this bit disables the interface between master7 and the AXI fabric.
        unsigned M8_DIS : 1; //!< [10] Setting this bit disables the interface between master8 and the AXI fabric.
        unsigned M9_DIS : 1; //!< [11] Setting this bit disables the interface between master9 and the AXI fabric.
        unsigned RESERVED1 : 5; //!< [16:12] Always set this bit field to zero.
        unsigned M1_0_DIS_STAT : 1; //!< [17] This bit indicates the enable/disable status for master port1_0 on the AXI fabric.
        unsigned M1_1_DIS_STAT : 1; //!< [18] This bit indicates the enable/disable status for master port1_1 on the AXI fabric.
        unsigned M1_2_DIS_STAT : 1; //!< [19] This bit indicates the enable/disable status for master port1_2 on the AXI fabric.
        unsigned M2_DIS_STAT : 1; //!< [20] This bit indicates the enable/disable status for master port0 on the AXI fabric.
        unsigned M3_DIS_STAT : 1; //!< [21] This bit indicates the enable/disable status for master port0 on the AXI fabric.
        unsigned M4_DIS_STAT : 1; //!< [22] This bit indicates the enable/disable status for master port0 on the AXI fabric.
        unsigned M5_DIS_STAT : 1; //!< [23] This bit indicates the enable/disable status for master port0 on the AXI fabric.
        unsigned M6_DIS_STAT : 1; //!< [24] This bit indicates the enable/disable status for master port0 on the AXI fabric.
        unsigned M7_DIS_STAT : 1; //!< [25] This bit indicates the enable/disable status for master port0 on the AXI fabric.
        unsigned M8_DIS_STAT : 1; //!< [26] This bit indicates the enable/disable status for master port0 on the AXI fabric.
        unsigned M9_DIS_STAT : 1; //!< [27] This bit indicates the enable/disable status for master port0 on the AXI fabric.
        unsigned RESERVED2 : 4; //!< [31:28] Always set this bit field to zero.
    } B;
} hw_qos_disable_t;
#endif

/*
 * constants & macros for entire QOS_DISABLE register
 */
#define HW_QOS_DISABLE_ADDR      (REGS_QOS_BASE + 0x70)
#define HW_QOS_DISABLE_SET_ADDR  (HW_QOS_DISABLE_ADDR + 0x4)
#define HW_QOS_DISABLE_CLR_ADDR  (HW_QOS_DISABLE_ADDR + 0x8)
#define HW_QOS_DISABLE_TOG_ADDR  (HW_QOS_DISABLE_ADDR + 0xC)

#ifndef __LANGUAGE_ASM__
#define HW_QOS_DISABLE           (*(volatile hw_qos_disable_t *) HW_QOS_DISABLE_ADDR)
#define HW_QOS_DISABLE_RD()      (HW_QOS_DISABLE.U)
#define HW_QOS_DISABLE_WR(v)     (HW_QOS_DISABLE.U = (v))
#define HW_QOS_DISABLE_SET(v)    ((*(volatile reg32_t *) HW_QOS_DISABLE_SET_ADDR) = (v))
#define HW_QOS_DISABLE_CLR(v)    ((*(volatile reg32_t *) HW_QOS_DISABLE_CLR_ADDR) = (v))
#define HW_QOS_DISABLE_TOG(v)    ((*(volatile reg32_t *) HW_QOS_DISABLE_TOG_ADDR) = (v))
#endif

/*
 * constants & macros for individual QOS_DISABLE bitfields
 */

/* --- Register HW_QOS_DISABLE, field M1_0_DIS[1] (RW)
 *
 * Setting this bit disables the interface between master1_0 and the AXI fabric.
 */

#define BP_QOS_DISABLE_M1_0_DIS      (1)      //!< Bit position for QOS_DISABLE_M1_0_DIS.
#define BM_QOS_DISABLE_M1_0_DIS      (0x00000002)  //!< Bit mask for QOS_DISABLE_M1_0_DIS.

//! @brief Get value of QOS_DISABLE_M1_0_DIS from a register value.
#define BG_QOS_DISABLE_M1_0_DIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M1_0_DIS) >> BP_QOS_DISABLE_M1_0_DIS)

//! @brief Format value for bitfield QOS_DISABLE_M1_0_DIS.
#define BF_QOS_DISABLE_M1_0_DIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_DISABLE_M1_0_DIS) & BM_QOS_DISABLE_M1_0_DIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M1_0_DIS field to a new value.
#define BW_QOS_DISABLE_M1_0_DIS(v)   BF_CS1(QOS_DISABLE, M1_0_DIS, v)
#endif

/* --- Register HW_QOS_DISABLE, field M1_1_DIS[2] (RW)
 *
 * Setting this bit disables the interface between master1_1 and the AXI fabric.
 */

#define BP_QOS_DISABLE_M1_1_DIS      (2)      //!< Bit position for QOS_DISABLE_M1_1_DIS.
#define BM_QOS_DISABLE_M1_1_DIS      (0x00000004)  //!< Bit mask for QOS_DISABLE_M1_1_DIS.

//! @brief Get value of QOS_DISABLE_M1_1_DIS from a register value.
#define BG_QOS_DISABLE_M1_1_DIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M1_1_DIS) >> BP_QOS_DISABLE_M1_1_DIS)

//! @brief Format value for bitfield QOS_DISABLE_M1_1_DIS.
#define BF_QOS_DISABLE_M1_1_DIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_DISABLE_M1_1_DIS) & BM_QOS_DISABLE_M1_1_DIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M1_1_DIS field to a new value.
#define BW_QOS_DISABLE_M1_1_DIS(v)   BF_CS1(QOS_DISABLE, M1_1_DIS, v)
#endif

/* --- Register HW_QOS_DISABLE, field M1_2_DIS[3] (RW)
 *
 * Setting this bit disables the interface between master1_2 and the AXI fabric.
 */

#define BP_QOS_DISABLE_M1_2_DIS      (3)      //!< Bit position for QOS_DISABLE_M1_2_DIS.
#define BM_QOS_DISABLE_M1_2_DIS      (0x00000008)  //!< Bit mask for QOS_DISABLE_M1_2_DIS.

//! @brief Get value of QOS_DISABLE_M1_2_DIS from a register value.
#define BG_QOS_DISABLE_M1_2_DIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M1_2_DIS) >> BP_QOS_DISABLE_M1_2_DIS)

//! @brief Format value for bitfield QOS_DISABLE_M1_2_DIS.
#define BF_QOS_DISABLE_M1_2_DIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_DISABLE_M1_2_DIS) & BM_QOS_DISABLE_M1_2_DIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M1_2_DIS field to a new value.
#define BW_QOS_DISABLE_M1_2_DIS(v)   BF_CS1(QOS_DISABLE, M1_2_DIS, v)
#endif

/* --- Register HW_QOS_DISABLE, field M2_DIS[4] (RW)
 *
 * Setting this bit disables the interface between master2 and the AXI fabric.
 */

#define BP_QOS_DISABLE_M2_DIS      (4)      //!< Bit position for QOS_DISABLE_M2_DIS.
#define BM_QOS_DISABLE_M2_DIS      (0x00000010)  //!< Bit mask for QOS_DISABLE_M2_DIS.

//! @brief Get value of QOS_DISABLE_M2_DIS from a register value.
#define BG_QOS_DISABLE_M2_DIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M2_DIS) >> BP_QOS_DISABLE_M2_DIS)

//! @brief Format value for bitfield QOS_DISABLE_M2_DIS.
#define BF_QOS_DISABLE_M2_DIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_DISABLE_M2_DIS) & BM_QOS_DISABLE_M2_DIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M2_DIS field to a new value.
#define BW_QOS_DISABLE_M2_DIS(v)   BF_CS1(QOS_DISABLE, M2_DIS, v)
#endif

/* --- Register HW_QOS_DISABLE, field M3_DIS[5] (RW)
 *
 * Setting this bit disables the interface between master3 and the AXI fabric.
 */

#define BP_QOS_DISABLE_M3_DIS      (5)      //!< Bit position for QOS_DISABLE_M3_DIS.
#define BM_QOS_DISABLE_M3_DIS      (0x00000020)  //!< Bit mask for QOS_DISABLE_M3_DIS.

//! @brief Get value of QOS_DISABLE_M3_DIS from a register value.
#define BG_QOS_DISABLE_M3_DIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M3_DIS) >> BP_QOS_DISABLE_M3_DIS)

//! @brief Format value for bitfield QOS_DISABLE_M3_DIS.
#define BF_QOS_DISABLE_M3_DIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_DISABLE_M3_DIS) & BM_QOS_DISABLE_M3_DIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M3_DIS field to a new value.
#define BW_QOS_DISABLE_M3_DIS(v)   BF_CS1(QOS_DISABLE, M3_DIS, v)
#endif

/* --- Register HW_QOS_DISABLE, field M4_DIS[6] (RW)
 *
 * Setting this bit disables the interface between master4 and the AXI fabric.
 */

#define BP_QOS_DISABLE_M4_DIS      (6)      //!< Bit position for QOS_DISABLE_M4_DIS.
#define BM_QOS_DISABLE_M4_DIS      (0x00000040)  //!< Bit mask for QOS_DISABLE_M4_DIS.

//! @brief Get value of QOS_DISABLE_M4_DIS from a register value.
#define BG_QOS_DISABLE_M4_DIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M4_DIS) >> BP_QOS_DISABLE_M4_DIS)

//! @brief Format value for bitfield QOS_DISABLE_M4_DIS.
#define BF_QOS_DISABLE_M4_DIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_DISABLE_M4_DIS) & BM_QOS_DISABLE_M4_DIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M4_DIS field to a new value.
#define BW_QOS_DISABLE_M4_DIS(v)   BF_CS1(QOS_DISABLE, M4_DIS, v)
#endif

/* --- Register HW_QOS_DISABLE, field M5_DIS[7] (RW)
 *
 * Setting this bit disables the interface between master5 and the AXI fabric.
 */

#define BP_QOS_DISABLE_M5_DIS      (7)      //!< Bit position for QOS_DISABLE_M5_DIS.
#define BM_QOS_DISABLE_M5_DIS      (0x00000080)  //!< Bit mask for QOS_DISABLE_M5_DIS.

//! @brief Get value of QOS_DISABLE_M5_DIS from a register value.
#define BG_QOS_DISABLE_M5_DIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M5_DIS) >> BP_QOS_DISABLE_M5_DIS)

//! @brief Format value for bitfield QOS_DISABLE_M5_DIS.
#define BF_QOS_DISABLE_M5_DIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_DISABLE_M5_DIS) & BM_QOS_DISABLE_M5_DIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M5_DIS field to a new value.
#define BW_QOS_DISABLE_M5_DIS(v)   BF_CS1(QOS_DISABLE, M5_DIS, v)
#endif

/* --- Register HW_QOS_DISABLE, field M6_DIS[8] (RW)
 *
 * Setting this bit disables the interface between master6 and the AXI fabric.
 */

#define BP_QOS_DISABLE_M6_DIS      (8)      //!< Bit position for QOS_DISABLE_M6_DIS.
#define BM_QOS_DISABLE_M6_DIS      (0x00000100)  //!< Bit mask for QOS_DISABLE_M6_DIS.

//! @brief Get value of QOS_DISABLE_M6_DIS from a register value.
#define BG_QOS_DISABLE_M6_DIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M6_DIS) >> BP_QOS_DISABLE_M6_DIS)

//! @brief Format value for bitfield QOS_DISABLE_M6_DIS.
#define BF_QOS_DISABLE_M6_DIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_DISABLE_M6_DIS) & BM_QOS_DISABLE_M6_DIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M6_DIS field to a new value.
#define BW_QOS_DISABLE_M6_DIS(v)   BF_CS1(QOS_DISABLE, M6_DIS, v)
#endif

/* --- Register HW_QOS_DISABLE, field M7_DIS[9] (RW)
 *
 * Setting this bit disables the interface between master7 and the AXI fabric.
 */

#define BP_QOS_DISABLE_M7_DIS      (9)      //!< Bit position for QOS_DISABLE_M7_DIS.
#define BM_QOS_DISABLE_M7_DIS      (0x00000200)  //!< Bit mask for QOS_DISABLE_M7_DIS.

//! @brief Get value of QOS_DISABLE_M7_DIS from a register value.
#define BG_QOS_DISABLE_M7_DIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M7_DIS) >> BP_QOS_DISABLE_M7_DIS)

//! @brief Format value for bitfield QOS_DISABLE_M7_DIS.
#define BF_QOS_DISABLE_M7_DIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_DISABLE_M7_DIS) & BM_QOS_DISABLE_M7_DIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M7_DIS field to a new value.
#define BW_QOS_DISABLE_M7_DIS(v)   BF_CS1(QOS_DISABLE, M7_DIS, v)
#endif

/* --- Register HW_QOS_DISABLE, field M8_DIS[10] (RW)
 *
 * Setting this bit disables the interface between master8 and the AXI fabric.
 */

#define BP_QOS_DISABLE_M8_DIS      (10)      //!< Bit position for QOS_DISABLE_M8_DIS.
#define BM_QOS_DISABLE_M8_DIS      (0x00000400)  //!< Bit mask for QOS_DISABLE_M8_DIS.

//! @brief Get value of QOS_DISABLE_M8_DIS from a register value.
#define BG_QOS_DISABLE_M8_DIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M8_DIS) >> BP_QOS_DISABLE_M8_DIS)

//! @brief Format value for bitfield QOS_DISABLE_M8_DIS.
#define BF_QOS_DISABLE_M8_DIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_DISABLE_M8_DIS) & BM_QOS_DISABLE_M8_DIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M8_DIS field to a new value.
#define BW_QOS_DISABLE_M8_DIS(v)   BF_CS1(QOS_DISABLE, M8_DIS, v)
#endif

/* --- Register HW_QOS_DISABLE, field M9_DIS[11] (RW)
 *
 * Setting this bit disables the interface between master9 and the AXI fabric.
 */

#define BP_QOS_DISABLE_M9_DIS      (11)      //!< Bit position for QOS_DISABLE_M9_DIS.
#define BM_QOS_DISABLE_M9_DIS      (0x00000800)  //!< Bit mask for QOS_DISABLE_M9_DIS.

//! @brief Get value of QOS_DISABLE_M9_DIS from a register value.
#define BG_QOS_DISABLE_M9_DIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M9_DIS) >> BP_QOS_DISABLE_M9_DIS)

//! @brief Format value for bitfield QOS_DISABLE_M9_DIS.
#define BF_QOS_DISABLE_M9_DIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_QOS_DISABLE_M9_DIS) & BM_QOS_DISABLE_M9_DIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the M9_DIS field to a new value.
#define BW_QOS_DISABLE_M9_DIS(v)   BF_CS1(QOS_DISABLE, M9_DIS, v)
#endif

/* --- Register HW_QOS_DISABLE, field M1_0_DIS_STAT[17] (RO)
 *
 * This bit indicates the enable/disable status for master port1_0 on the AXI fabric. 0 = enabled; 1
 * = disabled.
 */

#define BP_QOS_DISABLE_M1_0_DIS_STAT      (17)      //!< Bit position for QOS_DISABLE_M1_0_DIS_STAT.
#define BM_QOS_DISABLE_M1_0_DIS_STAT      (0x00020000)  //!< Bit mask for QOS_DISABLE_M1_0_DIS_STAT.

//! @brief Get value of QOS_DISABLE_M1_0_DIS_STAT from a register value.
#define BG_QOS_DISABLE_M1_0_DIS_STAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M1_0_DIS_STAT) >> BP_QOS_DISABLE_M1_0_DIS_STAT)

/* --- Register HW_QOS_DISABLE, field M1_1_DIS_STAT[18] (RO)
 *
 * This bit indicates the enable/disable status for master port1_1 on the AXI fabric. 0 = enabled; 1
 * = disabled.
 */

#define BP_QOS_DISABLE_M1_1_DIS_STAT      (18)      //!< Bit position for QOS_DISABLE_M1_1_DIS_STAT.
#define BM_QOS_DISABLE_M1_1_DIS_STAT      (0x00040000)  //!< Bit mask for QOS_DISABLE_M1_1_DIS_STAT.

//! @brief Get value of QOS_DISABLE_M1_1_DIS_STAT from a register value.
#define BG_QOS_DISABLE_M1_1_DIS_STAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M1_1_DIS_STAT) >> BP_QOS_DISABLE_M1_1_DIS_STAT)

/* --- Register HW_QOS_DISABLE, field M1_2_DIS_STAT[19] (RO)
 *
 * This bit indicates the enable/disable status for master port1_2 on the AXI fabric. 0 = enabled; 1
 * = disabled.
 */

#define BP_QOS_DISABLE_M1_2_DIS_STAT      (19)      //!< Bit position for QOS_DISABLE_M1_2_DIS_STAT.
#define BM_QOS_DISABLE_M1_2_DIS_STAT      (0x00080000)  //!< Bit mask for QOS_DISABLE_M1_2_DIS_STAT.

//! @brief Get value of QOS_DISABLE_M1_2_DIS_STAT from a register value.
#define BG_QOS_DISABLE_M1_2_DIS_STAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M1_2_DIS_STAT) >> BP_QOS_DISABLE_M1_2_DIS_STAT)

/* --- Register HW_QOS_DISABLE, field M2_DIS_STAT[20] (RO)
 *
 * This bit indicates the enable/disable status for master port0 on the AXI fabric. 0 = enabled; 1 =
 * disabled.
 */

#define BP_QOS_DISABLE_M2_DIS_STAT      (20)      //!< Bit position for QOS_DISABLE_M2_DIS_STAT.
#define BM_QOS_DISABLE_M2_DIS_STAT      (0x00100000)  //!< Bit mask for QOS_DISABLE_M2_DIS_STAT.

//! @brief Get value of QOS_DISABLE_M2_DIS_STAT from a register value.
#define BG_QOS_DISABLE_M2_DIS_STAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M2_DIS_STAT) >> BP_QOS_DISABLE_M2_DIS_STAT)

/* --- Register HW_QOS_DISABLE, field M3_DIS_STAT[21] (RO)
 *
 * This bit indicates the enable/disable status for master port0 on the AXI fabric. 0 = enabled; 1 =
 * disabled.
 */

#define BP_QOS_DISABLE_M3_DIS_STAT      (21)      //!< Bit position for QOS_DISABLE_M3_DIS_STAT.
#define BM_QOS_DISABLE_M3_DIS_STAT      (0x00200000)  //!< Bit mask for QOS_DISABLE_M3_DIS_STAT.

//! @brief Get value of QOS_DISABLE_M3_DIS_STAT from a register value.
#define BG_QOS_DISABLE_M3_DIS_STAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M3_DIS_STAT) >> BP_QOS_DISABLE_M3_DIS_STAT)

/* --- Register HW_QOS_DISABLE, field M4_DIS_STAT[22] (RO)
 *
 * This bit indicates the enable/disable status for master port0 on the AXI fabric. 0 = enabled; 1 =
 * disabled.
 */

#define BP_QOS_DISABLE_M4_DIS_STAT      (22)      //!< Bit position for QOS_DISABLE_M4_DIS_STAT.
#define BM_QOS_DISABLE_M4_DIS_STAT      (0x00400000)  //!< Bit mask for QOS_DISABLE_M4_DIS_STAT.

//! @brief Get value of QOS_DISABLE_M4_DIS_STAT from a register value.
#define BG_QOS_DISABLE_M4_DIS_STAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M4_DIS_STAT) >> BP_QOS_DISABLE_M4_DIS_STAT)

/* --- Register HW_QOS_DISABLE, field M5_DIS_STAT[23] (RO)
 *
 * This bit indicates the enable/disable status for master port0 on the AXI fabric. 0 = enabled; 1 =
 * disabled.
 */

#define BP_QOS_DISABLE_M5_DIS_STAT      (23)      //!< Bit position for QOS_DISABLE_M5_DIS_STAT.
#define BM_QOS_DISABLE_M5_DIS_STAT      (0x00800000)  //!< Bit mask for QOS_DISABLE_M5_DIS_STAT.

//! @brief Get value of QOS_DISABLE_M5_DIS_STAT from a register value.
#define BG_QOS_DISABLE_M5_DIS_STAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M5_DIS_STAT) >> BP_QOS_DISABLE_M5_DIS_STAT)

/* --- Register HW_QOS_DISABLE, field M6_DIS_STAT[24] (RO)
 *
 * This bit indicates the enable/disable status for master port0 on the AXI fabric. 0 = enabled; 1 =
 * disabled.
 */

#define BP_QOS_DISABLE_M6_DIS_STAT      (24)      //!< Bit position for QOS_DISABLE_M6_DIS_STAT.
#define BM_QOS_DISABLE_M6_DIS_STAT      (0x01000000)  //!< Bit mask for QOS_DISABLE_M6_DIS_STAT.

//! @brief Get value of QOS_DISABLE_M6_DIS_STAT from a register value.
#define BG_QOS_DISABLE_M6_DIS_STAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M6_DIS_STAT) >> BP_QOS_DISABLE_M6_DIS_STAT)

/* --- Register HW_QOS_DISABLE, field M7_DIS_STAT[25] (RO)
 *
 * This bit indicates the enable/disable status for master port0 on the AXI fabric. 0 = enabled; 1 =
 * disabled.
 */

#define BP_QOS_DISABLE_M7_DIS_STAT      (25)      //!< Bit position for QOS_DISABLE_M7_DIS_STAT.
#define BM_QOS_DISABLE_M7_DIS_STAT      (0x02000000)  //!< Bit mask for QOS_DISABLE_M7_DIS_STAT.

//! @brief Get value of QOS_DISABLE_M7_DIS_STAT from a register value.
#define BG_QOS_DISABLE_M7_DIS_STAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M7_DIS_STAT) >> BP_QOS_DISABLE_M7_DIS_STAT)

/* --- Register HW_QOS_DISABLE, field M8_DIS_STAT[26] (RO)
 *
 * This bit indicates the enable/disable status for master port0 on the AXI fabric. 0 = enabled; 1 =
 * disabled.
 */

#define BP_QOS_DISABLE_M8_DIS_STAT      (26)      //!< Bit position for QOS_DISABLE_M8_DIS_STAT.
#define BM_QOS_DISABLE_M8_DIS_STAT      (0x04000000)  //!< Bit mask for QOS_DISABLE_M8_DIS_STAT.

//! @brief Get value of QOS_DISABLE_M8_DIS_STAT from a register value.
#define BG_QOS_DISABLE_M8_DIS_STAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M8_DIS_STAT) >> BP_QOS_DISABLE_M8_DIS_STAT)

/* --- Register HW_QOS_DISABLE, field M9_DIS_STAT[27] (RO)
 *
 * This bit indicates the enable/disable status for master port0 on the AXI fabric. 0 = enabled; 1 =
 * disabled.
 */

#define BP_QOS_DISABLE_M9_DIS_STAT      (27)      //!< Bit position for QOS_DISABLE_M9_DIS_STAT.
#define BM_QOS_DISABLE_M9_DIS_STAT      (0x08000000)  //!< Bit mask for QOS_DISABLE_M9_DIS_STAT.

//! @brief Get value of QOS_DISABLE_M9_DIS_STAT from a register value.
#define BG_QOS_DISABLE_M9_DIS_STAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_DISABLE_M9_DIS_STAT) >> BP_QOS_DISABLE_M9_DIS_STAT)

//-------------------------------------------------------------------------------------------
// HW_QOS_VERSION - QOS Version Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_QOS_VERSION - QOS Version Register (RO)
 *
 * Reset value: 0x01000000
 *
 * This register always returns a known read value for debug purposes it indicates the version of
 * the block.  This register indicates the RTL version in use.   EXAMPLE   if (QOS_VERSION.B.MAJOR
 * != 1) Error();
 */
typedef union _hw_qos_version
{
    reg32_t U;
    struct _hw_qos_version_bitfields
    {
        unsigned STEP : 16; //!< [15:0] Fixed read-only value reflecting the stepping of the RTL version.
        unsigned MINOR : 8; //!< [23:16] Fixed read-only value reflecting the MINOR field of the RTL version.
        unsigned MAJOR : 8; //!< [31:24] Fixed read-only value reflecting the MAJOR field of the RTL version.
    } B;
} hw_qos_version_t;
#endif

/*
 * constants & macros for entire QOS_VERSION register
 */
#define HW_QOS_VERSION_ADDR      (REGS_QOS_BASE + 0x80)

#ifndef __LANGUAGE_ASM__
#define HW_QOS_VERSION           (*(volatile hw_qos_version_t *) HW_QOS_VERSION_ADDR)
#define HW_QOS_VERSION_RD()      (HW_QOS_VERSION.U)
#endif

/*
 * constants & macros for individual QOS_VERSION bitfields
 */

/* --- Register HW_QOS_VERSION, field STEP[15:0] (RO)
 *
 * Fixed read-only value reflecting the stepping of the RTL version.
 */

#define BP_QOS_VERSION_STEP      (0)      //!< Bit position for QOS_VERSION_STEP.
#define BM_QOS_VERSION_STEP      (0x0000ffff)  //!< Bit mask for QOS_VERSION_STEP.

//! @brief Get value of QOS_VERSION_STEP from a register value.
#define BG_QOS_VERSION_STEP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_VERSION_STEP) >> BP_QOS_VERSION_STEP)

/* --- Register HW_QOS_VERSION, field MINOR[23:16] (RO)
 *
 * Fixed read-only value reflecting the MINOR field of the RTL version.
 */

#define BP_QOS_VERSION_MINOR      (16)      //!< Bit position for QOS_VERSION_MINOR.
#define BM_QOS_VERSION_MINOR      (0x00ff0000)  //!< Bit mask for QOS_VERSION_MINOR.

//! @brief Get value of QOS_VERSION_MINOR from a register value.
#define BG_QOS_VERSION_MINOR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_VERSION_MINOR) >> BP_QOS_VERSION_MINOR)

/* --- Register HW_QOS_VERSION, field MAJOR[31:24] (RO)
 *
 * Fixed read-only value reflecting the MAJOR field of the RTL version.
 */

#define BP_QOS_VERSION_MAJOR      (24)      //!< Bit position for QOS_VERSION_MAJOR.
#define BM_QOS_VERSION_MAJOR      (0xff000000)  //!< Bit mask for QOS_VERSION_MAJOR.

//! @brief Get value of QOS_VERSION_MAJOR from a register value.
#define BG_QOS_VERSION_MAJOR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_QOS_VERSION_MAJOR) >> BP_QOS_VERSION_MAJOR)


/*!
 * @brief All QOS module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_qos
{
    volatile hw_qos_ctrl_t CTRL; //!< QOS Control Register
    volatile reg32_t CTRL_SET; //!< QOS Control Register Set
    volatile reg32_t CTRL_CLR; //!< QOS Control Register Clear
    volatile reg32_t CTRL_TOG; //!< QOS Control Register Toggle
    volatile hw_qos_axi_qos0_t AXI_QOS0; //!< AXI QOS Register
    volatile reg32_t AXI_QOS0_SET; //!< AXI QOS Register Set
    volatile reg32_t AXI_QOS0_CLR; //!< AXI QOS Register Clear
    volatile reg32_t AXI_QOS0_TOG; //!< AXI QOS Register Toggle
    volatile hw_qos_axi_qos1_t AXI_QOS1; //!< AXI QOS Register
    volatile reg32_t AXI_QOS1_SET; //!< AXI QOS Register Set
    volatile reg32_t AXI_QOS1_CLR; //!< AXI QOS Register Clear
    volatile reg32_t AXI_QOS1_TOG; //!< AXI QOS Register Toggle
    volatile hw_qos_axi_qos2_t AXI_QOS2; //!< AXI QOS Register
    volatile reg32_t AXI_QOS2_SET; //!< AXI QOS Register Set
    volatile reg32_t AXI_QOS2_CLR; //!< AXI QOS Register Clear
    volatile reg32_t AXI_QOS2_TOG; //!< AXI QOS Register Toggle
    volatile hw_qos_emi_priority0_t EMI_PRIORITY0; //!< EMI priority Registers
    volatile reg32_t EMI_PRIORITY0_SET; //!< EMI priority Registers Set
    volatile reg32_t EMI_PRIORITY0_CLR; //!< EMI priority Registers Clear
    volatile reg32_t EMI_PRIORITY0_TOG; //!< EMI priority Registers Toggle
    volatile hw_qos_emi_priority1_t EMI_PRIORITY1; //!< EMI priority Registers
    volatile reg32_t EMI_PRIORITY1_SET; //!< EMI priority Registers Set
    volatile reg32_t EMI_PRIORITY1_CLR; //!< EMI priority Registers Clear
    volatile reg32_t EMI_PRIORITY1_TOG; //!< EMI priority Registers Toggle
    volatile hw_qos_emi_priority2_t EMI_PRIORITY2; //!< EMI priority Registers
    volatile reg32_t EMI_PRIORITY2_SET; //!< EMI priority Registers Set
    volatile reg32_t EMI_PRIORITY2_CLR; //!< EMI priority Registers Clear
    volatile reg32_t EMI_PRIORITY2_TOG; //!< EMI priority Registers Toggle
    volatile hw_qos_disable_t DISABLE; //!< AXI Master Disble Register
    volatile reg32_t DISABLE_SET; //!< AXI Master Disble Register Set
    volatile reg32_t DISABLE_CLR; //!< AXI Master Disble Register Clear
    volatile reg32_t DISABLE_TOG; //!< AXI Master Disble Register Toggle
    volatile hw_qos_version_t VERSION; //!< QOS Version Register
} hw_qos_t;
#pragma pack()

//! @brief Macro to access all QOS registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_QOS(0)</code>.
#define HW_QOS     (*(volatile hw_qos_t *) REGS_QOS_BASE)

#endif


#endif // __HW_QOS_REGISTERS_H__
