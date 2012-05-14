/*
 * Copyright (C) 2012, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
 */

#ifndef __HW_USBC_REGISTERS_H__
#define __HW_USBC_REGISTERS_H__

#include "regs.h"

/*
 * i.MX6SL USBC registers defined in this header file.
 *
 * - HW_USBC_UOG1_ID - Identification register
 * - HW_USBC_UOG1_HWGENERAL - Hardware General
 * - HW_USBC_UOG1_HWHOST - Host Hardware Parameters
 * - HW_USBC_UOG1_HWDEVICE - Device Hardware Parameters
 * - HW_USBC_UOG1_HWTXBUF - TX Buffer Hardware Parameters
 * - HW_USBC_UOG1_HWRXBUF - RX Buffer Hardware Parameters
 * - HW_USBC_UOG1_GPTIMER0LD - General Purpose Timer #0 Load
 * - HW_USBC_UOG1_GPTIMER0CTRL - General Purpose Timer #0 Controller
 * - HW_USBC_UOG1_GPTIMER1LD - General Purpose Timer #1 Load
 * - HW_USBC_UOG1_GPTIMER1CTRL - General Purpose Timer #1 Controller
 * - HW_USBC_UOG1_SBUSCFG - System Bus Config
 * - HW_USBC_UOG1_CAPLENGTH - Capability Registers Length
 * - HW_USBC_UOG1_HCIVERSION - Host Controller Interface Version
 * - HW_USBC_UOG1_HCSPARAMS - Host Controller Structural Parameters
 * - HW_USBC_UOG1_HCCPARAMS - Host Controller Capability Parameters
 * - HW_USBC_UOG1_DCIVERSION - Device Controller Interface Version
 * - HW_USBC_UOG1_DCCPARAMS - Device Controller Capability Parameters
 * - HW_USBC_UOG1_USBCMD - USB Command Register
 * - HW_USBC_UOG1_USBSTS - USB Status Register
 * - HW_USBC_UOG1_USBINTR - Interrupt Enable Register
 * - HW_USBC_UOG1_FRINDEX - USB Frame Index
 * - HW_USBC_UOG1_PERIODICLISTBASE - Frame List Base Address
 * - HW_USBC_UOG1_ASYNCLISTADDR - Next Asynch. Address
 * - HW_USBC_UOG1_BURSTSIZE - Programmable Burst Size
 * - HW_USBC_UOG1_TXFILLTUNING - TX FIFO Fill Tuning
 * - HW_USBC_UOG1_ENDPTNAK - Endpoint NAK
 * - HW_USBC_UOG1_ENDPTNAKEN - Endpoint NAK Enable
 * - HW_USBC_UOG1_CONFIGFLAG - Configure Flag Register
 * - HW_USBC_UOG1_PORTSC1 - Port Status & Control
 * - HW_USBC_UOG1_OTGSC - On-The-Go Status & control
 * - HW_USBC_UOG1_USBMODE - USB Device Mode
 * - HW_USBC_UOG1_ENDPTSETUPSTAT - Endpoint Setup Status
 * - HW_USBC_UOG1_ENDPTPRIME - Endpoint Prime
 * - HW_USBC_UOG1_ENDPTFLUSH - Endpoint Flush
 * - HW_USBC_UOG1_ENDPTSTAT - Endpoint Status
 * - HW_USBC_UOG1_ENDPTCOMPLETE - Endpoint Complete
 * - HW_USBC_UOG1_ENDPTCTRL0 - Endpoint Control0
 * - HW_USBC_UOG1_ENDPTCTRL1 - Endpoint Control 1
 * - HW_USBC_UOG1_ENDPTCTRL2 - Endpoint Control 2
 * - HW_USBC_UOG1_ENDPTCTRL3 - Endpoint Control 3
 * - HW_USBC_UOG1_ENDPTCTRL4 - Endpoint Control 4
 * - HW_USBC_UOG1_ENDPTCTRL5 - Endpoint Control 5
 * - HW_USBC_UOG1_ENDPTCTRL6 - Endpoint Control 6
 * - HW_USBC_UOG1_ENDPTCTRL7 - Endpoint Control 7
 * - HW_USBC_UOG2_ID - Identification register
 * - HW_USBC_UOG2_HWGENERAL - Hardware General
 * - HW_USBC_UOG2_HWHOST - Host Hardware Parameters
 * - HW_USBC_UOG2_HWDEVICE - Device Hardware Parameters
 * - HW_USBC_UOG2_HWTXBUF - TX Buffer Hardware Parameters
 * - HW_USBC_UOG2_HWRXBUF - RX Buffer Hardware Parameters
 * - HW_USBC_UOG2_GPTIMER0LD - General Purpose Timer #0 Load
 * - HW_USBC_UOG2_GPTIMER0CTRL - General Purpose Timer #0 Controller
 * - HW_USBC_UOG2_GPTIMER1LD - General Purpose Timer #1 Load
 * - HW_USBC_UOG2_GPTIMER1CTRL - General Purpose Timer #1 Controller
 * - HW_USBC_UOG2_SBUSCFG - System Bus Config
 * - HW_USBC_UOG2_CAPLENGTH - Capability Registers Length
 * - HW_USBC_UOG2_HCIVERSION - Host Controller Interface Version
 * - HW_USBC_UOG2_HCSPARAMS - Host Controller Structural Parameters
 * - HW_USBC_UOG2_HCCPARAMS - Host Controller Capability Parameters
 * - HW_USBC_UOG2_DCIVERSION - Device Controller Interface Version
 * - HW_USBC_UOG2_DCCPARAMS - Device Controller Capability Parameters
 * - HW_USBC_UOG2_USBCMD - USB Command Register
 * - HW_USBC_UOG2_USBSTS - USB Status Register
 * - HW_USBC_UOG2_USBINTR - Interrupt Enable Register
 * - HW_USBC_UOG2_FRINDEX - USB Frame Index
 * - HW_USBC_UOG2_PERIODICLISTBASE - Frame List Base Address
 * - HW_USBC_UOG2_ASYNCLISTADDR - Next Asynch. Address
 * - HW_USBC_UOG2_BURSTSIZE - Programmable Burst Size
 * - HW_USBC_UOG2_TXFILLTUNING - TX FIFO Fill Tuning
 * - HW_USBC_UOG2_ENDPTNAK - Endpoint NAK
 * - HW_USBC_UOG2_ENDPTNAKEN - Endpoint NAK Enable
 * - HW_USBC_UOG2_CONFIGFLAG - Configure Flag Register
 * - HW_USBC_UOG2_PORTSC1 - Port Status & Control
 * - HW_USBC_UOG2_OTGSC - On-The-Go Status & control
 * - HW_USBC_UOG2_USBMODE - USB Device Mode
 * - HW_USBC_UOG2_ENDPTSETUPSTAT - Endpoint Setup Status
 * - HW_USBC_UOG2_ENDPTPRIME - Endpoint Prime
 * - HW_USBC_UOG2_ENDPTFLUSH - Endpoint Flush
 * - HW_USBC_UOG2_ENDPTSTAT - Endpoint Status
 * - HW_USBC_UOG2_ENDPTCOMPLETE - Endpoint Complete
 * - HW_USBC_UOG2_ENDPTCTRL0 - Endpoint Control0
 * - HW_USBC_UOG2_ENDPTCTRL1 - Endpoint Control 1
 * - HW_USBC_UOG2_ENDPTCTRL2 - Endpoint Control 2
 * - HW_USBC_UOG2_ENDPTCTRL3 - Endpoint Control 3
 * - HW_USBC_UOG2_ENDPTCTRL4 - Endpoint Control 4
 * - HW_USBC_UOG2_ENDPTCTRL5 - Endpoint Control 5
 * - HW_USBC_UOG2_ENDPTCTRL6 - Endpoint Control 6
 * - HW_USBC_UOG2_ENDPTCTRL7 - Endpoint Control 7
 * - HW_USBC_UH1_ID - Identification register
 * - HW_USBC_UH1_HWGENERAL - Hardware General
 * - HW_USBC_UH1_HWHOST - Host Hardware Parameters
 * - HW_USBC_UH1_HWTXBUF - TX Buffer Hardware Parameters
 * - HW_USBC_UH1_HWRXBUF - RX Buffer Hardware Parameters
 * - HW_USBC_UH1_GPTIMER0LD - General Purpose Timer #0 Load
 * - HW_USBC_UH1_GPTIMER0CTRL - General Purpose Timer #0 Controller
 * - HW_USBC_UH1_GPTIMER1LD - General Purpose Timer #1 Load
 * - HW_USBC_UH1_GPTIMER1CTRL - General Purpose Timer #1 Controller
 * - HW_USBC_UH1_SBUSCFG - System Bus Config
 * - HW_USBC_UH1_CAPLENGTH - Capability Registers Length
 * - HW_USBC_UH1_HCIVERSION - Host Controller Interface Version
 * - HW_USBC_UH1_HCSPARAMS - Host Controller Structural Parameters
 * - HW_USBC_UH1_HCCPARAMS - Host Controller Capability Parameters
 * - HW_USBC_UH1_USBCMD - USB Command Register
 * - HW_USBC_UH1_USBSTS - USB Status Register
 * - HW_USBC_UH1_USBINTR - Interrupt Enable Register
 * - HW_USBC_UH1_FRINDEX - USB Frame Index
 * - HW_USBC_UH1_PERIODICLISTBASE - Frame List Base Address
 * - HW_USBC_UH1_ASYNCLISTADDR - Next Asynch. Address
 * - HW_USBC_UH1_BURSTSIZE - Programmable Burst Size
 * - HW_USBC_UH1_TXFILLTUNING - TX FIFO Fill Tuning
 * - HW_USBC_UH1_CONFIGFLAG - Configure Flag Register
 * - HW_USBC_UH1_PORTSC1 - Port Status & Control
 * - HW_USBC_UH1_USBMODE - USB Device Mode
 *
 * - hw_usbc_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_USBC_BASE
#define HW_USBC_INSTANCE_COUNT (1) //!< Number of instances of the USBC module.
#define REGS_USBC_BASE (0x02184000) //!< Base address for USBC.
#endif
//@}


//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ID - Identification register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ID - Identification register (RO)
 *
 * Reset value: 0xe401fa05
 *
 * The ID register identifies the USB 2.0 High-Speed core and its revision.
 */
typedef union _hw_usbc_uog1_id
{
    reg32_t U;
    struct _hw_usbc_uog1_id_bitfields
    {
        unsigned ID : 6; //!< [5:0] Configuration number.
        unsigned RESERVED0 : 2; //!< [7:6] Reserved
        unsigned NID : 6; //!< [13:8] Complement version of ID
        unsigned RESERVED1 : 2; //!< [15:14] Reserved
        unsigned REVISION : 8; //!< [23:16] Revision number of the controller core.
        unsigned RESERVED2 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_id_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ID register
 */
#define HW_USBC_UOG1_ID_ADDR      (REGS_USBC_BASE + 0x0)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ID           (*(volatile hw_usbc_uog1_id_t *) HW_USBC_UOG1_ID_ADDR)
#define HW_USBC_UOG1_ID_RD()      (HW_USBC_UOG1_ID.U)
#endif

/*
 * constants & macros for individual USBC_UOG1_ID bitfields
 */

/* --- Register HW_USBC_UOG1_ID, field ID[5:0] (RO)
 *
 * Configuration number. This number is set to 0x05 and indicates that the peripheral is USB 2.0
 * High-Speed core.
 */

#define BP_USBC_UOG1_ID_ID      (0)      //!< Bit position for USBC_UOG1_ID_ID.
#define BM_USBC_UOG1_ID_ID      (0x0000003f)  //!< Bit mask for USBC_UOG1_ID_ID.

//! @brief Get value of USBC_UOG1_ID_ID from a register value.
#define BG_USBC_UOG1_ID_ID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ID_ID) >> BP_USBC_UOG1_ID_ID)

/* --- Register HW_USBC_UOG1_ID, field NID[13:8] (RO)
 *
 * Complement version of ID
 */

#define BP_USBC_UOG1_ID_NID      (8)      //!< Bit position for USBC_UOG1_ID_NID.
#define BM_USBC_UOG1_ID_NID      (0x00003f00)  //!< Bit mask for USBC_UOG1_ID_NID.

//! @brief Get value of USBC_UOG1_ID_NID from a register value.
#define BG_USBC_UOG1_ID_NID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ID_NID) >> BP_USBC_UOG1_ID_NID)

/* --- Register HW_USBC_UOG1_ID, field REVISION[23:16] (RO)
 *
 * Revision number of the controller core.
 */

#define BP_USBC_UOG1_ID_REVISION      (16)      //!< Bit position for USBC_UOG1_ID_REVISION.
#define BM_USBC_UOG1_ID_REVISION      (0x00ff0000)  //!< Bit mask for USBC_UOG1_ID_REVISION.

//! @brief Get value of USBC_UOG1_ID_REVISION from a register value.
#define BG_USBC_UOG1_ID_REVISION(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ID_REVISION) >> BP_USBC_UOG1_ID_REVISION)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_HWGENERAL - Hardware General
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_HWGENERAL - Hardware General (RO)
 *
 * Reset value: 0x00000015
 *
 * General hardware parameters as defined in System Level Issues and Core Configuration.  The reset
 * value could vary from instance to instance. Please see the detail in bit field description and
 * ignore reset value in summary table in this case!
 */
typedef union _hw_usbc_uog1_hwgeneral
{
    reg32_t U;
    struct _hw_usbc_uog1_hwgeneral_bitfields
    {
        unsigned RESERVED0 : 4; //!< [3:0] Reserved
        unsigned PHYW : 2; //!< [5:4] Data width of the transciever connected to the controller core.
        unsigned PHYM : 3; //!< [8:6] Transciever type PHYM bit reset value: '0000b' for OTG controller core, '0100b' for Host-only controller core.
        unsigned SM : 2; //!< [10:9] Serial interface mode capability SM bit reset value is '00b'
        unsigned RESERVED1 : 21; //!< [31:11] Reserved
    } B;
} hw_usbc_uog1_hwgeneral_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_HWGENERAL register
 */
#define HW_USBC_UOG1_HWGENERAL_ADDR      (REGS_USBC_BASE + 0x4)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_HWGENERAL           (*(volatile hw_usbc_uog1_hwgeneral_t *) HW_USBC_UOG1_HWGENERAL_ADDR)
#define HW_USBC_UOG1_HWGENERAL_RD()      (HW_USBC_UOG1_HWGENERAL.U)
#endif

/*
 * constants & macros for individual USBC_UOG1_HWGENERAL bitfields
 */

/* --- Register HW_USBC_UOG1_HWGENERAL, field PHYW[5:4] (RO)
 *
 * Data width of the transciever connected to the controller core. PHYW bit reset value is '01b'.
 *
 * Values:
 * 00 -  8 bit wide data bus  Software non-programmable
 * 01 -  16 bit wide data bus  Software non-programmable
 * 10 -  Reset to 8 bit wide data bus  Software programmable
 * 11 -  Reset to 16 bit wide data bus  Software programmable
 */

#define BP_USBC_UOG1_HWGENERAL_PHYW      (4)      //!< Bit position for USBC_UOG1_HWGENERAL_PHYW.
#define BM_USBC_UOG1_HWGENERAL_PHYW      (0x00000030)  //!< Bit mask for USBC_UOG1_HWGENERAL_PHYW.

//! @brief Get value of USBC_UOG1_HWGENERAL_PHYW from a register value.
#define BG_USBC_UOG1_HWGENERAL_PHYW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HWGENERAL_PHYW) >> BP_USBC_UOG1_HWGENERAL_PHYW)


/* --- Register HW_USBC_UOG1_HWGENERAL, field PHYM[8:6] (RO)
 *
 * Transciever type PHYM bit reset value: '0000b' for OTG controller core, '0100b' for Host-only
 * controller core.
 *
 * Values:
 * 000 - UTMI/UMTI+
 * 001 - ULPI DDR
 * 010 - ULPI
 * 011 - Serial Only
 * 100 - Software programmable - reset to UTMI/UTMI+
 * 101 - Software programmable - reset to ULPI DDR
 * 110 - Software programmable - reset to ULPI
 * 111 - Software programmable - reset to Serial
 * 1000 - IC-USB
 * 1001 - Software programmable - reset to IC-USB
 * 1010 - HSIC
 * 1011 - Software programmable - reset to HSIC
 */

#define BP_USBC_UOG1_HWGENERAL_PHYM      (6)      //!< Bit position for USBC_UOG1_HWGENERAL_PHYM.
#define BM_USBC_UOG1_HWGENERAL_PHYM      (0x000001c0)  //!< Bit mask for USBC_UOG1_HWGENERAL_PHYM.

//! @brief Get value of USBC_UOG1_HWGENERAL_PHYM from a register value.
#define BG_USBC_UOG1_HWGENERAL_PHYM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HWGENERAL_PHYM) >> BP_USBC_UOG1_HWGENERAL_PHYM)


/* --- Register HW_USBC_UOG1_HWGENERAL, field SM[10:9] (RO)
 *
 * Serial interface mode capability SM bit reset value is '00b'
 *
 * Values:
 * 00 - No Serial Engine, always use parallel signalling.
 * 01 - Serial Engine present, always use serial signalling for FS/LS.
 * 10 - Software programmable - Reset to use parallel signalling for FS/LS
 * 11 - Software programmable - Reset to use serial signalling for FS/LS
 */

#define BP_USBC_UOG1_HWGENERAL_SM      (9)      //!< Bit position for USBC_UOG1_HWGENERAL_SM.
#define BM_USBC_UOG1_HWGENERAL_SM      (0x00000600)  //!< Bit mask for USBC_UOG1_HWGENERAL_SM.

//! @brief Get value of USBC_UOG1_HWGENERAL_SM from a register value.
#define BG_USBC_UOG1_HWGENERAL_SM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HWGENERAL_SM) >> BP_USBC_UOG1_HWGENERAL_SM)


//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_HWHOST - Host Hardware Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_HWHOST - Host Hardware Parameters (RO)
 *
 * Reset value: 0x10020001
 *

 */
typedef union _hw_usbc_uog1_hwhost
{
    reg32_t U;
    struct _hw_usbc_uog1_hwhost_bitfields
    {
        unsigned HC : 1; //!< [0] Host Capable.
        unsigned NPORT : 3; //!< [3:1] The Nmber of downstream ports supported by the host controller is (NPORT+1).
        unsigned RESERVED0 : 28; //!< [31:4] Reserved
    } B;
} hw_usbc_uog1_hwhost_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_HWHOST register
 */
#define HW_USBC_UOG1_HWHOST_ADDR      (REGS_USBC_BASE + 0x8)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_HWHOST           (*(volatile hw_usbc_uog1_hwhost_t *) HW_USBC_UOG1_HWHOST_ADDR)
#define HW_USBC_UOG1_HWHOST_RD()      (HW_USBC_UOG1_HWHOST.U)
#endif

/*
 * constants & macros for individual USBC_UOG1_HWHOST bitfields
 */

/* --- Register HW_USBC_UOG1_HWHOST, field HC[0] (RO)
 *
 * Host Capable. Indicating whether host operation mode is supported or not.
 *
 * Values:
 * 0 - Not supported
 * 1 - Supported
 */

#define BP_USBC_UOG1_HWHOST_HC      (0)      //!< Bit position for USBC_UOG1_HWHOST_HC.
#define BM_USBC_UOG1_HWHOST_HC      (0x00000001)  //!< Bit mask for USBC_UOG1_HWHOST_HC.

//! @brief Get value of USBC_UOG1_HWHOST_HC from a register value.
#define BG_USBC_UOG1_HWHOST_HC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HWHOST_HC) >> BP_USBC_UOG1_HWHOST_HC)


/* --- Register HW_USBC_UOG1_HWHOST, field NPORT[3:1] (RO)
 *
 * The Nmber of downstream ports supported by the host controller is (NPORT+1). When these bits
 * value is '000', it indicates a single-port host controller.
 */

#define BP_USBC_UOG1_HWHOST_NPORT      (1)      //!< Bit position for USBC_UOG1_HWHOST_NPORT.
#define BM_USBC_UOG1_HWHOST_NPORT      (0x0000000e)  //!< Bit mask for USBC_UOG1_HWHOST_NPORT.

//! @brief Get value of USBC_UOG1_HWHOST_NPORT from a register value.
#define BG_USBC_UOG1_HWHOST_NPORT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HWHOST_NPORT) >> BP_USBC_UOG1_HWHOST_NPORT)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_HWDEVICE - Device Hardware Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_HWDEVICE - Device Hardware Parameters (RO)
 *
 * Reset value: 0x00000011
 *
 * This register is only available in OTG core.
 */
typedef union _hw_usbc_uog1_hwdevice
{
    reg32_t U;
    struct _hw_usbc_uog1_hwdevice_bitfields
    {
        unsigned DC : 1; //!< [0] Device Capable.
        unsigned DEVEP : 5; //!< [5:1] Device Endpoint Number
        unsigned RESERVED0 : 26; //!< [31:6] Reserved
    } B;
} hw_usbc_uog1_hwdevice_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_HWDEVICE register
 */
#define HW_USBC_UOG1_HWDEVICE_ADDR      (REGS_USBC_BASE + 0xc)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_HWDEVICE           (*(volatile hw_usbc_uog1_hwdevice_t *) HW_USBC_UOG1_HWDEVICE_ADDR)
#define HW_USBC_UOG1_HWDEVICE_RD()      (HW_USBC_UOG1_HWDEVICE.U)
#endif

/*
 * constants & macros for individual USBC_UOG1_HWDEVICE bitfields
 */

/* --- Register HW_USBC_UOG1_HWDEVICE, field DC[0] (RO)
 *
 * Device Capable. Indicating whether device operation mode is supported or not.
 *
 * Values:
 * 0 - Not supported
 * 1 - Supported
 */

#define BP_USBC_UOG1_HWDEVICE_DC      (0)      //!< Bit position for USBC_UOG1_HWDEVICE_DC.
#define BM_USBC_UOG1_HWDEVICE_DC      (0x00000001)  //!< Bit mask for USBC_UOG1_HWDEVICE_DC.

//! @brief Get value of USBC_UOG1_HWDEVICE_DC from a register value.
#define BG_USBC_UOG1_HWDEVICE_DC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HWDEVICE_DC) >> BP_USBC_UOG1_HWDEVICE_DC)


/* --- Register HW_USBC_UOG1_HWDEVICE, field DEVEP[5:1] (RO)
 *
 * Device Endpoint Number
 */

#define BP_USBC_UOG1_HWDEVICE_DEVEP      (1)      //!< Bit position for USBC_UOG1_HWDEVICE_DEVEP.
#define BM_USBC_UOG1_HWDEVICE_DEVEP      (0x0000003e)  //!< Bit mask for USBC_UOG1_HWDEVICE_DEVEP.

//! @brief Get value of USBC_UOG1_HWDEVICE_DEVEP from a register value.
#define BG_USBC_UOG1_HWDEVICE_DEVEP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HWDEVICE_DEVEP) >> BP_USBC_UOG1_HWDEVICE_DEVEP)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_HWTXBUF - TX Buffer Hardware Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_HWTXBUF - TX Buffer Hardware Parameters (RO)
 *
 * Reset value: 0x80080b08
 *

 */
typedef union _hw_usbc_uog1_hwtxbuf
{
    reg32_t U;
    struct _hw_usbc_uog1_hwtxbuf_bitfields
    {
        unsigned TXBURST : 8; //!< [7:0] Default burst size for memory to TX buffer transfer.
        unsigned RESERVED0 : 8; //!< [15:8] Reserved
        unsigned TXCHANADD : 8; //!< [23:16] TX FIFO Buffer size is: (2^TXCHANADD) * 4 Bytes.
        unsigned RESERVED1 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_hwtxbuf_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_HWTXBUF register
 */
#define HW_USBC_UOG1_HWTXBUF_ADDR      (REGS_USBC_BASE + 0x10)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_HWTXBUF           (*(volatile hw_usbc_uog1_hwtxbuf_t *) HW_USBC_UOG1_HWTXBUF_ADDR)
#define HW_USBC_UOG1_HWTXBUF_RD()      (HW_USBC_UOG1_HWTXBUF.U)
#endif

/*
 * constants & macros for individual USBC_UOG1_HWTXBUF bitfields
 */

/* --- Register HW_USBC_UOG1_HWTXBUF, field TXBURST[7:0] (RO)
 *
 * Default burst size for memory to TX buffer transfer. This is reset value of TXPBURST bits in USB
 * core regsiter USB_n_BURSTSIZE. Please see .
 */

#define BP_USBC_UOG1_HWTXBUF_TXBURST      (0)      //!< Bit position for USBC_UOG1_HWTXBUF_TXBURST.
#define BM_USBC_UOG1_HWTXBUF_TXBURST      (0x000000ff)  //!< Bit mask for USBC_UOG1_HWTXBUF_TXBURST.

//! @brief Get value of USBC_UOG1_HWTXBUF_TXBURST from a register value.
#define BG_USBC_UOG1_HWTXBUF_TXBURST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HWTXBUF_TXBURST) >> BP_USBC_UOG1_HWTXBUF_TXBURST)

/* --- Register HW_USBC_UOG1_HWTXBUF, field TXCHANADD[23:16] (RO)
 *
 * TX FIFO Buffer size is: (2^TXCHANADD) * 4 Bytes. These bits are set to '08h', so buffer size is
 * 256*4 Bytes. For the OTG controller operating in device mode, this is the FIFO buffer size per
 * endpoint. As the OTG controller has 8 TX endpoint, there are 8 of these buffers. For the OTG
 * controller operating in host mode, or for Host-only controller, the entire buffer memory is used
 * as a single TX buffer. Therefore, there is only 1 of this buffer
 */

#define BP_USBC_UOG1_HWTXBUF_TXCHANADD      (16)      //!< Bit position for USBC_UOG1_HWTXBUF_TXCHANADD.
#define BM_USBC_UOG1_HWTXBUF_TXCHANADD      (0x00ff0000)  //!< Bit mask for USBC_UOG1_HWTXBUF_TXCHANADD.

//! @brief Get value of USBC_UOG1_HWTXBUF_TXCHANADD from a register value.
#define BG_USBC_UOG1_HWTXBUF_TXCHANADD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HWTXBUF_TXCHANADD) >> BP_USBC_UOG1_HWTXBUF_TXCHANADD)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_HWRXBUF - RX Buffer Hardware Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_HWRXBUF - RX Buffer Hardware Parameters (RO)
 *
 * Reset value: 0x00000808
 *

 */
typedef union _hw_usbc_uog1_hwrxbuf
{
    reg32_t U;
    struct _hw_usbc_uog1_hwrxbuf_bitfields
    {
        unsigned RXBURST : 8; //!< [7:0] Default burst size for memory to RX buffer transfer.
        unsigned RXADD : 8; //!< [15:8] Buffer total size for all receive endpoints is (2^RXADD).
        unsigned RESERVED0 : 16; //!< [31:16] Reserved
    } B;
} hw_usbc_uog1_hwrxbuf_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_HWRXBUF register
 */
#define HW_USBC_UOG1_HWRXBUF_ADDR      (REGS_USBC_BASE + 0x14)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_HWRXBUF           (*(volatile hw_usbc_uog1_hwrxbuf_t *) HW_USBC_UOG1_HWRXBUF_ADDR)
#define HW_USBC_UOG1_HWRXBUF_RD()      (HW_USBC_UOG1_HWRXBUF.U)
#endif

/*
 * constants & macros for individual USBC_UOG1_HWRXBUF bitfields
 */

/* --- Register HW_USBC_UOG1_HWRXBUF, field RXBURST[7:0] (RO)
 *
 * Default burst size for memory to RX buffer transfer. This is reset value of RXPBURST bits in USB
 * core regsiter USB_n_BURSTSIZE. Please see .
 */

#define BP_USBC_UOG1_HWRXBUF_RXBURST      (0)      //!< Bit position for USBC_UOG1_HWRXBUF_RXBURST.
#define BM_USBC_UOG1_HWRXBUF_RXBURST      (0x000000ff)  //!< Bit mask for USBC_UOG1_HWRXBUF_RXBURST.

//! @brief Get value of USBC_UOG1_HWRXBUF_RXBURST from a register value.
#define BG_USBC_UOG1_HWRXBUF_RXBURST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HWRXBUF_RXBURST) >> BP_USBC_UOG1_HWRXBUF_RXBURST)

/* --- Register HW_USBC_UOG1_HWRXBUF, field RXADD[15:8] (RO)
 *
 * Buffer total size for all receive endpoints is (2^RXADD). RX Buffer size is: (2^RXADD) * 4 Bytes.
 * These bits are set to '08h', so buffer size is 256*4 Bytes. There is a single Receive FIFO buffer
 * in the USB controller. The buffer is shared for all endpoints for the OTG controller in device
 * mode.
 */

#define BP_USBC_UOG1_HWRXBUF_RXADD      (8)      //!< Bit position for USBC_UOG1_HWRXBUF_RXADD.
#define BM_USBC_UOG1_HWRXBUF_RXADD      (0x0000ff00)  //!< Bit mask for USBC_UOG1_HWRXBUF_RXADD.

//! @brief Get value of USBC_UOG1_HWRXBUF_RXADD from a register value.
#define BG_USBC_UOG1_HWRXBUF_RXADD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HWRXBUF_RXADD) >> BP_USBC_UOG1_HWRXBUF_RXADD)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_GPTIMER0LD - General Purpose Timer #0 Load
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_GPTIMER0LD - General Purpose Timer #0 Load (RW)
 *
 * Reset value: 0x00000000
 *
 * This register controls load value of the count timer in register n_GPTIMER0CTRL. Please see .
 */
typedef union _hw_usbc_uog1_gptimer0ld
{
    reg32_t U;
    struct _hw_usbc_uog1_gptimer0ld_bitfields
    {
        unsigned GPTLD : 24; //!< [23:0] General Purpose Timer Load Value These bit fields are loaded to GPTCNT bits when GPTRST bit is set '1b'.
        unsigned RESERVED0 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_gptimer0ld_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_GPTIMER0LD register
 */
#define HW_USBC_UOG1_GPTIMER0LD_ADDR      (REGS_USBC_BASE + 0x80)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_GPTIMER0LD           (*(volatile hw_usbc_uog1_gptimer0ld_t *) HW_USBC_UOG1_GPTIMER0LD_ADDR)
#define HW_USBC_UOG1_GPTIMER0LD_RD()      (HW_USBC_UOG1_GPTIMER0LD.U)
#define HW_USBC_UOG1_GPTIMER0LD_WR(v)     (HW_USBC_UOG1_GPTIMER0LD.U = (v))
#define HW_USBC_UOG1_GPTIMER0LD_SET(v)    (HW_USBC_UOG1_GPTIMER0LD_WR(HW_USBC_UOG1_GPTIMER0LD_RD() |  (v)))
#define HW_USBC_UOG1_GPTIMER0LD_CLR(v)    (HW_USBC_UOG1_GPTIMER0LD_WR(HW_USBC_UOG1_GPTIMER0LD_RD() & ~(v)))
#define HW_USBC_UOG1_GPTIMER0LD_TOG(v)    (HW_USBC_UOG1_GPTIMER0LD_WR(HW_USBC_UOG1_GPTIMER0LD_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_GPTIMER0LD bitfields
 */

/* --- Register HW_USBC_UOG1_GPTIMER0LD, field GPTLD[23:0] (RW)
 *
 * General Purpose Timer Load Value These bit fields are loaded to GPTCNT bits when GPTRST bit is
 * set '1b'. This value represents the time in microseconds minus 1 for the timer duration. Example:
 * for a one millisecond timer, load 1000-1=999 or 0x0003E7. Max value is 0xFFFFFF or 16.777215
 * seconds.
 */

#define BP_USBC_UOG1_GPTIMER0LD_GPTLD      (0)      //!< Bit position for USBC_UOG1_GPTIMER0LD_GPTLD.
#define BM_USBC_UOG1_GPTIMER0LD_GPTLD      (0x00ffffff)  //!< Bit mask for USBC_UOG1_GPTIMER0LD_GPTLD.

//! @brief Get value of USBC_UOG1_GPTIMER0LD_GPTLD from a register value.
#define BG_USBC_UOG1_GPTIMER0LD_GPTLD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_GPTIMER0LD_GPTLD) >> BP_USBC_UOG1_GPTIMER0LD_GPTLD)

//! @brief Format value for bitfield USBC_UOG1_GPTIMER0LD_GPTLD.
#define BF_USBC_UOG1_GPTIMER0LD_GPTLD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_GPTIMER0LD_GPTLD) & BM_USBC_UOG1_GPTIMER0LD_GPTLD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTLD field to a new value.
#define BW_USBC_UOG1_GPTIMER0LD_GPTLD(v)   (HW_USBC_UOG1_GPTIMER0LD_WR((HW_USBC_UOG1_GPTIMER0LD_RD() & ~BM_USBC_UOG1_GPTIMER0LD_GPTLD) | BF_USBC_UOG1_GPTIMER0LD_GPTLD(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_GPTIMER0CTRL - General Purpose Timer #0 Controller
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_GPTIMER0CTRL - General Purpose Timer #0 Controller (RW)
 *
 * Reset value: 0x00000000
 *
 * This register contains the control for this countdown timer and a data field can be queried to
 * determine the running count value. This timer has granularity on 1 us and can be programmed to a
 * little over 16 seconds. There are two counter modes which are described in the register table
 * below. When the timer counter value transitions to zero, an interrupt could be generated if
 * enable.  Interrupt status bit is TI0 bit in n_USBSTS register (See ), interrupt enable bit is
 * TIE0 bit in n_USBINTR register. (See .)
 */
typedef union _hw_usbc_uog1_gptimer0ctrl
{
    reg32_t U;
    struct _hw_usbc_uog1_gptimer0ctrl_bitfields
    {
        unsigned GPTCNT : 24; //!< [23:0] General Purpose Timer Counter.
        unsigned GPTMODE : 1; //!< [24] General Purpose Timer Mode In one shot mode, the timer will count down to zero, generate an interrupt, and stop until the counter is reset by software; In repeat mode, the timer will count down to zero, generate an interrupt and automatically reload the counter value from GPTLD bits to start again.
        unsigned RESERVED0 : 5; //!< [29:25] Reserved
        unsigned GPTRST : 1; //!< [30] General Purpose Timer Reset
        unsigned GPTRUN : 1; //!< [31] General Purpose Timer Run GPTCNT bits are not effected when setting or clearing this bit.
    } B;
} hw_usbc_uog1_gptimer0ctrl_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_GPTIMER0CTRL register
 */
#define HW_USBC_UOG1_GPTIMER0CTRL_ADDR      (REGS_USBC_BASE + 0x84)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_GPTIMER0CTRL           (*(volatile hw_usbc_uog1_gptimer0ctrl_t *) HW_USBC_UOG1_GPTIMER0CTRL_ADDR)
#define HW_USBC_UOG1_GPTIMER0CTRL_RD()      (HW_USBC_UOG1_GPTIMER0CTRL.U)
#define HW_USBC_UOG1_GPTIMER0CTRL_WR(v)     (HW_USBC_UOG1_GPTIMER0CTRL.U = (v))
#define HW_USBC_UOG1_GPTIMER0CTRL_SET(v)    (HW_USBC_UOG1_GPTIMER0CTRL_WR(HW_USBC_UOG1_GPTIMER0CTRL_RD() |  (v)))
#define HW_USBC_UOG1_GPTIMER0CTRL_CLR(v)    (HW_USBC_UOG1_GPTIMER0CTRL_WR(HW_USBC_UOG1_GPTIMER0CTRL_RD() & ~(v)))
#define HW_USBC_UOG1_GPTIMER0CTRL_TOG(v)    (HW_USBC_UOG1_GPTIMER0CTRL_WR(HW_USBC_UOG1_GPTIMER0CTRL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_GPTIMER0CTRL bitfields
 */

/* --- Register HW_USBC_UOG1_GPTIMER0CTRL, field GPTCNT[23:0] (RW)
 *
 * General Purpose Timer Counter. This field is the count value of the countdown timer.
 */

#define BP_USBC_UOG1_GPTIMER0CTRL_GPTCNT      (0)      //!< Bit position for USBC_UOG1_GPTIMER0CTRL_GPTCNT.
#define BM_USBC_UOG1_GPTIMER0CTRL_GPTCNT      (0x00ffffff)  //!< Bit mask for USBC_UOG1_GPTIMER0CTRL_GPTCNT.

//! @brief Get value of USBC_UOG1_GPTIMER0CTRL_GPTCNT from a register value.
#define BG_USBC_UOG1_GPTIMER0CTRL_GPTCNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_GPTIMER0CTRL_GPTCNT) >> BP_USBC_UOG1_GPTIMER0CTRL_GPTCNT)

//! @brief Format value for bitfield USBC_UOG1_GPTIMER0CTRL_GPTCNT.
#define BF_USBC_UOG1_GPTIMER0CTRL_GPTCNT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_GPTIMER0CTRL_GPTCNT) & BM_USBC_UOG1_GPTIMER0CTRL_GPTCNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTCNT field to a new value.
#define BW_USBC_UOG1_GPTIMER0CTRL_GPTCNT(v)   (HW_USBC_UOG1_GPTIMER0CTRL_WR((HW_USBC_UOG1_GPTIMER0CTRL_RD() & ~BM_USBC_UOG1_GPTIMER0CTRL_GPTCNT) | BF_USBC_UOG1_GPTIMER0CTRL_GPTCNT(v)))
#endif

/* --- Register HW_USBC_UOG1_GPTIMER0CTRL, field GPTMODE[24] (RW)
 *
 * General Purpose Timer Mode In one shot mode, the timer will count down to zero, generate an
 * interrupt, and stop until the counter is reset by software; In repeat mode, the timer will count
 * down to zero, generate an interrupt and automatically reload the counter value from GPTLD bits to
 * start again.
 *
 * Values:
 * 0 - One Shot Mode
 * 1 - Repeat Mode
 */

#define BP_USBC_UOG1_GPTIMER0CTRL_GPTMODE      (24)      //!< Bit position for USBC_UOG1_GPTIMER0CTRL_GPTMODE.
#define BM_USBC_UOG1_GPTIMER0CTRL_GPTMODE      (0x01000000)  //!< Bit mask for USBC_UOG1_GPTIMER0CTRL_GPTMODE.

//! @brief Get value of USBC_UOG1_GPTIMER0CTRL_GPTMODE from a register value.
#define BG_USBC_UOG1_GPTIMER0CTRL_GPTMODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_GPTIMER0CTRL_GPTMODE) >> BP_USBC_UOG1_GPTIMER0CTRL_GPTMODE)

//! @brief Format value for bitfield USBC_UOG1_GPTIMER0CTRL_GPTMODE.
#define BF_USBC_UOG1_GPTIMER0CTRL_GPTMODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_GPTIMER0CTRL_GPTMODE) & BM_USBC_UOG1_GPTIMER0CTRL_GPTMODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTMODE field to a new value.
#define BW_USBC_UOG1_GPTIMER0CTRL_GPTMODE(v)   (HW_USBC_UOG1_GPTIMER0CTRL_WR((HW_USBC_UOG1_GPTIMER0CTRL_RD() & ~BM_USBC_UOG1_GPTIMER0CTRL_GPTMODE) | BF_USBC_UOG1_GPTIMER0CTRL_GPTMODE(v)))
#endif


/* --- Register HW_USBC_UOG1_GPTIMER0CTRL, field GPTRST[30] (RW)
 *
 * General Purpose Timer Reset
 *
 * Values:
 * 0 - No action
 * 1 - Load counter value from GPTLD bits in n_GPTIMER0LD
 */

#define BP_USBC_UOG1_GPTIMER0CTRL_GPTRST      (30)      //!< Bit position for USBC_UOG1_GPTIMER0CTRL_GPTRST.
#define BM_USBC_UOG1_GPTIMER0CTRL_GPTRST      (0x40000000)  //!< Bit mask for USBC_UOG1_GPTIMER0CTRL_GPTRST.

//! @brief Get value of USBC_UOG1_GPTIMER0CTRL_GPTRST from a register value.
#define BG_USBC_UOG1_GPTIMER0CTRL_GPTRST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_GPTIMER0CTRL_GPTRST) >> BP_USBC_UOG1_GPTIMER0CTRL_GPTRST)

//! @brief Format value for bitfield USBC_UOG1_GPTIMER0CTRL_GPTRST.
#define BF_USBC_UOG1_GPTIMER0CTRL_GPTRST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_GPTIMER0CTRL_GPTRST) & BM_USBC_UOG1_GPTIMER0CTRL_GPTRST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTRST field to a new value.
#define BW_USBC_UOG1_GPTIMER0CTRL_GPTRST(v)   (HW_USBC_UOG1_GPTIMER0CTRL_WR((HW_USBC_UOG1_GPTIMER0CTRL_RD() & ~BM_USBC_UOG1_GPTIMER0CTRL_GPTRST) | BF_USBC_UOG1_GPTIMER0CTRL_GPTRST(v)))
#endif


/* --- Register HW_USBC_UOG1_GPTIMER0CTRL, field GPTRUN[31] (RW)
 *
 * General Purpose Timer Run GPTCNT bits are not effected when setting or clearing this bit.
 *
 * Values:
 * 0 - Stop counting
 * 1 - Run
 */

#define BP_USBC_UOG1_GPTIMER0CTRL_GPTRUN      (31)      //!< Bit position for USBC_UOG1_GPTIMER0CTRL_GPTRUN.
#define BM_USBC_UOG1_GPTIMER0CTRL_GPTRUN      (0x80000000)  //!< Bit mask for USBC_UOG1_GPTIMER0CTRL_GPTRUN.

//! @brief Get value of USBC_UOG1_GPTIMER0CTRL_GPTRUN from a register value.
#define BG_USBC_UOG1_GPTIMER0CTRL_GPTRUN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_GPTIMER0CTRL_GPTRUN) >> BP_USBC_UOG1_GPTIMER0CTRL_GPTRUN)

//! @brief Format value for bitfield USBC_UOG1_GPTIMER0CTRL_GPTRUN.
#define BF_USBC_UOG1_GPTIMER0CTRL_GPTRUN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_GPTIMER0CTRL_GPTRUN) & BM_USBC_UOG1_GPTIMER0CTRL_GPTRUN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTRUN field to a new value.
#define BW_USBC_UOG1_GPTIMER0CTRL_GPTRUN(v)   (HW_USBC_UOG1_GPTIMER0CTRL_WR((HW_USBC_UOG1_GPTIMER0CTRL_RD() & ~BM_USBC_UOG1_GPTIMER0CTRL_GPTRUN) | BF_USBC_UOG1_GPTIMER0CTRL_GPTRUN(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_GPTIMER1LD - General Purpose Timer #1 Load
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_GPTIMER1LD - General Purpose Timer #1 Load (RW)
 *
 * Reset value: 0x00000000
 *
 * This register controls load value of the count timer in register n_GPTIMER1CTRL. Please see .
 */
typedef union _hw_usbc_uog1_gptimer1ld
{
    reg32_t U;
    struct _hw_usbc_uog1_gptimer1ld_bitfields
    {
        unsigned GPTLD : 24; //!< [23:0] General Purpose Timer Load Value These bit fields are loaded to GPTCNT bits when GPTRST bit is set '1b'.
        unsigned RESERVED0 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_gptimer1ld_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_GPTIMER1LD register
 */
#define HW_USBC_UOG1_GPTIMER1LD_ADDR      (REGS_USBC_BASE + 0x88)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_GPTIMER1LD           (*(volatile hw_usbc_uog1_gptimer1ld_t *) HW_USBC_UOG1_GPTIMER1LD_ADDR)
#define HW_USBC_UOG1_GPTIMER1LD_RD()      (HW_USBC_UOG1_GPTIMER1LD.U)
#define HW_USBC_UOG1_GPTIMER1LD_WR(v)     (HW_USBC_UOG1_GPTIMER1LD.U = (v))
#define HW_USBC_UOG1_GPTIMER1LD_SET(v)    (HW_USBC_UOG1_GPTIMER1LD_WR(HW_USBC_UOG1_GPTIMER1LD_RD() |  (v)))
#define HW_USBC_UOG1_GPTIMER1LD_CLR(v)    (HW_USBC_UOG1_GPTIMER1LD_WR(HW_USBC_UOG1_GPTIMER1LD_RD() & ~(v)))
#define HW_USBC_UOG1_GPTIMER1LD_TOG(v)    (HW_USBC_UOG1_GPTIMER1LD_WR(HW_USBC_UOG1_GPTIMER1LD_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_GPTIMER1LD bitfields
 */

/* --- Register HW_USBC_UOG1_GPTIMER1LD, field GPTLD[23:0] (RW)
 *
 * General Purpose Timer Load Value These bit fields are loaded to GPTCNT bits when GPTRST bit is
 * set '1b'. This value represents the time in microseconds minus 1 for the timer duration. Example:
 * for a one millisecond timer, load 1000-1=999 or 0x0003E7. Max value is 0xFFFFFF or 16.777215
 * seconds.
 */

#define BP_USBC_UOG1_GPTIMER1LD_GPTLD      (0)      //!< Bit position for USBC_UOG1_GPTIMER1LD_GPTLD.
#define BM_USBC_UOG1_GPTIMER1LD_GPTLD      (0x00ffffff)  //!< Bit mask for USBC_UOG1_GPTIMER1LD_GPTLD.

//! @brief Get value of USBC_UOG1_GPTIMER1LD_GPTLD from a register value.
#define BG_USBC_UOG1_GPTIMER1LD_GPTLD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_GPTIMER1LD_GPTLD) >> BP_USBC_UOG1_GPTIMER1LD_GPTLD)

//! @brief Format value for bitfield USBC_UOG1_GPTIMER1LD_GPTLD.
#define BF_USBC_UOG1_GPTIMER1LD_GPTLD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_GPTIMER1LD_GPTLD) & BM_USBC_UOG1_GPTIMER1LD_GPTLD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTLD field to a new value.
#define BW_USBC_UOG1_GPTIMER1LD_GPTLD(v)   (HW_USBC_UOG1_GPTIMER1LD_WR((HW_USBC_UOG1_GPTIMER1LD_RD() & ~BM_USBC_UOG1_GPTIMER1LD_GPTLD) | BF_USBC_UOG1_GPTIMER1LD_GPTLD(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_GPTIMER1CTRL - General Purpose Timer #1 Controller
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_GPTIMER1CTRL - General Purpose Timer #1 Controller (RW)
 *
 * Reset value: 0x00000000
 *
 * This register contains the control for this countdown timer and a data field can be queried to
 * determine the running count value. This timer has granularity on 1 us and can be programmed to a
 * little over 16 seconds. There are two counter modes which are described in the register table
 * below. When the timer counter value transitions to zero, an interrupt could be generated if
 * enable.  Interrupt status bit is TI1 bit in USB_n_USBSTS register (See ), interrupt enable bit is
 * TIE1 bit in n_USBINTR register (See ).
 */
typedef union _hw_usbc_uog1_gptimer1ctrl
{
    reg32_t U;
    struct _hw_usbc_uog1_gptimer1ctrl_bitfields
    {
        unsigned GPTCNT : 24; //!< [23:0] General Purpose Timer Counter.
        unsigned GPTMODE : 1; //!< [24] General Purpose Timer Mode In one shot mode, the timer will count down to zero, generate an interrupt, and stop until the counter is reset by software.
        unsigned RESERVED0 : 5; //!< [29:25] Reserved
        unsigned GPTRST : 1; //!< [30] General Purpose Timer Reset
        unsigned GPTRUN : 1; //!< [31] General Purpose Timer Run GPTCNT bits are not effected when setting or clearing this bit.
    } B;
} hw_usbc_uog1_gptimer1ctrl_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_GPTIMER1CTRL register
 */
#define HW_USBC_UOG1_GPTIMER1CTRL_ADDR      (REGS_USBC_BASE + 0x8c)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_GPTIMER1CTRL           (*(volatile hw_usbc_uog1_gptimer1ctrl_t *) HW_USBC_UOG1_GPTIMER1CTRL_ADDR)
#define HW_USBC_UOG1_GPTIMER1CTRL_RD()      (HW_USBC_UOG1_GPTIMER1CTRL.U)
#define HW_USBC_UOG1_GPTIMER1CTRL_WR(v)     (HW_USBC_UOG1_GPTIMER1CTRL.U = (v))
#define HW_USBC_UOG1_GPTIMER1CTRL_SET(v)    (HW_USBC_UOG1_GPTIMER1CTRL_WR(HW_USBC_UOG1_GPTIMER1CTRL_RD() |  (v)))
#define HW_USBC_UOG1_GPTIMER1CTRL_CLR(v)    (HW_USBC_UOG1_GPTIMER1CTRL_WR(HW_USBC_UOG1_GPTIMER1CTRL_RD() & ~(v)))
#define HW_USBC_UOG1_GPTIMER1CTRL_TOG(v)    (HW_USBC_UOG1_GPTIMER1CTRL_WR(HW_USBC_UOG1_GPTIMER1CTRL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_GPTIMER1CTRL bitfields
 */

/* --- Register HW_USBC_UOG1_GPTIMER1CTRL, field GPTCNT[23:0] (RW)
 *
 * General Purpose Timer Counter. This field is the count value of the countdown timer.
 */

#define BP_USBC_UOG1_GPTIMER1CTRL_GPTCNT      (0)      //!< Bit position for USBC_UOG1_GPTIMER1CTRL_GPTCNT.
#define BM_USBC_UOG1_GPTIMER1CTRL_GPTCNT      (0x00ffffff)  //!< Bit mask for USBC_UOG1_GPTIMER1CTRL_GPTCNT.

//! @brief Get value of USBC_UOG1_GPTIMER1CTRL_GPTCNT from a register value.
#define BG_USBC_UOG1_GPTIMER1CTRL_GPTCNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_GPTIMER1CTRL_GPTCNT) >> BP_USBC_UOG1_GPTIMER1CTRL_GPTCNT)

//! @brief Format value for bitfield USBC_UOG1_GPTIMER1CTRL_GPTCNT.
#define BF_USBC_UOG1_GPTIMER1CTRL_GPTCNT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_GPTIMER1CTRL_GPTCNT) & BM_USBC_UOG1_GPTIMER1CTRL_GPTCNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTCNT field to a new value.
#define BW_USBC_UOG1_GPTIMER1CTRL_GPTCNT(v)   (HW_USBC_UOG1_GPTIMER1CTRL_WR((HW_USBC_UOG1_GPTIMER1CTRL_RD() & ~BM_USBC_UOG1_GPTIMER1CTRL_GPTCNT) | BF_USBC_UOG1_GPTIMER1CTRL_GPTCNT(v)))
#endif

/* --- Register HW_USBC_UOG1_GPTIMER1CTRL, field GPTMODE[24] (RW)
 *
 * General Purpose Timer Mode In one shot mode, the timer will count down to zero, generate an
 * interrupt, and stop until the counter is reset by software. In repeat mode, the timer will count
 * down to zero, generate an interrupt and automatically reload the counter value from GPTLD bits to
 * start again.
 *
 * Values:
 * 0 - One Shot Mode
 * 1 - Repeat Mode
 */

#define BP_USBC_UOG1_GPTIMER1CTRL_GPTMODE      (24)      //!< Bit position for USBC_UOG1_GPTIMER1CTRL_GPTMODE.
#define BM_USBC_UOG1_GPTIMER1CTRL_GPTMODE      (0x01000000)  //!< Bit mask for USBC_UOG1_GPTIMER1CTRL_GPTMODE.

//! @brief Get value of USBC_UOG1_GPTIMER1CTRL_GPTMODE from a register value.
#define BG_USBC_UOG1_GPTIMER1CTRL_GPTMODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_GPTIMER1CTRL_GPTMODE) >> BP_USBC_UOG1_GPTIMER1CTRL_GPTMODE)

//! @brief Format value for bitfield USBC_UOG1_GPTIMER1CTRL_GPTMODE.
#define BF_USBC_UOG1_GPTIMER1CTRL_GPTMODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_GPTIMER1CTRL_GPTMODE) & BM_USBC_UOG1_GPTIMER1CTRL_GPTMODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTMODE field to a new value.
#define BW_USBC_UOG1_GPTIMER1CTRL_GPTMODE(v)   (HW_USBC_UOG1_GPTIMER1CTRL_WR((HW_USBC_UOG1_GPTIMER1CTRL_RD() & ~BM_USBC_UOG1_GPTIMER1CTRL_GPTMODE) | BF_USBC_UOG1_GPTIMER1CTRL_GPTMODE(v)))
#endif


/* --- Register HW_USBC_UOG1_GPTIMER1CTRL, field GPTRST[30] (RW)
 *
 * General Purpose Timer Reset
 *
 * Values:
 * 0 - No action
 * 1 - Load counter value from GPTLD bits in USB_n_GPTIMER0LD
 */

#define BP_USBC_UOG1_GPTIMER1CTRL_GPTRST      (30)      //!< Bit position for USBC_UOG1_GPTIMER1CTRL_GPTRST.
#define BM_USBC_UOG1_GPTIMER1CTRL_GPTRST      (0x40000000)  //!< Bit mask for USBC_UOG1_GPTIMER1CTRL_GPTRST.

//! @brief Get value of USBC_UOG1_GPTIMER1CTRL_GPTRST from a register value.
#define BG_USBC_UOG1_GPTIMER1CTRL_GPTRST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_GPTIMER1CTRL_GPTRST) >> BP_USBC_UOG1_GPTIMER1CTRL_GPTRST)

//! @brief Format value for bitfield USBC_UOG1_GPTIMER1CTRL_GPTRST.
#define BF_USBC_UOG1_GPTIMER1CTRL_GPTRST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_GPTIMER1CTRL_GPTRST) & BM_USBC_UOG1_GPTIMER1CTRL_GPTRST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTRST field to a new value.
#define BW_USBC_UOG1_GPTIMER1CTRL_GPTRST(v)   (HW_USBC_UOG1_GPTIMER1CTRL_WR((HW_USBC_UOG1_GPTIMER1CTRL_RD() & ~BM_USBC_UOG1_GPTIMER1CTRL_GPTRST) | BF_USBC_UOG1_GPTIMER1CTRL_GPTRST(v)))
#endif


/* --- Register HW_USBC_UOG1_GPTIMER1CTRL, field GPTRUN[31] (RW)
 *
 * General Purpose Timer Run GPTCNT bits are not effected when setting or clearing this bit.
 *
 * Values:
 * 0 - Stop counting
 * 1 - Run
 */

#define BP_USBC_UOG1_GPTIMER1CTRL_GPTRUN      (31)      //!< Bit position for USBC_UOG1_GPTIMER1CTRL_GPTRUN.
#define BM_USBC_UOG1_GPTIMER1CTRL_GPTRUN      (0x80000000)  //!< Bit mask for USBC_UOG1_GPTIMER1CTRL_GPTRUN.

//! @brief Get value of USBC_UOG1_GPTIMER1CTRL_GPTRUN from a register value.
#define BG_USBC_UOG1_GPTIMER1CTRL_GPTRUN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_GPTIMER1CTRL_GPTRUN) >> BP_USBC_UOG1_GPTIMER1CTRL_GPTRUN)

//! @brief Format value for bitfield USBC_UOG1_GPTIMER1CTRL_GPTRUN.
#define BF_USBC_UOG1_GPTIMER1CTRL_GPTRUN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_GPTIMER1CTRL_GPTRUN) & BM_USBC_UOG1_GPTIMER1CTRL_GPTRUN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTRUN field to a new value.
#define BW_USBC_UOG1_GPTIMER1CTRL_GPTRUN(v)   (HW_USBC_UOG1_GPTIMER1CTRL_WR((HW_USBC_UOG1_GPTIMER1CTRL_RD() & ~BM_USBC_UOG1_GPTIMER1CTRL_GPTRUN) | BF_USBC_UOG1_GPTIMER1CTRL_GPTRUN(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_SBUSCFG - System Bus Config
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_SBUSCFG - System Bus Config (RW)
 *
 * Reset value: 0x00000002
 *

 */
typedef union _hw_usbc_uog1_sbuscfg
{
    reg32_t U;
    struct _hw_usbc_uog1_sbuscfg_bitfields
    {
        unsigned AHBBRST : 3; //!< [2:0] AHB master interface Burst configuration These bits control AHB master transfer type sequence (or priority).
        unsigned RESERVED0 : 29; //!< [31:3] Reserved
    } B;
} hw_usbc_uog1_sbuscfg_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_SBUSCFG register
 */
#define HW_USBC_UOG1_SBUSCFG_ADDR      (REGS_USBC_BASE + 0x90)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_SBUSCFG           (*(volatile hw_usbc_uog1_sbuscfg_t *) HW_USBC_UOG1_SBUSCFG_ADDR)
#define HW_USBC_UOG1_SBUSCFG_RD()      (HW_USBC_UOG1_SBUSCFG.U)
#define HW_USBC_UOG1_SBUSCFG_WR(v)     (HW_USBC_UOG1_SBUSCFG.U = (v))
#define HW_USBC_UOG1_SBUSCFG_SET(v)    (HW_USBC_UOG1_SBUSCFG_WR(HW_USBC_UOG1_SBUSCFG_RD() |  (v)))
#define HW_USBC_UOG1_SBUSCFG_CLR(v)    (HW_USBC_UOG1_SBUSCFG_WR(HW_USBC_UOG1_SBUSCFG_RD() & ~(v)))
#define HW_USBC_UOG1_SBUSCFG_TOG(v)    (HW_USBC_UOG1_SBUSCFG_WR(HW_USBC_UOG1_SBUSCFG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_SBUSCFG bitfields
 */

/* --- Register HW_USBC_UOG1_SBUSCFG, field AHBBRST[2:0] (RW)
 *
 * AHB master interface Burst configuration These bits control AHB master transfer type sequence (or
 * priority). This register overrides n_BURSTSIZE register when its value is not zero.
 *
 * Values:
 * 000 - Incremental burst of unspecified length only
 * 001 - INCR4 burst, then single transfer
 * 010 - INCR8 burst, INCR4 burst, then single transfer
 * 011 - INCR16 burst, INCR8 burst, INCR4 burst, then single transfer
 * 100 - Reserved, don't use
 * 101 - INCR4 burst, then incremental burst of unspecified length
 * 110 - INCR8 burst, INCR4 burst, then incremental burst of unspecified length
 * 111 - INCR16 burst, INCR8 burst, INCR4 burst, then incremental burst of unspecified length
 */

#define BP_USBC_UOG1_SBUSCFG_AHBBRST      (0)      //!< Bit position for USBC_UOG1_SBUSCFG_AHBBRST.
#define BM_USBC_UOG1_SBUSCFG_AHBBRST      (0x00000007)  //!< Bit mask for USBC_UOG1_SBUSCFG_AHBBRST.

//! @brief Get value of USBC_UOG1_SBUSCFG_AHBBRST from a register value.
#define BG_USBC_UOG1_SBUSCFG_AHBBRST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_SBUSCFG_AHBBRST) >> BP_USBC_UOG1_SBUSCFG_AHBBRST)

//! @brief Format value for bitfield USBC_UOG1_SBUSCFG_AHBBRST.
#define BF_USBC_UOG1_SBUSCFG_AHBBRST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_SBUSCFG_AHBBRST) & BM_USBC_UOG1_SBUSCFG_AHBBRST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AHBBRST field to a new value.
#define BW_USBC_UOG1_SBUSCFG_AHBBRST(v)   (HW_USBC_UOG1_SBUSCFG_WR((HW_USBC_UOG1_SBUSCFG_RD() & ~BM_USBC_UOG1_SBUSCFG_AHBBRST) | BF_USBC_UOG1_SBUSCFG_AHBBRST(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_CAPLENGTH - Capability Registers Length
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_CAPLENGTH - Capability Registers Length (RO)
 *
 * Reset value: 0x00000040
 *
 * The Capability Registers Length register contains the address offset to the Operational registers
 * relative to the CAPLENGTH register.
 */
typedef union _hw_usbc_uog1_caplength
{
    reg8_t U;
    struct _hw_usbc_uog1_caplength_bitfields
    {
        unsigned char CAPLENGTH : 8; //!< [7:0] These bits are used as an offset to add to register base to find the beginning of the Operational Register.
    } B;
} hw_usbc_uog1_caplength_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_CAPLENGTH register
 */
#define HW_USBC_UOG1_CAPLENGTH_ADDR      (REGS_USBC_BASE + 0x100)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_CAPLENGTH           (*(volatile hw_usbc_uog1_caplength_t *) HW_USBC_UOG1_CAPLENGTH_ADDR)
#define HW_USBC_UOG1_CAPLENGTH_RD()      (HW_USBC_UOG1_CAPLENGTH.U)
#endif

/*
 * constants & macros for individual USBC_UOG1_CAPLENGTH bitfields
 */

/* --- Register HW_USBC_UOG1_CAPLENGTH, field CAPLENGTH[7:0] (RO)
 *
 * These bits are used as an offset to add to register base to find the beginning of the Operational
 * Register. Default value is '40h'.
 */

#define BP_USBC_UOG1_CAPLENGTH_CAPLENGTH      (0)      //!< Bit position for USBC_UOG1_CAPLENGTH_CAPLENGTH.
#define BM_USBC_UOG1_CAPLENGTH_CAPLENGTH      (0x000000ff)  //!< Bit mask for USBC_UOG1_CAPLENGTH_CAPLENGTH.

//! @brief Get value of USBC_UOG1_CAPLENGTH_CAPLENGTH from a register value.
#define BG_USBC_UOG1_CAPLENGTH_CAPLENGTH(r)   ((__REG_VALUE_TYPE((r), reg8_t) & BM_USBC_UOG1_CAPLENGTH_CAPLENGTH) >> BP_USBC_UOG1_CAPLENGTH_CAPLENGTH)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_HCIVERSION - Host Controller Interface Version
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_HCIVERSION - Host Controller Interface Version (RO)
 *
 * Reset value: 0x00000100
 *
 * This is a 2-byte register containing a BCD encoding of the EHCI revision number supported by this
 * host controller. The most significant byte of this register represents a major revision and the
 * least significant byte is the minor revision.
 */
typedef union _hw_usbc_uog1_hciversion
{
    reg16_t U;
    struct _hw_usbc_uog1_hciversion_bitfields
    {
        unsigned short HCIVERSION : 16; //!< [15:0] Host Controller Interface Version Number Default value is '10h', which means EHCI rev1.0.
    } B;
} hw_usbc_uog1_hciversion_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_HCIVERSION register
 */
#define HW_USBC_UOG1_HCIVERSION_ADDR      (REGS_USBC_BASE + 0x102)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_HCIVERSION           (*(volatile hw_usbc_uog1_hciversion_t *) HW_USBC_UOG1_HCIVERSION_ADDR)
#define HW_USBC_UOG1_HCIVERSION_RD()      (HW_USBC_UOG1_HCIVERSION.U)
#endif

/*
 * constants & macros for individual USBC_UOG1_HCIVERSION bitfields
 */

/* --- Register HW_USBC_UOG1_HCIVERSION, field HCIVERSION[15:0] (RO)
 *
 * Host Controller Interface Version Number Default value is '10h', which means EHCI rev1.0.
 */

#define BP_USBC_UOG1_HCIVERSION_HCIVERSION      (0)      //!< Bit position for USBC_UOG1_HCIVERSION_HCIVERSION.
#define BM_USBC_UOG1_HCIVERSION_HCIVERSION      (0x0000ffff)  //!< Bit mask for USBC_UOG1_HCIVERSION_HCIVERSION.

//! @brief Get value of USBC_UOG1_HCIVERSION_HCIVERSION from a register value.
#define BG_USBC_UOG1_HCIVERSION_HCIVERSION(r)   ((__REG_VALUE_TYPE((r), reg16_t) & BM_USBC_UOG1_HCIVERSION_HCIVERSION) >> BP_USBC_UOG1_HCIVERSION_HCIVERSION)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_HCSPARAMS - Host Controller Structural Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_HCSPARAMS - Host Controller Structural Parameters (RO)
 *
 * Reset value: 0x00010011
 *
 * The following figure shows the port steering logic capabilities of Host Control Structural
 * Parameters (n_HCSPARAMS).
 */
typedef union _hw_usbc_uog1_hcsparams
{
    reg32_t U;
    struct _hw_usbc_uog1_hcsparams_bitfields
    {
        unsigned N_PORTS : 4; //!< [3:0] Number of downstream ports.
        unsigned PPC : 1; //!< [4] Port Power Control This field indicates whether the host controller implementation includes port power control.
        unsigned RESERVED0 : 3; //!< [7:5] Reserved
        unsigned N_PCC : 4; //!< [11:8] Number of Ports per Companion Controller This field indicates the number of ports supported per internal Companion Controller.
        unsigned N_CC : 4; //!< [15:12] Number of Companion Controller (N_CC).
        unsigned PI : 1; //!< [16] Port Indicators (P INDICATOR) This bit indicates whether the ports support port indicator control.
        unsigned RESERVED1 : 3; //!< [19:17] Reserved
        unsigned N_PTT : 4; //!< [23:20] Number of Ports per Transaction Translator (N_PTT).
        unsigned N_TT : 4; //!< [27:24] Number of Transaction Translators (N_TT).
        unsigned RESERVED2 : 4; //!< [31:28] Reserved
    } B;
} hw_usbc_uog1_hcsparams_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_HCSPARAMS register
 */
#define HW_USBC_UOG1_HCSPARAMS_ADDR      (REGS_USBC_BASE + 0x104)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_HCSPARAMS           (*(volatile hw_usbc_uog1_hcsparams_t *) HW_USBC_UOG1_HCSPARAMS_ADDR)
#define HW_USBC_UOG1_HCSPARAMS_RD()      (HW_USBC_UOG1_HCSPARAMS.U)
#endif

/*
 * constants & macros for individual USBC_UOG1_HCSPARAMS bitfields
 */

/* --- Register HW_USBC_UOG1_HCSPARAMS, field N_PORTS[3:0] (RO)
 *
 * Number of downstream ports. This field specifies the number of physical downstream ports
 * implemented on this host controller. The value of this field determines how many port registers
 * are addressable in the Operational Register. Valid values are in the range of 1h to Fh. A zero in
 * this field is undefined. These bits are always set to '0001b' because all controller cores are
 * Single-Port Host.
 */

#define BP_USBC_UOG1_HCSPARAMS_N_PORTS      (0)      //!< Bit position for USBC_UOG1_HCSPARAMS_N_PORTS.
#define BM_USBC_UOG1_HCSPARAMS_N_PORTS      (0x0000000f)  //!< Bit mask for USBC_UOG1_HCSPARAMS_N_PORTS.

//! @brief Get value of USBC_UOG1_HCSPARAMS_N_PORTS from a register value.
#define BG_USBC_UOG1_HCSPARAMS_N_PORTS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HCSPARAMS_N_PORTS) >> BP_USBC_UOG1_HCSPARAMS_N_PORTS)

/* --- Register HW_USBC_UOG1_HCSPARAMS, field PPC[4] (RO)
 *
 * Port Power Control This field indicates whether the host controller implementation includes port
 * power control. A one indicates the ports have port power switches. A zero indicates the ports do
 * not have port power switches. The value of this field affects the functionality of the Port Power
 * field in each port status and control register
 */

#define BP_USBC_UOG1_HCSPARAMS_PPC      (4)      //!< Bit position for USBC_UOG1_HCSPARAMS_PPC.
#define BM_USBC_UOG1_HCSPARAMS_PPC      (0x00000010)  //!< Bit mask for USBC_UOG1_HCSPARAMS_PPC.

//! @brief Get value of USBC_UOG1_HCSPARAMS_PPC from a register value.
#define BG_USBC_UOG1_HCSPARAMS_PPC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HCSPARAMS_PPC) >> BP_USBC_UOG1_HCSPARAMS_PPC)

/* --- Register HW_USBC_UOG1_HCSPARAMS, field N_PCC[11:8] (RO)
 *
 * Number of Ports per Companion Controller This field indicates the number of ports supported per
 * internal Companion Controller. It is used to indicate the port routing configuration to the
 * system software. For example, if N_PORTS has a value of 6 and N_CC has a value of 2 then N_PCC
 * could have a value of 3. The convention is that the first N_PCC ports are assumed to be routed to
 * companion controller 1, the next N_PCC ports to companion controller 2, etc. In the previous
 * example, the N_PCC could have been 4, where the first 4 are routed to companion controller 1 and
 * the last two are routed to companion controller 2. The number in this field must be consistent
 * with N_PORTS and N_CC. These bits are '0000b' in all controller core.
 */

#define BP_USBC_UOG1_HCSPARAMS_N_PCC      (8)      //!< Bit position for USBC_UOG1_HCSPARAMS_N_PCC.
#define BM_USBC_UOG1_HCSPARAMS_N_PCC      (0x00000f00)  //!< Bit mask for USBC_UOG1_HCSPARAMS_N_PCC.

//! @brief Get value of USBC_UOG1_HCSPARAMS_N_PCC from a register value.
#define BG_USBC_UOG1_HCSPARAMS_N_PCC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HCSPARAMS_N_PCC) >> BP_USBC_UOG1_HCSPARAMS_N_PCC)

/* --- Register HW_USBC_UOG1_HCSPARAMS, field N_CC[15:12] (RO)
 *
 * Number of Companion Controller (N_CC). This field indicates the number of companion controllers
 * associated with this USB2.0 host controller. These bits are '0000b' in all controller core.
 *
 * Values:
 * 0 - There is no internal Companion Controller and port-ownership hand-off is not supported.
 * 1 - There are internal companion controller(s) and port-ownership hand-offs is supported.
 */

#define BP_USBC_UOG1_HCSPARAMS_N_CC      (12)      //!< Bit position for USBC_UOG1_HCSPARAMS_N_CC.
#define BM_USBC_UOG1_HCSPARAMS_N_CC      (0x0000f000)  //!< Bit mask for USBC_UOG1_HCSPARAMS_N_CC.

//! @brief Get value of USBC_UOG1_HCSPARAMS_N_CC from a register value.
#define BG_USBC_UOG1_HCSPARAMS_N_CC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HCSPARAMS_N_CC) >> BP_USBC_UOG1_HCSPARAMS_N_CC)


/* --- Register HW_USBC_UOG1_HCSPARAMS, field PI[16] (RO)
 *
 * Port Indicators (P INDICATOR) This bit indicates whether the ports support port indicator
 * control. When set to one, the port status and control registers include a read/writeable field
 * for controlling the state of the port indicator This bit is "1b" in all controller core.
 */

#define BP_USBC_UOG1_HCSPARAMS_PI      (16)      //!< Bit position for USBC_UOG1_HCSPARAMS_PI.
#define BM_USBC_UOG1_HCSPARAMS_PI      (0x00010000)  //!< Bit mask for USBC_UOG1_HCSPARAMS_PI.

//! @brief Get value of USBC_UOG1_HCSPARAMS_PI from a register value.
#define BG_USBC_UOG1_HCSPARAMS_PI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HCSPARAMS_PI) >> BP_USBC_UOG1_HCSPARAMS_PI)

/* --- Register HW_USBC_UOG1_HCSPARAMS, field N_PTT[23:20] (RO)
 *
 * Number of Ports per Transaction Translator (N_PTT). Default value '0000b' This field indicates
 * the number of ports assigned to each transaction translator within the USB2.0 host controller.
 * These bits would be set to equal N_PORTS for Multi-Port Host, and '0000b' for Single-Port Host.
 */

#define BP_USBC_UOG1_HCSPARAMS_N_PTT      (20)      //!< Bit position for USBC_UOG1_HCSPARAMS_N_PTT.
#define BM_USBC_UOG1_HCSPARAMS_N_PTT      (0x00f00000)  //!< Bit mask for USBC_UOG1_HCSPARAMS_N_PTT.

//! @brief Get value of USBC_UOG1_HCSPARAMS_N_PTT from a register value.
#define BG_USBC_UOG1_HCSPARAMS_N_PTT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HCSPARAMS_N_PTT) >> BP_USBC_UOG1_HCSPARAMS_N_PTT)

/* --- Register HW_USBC_UOG1_HCSPARAMS, field N_TT[27:24] (RO)
 *
 * Number of Transaction Translators (N_TT). Default value '0000b' This field indicates the number
 * of embedded transaction translators associated with the USB2.0 host controller. These bits would
 * be set to '0001b' for Multi-Port Host, and '0000b' for Single-Port Host.
 */

#define BP_USBC_UOG1_HCSPARAMS_N_TT      (24)      //!< Bit position for USBC_UOG1_HCSPARAMS_N_TT.
#define BM_USBC_UOG1_HCSPARAMS_N_TT      (0x0f000000)  //!< Bit mask for USBC_UOG1_HCSPARAMS_N_TT.

//! @brief Get value of USBC_UOG1_HCSPARAMS_N_TT from a register value.
#define BG_USBC_UOG1_HCSPARAMS_N_TT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HCSPARAMS_N_TT) >> BP_USBC_UOG1_HCSPARAMS_N_TT)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_HCCPARAMS - Host Controller Capability Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_HCCPARAMS - Host Controller Capability Parameters (RO)
 *
 * Reset value: 0x00000006
 *
 * This register identifies multiple mode control (time-base bit functionality), addressing
 * capability.
 */
typedef union _hw_usbc_uog1_hccparams
{
    reg32_t U;
    struct _hw_usbc_uog1_hccparams_bitfields
    {
        unsigned ADC : 1; //!< [0] 64-bit Addressing Capability This bit is set '0b' in all controller core, no 64-bit addressing capability is supported.
        unsigned PFL : 1; //!< [1] Programmable Frame List Flag If this bit is set to zero, then the system software must use a frame list length of 1024 elements with this host controller.
        unsigned ASP : 1; //!< [2] Asynchronous Schedule Park Capability If this bit is set to a one, then the host controller supports the park feature for high-speed queue heads in the Asynchronous Schedule.
        unsigned RESERVED0 : 1; //!< [3] Reserved
        unsigned IST : 4; //!< [7:4] Isochronous Scheduling Threshold.
        unsigned EECP : 8; //!< [15:8] EHCI Extended Capabilities Pointer.
        unsigned RESERVED1 : 16; //!< [31:16] Reserved
    } B;
} hw_usbc_uog1_hccparams_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_HCCPARAMS register
 */
#define HW_USBC_UOG1_HCCPARAMS_ADDR      (REGS_USBC_BASE + 0x108)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_HCCPARAMS           (*(volatile hw_usbc_uog1_hccparams_t *) HW_USBC_UOG1_HCCPARAMS_ADDR)
#define HW_USBC_UOG1_HCCPARAMS_RD()      (HW_USBC_UOG1_HCCPARAMS.U)
#endif

/*
 * constants & macros for individual USBC_UOG1_HCCPARAMS bitfields
 */

/* --- Register HW_USBC_UOG1_HCCPARAMS, field ADC[0] (RO)
 *
 * 64-bit Addressing Capability This bit is set '0b' in all controller core, no 64-bit addressing
 * capability is supported.
 */

#define BP_USBC_UOG1_HCCPARAMS_ADC      (0)      //!< Bit position for USBC_UOG1_HCCPARAMS_ADC.
#define BM_USBC_UOG1_HCCPARAMS_ADC      (0x00000001)  //!< Bit mask for USBC_UOG1_HCCPARAMS_ADC.

//! @brief Get value of USBC_UOG1_HCCPARAMS_ADC from a register value.
#define BG_USBC_UOG1_HCCPARAMS_ADC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HCCPARAMS_ADC) >> BP_USBC_UOG1_HCCPARAMS_ADC)

/* --- Register HW_USBC_UOG1_HCCPARAMS, field PFL[1] (RO)
 *
 * Programmable Frame List Flag If this bit is set to zero, then the system software must use a
 * frame list length of 1024 elements with this host controller. The USBCMD register Frame List Size
 * field is a read-only register and must be set to zero. If set to a one, then the system software
 * can specify and use a smaller frame list and configure the host controller via the USBCMD
 * register Frame List Size field. The frame list must always be aligned on a 4K-page boundary. This
 * requirement ensures that the frame list is always physically contiguous. This bit is set '1b' in
 * all controller core.
 */

#define BP_USBC_UOG1_HCCPARAMS_PFL      (1)      //!< Bit position for USBC_UOG1_HCCPARAMS_PFL.
#define BM_USBC_UOG1_HCCPARAMS_PFL      (0x00000002)  //!< Bit mask for USBC_UOG1_HCCPARAMS_PFL.

//! @brief Get value of USBC_UOG1_HCCPARAMS_PFL from a register value.
#define BG_USBC_UOG1_HCCPARAMS_PFL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HCCPARAMS_PFL) >> BP_USBC_UOG1_HCCPARAMS_PFL)

/* --- Register HW_USBC_UOG1_HCCPARAMS, field ASP[2] (RO)
 *
 * Asynchronous Schedule Park Capability If this bit is set to a one, then the host controller
 * supports the park feature for high-speed queue heads in the Asynchronous Schedule. The feature
 * can be disabled or enabled and set to a specific level by using the Asynchronous Schedule Park
 * Mode Enable and Asynchronous Schedule Park Mode Count fields in the USBCMD register. ASP bit
 * reset value: '00b' for OTG controller core, '11b' for Host-only controller core.
 */

#define BP_USBC_UOG1_HCCPARAMS_ASP      (2)      //!< Bit position for USBC_UOG1_HCCPARAMS_ASP.
#define BM_USBC_UOG1_HCCPARAMS_ASP      (0x00000004)  //!< Bit mask for USBC_UOG1_HCCPARAMS_ASP.

//! @brief Get value of USBC_UOG1_HCCPARAMS_ASP from a register value.
#define BG_USBC_UOG1_HCCPARAMS_ASP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HCCPARAMS_ASP) >> BP_USBC_UOG1_HCCPARAMS_ASP)

/* --- Register HW_USBC_UOG1_HCCPARAMS, field IST[7:4] (RO)
 *
 * Isochronous Scheduling Threshold. This field indicates, relative to the current position of the
 * executing host controller, where software can reliably update the isochronous schedule. When bit
 * [7] is zero, the value of the least significant 3 bits indicates the number of micro-frames a
 * host controller can hold a set of isochronous data structures (one or more) before flushing the
 * state. When bit [7] is a one, then host software assumes the host controller may cache an
 * isochronous data structure for an entire frame. These bits are set '00h' in all controller core.
 */

#define BP_USBC_UOG1_HCCPARAMS_IST      (4)      //!< Bit position for USBC_UOG1_HCCPARAMS_IST.
#define BM_USBC_UOG1_HCCPARAMS_IST      (0x000000f0)  //!< Bit mask for USBC_UOG1_HCCPARAMS_IST.

//! @brief Get value of USBC_UOG1_HCCPARAMS_IST from a register value.
#define BG_USBC_UOG1_HCCPARAMS_IST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HCCPARAMS_IST) >> BP_USBC_UOG1_HCCPARAMS_IST)

/* --- Register HW_USBC_UOG1_HCCPARAMS, field EECP[15:8] (RO)
 *
 * EHCI Extended Capabilities Pointer. This field indicates the existence of a capabilities list. A
 * value of 00h indicates no extended capabilities are implemented. A non-zero value in this
 * register indicates the offset in PCI configuration space of the first EHCI extended capability.
 * The pointer value must be 40h or greater if implemented to maintain the consistency of the PCI
 * header defined for this class of device. These bits are set '00h' in all controller core.
 */

#define BP_USBC_UOG1_HCCPARAMS_EECP      (8)      //!< Bit position for USBC_UOG1_HCCPARAMS_EECP.
#define BM_USBC_UOG1_HCCPARAMS_EECP      (0x0000ff00)  //!< Bit mask for USBC_UOG1_HCCPARAMS_EECP.

//! @brief Get value of USBC_UOG1_HCCPARAMS_EECP from a register value.
#define BG_USBC_UOG1_HCCPARAMS_EECP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_HCCPARAMS_EECP) >> BP_USBC_UOG1_HCCPARAMS_EECP)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_DCIVERSION - Device Controller Interface Version
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_DCIVERSION - Device Controller Interface Version (RO)
 *
 * Reset value: 0x00000001
 *
 * This register indicates the two-byte BCD encoding of the device controller interface version
 * number.
 */
typedef union _hw_usbc_uog1_dciversion
{
    reg16_t U;
    struct _hw_usbc_uog1_dciversion_bitfields
    {
        unsigned short DCIVERSION : 16; //!< [15:0] Device Controller Interface Version Number Default value is '01h', which means rev0.1.
    } B;
} hw_usbc_uog1_dciversion_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_DCIVERSION register
 */
#define HW_USBC_UOG1_DCIVERSION_ADDR      (REGS_USBC_BASE + 0x120)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_DCIVERSION           (*(volatile hw_usbc_uog1_dciversion_t *) HW_USBC_UOG1_DCIVERSION_ADDR)
#define HW_USBC_UOG1_DCIVERSION_RD()      (HW_USBC_UOG1_DCIVERSION.U)
#endif

/*
 * constants & macros for individual USBC_UOG1_DCIVERSION bitfields
 */

/* --- Register HW_USBC_UOG1_DCIVERSION, field DCIVERSION[15:0] (RO)
 *
 * Device Controller Interface Version Number Default value is '01h', which means rev0.1.
 */

#define BP_USBC_UOG1_DCIVERSION_DCIVERSION      (0)      //!< Bit position for USBC_UOG1_DCIVERSION_DCIVERSION.
#define BM_USBC_UOG1_DCIVERSION_DCIVERSION      (0x0000ffff)  //!< Bit mask for USBC_UOG1_DCIVERSION_DCIVERSION.

//! @brief Get value of USBC_UOG1_DCIVERSION_DCIVERSION from a register value.
#define BG_USBC_UOG1_DCIVERSION_DCIVERSION(r)   ((__REG_VALUE_TYPE((r), reg16_t) & BM_USBC_UOG1_DCIVERSION_DCIVERSION) >> BP_USBC_UOG1_DCIVERSION_DCIVERSION)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_DCCPARAMS - Device Controller Capability Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_DCCPARAMS - Device Controller Capability Parameters (RO)
 *
 * Reset value: 0x00000188
 *
 * These fields describe the overall device capability of the controller.  This register is only
 * available in OTG controller core.
 */
typedef union _hw_usbc_uog1_dccparams
{
    reg32_t U;
    struct _hw_usbc_uog1_dccparams_bitfields
    {
        unsigned DEN : 5; //!< [4:0] Device Endpoint Number This field indicates the number of endpoints built into the device controller.
        unsigned RESERVED0 : 2; //!< [6:5] Reserved
        unsigned DC : 1; //!< [7] Device Capable When this bit is 1, this controller is capable of operating as a USB 2.0 device.
        unsigned HC : 1; //!< [8] Host Capable When this bit is 1, this controller is capable of operating as an EHCI compatible USB 2.0 host controller.
        unsigned RESERVED1 : 23; //!< [31:9] Reserved
    } B;
} hw_usbc_uog1_dccparams_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_DCCPARAMS register
 */
#define HW_USBC_UOG1_DCCPARAMS_ADDR      (REGS_USBC_BASE + 0x124)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_DCCPARAMS           (*(volatile hw_usbc_uog1_dccparams_t *) HW_USBC_UOG1_DCCPARAMS_ADDR)
#define HW_USBC_UOG1_DCCPARAMS_RD()      (HW_USBC_UOG1_DCCPARAMS.U)
#endif

/*
 * constants & macros for individual USBC_UOG1_DCCPARAMS bitfields
 */

/* --- Register HW_USBC_UOG1_DCCPARAMS, field DEN[4:0] (RO)
 *
 * Device Endpoint Number This field indicates the number of endpoints built into the device
 * controller. If this controller is not device capable, then this field will be zero. Valid values
 * are 0 - 15.
 */

#define BP_USBC_UOG1_DCCPARAMS_DEN      (0)      //!< Bit position for USBC_UOG1_DCCPARAMS_DEN.
#define BM_USBC_UOG1_DCCPARAMS_DEN      (0x0000001f)  //!< Bit mask for USBC_UOG1_DCCPARAMS_DEN.

//! @brief Get value of USBC_UOG1_DCCPARAMS_DEN from a register value.
#define BG_USBC_UOG1_DCCPARAMS_DEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_DCCPARAMS_DEN) >> BP_USBC_UOG1_DCCPARAMS_DEN)

/* --- Register HW_USBC_UOG1_DCCPARAMS, field DC[7] (RO)
 *
 * Device Capable When this bit is 1, this controller is capable of operating as a USB 2.0 device.
 */

#define BP_USBC_UOG1_DCCPARAMS_DC      (7)      //!< Bit position for USBC_UOG1_DCCPARAMS_DC.
#define BM_USBC_UOG1_DCCPARAMS_DC      (0x00000080)  //!< Bit mask for USBC_UOG1_DCCPARAMS_DC.

//! @brief Get value of USBC_UOG1_DCCPARAMS_DC from a register value.
#define BG_USBC_UOG1_DCCPARAMS_DC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_DCCPARAMS_DC) >> BP_USBC_UOG1_DCCPARAMS_DC)

/* --- Register HW_USBC_UOG1_DCCPARAMS, field HC[8] (RO)
 *
 * Host Capable When this bit is 1, this controller is capable of operating as an EHCI compatible
 * USB 2.0 host controller.
 */

#define BP_USBC_UOG1_DCCPARAMS_HC      (8)      //!< Bit position for USBC_UOG1_DCCPARAMS_HC.
#define BM_USBC_UOG1_DCCPARAMS_HC      (0x00000100)  //!< Bit mask for USBC_UOG1_DCCPARAMS_HC.

//! @brief Get value of USBC_UOG1_DCCPARAMS_HC from a register value.
#define BG_USBC_UOG1_DCCPARAMS_HC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_DCCPARAMS_HC) >> BP_USBC_UOG1_DCCPARAMS_HC)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_USBCMD - USB Command Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_USBCMD - USB Command Register (RW)
 *
 * Reset value: 0x00080000
 *
 * The Command Register indicates the command to be executed by the serial bus host/device
 * controller. Writing to the register causes a command to be executed.
 */
typedef union _hw_usbc_uog1_usbcmd
{
    reg32_t U;
    struct _hw_usbc_uog1_usbcmd_bitfields
    {
        unsigned RS : 1; //!< [0] Run/Stop (RS) - Read/Write.
        unsigned RST : 1; //!< [1] Controller Reset (RESET) - Read/Write.
        unsigned FS : 2; //!< [3:2] See description at bit 15
        unsigned PSE : 1; //!< [4] Periodic Schedule Enable- Read/Write.
        unsigned ASE : 1; //!< [5] Asynchronous Schedule Enable - Read/Write.
        unsigned IAA : 1; //!< [6] Interrupt on Async Advance Doorbell - Read/Write.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned ASP : 2; //!< [9:8] Asynchronous Schedule Park Mode Count - Read/Write.
        unsigned RESERVED1 : 1; //!< [10] Reserved
        unsigned ASPE : 1; //!< [11] Asynchronous Schedule Park Mode Enable - Read/Write.
        unsigned RESERVED2 : 1; //!< [12] Reserved
        unsigned SUTW : 1; //!< [13] Setup TripWire - Read/Write.
        unsigned ATDTW : 1; //!< [14] Add dTD TripWire - Read/Write.
        unsigned FS1 : 1; //!< [15] See also bits 3-2 Frame List Size - (Read/Write or Read Only).
        unsigned ITC : 8; //!< [23:16] Interrupt Threshold Control -Read/Write.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_usbcmd_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_USBCMD register
 */
#define HW_USBC_UOG1_USBCMD_ADDR      (REGS_USBC_BASE + 0x140)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_USBCMD           (*(volatile hw_usbc_uog1_usbcmd_t *) HW_USBC_UOG1_USBCMD_ADDR)
#define HW_USBC_UOG1_USBCMD_RD()      (HW_USBC_UOG1_USBCMD.U)
#define HW_USBC_UOG1_USBCMD_WR(v)     (HW_USBC_UOG1_USBCMD.U = (v))
#define HW_USBC_UOG1_USBCMD_SET(v)    (HW_USBC_UOG1_USBCMD_WR(HW_USBC_UOG1_USBCMD_RD() |  (v)))
#define HW_USBC_UOG1_USBCMD_CLR(v)    (HW_USBC_UOG1_USBCMD_WR(HW_USBC_UOG1_USBCMD_RD() & ~(v)))
#define HW_USBC_UOG1_USBCMD_TOG(v)    (HW_USBC_UOG1_USBCMD_WR(HW_USBC_UOG1_USBCMD_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_USBCMD bitfields
 */

/* --- Register HW_USBC_UOG1_USBCMD, field RS[0] (RW)
 *
 * Run/Stop (RS) - Read/Write. Default 0b. 1=Run. 0=Stop. Host operation mode: When set to '1b', the
 * Controller proceeds with the execution of the schedule. The Controller continues execution as
 * long as this bit is set to a one. When this bit is set to 0, the Host Controller completes the
 * current transaction on the USB and then halts. The HC Halted bit in the status register indicates
 * when the Controller has finished the transaction and has entered the stopped state. Software
 * should not write a one to this field unless the controller is in the Halted state (that is,
 * HCHalted in the USBSTS register is a one). Device operation mode: Writing a one to this bit will
 * cause the controller to enable a pull-up on D+ and initiate an attach event. This control bit is
 * not directly connected to the pull-up enable, as the pull-up will become disabled upon
 * transitioning into high-speed mode. Software should use this bit to prevent an attach event
 * before the controller has been properly initialized. Writing a 0 to this will cause a detach
 * event.
 */

#define BP_USBC_UOG1_USBCMD_RS      (0)      //!< Bit position for USBC_UOG1_USBCMD_RS.
#define BM_USBC_UOG1_USBCMD_RS      (0x00000001)  //!< Bit mask for USBC_UOG1_USBCMD_RS.

//! @brief Get value of USBC_UOG1_USBCMD_RS from a register value.
#define BG_USBC_UOG1_USBCMD_RS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBCMD_RS) >> BP_USBC_UOG1_USBCMD_RS)

//! @brief Format value for bitfield USBC_UOG1_USBCMD_RS.
#define BF_USBC_UOG1_USBCMD_RS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBCMD_RS) & BM_USBC_UOG1_USBCMD_RS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RS field to a new value.
#define BW_USBC_UOG1_USBCMD_RS(v)   (HW_USBC_UOG1_USBCMD_WR((HW_USBC_UOG1_USBCMD_RD() & ~BM_USBC_UOG1_USBCMD_RS) | BF_USBC_UOG1_USBCMD_RS(v)))
#endif

/* --- Register HW_USBC_UOG1_USBCMD, field RST[1] (RW)
 *
 * Controller Reset (RESET) - Read/Write. Software uses this bit to reset the controller. This bit
 * is set to zero by the Host/Device Controller when the reset process is complete. Software cannot
 * terminate the reset process early by writing a zero to this register. Host operation mode: When
 * software writes a one to this bit, the Controller resets its internal pipelines, timers,
 * counters, state machines etc. to their initial value. Any transaction currently in progress on
 * USB is immediately terminated. A USB reset is not driven on downstream ports. Software should not
 * set this bit to a one when the HCHalted bit in the USBSTS register is a zero. Attempting to reset
 * an actively running host controller will result in undefined behavior. Device operation mode:
 * When software writes a one to this bit, the Controller resets its internal pipelines, timers,
 * counters, state machines etc. to their initial value. Writing a one to this bit when the device
 * is in the attached state is not recommended, because the effect on an attached host is undefined.
 * In order to ensure that the device is not in an attached state before initiating a device
 * controller reset, all primed endpoints should be flushed and the USBCMD Run/Stop bit should be
 * set to 0.
 */

#define BP_USBC_UOG1_USBCMD_RST      (1)      //!< Bit position for USBC_UOG1_USBCMD_RST.
#define BM_USBC_UOG1_USBCMD_RST      (0x00000002)  //!< Bit mask for USBC_UOG1_USBCMD_RST.

//! @brief Get value of USBC_UOG1_USBCMD_RST from a register value.
#define BG_USBC_UOG1_USBCMD_RST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBCMD_RST) >> BP_USBC_UOG1_USBCMD_RST)

//! @brief Format value for bitfield USBC_UOG1_USBCMD_RST.
#define BF_USBC_UOG1_USBCMD_RST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBCMD_RST) & BM_USBC_UOG1_USBCMD_RST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RST field to a new value.
#define BW_USBC_UOG1_USBCMD_RST(v)   (HW_USBC_UOG1_USBCMD_WR((HW_USBC_UOG1_USBCMD_RD() & ~BM_USBC_UOG1_USBCMD_RST) | BF_USBC_UOG1_USBCMD_RST(v)))
#endif

/* --- Register HW_USBC_UOG1_USBCMD, field FS[3:2] (RW)
 *
 * See description at bit 15
 */

#define BP_USBC_UOG1_USBCMD_FS      (2)      //!< Bit position for USBC_UOG1_USBCMD_FS.
#define BM_USBC_UOG1_USBCMD_FS      (0x0000000c)  //!< Bit mask for USBC_UOG1_USBCMD_FS.

//! @brief Get value of USBC_UOG1_USBCMD_FS from a register value.
#define BG_USBC_UOG1_USBCMD_FS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBCMD_FS) >> BP_USBC_UOG1_USBCMD_FS)

//! @brief Format value for bitfield USBC_UOG1_USBCMD_FS.
#define BF_USBC_UOG1_USBCMD_FS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBCMD_FS) & BM_USBC_UOG1_USBCMD_FS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FS field to a new value.
#define BW_USBC_UOG1_USBCMD_FS(v)   (HW_USBC_UOG1_USBCMD_WR((HW_USBC_UOG1_USBCMD_RD() & ~BM_USBC_UOG1_USBCMD_FS) | BF_USBC_UOG1_USBCMD_FS(v)))
#endif

/* --- Register HW_USBC_UOG1_USBCMD, field PSE[4] (RW)
 *
 * Periodic Schedule Enable- Read/Write. Default 0b. This bit controls whether the host controller
 * skips processing the Periodic Schedule. Only the host controller uses this bit. Values Meaning
 *
 * Values:
 * 0 - Do not process the Periodic Schedule
 * 1 - Use the PERIODICLISTBASE register to access the Periodic Schedule.
 */

#define BP_USBC_UOG1_USBCMD_PSE      (4)      //!< Bit position for USBC_UOG1_USBCMD_PSE.
#define BM_USBC_UOG1_USBCMD_PSE      (0x00000010)  //!< Bit mask for USBC_UOG1_USBCMD_PSE.

//! @brief Get value of USBC_UOG1_USBCMD_PSE from a register value.
#define BG_USBC_UOG1_USBCMD_PSE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBCMD_PSE) >> BP_USBC_UOG1_USBCMD_PSE)

//! @brief Format value for bitfield USBC_UOG1_USBCMD_PSE.
#define BF_USBC_UOG1_USBCMD_PSE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBCMD_PSE) & BM_USBC_UOG1_USBCMD_PSE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PSE field to a new value.
#define BW_USBC_UOG1_USBCMD_PSE(v)   (HW_USBC_UOG1_USBCMD_WR((HW_USBC_UOG1_USBCMD_RD() & ~BM_USBC_UOG1_USBCMD_PSE) | BF_USBC_UOG1_USBCMD_PSE(v)))
#endif


/* --- Register HW_USBC_UOG1_USBCMD, field ASE[5] (RW)
 *
 * Asynchronous Schedule Enable - Read/Write. Default 0b. This bit controls whether the host
 * controller skips processing the Asynchronous Schedule. Only the host controller uses this bit.
 * Values Meaning
 *
 * Values:
 * 0 - Do not process the Asynchronous Schedule.
 * 1 - Use the ASYNCLISTADDR register to access the Asynchronous Schedule.
 */

#define BP_USBC_UOG1_USBCMD_ASE      (5)      //!< Bit position for USBC_UOG1_USBCMD_ASE.
#define BM_USBC_UOG1_USBCMD_ASE      (0x00000020)  //!< Bit mask for USBC_UOG1_USBCMD_ASE.

//! @brief Get value of USBC_UOG1_USBCMD_ASE from a register value.
#define BG_USBC_UOG1_USBCMD_ASE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBCMD_ASE) >> BP_USBC_UOG1_USBCMD_ASE)

//! @brief Format value for bitfield USBC_UOG1_USBCMD_ASE.
#define BF_USBC_UOG1_USBCMD_ASE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBCMD_ASE) & BM_USBC_UOG1_USBCMD_ASE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASE field to a new value.
#define BW_USBC_UOG1_USBCMD_ASE(v)   (HW_USBC_UOG1_USBCMD_WR((HW_USBC_UOG1_USBCMD_RD() & ~BM_USBC_UOG1_USBCMD_ASE) | BF_USBC_UOG1_USBCMD_ASE(v)))
#endif


/* --- Register HW_USBC_UOG1_USBCMD, field IAA[6] (RW)
 *
 * Interrupt on Async Advance Doorbell - Read/Write. This bit is used as a doorbell by software to
 * tell the host controller to issue an interrupt the next time it advances asynchronous schedule.
 * Software must write a 1 to this bit to ring the doorbell. When the host controller has evicted
 * all appropriate cached schedule states, it sets the Interrupt on Async Advance status bit in the
 * USBSTS register. If the Interrupt on Sync Advance Enable bit in the USBINTR register is one, then
 * the host controller will assert an interrupt at the next interrupt threshold. The host controller
 * sets this bit to zero after it has set the Interrupt on Sync Advance status bit in the USBSTS
 * register to one. Software should not write a one to this bit when the asynchronous schedule is
 * inactive. Doing so will yield undefined results. This bit is only used in host mode. Writing a
 * one to this bit when device mode is selected will have undefined results.
 */

#define BP_USBC_UOG1_USBCMD_IAA      (6)      //!< Bit position for USBC_UOG1_USBCMD_IAA.
#define BM_USBC_UOG1_USBCMD_IAA      (0x00000040)  //!< Bit mask for USBC_UOG1_USBCMD_IAA.

//! @brief Get value of USBC_UOG1_USBCMD_IAA from a register value.
#define BG_USBC_UOG1_USBCMD_IAA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBCMD_IAA) >> BP_USBC_UOG1_USBCMD_IAA)

//! @brief Format value for bitfield USBC_UOG1_USBCMD_IAA.
#define BF_USBC_UOG1_USBCMD_IAA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBCMD_IAA) & BM_USBC_UOG1_USBCMD_IAA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IAA field to a new value.
#define BW_USBC_UOG1_USBCMD_IAA(v)   (HW_USBC_UOG1_USBCMD_WR((HW_USBC_UOG1_USBCMD_RD() & ~BM_USBC_UOG1_USBCMD_IAA) | BF_USBC_UOG1_USBCMD_IAA(v)))
#endif

/* --- Register HW_USBC_UOG1_USBCMD, field ASP[9:8] (RW)
 *
 * Asynchronous Schedule Park Mode Count - Read/Write. If the Asynchronous Park Capability bit in
 * the HCCPARAMS register is a one, then this field defaults to 3h and is R/W. Otherwise it defaults
 * to zero and is Read-Only. It contains a count of the number of successive transactions the host
 * controller is allowed to execute from a high-speed queue head on the Asynchronous schedule before
 * continuing traversal of the Asynchronous schedule. Valid values are 1h to 3h. Software must not
 * write a zero to this bit when Park Mode Enable is a one as this will result in undefined
 * behavior. This field is set to 3h in all controller core.
 */

#define BP_USBC_UOG1_USBCMD_ASP      (8)      //!< Bit position for USBC_UOG1_USBCMD_ASP.
#define BM_USBC_UOG1_USBCMD_ASP      (0x00000300)  //!< Bit mask for USBC_UOG1_USBCMD_ASP.

//! @brief Get value of USBC_UOG1_USBCMD_ASP from a register value.
#define BG_USBC_UOG1_USBCMD_ASP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBCMD_ASP) >> BP_USBC_UOG1_USBCMD_ASP)

//! @brief Format value for bitfield USBC_UOG1_USBCMD_ASP.
#define BF_USBC_UOG1_USBCMD_ASP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBCMD_ASP) & BM_USBC_UOG1_USBCMD_ASP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASP field to a new value.
#define BW_USBC_UOG1_USBCMD_ASP(v)   (HW_USBC_UOG1_USBCMD_WR((HW_USBC_UOG1_USBCMD_RD() & ~BM_USBC_UOG1_USBCMD_ASP) | BF_USBC_UOG1_USBCMD_ASP(v)))
#endif

/* --- Register HW_USBC_UOG1_USBCMD, field ASPE[11] (RW)
 *
 * Asynchronous Schedule Park Mode Enable - Read/Write. If the Asynchronous Park Capability bit in
 * the HCCPARAMS register is a one, then this bit defaults to a 1h and is R/W. Otherwise the bit
 * must be a zero and is RO. Software uses this bit to enable or disable Park mode. When this bit is
 * one, Park mode is enabled. When this bit is a zero, Park mode is disabled. ASPE bit reset value:
 * '0b' for OTG controller core, '1b' for Host-only controller core.
 */

#define BP_USBC_UOG1_USBCMD_ASPE      (11)      //!< Bit position for USBC_UOG1_USBCMD_ASPE.
#define BM_USBC_UOG1_USBCMD_ASPE      (0x00000800)  //!< Bit mask for USBC_UOG1_USBCMD_ASPE.

//! @brief Get value of USBC_UOG1_USBCMD_ASPE from a register value.
#define BG_USBC_UOG1_USBCMD_ASPE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBCMD_ASPE) >> BP_USBC_UOG1_USBCMD_ASPE)

//! @brief Format value for bitfield USBC_UOG1_USBCMD_ASPE.
#define BF_USBC_UOG1_USBCMD_ASPE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBCMD_ASPE) & BM_USBC_UOG1_USBCMD_ASPE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASPE field to a new value.
#define BW_USBC_UOG1_USBCMD_ASPE(v)   (HW_USBC_UOG1_USBCMD_WR((HW_USBC_UOG1_USBCMD_RD() & ~BM_USBC_UOG1_USBCMD_ASPE) | BF_USBC_UOG1_USBCMD_ASPE(v)))
#endif

/* --- Register HW_USBC_UOG1_USBCMD, field SUTW[13] (RW)
 *
 * Setup TripWire - Read/Write. [device mode only] This bit is used as a semaphore to ensure that
 * the setup data payload of 8 bytes is extracted from a QH by the DCD without being corrupted. If
 * the setup lockout mode is off (SLOM bit in USB core register n_USBMODE, see ) then there is a
 * hazard when new setup data arrives while the DCD is copying the setup data payload from the QH
 * for a previous setup packet. This bit is set and cleared by software. This bit would also be
 * cleared by hardware when a hazard detected.
 */

#define BP_USBC_UOG1_USBCMD_SUTW      (13)      //!< Bit position for USBC_UOG1_USBCMD_SUTW.
#define BM_USBC_UOG1_USBCMD_SUTW      (0x00002000)  //!< Bit mask for USBC_UOG1_USBCMD_SUTW.

//! @brief Get value of USBC_UOG1_USBCMD_SUTW from a register value.
#define BG_USBC_UOG1_USBCMD_SUTW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBCMD_SUTW) >> BP_USBC_UOG1_USBCMD_SUTW)

//! @brief Format value for bitfield USBC_UOG1_USBCMD_SUTW.
#define BF_USBC_UOG1_USBCMD_SUTW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBCMD_SUTW) & BM_USBC_UOG1_USBCMD_SUTW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SUTW field to a new value.
#define BW_USBC_UOG1_USBCMD_SUTW(v)   (HW_USBC_UOG1_USBCMD_WR((HW_USBC_UOG1_USBCMD_RD() & ~BM_USBC_UOG1_USBCMD_SUTW) | BF_USBC_UOG1_USBCMD_SUTW(v)))
#endif

/* --- Register HW_USBC_UOG1_USBCMD, field ATDTW[14] (RW)
 *
 * Add dTD TripWire - Read/Write. [device mode only] This bit is used as a semaphore to ensure
 * proper addition of a new dTD to an active (primed) endpoint's linked list. This bit is set and
 * cleared by software. This bit would also be cleared by hardware when state machine is hazard
 * region for which adding a dTD to a primed endpoint may go unrecognized.
 */

#define BP_USBC_UOG1_USBCMD_ATDTW      (14)      //!< Bit position for USBC_UOG1_USBCMD_ATDTW.
#define BM_USBC_UOG1_USBCMD_ATDTW      (0x00004000)  //!< Bit mask for USBC_UOG1_USBCMD_ATDTW.

//! @brief Get value of USBC_UOG1_USBCMD_ATDTW from a register value.
#define BG_USBC_UOG1_USBCMD_ATDTW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBCMD_ATDTW) >> BP_USBC_UOG1_USBCMD_ATDTW)

//! @brief Format value for bitfield USBC_UOG1_USBCMD_ATDTW.
#define BF_USBC_UOG1_USBCMD_ATDTW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBCMD_ATDTW) & BM_USBC_UOG1_USBCMD_ATDTW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ATDTW field to a new value.
#define BW_USBC_UOG1_USBCMD_ATDTW(v)   (HW_USBC_UOG1_USBCMD_WR((HW_USBC_UOG1_USBCMD_RD() & ~BM_USBC_UOG1_USBCMD_ATDTW) | BF_USBC_UOG1_USBCMD_ATDTW(v)))
#endif

/* --- Register HW_USBC_UOG1_USBCMD, field FS1[15] (RW)
 *
 * See also bits 3-2 Frame List Size - (Read/Write or Read Only). [host mode only] This field is
 * Read/Write only if Programmable Frame List Flag in the HCCPARAMS registers is set to one. This
 * field specifies the size of the frame list that controls which bits in the Frame Index Register
 * should be used for the Frame List Current index. This field is made up from USBCMD bits 15, 3 and
 * 2. Value Meaning
 *
 * Values:
 * 000 - 1024 elements (4096 bytes) Default value
 * 001 - 512 elements (2048 bytes)
 * 010 - 256 elements (1024 bytes)
 * 011 - 128 elements (512 bytes)
 * 100 - 64 elements (256 bytes)
 * 101 - 32 elements (128 bytes)
 * 110 - 16 elements (64 bytes)
 * 111 - 8 elements (32 bytes)
 */

#define BP_USBC_UOG1_USBCMD_FS1      (15)      //!< Bit position for USBC_UOG1_USBCMD_FS1.
#define BM_USBC_UOG1_USBCMD_FS1      (0x00008000)  //!< Bit mask for USBC_UOG1_USBCMD_FS1.

//! @brief Get value of USBC_UOG1_USBCMD_FS1 from a register value.
#define BG_USBC_UOG1_USBCMD_FS1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBCMD_FS1) >> BP_USBC_UOG1_USBCMD_FS1)

//! @brief Format value for bitfield USBC_UOG1_USBCMD_FS1.
#define BF_USBC_UOG1_USBCMD_FS1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBCMD_FS1) & BM_USBC_UOG1_USBCMD_FS1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FS1 field to a new value.
#define BW_USBC_UOG1_USBCMD_FS1(v)   (HW_USBC_UOG1_USBCMD_WR((HW_USBC_UOG1_USBCMD_RD() & ~BM_USBC_UOG1_USBCMD_FS1) | BF_USBC_UOG1_USBCMD_FS1(v)))
#endif


/* --- Register HW_USBC_UOG1_USBCMD, field ITC[23:16] (RW)
 *
 * Interrupt Threshold Control -Read/Write. The system software uses this field to set the maximum
 * rate at which the host/device controller will issue interrupts. ITC contains the maximum
 * interrupt interval measured in micro-frames. Valid values are shown below. Value Maximum
 * Interrupt Interval
 *
 * Values:
 * 0x00 - Immediate (no threshold)
 * 0x01 - 1 micro-frame
 * 0x02 - 2 micro-frames
 * 0x04 - 4 micro-frames
 * 0x08 - 8 micro-frames
 * 0x10 - 16 micro-frames
 * 0x20 - 32 micro-frames
 * 0x40 - 64 micro-frames
 */

#define BP_USBC_UOG1_USBCMD_ITC      (16)      //!< Bit position for USBC_UOG1_USBCMD_ITC.
#define BM_USBC_UOG1_USBCMD_ITC      (0x00ff0000)  //!< Bit mask for USBC_UOG1_USBCMD_ITC.

//! @brief Get value of USBC_UOG1_USBCMD_ITC from a register value.
#define BG_USBC_UOG1_USBCMD_ITC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBCMD_ITC) >> BP_USBC_UOG1_USBCMD_ITC)

//! @brief Format value for bitfield USBC_UOG1_USBCMD_ITC.
#define BF_USBC_UOG1_USBCMD_ITC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBCMD_ITC) & BM_USBC_UOG1_USBCMD_ITC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ITC field to a new value.
#define BW_USBC_UOG1_USBCMD_ITC(v)   (HW_USBC_UOG1_USBCMD_WR((HW_USBC_UOG1_USBCMD_RD() & ~BM_USBC_UOG1_USBCMD_ITC) | BF_USBC_UOG1_USBCMD_ITC(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_USBSTS - USB Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_USBSTS - USB Status Register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register indicates various states of the Host/Device Controller and any pending interrupts.
 * This register does not indicate status resulting from a transaction on the serial bus.
 */
typedef union _hw_usbc_uog1_usbsts
{
    reg32_t U;
    struct _hw_usbc_uog1_usbsts_bitfields
    {
        unsigned UI : 1; //!< [0] USB Interrupt (USBINT) - R/WC.
        unsigned UEI : 1; //!< [1] USB Error Interrupt (USBERRINT) - R/WC.
        unsigned PCI : 1; //!< [2] Port Change Detect - R/WC.
        unsigned FRI : 1; //!< [3] Frame List Rollover - R/WC.
        unsigned SEI : 1; //!< [4] System Error- R/WC.
        unsigned AAI : 1; //!< [5] Interrupt on Async Advance - R/WC.
        unsigned URI : 1; //!< [6] USB Reset Received - R/WC.
        unsigned SRI : 1; //!< [7] SOF Received - R/WC.
        unsigned SLI : 1; //!< [8] DCSuspend - R/WC.
        unsigned RESERVED0 : 1; //!< [9] Reserved
        unsigned ULPII : 1; //!< [10] ULPI Interrupt - R/WC.
        unsigned RESERVED1 : 1; //!< [11] Reserved
        unsigned HCH : 1; //!< [12] HCHaIted - Read Only.
        unsigned RCL : 1; //!< [13] Reclamation - Read Only.
        unsigned PS : 1; //!< [14] Periodic Schedule Status - Read Only.
        unsigned AS : 1; //!< [15] Asynchronous Schedule Status - Read Only.
        unsigned NAKI : 1; //!< [16] NAK Interrupt Bit--RO.
        unsigned RESERVED2 : 7; //!< [23:17] Reserved
        unsigned TI0 : 1; //!< [24] General Purpose Timer Interrupt 0(GPTINT0)--R/WC.
        unsigned TI1 : 1; //!< [25] General Purpose Timer Interrupt 1(GPTINT1)--R/WC.
        unsigned RESERVED3 : 6; //!< [31:26] Reserved
    } B;
} hw_usbc_uog1_usbsts_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_USBSTS register
 */
#define HW_USBC_UOG1_USBSTS_ADDR      (REGS_USBC_BASE + 0x144)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_USBSTS           (*(volatile hw_usbc_uog1_usbsts_t *) HW_USBC_UOG1_USBSTS_ADDR)
#define HW_USBC_UOG1_USBSTS_RD()      (HW_USBC_UOG1_USBSTS.U)
#define HW_USBC_UOG1_USBSTS_WR(v)     (HW_USBC_UOG1_USBSTS.U = (v))
#define HW_USBC_UOG1_USBSTS_SET(v)    (HW_USBC_UOG1_USBSTS_WR(HW_USBC_UOG1_USBSTS_RD() |  (v)))
#define HW_USBC_UOG1_USBSTS_CLR(v)    (HW_USBC_UOG1_USBSTS_WR(HW_USBC_UOG1_USBSTS_RD() & ~(v)))
#define HW_USBC_UOG1_USBSTS_TOG(v)    (HW_USBC_UOG1_USBSTS_WR(HW_USBC_UOG1_USBSTS_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_USBSTS bitfields
 */

/* --- Register HW_USBC_UOG1_USBSTS, field UI[0] (RW)
 *
 * USB Interrupt (USBINT) - R/WC. This bit is set by the Host/Device Controller when the cause of an
 * interrupt is a completion of a USB transaction where the Transfer Descriptor (TD) has an
 * interrupt on complete (IOC) bit set. This bit is also set by the Host/Device Controller when a
 * short packet is detected. A short packet is when the actual number of bytes received was less
 * than the expected number of bytes.
 */

#define BP_USBC_UOG1_USBSTS_UI      (0)      //!< Bit position for USBC_UOG1_USBSTS_UI.
#define BM_USBC_UOG1_USBSTS_UI      (0x00000001)  //!< Bit mask for USBC_UOG1_USBSTS_UI.

//! @brief Get value of USBC_UOG1_USBSTS_UI from a register value.
#define BG_USBC_UOG1_USBSTS_UI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_UI) >> BP_USBC_UOG1_USBSTS_UI)

//! @brief Format value for bitfield USBC_UOG1_USBSTS_UI.
#define BF_USBC_UOG1_USBSTS_UI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBSTS_UI) & BM_USBC_UOG1_USBSTS_UI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UI field to a new value.
#define BW_USBC_UOG1_USBSTS_UI(v)   (HW_USBC_UOG1_USBSTS_WR((HW_USBC_UOG1_USBSTS_RD() & ~BM_USBC_UOG1_USBSTS_UI) | BF_USBC_UOG1_USBSTS_UI(v)))
#endif

/* --- Register HW_USBC_UOG1_USBSTS, field UEI[1] (RW)
 *
 * USB Error Interrupt (USBERRINT) - R/WC. When completion of a USB transaction results in an error
 * condition, this bit is set by the Host/Device Controller. This bit is set along with the USBINT
 * bit, if the TD on which the error interrupt occurred also had its interrupt on complete (IOC) bit
 * set The device controller detects resume signaling only.
 */

#define BP_USBC_UOG1_USBSTS_UEI      (1)      //!< Bit position for USBC_UOG1_USBSTS_UEI.
#define BM_USBC_UOG1_USBSTS_UEI      (0x00000002)  //!< Bit mask for USBC_UOG1_USBSTS_UEI.

//! @brief Get value of USBC_UOG1_USBSTS_UEI from a register value.
#define BG_USBC_UOG1_USBSTS_UEI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_UEI) >> BP_USBC_UOG1_USBSTS_UEI)

//! @brief Format value for bitfield USBC_UOG1_USBSTS_UEI.
#define BF_USBC_UOG1_USBSTS_UEI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBSTS_UEI) & BM_USBC_UOG1_USBSTS_UEI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UEI field to a new value.
#define BW_USBC_UOG1_USBSTS_UEI(v)   (HW_USBC_UOG1_USBSTS_WR((HW_USBC_UOG1_USBSTS_RD() & ~BM_USBC_UOG1_USBSTS_UEI) | BF_USBC_UOG1_USBSTS_UEI(v)))
#endif

/* --- Register HW_USBC_UOG1_USBSTS, field PCI[2] (RW)
 *
 * Port Change Detect - R/WC. The Host Controller sets this bit to a one when on any port a Connect
 * Status occurs, a Port Enable/Disable Change occurs, or the Force Port Resume bit is set as the
 * result of a J-K transition on the suspended port. The Device Controller sets this bit to a one
 * when the port controller enters the full or high-speed operational state. When the port
 * controller exits the full or high-speed operation states due to Reset or Suspend events, the
 * notification mechanisms are the USB Reset Received bit and the DCSuspend bits respectively.
 */

#define BP_USBC_UOG1_USBSTS_PCI      (2)      //!< Bit position for USBC_UOG1_USBSTS_PCI.
#define BM_USBC_UOG1_USBSTS_PCI      (0x00000004)  //!< Bit mask for USBC_UOG1_USBSTS_PCI.

//! @brief Get value of USBC_UOG1_USBSTS_PCI from a register value.
#define BG_USBC_UOG1_USBSTS_PCI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_PCI) >> BP_USBC_UOG1_USBSTS_PCI)

//! @brief Format value for bitfield USBC_UOG1_USBSTS_PCI.
#define BF_USBC_UOG1_USBSTS_PCI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBSTS_PCI) & BM_USBC_UOG1_USBSTS_PCI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PCI field to a new value.
#define BW_USBC_UOG1_USBSTS_PCI(v)   (HW_USBC_UOG1_USBSTS_WR((HW_USBC_UOG1_USBSTS_RD() & ~BM_USBC_UOG1_USBSTS_PCI) | BF_USBC_UOG1_USBSTS_PCI(v)))
#endif

/* --- Register HW_USBC_UOG1_USBSTS, field FRI[3] (RW)
 *
 * Frame List Rollover - R/WC. The Host Controller sets this bit to a one when the Frame List Index
 * rolls over from its maximum value to zero. The exact value at which the rollover occurs depends
 * on the frame list size. For example. If the frame list size (as programmed in the Frame List Size
 * field of the USB_n_USBCMD register) is 1024, the Frame Index Register rolls over every time
 * FRINDEX [13] toggles. Similarly, if the size is 512, the Host Controller sets this bit to a one
 * every time FHINDEX [12] toggles. Only used in host operation mode.
 */

#define BP_USBC_UOG1_USBSTS_FRI      (3)      //!< Bit position for USBC_UOG1_USBSTS_FRI.
#define BM_USBC_UOG1_USBSTS_FRI      (0x00000008)  //!< Bit mask for USBC_UOG1_USBSTS_FRI.

//! @brief Get value of USBC_UOG1_USBSTS_FRI from a register value.
#define BG_USBC_UOG1_USBSTS_FRI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_FRI) >> BP_USBC_UOG1_USBSTS_FRI)

//! @brief Format value for bitfield USBC_UOG1_USBSTS_FRI.
#define BF_USBC_UOG1_USBSTS_FRI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBSTS_FRI) & BM_USBC_UOG1_USBSTS_FRI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FRI field to a new value.
#define BW_USBC_UOG1_USBSTS_FRI(v)   (HW_USBC_UOG1_USBSTS_WR((HW_USBC_UOG1_USBSTS_RD() & ~BM_USBC_UOG1_USBSTS_FRI) | BF_USBC_UOG1_USBSTS_FRI(v)))
#endif

/* --- Register HW_USBC_UOG1_USBSTS, field SEI[4] (RW)
 *
 * System Error- R/WC. This bit is will be set to '1b' when an Error response is seen to a read on
 * the system interface.
 */

#define BP_USBC_UOG1_USBSTS_SEI      (4)      //!< Bit position for USBC_UOG1_USBSTS_SEI.
#define BM_USBC_UOG1_USBSTS_SEI      (0x00000010)  //!< Bit mask for USBC_UOG1_USBSTS_SEI.

//! @brief Get value of USBC_UOG1_USBSTS_SEI from a register value.
#define BG_USBC_UOG1_USBSTS_SEI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_SEI) >> BP_USBC_UOG1_USBSTS_SEI)

//! @brief Format value for bitfield USBC_UOG1_USBSTS_SEI.
#define BF_USBC_UOG1_USBSTS_SEI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBSTS_SEI) & BM_USBC_UOG1_USBSTS_SEI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SEI field to a new value.
#define BW_USBC_UOG1_USBSTS_SEI(v)   (HW_USBC_UOG1_USBSTS_WR((HW_USBC_UOG1_USBSTS_RD() & ~BM_USBC_UOG1_USBSTS_SEI) | BF_USBC_UOG1_USBSTS_SEI(v)))
#endif

/* --- Register HW_USBC_UOG1_USBSTS, field AAI[5] (RW)
 *
 * Interrupt on Async Advance - R/WC. System software can force the host controller to issue an
 * interrupt the next time the host controller advances the asynchronous schedule by writing a one
 * to the Interrupt on Async Advance Doorbell bit in the n_USBCMD register. This status bit
 * indicates the assertion of that interrupt source. Only used in host operation mode.
 */

#define BP_USBC_UOG1_USBSTS_AAI      (5)      //!< Bit position for USBC_UOG1_USBSTS_AAI.
#define BM_USBC_UOG1_USBSTS_AAI      (0x00000020)  //!< Bit mask for USBC_UOG1_USBSTS_AAI.

//! @brief Get value of USBC_UOG1_USBSTS_AAI from a register value.
#define BG_USBC_UOG1_USBSTS_AAI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_AAI) >> BP_USBC_UOG1_USBSTS_AAI)

//! @brief Format value for bitfield USBC_UOG1_USBSTS_AAI.
#define BF_USBC_UOG1_USBSTS_AAI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBSTS_AAI) & BM_USBC_UOG1_USBSTS_AAI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AAI field to a new value.
#define BW_USBC_UOG1_USBSTS_AAI(v)   (HW_USBC_UOG1_USBSTS_WR((HW_USBC_UOG1_USBSTS_RD() & ~BM_USBC_UOG1_USBSTS_AAI) | BF_USBC_UOG1_USBSTS_AAI(v)))
#endif

/* --- Register HW_USBC_UOG1_USBSTS, field URI[6] (RW)
 *
 * USB Reset Received - R/WC. When the device controller detects a USB Reset and enters the default
 * state, this bit will be set to a one. Software can write a 1 to this bit to clear the USB Reset
 * Received status bit. Only used in device operation mode.
 */

#define BP_USBC_UOG1_USBSTS_URI      (6)      //!< Bit position for USBC_UOG1_USBSTS_URI.
#define BM_USBC_UOG1_USBSTS_URI      (0x00000040)  //!< Bit mask for USBC_UOG1_USBSTS_URI.

//! @brief Get value of USBC_UOG1_USBSTS_URI from a register value.
#define BG_USBC_UOG1_USBSTS_URI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_URI) >> BP_USBC_UOG1_USBSTS_URI)

//! @brief Format value for bitfield USBC_UOG1_USBSTS_URI.
#define BF_USBC_UOG1_USBSTS_URI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBSTS_URI) & BM_USBC_UOG1_USBSTS_URI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the URI field to a new value.
#define BW_USBC_UOG1_USBSTS_URI(v)   (HW_USBC_UOG1_USBSTS_WR((HW_USBC_UOG1_USBSTS_RD() & ~BM_USBC_UOG1_USBSTS_URI) | BF_USBC_UOG1_USBSTS_URI(v)))
#endif

/* --- Register HW_USBC_UOG1_USBSTS, field SRI[7] (RW)
 *
 * SOF Received - R/WC. When the device controller detects a Start Of (micro) Frame, this bit will
 * be set to a one. When a SOF is extremely late, the device controller will automatically set this
 * bit to indicate that an SOF was expected. Therefore, this bit will be set roughly every 1ms in
 * device FS mode and every 125ms in HS mode and will be synchronized to the actual SOF that is
 * received. Because the device controller is initialized to FS before connect, this bit will be set
 * at an interval of 1ms during the prelude to connect and chirp. In host mode, this bit will be set
 * every 125us and can be used by host controller driver as a time base. Software writes a 1 to this
 * bit to clear it.
 */

#define BP_USBC_UOG1_USBSTS_SRI      (7)      //!< Bit position for USBC_UOG1_USBSTS_SRI.
#define BM_USBC_UOG1_USBSTS_SRI      (0x00000080)  //!< Bit mask for USBC_UOG1_USBSTS_SRI.

//! @brief Get value of USBC_UOG1_USBSTS_SRI from a register value.
#define BG_USBC_UOG1_USBSTS_SRI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_SRI) >> BP_USBC_UOG1_USBSTS_SRI)

//! @brief Format value for bitfield USBC_UOG1_USBSTS_SRI.
#define BF_USBC_UOG1_USBSTS_SRI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBSTS_SRI) & BM_USBC_UOG1_USBSTS_SRI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SRI field to a new value.
#define BW_USBC_UOG1_USBSTS_SRI(v)   (HW_USBC_UOG1_USBSTS_WR((HW_USBC_UOG1_USBSTS_RD() & ~BM_USBC_UOG1_USBSTS_SRI) | BF_USBC_UOG1_USBSTS_SRI(v)))
#endif

/* --- Register HW_USBC_UOG1_USBSTS, field SLI[8] (RW)
 *
 * DCSuspend - R/WC. When a controller enters a suspend state from an active state, this bit will be
 * set to a one. The device controller clears the bit upon exiting from a suspend state. Only used
 * in device operation mode.
 */

#define BP_USBC_UOG1_USBSTS_SLI      (8)      //!< Bit position for USBC_UOG1_USBSTS_SLI.
#define BM_USBC_UOG1_USBSTS_SLI      (0x00000100)  //!< Bit mask for USBC_UOG1_USBSTS_SLI.

//! @brief Get value of USBC_UOG1_USBSTS_SLI from a register value.
#define BG_USBC_UOG1_USBSTS_SLI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_SLI) >> BP_USBC_UOG1_USBSTS_SLI)

//! @brief Format value for bitfield USBC_UOG1_USBSTS_SLI.
#define BF_USBC_UOG1_USBSTS_SLI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBSTS_SLI) & BM_USBC_UOG1_USBSTS_SLI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SLI field to a new value.
#define BW_USBC_UOG1_USBSTS_SLI(v)   (HW_USBC_UOG1_USBSTS_WR((HW_USBC_UOG1_USBSTS_RD() & ~BM_USBC_UOG1_USBSTS_SLI) | BF_USBC_UOG1_USBSTS_SLI(v)))
#endif

/* --- Register HW_USBC_UOG1_USBSTS, field ULPII[10] (RW)
 *
 * ULPI Interrupt - R/WC. This bit will be set '1b' by hardware when there is an event completion in
 * ULPI viewport. This bit is usable only if the controller support UPLI interface mode.
 */

#define BP_USBC_UOG1_USBSTS_ULPII      (10)      //!< Bit position for USBC_UOG1_USBSTS_ULPII.
#define BM_USBC_UOG1_USBSTS_ULPII      (0x00000400)  //!< Bit mask for USBC_UOG1_USBSTS_ULPII.

//! @brief Get value of USBC_UOG1_USBSTS_ULPII from a register value.
#define BG_USBC_UOG1_USBSTS_ULPII(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_ULPII) >> BP_USBC_UOG1_USBSTS_ULPII)

//! @brief Format value for bitfield USBC_UOG1_USBSTS_ULPII.
#define BF_USBC_UOG1_USBSTS_ULPII(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBSTS_ULPII) & BM_USBC_UOG1_USBSTS_ULPII)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ULPII field to a new value.
#define BW_USBC_UOG1_USBSTS_ULPII(v)   (HW_USBC_UOG1_USBSTS_WR((HW_USBC_UOG1_USBSTS_RD() & ~BM_USBC_UOG1_USBSTS_ULPII) | BF_USBC_UOG1_USBSTS_ULPII(v)))
#endif

/* --- Register HW_USBC_UOG1_USBSTS, field HCH[12] (RW)
 *
 * HCHaIted - Read Only. This bit is a zero whenever the Run/Stop bit is a one. The Controller sets
 * this bit to one after it has stopped executing because of the Run/Stop bit being set to 0, either
 * by software or by the Controller hardware (for example, an internal error). Only used in the host
 * operation mode. Default value is '0b' for OTG core, and '1b' for Host1/Host2/Host3 core. This is
 * because OTG core is not operating as host in default. Please see CM bit in USB_n_USBMODE
 * register. HCH bit reset value: '0b' for OTG controller core, '1b' for Host-only controller core.
 */

#define BP_USBC_UOG1_USBSTS_HCH      (12)      //!< Bit position for USBC_UOG1_USBSTS_HCH.
#define BM_USBC_UOG1_USBSTS_HCH      (0x00001000)  //!< Bit mask for USBC_UOG1_USBSTS_HCH.

//! @brief Get value of USBC_UOG1_USBSTS_HCH from a register value.
#define BG_USBC_UOG1_USBSTS_HCH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_HCH) >> BP_USBC_UOG1_USBSTS_HCH)

//! @brief Format value for bitfield USBC_UOG1_USBSTS_HCH.
#define BF_USBC_UOG1_USBSTS_HCH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBSTS_HCH) & BM_USBC_UOG1_USBSTS_HCH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HCH field to a new value.
#define BW_USBC_UOG1_USBSTS_HCH(v)   (HW_USBC_UOG1_USBSTS_WR((HW_USBC_UOG1_USBSTS_RD() & ~BM_USBC_UOG1_USBSTS_HCH) | BF_USBC_UOG1_USBSTS_HCH(v)))
#endif

/* --- Register HW_USBC_UOG1_USBSTS, field RCL[13] (RW)
 *
 * Reclamation - Read Only. This is a read-only status bit used to detect an empty asynchronous
 * schedule. Only used in the host operation mode.
 */

#define BP_USBC_UOG1_USBSTS_RCL      (13)      //!< Bit position for USBC_UOG1_USBSTS_RCL.
#define BM_USBC_UOG1_USBSTS_RCL      (0x00002000)  //!< Bit mask for USBC_UOG1_USBSTS_RCL.

//! @brief Get value of USBC_UOG1_USBSTS_RCL from a register value.
#define BG_USBC_UOG1_USBSTS_RCL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_RCL) >> BP_USBC_UOG1_USBSTS_RCL)

//! @brief Format value for bitfield USBC_UOG1_USBSTS_RCL.
#define BF_USBC_UOG1_USBSTS_RCL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBSTS_RCL) & BM_USBC_UOG1_USBSTS_RCL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RCL field to a new value.
#define BW_USBC_UOG1_USBSTS_RCL(v)   (HW_USBC_UOG1_USBSTS_WR((HW_USBC_UOG1_USBSTS_RD() & ~BM_USBC_UOG1_USBSTS_RCL) | BF_USBC_UOG1_USBSTS_RCL(v)))
#endif

/* --- Register HW_USBC_UOG1_USBSTS, field PS[14] (RW)
 *
 * Periodic Schedule Status - Read Only. This bit reports the current real status of the Periodic
 * Schedule. When set to zero the periodic schedule is disabled, and if set to one the status is
 * enabled. The Host Controller is not required to immediately disable or enable the Periodic
 * Schedule when software transitions the Periodic Schedule Enable bit in the USBCMD register. When
 * this bit and the Periodic Schedule Enable bit are the same value, the Periodic Schedule is either
 * enabled (1) or disabled (0). Only used in the host operation mode.
 */

#define BP_USBC_UOG1_USBSTS_PS      (14)      //!< Bit position for USBC_UOG1_USBSTS_PS.
#define BM_USBC_UOG1_USBSTS_PS      (0x00004000)  //!< Bit mask for USBC_UOG1_USBSTS_PS.

//! @brief Get value of USBC_UOG1_USBSTS_PS from a register value.
#define BG_USBC_UOG1_USBSTS_PS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_PS) >> BP_USBC_UOG1_USBSTS_PS)

//! @brief Format value for bitfield USBC_UOG1_USBSTS_PS.
#define BF_USBC_UOG1_USBSTS_PS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBSTS_PS) & BM_USBC_UOG1_USBSTS_PS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PS field to a new value.
#define BW_USBC_UOG1_USBSTS_PS(v)   (HW_USBC_UOG1_USBSTS_WR((HW_USBC_UOG1_USBSTS_RD() & ~BM_USBC_UOG1_USBSTS_PS) | BF_USBC_UOG1_USBSTS_PS(v)))
#endif

/* --- Register HW_USBC_UOG1_USBSTS, field AS[15] (RW)
 *
 * Asynchronous Schedule Status - Read Only. This bit reports the current real status of the
 * Asynchronous Schedule. When set to zero the asynchronous schedule status is disabled and if set
 * to one the status is enabled. The Host Controller is not required to immediately disable or
 * enable the Asynchronous Schedule when software transitions the Asynchronous Schedule Enable bit
 * in the USBCMD register. When this bit and the Asynchronous Schedule Enable bit are the same
 * value, the Asynchronous Schedule is either enabled (1) or disabled (0). Only used in the host
 * operation mode.
 */

#define BP_USBC_UOG1_USBSTS_AS      (15)      //!< Bit position for USBC_UOG1_USBSTS_AS.
#define BM_USBC_UOG1_USBSTS_AS      (0x00008000)  //!< Bit mask for USBC_UOG1_USBSTS_AS.

//! @brief Get value of USBC_UOG1_USBSTS_AS from a register value.
#define BG_USBC_UOG1_USBSTS_AS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_AS) >> BP_USBC_UOG1_USBSTS_AS)

//! @brief Format value for bitfield USBC_UOG1_USBSTS_AS.
#define BF_USBC_UOG1_USBSTS_AS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBSTS_AS) & BM_USBC_UOG1_USBSTS_AS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AS field to a new value.
#define BW_USBC_UOG1_USBSTS_AS(v)   (HW_USBC_UOG1_USBSTS_WR((HW_USBC_UOG1_USBSTS_RD() & ~BM_USBC_UOG1_USBSTS_AS) | BF_USBC_UOG1_USBSTS_AS(v)))
#endif

/* --- Register HW_USBC_UOG1_USBSTS, field NAKI[16] (RO)
 *
 * NAK Interrupt Bit--RO. This bit is set by hardware when for a particular endpoint both the TX/RX
 * Endpoint NAK bit and corresponding TX/RX Endpoint NAK Enable bit are set. This bit is
 * automatically cleared by hardware when all Enabled TX/RX Endpoint NAK bits are cleared.
 */

#define BP_USBC_UOG1_USBSTS_NAKI      (16)      //!< Bit position for USBC_UOG1_USBSTS_NAKI.
#define BM_USBC_UOG1_USBSTS_NAKI      (0x00010000)  //!< Bit mask for USBC_UOG1_USBSTS_NAKI.

//! @brief Get value of USBC_UOG1_USBSTS_NAKI from a register value.
#define BG_USBC_UOG1_USBSTS_NAKI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_NAKI) >> BP_USBC_UOG1_USBSTS_NAKI)

/* --- Register HW_USBC_UOG1_USBSTS, field TI0[24] (RW)
 *
 * General Purpose Timer Interrupt 0(GPTINT0)--R/WC. This bit is set when the counter in the
 * GPTIMER0CTRL register transitions to zero, writing a one to this bit clears it.
 */

#define BP_USBC_UOG1_USBSTS_TI0      (24)      //!< Bit position for USBC_UOG1_USBSTS_TI0.
#define BM_USBC_UOG1_USBSTS_TI0      (0x01000000)  //!< Bit mask for USBC_UOG1_USBSTS_TI0.

//! @brief Get value of USBC_UOG1_USBSTS_TI0 from a register value.
#define BG_USBC_UOG1_USBSTS_TI0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_TI0) >> BP_USBC_UOG1_USBSTS_TI0)

//! @brief Format value for bitfield USBC_UOG1_USBSTS_TI0.
#define BF_USBC_UOG1_USBSTS_TI0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBSTS_TI0) & BM_USBC_UOG1_USBSTS_TI0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TI0 field to a new value.
#define BW_USBC_UOG1_USBSTS_TI0(v)   (HW_USBC_UOG1_USBSTS_WR((HW_USBC_UOG1_USBSTS_RD() & ~BM_USBC_UOG1_USBSTS_TI0) | BF_USBC_UOG1_USBSTS_TI0(v)))
#endif

/* --- Register HW_USBC_UOG1_USBSTS, field TI1[25] (RW)
 *
 * General Purpose Timer Interrupt 1(GPTINT1)--R/WC. This bit is set when the counter in the
 * GPTIMER1CTRL register transitions to zero, writing a one to this bit will clear it.
 */

#define BP_USBC_UOG1_USBSTS_TI1      (25)      //!< Bit position for USBC_UOG1_USBSTS_TI1.
#define BM_USBC_UOG1_USBSTS_TI1      (0x02000000)  //!< Bit mask for USBC_UOG1_USBSTS_TI1.

//! @brief Get value of USBC_UOG1_USBSTS_TI1 from a register value.
#define BG_USBC_UOG1_USBSTS_TI1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBSTS_TI1) >> BP_USBC_UOG1_USBSTS_TI1)

//! @brief Format value for bitfield USBC_UOG1_USBSTS_TI1.
#define BF_USBC_UOG1_USBSTS_TI1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBSTS_TI1) & BM_USBC_UOG1_USBSTS_TI1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TI1 field to a new value.
#define BW_USBC_UOG1_USBSTS_TI1(v)   (HW_USBC_UOG1_USBSTS_WR((HW_USBC_UOG1_USBSTS_RD() & ~BM_USBC_UOG1_USBSTS_TI1) | BF_USBC_UOG1_USBSTS_TI1(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_USBINTR - Interrupt Enable Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_USBINTR - Interrupt Enable Register (RW)
 *
 * Reset value: 0x00000000
 *
 * The interrupts to software are enabled with this register. An interrupt is generated when a bit
 * is set and the corresponding interrupt source is active. The USB Status register (n_USBSTS) still
 * shows interrupt sources even if they are disabled by the n_USBINTR register, allowing polling of
 * interrupt events by the software.
 */
typedef union _hw_usbc_uog1_usbintr
{
    reg32_t U;
    struct _hw_usbc_uog1_usbintr_bitfields
    {
        unsigned UE : 1; //!< [0] USB Interrupt Enalbe When this bit is one and the UI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned UEE : 1; //!< [1] USB Error Interrupt Enable When this bit is one and the UEI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned PCE : 1; //!< [2] Port Change Detect Interrupt Enable When this bit is one and the PCI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned FRE : 1; //!< [3] Frame List Rollover Interrupt Enable When this bit is one and the FRI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned SEE : 1; //!< [4] System Error Interrupt Enable When this bit is one and the SEI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned AAE : 1; //!< [5] Async Advance Interrupt Enable When this bit is one and the AAI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned URE : 1; //!< [6] USB Reset Interrupt Enable When this bit is one and the URI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned SRE : 1; //!< [7] SOF Received Interrupt Enable When this bit is one and the SRI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned SLE : 1; //!< [8] Sleep Interrupt Enable When this bit is one and the SLI bit in n_n_USBSTS register is a one the controller will issue an interrupt.
        unsigned RESERVED0 : 1; //!< [9] Reserved
        unsigned ULPIE : 1; //!< [10] ULPI Interrupt Enable When this bit is one and the UPLII bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned RESERVED1 : 5; //!< [15:11] These bits are reserved and should be set to zero.
        unsigned NAKE : 1; //!< [16] NAK Interrupt Enable When this bit is one and the NAKI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned RESERVED2 : 1; //!< [17] Reserved
        unsigned UAIE : 1; //!< [18] USB Host Asynchronous Interrupt Enable When this bit is one, and the UAI bit in the n_USBSTS register is one, host controller will issue an interrupt at the next interrupt threshold.
        unsigned UPIE : 1; //!< [19] USB Host Periodic Interrupt Enable When this bit is one, and the UPI bit in the n_USBSTS register is one, host controller will issue an interrupt at the next interrupt threshold.
        unsigned RESERVED3 : 4; //!< [23:20] Reserved
        unsigned TIE0 : 1; //!< [24] General Purpose Timer #0 Interrupt Enable When this bit is one and the TI0 bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned TIE1 : 1; //!< [25] General Purpose Timer #1 Interrupt Enable When this bit is one and the TI1 bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned RESERVED4 : 6; //!< [31:26] Reserved
    } B;
} hw_usbc_uog1_usbintr_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_USBINTR register
 */
#define HW_USBC_UOG1_USBINTR_ADDR      (REGS_USBC_BASE + 0x148)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_USBINTR           (*(volatile hw_usbc_uog1_usbintr_t *) HW_USBC_UOG1_USBINTR_ADDR)
#define HW_USBC_UOG1_USBINTR_RD()      (HW_USBC_UOG1_USBINTR.U)
#define HW_USBC_UOG1_USBINTR_WR(v)     (HW_USBC_UOG1_USBINTR.U = (v))
#define HW_USBC_UOG1_USBINTR_SET(v)    (HW_USBC_UOG1_USBINTR_WR(HW_USBC_UOG1_USBINTR_RD() |  (v)))
#define HW_USBC_UOG1_USBINTR_CLR(v)    (HW_USBC_UOG1_USBINTR_WR(HW_USBC_UOG1_USBINTR_RD() & ~(v)))
#define HW_USBC_UOG1_USBINTR_TOG(v)    (HW_USBC_UOG1_USBINTR_WR(HW_USBC_UOG1_USBINTR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_USBINTR bitfields
 */

/* --- Register HW_USBC_UOG1_USBINTR, field UE[0] (RW)
 *
 * USB Interrupt Enalbe When this bit is one and the UI bit in n_USBSTS register is a one the
 * controller will issue an interrupt.
 */

#define BP_USBC_UOG1_USBINTR_UE      (0)      //!< Bit position for USBC_UOG1_USBINTR_UE.
#define BM_USBC_UOG1_USBINTR_UE      (0x00000001)  //!< Bit mask for USBC_UOG1_USBINTR_UE.

//! @brief Get value of USBC_UOG1_USBINTR_UE from a register value.
#define BG_USBC_UOG1_USBINTR_UE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBINTR_UE) >> BP_USBC_UOG1_USBINTR_UE)

//! @brief Format value for bitfield USBC_UOG1_USBINTR_UE.
#define BF_USBC_UOG1_USBINTR_UE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBINTR_UE) & BM_USBC_UOG1_USBINTR_UE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UE field to a new value.
#define BW_USBC_UOG1_USBINTR_UE(v)   (HW_USBC_UOG1_USBINTR_WR((HW_USBC_UOG1_USBINTR_RD() & ~BM_USBC_UOG1_USBINTR_UE) | BF_USBC_UOG1_USBINTR_UE(v)))
#endif

/* --- Register HW_USBC_UOG1_USBINTR, field UEE[1] (RW)
 *
 * USB Error Interrupt Enable When this bit is one and the UEI bit in n_USBSTS register is a one the
 * controller will issue an interrupt.
 */

#define BP_USBC_UOG1_USBINTR_UEE      (1)      //!< Bit position for USBC_UOG1_USBINTR_UEE.
#define BM_USBC_UOG1_USBINTR_UEE      (0x00000002)  //!< Bit mask for USBC_UOG1_USBINTR_UEE.

//! @brief Get value of USBC_UOG1_USBINTR_UEE from a register value.
#define BG_USBC_UOG1_USBINTR_UEE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBINTR_UEE) >> BP_USBC_UOG1_USBINTR_UEE)

//! @brief Format value for bitfield USBC_UOG1_USBINTR_UEE.
#define BF_USBC_UOG1_USBINTR_UEE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBINTR_UEE) & BM_USBC_UOG1_USBINTR_UEE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UEE field to a new value.
#define BW_USBC_UOG1_USBINTR_UEE(v)   (HW_USBC_UOG1_USBINTR_WR((HW_USBC_UOG1_USBINTR_RD() & ~BM_USBC_UOG1_USBINTR_UEE) | BF_USBC_UOG1_USBINTR_UEE(v)))
#endif

/* --- Register HW_USBC_UOG1_USBINTR, field PCE[2] (RW)
 *
 * Port Change Detect Interrupt Enable When this bit is one and the PCI bit in n_USBSTS register is
 * a one the controller will issue an interrupt.
 */

#define BP_USBC_UOG1_USBINTR_PCE      (2)      //!< Bit position for USBC_UOG1_USBINTR_PCE.
#define BM_USBC_UOG1_USBINTR_PCE      (0x00000004)  //!< Bit mask for USBC_UOG1_USBINTR_PCE.

//! @brief Get value of USBC_UOG1_USBINTR_PCE from a register value.
#define BG_USBC_UOG1_USBINTR_PCE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBINTR_PCE) >> BP_USBC_UOG1_USBINTR_PCE)

//! @brief Format value for bitfield USBC_UOG1_USBINTR_PCE.
#define BF_USBC_UOG1_USBINTR_PCE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBINTR_PCE) & BM_USBC_UOG1_USBINTR_PCE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PCE field to a new value.
#define BW_USBC_UOG1_USBINTR_PCE(v)   (HW_USBC_UOG1_USBINTR_WR((HW_USBC_UOG1_USBINTR_RD() & ~BM_USBC_UOG1_USBINTR_PCE) | BF_USBC_UOG1_USBINTR_PCE(v)))
#endif

/* --- Register HW_USBC_UOG1_USBINTR, field FRE[3] (RW)
 *
 * Frame List Rollover Interrupt Enable When this bit is one and the FRI bit in n_USBSTS register is
 * a one the controller will issue an interrupt. Only used in host operation mode.
 */

#define BP_USBC_UOG1_USBINTR_FRE      (3)      //!< Bit position for USBC_UOG1_USBINTR_FRE.
#define BM_USBC_UOG1_USBINTR_FRE      (0x00000008)  //!< Bit mask for USBC_UOG1_USBINTR_FRE.

//! @brief Get value of USBC_UOG1_USBINTR_FRE from a register value.
#define BG_USBC_UOG1_USBINTR_FRE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBINTR_FRE) >> BP_USBC_UOG1_USBINTR_FRE)

//! @brief Format value for bitfield USBC_UOG1_USBINTR_FRE.
#define BF_USBC_UOG1_USBINTR_FRE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBINTR_FRE) & BM_USBC_UOG1_USBINTR_FRE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FRE field to a new value.
#define BW_USBC_UOG1_USBINTR_FRE(v)   (HW_USBC_UOG1_USBINTR_WR((HW_USBC_UOG1_USBINTR_RD() & ~BM_USBC_UOG1_USBINTR_FRE) | BF_USBC_UOG1_USBINTR_FRE(v)))
#endif

/* --- Register HW_USBC_UOG1_USBINTR, field SEE[4] (RW)
 *
 * System Error Interrupt Enable When this bit is one and the SEI bit in n_USBSTS register is a one
 * the controller will issue an interrupt. Only used in host operation mode.
 */

#define BP_USBC_UOG1_USBINTR_SEE      (4)      //!< Bit position for USBC_UOG1_USBINTR_SEE.
#define BM_USBC_UOG1_USBINTR_SEE      (0x00000010)  //!< Bit mask for USBC_UOG1_USBINTR_SEE.

//! @brief Get value of USBC_UOG1_USBINTR_SEE from a register value.
#define BG_USBC_UOG1_USBINTR_SEE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBINTR_SEE) >> BP_USBC_UOG1_USBINTR_SEE)

//! @brief Format value for bitfield USBC_UOG1_USBINTR_SEE.
#define BF_USBC_UOG1_USBINTR_SEE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBINTR_SEE) & BM_USBC_UOG1_USBINTR_SEE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SEE field to a new value.
#define BW_USBC_UOG1_USBINTR_SEE(v)   (HW_USBC_UOG1_USBINTR_WR((HW_USBC_UOG1_USBINTR_RD() & ~BM_USBC_UOG1_USBINTR_SEE) | BF_USBC_UOG1_USBINTR_SEE(v)))
#endif

/* --- Register HW_USBC_UOG1_USBINTR, field AAE[5] (RW)
 *
 * Async Advance Interrupt Enable When this bit is one and the AAI bit in n_USBSTS register is a one
 * the controller will issue an interrupt. Only used in host operation mode.
 */

#define BP_USBC_UOG1_USBINTR_AAE      (5)      //!< Bit position for USBC_UOG1_USBINTR_AAE.
#define BM_USBC_UOG1_USBINTR_AAE      (0x00000020)  //!< Bit mask for USBC_UOG1_USBINTR_AAE.

//! @brief Get value of USBC_UOG1_USBINTR_AAE from a register value.
#define BG_USBC_UOG1_USBINTR_AAE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBINTR_AAE) >> BP_USBC_UOG1_USBINTR_AAE)

//! @brief Format value for bitfield USBC_UOG1_USBINTR_AAE.
#define BF_USBC_UOG1_USBINTR_AAE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBINTR_AAE) & BM_USBC_UOG1_USBINTR_AAE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AAE field to a new value.
#define BW_USBC_UOG1_USBINTR_AAE(v)   (HW_USBC_UOG1_USBINTR_WR((HW_USBC_UOG1_USBINTR_RD() & ~BM_USBC_UOG1_USBINTR_AAE) | BF_USBC_UOG1_USBINTR_AAE(v)))
#endif

/* --- Register HW_USBC_UOG1_USBINTR, field URE[6] (RW)
 *
 * USB Reset Interrupt Enable When this bit is one and the URI bit in n_USBSTS register is a one the
 * controller will issue an interrupt. Only used in device operation mode.
 */

#define BP_USBC_UOG1_USBINTR_URE      (6)      //!< Bit position for USBC_UOG1_USBINTR_URE.
#define BM_USBC_UOG1_USBINTR_URE      (0x00000040)  //!< Bit mask for USBC_UOG1_USBINTR_URE.

//! @brief Get value of USBC_UOG1_USBINTR_URE from a register value.
#define BG_USBC_UOG1_USBINTR_URE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBINTR_URE) >> BP_USBC_UOG1_USBINTR_URE)

//! @brief Format value for bitfield USBC_UOG1_USBINTR_URE.
#define BF_USBC_UOG1_USBINTR_URE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBINTR_URE) & BM_USBC_UOG1_USBINTR_URE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the URE field to a new value.
#define BW_USBC_UOG1_USBINTR_URE(v)   (HW_USBC_UOG1_USBINTR_WR((HW_USBC_UOG1_USBINTR_RD() & ~BM_USBC_UOG1_USBINTR_URE) | BF_USBC_UOG1_USBINTR_URE(v)))
#endif

/* --- Register HW_USBC_UOG1_USBINTR, field SRE[7] (RW)
 *
 * SOF Received Interrupt Enable When this bit is one and the SRI bit in n_USBSTS register is a one
 * the controller will issue an interrupt.
 */

#define BP_USBC_UOG1_USBINTR_SRE      (7)      //!< Bit position for USBC_UOG1_USBINTR_SRE.
#define BM_USBC_UOG1_USBINTR_SRE      (0x00000080)  //!< Bit mask for USBC_UOG1_USBINTR_SRE.

//! @brief Get value of USBC_UOG1_USBINTR_SRE from a register value.
#define BG_USBC_UOG1_USBINTR_SRE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBINTR_SRE) >> BP_USBC_UOG1_USBINTR_SRE)

//! @brief Format value for bitfield USBC_UOG1_USBINTR_SRE.
#define BF_USBC_UOG1_USBINTR_SRE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBINTR_SRE) & BM_USBC_UOG1_USBINTR_SRE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SRE field to a new value.
#define BW_USBC_UOG1_USBINTR_SRE(v)   (HW_USBC_UOG1_USBINTR_WR((HW_USBC_UOG1_USBINTR_RD() & ~BM_USBC_UOG1_USBINTR_SRE) | BF_USBC_UOG1_USBINTR_SRE(v)))
#endif

/* --- Register HW_USBC_UOG1_USBINTR, field SLE[8] (RW)
 *
 * Sleep Interrupt Enable When this bit is one and the SLI bit in n_n_USBSTS register is a one the
 * controller will issue an interrupt. Only used in device operation mode.
 */

#define BP_USBC_UOG1_USBINTR_SLE      (8)      //!< Bit position for USBC_UOG1_USBINTR_SLE.
#define BM_USBC_UOG1_USBINTR_SLE      (0x00000100)  //!< Bit mask for USBC_UOG1_USBINTR_SLE.

//! @brief Get value of USBC_UOG1_USBINTR_SLE from a register value.
#define BG_USBC_UOG1_USBINTR_SLE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBINTR_SLE) >> BP_USBC_UOG1_USBINTR_SLE)

//! @brief Format value for bitfield USBC_UOG1_USBINTR_SLE.
#define BF_USBC_UOG1_USBINTR_SLE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBINTR_SLE) & BM_USBC_UOG1_USBINTR_SLE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SLE field to a new value.
#define BW_USBC_UOG1_USBINTR_SLE(v)   (HW_USBC_UOG1_USBINTR_WR((HW_USBC_UOG1_USBINTR_RD() & ~BM_USBC_UOG1_USBINTR_SLE) | BF_USBC_UOG1_USBINTR_SLE(v)))
#endif

/* --- Register HW_USBC_UOG1_USBINTR, field ULPIE[10] (RW)
 *
 * ULPI Interrupt Enable When this bit is one and the UPLII bit in n_USBSTS register is a one the
 * controller will issue an interrupt. This bit is usable only if the controller support UPLI
 * interface mode.
 */

#define BP_USBC_UOG1_USBINTR_ULPIE      (10)      //!< Bit position for USBC_UOG1_USBINTR_ULPIE.
#define BM_USBC_UOG1_USBINTR_ULPIE      (0x00000400)  //!< Bit mask for USBC_UOG1_USBINTR_ULPIE.

//! @brief Get value of USBC_UOG1_USBINTR_ULPIE from a register value.
#define BG_USBC_UOG1_USBINTR_ULPIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBINTR_ULPIE) >> BP_USBC_UOG1_USBINTR_ULPIE)

//! @brief Format value for bitfield USBC_UOG1_USBINTR_ULPIE.
#define BF_USBC_UOG1_USBINTR_ULPIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBINTR_ULPIE) & BM_USBC_UOG1_USBINTR_ULPIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ULPIE field to a new value.
#define BW_USBC_UOG1_USBINTR_ULPIE(v)   (HW_USBC_UOG1_USBINTR_WR((HW_USBC_UOG1_USBINTR_RD() & ~BM_USBC_UOG1_USBINTR_ULPIE) | BF_USBC_UOG1_USBINTR_ULPIE(v)))
#endif

/* --- Register HW_USBC_UOG1_USBINTR, field NAKE[16] (RW)
 *
 * NAK Interrupt Enable When this bit is one and the NAKI bit in n_USBSTS register is a one the
 * controller will issue an interrupt.
 */

#define BP_USBC_UOG1_USBINTR_NAKE      (16)      //!< Bit position for USBC_UOG1_USBINTR_NAKE.
#define BM_USBC_UOG1_USBINTR_NAKE      (0x00010000)  //!< Bit mask for USBC_UOG1_USBINTR_NAKE.

//! @brief Get value of USBC_UOG1_USBINTR_NAKE from a register value.
#define BG_USBC_UOG1_USBINTR_NAKE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBINTR_NAKE) >> BP_USBC_UOG1_USBINTR_NAKE)

//! @brief Format value for bitfield USBC_UOG1_USBINTR_NAKE.
#define BF_USBC_UOG1_USBINTR_NAKE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBINTR_NAKE) & BM_USBC_UOG1_USBINTR_NAKE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the NAKE field to a new value.
#define BW_USBC_UOG1_USBINTR_NAKE(v)   (HW_USBC_UOG1_USBINTR_WR((HW_USBC_UOG1_USBINTR_RD() & ~BM_USBC_UOG1_USBINTR_NAKE) | BF_USBC_UOG1_USBINTR_NAKE(v)))
#endif

/* --- Register HW_USBC_UOG1_USBINTR, field UAIE[18] (RW)
 *
 * USB Host Asynchronous Interrupt Enable When this bit is one, and the UAI bit in the n_USBSTS
 * register is one, host controller will issue an interrupt at the next interrupt threshold.
 */

#define BP_USBC_UOG1_USBINTR_UAIE      (18)      //!< Bit position for USBC_UOG1_USBINTR_UAIE.
#define BM_USBC_UOG1_USBINTR_UAIE      (0x00040000)  //!< Bit mask for USBC_UOG1_USBINTR_UAIE.

//! @brief Get value of USBC_UOG1_USBINTR_UAIE from a register value.
#define BG_USBC_UOG1_USBINTR_UAIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBINTR_UAIE) >> BP_USBC_UOG1_USBINTR_UAIE)

//! @brief Format value for bitfield USBC_UOG1_USBINTR_UAIE.
#define BF_USBC_UOG1_USBINTR_UAIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBINTR_UAIE) & BM_USBC_UOG1_USBINTR_UAIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UAIE field to a new value.
#define BW_USBC_UOG1_USBINTR_UAIE(v)   (HW_USBC_UOG1_USBINTR_WR((HW_USBC_UOG1_USBINTR_RD() & ~BM_USBC_UOG1_USBINTR_UAIE) | BF_USBC_UOG1_USBINTR_UAIE(v)))
#endif

/* --- Register HW_USBC_UOG1_USBINTR, field UPIE[19] (RW)
 *
 * USB Host Periodic Interrupt Enable When this bit is one, and the UPI bit in the n_USBSTS register
 * is one, host controller will issue an interrupt at the next interrupt threshold.
 */

#define BP_USBC_UOG1_USBINTR_UPIE      (19)      //!< Bit position for USBC_UOG1_USBINTR_UPIE.
#define BM_USBC_UOG1_USBINTR_UPIE      (0x00080000)  //!< Bit mask for USBC_UOG1_USBINTR_UPIE.

//! @brief Get value of USBC_UOG1_USBINTR_UPIE from a register value.
#define BG_USBC_UOG1_USBINTR_UPIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBINTR_UPIE) >> BP_USBC_UOG1_USBINTR_UPIE)

//! @brief Format value for bitfield USBC_UOG1_USBINTR_UPIE.
#define BF_USBC_UOG1_USBINTR_UPIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBINTR_UPIE) & BM_USBC_UOG1_USBINTR_UPIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UPIE field to a new value.
#define BW_USBC_UOG1_USBINTR_UPIE(v)   (HW_USBC_UOG1_USBINTR_WR((HW_USBC_UOG1_USBINTR_RD() & ~BM_USBC_UOG1_USBINTR_UPIE) | BF_USBC_UOG1_USBINTR_UPIE(v)))
#endif

/* --- Register HW_USBC_UOG1_USBINTR, field TIE0[24] (RW)
 *
 * General Purpose Timer #0 Interrupt Enable When this bit is one and the TI0 bit in n_USBSTS
 * register is a one the controller will issue an interrupt.
 */

#define BP_USBC_UOG1_USBINTR_TIE0      (24)      //!< Bit position for USBC_UOG1_USBINTR_TIE0.
#define BM_USBC_UOG1_USBINTR_TIE0      (0x01000000)  //!< Bit mask for USBC_UOG1_USBINTR_TIE0.

//! @brief Get value of USBC_UOG1_USBINTR_TIE0 from a register value.
#define BG_USBC_UOG1_USBINTR_TIE0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBINTR_TIE0) >> BP_USBC_UOG1_USBINTR_TIE0)

//! @brief Format value for bitfield USBC_UOG1_USBINTR_TIE0.
#define BF_USBC_UOG1_USBINTR_TIE0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBINTR_TIE0) & BM_USBC_UOG1_USBINTR_TIE0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TIE0 field to a new value.
#define BW_USBC_UOG1_USBINTR_TIE0(v)   (HW_USBC_UOG1_USBINTR_WR((HW_USBC_UOG1_USBINTR_RD() & ~BM_USBC_UOG1_USBINTR_TIE0) | BF_USBC_UOG1_USBINTR_TIE0(v)))
#endif

/* --- Register HW_USBC_UOG1_USBINTR, field TIE1[25] (RW)
 *
 * General Purpose Timer #1 Interrupt Enable When this bit is one and the TI1 bit in n_USBSTS
 * register is a one the controller will issue an interrupt.
 */

#define BP_USBC_UOG1_USBINTR_TIE1      (25)      //!< Bit position for USBC_UOG1_USBINTR_TIE1.
#define BM_USBC_UOG1_USBINTR_TIE1      (0x02000000)  //!< Bit mask for USBC_UOG1_USBINTR_TIE1.

//! @brief Get value of USBC_UOG1_USBINTR_TIE1 from a register value.
#define BG_USBC_UOG1_USBINTR_TIE1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBINTR_TIE1) >> BP_USBC_UOG1_USBINTR_TIE1)

//! @brief Format value for bitfield USBC_UOG1_USBINTR_TIE1.
#define BF_USBC_UOG1_USBINTR_TIE1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBINTR_TIE1) & BM_USBC_UOG1_USBINTR_TIE1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TIE1 field to a new value.
#define BW_USBC_UOG1_USBINTR_TIE1(v)   (HW_USBC_UOG1_USBINTR_WR((HW_USBC_UOG1_USBINTR_RD() & ~BM_USBC_UOG1_USBINTR_TIE1) | BF_USBC_UOG1_USBINTR_TIE1(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_FRINDEX - USB Frame Index
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_FRINDEX - USB Frame Index (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is used by the host controller to index the periodic frame list. The register
 * updates every 125 microseconds (once each micro-frame). Bits [N: 3] are used to select a
 * particular entry in the Periodic Frame List during periodic schedule execution. The number of
 * bits used for the index depends on the size of the frame list as set by system software in the
 * Frame List Size field in the n_USBCMD register.  This register must be written as a DWord. Byte
 * writes produce-undefined results. This register cannot be written unless the Host Controller is
 * in the 'Halted' state as indicated by the HCHalted bit. A write to this register while the
 * Run/Stop hit is set to a one produces undefined results. Writes to this register also affect the
 * SOF value.  In device mode this register is read only and, the device controller updates the
 * FRINDEX [13:3] register from the frame number indicated by the SOF marker. Whenever a SOF is
 * received by the USB bus, FRINDEX [13:3] will be checked against the SOF marker. If FRINDEX [13:3]
 * is different from the SOF marker, FRINDEX [13:3] will be set to the SOF value and FRINDEX [2:0]
 * will be set to zero (that is, SOF for 1 ms frame). If FRINDEX [13:3] is equal to the SOF value,
 * FRINDEX [2:0] will be increment (that is, SOF for 125 us micro-frame.).
 */
typedef union _hw_usbc_uog1_frindex
{
    reg32_t U;
    struct _hw_usbc_uog1_frindex_bitfields
    {
        unsigned FRINDEX : 14; //!< [13:0] Frame Index.
        unsigned RESERVED0 : 18; //!< [31:14] Reserved
    } B;
} hw_usbc_uog1_frindex_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_FRINDEX register
 */
#define HW_USBC_UOG1_FRINDEX_ADDR      (REGS_USBC_BASE + 0x14c)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_FRINDEX           (*(volatile hw_usbc_uog1_frindex_t *) HW_USBC_UOG1_FRINDEX_ADDR)
#define HW_USBC_UOG1_FRINDEX_RD()      (HW_USBC_UOG1_FRINDEX.U)
#define HW_USBC_UOG1_FRINDEX_WR(v)     (HW_USBC_UOG1_FRINDEX.U = (v))
#define HW_USBC_UOG1_FRINDEX_SET(v)    (HW_USBC_UOG1_FRINDEX_WR(HW_USBC_UOG1_FRINDEX_RD() |  (v)))
#define HW_USBC_UOG1_FRINDEX_CLR(v)    (HW_USBC_UOG1_FRINDEX_WR(HW_USBC_UOG1_FRINDEX_RD() & ~(v)))
#define HW_USBC_UOG1_FRINDEX_TOG(v)    (HW_USBC_UOG1_FRINDEX_WR(HW_USBC_UOG1_FRINDEX_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_FRINDEX bitfields
 */

/* --- Register HW_USBC_UOG1_FRINDEX, field FRINDEX[13:0] (RW)
 *
 * Frame Index. The value, in this register, increments at the end of each time frame (micro-frame).
 * Bits [N: 3] are used for the Frame List current index. This means that each location of the frame
 * list is accessed 8 times (frames or micro-frames) before moving to the next index. The following
 * illustrates values of N based on the value of the Frame List Size field in the USBCMD register,
 * when used in host mode. USBCMD [Frame List Size] Number Elements N In device mode the value is
 * the current frame number of the last frame transmitted. It is not used as an index. In either
 * mode bits 2:0 indicate the current microframe.
 *
 * Values:
 * 000 - (1024) 12
 * 001 - (512) 11
 * 010 - (256) 10
 * 011 - (128) 9
 * 100 - (64) 8
 * 101 - (32) 7
 * 110 - (16) 6
 * 111 - (8) 5
 */

#define BP_USBC_UOG1_FRINDEX_FRINDEX      (0)      //!< Bit position for USBC_UOG1_FRINDEX_FRINDEX.
#define BM_USBC_UOG1_FRINDEX_FRINDEX      (0x00003fff)  //!< Bit mask for USBC_UOG1_FRINDEX_FRINDEX.

//! @brief Get value of USBC_UOG1_FRINDEX_FRINDEX from a register value.
#define BG_USBC_UOG1_FRINDEX_FRINDEX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_FRINDEX_FRINDEX) >> BP_USBC_UOG1_FRINDEX_FRINDEX)

//! @brief Format value for bitfield USBC_UOG1_FRINDEX_FRINDEX.
#define BF_USBC_UOG1_FRINDEX_FRINDEX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_FRINDEX_FRINDEX) & BM_USBC_UOG1_FRINDEX_FRINDEX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FRINDEX field to a new value.
#define BW_USBC_UOG1_FRINDEX_FRINDEX(v)   (HW_USBC_UOG1_FRINDEX_WR((HW_USBC_UOG1_FRINDEX_RD() & ~BM_USBC_UOG1_FRINDEX_FRINDEX) | BF_USBC_UOG1_FRINDEX_FRINDEX(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_PERIODICLISTBASE - Frame List Base Address
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_PERIODICLISTBASE - Frame List Base Address (RW)
 *
 * Reset value: 0x00000000
 *
 * Host Controller only  This 32-bit register contains the beginning address of the Periodic Frame
 * List in the system memory. HCD loads this register prior to starting the schedule execution by
 * the Host Controller. The memory structure referenced by this physical memory pointer is assumed
 * to be 4-Kbyte aligned. The contents of this register are combined with the Frame Index Register
 * (USB_n_FRINDEX) to enable the Host Controller to step through the Periodic Frame List in
 * sequence.
 */
typedef union _hw_usbc_uog1_periodiclistbase
{
    reg32_t U;
    struct _hw_usbc_uog1_periodiclistbase_bitfields
    {
        unsigned RESERVED0 : 12; //!< [11:0] Reserved
        unsigned BASEADR : 20; //!< [31:12] Base Address (Low).
    } B;
} hw_usbc_uog1_periodiclistbase_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_PERIODICLISTBASE register
 */
#define HW_USBC_UOG1_PERIODICLISTBASE_ADDR      (REGS_USBC_BASE + 0x154)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_PERIODICLISTBASE           (*(volatile hw_usbc_uog1_periodiclistbase_t *) HW_USBC_UOG1_PERIODICLISTBASE_ADDR)
#define HW_USBC_UOG1_PERIODICLISTBASE_RD()      (HW_USBC_UOG1_PERIODICLISTBASE.U)
#define HW_USBC_UOG1_PERIODICLISTBASE_WR(v)     (HW_USBC_UOG1_PERIODICLISTBASE.U = (v))
#define HW_USBC_UOG1_PERIODICLISTBASE_SET(v)    (HW_USBC_UOG1_PERIODICLISTBASE_WR(HW_USBC_UOG1_PERIODICLISTBASE_RD() |  (v)))
#define HW_USBC_UOG1_PERIODICLISTBASE_CLR(v)    (HW_USBC_UOG1_PERIODICLISTBASE_WR(HW_USBC_UOG1_PERIODICLISTBASE_RD() & ~(v)))
#define HW_USBC_UOG1_PERIODICLISTBASE_TOG(v)    (HW_USBC_UOG1_PERIODICLISTBASE_WR(HW_USBC_UOG1_PERIODICLISTBASE_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_PERIODICLISTBASE bitfields
 */

/* --- Register HW_USBC_UOG1_PERIODICLISTBASE, field BASEADR[31:12] (RW)
 *
 * Base Address (Low). These bits correspond to memory address signals [31:12], respectively. Only
 * used by the host controller.
 */

#define BP_USBC_UOG1_PERIODICLISTBASE_BASEADR      (12)      //!< Bit position for USBC_UOG1_PERIODICLISTBASE_BASEADR.
#define BM_USBC_UOG1_PERIODICLISTBASE_BASEADR      (0xfffff000)  //!< Bit mask for USBC_UOG1_PERIODICLISTBASE_BASEADR.

//! @brief Get value of USBC_UOG1_PERIODICLISTBASE_BASEADR from a register value.
#define BG_USBC_UOG1_PERIODICLISTBASE_BASEADR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PERIODICLISTBASE_BASEADR) >> BP_USBC_UOG1_PERIODICLISTBASE_BASEADR)

//! @brief Format value for bitfield USBC_UOG1_PERIODICLISTBASE_BASEADR.
#define BF_USBC_UOG1_PERIODICLISTBASE_BASEADR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PERIODICLISTBASE_BASEADR) & BM_USBC_UOG1_PERIODICLISTBASE_BASEADR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BASEADR field to a new value.
#define BW_USBC_UOG1_PERIODICLISTBASE_BASEADR(v)   (HW_USBC_UOG1_PERIODICLISTBASE_WR((HW_USBC_UOG1_PERIODICLISTBASE_RD() & ~BM_USBC_UOG1_PERIODICLISTBASE_BASEADR) | BF_USBC_UOG1_PERIODICLISTBASE_BASEADR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ASYNCLISTADDR - Next Asynch. Address
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ASYNCLISTADDR - Next Asynch. Address (RW)
 *
 * Reset value: 0x00000000
 *
 * Host Controller only  This 32-bit register contains the address of the next asynchronous queue
 * head to be executed by the host. Bits [4:0] of this register cannot be modified by the system
 * software and will always return a zero when read.
 */
typedef union _hw_usbc_uog1_asynclistaddr
{
    reg32_t U;
    struct _hw_usbc_uog1_asynclistaddr_bitfields
    {
        unsigned RESERVED0 : 5; //!< [4:0] Reserved
        unsigned ASYBASE : 27; //!< [31:5] Link Pointer Low (LPL).
    } B;
} hw_usbc_uog1_asynclistaddr_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ASYNCLISTADDR register
 */
#define HW_USBC_UOG1_ASYNCLISTADDR_ADDR      (REGS_USBC_BASE + 0x158)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ASYNCLISTADDR           (*(volatile hw_usbc_uog1_asynclistaddr_t *) HW_USBC_UOG1_ASYNCLISTADDR_ADDR)
#define HW_USBC_UOG1_ASYNCLISTADDR_RD()      (HW_USBC_UOG1_ASYNCLISTADDR.U)
#define HW_USBC_UOG1_ASYNCLISTADDR_WR(v)     (HW_USBC_UOG1_ASYNCLISTADDR.U = (v))
#define HW_USBC_UOG1_ASYNCLISTADDR_SET(v)    (HW_USBC_UOG1_ASYNCLISTADDR_WR(HW_USBC_UOG1_ASYNCLISTADDR_RD() |  (v)))
#define HW_USBC_UOG1_ASYNCLISTADDR_CLR(v)    (HW_USBC_UOG1_ASYNCLISTADDR_WR(HW_USBC_UOG1_ASYNCLISTADDR_RD() & ~(v)))
#define HW_USBC_UOG1_ASYNCLISTADDR_TOG(v)    (HW_USBC_UOG1_ASYNCLISTADDR_WR(HW_USBC_UOG1_ASYNCLISTADDR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_ASYNCLISTADDR bitfields
 */

/* --- Register HW_USBC_UOG1_ASYNCLISTADDR, field ASYBASE[31:5] (RW)
 *
 * Link Pointer Low (LPL). These bits correspond to memory address signals [31:5], respectively.
 * This field may only reference a Queue Head (QH). Only used by the host controller.
 */

#define BP_USBC_UOG1_ASYNCLISTADDR_ASYBASE      (5)      //!< Bit position for USBC_UOG1_ASYNCLISTADDR_ASYBASE.
#define BM_USBC_UOG1_ASYNCLISTADDR_ASYBASE      (0xffffffe0)  //!< Bit mask for USBC_UOG1_ASYNCLISTADDR_ASYBASE.

//! @brief Get value of USBC_UOG1_ASYNCLISTADDR_ASYBASE from a register value.
#define BG_USBC_UOG1_ASYNCLISTADDR_ASYBASE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ASYNCLISTADDR_ASYBASE) >> BP_USBC_UOG1_ASYNCLISTADDR_ASYBASE)

//! @brief Format value for bitfield USBC_UOG1_ASYNCLISTADDR_ASYBASE.
#define BF_USBC_UOG1_ASYNCLISTADDR_ASYBASE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ASYNCLISTADDR_ASYBASE) & BM_USBC_UOG1_ASYNCLISTADDR_ASYBASE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASYBASE field to a new value.
#define BW_USBC_UOG1_ASYNCLISTADDR_ASYBASE(v)   (HW_USBC_UOG1_ASYNCLISTADDR_WR((HW_USBC_UOG1_ASYNCLISTADDR_RD() & ~BM_USBC_UOG1_ASYNCLISTADDR_ASYBASE) | BF_USBC_UOG1_ASYNCLISTADDR_ASYBASE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_BURSTSIZE - Programmable Burst Size
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_BURSTSIZE - Programmable Burst Size (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is used to control the burst size used during data movement on the AHB master
 * interface. This register is ignored if AHBBRST bits in SBUSCFG register is non-zero value.
 */
typedef union _hw_usbc_uog1_burstsize
{
    reg32_t U;
    struct _hw_usbc_uog1_burstsize_bitfields
    {
        unsigned RXPBURST : 8; //!< [7:0] Programmable RX Burst Size.
        unsigned TXPBURST : 9; //!< [16:8] Programmable TX Burst Size.
        unsigned RESERVED0 : 15; //!< [31:17] Reserved
    } B;
} hw_usbc_uog1_burstsize_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_BURSTSIZE register
 */
#define HW_USBC_UOG1_BURSTSIZE_ADDR      (REGS_USBC_BASE + 0x160)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_BURSTSIZE           (*(volatile hw_usbc_uog1_burstsize_t *) HW_USBC_UOG1_BURSTSIZE_ADDR)
#define HW_USBC_UOG1_BURSTSIZE_RD()      (HW_USBC_UOG1_BURSTSIZE.U)
#define HW_USBC_UOG1_BURSTSIZE_WR(v)     (HW_USBC_UOG1_BURSTSIZE.U = (v))
#define HW_USBC_UOG1_BURSTSIZE_SET(v)    (HW_USBC_UOG1_BURSTSIZE_WR(HW_USBC_UOG1_BURSTSIZE_RD() |  (v)))
#define HW_USBC_UOG1_BURSTSIZE_CLR(v)    (HW_USBC_UOG1_BURSTSIZE_WR(HW_USBC_UOG1_BURSTSIZE_RD() & ~(v)))
#define HW_USBC_UOG1_BURSTSIZE_TOG(v)    (HW_USBC_UOG1_BURSTSIZE_WR(HW_USBC_UOG1_BURSTSIZE_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_BURSTSIZE bitfields
 */

/* --- Register HW_USBC_UOG1_BURSTSIZE, field RXPBURST[7:0] (RW)
 *
 * Programmable RX Burst Size. Default value is determined by TXBURST bits in n_HWRXBUF. This
 * register represents the maximum length of a the burst in 32-bit words while moving data from the
 * USB bus to system memory.
 */

#define BP_USBC_UOG1_BURSTSIZE_RXPBURST      (0)      //!< Bit position for USBC_UOG1_BURSTSIZE_RXPBURST.
#define BM_USBC_UOG1_BURSTSIZE_RXPBURST      (0x000000ff)  //!< Bit mask for USBC_UOG1_BURSTSIZE_RXPBURST.

//! @brief Get value of USBC_UOG1_BURSTSIZE_RXPBURST from a register value.
#define BG_USBC_UOG1_BURSTSIZE_RXPBURST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_BURSTSIZE_RXPBURST) >> BP_USBC_UOG1_BURSTSIZE_RXPBURST)

//! @brief Format value for bitfield USBC_UOG1_BURSTSIZE_RXPBURST.
#define BF_USBC_UOG1_BURSTSIZE_RXPBURST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_BURSTSIZE_RXPBURST) & BM_USBC_UOG1_BURSTSIZE_RXPBURST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXPBURST field to a new value.
#define BW_USBC_UOG1_BURSTSIZE_RXPBURST(v)   (HW_USBC_UOG1_BURSTSIZE_WR((HW_USBC_UOG1_BURSTSIZE_RD() & ~BM_USBC_UOG1_BURSTSIZE_RXPBURST) | BF_USBC_UOG1_BURSTSIZE_RXPBURST(v)))
#endif

/* --- Register HW_USBC_UOG1_BURSTSIZE, field TXPBURST[16:8] (RW)
 *
 * Programmable TX Burst Size. Default value is determined by TXBURST bits in n_HWTXBUF. This
 * register represents the maximum length of a the burst in 32-bit words while moving data from
 * system memory to the USB bus.
 */

#define BP_USBC_UOG1_BURSTSIZE_TXPBURST      (8)      //!< Bit position for USBC_UOG1_BURSTSIZE_TXPBURST.
#define BM_USBC_UOG1_BURSTSIZE_TXPBURST      (0x0001ff00)  //!< Bit mask for USBC_UOG1_BURSTSIZE_TXPBURST.

//! @brief Get value of USBC_UOG1_BURSTSIZE_TXPBURST from a register value.
#define BG_USBC_UOG1_BURSTSIZE_TXPBURST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_BURSTSIZE_TXPBURST) >> BP_USBC_UOG1_BURSTSIZE_TXPBURST)

//! @brief Format value for bitfield USBC_UOG1_BURSTSIZE_TXPBURST.
#define BF_USBC_UOG1_BURSTSIZE_TXPBURST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_BURSTSIZE_TXPBURST) & BM_USBC_UOG1_BURSTSIZE_TXPBURST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXPBURST field to a new value.
#define BW_USBC_UOG1_BURSTSIZE_TXPBURST(v)   (HW_USBC_UOG1_BURSTSIZE_WR((HW_USBC_UOG1_BURSTSIZE_RD() & ~BM_USBC_UOG1_BURSTSIZE_TXPBURST) | BF_USBC_UOG1_BURSTSIZE_TXPBURST(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_TXFILLTUNING - TX FIFO Fill Tuning
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_TXFILLTUNING - TX FIFO Fill Tuning (RW)
 *
 * Reset value: 0x00000808
 *
 * The fields in this register control performance tuning associated with how the host controller
 * posts data to the TX latency FIFO before moving the data onto the USB bus. The specific areas of
 * performance include the how much data to post into the FIFO and an estimate for how long that
 * operation should take in the target system.  Definitions:  T 0 = Standard packet overhead  T 1 =
 * Time to send data payload  T ff = Time to fetch packet into TX FIFO up to specified level.  T s =
 * Total Packet Flight Time (send-only) packet  T s = T 0 + T 1   T p = Total Packet Time (fetch and
 * send) packet  T p = T ff + T 0 + T 1   Upon discovery of a transmit (OUT/SETUP) packet in the
 * data structures, host controller checks to ensure T  p  remains before the end of the
 * [micro]frame. If so it proceeds to pre-fill the TX FIFO. If at anytime during the pre-fill
 * operation the time remaining the [micro]frame is < T  s  then the packet attempt ceases and the
 * packet is tried at a later time. Although this is not an error condition and the host controller
 * will eventually recover, a mark will be made the scheduler health counter to note the occurrence
 * of a "back-off" event. When a back-off event is detected, the partial packet fetched may need to
 * be discarded from the latency buffer to make room for periodic traffic that will begin after the
 * next SOF. Too many back-off events can waste bandwidth and power on the system bus and thus
 * should be minimized (not necessarily eliminated). Back-offs can be minimized with use of the
 * n_TSCHHEALTH ( T  ff ) described below.  The reset value could vary from instance to instance.
 * Please see the detail in bit field description and ignore reset value in summary table in this
 * case!
 */
typedef union _hw_usbc_uog1_txfilltuning
{
    reg32_t U;
    struct _hw_usbc_uog1_txfilltuning_bitfields
    {
        unsigned TXSCHOH : 8; //!< [7:0] Scheduler Overhead.
        unsigned TXSCHHEALTH : 5; //!< [12:8] Scheduler Health Counter.
        unsigned RESERVED0 : 3; //!< [15:13] Reserved
        unsigned TXFIFOTHRES : 6; //!< [21:16] FIFO Burst Threshold.
        unsigned RESERVED1 : 10; //!< [31:22] Reserved
    } B;
} hw_usbc_uog1_txfilltuning_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_TXFILLTUNING register
 */
#define HW_USBC_UOG1_TXFILLTUNING_ADDR      (REGS_USBC_BASE + 0x164)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_TXFILLTUNING           (*(volatile hw_usbc_uog1_txfilltuning_t *) HW_USBC_UOG1_TXFILLTUNING_ADDR)
#define HW_USBC_UOG1_TXFILLTUNING_RD()      (HW_USBC_UOG1_TXFILLTUNING.U)
#define HW_USBC_UOG1_TXFILLTUNING_WR(v)     (HW_USBC_UOG1_TXFILLTUNING.U = (v))
#define HW_USBC_UOG1_TXFILLTUNING_SET(v)    (HW_USBC_UOG1_TXFILLTUNING_WR(HW_USBC_UOG1_TXFILLTUNING_RD() |  (v)))
#define HW_USBC_UOG1_TXFILLTUNING_CLR(v)    (HW_USBC_UOG1_TXFILLTUNING_WR(HW_USBC_UOG1_TXFILLTUNING_RD() & ~(v)))
#define HW_USBC_UOG1_TXFILLTUNING_TOG(v)    (HW_USBC_UOG1_TXFILLTUNING_WR(HW_USBC_UOG1_TXFILLTUNING_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_TXFILLTUNING bitfields
 */

/* --- Register HW_USBC_UOG1_TXFILLTUNING, field TXSCHOH[7:0] (RW)
 *
 * Scheduler Overhead. (Read/Write) [Default = 0] This register adds an additional fixed offset to
 * the schedule time estimator described above as Tff. As an approximation, the value chosen for
 * this register should limit the number of back-off events captured in the TXSCHHEALTH to less than
 * 10 per second in a highly utilized bus. Choosing a value that is too high for this register is
 * not desired as it can needlessly reduce USB utilization. The time unit represented in this
 * register is 1.267us when a device is connected in High-Speed Mode. The time unit represented in
 * this register is 6.333us when a device is connected in Low/Full Speed Mode. Default value is
 * '08h' for OTG controller core, and '00h' for Host-only controller core.
 */

#define BP_USBC_UOG1_TXFILLTUNING_TXSCHOH      (0)      //!< Bit position for USBC_UOG1_TXFILLTUNING_TXSCHOH.
#define BM_USBC_UOG1_TXFILLTUNING_TXSCHOH      (0x000000ff)  //!< Bit mask for USBC_UOG1_TXFILLTUNING_TXSCHOH.

//! @brief Get value of USBC_UOG1_TXFILLTUNING_TXSCHOH from a register value.
#define BG_USBC_UOG1_TXFILLTUNING_TXSCHOH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_TXFILLTUNING_TXSCHOH) >> BP_USBC_UOG1_TXFILLTUNING_TXSCHOH)

//! @brief Format value for bitfield USBC_UOG1_TXFILLTUNING_TXSCHOH.
#define BF_USBC_UOG1_TXFILLTUNING_TXSCHOH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_TXFILLTUNING_TXSCHOH) & BM_USBC_UOG1_TXFILLTUNING_TXSCHOH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXSCHOH field to a new value.
#define BW_USBC_UOG1_TXFILLTUNING_TXSCHOH(v)   (HW_USBC_UOG1_TXFILLTUNING_WR((HW_USBC_UOG1_TXFILLTUNING_RD() & ~BM_USBC_UOG1_TXFILLTUNING_TXSCHOH) | BF_USBC_UOG1_TXFILLTUNING_TXSCHOH(v)))
#endif

/* --- Register HW_USBC_UOG1_TXFILLTUNING, field TXSCHHEALTH[12:8] (RW)
 *
 * Scheduler Health Counter. (Read/Write To Clear) This register increments when the host controller
 * fails to fill the TX latency FIFO to the level programmed by TXFIFOTHRES before running out of
 * time to send the packet before the next Start-Of-Frame. This health counter measures the number
 * of times this occurs to provide feedback to selecting a proper TXSCHOH. Writing to this register
 * will clear the counter and this counter will max. at 31. Default value is '08h' for OTG
 * controller core, and '00h' for Host-only controller core.
 */

#define BP_USBC_UOG1_TXFILLTUNING_TXSCHHEALTH      (8)      //!< Bit position for USBC_UOG1_TXFILLTUNING_TXSCHHEALTH.
#define BM_USBC_UOG1_TXFILLTUNING_TXSCHHEALTH      (0x00001f00)  //!< Bit mask for USBC_UOG1_TXFILLTUNING_TXSCHHEALTH.

//! @brief Get value of USBC_UOG1_TXFILLTUNING_TXSCHHEALTH from a register value.
#define BG_USBC_UOG1_TXFILLTUNING_TXSCHHEALTH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_TXFILLTUNING_TXSCHHEALTH) >> BP_USBC_UOG1_TXFILLTUNING_TXSCHHEALTH)

//! @brief Format value for bitfield USBC_UOG1_TXFILLTUNING_TXSCHHEALTH.
#define BF_USBC_UOG1_TXFILLTUNING_TXSCHHEALTH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_TXFILLTUNING_TXSCHHEALTH) & BM_USBC_UOG1_TXFILLTUNING_TXSCHHEALTH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXSCHHEALTH field to a new value.
#define BW_USBC_UOG1_TXFILLTUNING_TXSCHHEALTH(v)   (HW_USBC_UOG1_TXFILLTUNING_WR((HW_USBC_UOG1_TXFILLTUNING_RD() & ~BM_USBC_UOG1_TXFILLTUNING_TXSCHHEALTH) | BF_USBC_UOG1_TXFILLTUNING_TXSCHHEALTH(v)))
#endif

/* --- Register HW_USBC_UOG1_TXFILLTUNING, field TXFIFOTHRES[21:16] (RW)
 *
 * FIFO Burst Threshold. (Read/Write) This register controls the number of data bursts that are
 * posted to the TX latency FIFO in host mode before the packet begins on to the bus. The minimum
 * value is 2 and this value should be a low as possible to maximize USB performance. A higher value
 * can be used in systems with unpredictable latency and/or insufficient bandwidth where the FIFO
 * may underrun because the data transferred from the latency FIFO to USB occurs before it can be
 * replenished from system memory. This value is ignored if the Stream Disable bit in USB_n_USBMODE
 * register is set. Default value is '00h' for OTG controller core, and '02h' for Host-only
 * controller core.
 */

#define BP_USBC_UOG1_TXFILLTUNING_TXFIFOTHRES      (16)      //!< Bit position for USBC_UOG1_TXFILLTUNING_TXFIFOTHRES.
#define BM_USBC_UOG1_TXFILLTUNING_TXFIFOTHRES      (0x003f0000)  //!< Bit mask for USBC_UOG1_TXFILLTUNING_TXFIFOTHRES.

//! @brief Get value of USBC_UOG1_TXFILLTUNING_TXFIFOTHRES from a register value.
#define BG_USBC_UOG1_TXFILLTUNING_TXFIFOTHRES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_TXFILLTUNING_TXFIFOTHRES) >> BP_USBC_UOG1_TXFILLTUNING_TXFIFOTHRES)

//! @brief Format value for bitfield USBC_UOG1_TXFILLTUNING_TXFIFOTHRES.
#define BF_USBC_UOG1_TXFILLTUNING_TXFIFOTHRES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_TXFILLTUNING_TXFIFOTHRES) & BM_USBC_UOG1_TXFILLTUNING_TXFIFOTHRES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXFIFOTHRES field to a new value.
#define BW_USBC_UOG1_TXFILLTUNING_TXFIFOTHRES(v)   (HW_USBC_UOG1_TXFILLTUNING_WR((HW_USBC_UOG1_TXFILLTUNING_RD() & ~BM_USBC_UOG1_TXFILLTUNING_TXFIFOTHRES) | BF_USBC_UOG1_TXFILLTUNING_TXFIFOTHRES(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ENDPTNAK - Endpoint NAK
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ENDPTNAK - Endpoint NAK (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_usbc_uog1_endptnak
{
    reg32_t U;
    struct _hw_usbc_uog1_endptnak_bitfields
    {
        unsigned EPRN : 8; //!< [7:0] RX Endpoint NAK - R/WC.
        unsigned RESERVED0 : 8; //!< [15:8] Reserved
        unsigned EPTN : 8; //!< [23:16] TX Endpoint NAK - R/WC.
        unsigned RESERVED1 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_endptnak_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ENDPTNAK register
 */
#define HW_USBC_UOG1_ENDPTNAK_ADDR      (REGS_USBC_BASE + 0x178)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ENDPTNAK           (*(volatile hw_usbc_uog1_endptnak_t *) HW_USBC_UOG1_ENDPTNAK_ADDR)
#define HW_USBC_UOG1_ENDPTNAK_RD()      (HW_USBC_UOG1_ENDPTNAK.U)
#define HW_USBC_UOG1_ENDPTNAK_WR(v)     (HW_USBC_UOG1_ENDPTNAK.U = (v))
#define HW_USBC_UOG1_ENDPTNAK_SET(v)    (HW_USBC_UOG1_ENDPTNAK_WR(HW_USBC_UOG1_ENDPTNAK_RD() |  (v)))
#define HW_USBC_UOG1_ENDPTNAK_CLR(v)    (HW_USBC_UOG1_ENDPTNAK_WR(HW_USBC_UOG1_ENDPTNAK_RD() & ~(v)))
#define HW_USBC_UOG1_ENDPTNAK_TOG(v)    (HW_USBC_UOG1_ENDPTNAK_WR(HW_USBC_UOG1_ENDPTNAK_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_ENDPTNAK bitfields
 */

/* --- Register HW_USBC_UOG1_ENDPTNAK, field EPRN[7:0] (RW)
 *
 * RX Endpoint NAK - R/WC. Each RX endpoint has 1 bit in this field. The bit is set when the device
 * sends a NAK handshake on a received OUT or PING token for the corresponding endpoint. Bit [N] -
 * Endpoint #[N], N is 0-7
 */

#define BP_USBC_UOG1_ENDPTNAK_EPRN      (0)      //!< Bit position for USBC_UOG1_ENDPTNAK_EPRN.
#define BM_USBC_UOG1_ENDPTNAK_EPRN      (0x000000ff)  //!< Bit mask for USBC_UOG1_ENDPTNAK_EPRN.

//! @brief Get value of USBC_UOG1_ENDPTNAK_EPRN from a register value.
#define BG_USBC_UOG1_ENDPTNAK_EPRN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTNAK_EPRN) >> BP_USBC_UOG1_ENDPTNAK_EPRN)

//! @brief Format value for bitfield USBC_UOG1_ENDPTNAK_EPRN.
#define BF_USBC_UOG1_ENDPTNAK_EPRN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTNAK_EPRN) & BM_USBC_UOG1_ENDPTNAK_EPRN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EPRN field to a new value.
#define BW_USBC_UOG1_ENDPTNAK_EPRN(v)   (HW_USBC_UOG1_ENDPTNAK_WR((HW_USBC_UOG1_ENDPTNAK_RD() & ~BM_USBC_UOG1_ENDPTNAK_EPRN) | BF_USBC_UOG1_ENDPTNAK_EPRN(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTNAK, field EPTN[23:16] (RW)
 *
 * TX Endpoint NAK - R/WC. Each TX endpoint has 1 bit in this field. The bit is set when the device
 * sends a NAK handshake on a received IN token for the corresponding endpoint. Bit [N] - Endpoint
 * #[N], N is 0-7
 */

#define BP_USBC_UOG1_ENDPTNAK_EPTN      (16)      //!< Bit position for USBC_UOG1_ENDPTNAK_EPTN.
#define BM_USBC_UOG1_ENDPTNAK_EPTN      (0x00ff0000)  //!< Bit mask for USBC_UOG1_ENDPTNAK_EPTN.

//! @brief Get value of USBC_UOG1_ENDPTNAK_EPTN from a register value.
#define BG_USBC_UOG1_ENDPTNAK_EPTN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTNAK_EPTN) >> BP_USBC_UOG1_ENDPTNAK_EPTN)

//! @brief Format value for bitfield USBC_UOG1_ENDPTNAK_EPTN.
#define BF_USBC_UOG1_ENDPTNAK_EPTN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTNAK_EPTN) & BM_USBC_UOG1_ENDPTNAK_EPTN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EPTN field to a new value.
#define BW_USBC_UOG1_ENDPTNAK_EPTN(v)   (HW_USBC_UOG1_ENDPTNAK_WR((HW_USBC_UOG1_ENDPTNAK_RD() & ~BM_USBC_UOG1_ENDPTNAK_EPTN) | BF_USBC_UOG1_ENDPTNAK_EPTN(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ENDPTNAKEN - Endpoint NAK Enable
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ENDPTNAKEN - Endpoint NAK Enable (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_usbc_uog1_endptnaken
{
    reg32_t U;
    struct _hw_usbc_uog1_endptnaken_bitfields
    {
        unsigned EPRNE : 8; //!< [7:0] RX Endpoint NAK Enable - R/W.
        unsigned RESERVED0 : 8; //!< [15:8] Reserved
        unsigned EPTNE : 8; //!< [23:16] TX Endpoint NAK Enable - R/W.
        unsigned RESERVED1 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_endptnaken_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ENDPTNAKEN register
 */
#define HW_USBC_UOG1_ENDPTNAKEN_ADDR      (REGS_USBC_BASE + 0x17c)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ENDPTNAKEN           (*(volatile hw_usbc_uog1_endptnaken_t *) HW_USBC_UOG1_ENDPTNAKEN_ADDR)
#define HW_USBC_UOG1_ENDPTNAKEN_RD()      (HW_USBC_UOG1_ENDPTNAKEN.U)
#define HW_USBC_UOG1_ENDPTNAKEN_WR(v)     (HW_USBC_UOG1_ENDPTNAKEN.U = (v))
#define HW_USBC_UOG1_ENDPTNAKEN_SET(v)    (HW_USBC_UOG1_ENDPTNAKEN_WR(HW_USBC_UOG1_ENDPTNAKEN_RD() |  (v)))
#define HW_USBC_UOG1_ENDPTNAKEN_CLR(v)    (HW_USBC_UOG1_ENDPTNAKEN_WR(HW_USBC_UOG1_ENDPTNAKEN_RD() & ~(v)))
#define HW_USBC_UOG1_ENDPTNAKEN_TOG(v)    (HW_USBC_UOG1_ENDPTNAKEN_WR(HW_USBC_UOG1_ENDPTNAKEN_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_ENDPTNAKEN bitfields
 */

/* --- Register HW_USBC_UOG1_ENDPTNAKEN, field EPRNE[7:0] (RW)
 *
 * RX Endpoint NAK Enable - R/W. Each bit is an enable bit for the corresponding RX Endpoint NAK
 * bit. If this bit is set and the corresponding RX Endpoint NAK bit is set, the NAK Interrupt bit
 * is set. Bit [N] - Endpoint #[N], N is 0-7
 */

#define BP_USBC_UOG1_ENDPTNAKEN_EPRNE      (0)      //!< Bit position for USBC_UOG1_ENDPTNAKEN_EPRNE.
#define BM_USBC_UOG1_ENDPTNAKEN_EPRNE      (0x000000ff)  //!< Bit mask for USBC_UOG1_ENDPTNAKEN_EPRNE.

//! @brief Get value of USBC_UOG1_ENDPTNAKEN_EPRNE from a register value.
#define BG_USBC_UOG1_ENDPTNAKEN_EPRNE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTNAKEN_EPRNE) >> BP_USBC_UOG1_ENDPTNAKEN_EPRNE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTNAKEN_EPRNE.
#define BF_USBC_UOG1_ENDPTNAKEN_EPRNE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTNAKEN_EPRNE) & BM_USBC_UOG1_ENDPTNAKEN_EPRNE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EPRNE field to a new value.
#define BW_USBC_UOG1_ENDPTNAKEN_EPRNE(v)   (HW_USBC_UOG1_ENDPTNAKEN_WR((HW_USBC_UOG1_ENDPTNAKEN_RD() & ~BM_USBC_UOG1_ENDPTNAKEN_EPRNE) | BF_USBC_UOG1_ENDPTNAKEN_EPRNE(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTNAKEN, field EPTNE[23:16] (RW)
 *
 * TX Endpoint NAK Enable - R/W. Each bit is an enable bit for the corresponding TX Endpoint NAK
 * bit. If this bit is set and the corresponding TX Endpoint NAK bit is set, the NAK Interrupt bit
 * is set. Bit [N] - Endpoint #[N], N is 0-7
 */

#define BP_USBC_UOG1_ENDPTNAKEN_EPTNE      (16)      //!< Bit position for USBC_UOG1_ENDPTNAKEN_EPTNE.
#define BM_USBC_UOG1_ENDPTNAKEN_EPTNE      (0x00ff0000)  //!< Bit mask for USBC_UOG1_ENDPTNAKEN_EPTNE.

//! @brief Get value of USBC_UOG1_ENDPTNAKEN_EPTNE from a register value.
#define BG_USBC_UOG1_ENDPTNAKEN_EPTNE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTNAKEN_EPTNE) >> BP_USBC_UOG1_ENDPTNAKEN_EPTNE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTNAKEN_EPTNE.
#define BF_USBC_UOG1_ENDPTNAKEN_EPTNE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTNAKEN_EPTNE) & BM_USBC_UOG1_ENDPTNAKEN_EPTNE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EPTNE field to a new value.
#define BW_USBC_UOG1_ENDPTNAKEN_EPTNE(v)   (HW_USBC_UOG1_ENDPTNAKEN_WR((HW_USBC_UOG1_ENDPTNAKEN_RD() & ~BM_USBC_UOG1_ENDPTNAKEN_EPTNE) | BF_USBC_UOG1_ENDPTNAKEN_EPTNE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_CONFIGFLAG - Configure Flag Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_CONFIGFLAG - Configure Flag Register (RW)
 *
 * Reset value: 0x00000001
 *

 */
typedef union _hw_usbc_uog1_configflag
{
    reg32_t U;
    struct _hw_usbc_uog1_configflag_bitfields
    {
        unsigned CF : 1; //!< [0] Configure Flag Host software sets this bit as the last action in its process of configuring the Host Controller.
        unsigned RESERVED0 : 31; //!< [31:1] Reserved
    } B;
} hw_usbc_uog1_configflag_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_CONFIGFLAG register
 */
#define HW_USBC_UOG1_CONFIGFLAG_ADDR      (REGS_USBC_BASE + 0x180)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_CONFIGFLAG           (*(volatile hw_usbc_uog1_configflag_t *) HW_USBC_UOG1_CONFIGFLAG_ADDR)
#define HW_USBC_UOG1_CONFIGFLAG_RD()      (HW_USBC_UOG1_CONFIGFLAG.U)
#define HW_USBC_UOG1_CONFIGFLAG_WR(v)     (HW_USBC_UOG1_CONFIGFLAG.U = (v))
#define HW_USBC_UOG1_CONFIGFLAG_SET(v)    (HW_USBC_UOG1_CONFIGFLAG_WR(HW_USBC_UOG1_CONFIGFLAG_RD() |  (v)))
#define HW_USBC_UOG1_CONFIGFLAG_CLR(v)    (HW_USBC_UOG1_CONFIGFLAG_WR(HW_USBC_UOG1_CONFIGFLAG_RD() & ~(v)))
#define HW_USBC_UOG1_CONFIGFLAG_TOG(v)    (HW_USBC_UOG1_CONFIGFLAG_WR(HW_USBC_UOG1_CONFIGFLAG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_CONFIGFLAG bitfields
 */

/* --- Register HW_USBC_UOG1_CONFIGFLAG, field CF[0] (RO)
 *
 * Configure Flag Host software sets this bit as the last action in its process of configuring the
 * Host Controller. This bit controls the default port-routing control logic.
 *
 * Values:
 * 0 - Port routing control logic default-routes each port to an implementation dependent classic host
 *     controller.
 * 1 - Port routing control logic default-routes all ports to this host controller.
 */

#define BP_USBC_UOG1_CONFIGFLAG_CF      (0)      //!< Bit position for USBC_UOG1_CONFIGFLAG_CF.
#define BM_USBC_UOG1_CONFIGFLAG_CF      (0x00000001)  //!< Bit mask for USBC_UOG1_CONFIGFLAG_CF.

//! @brief Get value of USBC_UOG1_CONFIGFLAG_CF from a register value.
#define BG_USBC_UOG1_CONFIGFLAG_CF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_CONFIGFLAG_CF) >> BP_USBC_UOG1_CONFIGFLAG_CF)


//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_PORTSC1 - Port Status & Control
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_PORTSC1 - Port Status & Control (RW)
 *
 * Reset value: 0x10000000
 *
 * Host Controller  A host controller could implement one to eight port status and control
 * registers. The number is determined by N_PORTs bits in HWSPARAMs register (please see ). Software
 * could read this parameter register to determine how many ports need service.  All controller
 * cores are Single-Port Host, so there is only one port status and control register for each
 * controller core.  This register is only reset by power on reset or controller core reset. The
 * initial conditions of a port are:   No device connected  Port disabled   If the port supports
 * power control, this state remains until port power is supplied (by software).  Device Controller
 * A device controller has only port register one (PORTSC1) and it does not support power control.
 * Port control in device mode is only used for status port reset, suspend, and current connect
 * status. It is also used to initiate test mode or force signaling and allows software to put the
 * PHY into low power suspend mode and disable the PHY clock.
 */
typedef union _hw_usbc_uog1_portsc1
{
    reg32_t U;
    struct _hw_usbc_uog1_portsc1_bitfields
    {
        unsigned CCS : 1; //!< [0] Current Connect Status-Read Only.
        unsigned CSC : 1; //!< [1] Connect Status Change-R/WC.
        unsigned PE : 1; //!< [2] Port Enabled/Disabled-Read/Write.
        unsigned PEC : 1; //!< [3] Port Enable/Disable Change-R/WC.
        unsigned OCA : 1; //!< [4] Over-current Active-Read Only.
        unsigned OCC : 1; //!< [5] Over-current Change-R/WC.
        unsigned FPR : 1; //!< [6] Force Port Resume -Read/Write.
        unsigned SUSP : 1; //!< [7] Suspend - Read/Write or Read Only.
        unsigned PR : 1; //!< [8] Port Reset - Read/Write or Read Only.
        unsigned HSP : 1; //!< [9] High-Speed Port - Read Only.
        unsigned LS : 2; //!< [11:10] Line Status-Read Only.
        unsigned PP : 1; //!< [12] Port Power (PP)-Read/Write or Read Only.
        unsigned PO : 1; //!< [13] Port Owner-Read/Write.
        unsigned PIC : 2; //!< [15:14] Port Indicator Control - Read/Write.
        unsigned PTC : 4; //!< [19:16] Port Test Control - Read/Write.
        unsigned WKCN : 1; //!< [20] Wake on Connect Enable (WKCNNT_E) - Read/Write.
        unsigned WKDC : 1; //!< [21] Wake on Disconnect Enable (WKDSCNNT_E) - Read/Write.
        unsigned WKOC : 1; //!< [22] Wake on Over-current Enable (WKOC_E) - Read/Write.
        unsigned PHCD : 1; //!< [23] PHY Low Power Suspend - Clock Disable (PLPSCD) - Read/Write.
        unsigned PFSC : 1; //!< [24] Port Force Full Speed Connect - Read/Write.
        unsigned PTS : 1; //!< [25] See description at bits 31-30
        unsigned PSPD : 2; //!< [27:26] Port Speed - Read Only.
        unsigned PTW : 1; //!< [28] Parallel Transceiver Width This bit has no effect if serial interface engine is used.
        unsigned STS : 1; //!< [29] Serial Transceiver Select - Read Only Serial Transceiver Select 1 Serial Interface Engine is selected 0 Parallel Interface signals is selected Serial Interface Engine can be used in combination with UTMI+/ULPI physical interface to provide FS/LS signaling instead of the parallel interface signals.
        unsigned PTS1 : 2; //!< [31:30] Bit field {bit25, bit31, bit30}: "000b" UTMI/UTMI+ "001b" Reserved "010b" ULPI "011b" Serial/USB 1.1 PHY/IC-USB (FS Only) "100b" HSIC All USB port interface modes are listed in this field description, but not all are supported.
    } B;
} hw_usbc_uog1_portsc1_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_PORTSC1 register
 */
#define HW_USBC_UOG1_PORTSC1_ADDR      (REGS_USBC_BASE + 0x184)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_PORTSC1           (*(volatile hw_usbc_uog1_portsc1_t *) HW_USBC_UOG1_PORTSC1_ADDR)
#define HW_USBC_UOG1_PORTSC1_RD()      (HW_USBC_UOG1_PORTSC1.U)
#define HW_USBC_UOG1_PORTSC1_WR(v)     (HW_USBC_UOG1_PORTSC1.U = (v))
#define HW_USBC_UOG1_PORTSC1_SET(v)    (HW_USBC_UOG1_PORTSC1_WR(HW_USBC_UOG1_PORTSC1_RD() |  (v)))
#define HW_USBC_UOG1_PORTSC1_CLR(v)    (HW_USBC_UOG1_PORTSC1_WR(HW_USBC_UOG1_PORTSC1_RD() & ~(v)))
#define HW_USBC_UOG1_PORTSC1_TOG(v)    (HW_USBC_UOG1_PORTSC1_WR(HW_USBC_UOG1_PORTSC1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_PORTSC1 bitfields
 */

/* --- Register HW_USBC_UOG1_PORTSC1, field CCS[0] (RO)
 *
 * Current Connect Status-Read Only. In Host Mode: 1=Device is present on port. 0=No device is
 * present. Default = 0. This value reflects the current state of the port, and may not correspond
 * directly to the event that caused the Connect Status Change bit (Bit 1) to be set. This field is
 * zero if Port Power( ) is zero in host mode. In Device Mode: 1=Attached. 0=Not Attached.
 * Default=0. A one indicates that the device successfully attached and is operating in either high
 * speed or full speed as indicated by the High Speed Port bit in this register. A zero indicates
 * that the device did not attach successfully or was forcibly disconnected by the software writing
 * a zero to the Run bit in the USBCMD register. It does not state the device being disconnected or
 * suspended.
 */

#define BP_USBC_UOG1_PORTSC1_CCS      (0)      //!< Bit position for USBC_UOG1_PORTSC1_CCS.
#define BM_USBC_UOG1_PORTSC1_CCS      (0x00000001)  //!< Bit mask for USBC_UOG1_PORTSC1_CCS.

//! @brief Get value of USBC_UOG1_PORTSC1_CCS from a register value.
#define BG_USBC_UOG1_PORTSC1_CCS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_CCS) >> BP_USBC_UOG1_PORTSC1_CCS)

/* --- Register HW_USBC_UOG1_PORTSC1, field CSC[1] (RW)
 *
 * Connect Status Change-R/WC. 1 =Change in Current Connect Status. 0=No change. Default 0. In Host
 * Mode: Indicates a change has occurred in the port's Current Connect Status. The host/device
 * controller sets this bit for all changes to the port device connect status, even if system
 * software has not cleared an existing connect status change. For example, the insertion status
 * changes twice before system software has cleared the changed condition, hub hardware will be
 * 'setting' an already-set bit (that is, the bit will remain set). Software clears this bit by
 * writing a one to it. This field is zero if Port Power( ) is zero in host mode. In Device Mode:
 * This bit is undefined in device controller mode.
 */

#define BP_USBC_UOG1_PORTSC1_CSC      (1)      //!< Bit position for USBC_UOG1_PORTSC1_CSC.
#define BM_USBC_UOG1_PORTSC1_CSC      (0x00000002)  //!< Bit mask for USBC_UOG1_PORTSC1_CSC.

//! @brief Get value of USBC_UOG1_PORTSC1_CSC from a register value.
#define BG_USBC_UOG1_PORTSC1_CSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_CSC) >> BP_USBC_UOG1_PORTSC1_CSC)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_CSC.
#define BF_USBC_UOG1_PORTSC1_CSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_CSC) & BM_USBC_UOG1_PORTSC1_CSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSC field to a new value.
#define BW_USBC_UOG1_PORTSC1_CSC(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_CSC) | BF_USBC_UOG1_PORTSC1_CSC(v)))
#endif

/* --- Register HW_USBC_UOG1_PORTSC1, field PE[2] (RW)
 *
 * Port Enabled/Disabled-Read/Write. 1=Enable. 0=Disable. Default 0. In Host Mode: Ports can only be
 * enabled by the host controller as a part of the reset and enable. Software cannot enable a port
 * by writing a one to this field. Ports can be disabled by either a fault condition (disconnect
 * event or other fault condition) or by the host software. Note that the bit status does not change
 * until the port state actually changes. There may be a delay in disabling or enabling a port due
 * to other host controller and bus events. When the port is disabled, (0b) downstream propagation
 * of data is blocked except for reset. This field is zero if Port Power( ) is zero in host mode. In
 * Device Mode: The device port is always enabled, so this bit is always '1b'.
 */

#define BP_USBC_UOG1_PORTSC1_PE      (2)      //!< Bit position for USBC_UOG1_PORTSC1_PE.
#define BM_USBC_UOG1_PORTSC1_PE      (0x00000004)  //!< Bit mask for USBC_UOG1_PORTSC1_PE.

//! @brief Get value of USBC_UOG1_PORTSC1_PE from a register value.
#define BG_USBC_UOG1_PORTSC1_PE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_PE) >> BP_USBC_UOG1_PORTSC1_PE)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_PE.
#define BF_USBC_UOG1_PORTSC1_PE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_PE) & BM_USBC_UOG1_PORTSC1_PE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PE field to a new value.
#define BW_USBC_UOG1_PORTSC1_PE(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_PE) | BF_USBC_UOG1_PORTSC1_PE(v)))
#endif

/* --- Register HW_USBC_UOG1_PORTSC1, field PEC[3] (RW)
 *
 * Port Enable/Disable Change-R/WC. 1=Port enabled/disabled status has changed. 0=No change. Default
 * = 0. In Host Mode: For the root hub, this bit is set to a one only when a port is disabled due to
 * disconnect on the port or due to the appropriate conditions existing at the EOF2 point (See
 * Chapter 11 of the USB Specification). Software clears this by writing a one to it. This field is
 * zero if Port Power( ) is zero. In Device mode: The device port is always enabled, so this bit is
 * always '0b'.
 */

#define BP_USBC_UOG1_PORTSC1_PEC      (3)      //!< Bit position for USBC_UOG1_PORTSC1_PEC.
#define BM_USBC_UOG1_PORTSC1_PEC      (0x00000008)  //!< Bit mask for USBC_UOG1_PORTSC1_PEC.

//! @brief Get value of USBC_UOG1_PORTSC1_PEC from a register value.
#define BG_USBC_UOG1_PORTSC1_PEC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_PEC) >> BP_USBC_UOG1_PORTSC1_PEC)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_PEC.
#define BF_USBC_UOG1_PORTSC1_PEC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_PEC) & BM_USBC_UOG1_PORTSC1_PEC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PEC field to a new value.
#define BW_USBC_UOG1_PORTSC1_PEC(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_PEC) | BF_USBC_UOG1_PORTSC1_PEC(v)))
#endif

/* --- Register HW_USBC_UOG1_PORTSC1, field OCA[4] (RO)
 *
 * Over-current Active-Read Only. Default 0. This bit will automatically transition from one to zero
 * when the over current condition is removed.
 *
 * Values:
 * 0 - This port does not have an over-current condition.
 * 1 - This port currently has an over-current condition
 */

#define BP_USBC_UOG1_PORTSC1_OCA      (4)      //!< Bit position for USBC_UOG1_PORTSC1_OCA.
#define BM_USBC_UOG1_PORTSC1_OCA      (0x00000010)  //!< Bit mask for USBC_UOG1_PORTSC1_OCA.

//! @brief Get value of USBC_UOG1_PORTSC1_OCA from a register value.
#define BG_USBC_UOG1_PORTSC1_OCA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_OCA) >> BP_USBC_UOG1_PORTSC1_OCA)


/* --- Register HW_USBC_UOG1_PORTSC1, field OCC[5] (RW)
 *
 * Over-current Change-R/WC. Default=0. This bit is set '1b' by hardware when there is a change to
 * Over-current Active. Software can clear this bit by writing a one to this bit position.
 */

#define BP_USBC_UOG1_PORTSC1_OCC      (5)      //!< Bit position for USBC_UOG1_PORTSC1_OCC.
#define BM_USBC_UOG1_PORTSC1_OCC      (0x00000020)  //!< Bit mask for USBC_UOG1_PORTSC1_OCC.

//! @brief Get value of USBC_UOG1_PORTSC1_OCC from a register value.
#define BG_USBC_UOG1_PORTSC1_OCC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_OCC) >> BP_USBC_UOG1_PORTSC1_OCC)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_OCC.
#define BF_USBC_UOG1_PORTSC1_OCC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_OCC) & BM_USBC_UOG1_PORTSC1_OCC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OCC field to a new value.
#define BW_USBC_UOG1_PORTSC1_OCC(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_OCC) | BF_USBC_UOG1_PORTSC1_OCC(v)))
#endif

/* --- Register HW_USBC_UOG1_PORTSC1, field FPR[6] (RW)
 *
 * Force Port Resume -Read/Write. 1= Resume detected/driven on port. 0=No resume (K-state)
 * detected/driven on port. Default = 0. In Host Mode: Software sets this bit to one to drive resume
 * signaling. The Host Controller sets this bit to one if a J-to-K transition is detected while the
 * port is in the Suspend state. When this bit transitions to a one because a J-to-K transition is
 * detected, the Port Change Detect bit in the USBSTS register is also set to one. This bit will
 * automatically change to zero after the resume sequence is complete. This behavior is different
 * from EHCI where the host controller driver is required to set this bit to a zero after the resume
 * duration is timed in the driver. Note that when the Host controller owns the port, the resume
 * sequence follows the defined sequence documented in the USB Specification Revision 2.0. The
 * resume signaling (Full-speed 'K') is driven on the port as long as this bit remains a one. This
 * bit will remain a one until the port has switched to the high-speed idle. Writing a zero has no
 * effect because the port controller will time the resume operation clear the bit the port control
 * state switches to HS or FS idle. This field is zero if Port Power( ) is zero in host mode. This
 * bit is not-EHCI compatible. In Device mode: After the device has been in Suspend State for 5ms or
 * more, software must set this bit to one to drive resume signaling before clearing. The Device
 * Controller will set this bit to one if a J-to-K transition is detected while the port is in the
 * Suspend state. The bit will be cleared when the device returns to normal operation. Also, when
 * this bit wil be cleared because a K-to-J transition detected, the Port Change Detect bit in the
 * USBSTS register is also set to one.
 */

#define BP_USBC_UOG1_PORTSC1_FPR      (6)      //!< Bit position for USBC_UOG1_PORTSC1_FPR.
#define BM_USBC_UOG1_PORTSC1_FPR      (0x00000040)  //!< Bit mask for USBC_UOG1_PORTSC1_FPR.

//! @brief Get value of USBC_UOG1_PORTSC1_FPR from a register value.
#define BG_USBC_UOG1_PORTSC1_FPR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_FPR) >> BP_USBC_UOG1_PORTSC1_FPR)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_FPR.
#define BF_USBC_UOG1_PORTSC1_FPR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_FPR) & BM_USBC_UOG1_PORTSC1_FPR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FPR field to a new value.
#define BW_USBC_UOG1_PORTSC1_FPR(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_FPR) | BF_USBC_UOG1_PORTSC1_FPR(v)))
#endif

/* --- Register HW_USBC_UOG1_PORTSC1, field SUSP[7] (RW)
 *
 * Suspend - Read/Write or Read Only. Default = 0b. 1=Port in suspend state. 0=Port not in suspend
 * state. In Host Mode: Read/Write. Port Enabled Bit and Suspend bit of this register define the
 * port states as follows: Bits [Port Enabled, Suspend] Port State 0x Disable 10 Enable 11 Suspend
 * When in suspend state, downstream propagation of data is blocked on this port, except for port
 * reset. The blocking occurs at the end of the current transaction if a transaction was in progress
 * when this bit was written to 1. In the suspend state, the port is sensitive to resume detection.
 * Note that the bit status does not change until the port is suspended and that there may be a
 * delay in suspending a port if there is a transaction currently in progress on the The host
 * controller will unconditionally set this bit to zero when software sets the Force Port Resume bit
 * to zero. The host controller ignores a write of zero to this bit. If host software sets this bit
 * to a one when the port is not enabled (that is, Port enabled bit is a zero) the results are
 * undefined. This field is zero if Port Power( ) is zero in host mode. In Device Mode: Read Only.
 * In device mode this bit is a read only status bit.
 */

#define BP_USBC_UOG1_PORTSC1_SUSP      (7)      //!< Bit position for USBC_UOG1_PORTSC1_SUSP.
#define BM_USBC_UOG1_PORTSC1_SUSP      (0x00000080)  //!< Bit mask for USBC_UOG1_PORTSC1_SUSP.

//! @brief Get value of USBC_UOG1_PORTSC1_SUSP from a register value.
#define BG_USBC_UOG1_PORTSC1_SUSP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_SUSP) >> BP_USBC_UOG1_PORTSC1_SUSP)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_SUSP.
#define BF_USBC_UOG1_PORTSC1_SUSP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_SUSP) & BM_USBC_UOG1_PORTSC1_SUSP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SUSP field to a new value.
#define BW_USBC_UOG1_PORTSC1_SUSP(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_SUSP) | BF_USBC_UOG1_PORTSC1_SUSP(v)))
#endif

/* --- Register HW_USBC_UOG1_PORTSC1, field PR[8] (RW)
 *
 * Port Reset - Read/Write or Read Only. Default = 0b. In Host Mode: Read/Write. 1=Port is in Reset.
 * 0=Port is not in Reset. Default 0. When software writes a one to this bit the bus-reset sequence
 * as defined in the USB Specification Revision 2.0 is started. This bit will automatically change
 * to zero after the reset sequence is complete. This behavior is different from EHCI where the host
 * controller driver is required to set this bit to a zero after the reset duration is timed in the
 * driver. In Device Mode: This bit is a read only status bit. Device reset from the USB bus is also
 * indicated in the USBSTS register. This field is zero if Port Power( ) is zero.
 */

#define BP_USBC_UOG1_PORTSC1_PR      (8)      //!< Bit position for USBC_UOG1_PORTSC1_PR.
#define BM_USBC_UOG1_PORTSC1_PR      (0x00000100)  //!< Bit mask for USBC_UOG1_PORTSC1_PR.

//! @brief Get value of USBC_UOG1_PORTSC1_PR from a register value.
#define BG_USBC_UOG1_PORTSC1_PR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_PR) >> BP_USBC_UOG1_PORTSC1_PR)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_PR.
#define BF_USBC_UOG1_PORTSC1_PR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_PR) & BM_USBC_UOG1_PORTSC1_PR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PR field to a new value.
#define BW_USBC_UOG1_PORTSC1_PR(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_PR) | BF_USBC_UOG1_PORTSC1_PR(v)))
#endif

/* --- Register HW_USBC_UOG1_PORTSC1, field HSP[9] (RO)
 *
 * High-Speed Port - Read Only. Default = 0b. When the bit is one, the host/device connected to the
 * port is in high-speed mode and if set to zero, the host/device connected to the port is not in a
 * high-speed mode. HSP is redundant with PSPD(bit 27, 26) but remained for compatibility.
 */

#define BP_USBC_UOG1_PORTSC1_HSP      (9)      //!< Bit position for USBC_UOG1_PORTSC1_HSP.
#define BM_USBC_UOG1_PORTSC1_HSP      (0x00000200)  //!< Bit mask for USBC_UOG1_PORTSC1_HSP.

//! @brief Get value of USBC_UOG1_PORTSC1_HSP from a register value.
#define BG_USBC_UOG1_PORTSC1_HSP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_HSP) >> BP_USBC_UOG1_PORTSC1_HSP)

/* --- Register HW_USBC_UOG1_PORTSC1, field LS[11:10] (RW)
 *
 * Line Status-Read Only. These bits reflect the current logical levels of the D+ (bit 11) and D-
 * (bit 10) signal lines. In host mode, the use of linestate by the host controller driver is not
 * necessary (unlike EHCI), because the port controller state machine and the port routing manage
 * the connection of LS and FS. In device mode, the use of linestate by the device controller driver
 * is not necessary. The encoding of the bits are: Bits [11:10] Meaning
 *
 * Values:
 * 00 - SE0
 * 01 - K-state
 * 10 - J-state
 * 11 - Undefined
 */

#define BP_USBC_UOG1_PORTSC1_LS      (10)      //!< Bit position for USBC_UOG1_PORTSC1_LS.
#define BM_USBC_UOG1_PORTSC1_LS      (0x00000c00)  //!< Bit mask for USBC_UOG1_PORTSC1_LS.

//! @brief Get value of USBC_UOG1_PORTSC1_LS from a register value.
#define BG_USBC_UOG1_PORTSC1_LS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_LS) >> BP_USBC_UOG1_PORTSC1_LS)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_LS.
#define BF_USBC_UOG1_PORTSC1_LS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_LS) & BM_USBC_UOG1_PORTSC1_LS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LS field to a new value.
#define BW_USBC_UOG1_PORTSC1_LS(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_LS) | BF_USBC_UOG1_PORTSC1_LS(v)))
#endif


/* --- Register HW_USBC_UOG1_PORTSC1, field PP[12] (RW)
 *
 * Port Power (PP)-Read/Write or Read Only. The function of this bit depends on the value of the
 * Port Power Switching (PPC) field in the HCSPARAMS register. The behavior is as follows: PPC PP
 * Operation 0 1b Read Only - Host controller does not have port power control switches. Each port
 * is hard-wired to power. 1 1b/0b - Read/Write. Host/OTG controller requires port power control
 * switches. This bit represents the current setting of the switch (0=off, 1=on). When power is not
 * available on a port (that is, PP equals a 0), the port is non-functional and will not report
 * attaches, detaches, etc. When an over-current condition is detected on a powered port and PPC is
 * a one, the PP bit in each affected port may be transitional by the host controller driver from a
 * one to a zero (removing power from the port). This feature is implemented in all controller cores
 * (PPC = 1).
 */

#define BP_USBC_UOG1_PORTSC1_PP      (12)      //!< Bit position for USBC_UOG1_PORTSC1_PP.
#define BM_USBC_UOG1_PORTSC1_PP      (0x00001000)  //!< Bit mask for USBC_UOG1_PORTSC1_PP.

//! @brief Get value of USBC_UOG1_PORTSC1_PP from a register value.
#define BG_USBC_UOG1_PORTSC1_PP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_PP) >> BP_USBC_UOG1_PORTSC1_PP)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_PP.
#define BF_USBC_UOG1_PORTSC1_PP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_PP) & BM_USBC_UOG1_PORTSC1_PP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PP field to a new value.
#define BW_USBC_UOG1_PORTSC1_PP(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_PP) | BF_USBC_UOG1_PORTSC1_PP(v)))
#endif

/* --- Register HW_USBC_UOG1_PORTSC1, field PO[13] (RW)
 *
 * Port Owner-Read/Write. Default = 0. This bit unconditionally goes to a 0 when the configured bit
 * in the CONFIGFLAG register makes a 0 to 1 transition. This bit unconditionally goes to 1 whenever
 * the Configured bit is zero System software uses this field to release ownership of the port to a
 * selected host controller (in the event that the attached device is not a high-speed device).
 * Software writes a one to this bit when the attached device is not a high-speed device. A one in
 * this bit means that an internal companion controller owns and controls the port. Port owner
 * handoff is not supported in all controller cores, therefore this bit will always be 0.
 */

#define BP_USBC_UOG1_PORTSC1_PO      (13)      //!< Bit position for USBC_UOG1_PORTSC1_PO.
#define BM_USBC_UOG1_PORTSC1_PO      (0x00002000)  //!< Bit mask for USBC_UOG1_PORTSC1_PO.

//! @brief Get value of USBC_UOG1_PORTSC1_PO from a register value.
#define BG_USBC_UOG1_PORTSC1_PO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_PO) >> BP_USBC_UOG1_PORTSC1_PO)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_PO.
#define BF_USBC_UOG1_PORTSC1_PO(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_PO) & BM_USBC_UOG1_PORTSC1_PO)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PO field to a new value.
#define BW_USBC_UOG1_PORTSC1_PO(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_PO) | BF_USBC_UOG1_PORTSC1_PO(v)))
#endif

/* --- Register HW_USBC_UOG1_PORTSC1, field PIC[15:14] (RW)
 *
 * Port Indicator Control - Read/Write. Default = Ob. Writing to this field has no effect if the
 * P_INDICATOR bit in the HCSPARAMS register is a zero. Refer to the USB Specification Revision 2.0
 * for a description on how these bits are to be used. This field is zero if Port Power is zero. Bit
 * Value Meaning
 *
 * Values:
 * 00 - Port indicators are off
 * 01 - Amber
 * 10 - Green
 * 11 - Undefined
 */

#define BP_USBC_UOG1_PORTSC1_PIC      (14)      //!< Bit position for USBC_UOG1_PORTSC1_PIC.
#define BM_USBC_UOG1_PORTSC1_PIC      (0x0000c000)  //!< Bit mask for USBC_UOG1_PORTSC1_PIC.

//! @brief Get value of USBC_UOG1_PORTSC1_PIC from a register value.
#define BG_USBC_UOG1_PORTSC1_PIC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_PIC) >> BP_USBC_UOG1_PORTSC1_PIC)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_PIC.
#define BF_USBC_UOG1_PORTSC1_PIC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_PIC) & BM_USBC_UOG1_PORTSC1_PIC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PIC field to a new value.
#define BW_USBC_UOG1_PORTSC1_PIC(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_PIC) | BF_USBC_UOG1_PORTSC1_PIC(v)))
#endif


/* --- Register HW_USBC_UOG1_PORTSC1, field PTC[19:16] (RW)
 *
 * Port Test Control - Read/Write. Default = 0000b. Refer to for the operational model for using
 * these test modes and the USB Specification Revision 2.0, Chapter 7 for details on each test mode.
 * The FORCE_ENABLE_FS and FORCE ENABLE_LS are extensions to the test mode support specified in the
 * EHCI specification. Writing the PTC field to any of the FORCE_ENABLE_{HS/FS/LS} values will force
 * the port into the connected and enabled state at the selected speed. Writing the PTC field back
 * to TEST_MODE_DISABLE will allow the port state machines to progress normally from that point. Low
 * speed operations are not supported as a peripheral device. Any other value than zero indicates
 * that the port is operating in test mode. Value Specific Test
 *
 * Values:
 * 0000 - TEST_MODE_DISABLE
 * 0001 - J_STATE
 * 0010 - K_STATE
 * 0011 - SE0 (host) / NAK (device)
 * 0100 - Packet
 * 0101 - FORCE_ENABLE_HS
 * 0110 - FORCE_ENABLE_FS
 * 0111 - FORCE_ENABLE_LS
 * 1000-1111 - Reserved
 */

#define BP_USBC_UOG1_PORTSC1_PTC      (16)      //!< Bit position for USBC_UOG1_PORTSC1_PTC.
#define BM_USBC_UOG1_PORTSC1_PTC      (0x000f0000)  //!< Bit mask for USBC_UOG1_PORTSC1_PTC.

//! @brief Get value of USBC_UOG1_PORTSC1_PTC from a register value.
#define BG_USBC_UOG1_PORTSC1_PTC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_PTC) >> BP_USBC_UOG1_PORTSC1_PTC)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_PTC.
#define BF_USBC_UOG1_PORTSC1_PTC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_PTC) & BM_USBC_UOG1_PORTSC1_PTC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PTC field to a new value.
#define BW_USBC_UOG1_PORTSC1_PTC(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_PTC) | BF_USBC_UOG1_PORTSC1_PTC(v)))
#endif


/* --- Register HW_USBC_UOG1_PORTSC1, field WKCN[20] (RW)
 *
 * Wake on Connect Enable (WKCNNT_E) - Read/Write. Default=0b. Writing this bit to a one enables the
 * port to be sensitive to device connects as wake-up events. This field is zero if Port Power( ) is
 * zero or in device mode.
 */

#define BP_USBC_UOG1_PORTSC1_WKCN      (20)      //!< Bit position for USBC_UOG1_PORTSC1_WKCN.
#define BM_USBC_UOG1_PORTSC1_WKCN      (0x00100000)  //!< Bit mask for USBC_UOG1_PORTSC1_WKCN.

//! @brief Get value of USBC_UOG1_PORTSC1_WKCN from a register value.
#define BG_USBC_UOG1_PORTSC1_WKCN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_WKCN) >> BP_USBC_UOG1_PORTSC1_WKCN)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_WKCN.
#define BF_USBC_UOG1_PORTSC1_WKCN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_WKCN) & BM_USBC_UOG1_PORTSC1_WKCN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKCN field to a new value.
#define BW_USBC_UOG1_PORTSC1_WKCN(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_WKCN) | BF_USBC_UOG1_PORTSC1_WKCN(v)))
#endif

/* --- Register HW_USBC_UOG1_PORTSC1, field WKDC[21] (RW)
 *
 * Wake on Disconnect Enable (WKDSCNNT_E) - Read/Write. Default=0b. Writing this bit to a one
 * enables the port to be sensitive to device disconnects as wake-up events. This field is zero if
 * Port Power( ) is zero or in device mode.
 */

#define BP_USBC_UOG1_PORTSC1_WKDC      (21)      //!< Bit position for USBC_UOG1_PORTSC1_WKDC.
#define BM_USBC_UOG1_PORTSC1_WKDC      (0x00200000)  //!< Bit mask for USBC_UOG1_PORTSC1_WKDC.

//! @brief Get value of USBC_UOG1_PORTSC1_WKDC from a register value.
#define BG_USBC_UOG1_PORTSC1_WKDC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_WKDC) >> BP_USBC_UOG1_PORTSC1_WKDC)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_WKDC.
#define BF_USBC_UOG1_PORTSC1_WKDC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_WKDC) & BM_USBC_UOG1_PORTSC1_WKDC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKDC field to a new value.
#define BW_USBC_UOG1_PORTSC1_WKDC(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_WKDC) | BF_USBC_UOG1_PORTSC1_WKDC(v)))
#endif

/* --- Register HW_USBC_UOG1_PORTSC1, field WKOC[22] (RW)
 *
 * Wake on Over-current Enable (WKOC_E) - Read/Write. Default = 0b. Writing this bit to a one
 * enables the port to be sensitive to over-current conditions as wake-up events. This field is zero
 * if Port Power( ) is zero.
 */

#define BP_USBC_UOG1_PORTSC1_WKOC      (22)      //!< Bit position for USBC_UOG1_PORTSC1_WKOC.
#define BM_USBC_UOG1_PORTSC1_WKOC      (0x00400000)  //!< Bit mask for USBC_UOG1_PORTSC1_WKOC.

//! @brief Get value of USBC_UOG1_PORTSC1_WKOC from a register value.
#define BG_USBC_UOG1_PORTSC1_WKOC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_WKOC) >> BP_USBC_UOG1_PORTSC1_WKOC)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_WKOC.
#define BF_USBC_UOG1_PORTSC1_WKOC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_WKOC) & BM_USBC_UOG1_PORTSC1_WKOC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKOC field to a new value.
#define BW_USBC_UOG1_PORTSC1_WKOC(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_WKOC) | BF_USBC_UOG1_PORTSC1_WKOC(v)))
#endif

/* --- Register HW_USBC_UOG1_PORTSC1, field PHCD[23] (RW)
 *
 * PHY Low Power Suspend - Clock Disable (PLPSCD) - Read/Write. Default = 0b. When this bit is set
 * to '1b', the PHY clock is disabled. Reading this bit will indicate the status of the PHY clock.
 * The PHY clock cannot be disabled if it is being used as the system clock. In device mode, The PHY
 * can be put into Low Power Suspend when the device is not running (USBCMD Run/Stop=0b) or the host
 * has signaled suspend (PORTSC1 SUSPEND=1b). PHY Low power suspend will be cleared automatically
 * when the host initials resume. Before forcing a resume from the device, the device controller
 * driver must clear this bit. In host mode, the PHY can be put into Low Power Suspend when the
 * downstream device has been put into suspend mode or when no downstream device is connected. Low
 * power suspend is completely under the control of software.
 *
 * Values:
 * 0 - Enable PHY clock
 * 1 - Disable PHY clock
 */

#define BP_USBC_UOG1_PORTSC1_PHCD      (23)      //!< Bit position for USBC_UOG1_PORTSC1_PHCD.
#define BM_USBC_UOG1_PORTSC1_PHCD      (0x00800000)  //!< Bit mask for USBC_UOG1_PORTSC1_PHCD.

//! @brief Get value of USBC_UOG1_PORTSC1_PHCD from a register value.
#define BG_USBC_UOG1_PORTSC1_PHCD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_PHCD) >> BP_USBC_UOG1_PORTSC1_PHCD)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_PHCD.
#define BF_USBC_UOG1_PORTSC1_PHCD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_PHCD) & BM_USBC_UOG1_PORTSC1_PHCD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHCD field to a new value.
#define BW_USBC_UOG1_PORTSC1_PHCD(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_PHCD) | BF_USBC_UOG1_PORTSC1_PHCD(v)))
#endif


/* --- Register HW_USBC_UOG1_PORTSC1, field PFSC[24] (RW)
 *
 * Port Force Full Speed Connect - Read/Write. Default = 0b. When this bit is set to '1b', the port
 * will be forced to only connect at Full Speed, It disables the chirp sequence that allows the port
 * to identify itself as High Speed.
 *
 * Values:
 * 0 - Normal operation
 * 1 - Forced to full speed
 */

#define BP_USBC_UOG1_PORTSC1_PFSC      (24)      //!< Bit position for USBC_UOG1_PORTSC1_PFSC.
#define BM_USBC_UOG1_PORTSC1_PFSC      (0x01000000)  //!< Bit mask for USBC_UOG1_PORTSC1_PFSC.

//! @brief Get value of USBC_UOG1_PORTSC1_PFSC from a register value.
#define BG_USBC_UOG1_PORTSC1_PFSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_PFSC) >> BP_USBC_UOG1_PORTSC1_PFSC)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_PFSC.
#define BF_USBC_UOG1_PORTSC1_PFSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_PFSC) & BM_USBC_UOG1_PORTSC1_PFSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PFSC field to a new value.
#define BW_USBC_UOG1_PORTSC1_PFSC(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_PFSC) | BF_USBC_UOG1_PORTSC1_PFSC(v)))
#endif


/* --- Register HW_USBC_UOG1_PORTSC1, field PTS[25] (RW)
 *
 * See description at bits 31-30
 */

#define BP_USBC_UOG1_PORTSC1_PTS      (25)      //!< Bit position for USBC_UOG1_PORTSC1_PTS.
#define BM_USBC_UOG1_PORTSC1_PTS      (0x02000000)  //!< Bit mask for USBC_UOG1_PORTSC1_PTS.

//! @brief Get value of USBC_UOG1_PORTSC1_PTS from a register value.
#define BG_USBC_UOG1_PORTSC1_PTS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_PTS) >> BP_USBC_UOG1_PORTSC1_PTS)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_PTS.
#define BF_USBC_UOG1_PORTSC1_PTS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_PTS) & BM_USBC_UOG1_PORTSC1_PTS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PTS field to a new value.
#define BW_USBC_UOG1_PORTSC1_PTS(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_PTS) | BF_USBC_UOG1_PORTSC1_PTS(v)))
#endif

/* --- Register HW_USBC_UOG1_PORTSC1, field PSPD[27:26] (RW)
 *
 * Port Speed - Read Only. This register field indicates the speed at which the port is operating.
 *
 * Values:
 * 00 - Full Speed
 * 01 - Low Speed
 * 10 - High Speed
 * 11 - Undefined
 */

#define BP_USBC_UOG1_PORTSC1_PSPD      (26)      //!< Bit position for USBC_UOG1_PORTSC1_PSPD.
#define BM_USBC_UOG1_PORTSC1_PSPD      (0x0c000000)  //!< Bit mask for USBC_UOG1_PORTSC1_PSPD.

//! @brief Get value of USBC_UOG1_PORTSC1_PSPD from a register value.
#define BG_USBC_UOG1_PORTSC1_PSPD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_PSPD) >> BP_USBC_UOG1_PORTSC1_PSPD)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_PSPD.
#define BF_USBC_UOG1_PORTSC1_PSPD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_PSPD) & BM_USBC_UOG1_PORTSC1_PSPD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PSPD field to a new value.
#define BW_USBC_UOG1_PORTSC1_PSPD(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_PSPD) | BF_USBC_UOG1_PORTSC1_PSPD(v)))
#endif


/* --- Register HW_USBC_UOG1_PORTSC1, field PTW[28] (RW)
 *
 * Parallel Transceiver Width This bit has no effect if serial interface engine is used. For
 * OTG1/OTG2/Host1 core, it is Read-Only. Reset value is '1b'.
 *
 * Values:
 * 0 - Select the 8-bit UTMI interface [60MHz]
 * 1 - Select the 16-bit UTMI interface [30MHz]
 */

#define BP_USBC_UOG1_PORTSC1_PTW      (28)      //!< Bit position for USBC_UOG1_PORTSC1_PTW.
#define BM_USBC_UOG1_PORTSC1_PTW      (0x10000000)  //!< Bit mask for USBC_UOG1_PORTSC1_PTW.

//! @brief Get value of USBC_UOG1_PORTSC1_PTW from a register value.
#define BG_USBC_UOG1_PORTSC1_PTW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_PTW) >> BP_USBC_UOG1_PORTSC1_PTW)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_PTW.
#define BF_USBC_UOG1_PORTSC1_PTW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_PTW) & BM_USBC_UOG1_PORTSC1_PTW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PTW field to a new value.
#define BW_USBC_UOG1_PORTSC1_PTW(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_PTW) | BF_USBC_UOG1_PORTSC1_PTW(v)))
#endif


/* --- Register HW_USBC_UOG1_PORTSC1, field STS[29] (RW)
 *
 * Serial Transceiver Select - Read Only Serial Transceiver Select 1 Serial Interface Engine is
 * selected 0 Parallel Interface signals is selected Serial Interface Engine can be used in
 * combination with UTMI+/ULPI physical interface to provide FS/LS signaling instead of the parallel
 * interface signals. When this bit is set '1b', serial interface engine will be used instead of
 * parallel interface signals. This bit has no effect unless PTS bits is set to select UTMI+/ULPI
 * interface. The Serial/USB1.1 PHY/IC-USB will use the serial interface engine for FS/LS signaling
 * regardless of this bit value.
 */

#define BP_USBC_UOG1_PORTSC1_STS      (29)      //!< Bit position for USBC_UOG1_PORTSC1_STS.
#define BM_USBC_UOG1_PORTSC1_STS      (0x20000000)  //!< Bit mask for USBC_UOG1_PORTSC1_STS.

//! @brief Get value of USBC_UOG1_PORTSC1_STS from a register value.
#define BG_USBC_UOG1_PORTSC1_STS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_STS) >> BP_USBC_UOG1_PORTSC1_STS)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_STS.
#define BF_USBC_UOG1_PORTSC1_STS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_STS) & BM_USBC_UOG1_PORTSC1_STS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the STS field to a new value.
#define BW_USBC_UOG1_PORTSC1_STS(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_STS) | BF_USBC_UOG1_PORTSC1_STS(v)))
#endif

/* --- Register HW_USBC_UOG1_PORTSC1, field PTS1[31:30] (RW)
 *
 * Bit field {bit25, bit31, bit30}: "000b" UTMI/UTMI+ "001b" Reserved "010b" ULPI "011b" Serial/USB
 * 1.1 PHY/IC-USB (FS Only) "100b" HSIC All USB port interface modes are listed in this field
 * description, but not all are supported. For detail feature of each controller core, please see .
 * The behaviour is unknown when unsupported interface mode is selected.
 */

#define BP_USBC_UOG1_PORTSC1_PTS1      (30)      //!< Bit position for USBC_UOG1_PORTSC1_PTS1.
#define BM_USBC_UOG1_PORTSC1_PTS1      (0xc0000000)  //!< Bit mask for USBC_UOG1_PORTSC1_PTS1.

//! @brief Get value of USBC_UOG1_PORTSC1_PTS1 from a register value.
#define BG_USBC_UOG1_PORTSC1_PTS1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_PORTSC1_PTS1) >> BP_USBC_UOG1_PORTSC1_PTS1)

//! @brief Format value for bitfield USBC_UOG1_PORTSC1_PTS1.
#define BF_USBC_UOG1_PORTSC1_PTS1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_PORTSC1_PTS1) & BM_USBC_UOG1_PORTSC1_PTS1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PTS1 field to a new value.
#define BW_USBC_UOG1_PORTSC1_PTS1(v)   (HW_USBC_UOG1_PORTSC1_WR((HW_USBC_UOG1_PORTSC1_RD() & ~BM_USBC_UOG1_PORTSC1_PTS1) | BF_USBC_UOG1_PORTSC1_PTS1(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_OTGSC - On-The-Go Status & control
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_OTGSC - On-The-Go Status & control (RW)
 *
 * Reset value: 0x00000120
 *
 * This register is availabe only in OTG controller core. It has four sections:   OTG Interrupt
 * enables (Read/Write)  OTG Interrupt status (Read/Write to Clear)  OTG Status inputs (Read Only)
 * OTG Controls (Read/Write)   The status inputs are debounced using a 1 ms time constant. Values on
 * the status inputs that do not persist for more than 1 ms does not cause an update of the status
 * input register, or cause an OTG interrupt.  See also register.
 */
typedef union _hw_usbc_uog1_otgsc
{
    reg32_t U;
    struct _hw_usbc_uog1_otgsc_bitfields
    {
        unsigned VD : 1; //!< [0] VBUS_Discharge - Read/Write.
        unsigned VC : 1; //!< [1] VBUS Charge - Read/Write.
        unsigned RESERVED0 : 1; //!< [2] Reserved
        unsigned OT : 1; //!< [3] OTG Termination - Read/Write.
        unsigned DP : 1; //!< [4] Data Pulsing - Read/Write.
        unsigned IDPU : 1; //!< [5] ID Pullup - Read/Write This bit provide control over the ID pull-up resister; 0 = off, 1 = on [default].
        unsigned RESERVED1 : 2; //!< [7:6] Reserved
        unsigned ID : 1; //!< [8] USB ID - Read Only.
        unsigned AVV : 1; //!< [9] A VBus Valid - Read Only.
        unsigned ASV : 1; //!< [10] A Session Valid - Read Only.
        unsigned BSV : 1; //!< [11] B Session Valid - Read Only.
        unsigned BSE : 1; //!< [12] B Session End - Read Only.
        unsigned _1MST : 1; //!< [13] 1 millisecond timer toggle - Read Only.
        unsigned DPS : 1; //!< [14] Data Bus Pulsing Status - Read Only.
        unsigned RESERVED2 : 1; //!< [15] Reserved
        unsigned IDIS : 1; //!< [16] USB ID Interrupt Status - Read/Write.
        unsigned AVVIS : 1; //!< [17] A VBus Valid Interrupt Status - Read/Write to Clear.
        unsigned ASVIS : 1; //!< [18] A Session Valid Interrupt Status - Read/Write to Clear.
        unsigned BSVIS : 1; //!< [19] B Session Valid Interrupt Status - Read/Write to Clear.
        unsigned BSEIS : 1; //!< [20] B Session End Interrupt Status - Read/Write to Clear.
        unsigned _1MSS : 1; //!< [21] 1 millisecond timer Interrupt Status - Read/Write to Clear.
        unsigned DPIS : 1; //!< [22] Data Pulse Interrupt Status - Read/Write to Clear.
        unsigned RESERVED3 : 1; //!< [23] Reserved
        unsigned IDIE : 1; //!< [24] USB ID Interrupt Enable - Read/Write.
        unsigned AVVIE : 1; //!< [25] A VBus Valid Interrupt Enable - Read/Write.
        unsigned ASVIE : 1; //!< [26] A Session Valid Interrupt Enable - Read/Write.
        unsigned BSVIE : 1; //!< [27] B Session Valid Interrupt Enable - Read/Write.
        unsigned BSEIE : 1; //!< [28] B Session End Interrupt Enable - Read/Write.
        unsigned _1MSE : 1; //!< [29] 1 millisecond timer Interrupt Enable - Read/Write
        unsigned DPIE : 1; //!< [30] Data Pulse Interrupt Enable
        unsigned RESERVED4 : 1; //!< [31] Reserved
    } B;
} hw_usbc_uog1_otgsc_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_OTGSC register
 */
#define HW_USBC_UOG1_OTGSC_ADDR      (REGS_USBC_BASE + 0x1a4)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_OTGSC           (*(volatile hw_usbc_uog1_otgsc_t *) HW_USBC_UOG1_OTGSC_ADDR)
#define HW_USBC_UOG1_OTGSC_RD()      (HW_USBC_UOG1_OTGSC.U)
#define HW_USBC_UOG1_OTGSC_WR(v)     (HW_USBC_UOG1_OTGSC.U = (v))
#define HW_USBC_UOG1_OTGSC_SET(v)    (HW_USBC_UOG1_OTGSC_WR(HW_USBC_UOG1_OTGSC_RD() |  (v)))
#define HW_USBC_UOG1_OTGSC_CLR(v)    (HW_USBC_UOG1_OTGSC_WR(HW_USBC_UOG1_OTGSC_RD() & ~(v)))
#define HW_USBC_UOG1_OTGSC_TOG(v)    (HW_USBC_UOG1_OTGSC_WR(HW_USBC_UOG1_OTGSC_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_OTGSC bitfields
 */

/* --- Register HW_USBC_UOG1_OTGSC, field VD[0] (RW)
 *
 * VBUS_Discharge - Read/Write. Setting this bit causes VBus to discharge through a resistor.
 */

#define BP_USBC_UOG1_OTGSC_VD      (0)      //!< Bit position for USBC_UOG1_OTGSC_VD.
#define BM_USBC_UOG1_OTGSC_VD      (0x00000001)  //!< Bit mask for USBC_UOG1_OTGSC_VD.

//! @brief Get value of USBC_UOG1_OTGSC_VD from a register value.
#define BG_USBC_UOG1_OTGSC_VD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_VD) >> BP_USBC_UOG1_OTGSC_VD)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_VD.
#define BF_USBC_UOG1_OTGSC_VD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_VD) & BM_USBC_UOG1_OTGSC_VD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the VD field to a new value.
#define BW_USBC_UOG1_OTGSC_VD(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_VD) | BF_USBC_UOG1_OTGSC_VD(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field VC[1] (RW)
 *
 * VBUS Charge - Read/Write. Setting this bit causes the VBus line to be charged. This is used for
 * VBus pulsing during SRP.
 */

#define BP_USBC_UOG1_OTGSC_VC      (1)      //!< Bit position for USBC_UOG1_OTGSC_VC.
#define BM_USBC_UOG1_OTGSC_VC      (0x00000002)  //!< Bit mask for USBC_UOG1_OTGSC_VC.

//! @brief Get value of USBC_UOG1_OTGSC_VC from a register value.
#define BG_USBC_UOG1_OTGSC_VC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_VC) >> BP_USBC_UOG1_OTGSC_VC)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_VC.
#define BF_USBC_UOG1_OTGSC_VC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_VC) & BM_USBC_UOG1_OTGSC_VC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the VC field to a new value.
#define BW_USBC_UOG1_OTGSC_VC(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_VC) | BF_USBC_UOG1_OTGSC_VC(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field OT[3] (RW)
 *
 * OTG Termination - Read/Write. This bit must be set when the OTG device is in device mode, this
 * controls the pulldown on DM.
 */

#define BP_USBC_UOG1_OTGSC_OT      (3)      //!< Bit position for USBC_UOG1_OTGSC_OT.
#define BM_USBC_UOG1_OTGSC_OT      (0x00000008)  //!< Bit mask for USBC_UOG1_OTGSC_OT.

//! @brief Get value of USBC_UOG1_OTGSC_OT from a register value.
#define BG_USBC_UOG1_OTGSC_OT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_OT) >> BP_USBC_UOG1_OTGSC_OT)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_OT.
#define BF_USBC_UOG1_OTGSC_OT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_OT) & BM_USBC_UOG1_OTGSC_OT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OT field to a new value.
#define BW_USBC_UOG1_OTGSC_OT(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_OT) | BF_USBC_UOG1_OTGSC_OT(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field DP[4] (RW)
 *
 * Data Pulsing - Read/Write. Setting this bit causes the pullup on DP to be asserted for data
 * pulsing during SRP.
 */

#define BP_USBC_UOG1_OTGSC_DP      (4)      //!< Bit position for USBC_UOG1_OTGSC_DP.
#define BM_USBC_UOG1_OTGSC_DP      (0x00000010)  //!< Bit mask for USBC_UOG1_OTGSC_DP.

//! @brief Get value of USBC_UOG1_OTGSC_DP from a register value.
#define BG_USBC_UOG1_OTGSC_DP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_DP) >> BP_USBC_UOG1_OTGSC_DP)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_DP.
#define BF_USBC_UOG1_OTGSC_DP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_DP) & BM_USBC_UOG1_OTGSC_DP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DP field to a new value.
#define BW_USBC_UOG1_OTGSC_DP(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_DP) | BF_USBC_UOG1_OTGSC_DP(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field IDPU[5] (RW)
 *
 * ID Pullup - Read/Write This bit provide control over the ID pull-up resister; 0 = off, 1 = on
 * [default]. When this bit is 0, the ID input will not be sampled.
 */

#define BP_USBC_UOG1_OTGSC_IDPU      (5)      //!< Bit position for USBC_UOG1_OTGSC_IDPU.
#define BM_USBC_UOG1_OTGSC_IDPU      (0x00000020)  //!< Bit mask for USBC_UOG1_OTGSC_IDPU.

//! @brief Get value of USBC_UOG1_OTGSC_IDPU from a register value.
#define BG_USBC_UOG1_OTGSC_IDPU(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_IDPU) >> BP_USBC_UOG1_OTGSC_IDPU)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_IDPU.
#define BF_USBC_UOG1_OTGSC_IDPU(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_IDPU) & BM_USBC_UOG1_OTGSC_IDPU)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IDPU field to a new value.
#define BW_USBC_UOG1_OTGSC_IDPU(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_IDPU) | BF_USBC_UOG1_OTGSC_IDPU(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field ID[8] (RO)
 *
 * USB ID - Read Only. 0 = A device, 1 = B device
 */

#define BP_USBC_UOG1_OTGSC_ID      (8)      //!< Bit position for USBC_UOG1_OTGSC_ID.
#define BM_USBC_UOG1_OTGSC_ID      (0x00000100)  //!< Bit mask for USBC_UOG1_OTGSC_ID.

//! @brief Get value of USBC_UOG1_OTGSC_ID from a register value.
#define BG_USBC_UOG1_OTGSC_ID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_ID) >> BP_USBC_UOG1_OTGSC_ID)

/* --- Register HW_USBC_UOG1_OTGSC, field AVV[9] (RO)
 *
 * A VBus Valid - Read Only. Indicates VBus is above the A VBus valid threshold.
 */

#define BP_USBC_UOG1_OTGSC_AVV      (9)      //!< Bit position for USBC_UOG1_OTGSC_AVV.
#define BM_USBC_UOG1_OTGSC_AVV      (0x00000200)  //!< Bit mask for USBC_UOG1_OTGSC_AVV.

//! @brief Get value of USBC_UOG1_OTGSC_AVV from a register value.
#define BG_USBC_UOG1_OTGSC_AVV(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_AVV) >> BP_USBC_UOG1_OTGSC_AVV)

/* --- Register HW_USBC_UOG1_OTGSC, field ASV[10] (RO)
 *
 * A Session Valid - Read Only. Indicates VBus is above the A session valid threshold.
 */

#define BP_USBC_UOG1_OTGSC_ASV      (10)      //!< Bit position for USBC_UOG1_OTGSC_ASV.
#define BM_USBC_UOG1_OTGSC_ASV      (0x00000400)  //!< Bit mask for USBC_UOG1_OTGSC_ASV.

//! @brief Get value of USBC_UOG1_OTGSC_ASV from a register value.
#define BG_USBC_UOG1_OTGSC_ASV(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_ASV) >> BP_USBC_UOG1_OTGSC_ASV)

/* --- Register HW_USBC_UOG1_OTGSC, field BSV[11] (RO)
 *
 * B Session Valid - Read Only. Indicates VBus is above the B session valid threshold.
 */

#define BP_USBC_UOG1_OTGSC_BSV      (11)      //!< Bit position for USBC_UOG1_OTGSC_BSV.
#define BM_USBC_UOG1_OTGSC_BSV      (0x00000800)  //!< Bit mask for USBC_UOG1_OTGSC_BSV.

//! @brief Get value of USBC_UOG1_OTGSC_BSV from a register value.
#define BG_USBC_UOG1_OTGSC_BSV(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_BSV) >> BP_USBC_UOG1_OTGSC_BSV)

/* --- Register HW_USBC_UOG1_OTGSC, field BSE[12] (RO)
 *
 * B Session End - Read Only. Indicates VBus is below the B session end threshold.
 */

#define BP_USBC_UOG1_OTGSC_BSE      (12)      //!< Bit position for USBC_UOG1_OTGSC_BSE.
#define BM_USBC_UOG1_OTGSC_BSE      (0x00001000)  //!< Bit mask for USBC_UOG1_OTGSC_BSE.

//! @brief Get value of USBC_UOG1_OTGSC_BSE from a register value.
#define BG_USBC_UOG1_OTGSC_BSE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_BSE) >> BP_USBC_UOG1_OTGSC_BSE)

/* --- Register HW_USBC_UOG1_OTGSC, field _1MST[13] (RO)
 *
 * 1 millisecond timer toggle - Read Only. This bit toggles once per millisecond.
 */

#define BP_USBC_UOG1_OTGSC__1MST      (13)      //!< Bit position for USBC_UOG1_OTGSC__1MST.
#define BM_USBC_UOG1_OTGSC__1MST      (0x00002000)  //!< Bit mask for USBC_UOG1_OTGSC__1MST.

//! @brief Get value of USBC_UOG1_OTGSC__1MST from a register value.
#define BG_USBC_UOG1_OTGSC__1MST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC__1MST) >> BP_USBC_UOG1_OTGSC__1MST)

/* --- Register HW_USBC_UOG1_OTGSC, field DPS[14] (RO)
 *
 * Data Bus Pulsing Status - Read Only. A '1' indicates data bus pulsing is being detected on the
 * port.
 */

#define BP_USBC_UOG1_OTGSC_DPS      (14)      //!< Bit position for USBC_UOG1_OTGSC_DPS.
#define BM_USBC_UOG1_OTGSC_DPS      (0x00004000)  //!< Bit mask for USBC_UOG1_OTGSC_DPS.

//! @brief Get value of USBC_UOG1_OTGSC_DPS from a register value.
#define BG_USBC_UOG1_OTGSC_DPS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_DPS) >> BP_USBC_UOG1_OTGSC_DPS)

/* --- Register HW_USBC_UOG1_OTGSC, field IDIS[16] (RW)
 *
 * USB ID Interrupt Status - Read/Write. This bit is set when a change on the ID input has been
 * detected. Software must write a one to clear this bit.
 */

#define BP_USBC_UOG1_OTGSC_IDIS      (16)      //!< Bit position for USBC_UOG1_OTGSC_IDIS.
#define BM_USBC_UOG1_OTGSC_IDIS      (0x00010000)  //!< Bit mask for USBC_UOG1_OTGSC_IDIS.

//! @brief Get value of USBC_UOG1_OTGSC_IDIS from a register value.
#define BG_USBC_UOG1_OTGSC_IDIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_IDIS) >> BP_USBC_UOG1_OTGSC_IDIS)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_IDIS.
#define BF_USBC_UOG1_OTGSC_IDIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_IDIS) & BM_USBC_UOG1_OTGSC_IDIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IDIS field to a new value.
#define BW_USBC_UOG1_OTGSC_IDIS(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_IDIS) | BF_USBC_UOG1_OTGSC_IDIS(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field AVVIS[17] (RW)
 *
 * A VBus Valid Interrupt Status - Read/Write to Clear. This bit is set when VBus has either risen
 * above or fallen below the VBus valid threshold (4.4 VDC) on an A device. Software must write a
 * one to clear this bit.
 */

#define BP_USBC_UOG1_OTGSC_AVVIS      (17)      //!< Bit position for USBC_UOG1_OTGSC_AVVIS.
#define BM_USBC_UOG1_OTGSC_AVVIS      (0x00020000)  //!< Bit mask for USBC_UOG1_OTGSC_AVVIS.

//! @brief Get value of USBC_UOG1_OTGSC_AVVIS from a register value.
#define BG_USBC_UOG1_OTGSC_AVVIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_AVVIS) >> BP_USBC_UOG1_OTGSC_AVVIS)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_AVVIS.
#define BF_USBC_UOG1_OTGSC_AVVIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_AVVIS) & BM_USBC_UOG1_OTGSC_AVVIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AVVIS field to a new value.
#define BW_USBC_UOG1_OTGSC_AVVIS(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_AVVIS) | BF_USBC_UOG1_OTGSC_AVVIS(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field ASVIS[18] (RW)
 *
 * A Session Valid Interrupt Status - Read/Write to Clear. This bit is set when VBus has either
 * risen above or fallen below the A session valid threshold (0.8 VDC). Software must write a one to
 * clear this bit.
 */

#define BP_USBC_UOG1_OTGSC_ASVIS      (18)      //!< Bit position for USBC_UOG1_OTGSC_ASVIS.
#define BM_USBC_UOG1_OTGSC_ASVIS      (0x00040000)  //!< Bit mask for USBC_UOG1_OTGSC_ASVIS.

//! @brief Get value of USBC_UOG1_OTGSC_ASVIS from a register value.
#define BG_USBC_UOG1_OTGSC_ASVIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_ASVIS) >> BP_USBC_UOG1_OTGSC_ASVIS)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_ASVIS.
#define BF_USBC_UOG1_OTGSC_ASVIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_ASVIS) & BM_USBC_UOG1_OTGSC_ASVIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASVIS field to a new value.
#define BW_USBC_UOG1_OTGSC_ASVIS(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_ASVIS) | BF_USBC_UOG1_OTGSC_ASVIS(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field BSVIS[19] (RW)
 *
 * B Session Valid Interrupt Status - Read/Write to Clear. This bit is set when VBus has either
 * risen above or fallen below the B session valid threshold (0.8 VDC). Software must write a one to
 * clear this bit.
 */

#define BP_USBC_UOG1_OTGSC_BSVIS      (19)      //!< Bit position for USBC_UOG1_OTGSC_BSVIS.
#define BM_USBC_UOG1_OTGSC_BSVIS      (0x00080000)  //!< Bit mask for USBC_UOG1_OTGSC_BSVIS.

//! @brief Get value of USBC_UOG1_OTGSC_BSVIS from a register value.
#define BG_USBC_UOG1_OTGSC_BSVIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_BSVIS) >> BP_USBC_UOG1_OTGSC_BSVIS)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_BSVIS.
#define BF_USBC_UOG1_OTGSC_BSVIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_BSVIS) & BM_USBC_UOG1_OTGSC_BSVIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BSVIS field to a new value.
#define BW_USBC_UOG1_OTGSC_BSVIS(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_BSVIS) | BF_USBC_UOG1_OTGSC_BSVIS(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field BSEIS[20] (RW)
 *
 * B Session End Interrupt Status - Read/Write to Clear. This bit is set when VBus has fallen below
 * the B session end threshold. Software must write a one to clear this bit
 */

#define BP_USBC_UOG1_OTGSC_BSEIS      (20)      //!< Bit position for USBC_UOG1_OTGSC_BSEIS.
#define BM_USBC_UOG1_OTGSC_BSEIS      (0x00100000)  //!< Bit mask for USBC_UOG1_OTGSC_BSEIS.

//! @brief Get value of USBC_UOG1_OTGSC_BSEIS from a register value.
#define BG_USBC_UOG1_OTGSC_BSEIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_BSEIS) >> BP_USBC_UOG1_OTGSC_BSEIS)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_BSEIS.
#define BF_USBC_UOG1_OTGSC_BSEIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_BSEIS) & BM_USBC_UOG1_OTGSC_BSEIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BSEIS field to a new value.
#define BW_USBC_UOG1_OTGSC_BSEIS(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_BSEIS) | BF_USBC_UOG1_OTGSC_BSEIS(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field _1MSS[21] (RW)
 *
 * 1 millisecond timer Interrupt Status - Read/Write to Clear. This bit is set once every
 * millisecond. Software must write a one to clear this bit.
 */

#define BP_USBC_UOG1_OTGSC__1MSS      (21)      //!< Bit position for USBC_UOG1_OTGSC__1MSS.
#define BM_USBC_UOG1_OTGSC__1MSS      (0x00200000)  //!< Bit mask for USBC_UOG1_OTGSC__1MSS.

//! @brief Get value of USBC_UOG1_OTGSC__1MSS from a register value.
#define BG_USBC_UOG1_OTGSC__1MSS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC__1MSS) >> BP_USBC_UOG1_OTGSC__1MSS)

//! @brief Format value for bitfield USBC_UOG1_OTGSC__1MSS.
#define BF_USBC_UOG1_OTGSC__1MSS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC__1MSS) & BM_USBC_UOG1_OTGSC__1MSS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the _1MSS field to a new value.
#define BW_USBC_UOG1_OTGSC__1MSS(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC__1MSS) | BF_USBC_UOG1_OTGSC__1MSS(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field DPIS[22] (RW)
 *
 * Data Pulse Interrupt Status - Read/Write to Clear. This bit is set when data bus pulsing occurs
 * on DP or DM. Data bus pulsing is only detected when USBMODE.CM = Host (11) and PORTSC1(0)[PP] =
 * 0. Software must write a one to clear this bit.
 */

#define BP_USBC_UOG1_OTGSC_DPIS      (22)      //!< Bit position for USBC_UOG1_OTGSC_DPIS.
#define BM_USBC_UOG1_OTGSC_DPIS      (0x00400000)  //!< Bit mask for USBC_UOG1_OTGSC_DPIS.

//! @brief Get value of USBC_UOG1_OTGSC_DPIS from a register value.
#define BG_USBC_UOG1_OTGSC_DPIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_DPIS) >> BP_USBC_UOG1_OTGSC_DPIS)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_DPIS.
#define BF_USBC_UOG1_OTGSC_DPIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_DPIS) & BM_USBC_UOG1_OTGSC_DPIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPIS field to a new value.
#define BW_USBC_UOG1_OTGSC_DPIS(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_DPIS) | BF_USBC_UOG1_OTGSC_DPIS(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field IDIE[24] (RW)
 *
 * USB ID Interrupt Enable - Read/Write. Setting this bit enables the USB ID interrupt.
 */

#define BP_USBC_UOG1_OTGSC_IDIE      (24)      //!< Bit position for USBC_UOG1_OTGSC_IDIE.
#define BM_USBC_UOG1_OTGSC_IDIE      (0x01000000)  //!< Bit mask for USBC_UOG1_OTGSC_IDIE.

//! @brief Get value of USBC_UOG1_OTGSC_IDIE from a register value.
#define BG_USBC_UOG1_OTGSC_IDIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_IDIE) >> BP_USBC_UOG1_OTGSC_IDIE)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_IDIE.
#define BF_USBC_UOG1_OTGSC_IDIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_IDIE) & BM_USBC_UOG1_OTGSC_IDIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IDIE field to a new value.
#define BW_USBC_UOG1_OTGSC_IDIE(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_IDIE) | BF_USBC_UOG1_OTGSC_IDIE(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field AVVIE[25] (RW)
 *
 * A VBus Valid Interrupt Enable - Read/Write. Setting this bit enables the A VBus valid interrupt.
 */

#define BP_USBC_UOG1_OTGSC_AVVIE      (25)      //!< Bit position for USBC_UOG1_OTGSC_AVVIE.
#define BM_USBC_UOG1_OTGSC_AVVIE      (0x02000000)  //!< Bit mask for USBC_UOG1_OTGSC_AVVIE.

//! @brief Get value of USBC_UOG1_OTGSC_AVVIE from a register value.
#define BG_USBC_UOG1_OTGSC_AVVIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_AVVIE) >> BP_USBC_UOG1_OTGSC_AVVIE)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_AVVIE.
#define BF_USBC_UOG1_OTGSC_AVVIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_AVVIE) & BM_USBC_UOG1_OTGSC_AVVIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AVVIE field to a new value.
#define BW_USBC_UOG1_OTGSC_AVVIE(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_AVVIE) | BF_USBC_UOG1_OTGSC_AVVIE(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field ASVIE[26] (RW)
 *
 * A Session Valid Interrupt Enable - Read/Write. Setting this bit enables the A session valid
 * interrupt.
 */

#define BP_USBC_UOG1_OTGSC_ASVIE      (26)      //!< Bit position for USBC_UOG1_OTGSC_ASVIE.
#define BM_USBC_UOG1_OTGSC_ASVIE      (0x04000000)  //!< Bit mask for USBC_UOG1_OTGSC_ASVIE.

//! @brief Get value of USBC_UOG1_OTGSC_ASVIE from a register value.
#define BG_USBC_UOG1_OTGSC_ASVIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_ASVIE) >> BP_USBC_UOG1_OTGSC_ASVIE)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_ASVIE.
#define BF_USBC_UOG1_OTGSC_ASVIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_ASVIE) & BM_USBC_UOG1_OTGSC_ASVIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASVIE field to a new value.
#define BW_USBC_UOG1_OTGSC_ASVIE(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_ASVIE) | BF_USBC_UOG1_OTGSC_ASVIE(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field BSVIE[27] (RW)
 *
 * B Session Valid Interrupt Enable - Read/Write. Setting this bit enables the B session valid
 * interrupt.
 */

#define BP_USBC_UOG1_OTGSC_BSVIE      (27)      //!< Bit position for USBC_UOG1_OTGSC_BSVIE.
#define BM_USBC_UOG1_OTGSC_BSVIE      (0x08000000)  //!< Bit mask for USBC_UOG1_OTGSC_BSVIE.

//! @brief Get value of USBC_UOG1_OTGSC_BSVIE from a register value.
#define BG_USBC_UOG1_OTGSC_BSVIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_BSVIE) >> BP_USBC_UOG1_OTGSC_BSVIE)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_BSVIE.
#define BF_USBC_UOG1_OTGSC_BSVIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_BSVIE) & BM_USBC_UOG1_OTGSC_BSVIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BSVIE field to a new value.
#define BW_USBC_UOG1_OTGSC_BSVIE(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_BSVIE) | BF_USBC_UOG1_OTGSC_BSVIE(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field BSEIE[28] (RW)
 *
 * B Session End Interrupt Enable - Read/Write. Setting this bit enables the B session end
 * interrupt.
 */

#define BP_USBC_UOG1_OTGSC_BSEIE      (28)      //!< Bit position for USBC_UOG1_OTGSC_BSEIE.
#define BM_USBC_UOG1_OTGSC_BSEIE      (0x10000000)  //!< Bit mask for USBC_UOG1_OTGSC_BSEIE.

//! @brief Get value of USBC_UOG1_OTGSC_BSEIE from a register value.
#define BG_USBC_UOG1_OTGSC_BSEIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_BSEIE) >> BP_USBC_UOG1_OTGSC_BSEIE)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_BSEIE.
#define BF_USBC_UOG1_OTGSC_BSEIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_BSEIE) & BM_USBC_UOG1_OTGSC_BSEIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BSEIE field to a new value.
#define BW_USBC_UOG1_OTGSC_BSEIE(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_BSEIE) | BF_USBC_UOG1_OTGSC_BSEIE(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field _1MSE[29] (RW)
 *
 * 1 millisecond timer Interrupt Enable - Read/Write
 */

#define BP_USBC_UOG1_OTGSC__1MSE      (29)      //!< Bit position for USBC_UOG1_OTGSC__1MSE.
#define BM_USBC_UOG1_OTGSC__1MSE      (0x20000000)  //!< Bit mask for USBC_UOG1_OTGSC__1MSE.

//! @brief Get value of USBC_UOG1_OTGSC__1MSE from a register value.
#define BG_USBC_UOG1_OTGSC__1MSE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC__1MSE) >> BP_USBC_UOG1_OTGSC__1MSE)

//! @brief Format value for bitfield USBC_UOG1_OTGSC__1MSE.
#define BF_USBC_UOG1_OTGSC__1MSE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC__1MSE) & BM_USBC_UOG1_OTGSC__1MSE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the _1MSE field to a new value.
#define BW_USBC_UOG1_OTGSC__1MSE(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC__1MSE) | BF_USBC_UOG1_OTGSC__1MSE(v)))
#endif

/* --- Register HW_USBC_UOG1_OTGSC, field DPIE[30] (RW)
 *
 * Data Pulse Interrupt Enable
 */

#define BP_USBC_UOG1_OTGSC_DPIE      (30)      //!< Bit position for USBC_UOG1_OTGSC_DPIE.
#define BM_USBC_UOG1_OTGSC_DPIE      (0x40000000)  //!< Bit mask for USBC_UOG1_OTGSC_DPIE.

//! @brief Get value of USBC_UOG1_OTGSC_DPIE from a register value.
#define BG_USBC_UOG1_OTGSC_DPIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_OTGSC_DPIE) >> BP_USBC_UOG1_OTGSC_DPIE)

//! @brief Format value for bitfield USBC_UOG1_OTGSC_DPIE.
#define BF_USBC_UOG1_OTGSC_DPIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_OTGSC_DPIE) & BM_USBC_UOG1_OTGSC_DPIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPIE field to a new value.
#define BW_USBC_UOG1_OTGSC_DPIE(v)   (HW_USBC_UOG1_OTGSC_WR((HW_USBC_UOG1_OTGSC_RD() & ~BM_USBC_UOG1_OTGSC_DPIE) | BF_USBC_UOG1_OTGSC_DPIE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_USBMODE - USB Device Mode
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_USBMODE - USB Device Mode (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_usbc_uog1_usbmode
{
    reg32_t U;
    struct _hw_usbc_uog1_usbmode_bitfields
    {
        unsigned CM : 2; //!< [1:0] Controller Mode - R/WO.
        unsigned ES : 1; //!< [2] Endian Select - Read/Write.
        unsigned SLOM : 1; //!< [3] Setup Lockout Mode.
        unsigned SDIS : 1; //!< [4] Stream Disable Mode.
        unsigned RESERVED0 : 11; //!< [15:5] Reserved.
        unsigned RESERVED1 : 16; //!< [31:16] Reserved
    } B;
} hw_usbc_uog1_usbmode_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_USBMODE register
 */
#define HW_USBC_UOG1_USBMODE_ADDR      (REGS_USBC_BASE + 0x1a8)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_USBMODE           (*(volatile hw_usbc_uog1_usbmode_t *) HW_USBC_UOG1_USBMODE_ADDR)
#define HW_USBC_UOG1_USBMODE_RD()      (HW_USBC_UOG1_USBMODE.U)
#define HW_USBC_UOG1_USBMODE_WR(v)     (HW_USBC_UOG1_USBMODE.U = (v))
#define HW_USBC_UOG1_USBMODE_SET(v)    (HW_USBC_UOG1_USBMODE_WR(HW_USBC_UOG1_USBMODE_RD() |  (v)))
#define HW_USBC_UOG1_USBMODE_CLR(v)    (HW_USBC_UOG1_USBMODE_WR(HW_USBC_UOG1_USBMODE_RD() & ~(v)))
#define HW_USBC_UOG1_USBMODE_TOG(v)    (HW_USBC_UOG1_USBMODE_WR(HW_USBC_UOG1_USBMODE_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_USBMODE bitfields
 */

/* --- Register HW_USBC_UOG1_USBMODE, field CM[1:0] (RW)
 *
 * Controller Mode - R/WO. Controller mode is defaulted to the proper mode for host only and device
 * only implementations. For those designs that contain both host & device capability, the
 * controller defaults to an idle state and needs to be initialized to the desired operating mode
 * after reset. For combination host/device controllers, this register can only be written once
 * after reset. If it is necessary to switch modes, software must reset the controller by writing to
 * the RESET bit in the USBCMD register before reprogramming this register. For OTG controller core,
 * reset value is '00b'. For Host-only controller core, reset value is '11b'.
 *
 * Values:
 * 00 - Idle [Default for combination host/device]
 * 01 - Reserved
 * 10 - Device Controller [Default for device only controller]
 * 11 - Host Controller [Default for host only controller]
 */

#define BP_USBC_UOG1_USBMODE_CM      (0)      //!< Bit position for USBC_UOG1_USBMODE_CM.
#define BM_USBC_UOG1_USBMODE_CM      (0x00000003)  //!< Bit mask for USBC_UOG1_USBMODE_CM.

//! @brief Get value of USBC_UOG1_USBMODE_CM from a register value.
#define BG_USBC_UOG1_USBMODE_CM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBMODE_CM) >> BP_USBC_UOG1_USBMODE_CM)

//! @brief Format value for bitfield USBC_UOG1_USBMODE_CM.
#define BF_USBC_UOG1_USBMODE_CM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBMODE_CM) & BM_USBC_UOG1_USBMODE_CM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CM field to a new value.
#define BW_USBC_UOG1_USBMODE_CM(v)   (HW_USBC_UOG1_USBMODE_WR((HW_USBC_UOG1_USBMODE_RD() & ~BM_USBC_UOG1_USBMODE_CM) | BF_USBC_UOG1_USBMODE_CM(v)))
#endif


/* --- Register HW_USBC_UOG1_USBMODE, field ES[2] (RW)
 *
 * Endian Select - Read/Write. This bit can change the byte alignment of the transfer buffers to
 * match the host microprocessor. The bit fields in the microprocessor interface and the data
 * structures are unaffected by the value of this bit because they are based upon the 32-bit word.
 * Bit Meaning
 *
 * Values:
 * 0 - Little Endian [Default]
 * 1 - Big Endian
 */

#define BP_USBC_UOG1_USBMODE_ES      (2)      //!< Bit position for USBC_UOG1_USBMODE_ES.
#define BM_USBC_UOG1_USBMODE_ES      (0x00000004)  //!< Bit mask for USBC_UOG1_USBMODE_ES.

//! @brief Get value of USBC_UOG1_USBMODE_ES from a register value.
#define BG_USBC_UOG1_USBMODE_ES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBMODE_ES) >> BP_USBC_UOG1_USBMODE_ES)

//! @brief Format value for bitfield USBC_UOG1_USBMODE_ES.
#define BF_USBC_UOG1_USBMODE_ES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBMODE_ES) & BM_USBC_UOG1_USBMODE_ES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ES field to a new value.
#define BW_USBC_UOG1_USBMODE_ES(v)   (HW_USBC_UOG1_USBMODE_WR((HW_USBC_UOG1_USBMODE_RD() & ~BM_USBC_UOG1_USBMODE_ES) | BF_USBC_UOG1_USBMODE_ES(v)))
#endif


/* --- Register HW_USBC_UOG1_USBMODE, field SLOM[3] (RW)
 *
 * Setup Lockout Mode. In device mode, this bit controls behavior of the setup lock mechanism. See .
 *
 * Values:
 * 0 - Setup Lockouts On (default);
 * 1 - Setup Lockouts Off (DCD requires use of Setup Data Buffer Tripwire in .
 */

#define BP_USBC_UOG1_USBMODE_SLOM      (3)      //!< Bit position for USBC_UOG1_USBMODE_SLOM.
#define BM_USBC_UOG1_USBMODE_SLOM      (0x00000008)  //!< Bit mask for USBC_UOG1_USBMODE_SLOM.

//! @brief Get value of USBC_UOG1_USBMODE_SLOM from a register value.
#define BG_USBC_UOG1_USBMODE_SLOM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBMODE_SLOM) >> BP_USBC_UOG1_USBMODE_SLOM)

//! @brief Format value for bitfield USBC_UOG1_USBMODE_SLOM.
#define BF_USBC_UOG1_USBMODE_SLOM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBMODE_SLOM) & BM_USBC_UOG1_USBMODE_SLOM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SLOM field to a new value.
#define BW_USBC_UOG1_USBMODE_SLOM(v)   (HW_USBC_UOG1_USBMODE_WR((HW_USBC_UOG1_USBMODE_RD() & ~BM_USBC_UOG1_USBMODE_SLOM) | BF_USBC_UOG1_USBMODE_SLOM(v)))
#endif


/* --- Register HW_USBC_UOG1_USBMODE, field SDIS[4] (RW)
 *
 * Stream Disable Mode. (0 - Inactive [default]; 1 - Active) Device Mode: Setting to a '1' disables
 * double priming on both RX and TX for low bandwidth systems. This mode ensures that when the RX
 * and TX buffers are sufficient to contain an entire packet that the standard double buffering
 * scheme is disabled to prevent overruns/underruns in bandwidth limited systems. Note: In High
 * Speed Mode, all packets received are responded to with a NYET handshake when stream disable is
 * active. Host Mode: Setting to a '1' ensures that overruns/underruns of the latency FIFO are
 * eliminated for low bandwidth systems where the RX and TX buffers are sufficient to contain the
 * entire packet. Enabling stream disable also has the effect of ensuring the TX latency is filled
 * to capacity before the packet is launched onto the USB. Time duration to pre-fill the FIFO
 * becomes significant when stream disable is active. See and TXTTFILLTUNING [MPH Only] to
 * characterize the adjustments needed for the scheduler when using this feature. The use of this
 * feature substantially limits of the overall USB performance that can be achieved.
 */

#define BP_USBC_UOG1_USBMODE_SDIS      (4)      //!< Bit position for USBC_UOG1_USBMODE_SDIS.
#define BM_USBC_UOG1_USBMODE_SDIS      (0x00000010)  //!< Bit mask for USBC_UOG1_USBMODE_SDIS.

//! @brief Get value of USBC_UOG1_USBMODE_SDIS from a register value.
#define BG_USBC_UOG1_USBMODE_SDIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_USBMODE_SDIS) >> BP_USBC_UOG1_USBMODE_SDIS)

//! @brief Format value for bitfield USBC_UOG1_USBMODE_SDIS.
#define BF_USBC_UOG1_USBMODE_SDIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_USBMODE_SDIS) & BM_USBC_UOG1_USBMODE_SDIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SDIS field to a new value.
#define BW_USBC_UOG1_USBMODE_SDIS(v)   (HW_USBC_UOG1_USBMODE_WR((HW_USBC_UOG1_USBMODE_RD() & ~BM_USBC_UOG1_USBMODE_SDIS) | BF_USBC_UOG1_USBMODE_SDIS(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ENDPTSETUPSTAT - Endpoint Setup Status
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ENDPTSETUPSTAT - Endpoint Setup Status (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_usbc_uog1_endptsetupstat
{
    reg32_t U;
    struct _hw_usbc_uog1_endptsetupstat_bitfields
    {
        unsigned ENDPTSETUPSTAT : 16; //!< [15:0] Setup Endpoint Status.
        unsigned RESERVED0 : 16; //!< [31:16] Reserved
    } B;
} hw_usbc_uog1_endptsetupstat_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ENDPTSETUPSTAT register
 */
#define HW_USBC_UOG1_ENDPTSETUPSTAT_ADDR      (REGS_USBC_BASE + 0x1ac)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ENDPTSETUPSTAT           (*(volatile hw_usbc_uog1_endptsetupstat_t *) HW_USBC_UOG1_ENDPTSETUPSTAT_ADDR)
#define HW_USBC_UOG1_ENDPTSETUPSTAT_RD()      (HW_USBC_UOG1_ENDPTSETUPSTAT.U)
#define HW_USBC_UOG1_ENDPTSETUPSTAT_WR(v)     (HW_USBC_UOG1_ENDPTSETUPSTAT.U = (v))
#define HW_USBC_UOG1_ENDPTSETUPSTAT_SET(v)    (HW_USBC_UOG1_ENDPTSETUPSTAT_WR(HW_USBC_UOG1_ENDPTSETUPSTAT_RD() |  (v)))
#define HW_USBC_UOG1_ENDPTSETUPSTAT_CLR(v)    (HW_USBC_UOG1_ENDPTSETUPSTAT_WR(HW_USBC_UOG1_ENDPTSETUPSTAT_RD() & ~(v)))
#define HW_USBC_UOG1_ENDPTSETUPSTAT_TOG(v)    (HW_USBC_UOG1_ENDPTSETUPSTAT_WR(HW_USBC_UOG1_ENDPTSETUPSTAT_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_ENDPTSETUPSTAT bitfields
 */

/* --- Register HW_USBC_UOG1_ENDPTSETUPSTAT, field ENDPTSETUPSTAT[15:0] (RW)
 *
 * Setup Endpoint Status. For every setup transaction that is received, a corresponding bit in this
 * register is set to one. Software must clear or acknowledge the setup transfer by writing a one to
 * a respective bit after it has read the setup data from Queue head. The response to a setup packet
 * as in the order of operations and total response time is crucial to limit bus time outs while the
 * setup lock our mechanism is engaged. See in the Device Operational Model. This register is only
 * used in device mode.
 */

#define BP_USBC_UOG1_ENDPTSETUPSTAT_ENDPTSETUPSTAT      (0)      //!< Bit position for USBC_UOG1_ENDPTSETUPSTAT_ENDPTSETUPSTAT.
#define BM_USBC_UOG1_ENDPTSETUPSTAT_ENDPTSETUPSTAT      (0x0000ffff)  //!< Bit mask for USBC_UOG1_ENDPTSETUPSTAT_ENDPTSETUPSTAT.

//! @brief Get value of USBC_UOG1_ENDPTSETUPSTAT_ENDPTSETUPSTAT from a register value.
#define BG_USBC_UOG1_ENDPTSETUPSTAT_ENDPTSETUPSTAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTSETUPSTAT_ENDPTSETUPSTAT) >> BP_USBC_UOG1_ENDPTSETUPSTAT_ENDPTSETUPSTAT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTSETUPSTAT_ENDPTSETUPSTAT.
#define BF_USBC_UOG1_ENDPTSETUPSTAT_ENDPTSETUPSTAT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTSETUPSTAT_ENDPTSETUPSTAT) & BM_USBC_UOG1_ENDPTSETUPSTAT_ENDPTSETUPSTAT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ENDPTSETUPSTAT field to a new value.
#define BW_USBC_UOG1_ENDPTSETUPSTAT_ENDPTSETUPSTAT(v)   (HW_USBC_UOG1_ENDPTSETUPSTAT_WR((HW_USBC_UOG1_ENDPTSETUPSTAT_RD() & ~BM_USBC_UOG1_ENDPTSETUPSTAT_ENDPTSETUPSTAT) | BF_USBC_UOG1_ENDPTSETUPSTAT_ENDPTSETUPSTAT(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ENDPTPRIME - Endpoint Prime
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ENDPTPRIME - Endpoint Prime (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is only used in device mode.  When software sets the prime bit for a given
 * endpoint, the device controller loads the transfer descriptor, pointed to by the queue head, such
 * that the endpoint is ready to transmit or receive when the host sends a request (IN/OUT token).
 * The endpoint will NAK all requests from the host until the endpoint is primed. The controller
 * will automatically re-prime the endpoint with a new transfer descriptor when one is found via the
 * next_dtd pointer of the current transfer descriptor. Hence, the prime bit must only be set by
 * software when a descriptor is added to the queue head.
 */
typedef union _hw_usbc_uog1_endptprime
{
    reg32_t U;
    struct _hw_usbc_uog1_endptprime_bitfields
    {
        unsigned PERB : 8; //!< [7:0] Prime Endpoint Receive Buffer - R/WS.
        unsigned RESERVED0 : 8; //!< [15:8] Reserved
        unsigned PETB : 8; //!< [23:16] Prime Endpoint Transmit Buffer - R/WS.
        unsigned RESERVED1 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_endptprime_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ENDPTPRIME register
 */
#define HW_USBC_UOG1_ENDPTPRIME_ADDR      (REGS_USBC_BASE + 0x1b0)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ENDPTPRIME           (*(volatile hw_usbc_uog1_endptprime_t *) HW_USBC_UOG1_ENDPTPRIME_ADDR)
#define HW_USBC_UOG1_ENDPTPRIME_RD()      (HW_USBC_UOG1_ENDPTPRIME.U)
#define HW_USBC_UOG1_ENDPTPRIME_WR(v)     (HW_USBC_UOG1_ENDPTPRIME.U = (v))
#define HW_USBC_UOG1_ENDPTPRIME_SET(v)    (HW_USBC_UOG1_ENDPTPRIME_WR(HW_USBC_UOG1_ENDPTPRIME_RD() |  (v)))
#define HW_USBC_UOG1_ENDPTPRIME_CLR(v)    (HW_USBC_UOG1_ENDPTPRIME_WR(HW_USBC_UOG1_ENDPTPRIME_RD() & ~(v)))
#define HW_USBC_UOG1_ENDPTPRIME_TOG(v)    (HW_USBC_UOG1_ENDPTPRIME_WR(HW_USBC_UOG1_ENDPTPRIME_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_ENDPTPRIME bitfields
 */

/* --- Register HW_USBC_UOG1_ENDPTPRIME, field PERB[7:0] (RW)
 *
 * Prime Endpoint Receive Buffer - R/WS. For each endpoint, a corresponding bit is used to request a
 * buffer prepare for a receive operation for when a USB host initiates a USB OUT transaction.
 * Software should write a one to the corresponding bit whenever posting a new transfer descriptor
 * to an endpoint queue head. Hardware automatically uses this bit to begin parsing for a new
 * transfer descriptor from the queue head and prepare a receive buffer. Hardware clears this bit
 * when the associated endpoint(s) is (are) successfully primed. These bits are momentarily set by
 * hardware during hardware re-priming operations when a dTD is retired, and the dQH is updated.
 * PERB[N] - Endpoint #N, N is in 0..7
 */

#define BP_USBC_UOG1_ENDPTPRIME_PERB      (0)      //!< Bit position for USBC_UOG1_ENDPTPRIME_PERB.
#define BM_USBC_UOG1_ENDPTPRIME_PERB      (0x000000ff)  //!< Bit mask for USBC_UOG1_ENDPTPRIME_PERB.

//! @brief Get value of USBC_UOG1_ENDPTPRIME_PERB from a register value.
#define BG_USBC_UOG1_ENDPTPRIME_PERB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTPRIME_PERB) >> BP_USBC_UOG1_ENDPTPRIME_PERB)

//! @brief Format value for bitfield USBC_UOG1_ENDPTPRIME_PERB.
#define BF_USBC_UOG1_ENDPTPRIME_PERB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTPRIME_PERB) & BM_USBC_UOG1_ENDPTPRIME_PERB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PERB field to a new value.
#define BW_USBC_UOG1_ENDPTPRIME_PERB(v)   (HW_USBC_UOG1_ENDPTPRIME_WR((HW_USBC_UOG1_ENDPTPRIME_RD() & ~BM_USBC_UOG1_ENDPTPRIME_PERB) | BF_USBC_UOG1_ENDPTPRIME_PERB(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTPRIME, field PETB[23:16] (RW)
 *
 * Prime Endpoint Transmit Buffer - R/WS. For each endpoint a corresponding bit is used to request
 * that a buffer is prepared for a transmit operation in order to respond to a USB IN/INTERRUPT
 * transaction. Software should write a one to the corresponding bit when posting a new transfer
 * descriptor to an endpoint queue head. Hardware automatically uses this bit to begin parsing for a
 * new transfer descriptor from the queue head and prepare a transmit buffer. Hardware clears this
 * bit when the associated endpoint(s) is (are) successfully primed. These bits are momentarily set
 * by hardware during hardware re-priming operations when a dTD is retired, and the dQH is updated.
 * PETB[N] - Endpoint #N, N is in 0..7
 */

#define BP_USBC_UOG1_ENDPTPRIME_PETB      (16)      //!< Bit position for USBC_UOG1_ENDPTPRIME_PETB.
#define BM_USBC_UOG1_ENDPTPRIME_PETB      (0x00ff0000)  //!< Bit mask for USBC_UOG1_ENDPTPRIME_PETB.

//! @brief Get value of USBC_UOG1_ENDPTPRIME_PETB from a register value.
#define BG_USBC_UOG1_ENDPTPRIME_PETB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTPRIME_PETB) >> BP_USBC_UOG1_ENDPTPRIME_PETB)

//! @brief Format value for bitfield USBC_UOG1_ENDPTPRIME_PETB.
#define BF_USBC_UOG1_ENDPTPRIME_PETB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTPRIME_PETB) & BM_USBC_UOG1_ENDPTPRIME_PETB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PETB field to a new value.
#define BW_USBC_UOG1_ENDPTPRIME_PETB(v)   (HW_USBC_UOG1_ENDPTPRIME_WR((HW_USBC_UOG1_ENDPTPRIME_RD() & ~BM_USBC_UOG1_ENDPTPRIME_PETB) | BF_USBC_UOG1_ENDPTPRIME_PETB(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ENDPTFLUSH - Endpoint Flush
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ENDPTFLUSH - Endpoint Flush (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is only used in device mode.
 */
typedef union _hw_usbc_uog1_endptflush
{
    reg32_t U;
    struct _hw_usbc_uog1_endptflush_bitfields
    {
        unsigned FERB : 8; //!< [7:0] Flush Endpoint Receive Buffer - R/WS.
        unsigned RESERVED0 : 8; //!< [15:8] Reserved
        unsigned FETB : 8; //!< [23:16] Flush Endpoint Transmit Buffer - R/WS.
        unsigned RESERVED1 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_endptflush_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ENDPTFLUSH register
 */
#define HW_USBC_UOG1_ENDPTFLUSH_ADDR      (REGS_USBC_BASE + 0x1b4)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ENDPTFLUSH           (*(volatile hw_usbc_uog1_endptflush_t *) HW_USBC_UOG1_ENDPTFLUSH_ADDR)
#define HW_USBC_UOG1_ENDPTFLUSH_RD()      (HW_USBC_UOG1_ENDPTFLUSH.U)
#define HW_USBC_UOG1_ENDPTFLUSH_WR(v)     (HW_USBC_UOG1_ENDPTFLUSH.U = (v))
#define HW_USBC_UOG1_ENDPTFLUSH_SET(v)    (HW_USBC_UOG1_ENDPTFLUSH_WR(HW_USBC_UOG1_ENDPTFLUSH_RD() |  (v)))
#define HW_USBC_UOG1_ENDPTFLUSH_CLR(v)    (HW_USBC_UOG1_ENDPTFLUSH_WR(HW_USBC_UOG1_ENDPTFLUSH_RD() & ~(v)))
#define HW_USBC_UOG1_ENDPTFLUSH_TOG(v)    (HW_USBC_UOG1_ENDPTFLUSH_WR(HW_USBC_UOG1_ENDPTFLUSH_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_ENDPTFLUSH bitfields
 */

/* --- Register HW_USBC_UOG1_ENDPTFLUSH, field FERB[7:0] (RW)
 *
 * Flush Endpoint Receive Buffer - R/WS. Writing one to a bit(s) causes the assocUOGiated
 * endpoint(s) to clear any primed buffers. If a packet is in progress for one of the associated
 * endpoints, then that transfer continues until completion. Hardware clears this register after the
 * endpoint flush operation is successful. FERB[N] - Endpoint #N, N is in 0..7
 */

#define BP_USBC_UOG1_ENDPTFLUSH_FERB      (0)      //!< Bit position for USBC_UOG1_ENDPTFLUSH_FERB.
#define BM_USBC_UOG1_ENDPTFLUSH_FERB      (0x000000ff)  //!< Bit mask for USBC_UOG1_ENDPTFLUSH_FERB.

//! @brief Get value of USBC_UOG1_ENDPTFLUSH_FERB from a register value.
#define BG_USBC_UOG1_ENDPTFLUSH_FERB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTFLUSH_FERB) >> BP_USBC_UOG1_ENDPTFLUSH_FERB)

//! @brief Format value for bitfield USBC_UOG1_ENDPTFLUSH_FERB.
#define BF_USBC_UOG1_ENDPTFLUSH_FERB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTFLUSH_FERB) & BM_USBC_UOG1_ENDPTFLUSH_FERB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FERB field to a new value.
#define BW_USBC_UOG1_ENDPTFLUSH_FERB(v)   (HW_USBC_UOG1_ENDPTFLUSH_WR((HW_USBC_UOG1_ENDPTFLUSH_RD() & ~BM_USBC_UOG1_ENDPTFLUSH_FERB) | BF_USBC_UOG1_ENDPTFLUSH_FERB(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTFLUSH, field FETB[23:16] (RW)
 *
 * Flush Endpoint Transmit Buffer - R/WS. Writing one to a bit(s) in this register causes the
 * associated endpoint(s) to clear any primed buffers. If a packet is in progress for one of the
 * associated endpoints, then that transfer continues until completion. Hardware clears this
 * register after the endpoint flush operation is successful. FETB[N] - Endpoint #N, N is in 0..7
 */

#define BP_USBC_UOG1_ENDPTFLUSH_FETB      (16)      //!< Bit position for USBC_UOG1_ENDPTFLUSH_FETB.
#define BM_USBC_UOG1_ENDPTFLUSH_FETB      (0x00ff0000)  //!< Bit mask for USBC_UOG1_ENDPTFLUSH_FETB.

//! @brief Get value of USBC_UOG1_ENDPTFLUSH_FETB from a register value.
#define BG_USBC_UOG1_ENDPTFLUSH_FETB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTFLUSH_FETB) >> BP_USBC_UOG1_ENDPTFLUSH_FETB)

//! @brief Format value for bitfield USBC_UOG1_ENDPTFLUSH_FETB.
#define BF_USBC_UOG1_ENDPTFLUSH_FETB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTFLUSH_FETB) & BM_USBC_UOG1_ENDPTFLUSH_FETB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FETB field to a new value.
#define BW_USBC_UOG1_ENDPTFLUSH_FETB(v)   (HW_USBC_UOG1_ENDPTFLUSH_WR((HW_USBC_UOG1_ENDPTFLUSH_RD() & ~BM_USBC_UOG1_ENDPTFLUSH_FETB) | BF_USBC_UOG1_ENDPTFLUSH_FETB(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ENDPTSTAT - Endpoint Status
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ENDPTSTAT - Endpoint Status (RO)
 *
 * Reset value: 0x00000000
 *
 * This register is only used in device mode.
 */
typedef union _hw_usbc_uog1_endptstat
{
    reg32_t U;
    struct _hw_usbc_uog1_endptstat_bitfields
    {
        unsigned ERBR : 8; //!< [7:0] Endpoint Receive Buffer Ready -- Read Only.
        unsigned RESERVED0 : 8; //!< [15:8] Reserved
        unsigned ETBR : 8; //!< [23:16] Endpoint Transmit Buffer Ready -- Read Only.
        unsigned RESERVED1 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_endptstat_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ENDPTSTAT register
 */
#define HW_USBC_UOG1_ENDPTSTAT_ADDR      (REGS_USBC_BASE + 0x1b8)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ENDPTSTAT           (*(volatile hw_usbc_uog1_endptstat_t *) HW_USBC_UOG1_ENDPTSTAT_ADDR)
#define HW_USBC_UOG1_ENDPTSTAT_RD()      (HW_USBC_UOG1_ENDPTSTAT.U)
#endif

/*
 * constants & macros for individual USBC_UOG1_ENDPTSTAT bitfields
 */

/* --- Register HW_USBC_UOG1_ENDPTSTAT, field ERBR[7:0] (RO)
 *
 * Endpoint Receive Buffer Ready -- Read Only. One bit for each endpoint indicates status of the
 * respective endpoint buffer. This bit is set to a one by the hardware as a response to receiving a
 * command from a corresponding bit in the ENDPRIME register. There is always a delay between
 * setting a bit in the ENDPRIME register and endpoint indicating ready. This delay time varies
 * based upon the current USB traffic and the number of bits set in the ENDPRIME register. Buffer
 * ready is cleared by USB reset, by the USB DMA system, or through the ENDPTFLUSH register. These
 * bits are momentarily cleared by hardware during hardware endpoint re-priming operations when a
 * dTD is retired, and the dQH is updated. ERBR[N] - Endpoint #N, N is in 0..7
 */

#define BP_USBC_UOG1_ENDPTSTAT_ERBR      (0)      //!< Bit position for USBC_UOG1_ENDPTSTAT_ERBR.
#define BM_USBC_UOG1_ENDPTSTAT_ERBR      (0x000000ff)  //!< Bit mask for USBC_UOG1_ENDPTSTAT_ERBR.

//! @brief Get value of USBC_UOG1_ENDPTSTAT_ERBR from a register value.
#define BG_USBC_UOG1_ENDPTSTAT_ERBR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTSTAT_ERBR) >> BP_USBC_UOG1_ENDPTSTAT_ERBR)

/* --- Register HW_USBC_UOG1_ENDPTSTAT, field ETBR[23:16] (RO)
 *
 * Endpoint Transmit Buffer Ready -- Read Only. One bit for each endpoint indicates status of the
 * respective endpoint buffer. This bit is set to one by the hardware as a response to receiving a
 * command from a corresponding bit in the ENDPTPRIME register. There is always a delay between
 * setting a bit in the ENDPTPRIME register and endpoint indicating ready. This delay time varies
 * based upon the current USB traffic and the number of bits set in the ENDPRIME register. Buffer
 * ready is cleared by USB reset, by the USB DMA system, or through the ENDPTFLUSH register. These
 * bits are momentarily cleared by hardware during hardware endpoint re-priming operations when a
 * dTD is retired, and the dQH is updated. ETBR[N] - Endpoint #N, N is in 0..7
 */

#define BP_USBC_UOG1_ENDPTSTAT_ETBR      (16)      //!< Bit position for USBC_UOG1_ENDPTSTAT_ETBR.
#define BM_USBC_UOG1_ENDPTSTAT_ETBR      (0x00ff0000)  //!< Bit mask for USBC_UOG1_ENDPTSTAT_ETBR.

//! @brief Get value of USBC_UOG1_ENDPTSTAT_ETBR from a register value.
#define BG_USBC_UOG1_ENDPTSTAT_ETBR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTSTAT_ETBR) >> BP_USBC_UOG1_ENDPTSTAT_ETBR)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ENDPTCOMPLETE - Endpoint Complete
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ENDPTCOMPLETE - Endpoint Complete (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is only used in device mode.
 */
typedef union _hw_usbc_uog1_endptcomplete
{
    reg32_t U;
    struct _hw_usbc_uog1_endptcomplete_bitfields
    {
        unsigned ERCE : 8; //!< [7:0] Endpoint Receive Complete Event - RW/C.
        unsigned RESERVED0 : 8; //!< [15:8] Reserved
        unsigned ETCE : 8; //!< [23:16] Endpoint Transmit Complete Event - R/WC.
        unsigned RESERVED1 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_endptcomplete_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ENDPTCOMPLETE register
 */
#define HW_USBC_UOG1_ENDPTCOMPLETE_ADDR      (REGS_USBC_BASE + 0x1bc)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ENDPTCOMPLETE           (*(volatile hw_usbc_uog1_endptcomplete_t *) HW_USBC_UOG1_ENDPTCOMPLETE_ADDR)
#define HW_USBC_UOG1_ENDPTCOMPLETE_RD()      (HW_USBC_UOG1_ENDPTCOMPLETE.U)
#define HW_USBC_UOG1_ENDPTCOMPLETE_WR(v)     (HW_USBC_UOG1_ENDPTCOMPLETE.U = (v))
#define HW_USBC_UOG1_ENDPTCOMPLETE_SET(v)    (HW_USBC_UOG1_ENDPTCOMPLETE_WR(HW_USBC_UOG1_ENDPTCOMPLETE_RD() |  (v)))
#define HW_USBC_UOG1_ENDPTCOMPLETE_CLR(v)    (HW_USBC_UOG1_ENDPTCOMPLETE_WR(HW_USBC_UOG1_ENDPTCOMPLETE_RD() & ~(v)))
#define HW_USBC_UOG1_ENDPTCOMPLETE_TOG(v)    (HW_USBC_UOG1_ENDPTCOMPLETE_WR(HW_USBC_UOG1_ENDPTCOMPLETE_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_ENDPTCOMPLETE bitfields
 */

/* --- Register HW_USBC_UOG1_ENDPTCOMPLETE, field ERCE[7:0] (RW)
 *
 * Endpoint Receive Complete Event - RW/C. Each bit indicates a received event (OUT/SETUP) occurred
 * and software should read the corresponding endpoint queue to determine the transfer status. If
 * the corresponding IOC bit is set in the Transfer Descriptor, then this bit is set simultaneously
 * with the USBINT . Writing one clears the corresponding bit in this register. ERCE[N] - Endpoint
 * #N, N is in 0..7
 */

#define BP_USBC_UOG1_ENDPTCOMPLETE_ERCE      (0)      //!< Bit position for USBC_UOG1_ENDPTCOMPLETE_ERCE.
#define BM_USBC_UOG1_ENDPTCOMPLETE_ERCE      (0x000000ff)  //!< Bit mask for USBC_UOG1_ENDPTCOMPLETE_ERCE.

//! @brief Get value of USBC_UOG1_ENDPTCOMPLETE_ERCE from a register value.
#define BG_USBC_UOG1_ENDPTCOMPLETE_ERCE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCOMPLETE_ERCE) >> BP_USBC_UOG1_ENDPTCOMPLETE_ERCE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCOMPLETE_ERCE.
#define BF_USBC_UOG1_ENDPTCOMPLETE_ERCE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCOMPLETE_ERCE) & BM_USBC_UOG1_ENDPTCOMPLETE_ERCE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ERCE field to a new value.
#define BW_USBC_UOG1_ENDPTCOMPLETE_ERCE(v)   (HW_USBC_UOG1_ENDPTCOMPLETE_WR((HW_USBC_UOG1_ENDPTCOMPLETE_RD() & ~BM_USBC_UOG1_ENDPTCOMPLETE_ERCE) | BF_USBC_UOG1_ENDPTCOMPLETE_ERCE(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCOMPLETE, field ETCE[23:16] (RW)
 *
 * Endpoint Transmit Complete Event - R/WC. Each bit indicates a transmit event (IN/INTERRUPT)
 * occurred and software should read the corresponding endpoint queue to determine the endpoint
 * status. If the corresponding IOC bit is set in the Transfer Descriptor, then this bit is set
 * simultaneously with the USBINT . Writing one clears the corresponding bit in this register.
 * ETCE[N] - Endpoint #N, N is in 0..7
 */

#define BP_USBC_UOG1_ENDPTCOMPLETE_ETCE      (16)      //!< Bit position for USBC_UOG1_ENDPTCOMPLETE_ETCE.
#define BM_USBC_UOG1_ENDPTCOMPLETE_ETCE      (0x00ff0000)  //!< Bit mask for USBC_UOG1_ENDPTCOMPLETE_ETCE.

//! @brief Get value of USBC_UOG1_ENDPTCOMPLETE_ETCE from a register value.
#define BG_USBC_UOG1_ENDPTCOMPLETE_ETCE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCOMPLETE_ETCE) >> BP_USBC_UOG1_ENDPTCOMPLETE_ETCE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCOMPLETE_ETCE.
#define BF_USBC_UOG1_ENDPTCOMPLETE_ETCE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCOMPLETE_ETCE) & BM_USBC_UOG1_ENDPTCOMPLETE_ETCE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ETCE field to a new value.
#define BW_USBC_UOG1_ENDPTCOMPLETE_ETCE(v)   (HW_USBC_UOG1_ENDPTCOMPLETE_WR((HW_USBC_UOG1_ENDPTCOMPLETE_RD() & ~BM_USBC_UOG1_ENDPTCOMPLETE_ETCE) | BF_USBC_UOG1_ENDPTCOMPLETE_ETCE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ENDPTCTRL0 - Endpoint Control0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ENDPTCTRL0 - Endpoint Control0 (RW)
 *
 * Reset value: 0x00800080
 *
 * Every Device implements Endpoint 0 as a control endpoint.
 */
typedef union _hw_usbc_uog1_endptctrl0
{
    reg32_t U;
    struct _hw_usbc_uog1_endptctrl0_bitfields
    {
        unsigned RXS : 1; //!< [0] RX Endpoint Stall - Read/Write 0 End Point OK.
        unsigned RESERVED0 : 1; //!< [1] Reserved
        unsigned RXT : 2; //!< [3:2] RX Endpoint Type - Read/Write 00 Control Endpoint0 is fixed as a Control End Point.
        unsigned RESERVED1 : 3; //!< [6:4] Reserved
        unsigned RXE : 1; //!< [7] RX Endpoint Enable 1 Enabled Endpoint0 is always enabled.
        unsigned RESERVED2 : 8; //!< [15:8] Reserved
        unsigned TXS : 1; //!< [16] TX Endpoint Stall - Read/Write 0 End Point OK [Default] 1 End Point Stalled Software can write a one to this bit to force the endpoint to return a STALL handshake to the Host.
        unsigned RESERVED3 : 1; //!< [17] Reserved
        unsigned TXT : 2; //!< [19:18] TX Endpoint Type - Read/Write 00 - Control Endpoint0 is fixed as a Control End Point.
        unsigned RESERVED4 : 3; //!< [22:20] Reserved
        unsigned TXE : 1; //!< [23] TX Endpoint Enable 1 Enabled Endpoint0 is always enabled.
        unsigned RESERVED5 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_endptctrl0_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ENDPTCTRL0 register
 */
#define HW_USBC_UOG1_ENDPTCTRL0_ADDR      (REGS_USBC_BASE + 0x1c0)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ENDPTCTRL0           (*(volatile hw_usbc_uog1_endptctrl0_t *) HW_USBC_UOG1_ENDPTCTRL0_ADDR)
#define HW_USBC_UOG1_ENDPTCTRL0_RD()      (HW_USBC_UOG1_ENDPTCTRL0.U)
#define HW_USBC_UOG1_ENDPTCTRL0_WR(v)     (HW_USBC_UOG1_ENDPTCTRL0.U = (v))
#define HW_USBC_UOG1_ENDPTCTRL0_SET(v)    (HW_USBC_UOG1_ENDPTCTRL0_WR(HW_USBC_UOG1_ENDPTCTRL0_RD() |  (v)))
#define HW_USBC_UOG1_ENDPTCTRL0_CLR(v)    (HW_USBC_UOG1_ENDPTCTRL0_WR(HW_USBC_UOG1_ENDPTCTRL0_RD() & ~(v)))
#define HW_USBC_UOG1_ENDPTCTRL0_TOG(v)    (HW_USBC_UOG1_ENDPTCTRL0_WR(HW_USBC_UOG1_ENDPTCTRL0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_ENDPTCTRL0 bitfields
 */

/* --- Register HW_USBC_UOG1_ENDPTCTRL0, field RXS[0] (RW)
 *
 * RX Endpoint Stall - Read/Write 0 End Point OK. [Default] 1 End Point Stalled Software can write a
 * one to this bit to force the endpoint to return a STALL handshake to the Host. It continues
 * returning STALL until the bit is cleared by software or it is automatically cleared upon receipt
 * of a new SETUP request.
 */

#define BP_USBC_UOG1_ENDPTCTRL0_RXS      (0)      //!< Bit position for USBC_UOG1_ENDPTCTRL0_RXS.
#define BM_USBC_UOG1_ENDPTCTRL0_RXS      (0x00000001)  //!< Bit mask for USBC_UOG1_ENDPTCTRL0_RXS.

//! @brief Get value of USBC_UOG1_ENDPTCTRL0_RXS from a register value.
#define BG_USBC_UOG1_ENDPTCTRL0_RXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL0_RXS) >> BP_USBC_UOG1_ENDPTCTRL0_RXS)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL0_RXS.
#define BF_USBC_UOG1_ENDPTCTRL0_RXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL0_RXS) & BM_USBC_UOG1_ENDPTCTRL0_RXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXS field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL0_RXS(v)   (HW_USBC_UOG1_ENDPTCTRL0_WR((HW_USBC_UOG1_ENDPTCTRL0_RD() & ~BM_USBC_UOG1_ENDPTCTRL0_RXS) | BF_USBC_UOG1_ENDPTCTRL0_RXS(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL0, field RXT[3:2] (RW)
 *
 * RX Endpoint Type - Read/Write 00 Control Endpoint0 is fixed as a Control End Point.
 */

#define BP_USBC_UOG1_ENDPTCTRL0_RXT      (2)      //!< Bit position for USBC_UOG1_ENDPTCTRL0_RXT.
#define BM_USBC_UOG1_ENDPTCTRL0_RXT      (0x0000000c)  //!< Bit mask for USBC_UOG1_ENDPTCTRL0_RXT.

//! @brief Get value of USBC_UOG1_ENDPTCTRL0_RXT from a register value.
#define BG_USBC_UOG1_ENDPTCTRL0_RXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL0_RXT) >> BP_USBC_UOG1_ENDPTCTRL0_RXT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL0_RXT.
#define BF_USBC_UOG1_ENDPTCTRL0_RXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL0_RXT) & BM_USBC_UOG1_ENDPTCTRL0_RXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXT field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL0_RXT(v)   (HW_USBC_UOG1_ENDPTCTRL0_WR((HW_USBC_UOG1_ENDPTCTRL0_RD() & ~BM_USBC_UOG1_ENDPTCTRL0_RXT) | BF_USBC_UOG1_ENDPTCTRL0_RXT(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL0, field RXE[7] (RW)
 *
 * RX Endpoint Enable 1 Enabled Endpoint0 is always enabled.
 */

#define BP_USBC_UOG1_ENDPTCTRL0_RXE      (7)      //!< Bit position for USBC_UOG1_ENDPTCTRL0_RXE.
#define BM_USBC_UOG1_ENDPTCTRL0_RXE      (0x00000080)  //!< Bit mask for USBC_UOG1_ENDPTCTRL0_RXE.

//! @brief Get value of USBC_UOG1_ENDPTCTRL0_RXE from a register value.
#define BG_USBC_UOG1_ENDPTCTRL0_RXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL0_RXE) >> BP_USBC_UOG1_ENDPTCTRL0_RXE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL0_RXE.
#define BF_USBC_UOG1_ENDPTCTRL0_RXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL0_RXE) & BM_USBC_UOG1_ENDPTCTRL0_RXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXE field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL0_RXE(v)   (HW_USBC_UOG1_ENDPTCTRL0_WR((HW_USBC_UOG1_ENDPTCTRL0_RD() & ~BM_USBC_UOG1_ENDPTCTRL0_RXE) | BF_USBC_UOG1_ENDPTCTRL0_RXE(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL0, field TXS[16] (RW)
 *
 * TX Endpoint Stall - Read/Write 0 End Point OK [Default] 1 End Point Stalled Software can write a
 * one to this bit to force the endpoint to return a STALL handshake to the Host. It continues
 * returning STALL until the bit is cleared by software or it is automatically cleared upon receipt
 * of a new SETUP request.
 */

#define BP_USBC_UOG1_ENDPTCTRL0_TXS      (16)      //!< Bit position for USBC_UOG1_ENDPTCTRL0_TXS.
#define BM_USBC_UOG1_ENDPTCTRL0_TXS      (0x00010000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL0_TXS.

//! @brief Get value of USBC_UOG1_ENDPTCTRL0_TXS from a register value.
#define BG_USBC_UOG1_ENDPTCTRL0_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL0_TXS) >> BP_USBC_UOG1_ENDPTCTRL0_TXS)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL0_TXS.
#define BF_USBC_UOG1_ENDPTCTRL0_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL0_TXS) & BM_USBC_UOG1_ENDPTCTRL0_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL0_TXS(v)   (HW_USBC_UOG1_ENDPTCTRL0_WR((HW_USBC_UOG1_ENDPTCTRL0_RD() & ~BM_USBC_UOG1_ENDPTCTRL0_TXS) | BF_USBC_UOG1_ENDPTCTRL0_TXS(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL0, field TXT[19:18] (RW)
 *
 * TX Endpoint Type - Read/Write 00 - Control Endpoint0 is fixed as a Control End Point.
 */

#define BP_USBC_UOG1_ENDPTCTRL0_TXT      (18)      //!< Bit position for USBC_UOG1_ENDPTCTRL0_TXT.
#define BM_USBC_UOG1_ENDPTCTRL0_TXT      (0x000c0000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL0_TXT.

//! @brief Get value of USBC_UOG1_ENDPTCTRL0_TXT from a register value.
#define BG_USBC_UOG1_ENDPTCTRL0_TXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL0_TXT) >> BP_USBC_UOG1_ENDPTCTRL0_TXT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL0_TXT.
#define BF_USBC_UOG1_ENDPTCTRL0_TXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL0_TXT) & BM_USBC_UOG1_ENDPTCTRL0_TXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXT field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL0_TXT(v)   (HW_USBC_UOG1_ENDPTCTRL0_WR((HW_USBC_UOG1_ENDPTCTRL0_RD() & ~BM_USBC_UOG1_ENDPTCTRL0_TXT) | BF_USBC_UOG1_ENDPTCTRL0_TXT(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL0, field TXE[23] (RW)
 *
 * TX Endpoint Enable 1 Enabled Endpoint0 is always enabled.
 */

#define BP_USBC_UOG1_ENDPTCTRL0_TXE      (23)      //!< Bit position for USBC_UOG1_ENDPTCTRL0_TXE.
#define BM_USBC_UOG1_ENDPTCTRL0_TXE      (0x00800000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL0_TXE.

//! @brief Get value of USBC_UOG1_ENDPTCTRL0_TXE from a register value.
#define BG_USBC_UOG1_ENDPTCTRL0_TXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL0_TXE) >> BP_USBC_UOG1_ENDPTCTRL0_TXE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL0_TXE.
#define BF_USBC_UOG1_ENDPTCTRL0_TXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL0_TXE) & BM_USBC_UOG1_ENDPTCTRL0_TXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXE field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL0_TXE(v)   (HW_USBC_UOG1_ENDPTCTRL0_WR((HW_USBC_UOG1_ENDPTCTRL0_RD() & ~BM_USBC_UOG1_ENDPTCTRL0_TXE) | BF_USBC_UOG1_ENDPTCTRL0_TXE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ENDPTCTRL1 - Endpoint Control 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ENDPTCTRL1 - Endpoint Control 1 (RW)
 *
 * Reset value: 0x00000000
 *
 * This is endpoint control register for endpoint 1 in device operation mode.  If one endpoint
 * direction is enabled and the paired endpoint of opposite direction is disabled then the unused
 * direction type must be changed from the default control-type to any other type (that is Bulk-
 * type). leaving an unconfigured endpoint control causes undefined behavior for the data pid
 * tracking on the active endpoint/direction.
 */
typedef union _hw_usbc_uog1_endptctrl1
{
    reg32_t U;
    struct _hw_usbc_uog1_endptctrl1_bitfields
    {
        unsigned RXS : 1; //!< [0] RX Endpoint Stall - Read/Write 0 End Point OK.
        unsigned RXD : 1; //!< [1] RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should always be written as zero.
        unsigned RXT : 2; //!< [3:2] RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
        unsigned RESERVED0 : 1; //!< [4] Reserved.
        unsigned RXI : 1; //!< [5] RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should always be written as zero.
        unsigned RXR : 1; //!< [6] RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the host and device.
        unsigned RXE : 1; //!< [7] RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED1 : 8; //!< [15:8] Reserved
        unsigned TXS : 1; //!< [16] TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint.
        unsigned TXD : 1; //!< [17] TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always be written as 0.
        unsigned TXT : 2; //!< [19:18] TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
        unsigned RESERVED2 : 1; //!< [20] Reserved
        unsigned TXI : 1; //!< [21] TX Data Toggle Inhibit 0 PID Sequencing Enabled.
        unsigned TXR : 1; //!< [22] TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the Host and device.
        unsigned TXE : 1; //!< [23] TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_endptctrl1_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ENDPTCTRL1 register
 */
#define HW_USBC_UOG1_ENDPTCTRL1_ADDR      (REGS_USBC_BASE + 0x1c4)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ENDPTCTRL1           (*(volatile hw_usbc_uog1_endptctrl1_t *) HW_USBC_UOG1_ENDPTCTRL1_ADDR)
#define HW_USBC_UOG1_ENDPTCTRL1_RD()      (HW_USBC_UOG1_ENDPTCTRL1.U)
#define HW_USBC_UOG1_ENDPTCTRL1_WR(v)     (HW_USBC_UOG1_ENDPTCTRL1.U = (v))
#define HW_USBC_UOG1_ENDPTCTRL1_SET(v)    (HW_USBC_UOG1_ENDPTCTRL1_WR(HW_USBC_UOG1_ENDPTCTRL1_RD() |  (v)))
#define HW_USBC_UOG1_ENDPTCTRL1_CLR(v)    (HW_USBC_UOG1_ENDPTCTRL1_WR(HW_USBC_UOG1_ENDPTCTRL1_RD() & ~(v)))
#define HW_USBC_UOG1_ENDPTCTRL1_TOG(v)    (HW_USBC_UOG1_ENDPTCTRL1_WR(HW_USBC_UOG1_ENDPTCTRL1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_ENDPTCTRL1 bitfields
 */

/* --- Register HW_USBC_UOG1_ENDPTCTRL1, field RXS[0] (RW)
 *
 * RX Endpoint Stall - Read/Write 0 End Point OK. [Default] 1 End Point Stalled This bit is set
 * automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control
 * Endpoint. It is cleared automatically upon receipt a SETUP request if this Endpoint is configured
 * as a Control Endpoint, Software can write a one to this bit to force the endpoint to return a
 * STALL handshake to the Host. It continues to returning STALL until this bit is either cleared by
 * software or automatically cleared as above.
 */

#define BP_USBC_UOG1_ENDPTCTRL1_RXS      (0)      //!< Bit position for USBC_UOG1_ENDPTCTRL1_RXS.
#define BM_USBC_UOG1_ENDPTCTRL1_RXS      (0x00000001)  //!< Bit mask for USBC_UOG1_ENDPTCTRL1_RXS.

//! @brief Get value of USBC_UOG1_ENDPTCTRL1_RXS from a register value.
#define BG_USBC_UOG1_ENDPTCTRL1_RXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL1_RXS) >> BP_USBC_UOG1_ENDPTCTRL1_RXS)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL1_RXS.
#define BF_USBC_UOG1_ENDPTCTRL1_RXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL1_RXS) & BM_USBC_UOG1_ENDPTCTRL1_RXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXS field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL1_RXS(v)   (HW_USBC_UOG1_ENDPTCTRL1_WR((HW_USBC_UOG1_ENDPTCTRL1_RD() & ~BM_USBC_UOG1_ENDPTCTRL1_RXS) | BF_USBC_UOG1_ENDPTCTRL1_RXS(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL1, field RXD[1] (RW)
 *
 * RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should
 * always be written as zero.
 */

#define BP_USBC_UOG1_ENDPTCTRL1_RXD      (1)      //!< Bit position for USBC_UOG1_ENDPTCTRL1_RXD.
#define BM_USBC_UOG1_ENDPTCTRL1_RXD      (0x00000002)  //!< Bit mask for USBC_UOG1_ENDPTCTRL1_RXD.

//! @brief Get value of USBC_UOG1_ENDPTCTRL1_RXD from a register value.
#define BG_USBC_UOG1_ENDPTCTRL1_RXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL1_RXD) >> BP_USBC_UOG1_ENDPTCTRL1_RXD)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL1_RXD.
#define BF_USBC_UOG1_ENDPTCTRL1_RXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL1_RXD) & BM_USBC_UOG1_ENDPTCTRL1_RXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXD field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL1_RXD(v)   (HW_USBC_UOG1_ENDPTCTRL1_WR((HW_USBC_UOG1_ENDPTCTRL1_RD() & ~BM_USBC_UOG1_ENDPTCTRL1_RXD) | BF_USBC_UOG1_ENDPTCTRL1_RXD(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL1, field RXT[3:2] (RW)
 *
 * RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
 */

#define BP_USBC_UOG1_ENDPTCTRL1_RXT      (2)      //!< Bit position for USBC_UOG1_ENDPTCTRL1_RXT.
#define BM_USBC_UOG1_ENDPTCTRL1_RXT      (0x0000000c)  //!< Bit mask for USBC_UOG1_ENDPTCTRL1_RXT.

//! @brief Get value of USBC_UOG1_ENDPTCTRL1_RXT from a register value.
#define BG_USBC_UOG1_ENDPTCTRL1_RXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL1_RXT) >> BP_USBC_UOG1_ENDPTCTRL1_RXT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL1_RXT.
#define BF_USBC_UOG1_ENDPTCTRL1_RXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL1_RXT) & BM_USBC_UOG1_ENDPTCTRL1_RXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXT field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL1_RXT(v)   (HW_USBC_UOG1_ENDPTCTRL1_WR((HW_USBC_UOG1_ENDPTCTRL1_RD() & ~BM_USBC_UOG1_ENDPTCTRL1_RXT) | BF_USBC_UOG1_ENDPTCTRL1_RXT(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL1, field RXI[5] (RW)
 *
 * RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should
 * always be written as zero. Writing a one to this bit causes this endpoint to ignore the data
 * toggle sequence and always accept data packet regardless of their data PID.
 */

#define BP_USBC_UOG1_ENDPTCTRL1_RXI      (5)      //!< Bit position for USBC_UOG1_ENDPTCTRL1_RXI.
#define BM_USBC_UOG1_ENDPTCTRL1_RXI      (0x00000020)  //!< Bit mask for USBC_UOG1_ENDPTCTRL1_RXI.

//! @brief Get value of USBC_UOG1_ENDPTCTRL1_RXI from a register value.
#define BG_USBC_UOG1_ENDPTCTRL1_RXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL1_RXI) >> BP_USBC_UOG1_ENDPTCTRL1_RXI)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL1_RXI.
#define BF_USBC_UOG1_ENDPTCTRL1_RXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL1_RXI) & BM_USBC_UOG1_ENDPTCTRL1_RXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXI field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL1_RXI(v)   (HW_USBC_UOG1_ENDPTCTRL1_WR((HW_USBC_UOG1_ENDPTCTRL1_RD() & ~BM_USBC_UOG1_ENDPTCTRL1_RXI) | BF_USBC_UOG1_ENDPTCTRL1_RXI(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL1, field RXR[6] (RW)
 *
 * RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the host and device.
 */

#define BP_USBC_UOG1_ENDPTCTRL1_RXR      (6)      //!< Bit position for USBC_UOG1_ENDPTCTRL1_RXR.
#define BM_USBC_UOG1_ENDPTCTRL1_RXR      (0x00000040)  //!< Bit mask for USBC_UOG1_ENDPTCTRL1_RXR.

//! @brief Get value of USBC_UOG1_ENDPTCTRL1_RXR from a register value.
#define BG_USBC_UOG1_ENDPTCTRL1_RXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL1_RXR) >> BP_USBC_UOG1_ENDPTCTRL1_RXR)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL1_RXR.
#define BF_USBC_UOG1_ENDPTCTRL1_RXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL1_RXR) & BM_USBC_UOG1_ENDPTCTRL1_RXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXR field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL1_RXR(v)   (HW_USBC_UOG1_ENDPTCTRL1_WR((HW_USBC_UOG1_ENDPTCTRL1_RD() & ~BM_USBC_UOG1_ENDPTCTRL1_RXR) | BF_USBC_UOG1_ENDPTCTRL1_RXR(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL1, field RXE[7] (RW)
 *
 * RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG1_ENDPTCTRL1_RXE      (7)      //!< Bit position for USBC_UOG1_ENDPTCTRL1_RXE.
#define BM_USBC_UOG1_ENDPTCTRL1_RXE      (0x00000080)  //!< Bit mask for USBC_UOG1_ENDPTCTRL1_RXE.

//! @brief Get value of USBC_UOG1_ENDPTCTRL1_RXE from a register value.
#define BG_USBC_UOG1_ENDPTCTRL1_RXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL1_RXE) >> BP_USBC_UOG1_ENDPTCTRL1_RXE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL1_RXE.
#define BF_USBC_UOG1_ENDPTCTRL1_RXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL1_RXE) & BM_USBC_UOG1_ENDPTCTRL1_RXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXE field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL1_RXE(v)   (HW_USBC_UOG1_ENDPTCTRL1_WR((HW_USBC_UOG1_ENDPTCTRL1_RD() & ~BM_USBC_UOG1_ENDPTCTRL1_RXE) | BF_USBC_UOG1_ENDPTCTRL1_RXE(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL1, field TXS[16] (RW)
 *
 * TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically
 * upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint. It is
 * cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control
 * Endpoint. Software can write a one to this bit to force the endpoint to return a STALL handshake
 * to the Host. It continues to returning STALL until this bit is either cleared by software or
 * automatically cleared as above. For CONTROL type endpoint, there is a slight delay (50 clocks
 * max) between the ENDPTSETUPSTAT begin cleared and hardware continuing to clear this bit. In most
 * systems, it is unlikely the DCD software will observe this delay. Take care that the STALL bit is
 * not set immediately after writing a '1' to it. Please follow this procedure: continually write
 * this STALL bit until it is set or until a new setup has ben received by checking the associated
 * ENDPTSETUPSTAT bit.
 */

#define BP_USBC_UOG1_ENDPTCTRL1_TXS      (16)      //!< Bit position for USBC_UOG1_ENDPTCTRL1_TXS.
#define BM_USBC_UOG1_ENDPTCTRL1_TXS      (0x00010000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL1_TXS.

//! @brief Get value of USBC_UOG1_ENDPTCTRL1_TXS from a register value.
#define BG_USBC_UOG1_ENDPTCTRL1_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL1_TXS) >> BP_USBC_UOG1_ENDPTCTRL1_TXS)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL1_TXS.
#define BF_USBC_UOG1_ENDPTCTRL1_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL1_TXS) & BM_USBC_UOG1_ENDPTCTRL1_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL1_TXS(v)   (HW_USBC_UOG1_ENDPTCTRL1_WR((HW_USBC_UOG1_ENDPTCTRL1_RD() & ~BM_USBC_UOG1_ENDPTCTRL1_TXS) | BF_USBC_UOG1_ENDPTCTRL1_TXS(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL1, field TXD[17] (RW)
 *
 * TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always
 * be written as 0.
 */

#define BP_USBC_UOG1_ENDPTCTRL1_TXD      (17)      //!< Bit position for USBC_UOG1_ENDPTCTRL1_TXD.
#define BM_USBC_UOG1_ENDPTCTRL1_TXD      (0x00020000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL1_TXD.

//! @brief Get value of USBC_UOG1_ENDPTCTRL1_TXD from a register value.
#define BG_USBC_UOG1_ENDPTCTRL1_TXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL1_TXD) >> BP_USBC_UOG1_ENDPTCTRL1_TXD)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL1_TXD.
#define BF_USBC_UOG1_ENDPTCTRL1_TXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL1_TXD) & BM_USBC_UOG1_ENDPTCTRL1_TXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXD field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL1_TXD(v)   (HW_USBC_UOG1_ENDPTCTRL1_WR((HW_USBC_UOG1_ENDPTCTRL1_RD() & ~BM_USBC_UOG1_ENDPTCTRL1_TXD) | BF_USBC_UOG1_ENDPTCTRL1_TXD(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL1, field TXT[19:18] (RW)
 *
 * TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 */

#define BP_USBC_UOG1_ENDPTCTRL1_TXT      (18)      //!< Bit position for USBC_UOG1_ENDPTCTRL1_TXT.
#define BM_USBC_UOG1_ENDPTCTRL1_TXT      (0x000c0000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL1_TXT.

//! @brief Get value of USBC_UOG1_ENDPTCTRL1_TXT from a register value.
#define BG_USBC_UOG1_ENDPTCTRL1_TXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL1_TXT) >> BP_USBC_UOG1_ENDPTCTRL1_TXT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL1_TXT.
#define BF_USBC_UOG1_ENDPTCTRL1_TXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL1_TXT) & BM_USBC_UOG1_ENDPTCTRL1_TXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXT field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL1_TXT(v)   (HW_USBC_UOG1_ENDPTCTRL1_WR((HW_USBC_UOG1_ENDPTCTRL1_RD() & ~BM_USBC_UOG1_ENDPTCTRL1_TXT) | BF_USBC_UOG1_ENDPTCTRL1_TXT(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL1, field TXI[21] (RW)
 *
 * TX Data Toggle Inhibit 0 PID Sequencing Enabled. [Default] 1 PID Sequencing Disabled. This bit is
 * only used for test and should always be written as zero. Writing a one to this bit causes this
 * endpoint to ignore the data toggle sequence and always transmit DATA0 for a data packet.
 */

#define BP_USBC_UOG1_ENDPTCTRL1_TXI      (21)      //!< Bit position for USBC_UOG1_ENDPTCTRL1_TXI.
#define BM_USBC_UOG1_ENDPTCTRL1_TXI      (0x00200000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL1_TXI.

//! @brief Get value of USBC_UOG1_ENDPTCTRL1_TXI from a register value.
#define BG_USBC_UOG1_ENDPTCTRL1_TXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL1_TXI) >> BP_USBC_UOG1_ENDPTCTRL1_TXI)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL1_TXI.
#define BF_USBC_UOG1_ENDPTCTRL1_TXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL1_TXI) & BM_USBC_UOG1_ENDPTCTRL1_TXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXI field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL1_TXI(v)   (HW_USBC_UOG1_ENDPTCTRL1_WR((HW_USBC_UOG1_ENDPTCTRL1_RD() & ~BM_USBC_UOG1_ENDPTCTRL1_TXI) | BF_USBC_UOG1_ENDPTCTRL1_TXI(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL1, field TXR[22] (RW)
 *
 * TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the Host and device.
 */

#define BP_USBC_UOG1_ENDPTCTRL1_TXR      (22)      //!< Bit position for USBC_UOG1_ENDPTCTRL1_TXR.
#define BM_USBC_UOG1_ENDPTCTRL1_TXR      (0x00400000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL1_TXR.

//! @brief Get value of USBC_UOG1_ENDPTCTRL1_TXR from a register value.
#define BG_USBC_UOG1_ENDPTCTRL1_TXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL1_TXR) >> BP_USBC_UOG1_ENDPTCTRL1_TXR)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL1_TXR.
#define BF_USBC_UOG1_ENDPTCTRL1_TXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL1_TXR) & BM_USBC_UOG1_ENDPTCTRL1_TXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXR field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL1_TXR(v)   (HW_USBC_UOG1_ENDPTCTRL1_WR((HW_USBC_UOG1_ENDPTCTRL1_RD() & ~BM_USBC_UOG1_ENDPTCTRL1_TXR) | BF_USBC_UOG1_ENDPTCTRL1_TXR(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL1, field TXE[23] (RW)
 *
 * TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG1_ENDPTCTRL1_TXE      (23)      //!< Bit position for USBC_UOG1_ENDPTCTRL1_TXE.
#define BM_USBC_UOG1_ENDPTCTRL1_TXE      (0x00800000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL1_TXE.

//! @brief Get value of USBC_UOG1_ENDPTCTRL1_TXE from a register value.
#define BG_USBC_UOG1_ENDPTCTRL1_TXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL1_TXE) >> BP_USBC_UOG1_ENDPTCTRL1_TXE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL1_TXE.
#define BF_USBC_UOG1_ENDPTCTRL1_TXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL1_TXE) & BM_USBC_UOG1_ENDPTCTRL1_TXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXE field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL1_TXE(v)   (HW_USBC_UOG1_ENDPTCTRL1_WR((HW_USBC_UOG1_ENDPTCTRL1_RD() & ~BM_USBC_UOG1_ENDPTCTRL1_TXE) | BF_USBC_UOG1_ENDPTCTRL1_TXE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ENDPTCTRL2 - Endpoint Control 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ENDPTCTRL2 - Endpoint Control 2 (RW)
 *
 * Reset value: 0x00000000
 *
 * This is endpoint control register for endpoint 2 in device operation mode.  If one endpoint
 * direction is enabled and the paired endpoint of opposite direction is disabled then the unused
 * direction type must be changed from the default control-type to any other type (that is Bulk-
 * type). leaving an unconfigured endpoint control causes undefined behavior for the data pid
 * tracking on the active endpoint/direction.
 */
typedef union _hw_usbc_uog1_endptctrl2
{
    reg32_t U;
    struct _hw_usbc_uog1_endptctrl2_bitfields
    {
        unsigned RXS : 1; //!< [0] RX Endpoint Stall - Read/Write 0 End Point OK.
        unsigned RXD : 1; //!< [1] RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should always be written as zero.
        unsigned RXT : 2; //!< [3:2] RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
        unsigned RESERVED0 : 1; //!< [4] Reserved.
        unsigned RXI : 1; //!< [5] RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should always be written as zero.
        unsigned RXR : 1; //!< [6] RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the host and device.
        unsigned RXE : 1; //!< [7] RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED1 : 8; //!< [15:8] Reserved
        unsigned TXS : 1; //!< [16] TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint.
        unsigned TXD : 1; //!< [17] TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always be written as 0.
        unsigned TXT : 2; //!< [19:18] TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
        unsigned RESERVED2 : 1; //!< [20] Reserved
        unsigned TXI : 1; //!< [21] TX Data Toggle Inhibit 0 PID Sequencing Enabled.
        unsigned TXR : 1; //!< [22] TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the Host and device.
        unsigned TXE : 1; //!< [23] TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_endptctrl2_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ENDPTCTRL2 register
 */
#define HW_USBC_UOG1_ENDPTCTRL2_ADDR      (REGS_USBC_BASE + 0x1c8)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ENDPTCTRL2           (*(volatile hw_usbc_uog1_endptctrl2_t *) HW_USBC_UOG1_ENDPTCTRL2_ADDR)
#define HW_USBC_UOG1_ENDPTCTRL2_RD()      (HW_USBC_UOG1_ENDPTCTRL2.U)
#define HW_USBC_UOG1_ENDPTCTRL2_WR(v)     (HW_USBC_UOG1_ENDPTCTRL2.U = (v))
#define HW_USBC_UOG1_ENDPTCTRL2_SET(v)    (HW_USBC_UOG1_ENDPTCTRL2_WR(HW_USBC_UOG1_ENDPTCTRL2_RD() |  (v)))
#define HW_USBC_UOG1_ENDPTCTRL2_CLR(v)    (HW_USBC_UOG1_ENDPTCTRL2_WR(HW_USBC_UOG1_ENDPTCTRL2_RD() & ~(v)))
#define HW_USBC_UOG1_ENDPTCTRL2_TOG(v)    (HW_USBC_UOG1_ENDPTCTRL2_WR(HW_USBC_UOG1_ENDPTCTRL2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_ENDPTCTRL2 bitfields
 */

/* --- Register HW_USBC_UOG1_ENDPTCTRL2, field RXS[0] (RW)
 *
 * RX Endpoint Stall - Read/Write 0 End Point OK. [Default] 1 End Point Stalled This bit is set
 * automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control
 * Endpoint. It is cleared automatically upon receipt a SETUP request if this Endpoint is configured
 * as a Control Endpoint, Software can write a one to this bit to force the endpoint to return a
 * STALL handshake to the Host. It continues to returning STALL until this bit is either cleared by
 * software or automatically cleared as above.
 */

#define BP_USBC_UOG1_ENDPTCTRL2_RXS      (0)      //!< Bit position for USBC_UOG1_ENDPTCTRL2_RXS.
#define BM_USBC_UOG1_ENDPTCTRL2_RXS      (0x00000001)  //!< Bit mask for USBC_UOG1_ENDPTCTRL2_RXS.

//! @brief Get value of USBC_UOG1_ENDPTCTRL2_RXS from a register value.
#define BG_USBC_UOG1_ENDPTCTRL2_RXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL2_RXS) >> BP_USBC_UOG1_ENDPTCTRL2_RXS)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL2_RXS.
#define BF_USBC_UOG1_ENDPTCTRL2_RXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL2_RXS) & BM_USBC_UOG1_ENDPTCTRL2_RXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXS field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL2_RXS(v)   (HW_USBC_UOG1_ENDPTCTRL2_WR((HW_USBC_UOG1_ENDPTCTRL2_RD() & ~BM_USBC_UOG1_ENDPTCTRL2_RXS) | BF_USBC_UOG1_ENDPTCTRL2_RXS(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL2, field RXD[1] (RW)
 *
 * RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should
 * always be written as zero.
 */

#define BP_USBC_UOG1_ENDPTCTRL2_RXD      (1)      //!< Bit position for USBC_UOG1_ENDPTCTRL2_RXD.
#define BM_USBC_UOG1_ENDPTCTRL2_RXD      (0x00000002)  //!< Bit mask for USBC_UOG1_ENDPTCTRL2_RXD.

//! @brief Get value of USBC_UOG1_ENDPTCTRL2_RXD from a register value.
#define BG_USBC_UOG1_ENDPTCTRL2_RXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL2_RXD) >> BP_USBC_UOG1_ENDPTCTRL2_RXD)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL2_RXD.
#define BF_USBC_UOG1_ENDPTCTRL2_RXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL2_RXD) & BM_USBC_UOG1_ENDPTCTRL2_RXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXD field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL2_RXD(v)   (HW_USBC_UOG1_ENDPTCTRL2_WR((HW_USBC_UOG1_ENDPTCTRL2_RD() & ~BM_USBC_UOG1_ENDPTCTRL2_RXD) | BF_USBC_UOG1_ENDPTCTRL2_RXD(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL2, field RXT[3:2] (RW)
 *
 * RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
 */

#define BP_USBC_UOG1_ENDPTCTRL2_RXT      (2)      //!< Bit position for USBC_UOG1_ENDPTCTRL2_RXT.
#define BM_USBC_UOG1_ENDPTCTRL2_RXT      (0x0000000c)  //!< Bit mask for USBC_UOG1_ENDPTCTRL2_RXT.

//! @brief Get value of USBC_UOG1_ENDPTCTRL2_RXT from a register value.
#define BG_USBC_UOG1_ENDPTCTRL2_RXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL2_RXT) >> BP_USBC_UOG1_ENDPTCTRL2_RXT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL2_RXT.
#define BF_USBC_UOG1_ENDPTCTRL2_RXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL2_RXT) & BM_USBC_UOG1_ENDPTCTRL2_RXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXT field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL2_RXT(v)   (HW_USBC_UOG1_ENDPTCTRL2_WR((HW_USBC_UOG1_ENDPTCTRL2_RD() & ~BM_USBC_UOG1_ENDPTCTRL2_RXT) | BF_USBC_UOG1_ENDPTCTRL2_RXT(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL2, field RXI[5] (RW)
 *
 * RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should
 * always be written as zero. Writing a one to this bit causes this endpoint to ignore the data
 * toggle sequence and always accept data packet regardless of their data PID.
 */

#define BP_USBC_UOG1_ENDPTCTRL2_RXI      (5)      //!< Bit position for USBC_UOG1_ENDPTCTRL2_RXI.
#define BM_USBC_UOG1_ENDPTCTRL2_RXI      (0x00000020)  //!< Bit mask for USBC_UOG1_ENDPTCTRL2_RXI.

//! @brief Get value of USBC_UOG1_ENDPTCTRL2_RXI from a register value.
#define BG_USBC_UOG1_ENDPTCTRL2_RXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL2_RXI) >> BP_USBC_UOG1_ENDPTCTRL2_RXI)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL2_RXI.
#define BF_USBC_UOG1_ENDPTCTRL2_RXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL2_RXI) & BM_USBC_UOG1_ENDPTCTRL2_RXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXI field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL2_RXI(v)   (HW_USBC_UOG1_ENDPTCTRL2_WR((HW_USBC_UOG1_ENDPTCTRL2_RD() & ~BM_USBC_UOG1_ENDPTCTRL2_RXI) | BF_USBC_UOG1_ENDPTCTRL2_RXI(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL2, field RXR[6] (RW)
 *
 * RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the host and device.
 */

#define BP_USBC_UOG1_ENDPTCTRL2_RXR      (6)      //!< Bit position for USBC_UOG1_ENDPTCTRL2_RXR.
#define BM_USBC_UOG1_ENDPTCTRL2_RXR      (0x00000040)  //!< Bit mask for USBC_UOG1_ENDPTCTRL2_RXR.

//! @brief Get value of USBC_UOG1_ENDPTCTRL2_RXR from a register value.
#define BG_USBC_UOG1_ENDPTCTRL2_RXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL2_RXR) >> BP_USBC_UOG1_ENDPTCTRL2_RXR)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL2_RXR.
#define BF_USBC_UOG1_ENDPTCTRL2_RXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL2_RXR) & BM_USBC_UOG1_ENDPTCTRL2_RXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXR field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL2_RXR(v)   (HW_USBC_UOG1_ENDPTCTRL2_WR((HW_USBC_UOG1_ENDPTCTRL2_RD() & ~BM_USBC_UOG1_ENDPTCTRL2_RXR) | BF_USBC_UOG1_ENDPTCTRL2_RXR(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL2, field RXE[7] (RW)
 *
 * RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG1_ENDPTCTRL2_RXE      (7)      //!< Bit position for USBC_UOG1_ENDPTCTRL2_RXE.
#define BM_USBC_UOG1_ENDPTCTRL2_RXE      (0x00000080)  //!< Bit mask for USBC_UOG1_ENDPTCTRL2_RXE.

//! @brief Get value of USBC_UOG1_ENDPTCTRL2_RXE from a register value.
#define BG_USBC_UOG1_ENDPTCTRL2_RXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL2_RXE) >> BP_USBC_UOG1_ENDPTCTRL2_RXE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL2_RXE.
#define BF_USBC_UOG1_ENDPTCTRL2_RXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL2_RXE) & BM_USBC_UOG1_ENDPTCTRL2_RXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXE field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL2_RXE(v)   (HW_USBC_UOG1_ENDPTCTRL2_WR((HW_USBC_UOG1_ENDPTCTRL2_RD() & ~BM_USBC_UOG1_ENDPTCTRL2_RXE) | BF_USBC_UOG1_ENDPTCTRL2_RXE(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL2, field TXS[16] (RW)
 *
 * TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically
 * upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint. It is
 * cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control
 * Endpoint. Software can write a one to this bit to force the endpoint to return a STALL handshake
 * to the Host. It continues to returning STALL until this bit is either cleared by software or
 * automatically cleared as above. For CONTROL type endpoint, there is a slight delay (50 clocks
 * max) between the ENDPTSETUPSTAT begin cleared and hardware continuing to clear this bit. In most
 * systems, it is unlikely the DCD software will observe this delay. Take care that the STALL bit is
 * not set immediately after writing a '1' to it. Please follow this procedure: continually write
 * this STALL bit until it is set or until a new setup has ben received by checking the associated
 * ENDPTSETUPSTAT bit.
 */

#define BP_USBC_UOG1_ENDPTCTRL2_TXS      (16)      //!< Bit position for USBC_UOG1_ENDPTCTRL2_TXS.
#define BM_USBC_UOG1_ENDPTCTRL2_TXS      (0x00010000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL2_TXS.

//! @brief Get value of USBC_UOG1_ENDPTCTRL2_TXS from a register value.
#define BG_USBC_UOG1_ENDPTCTRL2_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL2_TXS) >> BP_USBC_UOG1_ENDPTCTRL2_TXS)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL2_TXS.
#define BF_USBC_UOG1_ENDPTCTRL2_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL2_TXS) & BM_USBC_UOG1_ENDPTCTRL2_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL2_TXS(v)   (HW_USBC_UOG1_ENDPTCTRL2_WR((HW_USBC_UOG1_ENDPTCTRL2_RD() & ~BM_USBC_UOG1_ENDPTCTRL2_TXS) | BF_USBC_UOG1_ENDPTCTRL2_TXS(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL2, field TXD[17] (RW)
 *
 * TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always
 * be written as 0.
 */

#define BP_USBC_UOG1_ENDPTCTRL2_TXD      (17)      //!< Bit position for USBC_UOG1_ENDPTCTRL2_TXD.
#define BM_USBC_UOG1_ENDPTCTRL2_TXD      (0x00020000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL2_TXD.

//! @brief Get value of USBC_UOG1_ENDPTCTRL2_TXD from a register value.
#define BG_USBC_UOG1_ENDPTCTRL2_TXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL2_TXD) >> BP_USBC_UOG1_ENDPTCTRL2_TXD)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL2_TXD.
#define BF_USBC_UOG1_ENDPTCTRL2_TXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL2_TXD) & BM_USBC_UOG1_ENDPTCTRL2_TXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXD field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL2_TXD(v)   (HW_USBC_UOG1_ENDPTCTRL2_WR((HW_USBC_UOG1_ENDPTCTRL2_RD() & ~BM_USBC_UOG1_ENDPTCTRL2_TXD) | BF_USBC_UOG1_ENDPTCTRL2_TXD(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL2, field TXT[19:18] (RW)
 *
 * TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 */

#define BP_USBC_UOG1_ENDPTCTRL2_TXT      (18)      //!< Bit position for USBC_UOG1_ENDPTCTRL2_TXT.
#define BM_USBC_UOG1_ENDPTCTRL2_TXT      (0x000c0000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL2_TXT.

//! @brief Get value of USBC_UOG1_ENDPTCTRL2_TXT from a register value.
#define BG_USBC_UOG1_ENDPTCTRL2_TXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL2_TXT) >> BP_USBC_UOG1_ENDPTCTRL2_TXT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL2_TXT.
#define BF_USBC_UOG1_ENDPTCTRL2_TXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL2_TXT) & BM_USBC_UOG1_ENDPTCTRL2_TXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXT field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL2_TXT(v)   (HW_USBC_UOG1_ENDPTCTRL2_WR((HW_USBC_UOG1_ENDPTCTRL2_RD() & ~BM_USBC_UOG1_ENDPTCTRL2_TXT) | BF_USBC_UOG1_ENDPTCTRL2_TXT(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL2, field TXI[21] (RW)
 *
 * TX Data Toggle Inhibit 0 PID Sequencing Enabled. [Default] 1 PID Sequencing Disabled. This bit is
 * only used for test and should always be written as zero. Writing a one to this bit causes this
 * endpoint to ignore the data toggle sequence and always transmit DATA0 for a data packet.
 */

#define BP_USBC_UOG1_ENDPTCTRL2_TXI      (21)      //!< Bit position for USBC_UOG1_ENDPTCTRL2_TXI.
#define BM_USBC_UOG1_ENDPTCTRL2_TXI      (0x00200000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL2_TXI.

//! @brief Get value of USBC_UOG1_ENDPTCTRL2_TXI from a register value.
#define BG_USBC_UOG1_ENDPTCTRL2_TXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL2_TXI) >> BP_USBC_UOG1_ENDPTCTRL2_TXI)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL2_TXI.
#define BF_USBC_UOG1_ENDPTCTRL2_TXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL2_TXI) & BM_USBC_UOG1_ENDPTCTRL2_TXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXI field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL2_TXI(v)   (HW_USBC_UOG1_ENDPTCTRL2_WR((HW_USBC_UOG1_ENDPTCTRL2_RD() & ~BM_USBC_UOG1_ENDPTCTRL2_TXI) | BF_USBC_UOG1_ENDPTCTRL2_TXI(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL2, field TXR[22] (RW)
 *
 * TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the Host and device.
 */

#define BP_USBC_UOG1_ENDPTCTRL2_TXR      (22)      //!< Bit position for USBC_UOG1_ENDPTCTRL2_TXR.
#define BM_USBC_UOG1_ENDPTCTRL2_TXR      (0x00400000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL2_TXR.

//! @brief Get value of USBC_UOG1_ENDPTCTRL2_TXR from a register value.
#define BG_USBC_UOG1_ENDPTCTRL2_TXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL2_TXR) >> BP_USBC_UOG1_ENDPTCTRL2_TXR)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL2_TXR.
#define BF_USBC_UOG1_ENDPTCTRL2_TXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL2_TXR) & BM_USBC_UOG1_ENDPTCTRL2_TXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXR field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL2_TXR(v)   (HW_USBC_UOG1_ENDPTCTRL2_WR((HW_USBC_UOG1_ENDPTCTRL2_RD() & ~BM_USBC_UOG1_ENDPTCTRL2_TXR) | BF_USBC_UOG1_ENDPTCTRL2_TXR(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL2, field TXE[23] (RW)
 *
 * TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG1_ENDPTCTRL2_TXE      (23)      //!< Bit position for USBC_UOG1_ENDPTCTRL2_TXE.
#define BM_USBC_UOG1_ENDPTCTRL2_TXE      (0x00800000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL2_TXE.

//! @brief Get value of USBC_UOG1_ENDPTCTRL2_TXE from a register value.
#define BG_USBC_UOG1_ENDPTCTRL2_TXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL2_TXE) >> BP_USBC_UOG1_ENDPTCTRL2_TXE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL2_TXE.
#define BF_USBC_UOG1_ENDPTCTRL2_TXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL2_TXE) & BM_USBC_UOG1_ENDPTCTRL2_TXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXE field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL2_TXE(v)   (HW_USBC_UOG1_ENDPTCTRL2_WR((HW_USBC_UOG1_ENDPTCTRL2_RD() & ~BM_USBC_UOG1_ENDPTCTRL2_TXE) | BF_USBC_UOG1_ENDPTCTRL2_TXE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ENDPTCTRL3 - Endpoint Control 3
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ENDPTCTRL3 - Endpoint Control 3 (RW)
 *
 * Reset value: 0x00000000
 *
 * This is endpoint control register for endpoint 3 in device operation mode.  If one endpoint
 * direction is enabled and the paired endpoint of opposite direction is disabled then the unused
 * direction type must be changed from the default control-type to any other type (that is Bulk-
 * type). leaving an unconfigured endpoint control causes undefined behavior for the data pid
 * tracking on the active endpoint/direction.
 */
typedef union _hw_usbc_uog1_endptctrl3
{
    reg32_t U;
    struct _hw_usbc_uog1_endptctrl3_bitfields
    {
        unsigned RXS : 1; //!< [0] RX Endpoint Stall - Read/Write 0 End Point OK.
        unsigned RXD : 1; //!< [1] RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should always be written as zero.
        unsigned RXT : 2; //!< [3:2] RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
        unsigned RESERVED0 : 1; //!< [4] Reserved.
        unsigned RXI : 1; //!< [5] RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should always be written as zero.
        unsigned RXR : 1; //!< [6] RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the host and device.
        unsigned RXE : 1; //!< [7] RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED1 : 8; //!< [15:8] Reserved
        unsigned TXS : 1; //!< [16] TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint.
        unsigned TXD : 1; //!< [17] TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always be written as 0.
        unsigned TXT : 2; //!< [19:18] TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
        unsigned RESERVED2 : 1; //!< [20] Reserved
        unsigned TXI : 1; //!< [21] TX Data Toggle Inhibit 0 PID Sequencing Enabled.
        unsigned TXR : 1; //!< [22] TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the Host and device.
        unsigned TXE : 1; //!< [23] TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_endptctrl3_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ENDPTCTRL3 register
 */
#define HW_USBC_UOG1_ENDPTCTRL3_ADDR      (REGS_USBC_BASE + 0x1cc)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ENDPTCTRL3           (*(volatile hw_usbc_uog1_endptctrl3_t *) HW_USBC_UOG1_ENDPTCTRL3_ADDR)
#define HW_USBC_UOG1_ENDPTCTRL3_RD()      (HW_USBC_UOG1_ENDPTCTRL3.U)
#define HW_USBC_UOG1_ENDPTCTRL3_WR(v)     (HW_USBC_UOG1_ENDPTCTRL3.U = (v))
#define HW_USBC_UOG1_ENDPTCTRL3_SET(v)    (HW_USBC_UOG1_ENDPTCTRL3_WR(HW_USBC_UOG1_ENDPTCTRL3_RD() |  (v)))
#define HW_USBC_UOG1_ENDPTCTRL3_CLR(v)    (HW_USBC_UOG1_ENDPTCTRL3_WR(HW_USBC_UOG1_ENDPTCTRL3_RD() & ~(v)))
#define HW_USBC_UOG1_ENDPTCTRL3_TOG(v)    (HW_USBC_UOG1_ENDPTCTRL3_WR(HW_USBC_UOG1_ENDPTCTRL3_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_ENDPTCTRL3 bitfields
 */

/* --- Register HW_USBC_UOG1_ENDPTCTRL3, field RXS[0] (RW)
 *
 * RX Endpoint Stall - Read/Write 0 End Point OK. [Default] 1 End Point Stalled This bit is set
 * automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control
 * Endpoint. It is cleared automatically upon receipt a SETUP request if this Endpoint is configured
 * as a Control Endpoint, Software can write a one to this bit to force the endpoint to return a
 * STALL handshake to the Host. It continues to returning STALL until this bit is either cleared by
 * software or automatically cleared as above.
 */

#define BP_USBC_UOG1_ENDPTCTRL3_RXS      (0)      //!< Bit position for USBC_UOG1_ENDPTCTRL3_RXS.
#define BM_USBC_UOG1_ENDPTCTRL3_RXS      (0x00000001)  //!< Bit mask for USBC_UOG1_ENDPTCTRL3_RXS.

//! @brief Get value of USBC_UOG1_ENDPTCTRL3_RXS from a register value.
#define BG_USBC_UOG1_ENDPTCTRL3_RXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL3_RXS) >> BP_USBC_UOG1_ENDPTCTRL3_RXS)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL3_RXS.
#define BF_USBC_UOG1_ENDPTCTRL3_RXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL3_RXS) & BM_USBC_UOG1_ENDPTCTRL3_RXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXS field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL3_RXS(v)   (HW_USBC_UOG1_ENDPTCTRL3_WR((HW_USBC_UOG1_ENDPTCTRL3_RD() & ~BM_USBC_UOG1_ENDPTCTRL3_RXS) | BF_USBC_UOG1_ENDPTCTRL3_RXS(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL3, field RXD[1] (RW)
 *
 * RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should
 * always be written as zero.
 */

#define BP_USBC_UOG1_ENDPTCTRL3_RXD      (1)      //!< Bit position for USBC_UOG1_ENDPTCTRL3_RXD.
#define BM_USBC_UOG1_ENDPTCTRL3_RXD      (0x00000002)  //!< Bit mask for USBC_UOG1_ENDPTCTRL3_RXD.

//! @brief Get value of USBC_UOG1_ENDPTCTRL3_RXD from a register value.
#define BG_USBC_UOG1_ENDPTCTRL3_RXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL3_RXD) >> BP_USBC_UOG1_ENDPTCTRL3_RXD)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL3_RXD.
#define BF_USBC_UOG1_ENDPTCTRL3_RXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL3_RXD) & BM_USBC_UOG1_ENDPTCTRL3_RXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXD field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL3_RXD(v)   (HW_USBC_UOG1_ENDPTCTRL3_WR((HW_USBC_UOG1_ENDPTCTRL3_RD() & ~BM_USBC_UOG1_ENDPTCTRL3_RXD) | BF_USBC_UOG1_ENDPTCTRL3_RXD(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL3, field RXT[3:2] (RW)
 *
 * RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
 */

#define BP_USBC_UOG1_ENDPTCTRL3_RXT      (2)      //!< Bit position for USBC_UOG1_ENDPTCTRL3_RXT.
#define BM_USBC_UOG1_ENDPTCTRL3_RXT      (0x0000000c)  //!< Bit mask for USBC_UOG1_ENDPTCTRL3_RXT.

//! @brief Get value of USBC_UOG1_ENDPTCTRL3_RXT from a register value.
#define BG_USBC_UOG1_ENDPTCTRL3_RXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL3_RXT) >> BP_USBC_UOG1_ENDPTCTRL3_RXT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL3_RXT.
#define BF_USBC_UOG1_ENDPTCTRL3_RXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL3_RXT) & BM_USBC_UOG1_ENDPTCTRL3_RXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXT field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL3_RXT(v)   (HW_USBC_UOG1_ENDPTCTRL3_WR((HW_USBC_UOG1_ENDPTCTRL3_RD() & ~BM_USBC_UOG1_ENDPTCTRL3_RXT) | BF_USBC_UOG1_ENDPTCTRL3_RXT(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL3, field RXI[5] (RW)
 *
 * RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should
 * always be written as zero. Writing a one to this bit causes this endpoint to ignore the data
 * toggle sequence and always accept data packet regardless of their data PID.
 */

#define BP_USBC_UOG1_ENDPTCTRL3_RXI      (5)      //!< Bit position for USBC_UOG1_ENDPTCTRL3_RXI.
#define BM_USBC_UOG1_ENDPTCTRL3_RXI      (0x00000020)  //!< Bit mask for USBC_UOG1_ENDPTCTRL3_RXI.

//! @brief Get value of USBC_UOG1_ENDPTCTRL3_RXI from a register value.
#define BG_USBC_UOG1_ENDPTCTRL3_RXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL3_RXI) >> BP_USBC_UOG1_ENDPTCTRL3_RXI)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL3_RXI.
#define BF_USBC_UOG1_ENDPTCTRL3_RXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL3_RXI) & BM_USBC_UOG1_ENDPTCTRL3_RXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXI field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL3_RXI(v)   (HW_USBC_UOG1_ENDPTCTRL3_WR((HW_USBC_UOG1_ENDPTCTRL3_RD() & ~BM_USBC_UOG1_ENDPTCTRL3_RXI) | BF_USBC_UOG1_ENDPTCTRL3_RXI(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL3, field RXR[6] (RW)
 *
 * RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the host and device.
 */

#define BP_USBC_UOG1_ENDPTCTRL3_RXR      (6)      //!< Bit position for USBC_UOG1_ENDPTCTRL3_RXR.
#define BM_USBC_UOG1_ENDPTCTRL3_RXR      (0x00000040)  //!< Bit mask for USBC_UOG1_ENDPTCTRL3_RXR.

//! @brief Get value of USBC_UOG1_ENDPTCTRL3_RXR from a register value.
#define BG_USBC_UOG1_ENDPTCTRL3_RXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL3_RXR) >> BP_USBC_UOG1_ENDPTCTRL3_RXR)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL3_RXR.
#define BF_USBC_UOG1_ENDPTCTRL3_RXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL3_RXR) & BM_USBC_UOG1_ENDPTCTRL3_RXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXR field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL3_RXR(v)   (HW_USBC_UOG1_ENDPTCTRL3_WR((HW_USBC_UOG1_ENDPTCTRL3_RD() & ~BM_USBC_UOG1_ENDPTCTRL3_RXR) | BF_USBC_UOG1_ENDPTCTRL3_RXR(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL3, field RXE[7] (RW)
 *
 * RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG1_ENDPTCTRL3_RXE      (7)      //!< Bit position for USBC_UOG1_ENDPTCTRL3_RXE.
#define BM_USBC_UOG1_ENDPTCTRL3_RXE      (0x00000080)  //!< Bit mask for USBC_UOG1_ENDPTCTRL3_RXE.

//! @brief Get value of USBC_UOG1_ENDPTCTRL3_RXE from a register value.
#define BG_USBC_UOG1_ENDPTCTRL3_RXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL3_RXE) >> BP_USBC_UOG1_ENDPTCTRL3_RXE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL3_RXE.
#define BF_USBC_UOG1_ENDPTCTRL3_RXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL3_RXE) & BM_USBC_UOG1_ENDPTCTRL3_RXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXE field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL3_RXE(v)   (HW_USBC_UOG1_ENDPTCTRL3_WR((HW_USBC_UOG1_ENDPTCTRL3_RD() & ~BM_USBC_UOG1_ENDPTCTRL3_RXE) | BF_USBC_UOG1_ENDPTCTRL3_RXE(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL3, field TXS[16] (RW)
 *
 * TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically
 * upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint. It is
 * cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control
 * Endpoint. Software can write a one to this bit to force the endpoint to return a STALL handshake
 * to the Host. It continues to returning STALL until this bit is either cleared by software or
 * automatically cleared as above. For CONTROL type endpoint, there is a slight delay (50 clocks
 * max) between the ENDPTSETUPSTAT begin cleared and hardware continuing to clear this bit. In most
 * systems, it is unlikely the DCD software will observe this delay. Take care that the STALL bit is
 * not set immediately after writing a '1' to it. Please follow this procedure: continually write
 * this STALL bit until it is set or until a new setup has ben received by checking the associated
 * ENDPTSETUPSTAT bit.
 */

#define BP_USBC_UOG1_ENDPTCTRL3_TXS      (16)      //!< Bit position for USBC_UOG1_ENDPTCTRL3_TXS.
#define BM_USBC_UOG1_ENDPTCTRL3_TXS      (0x00010000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL3_TXS.

//! @brief Get value of USBC_UOG1_ENDPTCTRL3_TXS from a register value.
#define BG_USBC_UOG1_ENDPTCTRL3_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL3_TXS) >> BP_USBC_UOG1_ENDPTCTRL3_TXS)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL3_TXS.
#define BF_USBC_UOG1_ENDPTCTRL3_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL3_TXS) & BM_USBC_UOG1_ENDPTCTRL3_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL3_TXS(v)   (HW_USBC_UOG1_ENDPTCTRL3_WR((HW_USBC_UOG1_ENDPTCTRL3_RD() & ~BM_USBC_UOG1_ENDPTCTRL3_TXS) | BF_USBC_UOG1_ENDPTCTRL3_TXS(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL3, field TXD[17] (RW)
 *
 * TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always
 * be written as 0.
 */

#define BP_USBC_UOG1_ENDPTCTRL3_TXD      (17)      //!< Bit position for USBC_UOG1_ENDPTCTRL3_TXD.
#define BM_USBC_UOG1_ENDPTCTRL3_TXD      (0x00020000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL3_TXD.

//! @brief Get value of USBC_UOG1_ENDPTCTRL3_TXD from a register value.
#define BG_USBC_UOG1_ENDPTCTRL3_TXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL3_TXD) >> BP_USBC_UOG1_ENDPTCTRL3_TXD)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL3_TXD.
#define BF_USBC_UOG1_ENDPTCTRL3_TXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL3_TXD) & BM_USBC_UOG1_ENDPTCTRL3_TXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXD field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL3_TXD(v)   (HW_USBC_UOG1_ENDPTCTRL3_WR((HW_USBC_UOG1_ENDPTCTRL3_RD() & ~BM_USBC_UOG1_ENDPTCTRL3_TXD) | BF_USBC_UOG1_ENDPTCTRL3_TXD(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL3, field TXT[19:18] (RW)
 *
 * TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 */

#define BP_USBC_UOG1_ENDPTCTRL3_TXT      (18)      //!< Bit position for USBC_UOG1_ENDPTCTRL3_TXT.
#define BM_USBC_UOG1_ENDPTCTRL3_TXT      (0x000c0000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL3_TXT.

//! @brief Get value of USBC_UOG1_ENDPTCTRL3_TXT from a register value.
#define BG_USBC_UOG1_ENDPTCTRL3_TXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL3_TXT) >> BP_USBC_UOG1_ENDPTCTRL3_TXT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL3_TXT.
#define BF_USBC_UOG1_ENDPTCTRL3_TXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL3_TXT) & BM_USBC_UOG1_ENDPTCTRL3_TXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXT field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL3_TXT(v)   (HW_USBC_UOG1_ENDPTCTRL3_WR((HW_USBC_UOG1_ENDPTCTRL3_RD() & ~BM_USBC_UOG1_ENDPTCTRL3_TXT) | BF_USBC_UOG1_ENDPTCTRL3_TXT(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL3, field TXI[21] (RW)
 *
 * TX Data Toggle Inhibit 0 PID Sequencing Enabled. [Default] 1 PID Sequencing Disabled. This bit is
 * only used for test and should always be written as zero. Writing a one to this bit causes this
 * endpoint to ignore the data toggle sequence and always transmit DATA0 for a data packet.
 */

#define BP_USBC_UOG1_ENDPTCTRL3_TXI      (21)      //!< Bit position for USBC_UOG1_ENDPTCTRL3_TXI.
#define BM_USBC_UOG1_ENDPTCTRL3_TXI      (0x00200000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL3_TXI.

//! @brief Get value of USBC_UOG1_ENDPTCTRL3_TXI from a register value.
#define BG_USBC_UOG1_ENDPTCTRL3_TXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL3_TXI) >> BP_USBC_UOG1_ENDPTCTRL3_TXI)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL3_TXI.
#define BF_USBC_UOG1_ENDPTCTRL3_TXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL3_TXI) & BM_USBC_UOG1_ENDPTCTRL3_TXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXI field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL3_TXI(v)   (HW_USBC_UOG1_ENDPTCTRL3_WR((HW_USBC_UOG1_ENDPTCTRL3_RD() & ~BM_USBC_UOG1_ENDPTCTRL3_TXI) | BF_USBC_UOG1_ENDPTCTRL3_TXI(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL3, field TXR[22] (RW)
 *
 * TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the Host and device.
 */

#define BP_USBC_UOG1_ENDPTCTRL3_TXR      (22)      //!< Bit position for USBC_UOG1_ENDPTCTRL3_TXR.
#define BM_USBC_UOG1_ENDPTCTRL3_TXR      (0x00400000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL3_TXR.

//! @brief Get value of USBC_UOG1_ENDPTCTRL3_TXR from a register value.
#define BG_USBC_UOG1_ENDPTCTRL3_TXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL3_TXR) >> BP_USBC_UOG1_ENDPTCTRL3_TXR)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL3_TXR.
#define BF_USBC_UOG1_ENDPTCTRL3_TXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL3_TXR) & BM_USBC_UOG1_ENDPTCTRL3_TXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXR field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL3_TXR(v)   (HW_USBC_UOG1_ENDPTCTRL3_WR((HW_USBC_UOG1_ENDPTCTRL3_RD() & ~BM_USBC_UOG1_ENDPTCTRL3_TXR) | BF_USBC_UOG1_ENDPTCTRL3_TXR(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL3, field TXE[23] (RW)
 *
 * TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG1_ENDPTCTRL3_TXE      (23)      //!< Bit position for USBC_UOG1_ENDPTCTRL3_TXE.
#define BM_USBC_UOG1_ENDPTCTRL3_TXE      (0x00800000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL3_TXE.

//! @brief Get value of USBC_UOG1_ENDPTCTRL3_TXE from a register value.
#define BG_USBC_UOG1_ENDPTCTRL3_TXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL3_TXE) >> BP_USBC_UOG1_ENDPTCTRL3_TXE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL3_TXE.
#define BF_USBC_UOG1_ENDPTCTRL3_TXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL3_TXE) & BM_USBC_UOG1_ENDPTCTRL3_TXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXE field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL3_TXE(v)   (HW_USBC_UOG1_ENDPTCTRL3_WR((HW_USBC_UOG1_ENDPTCTRL3_RD() & ~BM_USBC_UOG1_ENDPTCTRL3_TXE) | BF_USBC_UOG1_ENDPTCTRL3_TXE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ENDPTCTRL4 - Endpoint Control 4
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ENDPTCTRL4 - Endpoint Control 4 (RW)
 *
 * Reset value: 0x00000000
 *
 * This is endpoint control register for endpoint 4 in device operation mode.  If one endpoint
 * direction is enabled and the paired endpoint of opposite direction is disabled then the unused
 * direction type must be changed from the default control-type to any other type (that is Bulk-
 * type). leaving an unconfigured endpoint control causes undefined behavior for the data pid
 * tracking on the active endpoint/direction.
 */
typedef union _hw_usbc_uog1_endptctrl4
{
    reg32_t U;
    struct _hw_usbc_uog1_endptctrl4_bitfields
    {
        unsigned RXS : 1; //!< [0] RX Endpoint Stall - Read/Write 0 End Point OK.
        unsigned RXD : 1; //!< [1] RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should always be written as zero.
        unsigned RXT : 2; //!< [3:2] RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
        unsigned RESERVED0 : 1; //!< [4] Reserved.
        unsigned RXI : 1; //!< [5] RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should always be written as zero.
        unsigned RXR : 1; //!< [6] RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the host and device.
        unsigned RXE : 1; //!< [7] RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED1 : 8; //!< [15:8] Reserved
        unsigned TXS : 1; //!< [16] TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint.
        unsigned TXD : 1; //!< [17] TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always be written as 0.
        unsigned TXT : 2; //!< [19:18] TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
        unsigned RESERVED2 : 1; //!< [20] Reserved
        unsigned TXI : 1; //!< [21] TX Data Toggle Inhibit 0 PID Sequencing Enabled.
        unsigned TXR : 1; //!< [22] TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the Host and device.
        unsigned TXE : 1; //!< [23] TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_endptctrl4_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ENDPTCTRL4 register
 */
#define HW_USBC_UOG1_ENDPTCTRL4_ADDR      (REGS_USBC_BASE + 0x1d0)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ENDPTCTRL4           (*(volatile hw_usbc_uog1_endptctrl4_t *) HW_USBC_UOG1_ENDPTCTRL4_ADDR)
#define HW_USBC_UOG1_ENDPTCTRL4_RD()      (HW_USBC_UOG1_ENDPTCTRL4.U)
#define HW_USBC_UOG1_ENDPTCTRL4_WR(v)     (HW_USBC_UOG1_ENDPTCTRL4.U = (v))
#define HW_USBC_UOG1_ENDPTCTRL4_SET(v)    (HW_USBC_UOG1_ENDPTCTRL4_WR(HW_USBC_UOG1_ENDPTCTRL4_RD() |  (v)))
#define HW_USBC_UOG1_ENDPTCTRL4_CLR(v)    (HW_USBC_UOG1_ENDPTCTRL4_WR(HW_USBC_UOG1_ENDPTCTRL4_RD() & ~(v)))
#define HW_USBC_UOG1_ENDPTCTRL4_TOG(v)    (HW_USBC_UOG1_ENDPTCTRL4_WR(HW_USBC_UOG1_ENDPTCTRL4_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_ENDPTCTRL4 bitfields
 */

/* --- Register HW_USBC_UOG1_ENDPTCTRL4, field RXS[0] (RW)
 *
 * RX Endpoint Stall - Read/Write 0 End Point OK. [Default] 1 End Point Stalled This bit is set
 * automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control
 * Endpoint. It is cleared automatically upon receipt a SETUP request if this Endpoint is configured
 * as a Control Endpoint, Software can write a one to this bit to force the endpoint to return a
 * STALL handshake to the Host. It continues to returning STALL until this bit is either cleared by
 * software or automatically cleared as above.
 */

#define BP_USBC_UOG1_ENDPTCTRL4_RXS      (0)      //!< Bit position for USBC_UOG1_ENDPTCTRL4_RXS.
#define BM_USBC_UOG1_ENDPTCTRL4_RXS      (0x00000001)  //!< Bit mask for USBC_UOG1_ENDPTCTRL4_RXS.

//! @brief Get value of USBC_UOG1_ENDPTCTRL4_RXS from a register value.
#define BG_USBC_UOG1_ENDPTCTRL4_RXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL4_RXS) >> BP_USBC_UOG1_ENDPTCTRL4_RXS)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL4_RXS.
#define BF_USBC_UOG1_ENDPTCTRL4_RXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL4_RXS) & BM_USBC_UOG1_ENDPTCTRL4_RXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXS field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL4_RXS(v)   (HW_USBC_UOG1_ENDPTCTRL4_WR((HW_USBC_UOG1_ENDPTCTRL4_RD() & ~BM_USBC_UOG1_ENDPTCTRL4_RXS) | BF_USBC_UOG1_ENDPTCTRL4_RXS(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL4, field RXD[1] (RW)
 *
 * RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should
 * always be written as zero.
 */

#define BP_USBC_UOG1_ENDPTCTRL4_RXD      (1)      //!< Bit position for USBC_UOG1_ENDPTCTRL4_RXD.
#define BM_USBC_UOG1_ENDPTCTRL4_RXD      (0x00000002)  //!< Bit mask for USBC_UOG1_ENDPTCTRL4_RXD.

//! @brief Get value of USBC_UOG1_ENDPTCTRL4_RXD from a register value.
#define BG_USBC_UOG1_ENDPTCTRL4_RXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL4_RXD) >> BP_USBC_UOG1_ENDPTCTRL4_RXD)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL4_RXD.
#define BF_USBC_UOG1_ENDPTCTRL4_RXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL4_RXD) & BM_USBC_UOG1_ENDPTCTRL4_RXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXD field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL4_RXD(v)   (HW_USBC_UOG1_ENDPTCTRL4_WR((HW_USBC_UOG1_ENDPTCTRL4_RD() & ~BM_USBC_UOG1_ENDPTCTRL4_RXD) | BF_USBC_UOG1_ENDPTCTRL4_RXD(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL4, field RXT[3:2] (RW)
 *
 * RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
 */

#define BP_USBC_UOG1_ENDPTCTRL4_RXT      (2)      //!< Bit position for USBC_UOG1_ENDPTCTRL4_RXT.
#define BM_USBC_UOG1_ENDPTCTRL4_RXT      (0x0000000c)  //!< Bit mask for USBC_UOG1_ENDPTCTRL4_RXT.

//! @brief Get value of USBC_UOG1_ENDPTCTRL4_RXT from a register value.
#define BG_USBC_UOG1_ENDPTCTRL4_RXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL4_RXT) >> BP_USBC_UOG1_ENDPTCTRL4_RXT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL4_RXT.
#define BF_USBC_UOG1_ENDPTCTRL4_RXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL4_RXT) & BM_USBC_UOG1_ENDPTCTRL4_RXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXT field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL4_RXT(v)   (HW_USBC_UOG1_ENDPTCTRL4_WR((HW_USBC_UOG1_ENDPTCTRL4_RD() & ~BM_USBC_UOG1_ENDPTCTRL4_RXT) | BF_USBC_UOG1_ENDPTCTRL4_RXT(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL4, field RXI[5] (RW)
 *
 * RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should
 * always be written as zero. Writing a one to this bit causes this endpoint to ignore the data
 * toggle sequence and always accept data packet regardless of their data PID.
 */

#define BP_USBC_UOG1_ENDPTCTRL4_RXI      (5)      //!< Bit position for USBC_UOG1_ENDPTCTRL4_RXI.
#define BM_USBC_UOG1_ENDPTCTRL4_RXI      (0x00000020)  //!< Bit mask for USBC_UOG1_ENDPTCTRL4_RXI.

//! @brief Get value of USBC_UOG1_ENDPTCTRL4_RXI from a register value.
#define BG_USBC_UOG1_ENDPTCTRL4_RXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL4_RXI) >> BP_USBC_UOG1_ENDPTCTRL4_RXI)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL4_RXI.
#define BF_USBC_UOG1_ENDPTCTRL4_RXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL4_RXI) & BM_USBC_UOG1_ENDPTCTRL4_RXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXI field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL4_RXI(v)   (HW_USBC_UOG1_ENDPTCTRL4_WR((HW_USBC_UOG1_ENDPTCTRL4_RD() & ~BM_USBC_UOG1_ENDPTCTRL4_RXI) | BF_USBC_UOG1_ENDPTCTRL4_RXI(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL4, field RXR[6] (RW)
 *
 * RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the host and device.
 */

#define BP_USBC_UOG1_ENDPTCTRL4_RXR      (6)      //!< Bit position for USBC_UOG1_ENDPTCTRL4_RXR.
#define BM_USBC_UOG1_ENDPTCTRL4_RXR      (0x00000040)  //!< Bit mask for USBC_UOG1_ENDPTCTRL4_RXR.

//! @brief Get value of USBC_UOG1_ENDPTCTRL4_RXR from a register value.
#define BG_USBC_UOG1_ENDPTCTRL4_RXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL4_RXR) >> BP_USBC_UOG1_ENDPTCTRL4_RXR)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL4_RXR.
#define BF_USBC_UOG1_ENDPTCTRL4_RXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL4_RXR) & BM_USBC_UOG1_ENDPTCTRL4_RXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXR field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL4_RXR(v)   (HW_USBC_UOG1_ENDPTCTRL4_WR((HW_USBC_UOG1_ENDPTCTRL4_RD() & ~BM_USBC_UOG1_ENDPTCTRL4_RXR) | BF_USBC_UOG1_ENDPTCTRL4_RXR(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL4, field RXE[7] (RW)
 *
 * RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG1_ENDPTCTRL4_RXE      (7)      //!< Bit position for USBC_UOG1_ENDPTCTRL4_RXE.
#define BM_USBC_UOG1_ENDPTCTRL4_RXE      (0x00000080)  //!< Bit mask for USBC_UOG1_ENDPTCTRL4_RXE.

//! @brief Get value of USBC_UOG1_ENDPTCTRL4_RXE from a register value.
#define BG_USBC_UOG1_ENDPTCTRL4_RXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL4_RXE) >> BP_USBC_UOG1_ENDPTCTRL4_RXE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL4_RXE.
#define BF_USBC_UOG1_ENDPTCTRL4_RXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL4_RXE) & BM_USBC_UOG1_ENDPTCTRL4_RXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXE field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL4_RXE(v)   (HW_USBC_UOG1_ENDPTCTRL4_WR((HW_USBC_UOG1_ENDPTCTRL4_RD() & ~BM_USBC_UOG1_ENDPTCTRL4_RXE) | BF_USBC_UOG1_ENDPTCTRL4_RXE(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL4, field TXS[16] (RW)
 *
 * TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically
 * upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint. It is
 * cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control
 * Endpoint. Software can write a one to this bit to force the endpoint to return a STALL handshake
 * to the Host. It continues to returning STALL until this bit is either cleared by software or
 * automatically cleared as above. For CONTROL type endpoint, there is a slight delay (50 clocks
 * max) between the ENDPTSETUPSTAT begin cleared and hardware continuing to clear this bit. In most
 * systems, it is unlikely the DCD software will observe this delay. Take care that the STALL bit is
 * not set immediately after writing a '1' to it. Please follow this procedure: continually write
 * this STALL bit until it is set or until a new setup has ben received by checking the associated
 * ENDPTSETUPSTAT bit.
 */

#define BP_USBC_UOG1_ENDPTCTRL4_TXS      (16)      //!< Bit position for USBC_UOG1_ENDPTCTRL4_TXS.
#define BM_USBC_UOG1_ENDPTCTRL4_TXS      (0x00010000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL4_TXS.

//! @brief Get value of USBC_UOG1_ENDPTCTRL4_TXS from a register value.
#define BG_USBC_UOG1_ENDPTCTRL4_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL4_TXS) >> BP_USBC_UOG1_ENDPTCTRL4_TXS)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL4_TXS.
#define BF_USBC_UOG1_ENDPTCTRL4_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL4_TXS) & BM_USBC_UOG1_ENDPTCTRL4_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL4_TXS(v)   (HW_USBC_UOG1_ENDPTCTRL4_WR((HW_USBC_UOG1_ENDPTCTRL4_RD() & ~BM_USBC_UOG1_ENDPTCTRL4_TXS) | BF_USBC_UOG1_ENDPTCTRL4_TXS(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL4, field TXD[17] (RW)
 *
 * TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always
 * be written as 0.
 */

#define BP_USBC_UOG1_ENDPTCTRL4_TXD      (17)      //!< Bit position for USBC_UOG1_ENDPTCTRL4_TXD.
#define BM_USBC_UOG1_ENDPTCTRL4_TXD      (0x00020000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL4_TXD.

//! @brief Get value of USBC_UOG1_ENDPTCTRL4_TXD from a register value.
#define BG_USBC_UOG1_ENDPTCTRL4_TXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL4_TXD) >> BP_USBC_UOG1_ENDPTCTRL4_TXD)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL4_TXD.
#define BF_USBC_UOG1_ENDPTCTRL4_TXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL4_TXD) & BM_USBC_UOG1_ENDPTCTRL4_TXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXD field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL4_TXD(v)   (HW_USBC_UOG1_ENDPTCTRL4_WR((HW_USBC_UOG1_ENDPTCTRL4_RD() & ~BM_USBC_UOG1_ENDPTCTRL4_TXD) | BF_USBC_UOG1_ENDPTCTRL4_TXD(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL4, field TXT[19:18] (RW)
 *
 * TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 */

#define BP_USBC_UOG1_ENDPTCTRL4_TXT      (18)      //!< Bit position for USBC_UOG1_ENDPTCTRL4_TXT.
#define BM_USBC_UOG1_ENDPTCTRL4_TXT      (0x000c0000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL4_TXT.

//! @brief Get value of USBC_UOG1_ENDPTCTRL4_TXT from a register value.
#define BG_USBC_UOG1_ENDPTCTRL4_TXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL4_TXT) >> BP_USBC_UOG1_ENDPTCTRL4_TXT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL4_TXT.
#define BF_USBC_UOG1_ENDPTCTRL4_TXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL4_TXT) & BM_USBC_UOG1_ENDPTCTRL4_TXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXT field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL4_TXT(v)   (HW_USBC_UOG1_ENDPTCTRL4_WR((HW_USBC_UOG1_ENDPTCTRL4_RD() & ~BM_USBC_UOG1_ENDPTCTRL4_TXT) | BF_USBC_UOG1_ENDPTCTRL4_TXT(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL4, field TXI[21] (RW)
 *
 * TX Data Toggle Inhibit 0 PID Sequencing Enabled. [Default] 1 PID Sequencing Disabled. This bit is
 * only used for test and should always be written as zero. Writing a one to this bit causes this
 * endpoint to ignore the data toggle sequence and always transmit DATA0 for a data packet.
 */

#define BP_USBC_UOG1_ENDPTCTRL4_TXI      (21)      //!< Bit position for USBC_UOG1_ENDPTCTRL4_TXI.
#define BM_USBC_UOG1_ENDPTCTRL4_TXI      (0x00200000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL4_TXI.

//! @brief Get value of USBC_UOG1_ENDPTCTRL4_TXI from a register value.
#define BG_USBC_UOG1_ENDPTCTRL4_TXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL4_TXI) >> BP_USBC_UOG1_ENDPTCTRL4_TXI)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL4_TXI.
#define BF_USBC_UOG1_ENDPTCTRL4_TXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL4_TXI) & BM_USBC_UOG1_ENDPTCTRL4_TXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXI field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL4_TXI(v)   (HW_USBC_UOG1_ENDPTCTRL4_WR((HW_USBC_UOG1_ENDPTCTRL4_RD() & ~BM_USBC_UOG1_ENDPTCTRL4_TXI) | BF_USBC_UOG1_ENDPTCTRL4_TXI(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL4, field TXR[22] (RW)
 *
 * TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the Host and device.
 */

#define BP_USBC_UOG1_ENDPTCTRL4_TXR      (22)      //!< Bit position for USBC_UOG1_ENDPTCTRL4_TXR.
#define BM_USBC_UOG1_ENDPTCTRL4_TXR      (0x00400000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL4_TXR.

//! @brief Get value of USBC_UOG1_ENDPTCTRL4_TXR from a register value.
#define BG_USBC_UOG1_ENDPTCTRL4_TXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL4_TXR) >> BP_USBC_UOG1_ENDPTCTRL4_TXR)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL4_TXR.
#define BF_USBC_UOG1_ENDPTCTRL4_TXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL4_TXR) & BM_USBC_UOG1_ENDPTCTRL4_TXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXR field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL4_TXR(v)   (HW_USBC_UOG1_ENDPTCTRL4_WR((HW_USBC_UOG1_ENDPTCTRL4_RD() & ~BM_USBC_UOG1_ENDPTCTRL4_TXR) | BF_USBC_UOG1_ENDPTCTRL4_TXR(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL4, field TXE[23] (RW)
 *
 * TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG1_ENDPTCTRL4_TXE      (23)      //!< Bit position for USBC_UOG1_ENDPTCTRL4_TXE.
#define BM_USBC_UOG1_ENDPTCTRL4_TXE      (0x00800000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL4_TXE.

//! @brief Get value of USBC_UOG1_ENDPTCTRL4_TXE from a register value.
#define BG_USBC_UOG1_ENDPTCTRL4_TXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL4_TXE) >> BP_USBC_UOG1_ENDPTCTRL4_TXE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL4_TXE.
#define BF_USBC_UOG1_ENDPTCTRL4_TXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL4_TXE) & BM_USBC_UOG1_ENDPTCTRL4_TXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXE field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL4_TXE(v)   (HW_USBC_UOG1_ENDPTCTRL4_WR((HW_USBC_UOG1_ENDPTCTRL4_RD() & ~BM_USBC_UOG1_ENDPTCTRL4_TXE) | BF_USBC_UOG1_ENDPTCTRL4_TXE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ENDPTCTRL5 - Endpoint Control 5
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ENDPTCTRL5 - Endpoint Control 5 (RW)
 *
 * Reset value: 0x00000000
 *
 * This is endpoint control register for endpoint 5 in device operation mode.  If one endpoint
 * direction is enabled and the paired endpoint of opposite direction is disabled then the unused
 * direction type must be changed from the default control-type to any other type (that is Bulk-
 * type). leaving an unconfigured endpoint control causes undefined behavior for the data pid
 * tracking on the active endpoint/direction.
 */
typedef union _hw_usbc_uog1_endptctrl5
{
    reg32_t U;
    struct _hw_usbc_uog1_endptctrl5_bitfields
    {
        unsigned RXS : 1; //!< [0] RX Endpoint Stall - Read/Write 0 End Point OK.
        unsigned RXD : 1; //!< [1] RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should always be written as zero.
        unsigned RXT : 2; //!< [3:2] RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
        unsigned RESERVED0 : 1; //!< [4] Reserved.
        unsigned RXI : 1; //!< [5] RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should always be written as zero.
        unsigned RXR : 1; //!< [6] RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the host and device.
        unsigned RXE : 1; //!< [7] RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED1 : 8; //!< [15:8] Reserved
        unsigned TXS : 1; //!< [16] TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint.
        unsigned TXD : 1; //!< [17] TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always be written as 0.
        unsigned TXT : 2; //!< [19:18] TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
        unsigned RESERVED2 : 1; //!< [20] Reserved
        unsigned TXI : 1; //!< [21] TX Data Toggle Inhibit 0 PID Sequencing Enabled.
        unsigned TXR : 1; //!< [22] TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the Host and device.
        unsigned TXE : 1; //!< [23] TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_endptctrl5_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ENDPTCTRL5 register
 */
#define HW_USBC_UOG1_ENDPTCTRL5_ADDR      (REGS_USBC_BASE + 0x1d4)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ENDPTCTRL5           (*(volatile hw_usbc_uog1_endptctrl5_t *) HW_USBC_UOG1_ENDPTCTRL5_ADDR)
#define HW_USBC_UOG1_ENDPTCTRL5_RD()      (HW_USBC_UOG1_ENDPTCTRL5.U)
#define HW_USBC_UOG1_ENDPTCTRL5_WR(v)     (HW_USBC_UOG1_ENDPTCTRL5.U = (v))
#define HW_USBC_UOG1_ENDPTCTRL5_SET(v)    (HW_USBC_UOG1_ENDPTCTRL5_WR(HW_USBC_UOG1_ENDPTCTRL5_RD() |  (v)))
#define HW_USBC_UOG1_ENDPTCTRL5_CLR(v)    (HW_USBC_UOG1_ENDPTCTRL5_WR(HW_USBC_UOG1_ENDPTCTRL5_RD() & ~(v)))
#define HW_USBC_UOG1_ENDPTCTRL5_TOG(v)    (HW_USBC_UOG1_ENDPTCTRL5_WR(HW_USBC_UOG1_ENDPTCTRL5_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_ENDPTCTRL5 bitfields
 */

/* --- Register HW_USBC_UOG1_ENDPTCTRL5, field RXS[0] (RW)
 *
 * RX Endpoint Stall - Read/Write 0 End Point OK. [Default] 1 End Point Stalled This bit is set
 * automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control
 * Endpoint. It is cleared automatically upon receipt a SETUP request if this Endpoint is configured
 * as a Control Endpoint, Software can write a one to this bit to force the endpoint to return a
 * STALL handshake to the Host. It continues to returning STALL until this bit is either cleared by
 * software or automatically cleared as above.
 */

#define BP_USBC_UOG1_ENDPTCTRL5_RXS      (0)      //!< Bit position for USBC_UOG1_ENDPTCTRL5_RXS.
#define BM_USBC_UOG1_ENDPTCTRL5_RXS      (0x00000001)  //!< Bit mask for USBC_UOG1_ENDPTCTRL5_RXS.

//! @brief Get value of USBC_UOG1_ENDPTCTRL5_RXS from a register value.
#define BG_USBC_UOG1_ENDPTCTRL5_RXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL5_RXS) >> BP_USBC_UOG1_ENDPTCTRL5_RXS)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL5_RXS.
#define BF_USBC_UOG1_ENDPTCTRL5_RXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL5_RXS) & BM_USBC_UOG1_ENDPTCTRL5_RXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXS field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL5_RXS(v)   (HW_USBC_UOG1_ENDPTCTRL5_WR((HW_USBC_UOG1_ENDPTCTRL5_RD() & ~BM_USBC_UOG1_ENDPTCTRL5_RXS) | BF_USBC_UOG1_ENDPTCTRL5_RXS(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL5, field RXD[1] (RW)
 *
 * RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should
 * always be written as zero.
 */

#define BP_USBC_UOG1_ENDPTCTRL5_RXD      (1)      //!< Bit position for USBC_UOG1_ENDPTCTRL5_RXD.
#define BM_USBC_UOG1_ENDPTCTRL5_RXD      (0x00000002)  //!< Bit mask for USBC_UOG1_ENDPTCTRL5_RXD.

//! @brief Get value of USBC_UOG1_ENDPTCTRL5_RXD from a register value.
#define BG_USBC_UOG1_ENDPTCTRL5_RXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL5_RXD) >> BP_USBC_UOG1_ENDPTCTRL5_RXD)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL5_RXD.
#define BF_USBC_UOG1_ENDPTCTRL5_RXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL5_RXD) & BM_USBC_UOG1_ENDPTCTRL5_RXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXD field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL5_RXD(v)   (HW_USBC_UOG1_ENDPTCTRL5_WR((HW_USBC_UOG1_ENDPTCTRL5_RD() & ~BM_USBC_UOG1_ENDPTCTRL5_RXD) | BF_USBC_UOG1_ENDPTCTRL5_RXD(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL5, field RXT[3:2] (RW)
 *
 * RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
 */

#define BP_USBC_UOG1_ENDPTCTRL5_RXT      (2)      //!< Bit position for USBC_UOG1_ENDPTCTRL5_RXT.
#define BM_USBC_UOG1_ENDPTCTRL5_RXT      (0x0000000c)  //!< Bit mask for USBC_UOG1_ENDPTCTRL5_RXT.

//! @brief Get value of USBC_UOG1_ENDPTCTRL5_RXT from a register value.
#define BG_USBC_UOG1_ENDPTCTRL5_RXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL5_RXT) >> BP_USBC_UOG1_ENDPTCTRL5_RXT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL5_RXT.
#define BF_USBC_UOG1_ENDPTCTRL5_RXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL5_RXT) & BM_USBC_UOG1_ENDPTCTRL5_RXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXT field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL5_RXT(v)   (HW_USBC_UOG1_ENDPTCTRL5_WR((HW_USBC_UOG1_ENDPTCTRL5_RD() & ~BM_USBC_UOG1_ENDPTCTRL5_RXT) | BF_USBC_UOG1_ENDPTCTRL5_RXT(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL5, field RXI[5] (RW)
 *
 * RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should
 * always be written as zero. Writing a one to this bit causes this endpoint to ignore the data
 * toggle sequence and always accept data packet regardless of their data PID.
 */

#define BP_USBC_UOG1_ENDPTCTRL5_RXI      (5)      //!< Bit position for USBC_UOG1_ENDPTCTRL5_RXI.
#define BM_USBC_UOG1_ENDPTCTRL5_RXI      (0x00000020)  //!< Bit mask for USBC_UOG1_ENDPTCTRL5_RXI.

//! @brief Get value of USBC_UOG1_ENDPTCTRL5_RXI from a register value.
#define BG_USBC_UOG1_ENDPTCTRL5_RXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL5_RXI) >> BP_USBC_UOG1_ENDPTCTRL5_RXI)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL5_RXI.
#define BF_USBC_UOG1_ENDPTCTRL5_RXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL5_RXI) & BM_USBC_UOG1_ENDPTCTRL5_RXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXI field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL5_RXI(v)   (HW_USBC_UOG1_ENDPTCTRL5_WR((HW_USBC_UOG1_ENDPTCTRL5_RD() & ~BM_USBC_UOG1_ENDPTCTRL5_RXI) | BF_USBC_UOG1_ENDPTCTRL5_RXI(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL5, field RXR[6] (RW)
 *
 * RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the host and device.
 */

#define BP_USBC_UOG1_ENDPTCTRL5_RXR      (6)      //!< Bit position for USBC_UOG1_ENDPTCTRL5_RXR.
#define BM_USBC_UOG1_ENDPTCTRL5_RXR      (0x00000040)  //!< Bit mask for USBC_UOG1_ENDPTCTRL5_RXR.

//! @brief Get value of USBC_UOG1_ENDPTCTRL5_RXR from a register value.
#define BG_USBC_UOG1_ENDPTCTRL5_RXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL5_RXR) >> BP_USBC_UOG1_ENDPTCTRL5_RXR)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL5_RXR.
#define BF_USBC_UOG1_ENDPTCTRL5_RXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL5_RXR) & BM_USBC_UOG1_ENDPTCTRL5_RXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXR field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL5_RXR(v)   (HW_USBC_UOG1_ENDPTCTRL5_WR((HW_USBC_UOG1_ENDPTCTRL5_RD() & ~BM_USBC_UOG1_ENDPTCTRL5_RXR) | BF_USBC_UOG1_ENDPTCTRL5_RXR(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL5, field RXE[7] (RW)
 *
 * RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG1_ENDPTCTRL5_RXE      (7)      //!< Bit position for USBC_UOG1_ENDPTCTRL5_RXE.
#define BM_USBC_UOG1_ENDPTCTRL5_RXE      (0x00000080)  //!< Bit mask for USBC_UOG1_ENDPTCTRL5_RXE.

//! @brief Get value of USBC_UOG1_ENDPTCTRL5_RXE from a register value.
#define BG_USBC_UOG1_ENDPTCTRL5_RXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL5_RXE) >> BP_USBC_UOG1_ENDPTCTRL5_RXE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL5_RXE.
#define BF_USBC_UOG1_ENDPTCTRL5_RXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL5_RXE) & BM_USBC_UOG1_ENDPTCTRL5_RXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXE field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL5_RXE(v)   (HW_USBC_UOG1_ENDPTCTRL5_WR((HW_USBC_UOG1_ENDPTCTRL5_RD() & ~BM_USBC_UOG1_ENDPTCTRL5_RXE) | BF_USBC_UOG1_ENDPTCTRL5_RXE(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL5, field TXS[16] (RW)
 *
 * TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically
 * upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint. It is
 * cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control
 * Endpoint. Software can write a one to this bit to force the endpoint to return a STALL handshake
 * to the Host. It continues to returning STALL until this bit is either cleared by software or
 * automatically cleared as above. For CONTROL type endpoint, there is a slight delay (50 clocks
 * max) between the ENDPTSETUPSTAT begin cleared and hardware continuing to clear this bit. In most
 * systems, it is unlikely the DCD software will observe this delay. Take care that the STALL bit is
 * not set immediately after writing a '1' to it. Please follow this procedure: continually write
 * this STALL bit until it is set or until a new setup has ben received by checking the associated
 * ENDPTSETUPSTAT bit.
 */

#define BP_USBC_UOG1_ENDPTCTRL5_TXS      (16)      //!< Bit position for USBC_UOG1_ENDPTCTRL5_TXS.
#define BM_USBC_UOG1_ENDPTCTRL5_TXS      (0x00010000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL5_TXS.

//! @brief Get value of USBC_UOG1_ENDPTCTRL5_TXS from a register value.
#define BG_USBC_UOG1_ENDPTCTRL5_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL5_TXS) >> BP_USBC_UOG1_ENDPTCTRL5_TXS)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL5_TXS.
#define BF_USBC_UOG1_ENDPTCTRL5_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL5_TXS) & BM_USBC_UOG1_ENDPTCTRL5_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL5_TXS(v)   (HW_USBC_UOG1_ENDPTCTRL5_WR((HW_USBC_UOG1_ENDPTCTRL5_RD() & ~BM_USBC_UOG1_ENDPTCTRL5_TXS) | BF_USBC_UOG1_ENDPTCTRL5_TXS(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL5, field TXD[17] (RW)
 *
 * TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always
 * be written as 0.
 */

#define BP_USBC_UOG1_ENDPTCTRL5_TXD      (17)      //!< Bit position for USBC_UOG1_ENDPTCTRL5_TXD.
#define BM_USBC_UOG1_ENDPTCTRL5_TXD      (0x00020000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL5_TXD.

//! @brief Get value of USBC_UOG1_ENDPTCTRL5_TXD from a register value.
#define BG_USBC_UOG1_ENDPTCTRL5_TXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL5_TXD) >> BP_USBC_UOG1_ENDPTCTRL5_TXD)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL5_TXD.
#define BF_USBC_UOG1_ENDPTCTRL5_TXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL5_TXD) & BM_USBC_UOG1_ENDPTCTRL5_TXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXD field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL5_TXD(v)   (HW_USBC_UOG1_ENDPTCTRL5_WR((HW_USBC_UOG1_ENDPTCTRL5_RD() & ~BM_USBC_UOG1_ENDPTCTRL5_TXD) | BF_USBC_UOG1_ENDPTCTRL5_TXD(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL5, field TXT[19:18] (RW)
 *
 * TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 */

#define BP_USBC_UOG1_ENDPTCTRL5_TXT      (18)      //!< Bit position for USBC_UOG1_ENDPTCTRL5_TXT.
#define BM_USBC_UOG1_ENDPTCTRL5_TXT      (0x000c0000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL5_TXT.

//! @brief Get value of USBC_UOG1_ENDPTCTRL5_TXT from a register value.
#define BG_USBC_UOG1_ENDPTCTRL5_TXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL5_TXT) >> BP_USBC_UOG1_ENDPTCTRL5_TXT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL5_TXT.
#define BF_USBC_UOG1_ENDPTCTRL5_TXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL5_TXT) & BM_USBC_UOG1_ENDPTCTRL5_TXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXT field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL5_TXT(v)   (HW_USBC_UOG1_ENDPTCTRL5_WR((HW_USBC_UOG1_ENDPTCTRL5_RD() & ~BM_USBC_UOG1_ENDPTCTRL5_TXT) | BF_USBC_UOG1_ENDPTCTRL5_TXT(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL5, field TXI[21] (RW)
 *
 * TX Data Toggle Inhibit 0 PID Sequencing Enabled. [Default] 1 PID Sequencing Disabled. This bit is
 * only used for test and should always be written as zero. Writing a one to this bit causes this
 * endpoint to ignore the data toggle sequence and always transmit DATA0 for a data packet.
 */

#define BP_USBC_UOG1_ENDPTCTRL5_TXI      (21)      //!< Bit position for USBC_UOG1_ENDPTCTRL5_TXI.
#define BM_USBC_UOG1_ENDPTCTRL5_TXI      (0x00200000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL5_TXI.

//! @brief Get value of USBC_UOG1_ENDPTCTRL5_TXI from a register value.
#define BG_USBC_UOG1_ENDPTCTRL5_TXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL5_TXI) >> BP_USBC_UOG1_ENDPTCTRL5_TXI)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL5_TXI.
#define BF_USBC_UOG1_ENDPTCTRL5_TXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL5_TXI) & BM_USBC_UOG1_ENDPTCTRL5_TXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXI field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL5_TXI(v)   (HW_USBC_UOG1_ENDPTCTRL5_WR((HW_USBC_UOG1_ENDPTCTRL5_RD() & ~BM_USBC_UOG1_ENDPTCTRL5_TXI) | BF_USBC_UOG1_ENDPTCTRL5_TXI(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL5, field TXR[22] (RW)
 *
 * TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the Host and device.
 */

#define BP_USBC_UOG1_ENDPTCTRL5_TXR      (22)      //!< Bit position for USBC_UOG1_ENDPTCTRL5_TXR.
#define BM_USBC_UOG1_ENDPTCTRL5_TXR      (0x00400000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL5_TXR.

//! @brief Get value of USBC_UOG1_ENDPTCTRL5_TXR from a register value.
#define BG_USBC_UOG1_ENDPTCTRL5_TXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL5_TXR) >> BP_USBC_UOG1_ENDPTCTRL5_TXR)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL5_TXR.
#define BF_USBC_UOG1_ENDPTCTRL5_TXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL5_TXR) & BM_USBC_UOG1_ENDPTCTRL5_TXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXR field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL5_TXR(v)   (HW_USBC_UOG1_ENDPTCTRL5_WR((HW_USBC_UOG1_ENDPTCTRL5_RD() & ~BM_USBC_UOG1_ENDPTCTRL5_TXR) | BF_USBC_UOG1_ENDPTCTRL5_TXR(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL5, field TXE[23] (RW)
 *
 * TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG1_ENDPTCTRL5_TXE      (23)      //!< Bit position for USBC_UOG1_ENDPTCTRL5_TXE.
#define BM_USBC_UOG1_ENDPTCTRL5_TXE      (0x00800000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL5_TXE.

//! @brief Get value of USBC_UOG1_ENDPTCTRL5_TXE from a register value.
#define BG_USBC_UOG1_ENDPTCTRL5_TXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL5_TXE) >> BP_USBC_UOG1_ENDPTCTRL5_TXE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL5_TXE.
#define BF_USBC_UOG1_ENDPTCTRL5_TXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL5_TXE) & BM_USBC_UOG1_ENDPTCTRL5_TXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXE field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL5_TXE(v)   (HW_USBC_UOG1_ENDPTCTRL5_WR((HW_USBC_UOG1_ENDPTCTRL5_RD() & ~BM_USBC_UOG1_ENDPTCTRL5_TXE) | BF_USBC_UOG1_ENDPTCTRL5_TXE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ENDPTCTRL6 - Endpoint Control 6
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ENDPTCTRL6 - Endpoint Control 6 (RW)
 *
 * Reset value: 0x00000000
 *
 * This is endpoint control register for endpoint 6 in device operation mode.  If one endpoint
 * direction is enabled and the paired endpoint of opposite direction is disabled then the unused
 * direction type must be changed from the default control-type to any other type (that is Bulk-
 * type). leaving an unconfigured endpoint control causes undefined behavior for the data pid
 * tracking on the active endpoint/direction.
 */
typedef union _hw_usbc_uog1_endptctrl6
{
    reg32_t U;
    struct _hw_usbc_uog1_endptctrl6_bitfields
    {
        unsigned RXS : 1; //!< [0] RX Endpoint Stall - Read/Write 0 End Point OK.
        unsigned RXD : 1; //!< [1] RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should always be written as zero.
        unsigned RXT : 2; //!< [3:2] RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
        unsigned RESERVED0 : 1; //!< [4] Reserved.
        unsigned RXI : 1; //!< [5] RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should always be written as zero.
        unsigned RXR : 1; //!< [6] RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the host and device.
        unsigned RXE : 1; //!< [7] RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED1 : 8; //!< [15:8] Reserved
        unsigned TXS : 1; //!< [16] TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint.
        unsigned TXD : 1; //!< [17] TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always be written as 0.
        unsigned TXT : 2; //!< [19:18] TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
        unsigned RESERVED2 : 1; //!< [20] Reserved
        unsigned TXI : 1; //!< [21] TX Data Toggle Inhibit 0 PID Sequencing Enabled.
        unsigned TXR : 1; //!< [22] TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the Host and device.
        unsigned TXE : 1; //!< [23] TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_endptctrl6_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ENDPTCTRL6 register
 */
#define HW_USBC_UOG1_ENDPTCTRL6_ADDR      (REGS_USBC_BASE + 0x1d8)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ENDPTCTRL6           (*(volatile hw_usbc_uog1_endptctrl6_t *) HW_USBC_UOG1_ENDPTCTRL6_ADDR)
#define HW_USBC_UOG1_ENDPTCTRL6_RD()      (HW_USBC_UOG1_ENDPTCTRL6.U)
#define HW_USBC_UOG1_ENDPTCTRL6_WR(v)     (HW_USBC_UOG1_ENDPTCTRL6.U = (v))
#define HW_USBC_UOG1_ENDPTCTRL6_SET(v)    (HW_USBC_UOG1_ENDPTCTRL6_WR(HW_USBC_UOG1_ENDPTCTRL6_RD() |  (v)))
#define HW_USBC_UOG1_ENDPTCTRL6_CLR(v)    (HW_USBC_UOG1_ENDPTCTRL6_WR(HW_USBC_UOG1_ENDPTCTRL6_RD() & ~(v)))
#define HW_USBC_UOG1_ENDPTCTRL6_TOG(v)    (HW_USBC_UOG1_ENDPTCTRL6_WR(HW_USBC_UOG1_ENDPTCTRL6_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_ENDPTCTRL6 bitfields
 */

/* --- Register HW_USBC_UOG1_ENDPTCTRL6, field RXS[0] (RW)
 *
 * RX Endpoint Stall - Read/Write 0 End Point OK. [Default] 1 End Point Stalled This bit is set
 * automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control
 * Endpoint. It is cleared automatically upon receipt a SETUP request if this Endpoint is configured
 * as a Control Endpoint, Software can write a one to this bit to force the endpoint to return a
 * STALL handshake to the Host. It continues to returning STALL until this bit is either cleared by
 * software or automatically cleared as above.
 */

#define BP_USBC_UOG1_ENDPTCTRL6_RXS      (0)      //!< Bit position for USBC_UOG1_ENDPTCTRL6_RXS.
#define BM_USBC_UOG1_ENDPTCTRL6_RXS      (0x00000001)  //!< Bit mask for USBC_UOG1_ENDPTCTRL6_RXS.

//! @brief Get value of USBC_UOG1_ENDPTCTRL6_RXS from a register value.
#define BG_USBC_UOG1_ENDPTCTRL6_RXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL6_RXS) >> BP_USBC_UOG1_ENDPTCTRL6_RXS)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL6_RXS.
#define BF_USBC_UOG1_ENDPTCTRL6_RXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL6_RXS) & BM_USBC_UOG1_ENDPTCTRL6_RXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXS field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL6_RXS(v)   (HW_USBC_UOG1_ENDPTCTRL6_WR((HW_USBC_UOG1_ENDPTCTRL6_RD() & ~BM_USBC_UOG1_ENDPTCTRL6_RXS) | BF_USBC_UOG1_ENDPTCTRL6_RXS(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL6, field RXD[1] (RW)
 *
 * RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should
 * always be written as zero.
 */

#define BP_USBC_UOG1_ENDPTCTRL6_RXD      (1)      //!< Bit position for USBC_UOG1_ENDPTCTRL6_RXD.
#define BM_USBC_UOG1_ENDPTCTRL6_RXD      (0x00000002)  //!< Bit mask for USBC_UOG1_ENDPTCTRL6_RXD.

//! @brief Get value of USBC_UOG1_ENDPTCTRL6_RXD from a register value.
#define BG_USBC_UOG1_ENDPTCTRL6_RXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL6_RXD) >> BP_USBC_UOG1_ENDPTCTRL6_RXD)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL6_RXD.
#define BF_USBC_UOG1_ENDPTCTRL6_RXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL6_RXD) & BM_USBC_UOG1_ENDPTCTRL6_RXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXD field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL6_RXD(v)   (HW_USBC_UOG1_ENDPTCTRL6_WR((HW_USBC_UOG1_ENDPTCTRL6_RD() & ~BM_USBC_UOG1_ENDPTCTRL6_RXD) | BF_USBC_UOG1_ENDPTCTRL6_RXD(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL6, field RXT[3:2] (RW)
 *
 * RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
 */

#define BP_USBC_UOG1_ENDPTCTRL6_RXT      (2)      //!< Bit position for USBC_UOG1_ENDPTCTRL6_RXT.
#define BM_USBC_UOG1_ENDPTCTRL6_RXT      (0x0000000c)  //!< Bit mask for USBC_UOG1_ENDPTCTRL6_RXT.

//! @brief Get value of USBC_UOG1_ENDPTCTRL6_RXT from a register value.
#define BG_USBC_UOG1_ENDPTCTRL6_RXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL6_RXT) >> BP_USBC_UOG1_ENDPTCTRL6_RXT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL6_RXT.
#define BF_USBC_UOG1_ENDPTCTRL6_RXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL6_RXT) & BM_USBC_UOG1_ENDPTCTRL6_RXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXT field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL6_RXT(v)   (HW_USBC_UOG1_ENDPTCTRL6_WR((HW_USBC_UOG1_ENDPTCTRL6_RD() & ~BM_USBC_UOG1_ENDPTCTRL6_RXT) | BF_USBC_UOG1_ENDPTCTRL6_RXT(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL6, field RXI[5] (RW)
 *
 * RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should
 * always be written as zero. Writing a one to this bit causes this endpoint to ignore the data
 * toggle sequence and always accept data packet regardless of their data PID.
 */

#define BP_USBC_UOG1_ENDPTCTRL6_RXI      (5)      //!< Bit position for USBC_UOG1_ENDPTCTRL6_RXI.
#define BM_USBC_UOG1_ENDPTCTRL6_RXI      (0x00000020)  //!< Bit mask for USBC_UOG1_ENDPTCTRL6_RXI.

//! @brief Get value of USBC_UOG1_ENDPTCTRL6_RXI from a register value.
#define BG_USBC_UOG1_ENDPTCTRL6_RXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL6_RXI) >> BP_USBC_UOG1_ENDPTCTRL6_RXI)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL6_RXI.
#define BF_USBC_UOG1_ENDPTCTRL6_RXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL6_RXI) & BM_USBC_UOG1_ENDPTCTRL6_RXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXI field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL6_RXI(v)   (HW_USBC_UOG1_ENDPTCTRL6_WR((HW_USBC_UOG1_ENDPTCTRL6_RD() & ~BM_USBC_UOG1_ENDPTCTRL6_RXI) | BF_USBC_UOG1_ENDPTCTRL6_RXI(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL6, field RXR[6] (RW)
 *
 * RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the host and device.
 */

#define BP_USBC_UOG1_ENDPTCTRL6_RXR      (6)      //!< Bit position for USBC_UOG1_ENDPTCTRL6_RXR.
#define BM_USBC_UOG1_ENDPTCTRL6_RXR      (0x00000040)  //!< Bit mask for USBC_UOG1_ENDPTCTRL6_RXR.

//! @brief Get value of USBC_UOG1_ENDPTCTRL6_RXR from a register value.
#define BG_USBC_UOG1_ENDPTCTRL6_RXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL6_RXR) >> BP_USBC_UOG1_ENDPTCTRL6_RXR)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL6_RXR.
#define BF_USBC_UOG1_ENDPTCTRL6_RXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL6_RXR) & BM_USBC_UOG1_ENDPTCTRL6_RXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXR field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL6_RXR(v)   (HW_USBC_UOG1_ENDPTCTRL6_WR((HW_USBC_UOG1_ENDPTCTRL6_RD() & ~BM_USBC_UOG1_ENDPTCTRL6_RXR) | BF_USBC_UOG1_ENDPTCTRL6_RXR(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL6, field RXE[7] (RW)
 *
 * RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG1_ENDPTCTRL6_RXE      (7)      //!< Bit position for USBC_UOG1_ENDPTCTRL6_RXE.
#define BM_USBC_UOG1_ENDPTCTRL6_RXE      (0x00000080)  //!< Bit mask for USBC_UOG1_ENDPTCTRL6_RXE.

//! @brief Get value of USBC_UOG1_ENDPTCTRL6_RXE from a register value.
#define BG_USBC_UOG1_ENDPTCTRL6_RXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL6_RXE) >> BP_USBC_UOG1_ENDPTCTRL6_RXE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL6_RXE.
#define BF_USBC_UOG1_ENDPTCTRL6_RXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL6_RXE) & BM_USBC_UOG1_ENDPTCTRL6_RXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXE field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL6_RXE(v)   (HW_USBC_UOG1_ENDPTCTRL6_WR((HW_USBC_UOG1_ENDPTCTRL6_RD() & ~BM_USBC_UOG1_ENDPTCTRL6_RXE) | BF_USBC_UOG1_ENDPTCTRL6_RXE(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL6, field TXS[16] (RW)
 *
 * TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically
 * upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint. It is
 * cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control
 * Endpoint. Software can write a one to this bit to force the endpoint to return a STALL handshake
 * to the Host. It continues to returning STALL until this bit is either cleared by software or
 * automatically cleared as above. For CONTROL type endpoint, there is a slight delay (50 clocks
 * max) between the ENDPTSETUPSTAT begin cleared and hardware continuing to clear this bit. In most
 * systems, it is unlikely the DCD software will observe this delay. Take care that the STALL bit is
 * not set immediately after writing a '1' to it. Please follow this procedure: continually write
 * this STALL bit until it is set or until a new setup has ben received by checking the associated
 * ENDPTSETUPSTAT bit.
 */

#define BP_USBC_UOG1_ENDPTCTRL6_TXS      (16)      //!< Bit position for USBC_UOG1_ENDPTCTRL6_TXS.
#define BM_USBC_UOG1_ENDPTCTRL6_TXS      (0x00010000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL6_TXS.

//! @brief Get value of USBC_UOG1_ENDPTCTRL6_TXS from a register value.
#define BG_USBC_UOG1_ENDPTCTRL6_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL6_TXS) >> BP_USBC_UOG1_ENDPTCTRL6_TXS)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL6_TXS.
#define BF_USBC_UOG1_ENDPTCTRL6_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL6_TXS) & BM_USBC_UOG1_ENDPTCTRL6_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL6_TXS(v)   (HW_USBC_UOG1_ENDPTCTRL6_WR((HW_USBC_UOG1_ENDPTCTRL6_RD() & ~BM_USBC_UOG1_ENDPTCTRL6_TXS) | BF_USBC_UOG1_ENDPTCTRL6_TXS(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL6, field TXD[17] (RW)
 *
 * TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always
 * be written as 0.
 */

#define BP_USBC_UOG1_ENDPTCTRL6_TXD      (17)      //!< Bit position for USBC_UOG1_ENDPTCTRL6_TXD.
#define BM_USBC_UOG1_ENDPTCTRL6_TXD      (0x00020000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL6_TXD.

//! @brief Get value of USBC_UOG1_ENDPTCTRL6_TXD from a register value.
#define BG_USBC_UOG1_ENDPTCTRL6_TXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL6_TXD) >> BP_USBC_UOG1_ENDPTCTRL6_TXD)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL6_TXD.
#define BF_USBC_UOG1_ENDPTCTRL6_TXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL6_TXD) & BM_USBC_UOG1_ENDPTCTRL6_TXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXD field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL6_TXD(v)   (HW_USBC_UOG1_ENDPTCTRL6_WR((HW_USBC_UOG1_ENDPTCTRL6_RD() & ~BM_USBC_UOG1_ENDPTCTRL6_TXD) | BF_USBC_UOG1_ENDPTCTRL6_TXD(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL6, field TXT[19:18] (RW)
 *
 * TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 */

#define BP_USBC_UOG1_ENDPTCTRL6_TXT      (18)      //!< Bit position for USBC_UOG1_ENDPTCTRL6_TXT.
#define BM_USBC_UOG1_ENDPTCTRL6_TXT      (0x000c0000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL6_TXT.

//! @brief Get value of USBC_UOG1_ENDPTCTRL6_TXT from a register value.
#define BG_USBC_UOG1_ENDPTCTRL6_TXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL6_TXT) >> BP_USBC_UOG1_ENDPTCTRL6_TXT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL6_TXT.
#define BF_USBC_UOG1_ENDPTCTRL6_TXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL6_TXT) & BM_USBC_UOG1_ENDPTCTRL6_TXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXT field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL6_TXT(v)   (HW_USBC_UOG1_ENDPTCTRL6_WR((HW_USBC_UOG1_ENDPTCTRL6_RD() & ~BM_USBC_UOG1_ENDPTCTRL6_TXT) | BF_USBC_UOG1_ENDPTCTRL6_TXT(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL6, field TXI[21] (RW)
 *
 * TX Data Toggle Inhibit 0 PID Sequencing Enabled. [Default] 1 PID Sequencing Disabled. This bit is
 * only used for test and should always be written as zero. Writing a one to this bit causes this
 * endpoint to ignore the data toggle sequence and always transmit DATA0 for a data packet.
 */

#define BP_USBC_UOG1_ENDPTCTRL6_TXI      (21)      //!< Bit position for USBC_UOG1_ENDPTCTRL6_TXI.
#define BM_USBC_UOG1_ENDPTCTRL6_TXI      (0x00200000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL6_TXI.

//! @brief Get value of USBC_UOG1_ENDPTCTRL6_TXI from a register value.
#define BG_USBC_UOG1_ENDPTCTRL6_TXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL6_TXI) >> BP_USBC_UOG1_ENDPTCTRL6_TXI)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL6_TXI.
#define BF_USBC_UOG1_ENDPTCTRL6_TXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL6_TXI) & BM_USBC_UOG1_ENDPTCTRL6_TXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXI field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL6_TXI(v)   (HW_USBC_UOG1_ENDPTCTRL6_WR((HW_USBC_UOG1_ENDPTCTRL6_RD() & ~BM_USBC_UOG1_ENDPTCTRL6_TXI) | BF_USBC_UOG1_ENDPTCTRL6_TXI(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL6, field TXR[22] (RW)
 *
 * TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the Host and device.
 */

#define BP_USBC_UOG1_ENDPTCTRL6_TXR      (22)      //!< Bit position for USBC_UOG1_ENDPTCTRL6_TXR.
#define BM_USBC_UOG1_ENDPTCTRL6_TXR      (0x00400000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL6_TXR.

//! @brief Get value of USBC_UOG1_ENDPTCTRL6_TXR from a register value.
#define BG_USBC_UOG1_ENDPTCTRL6_TXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL6_TXR) >> BP_USBC_UOG1_ENDPTCTRL6_TXR)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL6_TXR.
#define BF_USBC_UOG1_ENDPTCTRL6_TXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL6_TXR) & BM_USBC_UOG1_ENDPTCTRL6_TXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXR field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL6_TXR(v)   (HW_USBC_UOG1_ENDPTCTRL6_WR((HW_USBC_UOG1_ENDPTCTRL6_RD() & ~BM_USBC_UOG1_ENDPTCTRL6_TXR) | BF_USBC_UOG1_ENDPTCTRL6_TXR(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL6, field TXE[23] (RW)
 *
 * TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG1_ENDPTCTRL6_TXE      (23)      //!< Bit position for USBC_UOG1_ENDPTCTRL6_TXE.
#define BM_USBC_UOG1_ENDPTCTRL6_TXE      (0x00800000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL6_TXE.

//! @brief Get value of USBC_UOG1_ENDPTCTRL6_TXE from a register value.
#define BG_USBC_UOG1_ENDPTCTRL6_TXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL6_TXE) >> BP_USBC_UOG1_ENDPTCTRL6_TXE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL6_TXE.
#define BF_USBC_UOG1_ENDPTCTRL6_TXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL6_TXE) & BM_USBC_UOG1_ENDPTCTRL6_TXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXE field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL6_TXE(v)   (HW_USBC_UOG1_ENDPTCTRL6_WR((HW_USBC_UOG1_ENDPTCTRL6_RD() & ~BM_USBC_UOG1_ENDPTCTRL6_TXE) | BF_USBC_UOG1_ENDPTCTRL6_TXE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG1_ENDPTCTRL7 - Endpoint Control 7
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG1_ENDPTCTRL7 - Endpoint Control 7 (RW)
 *
 * Reset value: 0x00000000
 *
 * This is endpoint control register for endpoint 7 in device operation mode.  If one endpoint
 * direction is enabled and the paired endpoint of opposite direction is disabled then the unused
 * direction type must be changed from the default control-type to any other type (that is Bulk-
 * type). leaving an unconfigured endpoint control causes undefined behavior for the data pid
 * tracking on the active endpoint/direction.
 */
typedef union _hw_usbc_uog1_endptctrl7
{
    reg32_t U;
    struct _hw_usbc_uog1_endptctrl7_bitfields
    {
        unsigned RXS : 1; //!< [0] RX Endpoint Stall - Read/Write 0 End Point OK.
        unsigned RXD : 1; //!< [1] RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should always be written as zero.
        unsigned RXT : 2; //!< [3:2] RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
        unsigned RESERVED0 : 1; //!< [4] Reserved.
        unsigned RXI : 1; //!< [5] RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should always be written as zero.
        unsigned RXR : 1; //!< [6] RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the host and device.
        unsigned RXE : 1; //!< [7] RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED1 : 8; //!< [15:8] Reserved
        unsigned TXS : 1; //!< [16] TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint.
        unsigned TXD : 1; //!< [17] TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always be written as 0.
        unsigned TXT : 2; //!< [19:18] TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
        unsigned RESERVED2 : 1; //!< [20] Reserved
        unsigned TXI : 1; //!< [21] TX Data Toggle Inhibit 0 PID Sequencing Enabled.
        unsigned TXR : 1; //!< [22] TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the Host and device.
        unsigned TXE : 1; //!< [23] TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog1_endptctrl7_t;
#endif

/*
 * constants & macros for entire USBC_UOG1_ENDPTCTRL7 register
 */
#define HW_USBC_UOG1_ENDPTCTRL7_ADDR      (REGS_USBC_BASE + 0x1dc)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG1_ENDPTCTRL7           (*(volatile hw_usbc_uog1_endptctrl7_t *) HW_USBC_UOG1_ENDPTCTRL7_ADDR)
#define HW_USBC_UOG1_ENDPTCTRL7_RD()      (HW_USBC_UOG1_ENDPTCTRL7.U)
#define HW_USBC_UOG1_ENDPTCTRL7_WR(v)     (HW_USBC_UOG1_ENDPTCTRL7.U = (v))
#define HW_USBC_UOG1_ENDPTCTRL7_SET(v)    (HW_USBC_UOG1_ENDPTCTRL7_WR(HW_USBC_UOG1_ENDPTCTRL7_RD() |  (v)))
#define HW_USBC_UOG1_ENDPTCTRL7_CLR(v)    (HW_USBC_UOG1_ENDPTCTRL7_WR(HW_USBC_UOG1_ENDPTCTRL7_RD() & ~(v)))
#define HW_USBC_UOG1_ENDPTCTRL7_TOG(v)    (HW_USBC_UOG1_ENDPTCTRL7_WR(HW_USBC_UOG1_ENDPTCTRL7_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG1_ENDPTCTRL7 bitfields
 */

/* --- Register HW_USBC_UOG1_ENDPTCTRL7, field RXS[0] (RW)
 *
 * RX Endpoint Stall - Read/Write 0 End Point OK. [Default] 1 End Point Stalled This bit is set
 * automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control
 * Endpoint. It is cleared automatically upon receipt a SETUP request if this Endpoint is configured
 * as a Control Endpoint, Software can write a one to this bit to force the endpoint to return a
 * STALL handshake to the Host. It continues to returning STALL until this bit is either cleared by
 * software or automatically cleared as above.
 */

#define BP_USBC_UOG1_ENDPTCTRL7_RXS      (0)      //!< Bit position for USBC_UOG1_ENDPTCTRL7_RXS.
#define BM_USBC_UOG1_ENDPTCTRL7_RXS      (0x00000001)  //!< Bit mask for USBC_UOG1_ENDPTCTRL7_RXS.

//! @brief Get value of USBC_UOG1_ENDPTCTRL7_RXS from a register value.
#define BG_USBC_UOG1_ENDPTCTRL7_RXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL7_RXS) >> BP_USBC_UOG1_ENDPTCTRL7_RXS)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL7_RXS.
#define BF_USBC_UOG1_ENDPTCTRL7_RXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL7_RXS) & BM_USBC_UOG1_ENDPTCTRL7_RXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXS field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL7_RXS(v)   (HW_USBC_UOG1_ENDPTCTRL7_WR((HW_USBC_UOG1_ENDPTCTRL7_RD() & ~BM_USBC_UOG1_ENDPTCTRL7_RXS) | BF_USBC_UOG1_ENDPTCTRL7_RXS(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL7, field RXD[1] (RW)
 *
 * RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should
 * always be written as zero.
 */

#define BP_USBC_UOG1_ENDPTCTRL7_RXD      (1)      //!< Bit position for USBC_UOG1_ENDPTCTRL7_RXD.
#define BM_USBC_UOG1_ENDPTCTRL7_RXD      (0x00000002)  //!< Bit mask for USBC_UOG1_ENDPTCTRL7_RXD.

//! @brief Get value of USBC_UOG1_ENDPTCTRL7_RXD from a register value.
#define BG_USBC_UOG1_ENDPTCTRL7_RXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL7_RXD) >> BP_USBC_UOG1_ENDPTCTRL7_RXD)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL7_RXD.
#define BF_USBC_UOG1_ENDPTCTRL7_RXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL7_RXD) & BM_USBC_UOG1_ENDPTCTRL7_RXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXD field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL7_RXD(v)   (HW_USBC_UOG1_ENDPTCTRL7_WR((HW_USBC_UOG1_ENDPTCTRL7_RD() & ~BM_USBC_UOG1_ENDPTCTRL7_RXD) | BF_USBC_UOG1_ENDPTCTRL7_RXD(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL7, field RXT[3:2] (RW)
 *
 * RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
 */

#define BP_USBC_UOG1_ENDPTCTRL7_RXT      (2)      //!< Bit position for USBC_UOG1_ENDPTCTRL7_RXT.
#define BM_USBC_UOG1_ENDPTCTRL7_RXT      (0x0000000c)  //!< Bit mask for USBC_UOG1_ENDPTCTRL7_RXT.

//! @brief Get value of USBC_UOG1_ENDPTCTRL7_RXT from a register value.
#define BG_USBC_UOG1_ENDPTCTRL7_RXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL7_RXT) >> BP_USBC_UOG1_ENDPTCTRL7_RXT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL7_RXT.
#define BF_USBC_UOG1_ENDPTCTRL7_RXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL7_RXT) & BM_USBC_UOG1_ENDPTCTRL7_RXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXT field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL7_RXT(v)   (HW_USBC_UOG1_ENDPTCTRL7_WR((HW_USBC_UOG1_ENDPTCTRL7_RD() & ~BM_USBC_UOG1_ENDPTCTRL7_RXT) | BF_USBC_UOG1_ENDPTCTRL7_RXT(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL7, field RXI[5] (RW)
 *
 * RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should
 * always be written as zero. Writing a one to this bit causes this endpoint to ignore the data
 * toggle sequence and always accept data packet regardless of their data PID.
 */

#define BP_USBC_UOG1_ENDPTCTRL7_RXI      (5)      //!< Bit position for USBC_UOG1_ENDPTCTRL7_RXI.
#define BM_USBC_UOG1_ENDPTCTRL7_RXI      (0x00000020)  //!< Bit mask for USBC_UOG1_ENDPTCTRL7_RXI.

//! @brief Get value of USBC_UOG1_ENDPTCTRL7_RXI from a register value.
#define BG_USBC_UOG1_ENDPTCTRL7_RXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL7_RXI) >> BP_USBC_UOG1_ENDPTCTRL7_RXI)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL7_RXI.
#define BF_USBC_UOG1_ENDPTCTRL7_RXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL7_RXI) & BM_USBC_UOG1_ENDPTCTRL7_RXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXI field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL7_RXI(v)   (HW_USBC_UOG1_ENDPTCTRL7_WR((HW_USBC_UOG1_ENDPTCTRL7_RD() & ~BM_USBC_UOG1_ENDPTCTRL7_RXI) | BF_USBC_UOG1_ENDPTCTRL7_RXI(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL7, field RXR[6] (RW)
 *
 * RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the host and device.
 */

#define BP_USBC_UOG1_ENDPTCTRL7_RXR      (6)      //!< Bit position for USBC_UOG1_ENDPTCTRL7_RXR.
#define BM_USBC_UOG1_ENDPTCTRL7_RXR      (0x00000040)  //!< Bit mask for USBC_UOG1_ENDPTCTRL7_RXR.

//! @brief Get value of USBC_UOG1_ENDPTCTRL7_RXR from a register value.
#define BG_USBC_UOG1_ENDPTCTRL7_RXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL7_RXR) >> BP_USBC_UOG1_ENDPTCTRL7_RXR)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL7_RXR.
#define BF_USBC_UOG1_ENDPTCTRL7_RXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL7_RXR) & BM_USBC_UOG1_ENDPTCTRL7_RXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXR field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL7_RXR(v)   (HW_USBC_UOG1_ENDPTCTRL7_WR((HW_USBC_UOG1_ENDPTCTRL7_RD() & ~BM_USBC_UOG1_ENDPTCTRL7_RXR) | BF_USBC_UOG1_ENDPTCTRL7_RXR(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL7, field RXE[7] (RW)
 *
 * RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG1_ENDPTCTRL7_RXE      (7)      //!< Bit position for USBC_UOG1_ENDPTCTRL7_RXE.
#define BM_USBC_UOG1_ENDPTCTRL7_RXE      (0x00000080)  //!< Bit mask for USBC_UOG1_ENDPTCTRL7_RXE.

//! @brief Get value of USBC_UOG1_ENDPTCTRL7_RXE from a register value.
#define BG_USBC_UOG1_ENDPTCTRL7_RXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL7_RXE) >> BP_USBC_UOG1_ENDPTCTRL7_RXE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL7_RXE.
#define BF_USBC_UOG1_ENDPTCTRL7_RXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL7_RXE) & BM_USBC_UOG1_ENDPTCTRL7_RXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXE field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL7_RXE(v)   (HW_USBC_UOG1_ENDPTCTRL7_WR((HW_USBC_UOG1_ENDPTCTRL7_RD() & ~BM_USBC_UOG1_ENDPTCTRL7_RXE) | BF_USBC_UOG1_ENDPTCTRL7_RXE(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL7, field TXS[16] (RW)
 *
 * TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically
 * upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint. It is
 * cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control
 * Endpoint. Software can write a one to this bit to force the endpoint to return a STALL handshake
 * to the Host. It continues to returning STALL until this bit is either cleared by software or
 * automatically cleared as above. For CONTROL type endpoint, there is a slight delay (50 clocks
 * max) between the ENDPTSETUPSTAT begin cleared and hardware continuing to clear this bit. In most
 * systems, it is unlikely the DCD software will observe this delay. Take care that the STALL bit is
 * not set immediately after writing a '1' to it. Please follow this procedure: continually write
 * this STALL bit until it is set or until a new setup has ben received by checking the associated
 * ENDPTSETUPSTAT bit.
 */

#define BP_USBC_UOG1_ENDPTCTRL7_TXS      (16)      //!< Bit position for USBC_UOG1_ENDPTCTRL7_TXS.
#define BM_USBC_UOG1_ENDPTCTRL7_TXS      (0x00010000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL7_TXS.

//! @brief Get value of USBC_UOG1_ENDPTCTRL7_TXS from a register value.
#define BG_USBC_UOG1_ENDPTCTRL7_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL7_TXS) >> BP_USBC_UOG1_ENDPTCTRL7_TXS)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL7_TXS.
#define BF_USBC_UOG1_ENDPTCTRL7_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL7_TXS) & BM_USBC_UOG1_ENDPTCTRL7_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL7_TXS(v)   (HW_USBC_UOG1_ENDPTCTRL7_WR((HW_USBC_UOG1_ENDPTCTRL7_RD() & ~BM_USBC_UOG1_ENDPTCTRL7_TXS) | BF_USBC_UOG1_ENDPTCTRL7_TXS(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL7, field TXD[17] (RW)
 *
 * TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always
 * be written as 0.
 */

#define BP_USBC_UOG1_ENDPTCTRL7_TXD      (17)      //!< Bit position for USBC_UOG1_ENDPTCTRL7_TXD.
#define BM_USBC_UOG1_ENDPTCTRL7_TXD      (0x00020000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL7_TXD.

//! @brief Get value of USBC_UOG1_ENDPTCTRL7_TXD from a register value.
#define BG_USBC_UOG1_ENDPTCTRL7_TXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL7_TXD) >> BP_USBC_UOG1_ENDPTCTRL7_TXD)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL7_TXD.
#define BF_USBC_UOG1_ENDPTCTRL7_TXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL7_TXD) & BM_USBC_UOG1_ENDPTCTRL7_TXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXD field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL7_TXD(v)   (HW_USBC_UOG1_ENDPTCTRL7_WR((HW_USBC_UOG1_ENDPTCTRL7_RD() & ~BM_USBC_UOG1_ENDPTCTRL7_TXD) | BF_USBC_UOG1_ENDPTCTRL7_TXD(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL7, field TXT[19:18] (RW)
 *
 * TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 */

#define BP_USBC_UOG1_ENDPTCTRL7_TXT      (18)      //!< Bit position for USBC_UOG1_ENDPTCTRL7_TXT.
#define BM_USBC_UOG1_ENDPTCTRL7_TXT      (0x000c0000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL7_TXT.

//! @brief Get value of USBC_UOG1_ENDPTCTRL7_TXT from a register value.
#define BG_USBC_UOG1_ENDPTCTRL7_TXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL7_TXT) >> BP_USBC_UOG1_ENDPTCTRL7_TXT)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL7_TXT.
#define BF_USBC_UOG1_ENDPTCTRL7_TXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL7_TXT) & BM_USBC_UOG1_ENDPTCTRL7_TXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXT field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL7_TXT(v)   (HW_USBC_UOG1_ENDPTCTRL7_WR((HW_USBC_UOG1_ENDPTCTRL7_RD() & ~BM_USBC_UOG1_ENDPTCTRL7_TXT) | BF_USBC_UOG1_ENDPTCTRL7_TXT(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL7, field TXI[21] (RW)
 *
 * TX Data Toggle Inhibit 0 PID Sequencing Enabled. [Default] 1 PID Sequencing Disabled. This bit is
 * only used for test and should always be written as zero. Writing a one to this bit causes this
 * endpoint to ignore the data toggle sequence and always transmit DATA0 for a data packet.
 */

#define BP_USBC_UOG1_ENDPTCTRL7_TXI      (21)      //!< Bit position for USBC_UOG1_ENDPTCTRL7_TXI.
#define BM_USBC_UOG1_ENDPTCTRL7_TXI      (0x00200000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL7_TXI.

//! @brief Get value of USBC_UOG1_ENDPTCTRL7_TXI from a register value.
#define BG_USBC_UOG1_ENDPTCTRL7_TXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL7_TXI) >> BP_USBC_UOG1_ENDPTCTRL7_TXI)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL7_TXI.
#define BF_USBC_UOG1_ENDPTCTRL7_TXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL7_TXI) & BM_USBC_UOG1_ENDPTCTRL7_TXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXI field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL7_TXI(v)   (HW_USBC_UOG1_ENDPTCTRL7_WR((HW_USBC_UOG1_ENDPTCTRL7_RD() & ~BM_USBC_UOG1_ENDPTCTRL7_TXI) | BF_USBC_UOG1_ENDPTCTRL7_TXI(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL7, field TXR[22] (RW)
 *
 * TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the Host and device.
 */

#define BP_USBC_UOG1_ENDPTCTRL7_TXR      (22)      //!< Bit position for USBC_UOG1_ENDPTCTRL7_TXR.
#define BM_USBC_UOG1_ENDPTCTRL7_TXR      (0x00400000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL7_TXR.

//! @brief Get value of USBC_UOG1_ENDPTCTRL7_TXR from a register value.
#define BG_USBC_UOG1_ENDPTCTRL7_TXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL7_TXR) >> BP_USBC_UOG1_ENDPTCTRL7_TXR)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL7_TXR.
#define BF_USBC_UOG1_ENDPTCTRL7_TXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL7_TXR) & BM_USBC_UOG1_ENDPTCTRL7_TXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXR field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL7_TXR(v)   (HW_USBC_UOG1_ENDPTCTRL7_WR((HW_USBC_UOG1_ENDPTCTRL7_RD() & ~BM_USBC_UOG1_ENDPTCTRL7_TXR) | BF_USBC_UOG1_ENDPTCTRL7_TXR(v)))
#endif

/* --- Register HW_USBC_UOG1_ENDPTCTRL7, field TXE[23] (RW)
 *
 * TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG1_ENDPTCTRL7_TXE      (23)      //!< Bit position for USBC_UOG1_ENDPTCTRL7_TXE.
#define BM_USBC_UOG1_ENDPTCTRL7_TXE      (0x00800000)  //!< Bit mask for USBC_UOG1_ENDPTCTRL7_TXE.

//! @brief Get value of USBC_UOG1_ENDPTCTRL7_TXE from a register value.
#define BG_USBC_UOG1_ENDPTCTRL7_TXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG1_ENDPTCTRL7_TXE) >> BP_USBC_UOG1_ENDPTCTRL7_TXE)

//! @brief Format value for bitfield USBC_UOG1_ENDPTCTRL7_TXE.
#define BF_USBC_UOG1_ENDPTCTRL7_TXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG1_ENDPTCTRL7_TXE) & BM_USBC_UOG1_ENDPTCTRL7_TXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXE field to a new value.
#define BW_USBC_UOG1_ENDPTCTRL7_TXE(v)   (HW_USBC_UOG1_ENDPTCTRL7_WR((HW_USBC_UOG1_ENDPTCTRL7_RD() & ~BM_USBC_UOG1_ENDPTCTRL7_TXE) | BF_USBC_UOG1_ENDPTCTRL7_TXE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ID - Identification register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ID - Identification register (RO)
 *
 * Reset value: 0xe401fa05
 *
 * The ID register identifies the USB 2.0 High-Speed core and its revision.
 */
typedef union _hw_usbc_uog2_id
{
    reg32_t U;
    struct _hw_usbc_uog2_id_bitfields
    {
        unsigned ID : 6; //!< [5:0] Configuration number.
        unsigned RESERVED0 : 2; //!< [7:6] Reserved
        unsigned NID : 6; //!< [13:8] Complement version of ID
        unsigned RESERVED1 : 2; //!< [15:14] Reserved
        unsigned REVISION : 8; //!< [23:16] Revision number of the controller core.
        unsigned RESERVED2 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_id_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ID register
 */
#define HW_USBC_UOG2_ID_ADDR      (REGS_USBC_BASE + 0x200)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ID           (*(volatile hw_usbc_uog2_id_t *) HW_USBC_UOG2_ID_ADDR)
#define HW_USBC_UOG2_ID_RD()      (HW_USBC_UOG2_ID.U)
#endif

/*
 * constants & macros for individual USBC_UOG2_ID bitfields
 */

/* --- Register HW_USBC_UOG2_ID, field ID[5:0] (RO)
 *
 * Configuration number. This number is set to 0x05 and indicates that the peripheral is USB 2.0
 * High-Speed core.
 */

#define BP_USBC_UOG2_ID_ID      (0)      //!< Bit position for USBC_UOG2_ID_ID.
#define BM_USBC_UOG2_ID_ID      (0x0000003f)  //!< Bit mask for USBC_UOG2_ID_ID.

//! @brief Get value of USBC_UOG2_ID_ID from a register value.
#define BG_USBC_UOG2_ID_ID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ID_ID) >> BP_USBC_UOG2_ID_ID)

/* --- Register HW_USBC_UOG2_ID, field NID[13:8] (RO)
 *
 * Complement version of ID
 */

#define BP_USBC_UOG2_ID_NID      (8)      //!< Bit position for USBC_UOG2_ID_NID.
#define BM_USBC_UOG2_ID_NID      (0x00003f00)  //!< Bit mask for USBC_UOG2_ID_NID.

//! @brief Get value of USBC_UOG2_ID_NID from a register value.
#define BG_USBC_UOG2_ID_NID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ID_NID) >> BP_USBC_UOG2_ID_NID)

/* --- Register HW_USBC_UOG2_ID, field REVISION[23:16] (RO)
 *
 * Revision number of the controller core.
 */

#define BP_USBC_UOG2_ID_REVISION      (16)      //!< Bit position for USBC_UOG2_ID_REVISION.
#define BM_USBC_UOG2_ID_REVISION      (0x00ff0000)  //!< Bit mask for USBC_UOG2_ID_REVISION.

//! @brief Get value of USBC_UOG2_ID_REVISION from a register value.
#define BG_USBC_UOG2_ID_REVISION(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ID_REVISION) >> BP_USBC_UOG2_ID_REVISION)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_HWGENERAL - Hardware General
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_HWGENERAL - Hardware General (RO)
 *
 * Reset value: 0x00000015
 *
 * General hardware parameters as defined in System Level Issues and Core Configuration.  The reset
 * value could vary from instance to instance. Please see the detail in bit field description and
 * ignore reset value in summary table in this case!
 */
typedef union _hw_usbc_uog2_hwgeneral
{
    reg32_t U;
    struct _hw_usbc_uog2_hwgeneral_bitfields
    {
        unsigned RESERVED0 : 4; //!< [3:0] Reserved
        unsigned PHYW : 2; //!< [5:4] Data width of the transciever connected to the controller core.
        unsigned PHYM : 3; //!< [8:6] Transciever type PHYM bit reset value: '0000b' for OTG controller core, '0100b' for Host-only controller core.
        unsigned SM : 2; //!< [10:9] Serial interface mode capability SM bit reset value is '00b'
        unsigned RESERVED1 : 21; //!< [31:11] Reserved
    } B;
} hw_usbc_uog2_hwgeneral_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_HWGENERAL register
 */
#define HW_USBC_UOG2_HWGENERAL_ADDR      (REGS_USBC_BASE + 0x204)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_HWGENERAL           (*(volatile hw_usbc_uog2_hwgeneral_t *) HW_USBC_UOG2_HWGENERAL_ADDR)
#define HW_USBC_UOG2_HWGENERAL_RD()      (HW_USBC_UOG2_HWGENERAL.U)
#endif

/*
 * constants & macros for individual USBC_UOG2_HWGENERAL bitfields
 */

/* --- Register HW_USBC_UOG2_HWGENERAL, field PHYW[5:4] (RO)
 *
 * Data width of the transciever connected to the controller core. PHYW bit reset value is '01b'.
 *
 * Values:
 * 00 -  8 bit wide data bus  Software non-programmable
 * 01 -  16 bit wide data bus  Software non-programmable
 * 10 -  Reset to 8 bit wide data bus  Software programmable
 * 11 -  Reset to 16 bit wide data bus  Software programmable
 */

#define BP_USBC_UOG2_HWGENERAL_PHYW      (4)      //!< Bit position for USBC_UOG2_HWGENERAL_PHYW.
#define BM_USBC_UOG2_HWGENERAL_PHYW      (0x00000030)  //!< Bit mask for USBC_UOG2_HWGENERAL_PHYW.

//! @brief Get value of USBC_UOG2_HWGENERAL_PHYW from a register value.
#define BG_USBC_UOG2_HWGENERAL_PHYW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HWGENERAL_PHYW) >> BP_USBC_UOG2_HWGENERAL_PHYW)


/* --- Register HW_USBC_UOG2_HWGENERAL, field PHYM[8:6] (RO)
 *
 * Transciever type PHYM bit reset value: '0000b' for OTG controller core, '0100b' for Host-only
 * controller core.
 *
 * Values:
 * 000 - UTMI/UMTI+
 * 001 - ULPI DDR
 * 010 - ULPI
 * 011 - Serial Only
 * 100 - Software programmable - reset to UTMI/UTMI+
 * 101 - Software programmable - reset to ULPI DDR
 * 110 - Software programmable - reset to ULPI
 * 111 - Software programmable - reset to Serial
 * 1000 - IC-USB
 * 1001 - Software programmable - reset to IC-USB
 * 1010 - HSIC
 * 1011 - Software programmable - reset to HSIC
 */

#define BP_USBC_UOG2_HWGENERAL_PHYM      (6)      //!< Bit position for USBC_UOG2_HWGENERAL_PHYM.
#define BM_USBC_UOG2_HWGENERAL_PHYM      (0x000001c0)  //!< Bit mask for USBC_UOG2_HWGENERAL_PHYM.

//! @brief Get value of USBC_UOG2_HWGENERAL_PHYM from a register value.
#define BG_USBC_UOG2_HWGENERAL_PHYM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HWGENERAL_PHYM) >> BP_USBC_UOG2_HWGENERAL_PHYM)


/* --- Register HW_USBC_UOG2_HWGENERAL, field SM[10:9] (RO)
 *
 * Serial interface mode capability SM bit reset value is '00b'
 *
 * Values:
 * 00 - No Serial Engine, always use parallel signalling.
 * 01 - Serial Engine present, always use serial signalling for FS/LS.
 * 10 - Software programmable - Reset to use parallel signalling for FS/LS
 * 11 - Software programmable - Reset to use serial signalling for FS/LS
 */

#define BP_USBC_UOG2_HWGENERAL_SM      (9)      //!< Bit position for USBC_UOG2_HWGENERAL_SM.
#define BM_USBC_UOG2_HWGENERAL_SM      (0x00000600)  //!< Bit mask for USBC_UOG2_HWGENERAL_SM.

//! @brief Get value of USBC_UOG2_HWGENERAL_SM from a register value.
#define BG_USBC_UOG2_HWGENERAL_SM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HWGENERAL_SM) >> BP_USBC_UOG2_HWGENERAL_SM)


//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_HWHOST - Host Hardware Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_HWHOST - Host Hardware Parameters (RO)
 *
 * Reset value: 0x10020001
 *

 */
typedef union _hw_usbc_uog2_hwhost
{
    reg32_t U;
    struct _hw_usbc_uog2_hwhost_bitfields
    {
        unsigned HC : 1; //!< [0] Host Capable.
        unsigned NPORT : 3; //!< [3:1] The Nmber of downstream ports supported by the host controller is (NPORT+1).
        unsigned RESERVED0 : 28; //!< [31:4] Reserved
    } B;
} hw_usbc_uog2_hwhost_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_HWHOST register
 */
#define HW_USBC_UOG2_HWHOST_ADDR      (REGS_USBC_BASE + 0x208)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_HWHOST           (*(volatile hw_usbc_uog2_hwhost_t *) HW_USBC_UOG2_HWHOST_ADDR)
#define HW_USBC_UOG2_HWHOST_RD()      (HW_USBC_UOG2_HWHOST.U)
#endif

/*
 * constants & macros for individual USBC_UOG2_HWHOST bitfields
 */

/* --- Register HW_USBC_UOG2_HWHOST, field HC[0] (RO)
 *
 * Host Capable. Indicating whether host operation mode is supported or not.
 *
 * Values:
 * 0 - Not supported
 * 1 - Supported
 */

#define BP_USBC_UOG2_HWHOST_HC      (0)      //!< Bit position for USBC_UOG2_HWHOST_HC.
#define BM_USBC_UOG2_HWHOST_HC      (0x00000001)  //!< Bit mask for USBC_UOG2_HWHOST_HC.

//! @brief Get value of USBC_UOG2_HWHOST_HC from a register value.
#define BG_USBC_UOG2_HWHOST_HC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HWHOST_HC) >> BP_USBC_UOG2_HWHOST_HC)


/* --- Register HW_USBC_UOG2_HWHOST, field NPORT[3:1] (RO)
 *
 * The Nmber of downstream ports supported by the host controller is (NPORT+1). When these bits
 * value is '000', it indicates a single-port host controller.
 */

#define BP_USBC_UOG2_HWHOST_NPORT      (1)      //!< Bit position for USBC_UOG2_HWHOST_NPORT.
#define BM_USBC_UOG2_HWHOST_NPORT      (0x0000000e)  //!< Bit mask for USBC_UOG2_HWHOST_NPORT.

//! @brief Get value of USBC_UOG2_HWHOST_NPORT from a register value.
#define BG_USBC_UOG2_HWHOST_NPORT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HWHOST_NPORT) >> BP_USBC_UOG2_HWHOST_NPORT)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_HWDEVICE - Device Hardware Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_HWDEVICE - Device Hardware Parameters (RO)
 *
 * Reset value: 0x00000011
 *
 * This register is only available in OTG core.
 */
typedef union _hw_usbc_uog2_hwdevice
{
    reg32_t U;
    struct _hw_usbc_uog2_hwdevice_bitfields
    {
        unsigned DC : 1; //!< [0] Device Capable.
        unsigned DEVEP : 5; //!< [5:1] Device Endpoint Number
        unsigned RESERVED0 : 26; //!< [31:6] Reserved
    } B;
} hw_usbc_uog2_hwdevice_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_HWDEVICE register
 */
#define HW_USBC_UOG2_HWDEVICE_ADDR      (REGS_USBC_BASE + 0x20c)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_HWDEVICE           (*(volatile hw_usbc_uog2_hwdevice_t *) HW_USBC_UOG2_HWDEVICE_ADDR)
#define HW_USBC_UOG2_HWDEVICE_RD()      (HW_USBC_UOG2_HWDEVICE.U)
#endif

/*
 * constants & macros for individual USBC_UOG2_HWDEVICE bitfields
 */

/* --- Register HW_USBC_UOG2_HWDEVICE, field DC[0] (RO)
 *
 * Device Capable. Indicating whether device operation mode is supported or not.
 *
 * Values:
 * 0 - Not supported
 * 1 - Supported
 */

#define BP_USBC_UOG2_HWDEVICE_DC      (0)      //!< Bit position for USBC_UOG2_HWDEVICE_DC.
#define BM_USBC_UOG2_HWDEVICE_DC      (0x00000001)  //!< Bit mask for USBC_UOG2_HWDEVICE_DC.

//! @brief Get value of USBC_UOG2_HWDEVICE_DC from a register value.
#define BG_USBC_UOG2_HWDEVICE_DC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HWDEVICE_DC) >> BP_USBC_UOG2_HWDEVICE_DC)


/* --- Register HW_USBC_UOG2_HWDEVICE, field DEVEP[5:1] (RO)
 *
 * Device Endpoint Number
 */

#define BP_USBC_UOG2_HWDEVICE_DEVEP      (1)      //!< Bit position for USBC_UOG2_HWDEVICE_DEVEP.
#define BM_USBC_UOG2_HWDEVICE_DEVEP      (0x0000003e)  //!< Bit mask for USBC_UOG2_HWDEVICE_DEVEP.

//! @brief Get value of USBC_UOG2_HWDEVICE_DEVEP from a register value.
#define BG_USBC_UOG2_HWDEVICE_DEVEP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HWDEVICE_DEVEP) >> BP_USBC_UOG2_HWDEVICE_DEVEP)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_HWTXBUF - TX Buffer Hardware Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_HWTXBUF - TX Buffer Hardware Parameters (RO)
 *
 * Reset value: 0x80080b08
 *

 */
typedef union _hw_usbc_uog2_hwtxbuf
{
    reg32_t U;
    struct _hw_usbc_uog2_hwtxbuf_bitfields
    {
        unsigned TXBURST : 8; //!< [7:0] Default burst size for memory to TX buffer transfer.
        unsigned RESERVED0 : 8; //!< [15:8] Reserved
        unsigned TXCHANADD : 8; //!< [23:16] TX FIFO Buffer size is: (2^TXCHANADD) * 4 Bytes.
        unsigned RESERVED1 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_hwtxbuf_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_HWTXBUF register
 */
#define HW_USBC_UOG2_HWTXBUF_ADDR      (REGS_USBC_BASE + 0x210)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_HWTXBUF           (*(volatile hw_usbc_uog2_hwtxbuf_t *) HW_USBC_UOG2_HWTXBUF_ADDR)
#define HW_USBC_UOG2_HWTXBUF_RD()      (HW_USBC_UOG2_HWTXBUF.U)
#endif

/*
 * constants & macros for individual USBC_UOG2_HWTXBUF bitfields
 */

/* --- Register HW_USBC_UOG2_HWTXBUF, field TXBURST[7:0] (RO)
 *
 * Default burst size for memory to TX buffer transfer. This is reset value of TXPBURST bits in USB
 * core regsiter USB_n_BURSTSIZE. Please see .
 */

#define BP_USBC_UOG2_HWTXBUF_TXBURST      (0)      //!< Bit position for USBC_UOG2_HWTXBUF_TXBURST.
#define BM_USBC_UOG2_HWTXBUF_TXBURST      (0x000000ff)  //!< Bit mask for USBC_UOG2_HWTXBUF_TXBURST.

//! @brief Get value of USBC_UOG2_HWTXBUF_TXBURST from a register value.
#define BG_USBC_UOG2_HWTXBUF_TXBURST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HWTXBUF_TXBURST) >> BP_USBC_UOG2_HWTXBUF_TXBURST)

/* --- Register HW_USBC_UOG2_HWTXBUF, field TXCHANADD[23:16] (RO)
 *
 * TX FIFO Buffer size is: (2^TXCHANADD) * 4 Bytes. These bits are set to '08h', so buffer size is
 * 256*4 Bytes. For the OTG controller operating in device mode, this is the FIFO buffer size per
 * endpoint. As the OTG controller has 8 TX endpoint, there are 8 of these buffers. For the OTG
 * controller operating in host mode, or for Host-only controller, the entire buffer memory is used
 * as a single TX buffer. Therefore, there is only 1 of this buffer
 */

#define BP_USBC_UOG2_HWTXBUF_TXCHANADD      (16)      //!< Bit position for USBC_UOG2_HWTXBUF_TXCHANADD.
#define BM_USBC_UOG2_HWTXBUF_TXCHANADD      (0x00ff0000)  //!< Bit mask for USBC_UOG2_HWTXBUF_TXCHANADD.

//! @brief Get value of USBC_UOG2_HWTXBUF_TXCHANADD from a register value.
#define BG_USBC_UOG2_HWTXBUF_TXCHANADD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HWTXBUF_TXCHANADD) >> BP_USBC_UOG2_HWTXBUF_TXCHANADD)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_HWRXBUF - RX Buffer Hardware Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_HWRXBUF - RX Buffer Hardware Parameters (RO)
 *
 * Reset value: 0x00000808
 *

 */
typedef union _hw_usbc_uog2_hwrxbuf
{
    reg32_t U;
    struct _hw_usbc_uog2_hwrxbuf_bitfields
    {
        unsigned RXBURST : 8; //!< [7:0] Default burst size for memory to RX buffer transfer.
        unsigned RXADD : 8; //!< [15:8] Buffer total size for all receive endpoints is (2^RXADD).
        unsigned RESERVED0 : 16; //!< [31:16] Reserved
    } B;
} hw_usbc_uog2_hwrxbuf_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_HWRXBUF register
 */
#define HW_USBC_UOG2_HWRXBUF_ADDR      (REGS_USBC_BASE + 0x214)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_HWRXBUF           (*(volatile hw_usbc_uog2_hwrxbuf_t *) HW_USBC_UOG2_HWRXBUF_ADDR)
#define HW_USBC_UOG2_HWRXBUF_RD()      (HW_USBC_UOG2_HWRXBUF.U)
#endif

/*
 * constants & macros for individual USBC_UOG2_HWRXBUF bitfields
 */

/* --- Register HW_USBC_UOG2_HWRXBUF, field RXBURST[7:0] (RO)
 *
 * Default burst size for memory to RX buffer transfer. This is reset value of RXPBURST bits in USB
 * core regsiter USB_n_BURSTSIZE. Please see .
 */

#define BP_USBC_UOG2_HWRXBUF_RXBURST      (0)      //!< Bit position for USBC_UOG2_HWRXBUF_RXBURST.
#define BM_USBC_UOG2_HWRXBUF_RXBURST      (0x000000ff)  //!< Bit mask for USBC_UOG2_HWRXBUF_RXBURST.

//! @brief Get value of USBC_UOG2_HWRXBUF_RXBURST from a register value.
#define BG_USBC_UOG2_HWRXBUF_RXBURST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HWRXBUF_RXBURST) >> BP_USBC_UOG2_HWRXBUF_RXBURST)

/* --- Register HW_USBC_UOG2_HWRXBUF, field RXADD[15:8] (RO)
 *
 * Buffer total size for all receive endpoints is (2^RXADD). RX Buffer size is: (2^RXADD) * 4 Bytes.
 * These bits are set to '08h', so buffer size is 256*4 Bytes. There is a single Receive FIFO buffer
 * in the USB controller. The buffer is shared for all endpoints for the OTG controller in device
 * mode.
 */

#define BP_USBC_UOG2_HWRXBUF_RXADD      (8)      //!< Bit position for USBC_UOG2_HWRXBUF_RXADD.
#define BM_USBC_UOG2_HWRXBUF_RXADD      (0x0000ff00)  //!< Bit mask for USBC_UOG2_HWRXBUF_RXADD.

//! @brief Get value of USBC_UOG2_HWRXBUF_RXADD from a register value.
#define BG_USBC_UOG2_HWRXBUF_RXADD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HWRXBUF_RXADD) >> BP_USBC_UOG2_HWRXBUF_RXADD)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_GPTIMER0LD - General Purpose Timer #0 Load
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_GPTIMER0LD - General Purpose Timer #0 Load (RW)
 *
 * Reset value: 0x00000000
 *
 * This register controls load value of the count timer in register n_GPTIMER0CTRL. Please see .
 */
typedef union _hw_usbc_uog2_gptimer0ld
{
    reg32_t U;
    struct _hw_usbc_uog2_gptimer0ld_bitfields
    {
        unsigned GPTLD : 24; //!< [23:0] General Purpose Timer Load Value These bit fields are loaded to GPTCNT bits when GPTRST bit is set '1b'.
        unsigned RESERVED0 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_gptimer0ld_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_GPTIMER0LD register
 */
#define HW_USBC_UOG2_GPTIMER0LD_ADDR      (REGS_USBC_BASE + 0x280)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_GPTIMER0LD           (*(volatile hw_usbc_uog2_gptimer0ld_t *) HW_USBC_UOG2_GPTIMER0LD_ADDR)
#define HW_USBC_UOG2_GPTIMER0LD_RD()      (HW_USBC_UOG2_GPTIMER0LD.U)
#define HW_USBC_UOG2_GPTIMER0LD_WR(v)     (HW_USBC_UOG2_GPTIMER0LD.U = (v))
#define HW_USBC_UOG2_GPTIMER0LD_SET(v)    (HW_USBC_UOG2_GPTIMER0LD_WR(HW_USBC_UOG2_GPTIMER0LD_RD() |  (v)))
#define HW_USBC_UOG2_GPTIMER0LD_CLR(v)    (HW_USBC_UOG2_GPTIMER0LD_WR(HW_USBC_UOG2_GPTIMER0LD_RD() & ~(v)))
#define HW_USBC_UOG2_GPTIMER0LD_TOG(v)    (HW_USBC_UOG2_GPTIMER0LD_WR(HW_USBC_UOG2_GPTIMER0LD_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_GPTIMER0LD bitfields
 */

/* --- Register HW_USBC_UOG2_GPTIMER0LD, field GPTLD[23:0] (RW)
 *
 * General Purpose Timer Load Value These bit fields are loaded to GPTCNT bits when GPTRST bit is
 * set '1b'. This value represents the time in microseconds minus 1 for the timer duration. Example:
 * for a one millisecond timer, load 1000-1=999 or 0x0003E7. Max value is 0xFFFFFF or 16.777215
 * seconds.
 */

#define BP_USBC_UOG2_GPTIMER0LD_GPTLD      (0)      //!< Bit position for USBC_UOG2_GPTIMER0LD_GPTLD.
#define BM_USBC_UOG2_GPTIMER0LD_GPTLD      (0x00ffffff)  //!< Bit mask for USBC_UOG2_GPTIMER0LD_GPTLD.

//! @brief Get value of USBC_UOG2_GPTIMER0LD_GPTLD from a register value.
#define BG_USBC_UOG2_GPTIMER0LD_GPTLD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_GPTIMER0LD_GPTLD) >> BP_USBC_UOG2_GPTIMER0LD_GPTLD)

//! @brief Format value for bitfield USBC_UOG2_GPTIMER0LD_GPTLD.
#define BF_USBC_UOG2_GPTIMER0LD_GPTLD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_GPTIMER0LD_GPTLD) & BM_USBC_UOG2_GPTIMER0LD_GPTLD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTLD field to a new value.
#define BW_USBC_UOG2_GPTIMER0LD_GPTLD(v)   (HW_USBC_UOG2_GPTIMER0LD_WR((HW_USBC_UOG2_GPTIMER0LD_RD() & ~BM_USBC_UOG2_GPTIMER0LD_GPTLD) | BF_USBC_UOG2_GPTIMER0LD_GPTLD(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_GPTIMER0CTRL - General Purpose Timer #0 Controller
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_GPTIMER0CTRL - General Purpose Timer #0 Controller (RW)
 *
 * Reset value: 0x00000000
 *
 * This register contains the control for this countdown timer and a data field can be queried to
 * determine the running count value. This timer has granularity on 1 us and can be programmed to a
 * little over 16 seconds. There are two counter modes which are described in the register table
 * below. When the timer counter value transitions to zero, an interrupt could be generated if
 * enable.  Interrupt status bit is TI0 bit in n_USBSTS register (See ), interrupt enable bit is
 * TIE0 bit in n_USBINTR register. (See .)
 */
typedef union _hw_usbc_uog2_gptimer0ctrl
{
    reg32_t U;
    struct _hw_usbc_uog2_gptimer0ctrl_bitfields
    {
        unsigned GPTCNT : 24; //!< [23:0] General Purpose Timer Counter.
        unsigned GPTMODE : 1; //!< [24] General Purpose Timer Mode In one shot mode, the timer will count down to zero, generate an interrupt, and stop until the counter is reset by software; In repeat mode, the timer will count down to zero, generate an interrupt and automatically reload the counter value from GPTLD bits to start again.
        unsigned RESERVED0 : 5; //!< [29:25] Reserved
        unsigned GPTRST : 1; //!< [30] General Purpose Timer Reset
        unsigned GPTRUN : 1; //!< [31] General Purpose Timer Run GPTCNT bits are not effected when setting or clearing this bit.
    } B;
} hw_usbc_uog2_gptimer0ctrl_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_GPTIMER0CTRL register
 */
#define HW_USBC_UOG2_GPTIMER0CTRL_ADDR      (REGS_USBC_BASE + 0x284)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_GPTIMER0CTRL           (*(volatile hw_usbc_uog2_gptimer0ctrl_t *) HW_USBC_UOG2_GPTIMER0CTRL_ADDR)
#define HW_USBC_UOG2_GPTIMER0CTRL_RD()      (HW_USBC_UOG2_GPTIMER0CTRL.U)
#define HW_USBC_UOG2_GPTIMER0CTRL_WR(v)     (HW_USBC_UOG2_GPTIMER0CTRL.U = (v))
#define HW_USBC_UOG2_GPTIMER0CTRL_SET(v)    (HW_USBC_UOG2_GPTIMER0CTRL_WR(HW_USBC_UOG2_GPTIMER0CTRL_RD() |  (v)))
#define HW_USBC_UOG2_GPTIMER0CTRL_CLR(v)    (HW_USBC_UOG2_GPTIMER0CTRL_WR(HW_USBC_UOG2_GPTIMER0CTRL_RD() & ~(v)))
#define HW_USBC_UOG2_GPTIMER0CTRL_TOG(v)    (HW_USBC_UOG2_GPTIMER0CTRL_WR(HW_USBC_UOG2_GPTIMER0CTRL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_GPTIMER0CTRL bitfields
 */

/* --- Register HW_USBC_UOG2_GPTIMER0CTRL, field GPTCNT[23:0] (RW)
 *
 * General Purpose Timer Counter. This field is the count value of the countdown timer.
 */

#define BP_USBC_UOG2_GPTIMER0CTRL_GPTCNT      (0)      //!< Bit position for USBC_UOG2_GPTIMER0CTRL_GPTCNT.
#define BM_USBC_UOG2_GPTIMER0CTRL_GPTCNT      (0x00ffffff)  //!< Bit mask for USBC_UOG2_GPTIMER0CTRL_GPTCNT.

//! @brief Get value of USBC_UOG2_GPTIMER0CTRL_GPTCNT from a register value.
#define BG_USBC_UOG2_GPTIMER0CTRL_GPTCNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_GPTIMER0CTRL_GPTCNT) >> BP_USBC_UOG2_GPTIMER0CTRL_GPTCNT)

//! @brief Format value for bitfield USBC_UOG2_GPTIMER0CTRL_GPTCNT.
#define BF_USBC_UOG2_GPTIMER0CTRL_GPTCNT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_GPTIMER0CTRL_GPTCNT) & BM_USBC_UOG2_GPTIMER0CTRL_GPTCNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTCNT field to a new value.
#define BW_USBC_UOG2_GPTIMER0CTRL_GPTCNT(v)   (HW_USBC_UOG2_GPTIMER0CTRL_WR((HW_USBC_UOG2_GPTIMER0CTRL_RD() & ~BM_USBC_UOG2_GPTIMER0CTRL_GPTCNT) | BF_USBC_UOG2_GPTIMER0CTRL_GPTCNT(v)))
#endif

/* --- Register HW_USBC_UOG2_GPTIMER0CTRL, field GPTMODE[24] (RW)
 *
 * General Purpose Timer Mode In one shot mode, the timer will count down to zero, generate an
 * interrupt, and stop until the counter is reset by software; In repeat mode, the timer will count
 * down to zero, generate an interrupt and automatically reload the counter value from GPTLD bits to
 * start again.
 *
 * Values:
 * 0 - One Shot Mode
 * 1 - Repeat Mode
 */

#define BP_USBC_UOG2_GPTIMER0CTRL_GPTMODE      (24)      //!< Bit position for USBC_UOG2_GPTIMER0CTRL_GPTMODE.
#define BM_USBC_UOG2_GPTIMER0CTRL_GPTMODE      (0x01000000)  //!< Bit mask for USBC_UOG2_GPTIMER0CTRL_GPTMODE.

//! @brief Get value of USBC_UOG2_GPTIMER0CTRL_GPTMODE from a register value.
#define BG_USBC_UOG2_GPTIMER0CTRL_GPTMODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_GPTIMER0CTRL_GPTMODE) >> BP_USBC_UOG2_GPTIMER0CTRL_GPTMODE)

//! @brief Format value for bitfield USBC_UOG2_GPTIMER0CTRL_GPTMODE.
#define BF_USBC_UOG2_GPTIMER0CTRL_GPTMODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_GPTIMER0CTRL_GPTMODE) & BM_USBC_UOG2_GPTIMER0CTRL_GPTMODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTMODE field to a new value.
#define BW_USBC_UOG2_GPTIMER0CTRL_GPTMODE(v)   (HW_USBC_UOG2_GPTIMER0CTRL_WR((HW_USBC_UOG2_GPTIMER0CTRL_RD() & ~BM_USBC_UOG2_GPTIMER0CTRL_GPTMODE) | BF_USBC_UOG2_GPTIMER0CTRL_GPTMODE(v)))
#endif


/* --- Register HW_USBC_UOG2_GPTIMER0CTRL, field GPTRST[30] (RW)
 *
 * General Purpose Timer Reset
 *
 * Values:
 * 0 - No action
 * 1 - Load counter value from GPTLD bits in n_GPTIMER0LD
 */

#define BP_USBC_UOG2_GPTIMER0CTRL_GPTRST      (30)      //!< Bit position for USBC_UOG2_GPTIMER0CTRL_GPTRST.
#define BM_USBC_UOG2_GPTIMER0CTRL_GPTRST      (0x40000000)  //!< Bit mask for USBC_UOG2_GPTIMER0CTRL_GPTRST.

//! @brief Get value of USBC_UOG2_GPTIMER0CTRL_GPTRST from a register value.
#define BG_USBC_UOG2_GPTIMER0CTRL_GPTRST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_GPTIMER0CTRL_GPTRST) >> BP_USBC_UOG2_GPTIMER0CTRL_GPTRST)

//! @brief Format value for bitfield USBC_UOG2_GPTIMER0CTRL_GPTRST.
#define BF_USBC_UOG2_GPTIMER0CTRL_GPTRST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_GPTIMER0CTRL_GPTRST) & BM_USBC_UOG2_GPTIMER0CTRL_GPTRST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTRST field to a new value.
#define BW_USBC_UOG2_GPTIMER0CTRL_GPTRST(v)   (HW_USBC_UOG2_GPTIMER0CTRL_WR((HW_USBC_UOG2_GPTIMER0CTRL_RD() & ~BM_USBC_UOG2_GPTIMER0CTRL_GPTRST) | BF_USBC_UOG2_GPTIMER0CTRL_GPTRST(v)))
#endif


/* --- Register HW_USBC_UOG2_GPTIMER0CTRL, field GPTRUN[31] (RW)
 *
 * General Purpose Timer Run GPTCNT bits are not effected when setting or clearing this bit.
 *
 * Values:
 * 0 - Stop counting
 * 1 - Run
 */

#define BP_USBC_UOG2_GPTIMER0CTRL_GPTRUN      (31)      //!< Bit position for USBC_UOG2_GPTIMER0CTRL_GPTRUN.
#define BM_USBC_UOG2_GPTIMER0CTRL_GPTRUN      (0x80000000)  //!< Bit mask for USBC_UOG2_GPTIMER0CTRL_GPTRUN.

//! @brief Get value of USBC_UOG2_GPTIMER0CTRL_GPTRUN from a register value.
#define BG_USBC_UOG2_GPTIMER0CTRL_GPTRUN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_GPTIMER0CTRL_GPTRUN) >> BP_USBC_UOG2_GPTIMER0CTRL_GPTRUN)

//! @brief Format value for bitfield USBC_UOG2_GPTIMER0CTRL_GPTRUN.
#define BF_USBC_UOG2_GPTIMER0CTRL_GPTRUN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_GPTIMER0CTRL_GPTRUN) & BM_USBC_UOG2_GPTIMER0CTRL_GPTRUN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTRUN field to a new value.
#define BW_USBC_UOG2_GPTIMER0CTRL_GPTRUN(v)   (HW_USBC_UOG2_GPTIMER0CTRL_WR((HW_USBC_UOG2_GPTIMER0CTRL_RD() & ~BM_USBC_UOG2_GPTIMER0CTRL_GPTRUN) | BF_USBC_UOG2_GPTIMER0CTRL_GPTRUN(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_GPTIMER1LD - General Purpose Timer #1 Load
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_GPTIMER1LD - General Purpose Timer #1 Load (RW)
 *
 * Reset value: 0x00000000
 *
 * This register controls load value of the count timer in register n_GPTIMER1CTRL. Please see .
 */
typedef union _hw_usbc_uog2_gptimer1ld
{
    reg32_t U;
    struct _hw_usbc_uog2_gptimer1ld_bitfields
    {
        unsigned GPTLD : 24; //!< [23:0] General Purpose Timer Load Value These bit fields are loaded to GPTCNT bits when GPTRST bit is set '1b'.
        unsigned RESERVED0 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_gptimer1ld_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_GPTIMER1LD register
 */
#define HW_USBC_UOG2_GPTIMER1LD_ADDR      (REGS_USBC_BASE + 0x288)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_GPTIMER1LD           (*(volatile hw_usbc_uog2_gptimer1ld_t *) HW_USBC_UOG2_GPTIMER1LD_ADDR)
#define HW_USBC_UOG2_GPTIMER1LD_RD()      (HW_USBC_UOG2_GPTIMER1LD.U)
#define HW_USBC_UOG2_GPTIMER1LD_WR(v)     (HW_USBC_UOG2_GPTIMER1LD.U = (v))
#define HW_USBC_UOG2_GPTIMER1LD_SET(v)    (HW_USBC_UOG2_GPTIMER1LD_WR(HW_USBC_UOG2_GPTIMER1LD_RD() |  (v)))
#define HW_USBC_UOG2_GPTIMER1LD_CLR(v)    (HW_USBC_UOG2_GPTIMER1LD_WR(HW_USBC_UOG2_GPTIMER1LD_RD() & ~(v)))
#define HW_USBC_UOG2_GPTIMER1LD_TOG(v)    (HW_USBC_UOG2_GPTIMER1LD_WR(HW_USBC_UOG2_GPTIMER1LD_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_GPTIMER1LD bitfields
 */

/* --- Register HW_USBC_UOG2_GPTIMER1LD, field GPTLD[23:0] (RW)
 *
 * General Purpose Timer Load Value These bit fields are loaded to GPTCNT bits when GPTRST bit is
 * set '1b'. This value represents the time in microseconds minus 1 for the timer duration. Example:
 * for a one millisecond timer, load 1000-1=999 or 0x0003E7. Max value is 0xFFFFFF or 16.777215
 * seconds.
 */

#define BP_USBC_UOG2_GPTIMER1LD_GPTLD      (0)      //!< Bit position for USBC_UOG2_GPTIMER1LD_GPTLD.
#define BM_USBC_UOG2_GPTIMER1LD_GPTLD      (0x00ffffff)  //!< Bit mask for USBC_UOG2_GPTIMER1LD_GPTLD.

//! @brief Get value of USBC_UOG2_GPTIMER1LD_GPTLD from a register value.
#define BG_USBC_UOG2_GPTIMER1LD_GPTLD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_GPTIMER1LD_GPTLD) >> BP_USBC_UOG2_GPTIMER1LD_GPTLD)

//! @brief Format value for bitfield USBC_UOG2_GPTIMER1LD_GPTLD.
#define BF_USBC_UOG2_GPTIMER1LD_GPTLD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_GPTIMER1LD_GPTLD) & BM_USBC_UOG2_GPTIMER1LD_GPTLD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTLD field to a new value.
#define BW_USBC_UOG2_GPTIMER1LD_GPTLD(v)   (HW_USBC_UOG2_GPTIMER1LD_WR((HW_USBC_UOG2_GPTIMER1LD_RD() & ~BM_USBC_UOG2_GPTIMER1LD_GPTLD) | BF_USBC_UOG2_GPTIMER1LD_GPTLD(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_GPTIMER1CTRL - General Purpose Timer #1 Controller
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_GPTIMER1CTRL - General Purpose Timer #1 Controller (RW)
 *
 * Reset value: 0x00000000
 *
 * This register contains the control for this countdown timer and a data field can be queried to
 * determine the running count value. This timer has granularity on 1 us and can be programmed to a
 * little over 16 seconds. There are two counter modes which are described in the register table
 * below. When the timer counter value transitions to zero, an interrupt could be generated if
 * enable.  Interrupt status bit is TI1 bit in USB_n_USBSTS register (See ), interrupt enable bit is
 * TIE1 bit in n_USBINTR register (See ).
 */
typedef union _hw_usbc_uog2_gptimer1ctrl
{
    reg32_t U;
    struct _hw_usbc_uog2_gptimer1ctrl_bitfields
    {
        unsigned GPTCNT : 24; //!< [23:0] General Purpose Timer Counter.
        unsigned GPTMODE : 1; //!< [24] General Purpose Timer Mode In one shot mode, the timer will count down to zero, generate an interrupt, and stop until the counter is reset by software.
        unsigned RESERVED0 : 5; //!< [29:25] Reserved
        unsigned GPTRST : 1; //!< [30] General Purpose Timer Reset
        unsigned GPTRUN : 1; //!< [31] General Purpose Timer Run GPTCNT bits are not effected when setting or clearing this bit.
    } B;
} hw_usbc_uog2_gptimer1ctrl_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_GPTIMER1CTRL register
 */
#define HW_USBC_UOG2_GPTIMER1CTRL_ADDR      (REGS_USBC_BASE + 0x28c)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_GPTIMER1CTRL           (*(volatile hw_usbc_uog2_gptimer1ctrl_t *) HW_USBC_UOG2_GPTIMER1CTRL_ADDR)
#define HW_USBC_UOG2_GPTIMER1CTRL_RD()      (HW_USBC_UOG2_GPTIMER1CTRL.U)
#define HW_USBC_UOG2_GPTIMER1CTRL_WR(v)     (HW_USBC_UOG2_GPTIMER1CTRL.U = (v))
#define HW_USBC_UOG2_GPTIMER1CTRL_SET(v)    (HW_USBC_UOG2_GPTIMER1CTRL_WR(HW_USBC_UOG2_GPTIMER1CTRL_RD() |  (v)))
#define HW_USBC_UOG2_GPTIMER1CTRL_CLR(v)    (HW_USBC_UOG2_GPTIMER1CTRL_WR(HW_USBC_UOG2_GPTIMER1CTRL_RD() & ~(v)))
#define HW_USBC_UOG2_GPTIMER1CTRL_TOG(v)    (HW_USBC_UOG2_GPTIMER1CTRL_WR(HW_USBC_UOG2_GPTIMER1CTRL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_GPTIMER1CTRL bitfields
 */

/* --- Register HW_USBC_UOG2_GPTIMER1CTRL, field GPTCNT[23:0] (RW)
 *
 * General Purpose Timer Counter. This field is the count value of the countdown timer.
 */

#define BP_USBC_UOG2_GPTIMER1CTRL_GPTCNT      (0)      //!< Bit position for USBC_UOG2_GPTIMER1CTRL_GPTCNT.
#define BM_USBC_UOG2_GPTIMER1CTRL_GPTCNT      (0x00ffffff)  //!< Bit mask for USBC_UOG2_GPTIMER1CTRL_GPTCNT.

//! @brief Get value of USBC_UOG2_GPTIMER1CTRL_GPTCNT from a register value.
#define BG_USBC_UOG2_GPTIMER1CTRL_GPTCNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_GPTIMER1CTRL_GPTCNT) >> BP_USBC_UOG2_GPTIMER1CTRL_GPTCNT)

//! @brief Format value for bitfield USBC_UOG2_GPTIMER1CTRL_GPTCNT.
#define BF_USBC_UOG2_GPTIMER1CTRL_GPTCNT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_GPTIMER1CTRL_GPTCNT) & BM_USBC_UOG2_GPTIMER1CTRL_GPTCNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTCNT field to a new value.
#define BW_USBC_UOG2_GPTIMER1CTRL_GPTCNT(v)   (HW_USBC_UOG2_GPTIMER1CTRL_WR((HW_USBC_UOG2_GPTIMER1CTRL_RD() & ~BM_USBC_UOG2_GPTIMER1CTRL_GPTCNT) | BF_USBC_UOG2_GPTIMER1CTRL_GPTCNT(v)))
#endif

/* --- Register HW_USBC_UOG2_GPTIMER1CTRL, field GPTMODE[24] (RW)
 *
 * General Purpose Timer Mode In one shot mode, the timer will count down to zero, generate an
 * interrupt, and stop until the counter is reset by software. In repeat mode, the timer will count
 * down to zero, generate an interrupt and automatically reload the counter value from GPTLD bits to
 * start again.
 *
 * Values:
 * 0 - One Shot Mode
 * 1 - Repeat Mode
 */

#define BP_USBC_UOG2_GPTIMER1CTRL_GPTMODE      (24)      //!< Bit position for USBC_UOG2_GPTIMER1CTRL_GPTMODE.
#define BM_USBC_UOG2_GPTIMER1CTRL_GPTMODE      (0x01000000)  //!< Bit mask for USBC_UOG2_GPTIMER1CTRL_GPTMODE.

//! @brief Get value of USBC_UOG2_GPTIMER1CTRL_GPTMODE from a register value.
#define BG_USBC_UOG2_GPTIMER1CTRL_GPTMODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_GPTIMER1CTRL_GPTMODE) >> BP_USBC_UOG2_GPTIMER1CTRL_GPTMODE)

//! @brief Format value for bitfield USBC_UOG2_GPTIMER1CTRL_GPTMODE.
#define BF_USBC_UOG2_GPTIMER1CTRL_GPTMODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_GPTIMER1CTRL_GPTMODE) & BM_USBC_UOG2_GPTIMER1CTRL_GPTMODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTMODE field to a new value.
#define BW_USBC_UOG2_GPTIMER1CTRL_GPTMODE(v)   (HW_USBC_UOG2_GPTIMER1CTRL_WR((HW_USBC_UOG2_GPTIMER1CTRL_RD() & ~BM_USBC_UOG2_GPTIMER1CTRL_GPTMODE) | BF_USBC_UOG2_GPTIMER1CTRL_GPTMODE(v)))
#endif


/* --- Register HW_USBC_UOG2_GPTIMER1CTRL, field GPTRST[30] (RW)
 *
 * General Purpose Timer Reset
 *
 * Values:
 * 0 - No action
 * 1 - Load counter value from GPTLD bits in USB_n_GPTIMER0LD
 */

#define BP_USBC_UOG2_GPTIMER1CTRL_GPTRST      (30)      //!< Bit position for USBC_UOG2_GPTIMER1CTRL_GPTRST.
#define BM_USBC_UOG2_GPTIMER1CTRL_GPTRST      (0x40000000)  //!< Bit mask for USBC_UOG2_GPTIMER1CTRL_GPTRST.

//! @brief Get value of USBC_UOG2_GPTIMER1CTRL_GPTRST from a register value.
#define BG_USBC_UOG2_GPTIMER1CTRL_GPTRST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_GPTIMER1CTRL_GPTRST) >> BP_USBC_UOG2_GPTIMER1CTRL_GPTRST)

//! @brief Format value for bitfield USBC_UOG2_GPTIMER1CTRL_GPTRST.
#define BF_USBC_UOG2_GPTIMER1CTRL_GPTRST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_GPTIMER1CTRL_GPTRST) & BM_USBC_UOG2_GPTIMER1CTRL_GPTRST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTRST field to a new value.
#define BW_USBC_UOG2_GPTIMER1CTRL_GPTRST(v)   (HW_USBC_UOG2_GPTIMER1CTRL_WR((HW_USBC_UOG2_GPTIMER1CTRL_RD() & ~BM_USBC_UOG2_GPTIMER1CTRL_GPTRST) | BF_USBC_UOG2_GPTIMER1CTRL_GPTRST(v)))
#endif


/* --- Register HW_USBC_UOG2_GPTIMER1CTRL, field GPTRUN[31] (RW)
 *
 * General Purpose Timer Run GPTCNT bits are not effected when setting or clearing this bit.
 *
 * Values:
 * 0 - Stop counting
 * 1 - Run
 */

#define BP_USBC_UOG2_GPTIMER1CTRL_GPTRUN      (31)      //!< Bit position for USBC_UOG2_GPTIMER1CTRL_GPTRUN.
#define BM_USBC_UOG2_GPTIMER1CTRL_GPTRUN      (0x80000000)  //!< Bit mask for USBC_UOG2_GPTIMER1CTRL_GPTRUN.

//! @brief Get value of USBC_UOG2_GPTIMER1CTRL_GPTRUN from a register value.
#define BG_USBC_UOG2_GPTIMER1CTRL_GPTRUN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_GPTIMER1CTRL_GPTRUN) >> BP_USBC_UOG2_GPTIMER1CTRL_GPTRUN)

//! @brief Format value for bitfield USBC_UOG2_GPTIMER1CTRL_GPTRUN.
#define BF_USBC_UOG2_GPTIMER1CTRL_GPTRUN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_GPTIMER1CTRL_GPTRUN) & BM_USBC_UOG2_GPTIMER1CTRL_GPTRUN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTRUN field to a new value.
#define BW_USBC_UOG2_GPTIMER1CTRL_GPTRUN(v)   (HW_USBC_UOG2_GPTIMER1CTRL_WR((HW_USBC_UOG2_GPTIMER1CTRL_RD() & ~BM_USBC_UOG2_GPTIMER1CTRL_GPTRUN) | BF_USBC_UOG2_GPTIMER1CTRL_GPTRUN(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_SBUSCFG - System Bus Config
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_SBUSCFG - System Bus Config (RW)
 *
 * Reset value: 0x00000002
 *

 */
typedef union _hw_usbc_uog2_sbuscfg
{
    reg32_t U;
    struct _hw_usbc_uog2_sbuscfg_bitfields
    {
        unsigned AHBBRST : 3; //!< [2:0] AHB master interface Burst configuration These bits control AHB master transfer type sequence (or priority).
        unsigned RESERVED0 : 29; //!< [31:3] Reserved
    } B;
} hw_usbc_uog2_sbuscfg_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_SBUSCFG register
 */
#define HW_USBC_UOG2_SBUSCFG_ADDR      (REGS_USBC_BASE + 0x290)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_SBUSCFG           (*(volatile hw_usbc_uog2_sbuscfg_t *) HW_USBC_UOG2_SBUSCFG_ADDR)
#define HW_USBC_UOG2_SBUSCFG_RD()      (HW_USBC_UOG2_SBUSCFG.U)
#define HW_USBC_UOG2_SBUSCFG_WR(v)     (HW_USBC_UOG2_SBUSCFG.U = (v))
#define HW_USBC_UOG2_SBUSCFG_SET(v)    (HW_USBC_UOG2_SBUSCFG_WR(HW_USBC_UOG2_SBUSCFG_RD() |  (v)))
#define HW_USBC_UOG2_SBUSCFG_CLR(v)    (HW_USBC_UOG2_SBUSCFG_WR(HW_USBC_UOG2_SBUSCFG_RD() & ~(v)))
#define HW_USBC_UOG2_SBUSCFG_TOG(v)    (HW_USBC_UOG2_SBUSCFG_WR(HW_USBC_UOG2_SBUSCFG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_SBUSCFG bitfields
 */

/* --- Register HW_USBC_UOG2_SBUSCFG, field AHBBRST[2:0] (RW)
 *
 * AHB master interface Burst configuration These bits control AHB master transfer type sequence (or
 * priority). This register overrides n_BURSTSIZE register when its value is not zero.
 *
 * Values:
 * 000 - Incremental burst of unspecified length only
 * 001 - INCR4 burst, then single transfer
 * 010 - INCR8 burst, INCR4 burst, then single transfer
 * 011 - INCR16 burst, INCR8 burst, INCR4 burst, then single transfer
 * 100 - Reserved, don't use
 * 101 - INCR4 burst, then incremental burst of unspecified length
 * 110 - INCR8 burst, INCR4 burst, then incremental burst of unspecified length
 * 111 - INCR16 burst, INCR8 burst, INCR4 burst, then incremental burst of unspecified length
 */

#define BP_USBC_UOG2_SBUSCFG_AHBBRST      (0)      //!< Bit position for USBC_UOG2_SBUSCFG_AHBBRST.
#define BM_USBC_UOG2_SBUSCFG_AHBBRST      (0x00000007)  //!< Bit mask for USBC_UOG2_SBUSCFG_AHBBRST.

//! @brief Get value of USBC_UOG2_SBUSCFG_AHBBRST from a register value.
#define BG_USBC_UOG2_SBUSCFG_AHBBRST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_SBUSCFG_AHBBRST) >> BP_USBC_UOG2_SBUSCFG_AHBBRST)

//! @brief Format value for bitfield USBC_UOG2_SBUSCFG_AHBBRST.
#define BF_USBC_UOG2_SBUSCFG_AHBBRST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_SBUSCFG_AHBBRST) & BM_USBC_UOG2_SBUSCFG_AHBBRST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AHBBRST field to a new value.
#define BW_USBC_UOG2_SBUSCFG_AHBBRST(v)   (HW_USBC_UOG2_SBUSCFG_WR((HW_USBC_UOG2_SBUSCFG_RD() & ~BM_USBC_UOG2_SBUSCFG_AHBBRST) | BF_USBC_UOG2_SBUSCFG_AHBBRST(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_CAPLENGTH - Capability Registers Length
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_CAPLENGTH - Capability Registers Length (RO)
 *
 * Reset value: 0x00000040
 *
 * The Capability Registers Length register contains the address offset to the Operational registers
 * relative to the CAPLENGTH register.
 */
typedef union _hw_usbc_uog2_caplength
{
    reg8_t U;
    struct _hw_usbc_uog2_caplength_bitfields
    {
        unsigned char CAPLENGTH : 8; //!< [7:0] These bits are used as an offset to add to register base to find the beginning of the Operational Register.
    } B;
} hw_usbc_uog2_caplength_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_CAPLENGTH register
 */
#define HW_USBC_UOG2_CAPLENGTH_ADDR      (REGS_USBC_BASE + 0x300)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_CAPLENGTH           (*(volatile hw_usbc_uog2_caplength_t *) HW_USBC_UOG2_CAPLENGTH_ADDR)
#define HW_USBC_UOG2_CAPLENGTH_RD()      (HW_USBC_UOG2_CAPLENGTH.U)
#endif

/*
 * constants & macros for individual USBC_UOG2_CAPLENGTH bitfields
 */

/* --- Register HW_USBC_UOG2_CAPLENGTH, field CAPLENGTH[7:0] (RO)
 *
 * These bits are used as an offset to add to register base to find the beginning of the Operational
 * Register. Default value is '40h'.
 */

#define BP_USBC_UOG2_CAPLENGTH_CAPLENGTH      (0)      //!< Bit position for USBC_UOG2_CAPLENGTH_CAPLENGTH.
#define BM_USBC_UOG2_CAPLENGTH_CAPLENGTH      (0x000000ff)  //!< Bit mask for USBC_UOG2_CAPLENGTH_CAPLENGTH.

//! @brief Get value of USBC_UOG2_CAPLENGTH_CAPLENGTH from a register value.
#define BG_USBC_UOG2_CAPLENGTH_CAPLENGTH(r)   ((__REG_VALUE_TYPE((r), reg8_t) & BM_USBC_UOG2_CAPLENGTH_CAPLENGTH) >> BP_USBC_UOG2_CAPLENGTH_CAPLENGTH)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_HCIVERSION - Host Controller Interface Version
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_HCIVERSION - Host Controller Interface Version (RO)
 *
 * Reset value: 0x00000100
 *
 * This is a 2-byte register containing a BCD encoding of the EHCI revision number supported by this
 * host controller. The most significant byte of this register represents a major revision and the
 * least significant byte is the minor revision.
 */
typedef union _hw_usbc_uog2_hciversion
{
    reg16_t U;
    struct _hw_usbc_uog2_hciversion_bitfields
    {
        unsigned short HCIVERSION : 16; //!< [15:0] Host Controller Interface Version Number Default value is '10h', which means EHCI rev1.0.
    } B;
} hw_usbc_uog2_hciversion_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_HCIVERSION register
 */
#define HW_USBC_UOG2_HCIVERSION_ADDR      (REGS_USBC_BASE + 0x302)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_HCIVERSION           (*(volatile hw_usbc_uog2_hciversion_t *) HW_USBC_UOG2_HCIVERSION_ADDR)
#define HW_USBC_UOG2_HCIVERSION_RD()      (HW_USBC_UOG2_HCIVERSION.U)
#endif

/*
 * constants & macros for individual USBC_UOG2_HCIVERSION bitfields
 */

/* --- Register HW_USBC_UOG2_HCIVERSION, field HCIVERSION[15:0] (RO)
 *
 * Host Controller Interface Version Number Default value is '10h', which means EHCI rev1.0.
 */

#define BP_USBC_UOG2_HCIVERSION_HCIVERSION      (0)      //!< Bit position for USBC_UOG2_HCIVERSION_HCIVERSION.
#define BM_USBC_UOG2_HCIVERSION_HCIVERSION      (0x0000ffff)  //!< Bit mask for USBC_UOG2_HCIVERSION_HCIVERSION.

//! @brief Get value of USBC_UOG2_HCIVERSION_HCIVERSION from a register value.
#define BG_USBC_UOG2_HCIVERSION_HCIVERSION(r)   ((__REG_VALUE_TYPE((r), reg16_t) & BM_USBC_UOG2_HCIVERSION_HCIVERSION) >> BP_USBC_UOG2_HCIVERSION_HCIVERSION)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_HCSPARAMS - Host Controller Structural Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_HCSPARAMS - Host Controller Structural Parameters (RO)
 *
 * Reset value: 0x00010011
 *
 * The following figure shows the port steering logic capabilities of Host Control Structural
 * Parameters (n_HCSPARAMS).
 */
typedef union _hw_usbc_uog2_hcsparams
{
    reg32_t U;
    struct _hw_usbc_uog2_hcsparams_bitfields
    {
        unsigned N_PORTS : 4; //!< [3:0] Number of downstream ports.
        unsigned PPC : 1; //!< [4] Port Power Control This field indicates whether the host controller implementation includes port power control.
        unsigned RESERVED0 : 3; //!< [7:5] Reserved
        unsigned N_PCC : 4; //!< [11:8] Number of Ports per Companion Controller This field indicates the number of ports supported per internal Companion Controller.
        unsigned N_CC : 4; //!< [15:12] Number of Companion Controller (N_CC).
        unsigned PI : 1; //!< [16] Port Indicators (P INDICATOR) This bit indicates whether the ports support port indicator control.
        unsigned RESERVED1 : 3; //!< [19:17] Reserved
        unsigned N_PTT : 4; //!< [23:20] Number of Ports per Transaction Translator (N_PTT).
        unsigned N_TT : 4; //!< [27:24] Number of Transaction Translators (N_TT).
        unsigned RESERVED2 : 4; //!< [31:28] Reserved
    } B;
} hw_usbc_uog2_hcsparams_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_HCSPARAMS register
 */
#define HW_USBC_UOG2_HCSPARAMS_ADDR      (REGS_USBC_BASE + 0x304)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_HCSPARAMS           (*(volatile hw_usbc_uog2_hcsparams_t *) HW_USBC_UOG2_HCSPARAMS_ADDR)
#define HW_USBC_UOG2_HCSPARAMS_RD()      (HW_USBC_UOG2_HCSPARAMS.U)
#endif

/*
 * constants & macros for individual USBC_UOG2_HCSPARAMS bitfields
 */

/* --- Register HW_USBC_UOG2_HCSPARAMS, field N_PORTS[3:0] (RO)
 *
 * Number of downstream ports. This field specifies the number of physical downstream ports
 * implemented on this host controller. The value of this field determines how many port registers
 * are addressable in the Operational Register. Valid values are in the range of 1h to Fh. A zero in
 * this field is undefined. These bits are always set to '0001b' because all controller cores are
 * Single-Port Host.
 */

#define BP_USBC_UOG2_HCSPARAMS_N_PORTS      (0)      //!< Bit position for USBC_UOG2_HCSPARAMS_N_PORTS.
#define BM_USBC_UOG2_HCSPARAMS_N_PORTS      (0x0000000f)  //!< Bit mask for USBC_UOG2_HCSPARAMS_N_PORTS.

//! @brief Get value of USBC_UOG2_HCSPARAMS_N_PORTS from a register value.
#define BG_USBC_UOG2_HCSPARAMS_N_PORTS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HCSPARAMS_N_PORTS) >> BP_USBC_UOG2_HCSPARAMS_N_PORTS)

/* --- Register HW_USBC_UOG2_HCSPARAMS, field PPC[4] (RO)
 *
 * Port Power Control This field indicates whether the host controller implementation includes port
 * power control. A one indicates the ports have port power switches. A zero indicates the ports do
 * not have port power switches. The value of this field affects the functionality of the Port Power
 * field in each port status and control register
 */

#define BP_USBC_UOG2_HCSPARAMS_PPC      (4)      //!< Bit position for USBC_UOG2_HCSPARAMS_PPC.
#define BM_USBC_UOG2_HCSPARAMS_PPC      (0x00000010)  //!< Bit mask for USBC_UOG2_HCSPARAMS_PPC.

//! @brief Get value of USBC_UOG2_HCSPARAMS_PPC from a register value.
#define BG_USBC_UOG2_HCSPARAMS_PPC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HCSPARAMS_PPC) >> BP_USBC_UOG2_HCSPARAMS_PPC)

/* --- Register HW_USBC_UOG2_HCSPARAMS, field N_PCC[11:8] (RO)
 *
 * Number of Ports per Companion Controller This field indicates the number of ports supported per
 * internal Companion Controller. It is used to indicate the port routing configuration to the
 * system software. For example, if N_PORTS has a value of 6 and N_CC has a value of 2 then N_PCC
 * could have a value of 3. The convention is that the first N_PCC ports are assumed to be routed to
 * companion controller 1, the next N_PCC ports to companion controller 2, etc. In the previous
 * example, the N_PCC could have been 4, where the first 4 are routed to companion controller 1 and
 * the last two are routed to companion controller 2. The number in this field must be consistent
 * with N_PORTS and N_CC. These bits are '0000b' in all controller core.
 */

#define BP_USBC_UOG2_HCSPARAMS_N_PCC      (8)      //!< Bit position for USBC_UOG2_HCSPARAMS_N_PCC.
#define BM_USBC_UOG2_HCSPARAMS_N_PCC      (0x00000f00)  //!< Bit mask for USBC_UOG2_HCSPARAMS_N_PCC.

//! @brief Get value of USBC_UOG2_HCSPARAMS_N_PCC from a register value.
#define BG_USBC_UOG2_HCSPARAMS_N_PCC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HCSPARAMS_N_PCC) >> BP_USBC_UOG2_HCSPARAMS_N_PCC)

/* --- Register HW_USBC_UOG2_HCSPARAMS, field N_CC[15:12] (RO)
 *
 * Number of Companion Controller (N_CC). This field indicates the number of companion controllers
 * associated with this USB2.0 host controller. These bits are '0000b' in all controller core.
 *
 * Values:
 * 0 - There is no internal Companion Controller and port-ownership hand-off is not supported.
 * 1 - There are internal companion controller(s) and port-ownership hand-offs is supported.
 */

#define BP_USBC_UOG2_HCSPARAMS_N_CC      (12)      //!< Bit position for USBC_UOG2_HCSPARAMS_N_CC.
#define BM_USBC_UOG2_HCSPARAMS_N_CC      (0x0000f000)  //!< Bit mask for USBC_UOG2_HCSPARAMS_N_CC.

//! @brief Get value of USBC_UOG2_HCSPARAMS_N_CC from a register value.
#define BG_USBC_UOG2_HCSPARAMS_N_CC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HCSPARAMS_N_CC) >> BP_USBC_UOG2_HCSPARAMS_N_CC)


/* --- Register HW_USBC_UOG2_HCSPARAMS, field PI[16] (RO)
 *
 * Port Indicators (P INDICATOR) This bit indicates whether the ports support port indicator
 * control. When set to one, the port status and control registers include a read/writeable field
 * for controlling the state of the port indicator This bit is "1b" in all controller core.
 */

#define BP_USBC_UOG2_HCSPARAMS_PI      (16)      //!< Bit position for USBC_UOG2_HCSPARAMS_PI.
#define BM_USBC_UOG2_HCSPARAMS_PI      (0x00010000)  //!< Bit mask for USBC_UOG2_HCSPARAMS_PI.

//! @brief Get value of USBC_UOG2_HCSPARAMS_PI from a register value.
#define BG_USBC_UOG2_HCSPARAMS_PI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HCSPARAMS_PI) >> BP_USBC_UOG2_HCSPARAMS_PI)

/* --- Register HW_USBC_UOG2_HCSPARAMS, field N_PTT[23:20] (RO)
 *
 * Number of Ports per Transaction Translator (N_PTT). Default value '0000b' This field indicates
 * the number of ports assigned to each transaction translator within the USB2.0 host controller.
 * These bits would be set to equal N_PORTS for Multi-Port Host, and '0000b' for Single-Port Host.
 */

#define BP_USBC_UOG2_HCSPARAMS_N_PTT      (20)      //!< Bit position for USBC_UOG2_HCSPARAMS_N_PTT.
#define BM_USBC_UOG2_HCSPARAMS_N_PTT      (0x00f00000)  //!< Bit mask for USBC_UOG2_HCSPARAMS_N_PTT.

//! @brief Get value of USBC_UOG2_HCSPARAMS_N_PTT from a register value.
#define BG_USBC_UOG2_HCSPARAMS_N_PTT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HCSPARAMS_N_PTT) >> BP_USBC_UOG2_HCSPARAMS_N_PTT)

/* --- Register HW_USBC_UOG2_HCSPARAMS, field N_TT[27:24] (RO)
 *
 * Number of Transaction Translators (N_TT). Default value '0000b' This field indicates the number
 * of embedded transaction translators associated with the USB2.0 host controller. These bits would
 * be set to '0001b' for Multi-Port Host, and '0000b' for Single-Port Host.
 */

#define BP_USBC_UOG2_HCSPARAMS_N_TT      (24)      //!< Bit position for USBC_UOG2_HCSPARAMS_N_TT.
#define BM_USBC_UOG2_HCSPARAMS_N_TT      (0x0f000000)  //!< Bit mask for USBC_UOG2_HCSPARAMS_N_TT.

//! @brief Get value of USBC_UOG2_HCSPARAMS_N_TT from a register value.
#define BG_USBC_UOG2_HCSPARAMS_N_TT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HCSPARAMS_N_TT) >> BP_USBC_UOG2_HCSPARAMS_N_TT)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_HCCPARAMS - Host Controller Capability Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_HCCPARAMS - Host Controller Capability Parameters (RO)
 *
 * Reset value: 0x00000006
 *
 * This register identifies multiple mode control (time-base bit functionality), addressing
 * capability.
 */
typedef union _hw_usbc_uog2_hccparams
{
    reg32_t U;
    struct _hw_usbc_uog2_hccparams_bitfields
    {
        unsigned ADC : 1; //!< [0] 64-bit Addressing Capability This bit is set '0b' in all controller core, no 64-bit addressing capability is supported.
        unsigned PFL : 1; //!< [1] Programmable Frame List Flag If this bit is set to zero, then the system software must use a frame list length of 1024 elements with this host controller.
        unsigned ASP : 1; //!< [2] Asynchronous Schedule Park Capability If this bit is set to a one, then the host controller supports the park feature for high-speed queue heads in the Asynchronous Schedule.
        unsigned RESERVED0 : 1; //!< [3] Reserved
        unsigned IST : 4; //!< [7:4] Isochronous Scheduling Threshold.
        unsigned EECP : 8; //!< [15:8] EHCI Extended Capabilities Pointer.
        unsigned RESERVED1 : 16; //!< [31:16] Reserved
    } B;
} hw_usbc_uog2_hccparams_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_HCCPARAMS register
 */
#define HW_USBC_UOG2_HCCPARAMS_ADDR      (REGS_USBC_BASE + 0x308)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_HCCPARAMS           (*(volatile hw_usbc_uog2_hccparams_t *) HW_USBC_UOG2_HCCPARAMS_ADDR)
#define HW_USBC_UOG2_HCCPARAMS_RD()      (HW_USBC_UOG2_HCCPARAMS.U)
#endif

/*
 * constants & macros for individual USBC_UOG2_HCCPARAMS bitfields
 */

/* --- Register HW_USBC_UOG2_HCCPARAMS, field ADC[0] (RO)
 *
 * 64-bit Addressing Capability This bit is set '0b' in all controller core, no 64-bit addressing
 * capability is supported.
 */

#define BP_USBC_UOG2_HCCPARAMS_ADC      (0)      //!< Bit position for USBC_UOG2_HCCPARAMS_ADC.
#define BM_USBC_UOG2_HCCPARAMS_ADC      (0x00000001)  //!< Bit mask for USBC_UOG2_HCCPARAMS_ADC.

//! @brief Get value of USBC_UOG2_HCCPARAMS_ADC from a register value.
#define BG_USBC_UOG2_HCCPARAMS_ADC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HCCPARAMS_ADC) >> BP_USBC_UOG2_HCCPARAMS_ADC)

/* --- Register HW_USBC_UOG2_HCCPARAMS, field PFL[1] (RO)
 *
 * Programmable Frame List Flag If this bit is set to zero, then the system software must use a
 * frame list length of 1024 elements with this host controller. The USBCMD register Frame List Size
 * field is a read-only register and must be set to zero. If set to a one, then the system software
 * can specify and use a smaller frame list and configure the host controller via the USBCMD
 * register Frame List Size field. The frame list must always be aligned on a 4K-page boundary. This
 * requirement ensures that the frame list is always physically contiguous. This bit is set '1b' in
 * all controller core.
 */

#define BP_USBC_UOG2_HCCPARAMS_PFL      (1)      //!< Bit position for USBC_UOG2_HCCPARAMS_PFL.
#define BM_USBC_UOG2_HCCPARAMS_PFL      (0x00000002)  //!< Bit mask for USBC_UOG2_HCCPARAMS_PFL.

//! @brief Get value of USBC_UOG2_HCCPARAMS_PFL from a register value.
#define BG_USBC_UOG2_HCCPARAMS_PFL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HCCPARAMS_PFL) >> BP_USBC_UOG2_HCCPARAMS_PFL)

/* --- Register HW_USBC_UOG2_HCCPARAMS, field ASP[2] (RO)
 *
 * Asynchronous Schedule Park Capability If this bit is set to a one, then the host controller
 * supports the park feature for high-speed queue heads in the Asynchronous Schedule. The feature
 * can be disabled or enabled and set to a specific level by using the Asynchronous Schedule Park
 * Mode Enable and Asynchronous Schedule Park Mode Count fields in the USBCMD register. ASP bit
 * reset value: '00b' for OTG controller core, '11b' for Host-only controller core.
 */

#define BP_USBC_UOG2_HCCPARAMS_ASP      (2)      //!< Bit position for USBC_UOG2_HCCPARAMS_ASP.
#define BM_USBC_UOG2_HCCPARAMS_ASP      (0x00000004)  //!< Bit mask for USBC_UOG2_HCCPARAMS_ASP.

//! @brief Get value of USBC_UOG2_HCCPARAMS_ASP from a register value.
#define BG_USBC_UOG2_HCCPARAMS_ASP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HCCPARAMS_ASP) >> BP_USBC_UOG2_HCCPARAMS_ASP)

/* --- Register HW_USBC_UOG2_HCCPARAMS, field IST[7:4] (RO)
 *
 * Isochronous Scheduling Threshold. This field indicates, relative to the current position of the
 * executing host controller, where software can reliably update the isochronous schedule. When bit
 * [7] is zero, the value of the least significant 3 bits indicates the number of micro-frames a
 * host controller can hold a set of isochronous data structures (one or more) before flushing the
 * state. When bit [7] is a one, then host software assumes the host controller may cache an
 * isochronous data structure for an entire frame. These bits are set '00h' in all controller core.
 */

#define BP_USBC_UOG2_HCCPARAMS_IST      (4)      //!< Bit position for USBC_UOG2_HCCPARAMS_IST.
#define BM_USBC_UOG2_HCCPARAMS_IST      (0x000000f0)  //!< Bit mask for USBC_UOG2_HCCPARAMS_IST.

//! @brief Get value of USBC_UOG2_HCCPARAMS_IST from a register value.
#define BG_USBC_UOG2_HCCPARAMS_IST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HCCPARAMS_IST) >> BP_USBC_UOG2_HCCPARAMS_IST)

/* --- Register HW_USBC_UOG2_HCCPARAMS, field EECP[15:8] (RO)
 *
 * EHCI Extended Capabilities Pointer. This field indicates the existence of a capabilities list. A
 * value of 00h indicates no extended capabilities are implemented. A non-zero value in this
 * register indicates the offset in PCI configuration space of the first EHCI extended capability.
 * The pointer value must be 40h or greater if implemented to maintain the consistency of the PCI
 * header defined for this class of device. These bits are set '00h' in all controller core.
 */

#define BP_USBC_UOG2_HCCPARAMS_EECP      (8)      //!< Bit position for USBC_UOG2_HCCPARAMS_EECP.
#define BM_USBC_UOG2_HCCPARAMS_EECP      (0x0000ff00)  //!< Bit mask for USBC_UOG2_HCCPARAMS_EECP.

//! @brief Get value of USBC_UOG2_HCCPARAMS_EECP from a register value.
#define BG_USBC_UOG2_HCCPARAMS_EECP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_HCCPARAMS_EECP) >> BP_USBC_UOG2_HCCPARAMS_EECP)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_DCIVERSION - Device Controller Interface Version
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_DCIVERSION - Device Controller Interface Version (RO)
 *
 * Reset value: 0x00000001
 *
 * This register indicates the two-byte BCD encoding of the device controller interface version
 * number.
 */
typedef union _hw_usbc_uog2_dciversion
{
    reg16_t U;
    struct _hw_usbc_uog2_dciversion_bitfields
    {
        unsigned short DCIVERSION : 16; //!< [15:0] Device Controller Interface Version Number Default value is '01h', which means rev0.1.
    } B;
} hw_usbc_uog2_dciversion_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_DCIVERSION register
 */
#define HW_USBC_UOG2_DCIVERSION_ADDR      (REGS_USBC_BASE + 0x320)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_DCIVERSION           (*(volatile hw_usbc_uog2_dciversion_t *) HW_USBC_UOG2_DCIVERSION_ADDR)
#define HW_USBC_UOG2_DCIVERSION_RD()      (HW_USBC_UOG2_DCIVERSION.U)
#endif

/*
 * constants & macros for individual USBC_UOG2_DCIVERSION bitfields
 */

/* --- Register HW_USBC_UOG2_DCIVERSION, field DCIVERSION[15:0] (RO)
 *
 * Device Controller Interface Version Number Default value is '01h', which means rev0.1.
 */

#define BP_USBC_UOG2_DCIVERSION_DCIVERSION      (0)      //!< Bit position for USBC_UOG2_DCIVERSION_DCIVERSION.
#define BM_USBC_UOG2_DCIVERSION_DCIVERSION      (0x0000ffff)  //!< Bit mask for USBC_UOG2_DCIVERSION_DCIVERSION.

//! @brief Get value of USBC_UOG2_DCIVERSION_DCIVERSION from a register value.
#define BG_USBC_UOG2_DCIVERSION_DCIVERSION(r)   ((__REG_VALUE_TYPE((r), reg16_t) & BM_USBC_UOG2_DCIVERSION_DCIVERSION) >> BP_USBC_UOG2_DCIVERSION_DCIVERSION)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_DCCPARAMS - Device Controller Capability Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_DCCPARAMS - Device Controller Capability Parameters (RO)
 *
 * Reset value: 0x00000188
 *
 * These fields describe the overall device capability of the controller.  This register is only
 * available in OTG controller core.
 */
typedef union _hw_usbc_uog2_dccparams
{
    reg32_t U;
    struct _hw_usbc_uog2_dccparams_bitfields
    {
        unsigned DEN : 5; //!< [4:0] Device Endpoint Number This field indicates the number of endpoints built into the device controller.
        unsigned RESERVED0 : 2; //!< [6:5] Reserved
        unsigned DC : 1; //!< [7] Device Capable When this bit is 1, this controller is capable of operating as a USB 2.0 device.
        unsigned HC : 1; //!< [8] Host Capable When this bit is 1, this controller is capable of operating as an EHCI compatible USB 2.0 host controller.
        unsigned RESERVED1 : 23; //!< [31:9] Reserved
    } B;
} hw_usbc_uog2_dccparams_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_DCCPARAMS register
 */
#define HW_USBC_UOG2_DCCPARAMS_ADDR      (REGS_USBC_BASE + 0x324)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_DCCPARAMS           (*(volatile hw_usbc_uog2_dccparams_t *) HW_USBC_UOG2_DCCPARAMS_ADDR)
#define HW_USBC_UOG2_DCCPARAMS_RD()      (HW_USBC_UOG2_DCCPARAMS.U)
#endif

/*
 * constants & macros for individual USBC_UOG2_DCCPARAMS bitfields
 */

/* --- Register HW_USBC_UOG2_DCCPARAMS, field DEN[4:0] (RO)
 *
 * Device Endpoint Number This field indicates the number of endpoints built into the device
 * controller. If this controller is not device capable, then this field will be zero. Valid values
 * are 0 - 15.
 */

#define BP_USBC_UOG2_DCCPARAMS_DEN      (0)      //!< Bit position for USBC_UOG2_DCCPARAMS_DEN.
#define BM_USBC_UOG2_DCCPARAMS_DEN      (0x0000001f)  //!< Bit mask for USBC_UOG2_DCCPARAMS_DEN.

//! @brief Get value of USBC_UOG2_DCCPARAMS_DEN from a register value.
#define BG_USBC_UOG2_DCCPARAMS_DEN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_DCCPARAMS_DEN) >> BP_USBC_UOG2_DCCPARAMS_DEN)

/* --- Register HW_USBC_UOG2_DCCPARAMS, field DC[7] (RO)
 *
 * Device Capable When this bit is 1, this controller is capable of operating as a USB 2.0 device.
 */

#define BP_USBC_UOG2_DCCPARAMS_DC      (7)      //!< Bit position for USBC_UOG2_DCCPARAMS_DC.
#define BM_USBC_UOG2_DCCPARAMS_DC      (0x00000080)  //!< Bit mask for USBC_UOG2_DCCPARAMS_DC.

//! @brief Get value of USBC_UOG2_DCCPARAMS_DC from a register value.
#define BG_USBC_UOG2_DCCPARAMS_DC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_DCCPARAMS_DC) >> BP_USBC_UOG2_DCCPARAMS_DC)

/* --- Register HW_USBC_UOG2_DCCPARAMS, field HC[8] (RO)
 *
 * Host Capable When this bit is 1, this controller is capable of operating as an EHCI compatible
 * USB 2.0 host controller.
 */

#define BP_USBC_UOG2_DCCPARAMS_HC      (8)      //!< Bit position for USBC_UOG2_DCCPARAMS_HC.
#define BM_USBC_UOG2_DCCPARAMS_HC      (0x00000100)  //!< Bit mask for USBC_UOG2_DCCPARAMS_HC.

//! @brief Get value of USBC_UOG2_DCCPARAMS_HC from a register value.
#define BG_USBC_UOG2_DCCPARAMS_HC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_DCCPARAMS_HC) >> BP_USBC_UOG2_DCCPARAMS_HC)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_USBCMD - USB Command Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_USBCMD - USB Command Register (RW)
 *
 * Reset value: 0x00080000
 *
 * The Command Register indicates the command to be executed by the serial bus host/device
 * controller. Writing to the register causes a command to be executed.
 */
typedef union _hw_usbc_uog2_usbcmd
{
    reg32_t U;
    struct _hw_usbc_uog2_usbcmd_bitfields
    {
        unsigned RS : 1; //!< [0] Run/Stop (RS) - Read/Write.
        unsigned RST : 1; //!< [1] Controller Reset (RESET) - Read/Write.
        unsigned FS : 2; //!< [3:2] See description at bit 15
        unsigned PSE : 1; //!< [4] Periodic Schedule Enable- Read/Write.
        unsigned ASE : 1; //!< [5] Asynchronous Schedule Enable - Read/Write.
        unsigned IAA : 1; //!< [6] Interrupt on Async Advance Doorbell - Read/Write.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned ASP : 2; //!< [9:8] Asynchronous Schedule Park Mode Count - Read/Write.
        unsigned RESERVED1 : 1; //!< [10] Reserved
        unsigned ASPE : 1; //!< [11] Asynchronous Schedule Park Mode Enable - Read/Write.
        unsigned RESERVED2 : 1; //!< [12] Reserved
        unsigned SUTW : 1; //!< [13] Setup TripWire - Read/Write.
        unsigned ATDTW : 1; //!< [14] Add dTD TripWire - Read/Write.
        unsigned FS1 : 1; //!< [15] See also bits 3-2 Frame List Size - (Read/Write or Read Only).
        unsigned ITC : 8; //!< [23:16] Interrupt Threshold Control -Read/Write.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_usbcmd_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_USBCMD register
 */
#define HW_USBC_UOG2_USBCMD_ADDR      (REGS_USBC_BASE + 0x340)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_USBCMD           (*(volatile hw_usbc_uog2_usbcmd_t *) HW_USBC_UOG2_USBCMD_ADDR)
#define HW_USBC_UOG2_USBCMD_RD()      (HW_USBC_UOG2_USBCMD.U)
#define HW_USBC_UOG2_USBCMD_WR(v)     (HW_USBC_UOG2_USBCMD.U = (v))
#define HW_USBC_UOG2_USBCMD_SET(v)    (HW_USBC_UOG2_USBCMD_WR(HW_USBC_UOG2_USBCMD_RD() |  (v)))
#define HW_USBC_UOG2_USBCMD_CLR(v)    (HW_USBC_UOG2_USBCMD_WR(HW_USBC_UOG2_USBCMD_RD() & ~(v)))
#define HW_USBC_UOG2_USBCMD_TOG(v)    (HW_USBC_UOG2_USBCMD_WR(HW_USBC_UOG2_USBCMD_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_USBCMD bitfields
 */

/* --- Register HW_USBC_UOG2_USBCMD, field RS[0] (RW)
 *
 * Run/Stop (RS) - Read/Write. Default 0b. 1=Run. 0=Stop. Host operation mode: When set to '1b', the
 * Controller proceeds with the execution of the schedule. The Controller continues execution as
 * long as this bit is set to a one. When this bit is set to 0, the Host Controller completes the
 * current transaction on the USB and then halts. The HC Halted bit in the status register indicates
 * when the Controller has finished the transaction and has entered the stopped state. Software
 * should not write a one to this field unless the controller is in the Halted state (that is,
 * HCHalted in the USBSTS register is a one). Device operation mode: Writing a one to this bit will
 * cause the controller to enable a pull-up on D+ and initiate an attach event. This control bit is
 * not directly connected to the pull-up enable, as the pull-up will become disabled upon
 * transitioning into high-speed mode. Software should use this bit to prevent an attach event
 * before the controller has been properly initialized. Writing a 0 to this will cause a detach
 * event.
 */

#define BP_USBC_UOG2_USBCMD_RS      (0)      //!< Bit position for USBC_UOG2_USBCMD_RS.
#define BM_USBC_UOG2_USBCMD_RS      (0x00000001)  //!< Bit mask for USBC_UOG2_USBCMD_RS.

//! @brief Get value of USBC_UOG2_USBCMD_RS from a register value.
#define BG_USBC_UOG2_USBCMD_RS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBCMD_RS) >> BP_USBC_UOG2_USBCMD_RS)

//! @brief Format value for bitfield USBC_UOG2_USBCMD_RS.
#define BF_USBC_UOG2_USBCMD_RS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBCMD_RS) & BM_USBC_UOG2_USBCMD_RS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RS field to a new value.
#define BW_USBC_UOG2_USBCMD_RS(v)   (HW_USBC_UOG2_USBCMD_WR((HW_USBC_UOG2_USBCMD_RD() & ~BM_USBC_UOG2_USBCMD_RS) | BF_USBC_UOG2_USBCMD_RS(v)))
#endif

/* --- Register HW_USBC_UOG2_USBCMD, field RST[1] (RW)
 *
 * Controller Reset (RESET) - Read/Write. Software uses this bit to reset the controller. This bit
 * is set to zero by the Host/Device Controller when the reset process is complete. Software cannot
 * terminate the reset process early by writing a zero to this register. Host operation mode: When
 * software writes a one to this bit, the Controller resets its internal pipelines, timers,
 * counters, state machines etc. to their initial value. Any transaction currently in progress on
 * USB is immediately terminated. A USB reset is not driven on downstream ports. Software should not
 * set this bit to a one when the HCHalted bit in the USBSTS register is a zero. Attempting to reset
 * an actively running host controller will result in undefined behavior. Device operation mode:
 * When software writes a one to this bit, the Controller resets its internal pipelines, timers,
 * counters, state machines etc. to their initial value. Writing a one to this bit when the device
 * is in the attached state is not recommended, because the effect on an attached host is undefined.
 * In order to ensure that the device is not in an attached state before initiating a device
 * controller reset, all primed endpoints should be flushed and the USBCMD Run/Stop bit should be
 * set to 0.
 */

#define BP_USBC_UOG2_USBCMD_RST      (1)      //!< Bit position for USBC_UOG2_USBCMD_RST.
#define BM_USBC_UOG2_USBCMD_RST      (0x00000002)  //!< Bit mask for USBC_UOG2_USBCMD_RST.

//! @brief Get value of USBC_UOG2_USBCMD_RST from a register value.
#define BG_USBC_UOG2_USBCMD_RST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBCMD_RST) >> BP_USBC_UOG2_USBCMD_RST)

//! @brief Format value for bitfield USBC_UOG2_USBCMD_RST.
#define BF_USBC_UOG2_USBCMD_RST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBCMD_RST) & BM_USBC_UOG2_USBCMD_RST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RST field to a new value.
#define BW_USBC_UOG2_USBCMD_RST(v)   (HW_USBC_UOG2_USBCMD_WR((HW_USBC_UOG2_USBCMD_RD() & ~BM_USBC_UOG2_USBCMD_RST) | BF_USBC_UOG2_USBCMD_RST(v)))
#endif

/* --- Register HW_USBC_UOG2_USBCMD, field FS[3:2] (RW)
 *
 * See description at bit 15
 */

#define BP_USBC_UOG2_USBCMD_FS      (2)      //!< Bit position for USBC_UOG2_USBCMD_FS.
#define BM_USBC_UOG2_USBCMD_FS      (0x0000000c)  //!< Bit mask for USBC_UOG2_USBCMD_FS.

//! @brief Get value of USBC_UOG2_USBCMD_FS from a register value.
#define BG_USBC_UOG2_USBCMD_FS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBCMD_FS) >> BP_USBC_UOG2_USBCMD_FS)

//! @brief Format value for bitfield USBC_UOG2_USBCMD_FS.
#define BF_USBC_UOG2_USBCMD_FS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBCMD_FS) & BM_USBC_UOG2_USBCMD_FS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FS field to a new value.
#define BW_USBC_UOG2_USBCMD_FS(v)   (HW_USBC_UOG2_USBCMD_WR((HW_USBC_UOG2_USBCMD_RD() & ~BM_USBC_UOG2_USBCMD_FS) | BF_USBC_UOG2_USBCMD_FS(v)))
#endif

/* --- Register HW_USBC_UOG2_USBCMD, field PSE[4] (RW)
 *
 * Periodic Schedule Enable- Read/Write. Default 0b. This bit controls whether the host controller
 * skips processing the Periodic Schedule. Only the host controller uses this bit. Values Meaning
 *
 * Values:
 * 0 - Do not process the Periodic Schedule
 * 1 - Use the PERIODICLISTBASE register to access the Periodic Schedule.
 */

#define BP_USBC_UOG2_USBCMD_PSE      (4)      //!< Bit position for USBC_UOG2_USBCMD_PSE.
#define BM_USBC_UOG2_USBCMD_PSE      (0x00000010)  //!< Bit mask for USBC_UOG2_USBCMD_PSE.

//! @brief Get value of USBC_UOG2_USBCMD_PSE from a register value.
#define BG_USBC_UOG2_USBCMD_PSE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBCMD_PSE) >> BP_USBC_UOG2_USBCMD_PSE)

//! @brief Format value for bitfield USBC_UOG2_USBCMD_PSE.
#define BF_USBC_UOG2_USBCMD_PSE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBCMD_PSE) & BM_USBC_UOG2_USBCMD_PSE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PSE field to a new value.
#define BW_USBC_UOG2_USBCMD_PSE(v)   (HW_USBC_UOG2_USBCMD_WR((HW_USBC_UOG2_USBCMD_RD() & ~BM_USBC_UOG2_USBCMD_PSE) | BF_USBC_UOG2_USBCMD_PSE(v)))
#endif


/* --- Register HW_USBC_UOG2_USBCMD, field ASE[5] (RW)
 *
 * Asynchronous Schedule Enable - Read/Write. Default 0b. This bit controls whether the host
 * controller skips processing the Asynchronous Schedule. Only the host controller uses this bit.
 * Values Meaning
 *
 * Values:
 * 0 - Do not process the Asynchronous Schedule.
 * 1 - Use the ASYNCLISTADDR register to access the Asynchronous Schedule.
 */

#define BP_USBC_UOG2_USBCMD_ASE      (5)      //!< Bit position for USBC_UOG2_USBCMD_ASE.
#define BM_USBC_UOG2_USBCMD_ASE      (0x00000020)  //!< Bit mask for USBC_UOG2_USBCMD_ASE.

//! @brief Get value of USBC_UOG2_USBCMD_ASE from a register value.
#define BG_USBC_UOG2_USBCMD_ASE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBCMD_ASE) >> BP_USBC_UOG2_USBCMD_ASE)

//! @brief Format value for bitfield USBC_UOG2_USBCMD_ASE.
#define BF_USBC_UOG2_USBCMD_ASE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBCMD_ASE) & BM_USBC_UOG2_USBCMD_ASE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASE field to a new value.
#define BW_USBC_UOG2_USBCMD_ASE(v)   (HW_USBC_UOG2_USBCMD_WR((HW_USBC_UOG2_USBCMD_RD() & ~BM_USBC_UOG2_USBCMD_ASE) | BF_USBC_UOG2_USBCMD_ASE(v)))
#endif


/* --- Register HW_USBC_UOG2_USBCMD, field IAA[6] (RW)
 *
 * Interrupt on Async Advance Doorbell - Read/Write. This bit is used as a doorbell by software to
 * tell the host controller to issue an interrupt the next time it advances asynchronous schedule.
 * Software must write a 1 to this bit to ring the doorbell. When the host controller has evicted
 * all appropriate cached schedule states, it sets the Interrupt on Async Advance status bit in the
 * USBSTS register. If the Interrupt on Sync Advance Enable bit in the USBINTR register is one, then
 * the host controller will assert an interrupt at the next interrupt threshold. The host controller
 * sets this bit to zero after it has set the Interrupt on Sync Advance status bit in the USBSTS
 * register to one. Software should not write a one to this bit when the asynchronous schedule is
 * inactive. Doing so will yield undefined results. This bit is only used in host mode. Writing a
 * one to this bit when device mode is selected will have undefined results.
 */

#define BP_USBC_UOG2_USBCMD_IAA      (6)      //!< Bit position for USBC_UOG2_USBCMD_IAA.
#define BM_USBC_UOG2_USBCMD_IAA      (0x00000040)  //!< Bit mask for USBC_UOG2_USBCMD_IAA.

//! @brief Get value of USBC_UOG2_USBCMD_IAA from a register value.
#define BG_USBC_UOG2_USBCMD_IAA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBCMD_IAA) >> BP_USBC_UOG2_USBCMD_IAA)

//! @brief Format value for bitfield USBC_UOG2_USBCMD_IAA.
#define BF_USBC_UOG2_USBCMD_IAA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBCMD_IAA) & BM_USBC_UOG2_USBCMD_IAA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IAA field to a new value.
#define BW_USBC_UOG2_USBCMD_IAA(v)   (HW_USBC_UOG2_USBCMD_WR((HW_USBC_UOG2_USBCMD_RD() & ~BM_USBC_UOG2_USBCMD_IAA) | BF_USBC_UOG2_USBCMD_IAA(v)))
#endif

/* --- Register HW_USBC_UOG2_USBCMD, field ASP[9:8] (RW)
 *
 * Asynchronous Schedule Park Mode Count - Read/Write. If the Asynchronous Park Capability bit in
 * the HCCPARAMS register is a one, then this field defaults to 3h and is R/W. Otherwise it defaults
 * to zero and is Read-Only. It contains a count of the number of successive transactions the host
 * controller is allowed to execute from a high-speed queue head on the Asynchronous schedule before
 * continuing traversal of the Asynchronous schedule. Valid values are 1h to 3h. Software must not
 * write a zero to this bit when Park Mode Enable is a one as this will result in undefined
 * behavior. This field is set to 3h in all controller core.
 */

#define BP_USBC_UOG2_USBCMD_ASP      (8)      //!< Bit position for USBC_UOG2_USBCMD_ASP.
#define BM_USBC_UOG2_USBCMD_ASP      (0x00000300)  //!< Bit mask for USBC_UOG2_USBCMD_ASP.

//! @brief Get value of USBC_UOG2_USBCMD_ASP from a register value.
#define BG_USBC_UOG2_USBCMD_ASP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBCMD_ASP) >> BP_USBC_UOG2_USBCMD_ASP)

//! @brief Format value for bitfield USBC_UOG2_USBCMD_ASP.
#define BF_USBC_UOG2_USBCMD_ASP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBCMD_ASP) & BM_USBC_UOG2_USBCMD_ASP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASP field to a new value.
#define BW_USBC_UOG2_USBCMD_ASP(v)   (HW_USBC_UOG2_USBCMD_WR((HW_USBC_UOG2_USBCMD_RD() & ~BM_USBC_UOG2_USBCMD_ASP) | BF_USBC_UOG2_USBCMD_ASP(v)))
#endif

/* --- Register HW_USBC_UOG2_USBCMD, field ASPE[11] (RW)
 *
 * Asynchronous Schedule Park Mode Enable - Read/Write. If the Asynchronous Park Capability bit in
 * the HCCPARAMS register is a one, then this bit defaults to a 1h and is R/W. Otherwise the bit
 * must be a zero and is RO. Software uses this bit to enable or disable Park mode. When this bit is
 * one, Park mode is enabled. When this bit is a zero, Park mode is disabled. ASPE bit reset value:
 * '0b' for OTG controller core, '1b' for Host-only controller core.
 */

#define BP_USBC_UOG2_USBCMD_ASPE      (11)      //!< Bit position for USBC_UOG2_USBCMD_ASPE.
#define BM_USBC_UOG2_USBCMD_ASPE      (0x00000800)  //!< Bit mask for USBC_UOG2_USBCMD_ASPE.

//! @brief Get value of USBC_UOG2_USBCMD_ASPE from a register value.
#define BG_USBC_UOG2_USBCMD_ASPE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBCMD_ASPE) >> BP_USBC_UOG2_USBCMD_ASPE)

//! @brief Format value for bitfield USBC_UOG2_USBCMD_ASPE.
#define BF_USBC_UOG2_USBCMD_ASPE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBCMD_ASPE) & BM_USBC_UOG2_USBCMD_ASPE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASPE field to a new value.
#define BW_USBC_UOG2_USBCMD_ASPE(v)   (HW_USBC_UOG2_USBCMD_WR((HW_USBC_UOG2_USBCMD_RD() & ~BM_USBC_UOG2_USBCMD_ASPE) | BF_USBC_UOG2_USBCMD_ASPE(v)))
#endif

/* --- Register HW_USBC_UOG2_USBCMD, field SUTW[13] (RW)
 *
 * Setup TripWire - Read/Write. [device mode only] This bit is used as a semaphore to ensure that
 * the setup data payload of 8 bytes is extracted from a QH by the DCD without being corrupted. If
 * the setup lockout mode is off (SLOM bit in USB core register n_USBMODE, see ) then there is a
 * hazard when new setup data arrives while the DCD is copying the setup data payload from the QH
 * for a previous setup packet. This bit is set and cleared by software. This bit would also be
 * cleared by hardware when a hazard detected.
 */

#define BP_USBC_UOG2_USBCMD_SUTW      (13)      //!< Bit position for USBC_UOG2_USBCMD_SUTW.
#define BM_USBC_UOG2_USBCMD_SUTW      (0x00002000)  //!< Bit mask for USBC_UOG2_USBCMD_SUTW.

//! @brief Get value of USBC_UOG2_USBCMD_SUTW from a register value.
#define BG_USBC_UOG2_USBCMD_SUTW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBCMD_SUTW) >> BP_USBC_UOG2_USBCMD_SUTW)

//! @brief Format value for bitfield USBC_UOG2_USBCMD_SUTW.
#define BF_USBC_UOG2_USBCMD_SUTW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBCMD_SUTW) & BM_USBC_UOG2_USBCMD_SUTW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SUTW field to a new value.
#define BW_USBC_UOG2_USBCMD_SUTW(v)   (HW_USBC_UOG2_USBCMD_WR((HW_USBC_UOG2_USBCMD_RD() & ~BM_USBC_UOG2_USBCMD_SUTW) | BF_USBC_UOG2_USBCMD_SUTW(v)))
#endif

/* --- Register HW_USBC_UOG2_USBCMD, field ATDTW[14] (RW)
 *
 * Add dTD TripWire - Read/Write. [device mode only] This bit is used as a semaphore to ensure
 * proper addition of a new dTD to an active (primed) endpoint's linked list. This bit is set and
 * cleared by software. This bit would also be cleared by hardware when state machine is hazard
 * region for which adding a dTD to a primed endpoint may go unrecognized.
 */

#define BP_USBC_UOG2_USBCMD_ATDTW      (14)      //!< Bit position for USBC_UOG2_USBCMD_ATDTW.
#define BM_USBC_UOG2_USBCMD_ATDTW      (0x00004000)  //!< Bit mask for USBC_UOG2_USBCMD_ATDTW.

//! @brief Get value of USBC_UOG2_USBCMD_ATDTW from a register value.
#define BG_USBC_UOG2_USBCMD_ATDTW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBCMD_ATDTW) >> BP_USBC_UOG2_USBCMD_ATDTW)

//! @brief Format value for bitfield USBC_UOG2_USBCMD_ATDTW.
#define BF_USBC_UOG2_USBCMD_ATDTW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBCMD_ATDTW) & BM_USBC_UOG2_USBCMD_ATDTW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ATDTW field to a new value.
#define BW_USBC_UOG2_USBCMD_ATDTW(v)   (HW_USBC_UOG2_USBCMD_WR((HW_USBC_UOG2_USBCMD_RD() & ~BM_USBC_UOG2_USBCMD_ATDTW) | BF_USBC_UOG2_USBCMD_ATDTW(v)))
#endif

/* --- Register HW_USBC_UOG2_USBCMD, field FS1[15] (RW)
 *
 * See also bits 3-2 Frame List Size - (Read/Write or Read Only). [host mode only] This field is
 * Read/Write only if Programmable Frame List Flag in the HCCPARAMS registers is set to one. This
 * field specifies the size of the frame list that controls which bits in the Frame Index Register
 * should be used for the Frame List Current index. This field is made up from USBCMD bits 15, 3 and
 * 2. Value Meaning
 *
 * Values:
 * 000 - 1024 elements (4096 bytes) Default value
 * 001 - 512 elements (2048 bytes)
 * 010 - 256 elements (1024 bytes)
 * 011 - 128 elements (512 bytes)
 * 100 - 64 elements (256 bytes)
 * 101 - 32 elements (128 bytes)
 * 110 - 16 elements (64 bytes)
 * 111 - 8 elements (32 bytes)
 */

#define BP_USBC_UOG2_USBCMD_FS1      (15)      //!< Bit position for USBC_UOG2_USBCMD_FS1.
#define BM_USBC_UOG2_USBCMD_FS1      (0x00008000)  //!< Bit mask for USBC_UOG2_USBCMD_FS1.

//! @brief Get value of USBC_UOG2_USBCMD_FS1 from a register value.
#define BG_USBC_UOG2_USBCMD_FS1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBCMD_FS1) >> BP_USBC_UOG2_USBCMD_FS1)

//! @brief Format value for bitfield USBC_UOG2_USBCMD_FS1.
#define BF_USBC_UOG2_USBCMD_FS1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBCMD_FS1) & BM_USBC_UOG2_USBCMD_FS1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FS1 field to a new value.
#define BW_USBC_UOG2_USBCMD_FS1(v)   (HW_USBC_UOG2_USBCMD_WR((HW_USBC_UOG2_USBCMD_RD() & ~BM_USBC_UOG2_USBCMD_FS1) | BF_USBC_UOG2_USBCMD_FS1(v)))
#endif


/* --- Register HW_USBC_UOG2_USBCMD, field ITC[23:16] (RW)
 *
 * Interrupt Threshold Control -Read/Write. The system software uses this field to set the maximum
 * rate at which the host/device controller will issue interrupts. ITC contains the maximum
 * interrupt interval measured in micro-frames. Valid values are shown below. Value Maximum
 * Interrupt Interval
 *
 * Values:
 * 0x00 - Immediate (no threshold)
 * 0x01 - 1 micro-frame
 * 0x02 - 2 micro-frames
 * 0x04 - 4 micro-frames
 * 0x08 - 8 micro-frames
 * 0x10 - 16 micro-frames
 * 0x20 - 32 micro-frames
 * 0x40 - 64 micro-frames
 */

#define BP_USBC_UOG2_USBCMD_ITC      (16)      //!< Bit position for USBC_UOG2_USBCMD_ITC.
#define BM_USBC_UOG2_USBCMD_ITC      (0x00ff0000)  //!< Bit mask for USBC_UOG2_USBCMD_ITC.

//! @brief Get value of USBC_UOG2_USBCMD_ITC from a register value.
#define BG_USBC_UOG2_USBCMD_ITC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBCMD_ITC) >> BP_USBC_UOG2_USBCMD_ITC)

//! @brief Format value for bitfield USBC_UOG2_USBCMD_ITC.
#define BF_USBC_UOG2_USBCMD_ITC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBCMD_ITC) & BM_USBC_UOG2_USBCMD_ITC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ITC field to a new value.
#define BW_USBC_UOG2_USBCMD_ITC(v)   (HW_USBC_UOG2_USBCMD_WR((HW_USBC_UOG2_USBCMD_RD() & ~BM_USBC_UOG2_USBCMD_ITC) | BF_USBC_UOG2_USBCMD_ITC(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_USBSTS - USB Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_USBSTS - USB Status Register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register indicates various states of the Host/Device Controller and any pending interrupts.
 * This register does not indicate status resulting from a transaction on the serial bus.
 */
typedef union _hw_usbc_uog2_usbsts
{
    reg32_t U;
    struct _hw_usbc_uog2_usbsts_bitfields
    {
        unsigned UI : 1; //!< [0] USB Interrupt (USBINT) - R/WC.
        unsigned UEI : 1; //!< [1] USB Error Interrupt (USBERRINT) - R/WC.
        unsigned PCI : 1; //!< [2] Port Change Detect - R/WC.
        unsigned FRI : 1; //!< [3] Frame List Rollover - R/WC.
        unsigned SEI : 1; //!< [4] System Error- R/WC.
        unsigned AAI : 1; //!< [5] Interrupt on Async Advance - R/WC.
        unsigned URI : 1; //!< [6] USB Reset Received - R/WC.
        unsigned SRI : 1; //!< [7] SOF Received - R/WC.
        unsigned SLI : 1; //!< [8] DCSuspend - R/WC.
        unsigned RESERVED0 : 1; //!< [9] Reserved
        unsigned ULPII : 1; //!< [10] ULPI Interrupt - R/WC.
        unsigned RESERVED1 : 1; //!< [11] Reserved
        unsigned HCH : 1; //!< [12] HCHaIted - Read Only.
        unsigned RCL : 1; //!< [13] Reclamation - Read Only.
        unsigned PS : 1; //!< [14] Periodic Schedule Status - Read Only.
        unsigned AS : 1; //!< [15] Asynchronous Schedule Status - Read Only.
        unsigned NAKI : 1; //!< [16] NAK Interrupt Bit--RO.
        unsigned RESERVED2 : 7; //!< [23:17] Reserved
        unsigned TI0 : 1; //!< [24] General Purpose Timer Interrupt 0(GPTINT0)--R/WC.
        unsigned TI1 : 1; //!< [25] General Purpose Timer Interrupt 1(GPTINT1)--R/WC.
        unsigned RESERVED3 : 6; //!< [31:26] Reserved
    } B;
} hw_usbc_uog2_usbsts_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_USBSTS register
 */
#define HW_USBC_UOG2_USBSTS_ADDR      (REGS_USBC_BASE + 0x344)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_USBSTS           (*(volatile hw_usbc_uog2_usbsts_t *) HW_USBC_UOG2_USBSTS_ADDR)
#define HW_USBC_UOG2_USBSTS_RD()      (HW_USBC_UOG2_USBSTS.U)
#define HW_USBC_UOG2_USBSTS_WR(v)     (HW_USBC_UOG2_USBSTS.U = (v))
#define HW_USBC_UOG2_USBSTS_SET(v)    (HW_USBC_UOG2_USBSTS_WR(HW_USBC_UOG2_USBSTS_RD() |  (v)))
#define HW_USBC_UOG2_USBSTS_CLR(v)    (HW_USBC_UOG2_USBSTS_WR(HW_USBC_UOG2_USBSTS_RD() & ~(v)))
#define HW_USBC_UOG2_USBSTS_TOG(v)    (HW_USBC_UOG2_USBSTS_WR(HW_USBC_UOG2_USBSTS_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_USBSTS bitfields
 */

/* --- Register HW_USBC_UOG2_USBSTS, field UI[0] (RW)
 *
 * USB Interrupt (USBINT) - R/WC. This bit is set by the Host/Device Controller when the cause of an
 * interrupt is a completion of a USB transaction where the Transfer Descriptor (TD) has an
 * interrupt on complete (IOC) bit set. This bit is also set by the Host/Device Controller when a
 * short packet is detected. A short packet is when the actual number of bytes received was less
 * than the expected number of bytes.
 */

#define BP_USBC_UOG2_USBSTS_UI      (0)      //!< Bit position for USBC_UOG2_USBSTS_UI.
#define BM_USBC_UOG2_USBSTS_UI      (0x00000001)  //!< Bit mask for USBC_UOG2_USBSTS_UI.

//! @brief Get value of USBC_UOG2_USBSTS_UI from a register value.
#define BG_USBC_UOG2_USBSTS_UI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_UI) >> BP_USBC_UOG2_USBSTS_UI)

//! @brief Format value for bitfield USBC_UOG2_USBSTS_UI.
#define BF_USBC_UOG2_USBSTS_UI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBSTS_UI) & BM_USBC_UOG2_USBSTS_UI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UI field to a new value.
#define BW_USBC_UOG2_USBSTS_UI(v)   (HW_USBC_UOG2_USBSTS_WR((HW_USBC_UOG2_USBSTS_RD() & ~BM_USBC_UOG2_USBSTS_UI) | BF_USBC_UOG2_USBSTS_UI(v)))
#endif

/* --- Register HW_USBC_UOG2_USBSTS, field UEI[1] (RW)
 *
 * USB Error Interrupt (USBERRINT) - R/WC. When completion of a USB transaction results in an error
 * condition, this bit is set by the Host/Device Controller. This bit is set along with the USBINT
 * bit, if the TD on which the error interrupt occurred also had its interrupt on complete (IOC) bit
 * set The device controller detects resume signaling only.
 */

#define BP_USBC_UOG2_USBSTS_UEI      (1)      //!< Bit position for USBC_UOG2_USBSTS_UEI.
#define BM_USBC_UOG2_USBSTS_UEI      (0x00000002)  //!< Bit mask for USBC_UOG2_USBSTS_UEI.

//! @brief Get value of USBC_UOG2_USBSTS_UEI from a register value.
#define BG_USBC_UOG2_USBSTS_UEI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_UEI) >> BP_USBC_UOG2_USBSTS_UEI)

//! @brief Format value for bitfield USBC_UOG2_USBSTS_UEI.
#define BF_USBC_UOG2_USBSTS_UEI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBSTS_UEI) & BM_USBC_UOG2_USBSTS_UEI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UEI field to a new value.
#define BW_USBC_UOG2_USBSTS_UEI(v)   (HW_USBC_UOG2_USBSTS_WR((HW_USBC_UOG2_USBSTS_RD() & ~BM_USBC_UOG2_USBSTS_UEI) | BF_USBC_UOG2_USBSTS_UEI(v)))
#endif

/* --- Register HW_USBC_UOG2_USBSTS, field PCI[2] (RW)
 *
 * Port Change Detect - R/WC. The Host Controller sets this bit to a one when on any port a Connect
 * Status occurs, a Port Enable/Disable Change occurs, or the Force Port Resume bit is set as the
 * result of a J-K transition on the suspended port. The Device Controller sets this bit to a one
 * when the port controller enters the full or high-speed operational state. When the port
 * controller exits the full or high-speed operation states due to Reset or Suspend events, the
 * notification mechanisms are the USB Reset Received bit and the DCSuspend bits respectively.
 */

#define BP_USBC_UOG2_USBSTS_PCI      (2)      //!< Bit position for USBC_UOG2_USBSTS_PCI.
#define BM_USBC_UOG2_USBSTS_PCI      (0x00000004)  //!< Bit mask for USBC_UOG2_USBSTS_PCI.

//! @brief Get value of USBC_UOG2_USBSTS_PCI from a register value.
#define BG_USBC_UOG2_USBSTS_PCI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_PCI) >> BP_USBC_UOG2_USBSTS_PCI)

//! @brief Format value for bitfield USBC_UOG2_USBSTS_PCI.
#define BF_USBC_UOG2_USBSTS_PCI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBSTS_PCI) & BM_USBC_UOG2_USBSTS_PCI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PCI field to a new value.
#define BW_USBC_UOG2_USBSTS_PCI(v)   (HW_USBC_UOG2_USBSTS_WR((HW_USBC_UOG2_USBSTS_RD() & ~BM_USBC_UOG2_USBSTS_PCI) | BF_USBC_UOG2_USBSTS_PCI(v)))
#endif

/* --- Register HW_USBC_UOG2_USBSTS, field FRI[3] (RW)
 *
 * Frame List Rollover - R/WC. The Host Controller sets this bit to a one when the Frame List Index
 * rolls over from its maximum value to zero. The exact value at which the rollover occurs depends
 * on the frame list size. For example. If the frame list size (as programmed in the Frame List Size
 * field of the USB_n_USBCMD register) is 1024, the Frame Index Register rolls over every time
 * FRINDEX [13] toggles. Similarly, if the size is 512, the Host Controller sets this bit to a one
 * every time FHINDEX [12] toggles. Only used in host operation mode.
 */

#define BP_USBC_UOG2_USBSTS_FRI      (3)      //!< Bit position for USBC_UOG2_USBSTS_FRI.
#define BM_USBC_UOG2_USBSTS_FRI      (0x00000008)  //!< Bit mask for USBC_UOG2_USBSTS_FRI.

//! @brief Get value of USBC_UOG2_USBSTS_FRI from a register value.
#define BG_USBC_UOG2_USBSTS_FRI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_FRI) >> BP_USBC_UOG2_USBSTS_FRI)

//! @brief Format value for bitfield USBC_UOG2_USBSTS_FRI.
#define BF_USBC_UOG2_USBSTS_FRI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBSTS_FRI) & BM_USBC_UOG2_USBSTS_FRI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FRI field to a new value.
#define BW_USBC_UOG2_USBSTS_FRI(v)   (HW_USBC_UOG2_USBSTS_WR((HW_USBC_UOG2_USBSTS_RD() & ~BM_USBC_UOG2_USBSTS_FRI) | BF_USBC_UOG2_USBSTS_FRI(v)))
#endif

/* --- Register HW_USBC_UOG2_USBSTS, field SEI[4] (RW)
 *
 * System Error- R/WC. This bit is will be set to '1b' when an Error response is seen to a read on
 * the system interface.
 */

#define BP_USBC_UOG2_USBSTS_SEI      (4)      //!< Bit position for USBC_UOG2_USBSTS_SEI.
#define BM_USBC_UOG2_USBSTS_SEI      (0x00000010)  //!< Bit mask for USBC_UOG2_USBSTS_SEI.

//! @brief Get value of USBC_UOG2_USBSTS_SEI from a register value.
#define BG_USBC_UOG2_USBSTS_SEI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_SEI) >> BP_USBC_UOG2_USBSTS_SEI)

//! @brief Format value for bitfield USBC_UOG2_USBSTS_SEI.
#define BF_USBC_UOG2_USBSTS_SEI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBSTS_SEI) & BM_USBC_UOG2_USBSTS_SEI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SEI field to a new value.
#define BW_USBC_UOG2_USBSTS_SEI(v)   (HW_USBC_UOG2_USBSTS_WR((HW_USBC_UOG2_USBSTS_RD() & ~BM_USBC_UOG2_USBSTS_SEI) | BF_USBC_UOG2_USBSTS_SEI(v)))
#endif

/* --- Register HW_USBC_UOG2_USBSTS, field AAI[5] (RW)
 *
 * Interrupt on Async Advance - R/WC. System software can force the host controller to issue an
 * interrupt the next time the host controller advances the asynchronous schedule by writing a one
 * to the Interrupt on Async Advance Doorbell bit in the n_USBCMD register. This status bit
 * indicates the assertion of that interrupt source. Only used in host operation mode.
 */

#define BP_USBC_UOG2_USBSTS_AAI      (5)      //!< Bit position for USBC_UOG2_USBSTS_AAI.
#define BM_USBC_UOG2_USBSTS_AAI      (0x00000020)  //!< Bit mask for USBC_UOG2_USBSTS_AAI.

//! @brief Get value of USBC_UOG2_USBSTS_AAI from a register value.
#define BG_USBC_UOG2_USBSTS_AAI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_AAI) >> BP_USBC_UOG2_USBSTS_AAI)

//! @brief Format value for bitfield USBC_UOG2_USBSTS_AAI.
#define BF_USBC_UOG2_USBSTS_AAI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBSTS_AAI) & BM_USBC_UOG2_USBSTS_AAI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AAI field to a new value.
#define BW_USBC_UOG2_USBSTS_AAI(v)   (HW_USBC_UOG2_USBSTS_WR((HW_USBC_UOG2_USBSTS_RD() & ~BM_USBC_UOG2_USBSTS_AAI) | BF_USBC_UOG2_USBSTS_AAI(v)))
#endif

/* --- Register HW_USBC_UOG2_USBSTS, field URI[6] (RW)
 *
 * USB Reset Received - R/WC. When the device controller detects a USB Reset and enters the default
 * state, this bit will be set to a one. Software can write a 1 to this bit to clear the USB Reset
 * Received status bit. Only used in device operation mode.
 */

#define BP_USBC_UOG2_USBSTS_URI      (6)      //!< Bit position for USBC_UOG2_USBSTS_URI.
#define BM_USBC_UOG2_USBSTS_URI      (0x00000040)  //!< Bit mask for USBC_UOG2_USBSTS_URI.

//! @brief Get value of USBC_UOG2_USBSTS_URI from a register value.
#define BG_USBC_UOG2_USBSTS_URI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_URI) >> BP_USBC_UOG2_USBSTS_URI)

//! @brief Format value for bitfield USBC_UOG2_USBSTS_URI.
#define BF_USBC_UOG2_USBSTS_URI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBSTS_URI) & BM_USBC_UOG2_USBSTS_URI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the URI field to a new value.
#define BW_USBC_UOG2_USBSTS_URI(v)   (HW_USBC_UOG2_USBSTS_WR((HW_USBC_UOG2_USBSTS_RD() & ~BM_USBC_UOG2_USBSTS_URI) | BF_USBC_UOG2_USBSTS_URI(v)))
#endif

/* --- Register HW_USBC_UOG2_USBSTS, field SRI[7] (RW)
 *
 * SOF Received - R/WC. When the device controller detects a Start Of (micro) Frame, this bit will
 * be set to a one. When a SOF is extremely late, the device controller will automatically set this
 * bit to indicate that an SOF was expected. Therefore, this bit will be set roughly every 1ms in
 * device FS mode and every 125ms in HS mode and will be synchronized to the actual SOF that is
 * received. Because the device controller is initialized to FS before connect, this bit will be set
 * at an interval of 1ms during the prelude to connect and chirp. In host mode, this bit will be set
 * every 125us and can be used by host controller driver as a time base. Software writes a 1 to this
 * bit to clear it.
 */

#define BP_USBC_UOG2_USBSTS_SRI      (7)      //!< Bit position for USBC_UOG2_USBSTS_SRI.
#define BM_USBC_UOG2_USBSTS_SRI      (0x00000080)  //!< Bit mask for USBC_UOG2_USBSTS_SRI.

//! @brief Get value of USBC_UOG2_USBSTS_SRI from a register value.
#define BG_USBC_UOG2_USBSTS_SRI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_SRI) >> BP_USBC_UOG2_USBSTS_SRI)

//! @brief Format value for bitfield USBC_UOG2_USBSTS_SRI.
#define BF_USBC_UOG2_USBSTS_SRI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBSTS_SRI) & BM_USBC_UOG2_USBSTS_SRI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SRI field to a new value.
#define BW_USBC_UOG2_USBSTS_SRI(v)   (HW_USBC_UOG2_USBSTS_WR((HW_USBC_UOG2_USBSTS_RD() & ~BM_USBC_UOG2_USBSTS_SRI) | BF_USBC_UOG2_USBSTS_SRI(v)))
#endif

/* --- Register HW_USBC_UOG2_USBSTS, field SLI[8] (RW)
 *
 * DCSuspend - R/WC. When a controller enters a suspend state from an active state, this bit will be
 * set to a one. The device controller clears the bit upon exiting from a suspend state. Only used
 * in device operation mode.
 */

#define BP_USBC_UOG2_USBSTS_SLI      (8)      //!< Bit position for USBC_UOG2_USBSTS_SLI.
#define BM_USBC_UOG2_USBSTS_SLI      (0x00000100)  //!< Bit mask for USBC_UOG2_USBSTS_SLI.

//! @brief Get value of USBC_UOG2_USBSTS_SLI from a register value.
#define BG_USBC_UOG2_USBSTS_SLI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_SLI) >> BP_USBC_UOG2_USBSTS_SLI)

//! @brief Format value for bitfield USBC_UOG2_USBSTS_SLI.
#define BF_USBC_UOG2_USBSTS_SLI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBSTS_SLI) & BM_USBC_UOG2_USBSTS_SLI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SLI field to a new value.
#define BW_USBC_UOG2_USBSTS_SLI(v)   (HW_USBC_UOG2_USBSTS_WR((HW_USBC_UOG2_USBSTS_RD() & ~BM_USBC_UOG2_USBSTS_SLI) | BF_USBC_UOG2_USBSTS_SLI(v)))
#endif

/* --- Register HW_USBC_UOG2_USBSTS, field ULPII[10] (RW)
 *
 * ULPI Interrupt - R/WC. This bit will be set '1b' by hardware when there is an event completion in
 * ULPI viewport. This bit is usable only if the controller support UPLI interface mode.
 */

#define BP_USBC_UOG2_USBSTS_ULPII      (10)      //!< Bit position for USBC_UOG2_USBSTS_ULPII.
#define BM_USBC_UOG2_USBSTS_ULPII      (0x00000400)  //!< Bit mask for USBC_UOG2_USBSTS_ULPII.

//! @brief Get value of USBC_UOG2_USBSTS_ULPII from a register value.
#define BG_USBC_UOG2_USBSTS_ULPII(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_ULPII) >> BP_USBC_UOG2_USBSTS_ULPII)

//! @brief Format value for bitfield USBC_UOG2_USBSTS_ULPII.
#define BF_USBC_UOG2_USBSTS_ULPII(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBSTS_ULPII) & BM_USBC_UOG2_USBSTS_ULPII)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ULPII field to a new value.
#define BW_USBC_UOG2_USBSTS_ULPII(v)   (HW_USBC_UOG2_USBSTS_WR((HW_USBC_UOG2_USBSTS_RD() & ~BM_USBC_UOG2_USBSTS_ULPII) | BF_USBC_UOG2_USBSTS_ULPII(v)))
#endif

/* --- Register HW_USBC_UOG2_USBSTS, field HCH[12] (RW)
 *
 * HCHaIted - Read Only. This bit is a zero whenever the Run/Stop bit is a one. The Controller sets
 * this bit to one after it has stopped executing because of the Run/Stop bit being set to 0, either
 * by software or by the Controller hardware (for example, an internal error). Only used in the host
 * operation mode. Default value is '0b' for OTG core, and '1b' for Host1/Host2/Host3 core. This is
 * because OTG core is not operating as host in default. Please see CM bit in USB_n_USBMODE
 * register. HCH bit reset value: '0b' for OTG controller core, '1b' for Host-only controller core.
 */

#define BP_USBC_UOG2_USBSTS_HCH      (12)      //!< Bit position for USBC_UOG2_USBSTS_HCH.
#define BM_USBC_UOG2_USBSTS_HCH      (0x00001000)  //!< Bit mask for USBC_UOG2_USBSTS_HCH.

//! @brief Get value of USBC_UOG2_USBSTS_HCH from a register value.
#define BG_USBC_UOG2_USBSTS_HCH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_HCH) >> BP_USBC_UOG2_USBSTS_HCH)

//! @brief Format value for bitfield USBC_UOG2_USBSTS_HCH.
#define BF_USBC_UOG2_USBSTS_HCH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBSTS_HCH) & BM_USBC_UOG2_USBSTS_HCH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HCH field to a new value.
#define BW_USBC_UOG2_USBSTS_HCH(v)   (HW_USBC_UOG2_USBSTS_WR((HW_USBC_UOG2_USBSTS_RD() & ~BM_USBC_UOG2_USBSTS_HCH) | BF_USBC_UOG2_USBSTS_HCH(v)))
#endif

/* --- Register HW_USBC_UOG2_USBSTS, field RCL[13] (RW)
 *
 * Reclamation - Read Only. This is a read-only status bit used to detect an empty asynchronous
 * schedule. Only used in the host operation mode.
 */

#define BP_USBC_UOG2_USBSTS_RCL      (13)      //!< Bit position for USBC_UOG2_USBSTS_RCL.
#define BM_USBC_UOG2_USBSTS_RCL      (0x00002000)  //!< Bit mask for USBC_UOG2_USBSTS_RCL.

//! @brief Get value of USBC_UOG2_USBSTS_RCL from a register value.
#define BG_USBC_UOG2_USBSTS_RCL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_RCL) >> BP_USBC_UOG2_USBSTS_RCL)

//! @brief Format value for bitfield USBC_UOG2_USBSTS_RCL.
#define BF_USBC_UOG2_USBSTS_RCL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBSTS_RCL) & BM_USBC_UOG2_USBSTS_RCL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RCL field to a new value.
#define BW_USBC_UOG2_USBSTS_RCL(v)   (HW_USBC_UOG2_USBSTS_WR((HW_USBC_UOG2_USBSTS_RD() & ~BM_USBC_UOG2_USBSTS_RCL) | BF_USBC_UOG2_USBSTS_RCL(v)))
#endif

/* --- Register HW_USBC_UOG2_USBSTS, field PS[14] (RW)
 *
 * Periodic Schedule Status - Read Only. This bit reports the current real status of the Periodic
 * Schedule. When set to zero the periodic schedule is disabled, and if set to one the status is
 * enabled. The Host Controller is not required to immediately disable or enable the Periodic
 * Schedule when software transitions the Periodic Schedule Enable bit in the USBCMD register. When
 * this bit and the Periodic Schedule Enable bit are the same value, the Periodic Schedule is either
 * enabled (1) or disabled (0). Only used in the host operation mode.
 */

#define BP_USBC_UOG2_USBSTS_PS      (14)      //!< Bit position for USBC_UOG2_USBSTS_PS.
#define BM_USBC_UOG2_USBSTS_PS      (0x00004000)  //!< Bit mask for USBC_UOG2_USBSTS_PS.

//! @brief Get value of USBC_UOG2_USBSTS_PS from a register value.
#define BG_USBC_UOG2_USBSTS_PS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_PS) >> BP_USBC_UOG2_USBSTS_PS)

//! @brief Format value for bitfield USBC_UOG2_USBSTS_PS.
#define BF_USBC_UOG2_USBSTS_PS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBSTS_PS) & BM_USBC_UOG2_USBSTS_PS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PS field to a new value.
#define BW_USBC_UOG2_USBSTS_PS(v)   (HW_USBC_UOG2_USBSTS_WR((HW_USBC_UOG2_USBSTS_RD() & ~BM_USBC_UOG2_USBSTS_PS) | BF_USBC_UOG2_USBSTS_PS(v)))
#endif

/* --- Register HW_USBC_UOG2_USBSTS, field AS[15] (RW)
 *
 * Asynchronous Schedule Status - Read Only. This bit reports the current real status of the
 * Asynchronous Schedule. When set to zero the asynchronous schedule status is disabled and if set
 * to one the status is enabled. The Host Controller is not required to immediately disable or
 * enable the Asynchronous Schedule when software transitions the Asynchronous Schedule Enable bit
 * in the USBCMD register. When this bit and the Asynchronous Schedule Enable bit are the same
 * value, the Asynchronous Schedule is either enabled (1) or disabled (0). Only used in the host
 * operation mode.
 */

#define BP_USBC_UOG2_USBSTS_AS      (15)      //!< Bit position for USBC_UOG2_USBSTS_AS.
#define BM_USBC_UOG2_USBSTS_AS      (0x00008000)  //!< Bit mask for USBC_UOG2_USBSTS_AS.

//! @brief Get value of USBC_UOG2_USBSTS_AS from a register value.
#define BG_USBC_UOG2_USBSTS_AS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_AS) >> BP_USBC_UOG2_USBSTS_AS)

//! @brief Format value for bitfield USBC_UOG2_USBSTS_AS.
#define BF_USBC_UOG2_USBSTS_AS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBSTS_AS) & BM_USBC_UOG2_USBSTS_AS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AS field to a new value.
#define BW_USBC_UOG2_USBSTS_AS(v)   (HW_USBC_UOG2_USBSTS_WR((HW_USBC_UOG2_USBSTS_RD() & ~BM_USBC_UOG2_USBSTS_AS) | BF_USBC_UOG2_USBSTS_AS(v)))
#endif

/* --- Register HW_USBC_UOG2_USBSTS, field NAKI[16] (RO)
 *
 * NAK Interrupt Bit--RO. This bit is set by hardware when for a particular endpoint both the TX/RX
 * Endpoint NAK bit and corresponding TX/RX Endpoint NAK Enable bit are set. This bit is
 * automatically cleared by hardware when all Enabled TX/RX Endpoint NAK bits are cleared.
 */

#define BP_USBC_UOG2_USBSTS_NAKI      (16)      //!< Bit position for USBC_UOG2_USBSTS_NAKI.
#define BM_USBC_UOG2_USBSTS_NAKI      (0x00010000)  //!< Bit mask for USBC_UOG2_USBSTS_NAKI.

//! @brief Get value of USBC_UOG2_USBSTS_NAKI from a register value.
#define BG_USBC_UOG2_USBSTS_NAKI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_NAKI) >> BP_USBC_UOG2_USBSTS_NAKI)

/* --- Register HW_USBC_UOG2_USBSTS, field TI0[24] (RW)
 *
 * General Purpose Timer Interrupt 0(GPTINT0)--R/WC. This bit is set when the counter in the
 * GPTIMER0CTRL register transitions to zero, writing a one to this bit clears it.
 */

#define BP_USBC_UOG2_USBSTS_TI0      (24)      //!< Bit position for USBC_UOG2_USBSTS_TI0.
#define BM_USBC_UOG2_USBSTS_TI0      (0x01000000)  //!< Bit mask for USBC_UOG2_USBSTS_TI0.

//! @brief Get value of USBC_UOG2_USBSTS_TI0 from a register value.
#define BG_USBC_UOG2_USBSTS_TI0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_TI0) >> BP_USBC_UOG2_USBSTS_TI0)

//! @brief Format value for bitfield USBC_UOG2_USBSTS_TI0.
#define BF_USBC_UOG2_USBSTS_TI0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBSTS_TI0) & BM_USBC_UOG2_USBSTS_TI0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TI0 field to a new value.
#define BW_USBC_UOG2_USBSTS_TI0(v)   (HW_USBC_UOG2_USBSTS_WR((HW_USBC_UOG2_USBSTS_RD() & ~BM_USBC_UOG2_USBSTS_TI0) | BF_USBC_UOG2_USBSTS_TI0(v)))
#endif

/* --- Register HW_USBC_UOG2_USBSTS, field TI1[25] (RW)
 *
 * General Purpose Timer Interrupt 1(GPTINT1)--R/WC. This bit is set when the counter in the
 * GPTIMER1CTRL register transitions to zero, writing a one to this bit will clear it.
 */

#define BP_USBC_UOG2_USBSTS_TI1      (25)      //!< Bit position for USBC_UOG2_USBSTS_TI1.
#define BM_USBC_UOG2_USBSTS_TI1      (0x02000000)  //!< Bit mask for USBC_UOG2_USBSTS_TI1.

//! @brief Get value of USBC_UOG2_USBSTS_TI1 from a register value.
#define BG_USBC_UOG2_USBSTS_TI1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBSTS_TI1) >> BP_USBC_UOG2_USBSTS_TI1)

//! @brief Format value for bitfield USBC_UOG2_USBSTS_TI1.
#define BF_USBC_UOG2_USBSTS_TI1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBSTS_TI1) & BM_USBC_UOG2_USBSTS_TI1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TI1 field to a new value.
#define BW_USBC_UOG2_USBSTS_TI1(v)   (HW_USBC_UOG2_USBSTS_WR((HW_USBC_UOG2_USBSTS_RD() & ~BM_USBC_UOG2_USBSTS_TI1) | BF_USBC_UOG2_USBSTS_TI1(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_USBINTR - Interrupt Enable Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_USBINTR - Interrupt Enable Register (RW)
 *
 * Reset value: 0x00000000
 *
 * The interrupts to software are enabled with this register. An interrupt is generated when a bit
 * is set and the corresponding interrupt source is active. The USB Status register (n_USBSTS) still
 * shows interrupt sources even if they are disabled by the n_USBINTR register, allowing polling of
 * interrupt events by the software.
 */
typedef union _hw_usbc_uog2_usbintr
{
    reg32_t U;
    struct _hw_usbc_uog2_usbintr_bitfields
    {
        unsigned UE : 1; //!< [0] USB Interrupt Enalbe When this bit is one and the UI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned UEE : 1; //!< [1] USB Error Interrupt Enable When this bit is one and the UEI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned PCE : 1; //!< [2] Port Change Detect Interrupt Enable When this bit is one and the PCI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned FRE : 1; //!< [3] Frame List Rollover Interrupt Enable When this bit is one and the FRI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned SEE : 1; //!< [4] System Error Interrupt Enable When this bit is one and the SEI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned AAE : 1; //!< [5] Async Advance Interrupt Enable When this bit is one and the AAI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned URE : 1; //!< [6] USB Reset Interrupt Enable When this bit is one and the URI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned SRE : 1; //!< [7] SOF Received Interrupt Enable When this bit is one and the SRI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned SLE : 1; //!< [8] Sleep Interrupt Enable When this bit is one and the SLI bit in n_n_USBSTS register is a one the controller will issue an interrupt.
        unsigned RESERVED0 : 1; //!< [9] Reserved
        unsigned ULPIE : 1; //!< [10] ULPI Interrupt Enable When this bit is one and the UPLII bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned RESERVED1 : 5; //!< [15:11] These bits are reserved and should be set to zero.
        unsigned NAKE : 1; //!< [16] NAK Interrupt Enable When this bit is one and the NAKI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned RESERVED2 : 1; //!< [17] Reserved
        unsigned UAIE : 1; //!< [18] USB Host Asynchronous Interrupt Enable When this bit is one, and the UAI bit in the n_USBSTS register is one, host controller will issue an interrupt at the next interrupt threshold.
        unsigned UPIE : 1; //!< [19] USB Host Periodic Interrupt Enable When this bit is one, and the UPI bit in the n_USBSTS register is one, host controller will issue an interrupt at the next interrupt threshold.
        unsigned RESERVED3 : 4; //!< [23:20] Reserved
        unsigned TIE0 : 1; //!< [24] General Purpose Timer #0 Interrupt Enable When this bit is one and the TI0 bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned TIE1 : 1; //!< [25] General Purpose Timer #1 Interrupt Enable When this bit is one and the TI1 bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned RESERVED4 : 6; //!< [31:26] Reserved
    } B;
} hw_usbc_uog2_usbintr_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_USBINTR register
 */
#define HW_USBC_UOG2_USBINTR_ADDR      (REGS_USBC_BASE + 0x348)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_USBINTR           (*(volatile hw_usbc_uog2_usbintr_t *) HW_USBC_UOG2_USBINTR_ADDR)
#define HW_USBC_UOG2_USBINTR_RD()      (HW_USBC_UOG2_USBINTR.U)
#define HW_USBC_UOG2_USBINTR_WR(v)     (HW_USBC_UOG2_USBINTR.U = (v))
#define HW_USBC_UOG2_USBINTR_SET(v)    (HW_USBC_UOG2_USBINTR_WR(HW_USBC_UOG2_USBINTR_RD() |  (v)))
#define HW_USBC_UOG2_USBINTR_CLR(v)    (HW_USBC_UOG2_USBINTR_WR(HW_USBC_UOG2_USBINTR_RD() & ~(v)))
#define HW_USBC_UOG2_USBINTR_TOG(v)    (HW_USBC_UOG2_USBINTR_WR(HW_USBC_UOG2_USBINTR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_USBINTR bitfields
 */

/* --- Register HW_USBC_UOG2_USBINTR, field UE[0] (RW)
 *
 * USB Interrupt Enalbe When this bit is one and the UI bit in n_USBSTS register is a one the
 * controller will issue an interrupt.
 */

#define BP_USBC_UOG2_USBINTR_UE      (0)      //!< Bit position for USBC_UOG2_USBINTR_UE.
#define BM_USBC_UOG2_USBINTR_UE      (0x00000001)  //!< Bit mask for USBC_UOG2_USBINTR_UE.

//! @brief Get value of USBC_UOG2_USBINTR_UE from a register value.
#define BG_USBC_UOG2_USBINTR_UE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBINTR_UE) >> BP_USBC_UOG2_USBINTR_UE)

//! @brief Format value for bitfield USBC_UOG2_USBINTR_UE.
#define BF_USBC_UOG2_USBINTR_UE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBINTR_UE) & BM_USBC_UOG2_USBINTR_UE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UE field to a new value.
#define BW_USBC_UOG2_USBINTR_UE(v)   (HW_USBC_UOG2_USBINTR_WR((HW_USBC_UOG2_USBINTR_RD() & ~BM_USBC_UOG2_USBINTR_UE) | BF_USBC_UOG2_USBINTR_UE(v)))
#endif

/* --- Register HW_USBC_UOG2_USBINTR, field UEE[1] (RW)
 *
 * USB Error Interrupt Enable When this bit is one and the UEI bit in n_USBSTS register is a one the
 * controller will issue an interrupt.
 */

#define BP_USBC_UOG2_USBINTR_UEE      (1)      //!< Bit position for USBC_UOG2_USBINTR_UEE.
#define BM_USBC_UOG2_USBINTR_UEE      (0x00000002)  //!< Bit mask for USBC_UOG2_USBINTR_UEE.

//! @brief Get value of USBC_UOG2_USBINTR_UEE from a register value.
#define BG_USBC_UOG2_USBINTR_UEE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBINTR_UEE) >> BP_USBC_UOG2_USBINTR_UEE)

//! @brief Format value for bitfield USBC_UOG2_USBINTR_UEE.
#define BF_USBC_UOG2_USBINTR_UEE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBINTR_UEE) & BM_USBC_UOG2_USBINTR_UEE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UEE field to a new value.
#define BW_USBC_UOG2_USBINTR_UEE(v)   (HW_USBC_UOG2_USBINTR_WR((HW_USBC_UOG2_USBINTR_RD() & ~BM_USBC_UOG2_USBINTR_UEE) | BF_USBC_UOG2_USBINTR_UEE(v)))
#endif

/* --- Register HW_USBC_UOG2_USBINTR, field PCE[2] (RW)
 *
 * Port Change Detect Interrupt Enable When this bit is one and the PCI bit in n_USBSTS register is
 * a one the controller will issue an interrupt.
 */

#define BP_USBC_UOG2_USBINTR_PCE      (2)      //!< Bit position for USBC_UOG2_USBINTR_PCE.
#define BM_USBC_UOG2_USBINTR_PCE      (0x00000004)  //!< Bit mask for USBC_UOG2_USBINTR_PCE.

//! @brief Get value of USBC_UOG2_USBINTR_PCE from a register value.
#define BG_USBC_UOG2_USBINTR_PCE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBINTR_PCE) >> BP_USBC_UOG2_USBINTR_PCE)

//! @brief Format value for bitfield USBC_UOG2_USBINTR_PCE.
#define BF_USBC_UOG2_USBINTR_PCE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBINTR_PCE) & BM_USBC_UOG2_USBINTR_PCE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PCE field to a new value.
#define BW_USBC_UOG2_USBINTR_PCE(v)   (HW_USBC_UOG2_USBINTR_WR((HW_USBC_UOG2_USBINTR_RD() & ~BM_USBC_UOG2_USBINTR_PCE) | BF_USBC_UOG2_USBINTR_PCE(v)))
#endif

/* --- Register HW_USBC_UOG2_USBINTR, field FRE[3] (RW)
 *
 * Frame List Rollover Interrupt Enable When this bit is one and the FRI bit in n_USBSTS register is
 * a one the controller will issue an interrupt. Only used in host operation mode.
 */

#define BP_USBC_UOG2_USBINTR_FRE      (3)      //!< Bit position for USBC_UOG2_USBINTR_FRE.
#define BM_USBC_UOG2_USBINTR_FRE      (0x00000008)  //!< Bit mask for USBC_UOG2_USBINTR_FRE.

//! @brief Get value of USBC_UOG2_USBINTR_FRE from a register value.
#define BG_USBC_UOG2_USBINTR_FRE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBINTR_FRE) >> BP_USBC_UOG2_USBINTR_FRE)

//! @brief Format value for bitfield USBC_UOG2_USBINTR_FRE.
#define BF_USBC_UOG2_USBINTR_FRE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBINTR_FRE) & BM_USBC_UOG2_USBINTR_FRE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FRE field to a new value.
#define BW_USBC_UOG2_USBINTR_FRE(v)   (HW_USBC_UOG2_USBINTR_WR((HW_USBC_UOG2_USBINTR_RD() & ~BM_USBC_UOG2_USBINTR_FRE) | BF_USBC_UOG2_USBINTR_FRE(v)))
#endif

/* --- Register HW_USBC_UOG2_USBINTR, field SEE[4] (RW)
 *
 * System Error Interrupt Enable When this bit is one and the SEI bit in n_USBSTS register is a one
 * the controller will issue an interrupt. Only used in host operation mode.
 */

#define BP_USBC_UOG2_USBINTR_SEE      (4)      //!< Bit position for USBC_UOG2_USBINTR_SEE.
#define BM_USBC_UOG2_USBINTR_SEE      (0x00000010)  //!< Bit mask for USBC_UOG2_USBINTR_SEE.

//! @brief Get value of USBC_UOG2_USBINTR_SEE from a register value.
#define BG_USBC_UOG2_USBINTR_SEE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBINTR_SEE) >> BP_USBC_UOG2_USBINTR_SEE)

//! @brief Format value for bitfield USBC_UOG2_USBINTR_SEE.
#define BF_USBC_UOG2_USBINTR_SEE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBINTR_SEE) & BM_USBC_UOG2_USBINTR_SEE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SEE field to a new value.
#define BW_USBC_UOG2_USBINTR_SEE(v)   (HW_USBC_UOG2_USBINTR_WR((HW_USBC_UOG2_USBINTR_RD() & ~BM_USBC_UOG2_USBINTR_SEE) | BF_USBC_UOG2_USBINTR_SEE(v)))
#endif

/* --- Register HW_USBC_UOG2_USBINTR, field AAE[5] (RW)
 *
 * Async Advance Interrupt Enable When this bit is one and the AAI bit in n_USBSTS register is a one
 * the controller will issue an interrupt. Only used in host operation mode.
 */

#define BP_USBC_UOG2_USBINTR_AAE      (5)      //!< Bit position for USBC_UOG2_USBINTR_AAE.
#define BM_USBC_UOG2_USBINTR_AAE      (0x00000020)  //!< Bit mask for USBC_UOG2_USBINTR_AAE.

//! @brief Get value of USBC_UOG2_USBINTR_AAE from a register value.
#define BG_USBC_UOG2_USBINTR_AAE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBINTR_AAE) >> BP_USBC_UOG2_USBINTR_AAE)

//! @brief Format value for bitfield USBC_UOG2_USBINTR_AAE.
#define BF_USBC_UOG2_USBINTR_AAE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBINTR_AAE) & BM_USBC_UOG2_USBINTR_AAE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AAE field to a new value.
#define BW_USBC_UOG2_USBINTR_AAE(v)   (HW_USBC_UOG2_USBINTR_WR((HW_USBC_UOG2_USBINTR_RD() & ~BM_USBC_UOG2_USBINTR_AAE) | BF_USBC_UOG2_USBINTR_AAE(v)))
#endif

/* --- Register HW_USBC_UOG2_USBINTR, field URE[6] (RW)
 *
 * USB Reset Interrupt Enable When this bit is one and the URI bit in n_USBSTS register is a one the
 * controller will issue an interrupt. Only used in device operation mode.
 */

#define BP_USBC_UOG2_USBINTR_URE      (6)      //!< Bit position for USBC_UOG2_USBINTR_URE.
#define BM_USBC_UOG2_USBINTR_URE      (0x00000040)  //!< Bit mask for USBC_UOG2_USBINTR_URE.

//! @brief Get value of USBC_UOG2_USBINTR_URE from a register value.
#define BG_USBC_UOG2_USBINTR_URE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBINTR_URE) >> BP_USBC_UOG2_USBINTR_URE)

//! @brief Format value for bitfield USBC_UOG2_USBINTR_URE.
#define BF_USBC_UOG2_USBINTR_URE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBINTR_URE) & BM_USBC_UOG2_USBINTR_URE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the URE field to a new value.
#define BW_USBC_UOG2_USBINTR_URE(v)   (HW_USBC_UOG2_USBINTR_WR((HW_USBC_UOG2_USBINTR_RD() & ~BM_USBC_UOG2_USBINTR_URE) | BF_USBC_UOG2_USBINTR_URE(v)))
#endif

/* --- Register HW_USBC_UOG2_USBINTR, field SRE[7] (RW)
 *
 * SOF Received Interrupt Enable When this bit is one and the SRI bit in n_USBSTS register is a one
 * the controller will issue an interrupt.
 */

#define BP_USBC_UOG2_USBINTR_SRE      (7)      //!< Bit position for USBC_UOG2_USBINTR_SRE.
#define BM_USBC_UOG2_USBINTR_SRE      (0x00000080)  //!< Bit mask for USBC_UOG2_USBINTR_SRE.

//! @brief Get value of USBC_UOG2_USBINTR_SRE from a register value.
#define BG_USBC_UOG2_USBINTR_SRE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBINTR_SRE) >> BP_USBC_UOG2_USBINTR_SRE)

//! @brief Format value for bitfield USBC_UOG2_USBINTR_SRE.
#define BF_USBC_UOG2_USBINTR_SRE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBINTR_SRE) & BM_USBC_UOG2_USBINTR_SRE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SRE field to a new value.
#define BW_USBC_UOG2_USBINTR_SRE(v)   (HW_USBC_UOG2_USBINTR_WR((HW_USBC_UOG2_USBINTR_RD() & ~BM_USBC_UOG2_USBINTR_SRE) | BF_USBC_UOG2_USBINTR_SRE(v)))
#endif

/* --- Register HW_USBC_UOG2_USBINTR, field SLE[8] (RW)
 *
 * Sleep Interrupt Enable When this bit is one and the SLI bit in n_n_USBSTS register is a one the
 * controller will issue an interrupt. Only used in device operation mode.
 */

#define BP_USBC_UOG2_USBINTR_SLE      (8)      //!< Bit position for USBC_UOG2_USBINTR_SLE.
#define BM_USBC_UOG2_USBINTR_SLE      (0x00000100)  //!< Bit mask for USBC_UOG2_USBINTR_SLE.

//! @brief Get value of USBC_UOG2_USBINTR_SLE from a register value.
#define BG_USBC_UOG2_USBINTR_SLE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBINTR_SLE) >> BP_USBC_UOG2_USBINTR_SLE)

//! @brief Format value for bitfield USBC_UOG2_USBINTR_SLE.
#define BF_USBC_UOG2_USBINTR_SLE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBINTR_SLE) & BM_USBC_UOG2_USBINTR_SLE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SLE field to a new value.
#define BW_USBC_UOG2_USBINTR_SLE(v)   (HW_USBC_UOG2_USBINTR_WR((HW_USBC_UOG2_USBINTR_RD() & ~BM_USBC_UOG2_USBINTR_SLE) | BF_USBC_UOG2_USBINTR_SLE(v)))
#endif

/* --- Register HW_USBC_UOG2_USBINTR, field ULPIE[10] (RW)
 *
 * ULPI Interrupt Enable When this bit is one and the UPLII bit in n_USBSTS register is a one the
 * controller will issue an interrupt. This bit is usable only if the controller support UPLI
 * interface mode.
 */

#define BP_USBC_UOG2_USBINTR_ULPIE      (10)      //!< Bit position for USBC_UOG2_USBINTR_ULPIE.
#define BM_USBC_UOG2_USBINTR_ULPIE      (0x00000400)  //!< Bit mask for USBC_UOG2_USBINTR_ULPIE.

//! @brief Get value of USBC_UOG2_USBINTR_ULPIE from a register value.
#define BG_USBC_UOG2_USBINTR_ULPIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBINTR_ULPIE) >> BP_USBC_UOG2_USBINTR_ULPIE)

//! @brief Format value for bitfield USBC_UOG2_USBINTR_ULPIE.
#define BF_USBC_UOG2_USBINTR_ULPIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBINTR_ULPIE) & BM_USBC_UOG2_USBINTR_ULPIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ULPIE field to a new value.
#define BW_USBC_UOG2_USBINTR_ULPIE(v)   (HW_USBC_UOG2_USBINTR_WR((HW_USBC_UOG2_USBINTR_RD() & ~BM_USBC_UOG2_USBINTR_ULPIE) | BF_USBC_UOG2_USBINTR_ULPIE(v)))
#endif

/* --- Register HW_USBC_UOG2_USBINTR, field NAKE[16] (RW)
 *
 * NAK Interrupt Enable When this bit is one and the NAKI bit in n_USBSTS register is a one the
 * controller will issue an interrupt.
 */

#define BP_USBC_UOG2_USBINTR_NAKE      (16)      //!< Bit position for USBC_UOG2_USBINTR_NAKE.
#define BM_USBC_UOG2_USBINTR_NAKE      (0x00010000)  //!< Bit mask for USBC_UOG2_USBINTR_NAKE.

//! @brief Get value of USBC_UOG2_USBINTR_NAKE from a register value.
#define BG_USBC_UOG2_USBINTR_NAKE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBINTR_NAKE) >> BP_USBC_UOG2_USBINTR_NAKE)

//! @brief Format value for bitfield USBC_UOG2_USBINTR_NAKE.
#define BF_USBC_UOG2_USBINTR_NAKE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBINTR_NAKE) & BM_USBC_UOG2_USBINTR_NAKE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the NAKE field to a new value.
#define BW_USBC_UOG2_USBINTR_NAKE(v)   (HW_USBC_UOG2_USBINTR_WR((HW_USBC_UOG2_USBINTR_RD() & ~BM_USBC_UOG2_USBINTR_NAKE) | BF_USBC_UOG2_USBINTR_NAKE(v)))
#endif

/* --- Register HW_USBC_UOG2_USBINTR, field UAIE[18] (RW)
 *
 * USB Host Asynchronous Interrupt Enable When this bit is one, and the UAI bit in the n_USBSTS
 * register is one, host controller will issue an interrupt at the next interrupt threshold.
 */

#define BP_USBC_UOG2_USBINTR_UAIE      (18)      //!< Bit position for USBC_UOG2_USBINTR_UAIE.
#define BM_USBC_UOG2_USBINTR_UAIE      (0x00040000)  //!< Bit mask for USBC_UOG2_USBINTR_UAIE.

//! @brief Get value of USBC_UOG2_USBINTR_UAIE from a register value.
#define BG_USBC_UOG2_USBINTR_UAIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBINTR_UAIE) >> BP_USBC_UOG2_USBINTR_UAIE)

//! @brief Format value for bitfield USBC_UOG2_USBINTR_UAIE.
#define BF_USBC_UOG2_USBINTR_UAIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBINTR_UAIE) & BM_USBC_UOG2_USBINTR_UAIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UAIE field to a new value.
#define BW_USBC_UOG2_USBINTR_UAIE(v)   (HW_USBC_UOG2_USBINTR_WR((HW_USBC_UOG2_USBINTR_RD() & ~BM_USBC_UOG2_USBINTR_UAIE) | BF_USBC_UOG2_USBINTR_UAIE(v)))
#endif

/* --- Register HW_USBC_UOG2_USBINTR, field UPIE[19] (RW)
 *
 * USB Host Periodic Interrupt Enable When this bit is one, and the UPI bit in the n_USBSTS register
 * is one, host controller will issue an interrupt at the next interrupt threshold.
 */

#define BP_USBC_UOG2_USBINTR_UPIE      (19)      //!< Bit position for USBC_UOG2_USBINTR_UPIE.
#define BM_USBC_UOG2_USBINTR_UPIE      (0x00080000)  //!< Bit mask for USBC_UOG2_USBINTR_UPIE.

//! @brief Get value of USBC_UOG2_USBINTR_UPIE from a register value.
#define BG_USBC_UOG2_USBINTR_UPIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBINTR_UPIE) >> BP_USBC_UOG2_USBINTR_UPIE)

//! @brief Format value for bitfield USBC_UOG2_USBINTR_UPIE.
#define BF_USBC_UOG2_USBINTR_UPIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBINTR_UPIE) & BM_USBC_UOG2_USBINTR_UPIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UPIE field to a new value.
#define BW_USBC_UOG2_USBINTR_UPIE(v)   (HW_USBC_UOG2_USBINTR_WR((HW_USBC_UOG2_USBINTR_RD() & ~BM_USBC_UOG2_USBINTR_UPIE) | BF_USBC_UOG2_USBINTR_UPIE(v)))
#endif

/* --- Register HW_USBC_UOG2_USBINTR, field TIE0[24] (RW)
 *
 * General Purpose Timer #0 Interrupt Enable When this bit is one and the TI0 bit in n_USBSTS
 * register is a one the controller will issue an interrupt.
 */

#define BP_USBC_UOG2_USBINTR_TIE0      (24)      //!< Bit position for USBC_UOG2_USBINTR_TIE0.
#define BM_USBC_UOG2_USBINTR_TIE0      (0x01000000)  //!< Bit mask for USBC_UOG2_USBINTR_TIE0.

//! @brief Get value of USBC_UOG2_USBINTR_TIE0 from a register value.
#define BG_USBC_UOG2_USBINTR_TIE0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBINTR_TIE0) >> BP_USBC_UOG2_USBINTR_TIE0)

//! @brief Format value for bitfield USBC_UOG2_USBINTR_TIE0.
#define BF_USBC_UOG2_USBINTR_TIE0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBINTR_TIE0) & BM_USBC_UOG2_USBINTR_TIE0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TIE0 field to a new value.
#define BW_USBC_UOG2_USBINTR_TIE0(v)   (HW_USBC_UOG2_USBINTR_WR((HW_USBC_UOG2_USBINTR_RD() & ~BM_USBC_UOG2_USBINTR_TIE0) | BF_USBC_UOG2_USBINTR_TIE0(v)))
#endif

/* --- Register HW_USBC_UOG2_USBINTR, field TIE1[25] (RW)
 *
 * General Purpose Timer #1 Interrupt Enable When this bit is one and the TI1 bit in n_USBSTS
 * register is a one the controller will issue an interrupt.
 */

#define BP_USBC_UOG2_USBINTR_TIE1      (25)      //!< Bit position for USBC_UOG2_USBINTR_TIE1.
#define BM_USBC_UOG2_USBINTR_TIE1      (0x02000000)  //!< Bit mask for USBC_UOG2_USBINTR_TIE1.

//! @brief Get value of USBC_UOG2_USBINTR_TIE1 from a register value.
#define BG_USBC_UOG2_USBINTR_TIE1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBINTR_TIE1) >> BP_USBC_UOG2_USBINTR_TIE1)

//! @brief Format value for bitfield USBC_UOG2_USBINTR_TIE1.
#define BF_USBC_UOG2_USBINTR_TIE1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBINTR_TIE1) & BM_USBC_UOG2_USBINTR_TIE1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TIE1 field to a new value.
#define BW_USBC_UOG2_USBINTR_TIE1(v)   (HW_USBC_UOG2_USBINTR_WR((HW_USBC_UOG2_USBINTR_RD() & ~BM_USBC_UOG2_USBINTR_TIE1) | BF_USBC_UOG2_USBINTR_TIE1(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_FRINDEX - USB Frame Index
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_FRINDEX - USB Frame Index (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is used by the host controller to index the periodic frame list. The register
 * updates every 125 microseconds (once each micro-frame). Bits [N: 3] are used to select a
 * particular entry in the Periodic Frame List during periodic schedule execution. The number of
 * bits used for the index depends on the size of the frame list as set by system software in the
 * Frame List Size field in the n_USBCMD register.  This register must be written as a DWord. Byte
 * writes produce-undefined results. This register cannot be written unless the Host Controller is
 * in the 'Halted' state as indicated by the HCHalted bit. A write to this register while the
 * Run/Stop hit is set to a one produces undefined results. Writes to this register also affect the
 * SOF value.  In device mode this register is read only and, the device controller updates the
 * FRINDEX [13:3] register from the frame number indicated by the SOF marker. Whenever a SOF is
 * received by the USB bus, FRINDEX [13:3] will be checked against the SOF marker. If FRINDEX [13:3]
 * is different from the SOF marker, FRINDEX [13:3] will be set to the SOF value and FRINDEX [2:0]
 * will be set to zero (that is, SOF for 1 ms frame). If FRINDEX [13:3] is equal to the SOF value,
 * FRINDEX [2:0] will be increment (that is, SOF for 125 us micro-frame.).
 */
typedef union _hw_usbc_uog2_frindex
{
    reg32_t U;
    struct _hw_usbc_uog2_frindex_bitfields
    {
        unsigned FRINDEX : 14; //!< [13:0] Frame Index.
        unsigned RESERVED0 : 18; //!< [31:14] Reserved
    } B;
} hw_usbc_uog2_frindex_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_FRINDEX register
 */
#define HW_USBC_UOG2_FRINDEX_ADDR      (REGS_USBC_BASE + 0x34c)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_FRINDEX           (*(volatile hw_usbc_uog2_frindex_t *) HW_USBC_UOG2_FRINDEX_ADDR)
#define HW_USBC_UOG2_FRINDEX_RD()      (HW_USBC_UOG2_FRINDEX.U)
#define HW_USBC_UOG2_FRINDEX_WR(v)     (HW_USBC_UOG2_FRINDEX.U = (v))
#define HW_USBC_UOG2_FRINDEX_SET(v)    (HW_USBC_UOG2_FRINDEX_WR(HW_USBC_UOG2_FRINDEX_RD() |  (v)))
#define HW_USBC_UOG2_FRINDEX_CLR(v)    (HW_USBC_UOG2_FRINDEX_WR(HW_USBC_UOG2_FRINDEX_RD() & ~(v)))
#define HW_USBC_UOG2_FRINDEX_TOG(v)    (HW_USBC_UOG2_FRINDEX_WR(HW_USBC_UOG2_FRINDEX_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_FRINDEX bitfields
 */

/* --- Register HW_USBC_UOG2_FRINDEX, field FRINDEX[13:0] (RW)
 *
 * Frame Index. The value, in this register, increments at the end of each time frame (micro-frame).
 * Bits [N: 3] are used for the Frame List current index. This means that each location of the frame
 * list is accessed 8 times (frames or micro-frames) before moving to the next index. The following
 * illustrates values of N based on the value of the Frame List Size field in the USBCMD register,
 * when used in host mode. USBCMD [Frame List Size] Number Elements N In device mode the value is
 * the current frame number of the last frame transmitted. It is not used as an index. In either
 * mode bits 2:0 indicate the current microframe.
 *
 * Values:
 * 000 - (1024) 12
 * 001 - (512) 11
 * 010 - (256) 10
 * 011 - (128) 9
 * 100 - (64) 8
 * 101 - (32) 7
 * 110 - (16) 6
 * 111 - (8) 5
 */

#define BP_USBC_UOG2_FRINDEX_FRINDEX      (0)      //!< Bit position for USBC_UOG2_FRINDEX_FRINDEX.
#define BM_USBC_UOG2_FRINDEX_FRINDEX      (0x00003fff)  //!< Bit mask for USBC_UOG2_FRINDEX_FRINDEX.

//! @brief Get value of USBC_UOG2_FRINDEX_FRINDEX from a register value.
#define BG_USBC_UOG2_FRINDEX_FRINDEX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_FRINDEX_FRINDEX) >> BP_USBC_UOG2_FRINDEX_FRINDEX)

//! @brief Format value for bitfield USBC_UOG2_FRINDEX_FRINDEX.
#define BF_USBC_UOG2_FRINDEX_FRINDEX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_FRINDEX_FRINDEX) & BM_USBC_UOG2_FRINDEX_FRINDEX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FRINDEX field to a new value.
#define BW_USBC_UOG2_FRINDEX_FRINDEX(v)   (HW_USBC_UOG2_FRINDEX_WR((HW_USBC_UOG2_FRINDEX_RD() & ~BM_USBC_UOG2_FRINDEX_FRINDEX) | BF_USBC_UOG2_FRINDEX_FRINDEX(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_PERIODICLISTBASE - Frame List Base Address
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_PERIODICLISTBASE - Frame List Base Address (RW)
 *
 * Reset value: 0x00000000
 *
 * Host Controller only  This 32-bit register contains the beginning address of the Periodic Frame
 * List in the system memory. HCD loads this register prior to starting the schedule execution by
 * the Host Controller. The memory structure referenced by this physical memory pointer is assumed
 * to be 4-Kbyte aligned. The contents of this register are combined with the Frame Index Register
 * (USB_n_FRINDEX) to enable the Host Controller to step through the Periodic Frame List in
 * sequence.
 */
typedef union _hw_usbc_uog2_periodiclistbase
{
    reg32_t U;
    struct _hw_usbc_uog2_periodiclistbase_bitfields
    {
        unsigned RESERVED0 : 12; //!< [11:0] Reserved
        unsigned BASEADR : 20; //!< [31:12] Base Address (Low).
    } B;
} hw_usbc_uog2_periodiclistbase_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_PERIODICLISTBASE register
 */
#define HW_USBC_UOG2_PERIODICLISTBASE_ADDR      (REGS_USBC_BASE + 0x354)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_PERIODICLISTBASE           (*(volatile hw_usbc_uog2_periodiclistbase_t *) HW_USBC_UOG2_PERIODICLISTBASE_ADDR)
#define HW_USBC_UOG2_PERIODICLISTBASE_RD()      (HW_USBC_UOG2_PERIODICLISTBASE.U)
#define HW_USBC_UOG2_PERIODICLISTBASE_WR(v)     (HW_USBC_UOG2_PERIODICLISTBASE.U = (v))
#define HW_USBC_UOG2_PERIODICLISTBASE_SET(v)    (HW_USBC_UOG2_PERIODICLISTBASE_WR(HW_USBC_UOG2_PERIODICLISTBASE_RD() |  (v)))
#define HW_USBC_UOG2_PERIODICLISTBASE_CLR(v)    (HW_USBC_UOG2_PERIODICLISTBASE_WR(HW_USBC_UOG2_PERIODICLISTBASE_RD() & ~(v)))
#define HW_USBC_UOG2_PERIODICLISTBASE_TOG(v)    (HW_USBC_UOG2_PERIODICLISTBASE_WR(HW_USBC_UOG2_PERIODICLISTBASE_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_PERIODICLISTBASE bitfields
 */

/* --- Register HW_USBC_UOG2_PERIODICLISTBASE, field BASEADR[31:12] (RW)
 *
 * Base Address (Low). These bits correspond to memory address signals [31:12], respectively. Only
 * used by the host controller.
 */

#define BP_USBC_UOG2_PERIODICLISTBASE_BASEADR      (12)      //!< Bit position for USBC_UOG2_PERIODICLISTBASE_BASEADR.
#define BM_USBC_UOG2_PERIODICLISTBASE_BASEADR      (0xfffff000)  //!< Bit mask for USBC_UOG2_PERIODICLISTBASE_BASEADR.

//! @brief Get value of USBC_UOG2_PERIODICLISTBASE_BASEADR from a register value.
#define BG_USBC_UOG2_PERIODICLISTBASE_BASEADR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PERIODICLISTBASE_BASEADR) >> BP_USBC_UOG2_PERIODICLISTBASE_BASEADR)

//! @brief Format value for bitfield USBC_UOG2_PERIODICLISTBASE_BASEADR.
#define BF_USBC_UOG2_PERIODICLISTBASE_BASEADR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PERIODICLISTBASE_BASEADR) & BM_USBC_UOG2_PERIODICLISTBASE_BASEADR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BASEADR field to a new value.
#define BW_USBC_UOG2_PERIODICLISTBASE_BASEADR(v)   (HW_USBC_UOG2_PERIODICLISTBASE_WR((HW_USBC_UOG2_PERIODICLISTBASE_RD() & ~BM_USBC_UOG2_PERIODICLISTBASE_BASEADR) | BF_USBC_UOG2_PERIODICLISTBASE_BASEADR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ASYNCLISTADDR - Next Asynch. Address
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ASYNCLISTADDR - Next Asynch. Address (RW)
 *
 * Reset value: 0x00000000
 *
 * Host Controller only  This 32-bit register contains the address of the next asynchronous queue
 * head to be executed by the host. Bits [4:0] of this register cannot be modified by the system
 * software and will always return a zero when read.
 */
typedef union _hw_usbc_uog2_asynclistaddr
{
    reg32_t U;
    struct _hw_usbc_uog2_asynclistaddr_bitfields
    {
        unsigned RESERVED0 : 5; //!< [4:0] Reserved
        unsigned ASYBASE : 27; //!< [31:5] Link Pointer Low (LPL).
    } B;
} hw_usbc_uog2_asynclistaddr_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ASYNCLISTADDR register
 */
#define HW_USBC_UOG2_ASYNCLISTADDR_ADDR      (REGS_USBC_BASE + 0x358)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ASYNCLISTADDR           (*(volatile hw_usbc_uog2_asynclistaddr_t *) HW_USBC_UOG2_ASYNCLISTADDR_ADDR)
#define HW_USBC_UOG2_ASYNCLISTADDR_RD()      (HW_USBC_UOG2_ASYNCLISTADDR.U)
#define HW_USBC_UOG2_ASYNCLISTADDR_WR(v)     (HW_USBC_UOG2_ASYNCLISTADDR.U = (v))
#define HW_USBC_UOG2_ASYNCLISTADDR_SET(v)    (HW_USBC_UOG2_ASYNCLISTADDR_WR(HW_USBC_UOG2_ASYNCLISTADDR_RD() |  (v)))
#define HW_USBC_UOG2_ASYNCLISTADDR_CLR(v)    (HW_USBC_UOG2_ASYNCLISTADDR_WR(HW_USBC_UOG2_ASYNCLISTADDR_RD() & ~(v)))
#define HW_USBC_UOG2_ASYNCLISTADDR_TOG(v)    (HW_USBC_UOG2_ASYNCLISTADDR_WR(HW_USBC_UOG2_ASYNCLISTADDR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_ASYNCLISTADDR bitfields
 */

/* --- Register HW_USBC_UOG2_ASYNCLISTADDR, field ASYBASE[31:5] (RW)
 *
 * Link Pointer Low (LPL). These bits correspond to memory address signals [31:5], respectively.
 * This field may only reference a Queue Head (QH). Only used by the host controller.
 */

#define BP_USBC_UOG2_ASYNCLISTADDR_ASYBASE      (5)      //!< Bit position for USBC_UOG2_ASYNCLISTADDR_ASYBASE.
#define BM_USBC_UOG2_ASYNCLISTADDR_ASYBASE      (0xffffffe0)  //!< Bit mask for USBC_UOG2_ASYNCLISTADDR_ASYBASE.

//! @brief Get value of USBC_UOG2_ASYNCLISTADDR_ASYBASE from a register value.
#define BG_USBC_UOG2_ASYNCLISTADDR_ASYBASE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ASYNCLISTADDR_ASYBASE) >> BP_USBC_UOG2_ASYNCLISTADDR_ASYBASE)

//! @brief Format value for bitfield USBC_UOG2_ASYNCLISTADDR_ASYBASE.
#define BF_USBC_UOG2_ASYNCLISTADDR_ASYBASE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ASYNCLISTADDR_ASYBASE) & BM_USBC_UOG2_ASYNCLISTADDR_ASYBASE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASYBASE field to a new value.
#define BW_USBC_UOG2_ASYNCLISTADDR_ASYBASE(v)   (HW_USBC_UOG2_ASYNCLISTADDR_WR((HW_USBC_UOG2_ASYNCLISTADDR_RD() & ~BM_USBC_UOG2_ASYNCLISTADDR_ASYBASE) | BF_USBC_UOG2_ASYNCLISTADDR_ASYBASE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_BURSTSIZE - Programmable Burst Size
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_BURSTSIZE - Programmable Burst Size (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is used to control the burst size used during data movement on the AHB master
 * interface. This register is ignored if AHBBRST bits in SBUSCFG register is non-zero value.
 */
typedef union _hw_usbc_uog2_burstsize
{
    reg32_t U;
    struct _hw_usbc_uog2_burstsize_bitfields
    {
        unsigned RXPBURST : 8; //!< [7:0] Programmable RX Burst Size.
        unsigned TXPBURST : 9; //!< [16:8] Programmable TX Burst Size.
        unsigned RESERVED0 : 15; //!< [31:17] Reserved
    } B;
} hw_usbc_uog2_burstsize_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_BURSTSIZE register
 */
#define HW_USBC_UOG2_BURSTSIZE_ADDR      (REGS_USBC_BASE + 0x360)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_BURSTSIZE           (*(volatile hw_usbc_uog2_burstsize_t *) HW_USBC_UOG2_BURSTSIZE_ADDR)
#define HW_USBC_UOG2_BURSTSIZE_RD()      (HW_USBC_UOG2_BURSTSIZE.U)
#define HW_USBC_UOG2_BURSTSIZE_WR(v)     (HW_USBC_UOG2_BURSTSIZE.U = (v))
#define HW_USBC_UOG2_BURSTSIZE_SET(v)    (HW_USBC_UOG2_BURSTSIZE_WR(HW_USBC_UOG2_BURSTSIZE_RD() |  (v)))
#define HW_USBC_UOG2_BURSTSIZE_CLR(v)    (HW_USBC_UOG2_BURSTSIZE_WR(HW_USBC_UOG2_BURSTSIZE_RD() & ~(v)))
#define HW_USBC_UOG2_BURSTSIZE_TOG(v)    (HW_USBC_UOG2_BURSTSIZE_WR(HW_USBC_UOG2_BURSTSIZE_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_BURSTSIZE bitfields
 */

/* --- Register HW_USBC_UOG2_BURSTSIZE, field RXPBURST[7:0] (RW)
 *
 * Programmable RX Burst Size. Default value is determined by TXBURST bits in n_HWRXBUF. This
 * register represents the maximum length of a the burst in 32-bit words while moving data from the
 * USB bus to system memory.
 */

#define BP_USBC_UOG2_BURSTSIZE_RXPBURST      (0)      //!< Bit position for USBC_UOG2_BURSTSIZE_RXPBURST.
#define BM_USBC_UOG2_BURSTSIZE_RXPBURST      (0x000000ff)  //!< Bit mask for USBC_UOG2_BURSTSIZE_RXPBURST.

//! @brief Get value of USBC_UOG2_BURSTSIZE_RXPBURST from a register value.
#define BG_USBC_UOG2_BURSTSIZE_RXPBURST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_BURSTSIZE_RXPBURST) >> BP_USBC_UOG2_BURSTSIZE_RXPBURST)

//! @brief Format value for bitfield USBC_UOG2_BURSTSIZE_RXPBURST.
#define BF_USBC_UOG2_BURSTSIZE_RXPBURST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_BURSTSIZE_RXPBURST) & BM_USBC_UOG2_BURSTSIZE_RXPBURST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXPBURST field to a new value.
#define BW_USBC_UOG2_BURSTSIZE_RXPBURST(v)   (HW_USBC_UOG2_BURSTSIZE_WR((HW_USBC_UOG2_BURSTSIZE_RD() & ~BM_USBC_UOG2_BURSTSIZE_RXPBURST) | BF_USBC_UOG2_BURSTSIZE_RXPBURST(v)))
#endif

/* --- Register HW_USBC_UOG2_BURSTSIZE, field TXPBURST[16:8] (RW)
 *
 * Programmable TX Burst Size. Default value is determined by TXBURST bits in n_HWTXBUF. This
 * register represents the maximum length of a the burst in 32-bit words while moving data from
 * system memory to the USB bus.
 */

#define BP_USBC_UOG2_BURSTSIZE_TXPBURST      (8)      //!< Bit position for USBC_UOG2_BURSTSIZE_TXPBURST.
#define BM_USBC_UOG2_BURSTSIZE_TXPBURST      (0x0001ff00)  //!< Bit mask for USBC_UOG2_BURSTSIZE_TXPBURST.

//! @brief Get value of USBC_UOG2_BURSTSIZE_TXPBURST from a register value.
#define BG_USBC_UOG2_BURSTSIZE_TXPBURST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_BURSTSIZE_TXPBURST) >> BP_USBC_UOG2_BURSTSIZE_TXPBURST)

//! @brief Format value for bitfield USBC_UOG2_BURSTSIZE_TXPBURST.
#define BF_USBC_UOG2_BURSTSIZE_TXPBURST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_BURSTSIZE_TXPBURST) & BM_USBC_UOG2_BURSTSIZE_TXPBURST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXPBURST field to a new value.
#define BW_USBC_UOG2_BURSTSIZE_TXPBURST(v)   (HW_USBC_UOG2_BURSTSIZE_WR((HW_USBC_UOG2_BURSTSIZE_RD() & ~BM_USBC_UOG2_BURSTSIZE_TXPBURST) | BF_USBC_UOG2_BURSTSIZE_TXPBURST(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_TXFILLTUNING - TX FIFO Fill Tuning
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_TXFILLTUNING - TX FIFO Fill Tuning (RW)
 *
 * Reset value: 0x00000808
 *
 * The fields in this register control performance tuning associated with how the host controller
 * posts data to the TX latency FIFO before moving the data onto the USB bus. The specific areas of
 * performance include the how much data to post into the FIFO and an estimate for how long that
 * operation should take in the target system.  Definitions:  T 0 = Standard packet overhead  T 1 =
 * Time to send data payload  T ff = Time to fetch packet into TX FIFO up to specified level.  T s =
 * Total Packet Flight Time (send-only) packet  T s = T 0 + T 1   T p = Total Packet Time (fetch and
 * send) packet  T p = T ff + T 0 + T 1   Upon discovery of a transmit (OUT/SETUP) packet in the
 * data structures, host controller checks to ensure T  p  remains before the end of the
 * [micro]frame. If so it proceeds to pre-fill the TX FIFO. If at anytime during the pre-fill
 * operation the time remaining the [micro]frame is < T  s  then the packet attempt ceases and the
 * packet is tried at a later time. Although this is not an error condition and the host controller
 * will eventually recover, a mark will be made the scheduler health counter to note the occurrence
 * of a "back-off" event. When a back-off event is detected, the partial packet fetched may need to
 * be discarded from the latency buffer to make room for periodic traffic that will begin after the
 * next SOF. Too many back-off events can waste bandwidth and power on the system bus and thus
 * should be minimized (not necessarily eliminated). Back-offs can be minimized with use of the
 * n_TSCHHEALTH ( T  ff ) described below.  The reset value could vary from instance to instance.
 * Please see the detail in bit field description and ignore reset value in summary table in this
 * case!
 */
typedef union _hw_usbc_uog2_txfilltuning
{
    reg32_t U;
    struct _hw_usbc_uog2_txfilltuning_bitfields
    {
        unsigned TXSCHOH : 8; //!< [7:0] Scheduler Overhead.
        unsigned TXSCHHEALTH : 5; //!< [12:8] Scheduler Health Counter.
        unsigned RESERVED0 : 3; //!< [15:13] Reserved
        unsigned TXFIFOTHRES : 6; //!< [21:16] FIFO Burst Threshold.
        unsigned RESERVED1 : 10; //!< [31:22] Reserved
    } B;
} hw_usbc_uog2_txfilltuning_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_TXFILLTUNING register
 */
#define HW_USBC_UOG2_TXFILLTUNING_ADDR      (REGS_USBC_BASE + 0x364)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_TXFILLTUNING           (*(volatile hw_usbc_uog2_txfilltuning_t *) HW_USBC_UOG2_TXFILLTUNING_ADDR)
#define HW_USBC_UOG2_TXFILLTUNING_RD()      (HW_USBC_UOG2_TXFILLTUNING.U)
#define HW_USBC_UOG2_TXFILLTUNING_WR(v)     (HW_USBC_UOG2_TXFILLTUNING.U = (v))
#define HW_USBC_UOG2_TXFILLTUNING_SET(v)    (HW_USBC_UOG2_TXFILLTUNING_WR(HW_USBC_UOG2_TXFILLTUNING_RD() |  (v)))
#define HW_USBC_UOG2_TXFILLTUNING_CLR(v)    (HW_USBC_UOG2_TXFILLTUNING_WR(HW_USBC_UOG2_TXFILLTUNING_RD() & ~(v)))
#define HW_USBC_UOG2_TXFILLTUNING_TOG(v)    (HW_USBC_UOG2_TXFILLTUNING_WR(HW_USBC_UOG2_TXFILLTUNING_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_TXFILLTUNING bitfields
 */

/* --- Register HW_USBC_UOG2_TXFILLTUNING, field TXSCHOH[7:0] (RW)
 *
 * Scheduler Overhead. (Read/Write) [Default = 0] This register adds an additional fixed offset to
 * the schedule time estimator described above as Tff. As an approximation, the value chosen for
 * this register should limit the number of back-off events captured in the TXSCHHEALTH to less than
 * 10 per second in a highly utilized bus. Choosing a value that is too high for this register is
 * not desired as it can needlessly reduce USB utilization. The time unit represented in this
 * register is 1.267us when a device is connected in High-Speed Mode. The time unit represented in
 * this register is 6.333us when a device is connected in Low/Full Speed Mode. Default value is
 * '08h' for OTG controller core, and '00h' for Host-only controller core.
 */

#define BP_USBC_UOG2_TXFILLTUNING_TXSCHOH      (0)      //!< Bit position for USBC_UOG2_TXFILLTUNING_TXSCHOH.
#define BM_USBC_UOG2_TXFILLTUNING_TXSCHOH      (0x000000ff)  //!< Bit mask for USBC_UOG2_TXFILLTUNING_TXSCHOH.

//! @brief Get value of USBC_UOG2_TXFILLTUNING_TXSCHOH from a register value.
#define BG_USBC_UOG2_TXFILLTUNING_TXSCHOH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_TXFILLTUNING_TXSCHOH) >> BP_USBC_UOG2_TXFILLTUNING_TXSCHOH)

//! @brief Format value for bitfield USBC_UOG2_TXFILLTUNING_TXSCHOH.
#define BF_USBC_UOG2_TXFILLTUNING_TXSCHOH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_TXFILLTUNING_TXSCHOH) & BM_USBC_UOG2_TXFILLTUNING_TXSCHOH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXSCHOH field to a new value.
#define BW_USBC_UOG2_TXFILLTUNING_TXSCHOH(v)   (HW_USBC_UOG2_TXFILLTUNING_WR((HW_USBC_UOG2_TXFILLTUNING_RD() & ~BM_USBC_UOG2_TXFILLTUNING_TXSCHOH) | BF_USBC_UOG2_TXFILLTUNING_TXSCHOH(v)))
#endif

/* --- Register HW_USBC_UOG2_TXFILLTUNING, field TXSCHHEALTH[12:8] (RW)
 *
 * Scheduler Health Counter. (Read/Write To Clear) This register increments when the host controller
 * fails to fill the TX latency FIFO to the level programmed by TXFIFOTHRES before running out of
 * time to send the packet before the next Start-Of-Frame. This health counter measures the number
 * of times this occurs to provide feedback to selecting a proper TXSCHOH. Writing to this register
 * will clear the counter and this counter will max. at 31. Default value is '08h' for OTG
 * controller core, and '00h' for Host-only controller core.
 */

#define BP_USBC_UOG2_TXFILLTUNING_TXSCHHEALTH      (8)      //!< Bit position for USBC_UOG2_TXFILLTUNING_TXSCHHEALTH.
#define BM_USBC_UOG2_TXFILLTUNING_TXSCHHEALTH      (0x00001f00)  //!< Bit mask for USBC_UOG2_TXFILLTUNING_TXSCHHEALTH.

//! @brief Get value of USBC_UOG2_TXFILLTUNING_TXSCHHEALTH from a register value.
#define BG_USBC_UOG2_TXFILLTUNING_TXSCHHEALTH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_TXFILLTUNING_TXSCHHEALTH) >> BP_USBC_UOG2_TXFILLTUNING_TXSCHHEALTH)

//! @brief Format value for bitfield USBC_UOG2_TXFILLTUNING_TXSCHHEALTH.
#define BF_USBC_UOG2_TXFILLTUNING_TXSCHHEALTH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_TXFILLTUNING_TXSCHHEALTH) & BM_USBC_UOG2_TXFILLTUNING_TXSCHHEALTH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXSCHHEALTH field to a new value.
#define BW_USBC_UOG2_TXFILLTUNING_TXSCHHEALTH(v)   (HW_USBC_UOG2_TXFILLTUNING_WR((HW_USBC_UOG2_TXFILLTUNING_RD() & ~BM_USBC_UOG2_TXFILLTUNING_TXSCHHEALTH) | BF_USBC_UOG2_TXFILLTUNING_TXSCHHEALTH(v)))
#endif

/* --- Register HW_USBC_UOG2_TXFILLTUNING, field TXFIFOTHRES[21:16] (RW)
 *
 * FIFO Burst Threshold. (Read/Write) This register controls the number of data bursts that are
 * posted to the TX latency FIFO in host mode before the packet begins on to the bus. The minimum
 * value is 2 and this value should be a low as possible to maximize USB performance. A higher value
 * can be used in systems with unpredictable latency and/or insufficient bandwidth where the FIFO
 * may underrun because the data transferred from the latency FIFO to USB occurs before it can be
 * replenished from system memory. This value is ignored if the Stream Disable bit in USB_n_USBMODE
 * register is set. Default value is '00h' for OTG controller core, and '02h' for Host-only
 * controller core.
 */

#define BP_USBC_UOG2_TXFILLTUNING_TXFIFOTHRES      (16)      //!< Bit position for USBC_UOG2_TXFILLTUNING_TXFIFOTHRES.
#define BM_USBC_UOG2_TXFILLTUNING_TXFIFOTHRES      (0x003f0000)  //!< Bit mask for USBC_UOG2_TXFILLTUNING_TXFIFOTHRES.

//! @brief Get value of USBC_UOG2_TXFILLTUNING_TXFIFOTHRES from a register value.
#define BG_USBC_UOG2_TXFILLTUNING_TXFIFOTHRES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_TXFILLTUNING_TXFIFOTHRES) >> BP_USBC_UOG2_TXFILLTUNING_TXFIFOTHRES)

//! @brief Format value for bitfield USBC_UOG2_TXFILLTUNING_TXFIFOTHRES.
#define BF_USBC_UOG2_TXFILLTUNING_TXFIFOTHRES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_TXFILLTUNING_TXFIFOTHRES) & BM_USBC_UOG2_TXFILLTUNING_TXFIFOTHRES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXFIFOTHRES field to a new value.
#define BW_USBC_UOG2_TXFILLTUNING_TXFIFOTHRES(v)   (HW_USBC_UOG2_TXFILLTUNING_WR((HW_USBC_UOG2_TXFILLTUNING_RD() & ~BM_USBC_UOG2_TXFILLTUNING_TXFIFOTHRES) | BF_USBC_UOG2_TXFILLTUNING_TXFIFOTHRES(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ENDPTNAK - Endpoint NAK
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ENDPTNAK - Endpoint NAK (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_usbc_uog2_endptnak
{
    reg32_t U;
    struct _hw_usbc_uog2_endptnak_bitfields
    {
        unsigned EPRN : 8; //!< [7:0] RX Endpoint NAK - R/WC.
        unsigned RESERVED0 : 8; //!< [15:8] Reserved
        unsigned EPTN : 8; //!< [23:16] TX Endpoint NAK - R/WC.
        unsigned RESERVED1 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_endptnak_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ENDPTNAK register
 */
#define HW_USBC_UOG2_ENDPTNAK_ADDR      (REGS_USBC_BASE + 0x378)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ENDPTNAK           (*(volatile hw_usbc_uog2_endptnak_t *) HW_USBC_UOG2_ENDPTNAK_ADDR)
#define HW_USBC_UOG2_ENDPTNAK_RD()      (HW_USBC_UOG2_ENDPTNAK.U)
#define HW_USBC_UOG2_ENDPTNAK_WR(v)     (HW_USBC_UOG2_ENDPTNAK.U = (v))
#define HW_USBC_UOG2_ENDPTNAK_SET(v)    (HW_USBC_UOG2_ENDPTNAK_WR(HW_USBC_UOG2_ENDPTNAK_RD() |  (v)))
#define HW_USBC_UOG2_ENDPTNAK_CLR(v)    (HW_USBC_UOG2_ENDPTNAK_WR(HW_USBC_UOG2_ENDPTNAK_RD() & ~(v)))
#define HW_USBC_UOG2_ENDPTNAK_TOG(v)    (HW_USBC_UOG2_ENDPTNAK_WR(HW_USBC_UOG2_ENDPTNAK_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_ENDPTNAK bitfields
 */

/* --- Register HW_USBC_UOG2_ENDPTNAK, field EPRN[7:0] (RW)
 *
 * RX Endpoint NAK - R/WC. Each RX endpoint has 1 bit in this field. The bit is set when the device
 * sends a NAK handshake on a received OUT or PING token for the corresponding endpoint. Bit [N] -
 * Endpoint #[N], N is 0-7
 */

#define BP_USBC_UOG2_ENDPTNAK_EPRN      (0)      //!< Bit position for USBC_UOG2_ENDPTNAK_EPRN.
#define BM_USBC_UOG2_ENDPTNAK_EPRN      (0x000000ff)  //!< Bit mask for USBC_UOG2_ENDPTNAK_EPRN.

//! @brief Get value of USBC_UOG2_ENDPTNAK_EPRN from a register value.
#define BG_USBC_UOG2_ENDPTNAK_EPRN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTNAK_EPRN) >> BP_USBC_UOG2_ENDPTNAK_EPRN)

//! @brief Format value for bitfield USBC_UOG2_ENDPTNAK_EPRN.
#define BF_USBC_UOG2_ENDPTNAK_EPRN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTNAK_EPRN) & BM_USBC_UOG2_ENDPTNAK_EPRN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EPRN field to a new value.
#define BW_USBC_UOG2_ENDPTNAK_EPRN(v)   (HW_USBC_UOG2_ENDPTNAK_WR((HW_USBC_UOG2_ENDPTNAK_RD() & ~BM_USBC_UOG2_ENDPTNAK_EPRN) | BF_USBC_UOG2_ENDPTNAK_EPRN(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTNAK, field EPTN[23:16] (RW)
 *
 * TX Endpoint NAK - R/WC. Each TX endpoint has 1 bit in this field. The bit is set when the device
 * sends a NAK handshake on a received IN token for the corresponding endpoint. Bit [N] - Endpoint
 * #[N], N is 0-7
 */

#define BP_USBC_UOG2_ENDPTNAK_EPTN      (16)      //!< Bit position for USBC_UOG2_ENDPTNAK_EPTN.
#define BM_USBC_UOG2_ENDPTNAK_EPTN      (0x00ff0000)  //!< Bit mask for USBC_UOG2_ENDPTNAK_EPTN.

//! @brief Get value of USBC_UOG2_ENDPTNAK_EPTN from a register value.
#define BG_USBC_UOG2_ENDPTNAK_EPTN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTNAK_EPTN) >> BP_USBC_UOG2_ENDPTNAK_EPTN)

//! @brief Format value for bitfield USBC_UOG2_ENDPTNAK_EPTN.
#define BF_USBC_UOG2_ENDPTNAK_EPTN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTNAK_EPTN) & BM_USBC_UOG2_ENDPTNAK_EPTN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EPTN field to a new value.
#define BW_USBC_UOG2_ENDPTNAK_EPTN(v)   (HW_USBC_UOG2_ENDPTNAK_WR((HW_USBC_UOG2_ENDPTNAK_RD() & ~BM_USBC_UOG2_ENDPTNAK_EPTN) | BF_USBC_UOG2_ENDPTNAK_EPTN(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ENDPTNAKEN - Endpoint NAK Enable
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ENDPTNAKEN - Endpoint NAK Enable (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_usbc_uog2_endptnaken
{
    reg32_t U;
    struct _hw_usbc_uog2_endptnaken_bitfields
    {
        unsigned EPRNE : 8; //!< [7:0] RX Endpoint NAK Enable - R/W.
        unsigned RESERVED0 : 8; //!< [15:8] Reserved
        unsigned EPTNE : 8; //!< [23:16] TX Endpoint NAK Enable - R/W.
        unsigned RESERVED1 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_endptnaken_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ENDPTNAKEN register
 */
#define HW_USBC_UOG2_ENDPTNAKEN_ADDR      (REGS_USBC_BASE + 0x37c)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ENDPTNAKEN           (*(volatile hw_usbc_uog2_endptnaken_t *) HW_USBC_UOG2_ENDPTNAKEN_ADDR)
#define HW_USBC_UOG2_ENDPTNAKEN_RD()      (HW_USBC_UOG2_ENDPTNAKEN.U)
#define HW_USBC_UOG2_ENDPTNAKEN_WR(v)     (HW_USBC_UOG2_ENDPTNAKEN.U = (v))
#define HW_USBC_UOG2_ENDPTNAKEN_SET(v)    (HW_USBC_UOG2_ENDPTNAKEN_WR(HW_USBC_UOG2_ENDPTNAKEN_RD() |  (v)))
#define HW_USBC_UOG2_ENDPTNAKEN_CLR(v)    (HW_USBC_UOG2_ENDPTNAKEN_WR(HW_USBC_UOG2_ENDPTNAKEN_RD() & ~(v)))
#define HW_USBC_UOG2_ENDPTNAKEN_TOG(v)    (HW_USBC_UOG2_ENDPTNAKEN_WR(HW_USBC_UOG2_ENDPTNAKEN_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_ENDPTNAKEN bitfields
 */

/* --- Register HW_USBC_UOG2_ENDPTNAKEN, field EPRNE[7:0] (RW)
 *
 * RX Endpoint NAK Enable - R/W. Each bit is an enable bit for the corresponding RX Endpoint NAK
 * bit. If this bit is set and the corresponding RX Endpoint NAK bit is set, the NAK Interrupt bit
 * is set. Bit [N] - Endpoint #[N], N is 0-7
 */

#define BP_USBC_UOG2_ENDPTNAKEN_EPRNE      (0)      //!< Bit position for USBC_UOG2_ENDPTNAKEN_EPRNE.
#define BM_USBC_UOG2_ENDPTNAKEN_EPRNE      (0x000000ff)  //!< Bit mask for USBC_UOG2_ENDPTNAKEN_EPRNE.

//! @brief Get value of USBC_UOG2_ENDPTNAKEN_EPRNE from a register value.
#define BG_USBC_UOG2_ENDPTNAKEN_EPRNE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTNAKEN_EPRNE) >> BP_USBC_UOG2_ENDPTNAKEN_EPRNE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTNAKEN_EPRNE.
#define BF_USBC_UOG2_ENDPTNAKEN_EPRNE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTNAKEN_EPRNE) & BM_USBC_UOG2_ENDPTNAKEN_EPRNE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EPRNE field to a new value.
#define BW_USBC_UOG2_ENDPTNAKEN_EPRNE(v)   (HW_USBC_UOG2_ENDPTNAKEN_WR((HW_USBC_UOG2_ENDPTNAKEN_RD() & ~BM_USBC_UOG2_ENDPTNAKEN_EPRNE) | BF_USBC_UOG2_ENDPTNAKEN_EPRNE(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTNAKEN, field EPTNE[23:16] (RW)
 *
 * TX Endpoint NAK Enable - R/W. Each bit is an enable bit for the corresponding TX Endpoint NAK
 * bit. If this bit is set and the corresponding TX Endpoint NAK bit is set, the NAK Interrupt bit
 * is set. Bit [N] - Endpoint #[N], N is 0-7
 */

#define BP_USBC_UOG2_ENDPTNAKEN_EPTNE      (16)      //!< Bit position for USBC_UOG2_ENDPTNAKEN_EPTNE.
#define BM_USBC_UOG2_ENDPTNAKEN_EPTNE      (0x00ff0000)  //!< Bit mask for USBC_UOG2_ENDPTNAKEN_EPTNE.

//! @brief Get value of USBC_UOG2_ENDPTNAKEN_EPTNE from a register value.
#define BG_USBC_UOG2_ENDPTNAKEN_EPTNE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTNAKEN_EPTNE) >> BP_USBC_UOG2_ENDPTNAKEN_EPTNE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTNAKEN_EPTNE.
#define BF_USBC_UOG2_ENDPTNAKEN_EPTNE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTNAKEN_EPTNE) & BM_USBC_UOG2_ENDPTNAKEN_EPTNE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the EPTNE field to a new value.
#define BW_USBC_UOG2_ENDPTNAKEN_EPTNE(v)   (HW_USBC_UOG2_ENDPTNAKEN_WR((HW_USBC_UOG2_ENDPTNAKEN_RD() & ~BM_USBC_UOG2_ENDPTNAKEN_EPTNE) | BF_USBC_UOG2_ENDPTNAKEN_EPTNE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_CONFIGFLAG - Configure Flag Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_CONFIGFLAG - Configure Flag Register (RW)
 *
 * Reset value: 0x00000001
 *

 */
typedef union _hw_usbc_uog2_configflag
{
    reg32_t U;
    struct _hw_usbc_uog2_configflag_bitfields
    {
        unsigned CF : 1; //!< [0] Configure Flag Host software sets this bit as the last action in its process of configuring the Host Controller.
        unsigned RESERVED0 : 31; //!< [31:1] Reserved
    } B;
} hw_usbc_uog2_configflag_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_CONFIGFLAG register
 */
#define HW_USBC_UOG2_CONFIGFLAG_ADDR      (REGS_USBC_BASE + 0x380)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_CONFIGFLAG           (*(volatile hw_usbc_uog2_configflag_t *) HW_USBC_UOG2_CONFIGFLAG_ADDR)
#define HW_USBC_UOG2_CONFIGFLAG_RD()      (HW_USBC_UOG2_CONFIGFLAG.U)
#define HW_USBC_UOG2_CONFIGFLAG_WR(v)     (HW_USBC_UOG2_CONFIGFLAG.U = (v))
#define HW_USBC_UOG2_CONFIGFLAG_SET(v)    (HW_USBC_UOG2_CONFIGFLAG_WR(HW_USBC_UOG2_CONFIGFLAG_RD() |  (v)))
#define HW_USBC_UOG2_CONFIGFLAG_CLR(v)    (HW_USBC_UOG2_CONFIGFLAG_WR(HW_USBC_UOG2_CONFIGFLAG_RD() & ~(v)))
#define HW_USBC_UOG2_CONFIGFLAG_TOG(v)    (HW_USBC_UOG2_CONFIGFLAG_WR(HW_USBC_UOG2_CONFIGFLAG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_CONFIGFLAG bitfields
 */

/* --- Register HW_USBC_UOG2_CONFIGFLAG, field CF[0] (RO)
 *
 * Configure Flag Host software sets this bit as the last action in its process of configuring the
 * Host Controller. This bit controls the default port-routing control logic.
 *
 * Values:
 * 0 - Port routing control logic default-routes each port to an implementation dependent classic host
 *     controller.
 * 1 - Port routing control logic default-routes all ports to this host controller.
 */

#define BP_USBC_UOG2_CONFIGFLAG_CF      (0)      //!< Bit position for USBC_UOG2_CONFIGFLAG_CF.
#define BM_USBC_UOG2_CONFIGFLAG_CF      (0x00000001)  //!< Bit mask for USBC_UOG2_CONFIGFLAG_CF.

//! @brief Get value of USBC_UOG2_CONFIGFLAG_CF from a register value.
#define BG_USBC_UOG2_CONFIGFLAG_CF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_CONFIGFLAG_CF) >> BP_USBC_UOG2_CONFIGFLAG_CF)


//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_PORTSC1 - Port Status & Control
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_PORTSC1 - Port Status & Control (RW)
 *
 * Reset value: 0x10000000
 *
 * Host Controller  A host controller could implement one to eight port status and control
 * registers. The number is determined by N_PORTs bits in HWSPARAMs register (please see ). Software
 * could read this parameter register to determine how many ports need service.  All controller
 * cores are Single-Port Host, so there is only one port status and control register for each
 * controller core.  This register is only reset by power on reset or controller core reset. The
 * initial conditions of a port are:   No device connected  Port disabled   If the port supports
 * power control, this state remains until port power is supplied (by software).  Device Controller
 * A device controller has only port register one (PORTSC1) and it does not support power control.
 * Port control in device mode is only used for status port reset, suspend, and current connect
 * status. It is also used to initiate test mode or force signaling and allows software to put the
 * PHY into low power suspend mode and disable the PHY clock.
 */
typedef union _hw_usbc_uog2_portsc1
{
    reg32_t U;
    struct _hw_usbc_uog2_portsc1_bitfields
    {
        unsigned CCS : 1; //!< [0] Current Connect Status-Read Only.
        unsigned CSC : 1; //!< [1] Connect Status Change-R/WC.
        unsigned PE : 1; //!< [2] Port Enabled/Disabled-Read/Write.
        unsigned PEC : 1; //!< [3] Port Enable/Disable Change-R/WC.
        unsigned OCA : 1; //!< [4] Over-current Active-Read Only.
        unsigned OCC : 1; //!< [5] Over-current Change-R/WC.
        unsigned FPR : 1; //!< [6] Force Port Resume -Read/Write.
        unsigned SUSP : 1; //!< [7] Suspend - Read/Write or Read Only.
        unsigned PR : 1; //!< [8] Port Reset - Read/Write or Read Only.
        unsigned HSP : 1; //!< [9] High-Speed Port - Read Only.
        unsigned LS : 2; //!< [11:10] Line Status-Read Only.
        unsigned PP : 1; //!< [12] Port Power (PP)-Read/Write or Read Only.
        unsigned PO : 1; //!< [13] Port Owner-Read/Write.
        unsigned PIC : 2; //!< [15:14] Port Indicator Control - Read/Write.
        unsigned PTC : 4; //!< [19:16] Port Test Control - Read/Write.
        unsigned WKCN : 1; //!< [20] Wake on Connect Enable (WKCNNT_E) - Read/Write.
        unsigned WKDC : 1; //!< [21] Wake on Disconnect Enable (WKDSCNNT_E) - Read/Write.
        unsigned WKOC : 1; //!< [22] Wake on Over-current Enable (WKOC_E) - Read/Write.
        unsigned PHCD : 1; //!< [23] PHY Low Power Suspend - Clock Disable (PLPSCD) - Read/Write.
        unsigned PFSC : 1; //!< [24] Port Force Full Speed Connect - Read/Write.
        unsigned PTS : 1; //!< [25] See description at bits 31-30
        unsigned PSPD : 2; //!< [27:26] Port Speed - Read Only.
        unsigned PTW : 1; //!< [28] Parallel Transceiver Width This bit has no effect if serial interface engine is used.
        unsigned STS : 1; //!< [29] Serial Transceiver Select - Read Only Serial Transceiver Select 1 Serial Interface Engine is selected 0 Parallel Interface signals is selected Serial Interface Engine can be used in combination with UTMI+/ULPI physical interface to provide FS/LS signaling instead of the parallel interface signals.
        unsigned PTS1 : 2; //!< [31:30] Bit field {bit25, bit31, bit30}: "000b" UTMI/UTMI+ "001b" Reserved "010b" ULPI "011b" Serial/USB 1.1 PHY/IC-USB (FS Only) "100b" HSIC All USB port interface modes are listed in this field description, but not all are supported.
    } B;
} hw_usbc_uog2_portsc1_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_PORTSC1 register
 */
#define HW_USBC_UOG2_PORTSC1_ADDR      (REGS_USBC_BASE + 0x384)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_PORTSC1           (*(volatile hw_usbc_uog2_portsc1_t *) HW_USBC_UOG2_PORTSC1_ADDR)
#define HW_USBC_UOG2_PORTSC1_RD()      (HW_USBC_UOG2_PORTSC1.U)
#define HW_USBC_UOG2_PORTSC1_WR(v)     (HW_USBC_UOG2_PORTSC1.U = (v))
#define HW_USBC_UOG2_PORTSC1_SET(v)    (HW_USBC_UOG2_PORTSC1_WR(HW_USBC_UOG2_PORTSC1_RD() |  (v)))
#define HW_USBC_UOG2_PORTSC1_CLR(v)    (HW_USBC_UOG2_PORTSC1_WR(HW_USBC_UOG2_PORTSC1_RD() & ~(v)))
#define HW_USBC_UOG2_PORTSC1_TOG(v)    (HW_USBC_UOG2_PORTSC1_WR(HW_USBC_UOG2_PORTSC1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_PORTSC1 bitfields
 */

/* --- Register HW_USBC_UOG2_PORTSC1, field CCS[0] (RO)
 *
 * Current Connect Status-Read Only. In Host Mode: 1=Device is present on port. 0=No device is
 * present. Default = 0. This value reflects the current state of the port, and may not correspond
 * directly to the event that caused the Connect Status Change bit (Bit 1) to be set. This field is
 * zero if Port Power( ) is zero in host mode. In Device Mode: 1=Attached. 0=Not Attached.
 * Default=0. A one indicates that the device successfully attached and is operating in either high
 * speed or full speed as indicated by the High Speed Port bit in this register. A zero indicates
 * that the device did not attach successfully or was forcibly disconnected by the software writing
 * a zero to the Run bit in the USBCMD register. It does not state the device being disconnected or
 * suspended.
 */

#define BP_USBC_UOG2_PORTSC1_CCS      (0)      //!< Bit position for USBC_UOG2_PORTSC1_CCS.
#define BM_USBC_UOG2_PORTSC1_CCS      (0x00000001)  //!< Bit mask for USBC_UOG2_PORTSC1_CCS.

//! @brief Get value of USBC_UOG2_PORTSC1_CCS from a register value.
#define BG_USBC_UOG2_PORTSC1_CCS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_CCS) >> BP_USBC_UOG2_PORTSC1_CCS)

/* --- Register HW_USBC_UOG2_PORTSC1, field CSC[1] (RW)
 *
 * Connect Status Change-R/WC. 1 =Change in Current Connect Status. 0=No change. Default 0. In Host
 * Mode: Indicates a change has occurred in the port's Current Connect Status. The host/device
 * controller sets this bit for all changes to the port device connect status, even if system
 * software has not cleared an existing connect status change. For example, the insertion status
 * changes twice before system software has cleared the changed condition, hub hardware will be
 * 'setting' an already-set bit (that is, the bit will remain set). Software clears this bit by
 * writing a one to it. This field is zero if Port Power( ) is zero in host mode. In Device Mode:
 * This bit is undefined in device controller mode.
 */

#define BP_USBC_UOG2_PORTSC1_CSC      (1)      //!< Bit position for USBC_UOG2_PORTSC1_CSC.
#define BM_USBC_UOG2_PORTSC1_CSC      (0x00000002)  //!< Bit mask for USBC_UOG2_PORTSC1_CSC.

//! @brief Get value of USBC_UOG2_PORTSC1_CSC from a register value.
#define BG_USBC_UOG2_PORTSC1_CSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_CSC) >> BP_USBC_UOG2_PORTSC1_CSC)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_CSC.
#define BF_USBC_UOG2_PORTSC1_CSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_CSC) & BM_USBC_UOG2_PORTSC1_CSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSC field to a new value.
#define BW_USBC_UOG2_PORTSC1_CSC(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_CSC) | BF_USBC_UOG2_PORTSC1_CSC(v)))
#endif

/* --- Register HW_USBC_UOG2_PORTSC1, field PE[2] (RW)
 *
 * Port Enabled/Disabled-Read/Write. 1=Enable. 0=Disable. Default 0. In Host Mode: Ports can only be
 * enabled by the host controller as a part of the reset and enable. Software cannot enable a port
 * by writing a one to this field. Ports can be disabled by either a fault condition (disconnect
 * event or other fault condition) or by the host software. Note that the bit status does not change
 * until the port state actually changes. There may be a delay in disabling or enabling a port due
 * to other host controller and bus events. When the port is disabled, (0b) downstream propagation
 * of data is blocked except for reset. This field is zero if Port Power( ) is zero in host mode. In
 * Device Mode: The device port is always enabled, so this bit is always '1b'.
 */

#define BP_USBC_UOG2_PORTSC1_PE      (2)      //!< Bit position for USBC_UOG2_PORTSC1_PE.
#define BM_USBC_UOG2_PORTSC1_PE      (0x00000004)  //!< Bit mask for USBC_UOG2_PORTSC1_PE.

//! @brief Get value of USBC_UOG2_PORTSC1_PE from a register value.
#define BG_USBC_UOG2_PORTSC1_PE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_PE) >> BP_USBC_UOG2_PORTSC1_PE)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_PE.
#define BF_USBC_UOG2_PORTSC1_PE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_PE) & BM_USBC_UOG2_PORTSC1_PE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PE field to a new value.
#define BW_USBC_UOG2_PORTSC1_PE(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_PE) | BF_USBC_UOG2_PORTSC1_PE(v)))
#endif

/* --- Register HW_USBC_UOG2_PORTSC1, field PEC[3] (RW)
 *
 * Port Enable/Disable Change-R/WC. 1=Port enabled/disabled status has changed. 0=No change. Default
 * = 0. In Host Mode: For the root hub, this bit is set to a one only when a port is disabled due to
 * disconnect on the port or due to the appropriate conditions existing at the EOF2 point (See
 * Chapter 11 of the USB Specification). Software clears this by writing a one to it. This field is
 * zero if Port Power( ) is zero. In Device mode: The device port is always enabled, so this bit is
 * always '0b'.
 */

#define BP_USBC_UOG2_PORTSC1_PEC      (3)      //!< Bit position for USBC_UOG2_PORTSC1_PEC.
#define BM_USBC_UOG2_PORTSC1_PEC      (0x00000008)  //!< Bit mask for USBC_UOG2_PORTSC1_PEC.

//! @brief Get value of USBC_UOG2_PORTSC1_PEC from a register value.
#define BG_USBC_UOG2_PORTSC1_PEC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_PEC) >> BP_USBC_UOG2_PORTSC1_PEC)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_PEC.
#define BF_USBC_UOG2_PORTSC1_PEC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_PEC) & BM_USBC_UOG2_PORTSC1_PEC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PEC field to a new value.
#define BW_USBC_UOG2_PORTSC1_PEC(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_PEC) | BF_USBC_UOG2_PORTSC1_PEC(v)))
#endif

/* --- Register HW_USBC_UOG2_PORTSC1, field OCA[4] (RO)
 *
 * Over-current Active-Read Only. Default 0. This bit will automatically transition from one to zero
 * when the over current condition is removed.
 *
 * Values:
 * 0 - This port does not have an over-current condition.
 * 1 - This port currently has an over-current condition
 */

#define BP_USBC_UOG2_PORTSC1_OCA      (4)      //!< Bit position for USBC_UOG2_PORTSC1_OCA.
#define BM_USBC_UOG2_PORTSC1_OCA      (0x00000010)  //!< Bit mask for USBC_UOG2_PORTSC1_OCA.

//! @brief Get value of USBC_UOG2_PORTSC1_OCA from a register value.
#define BG_USBC_UOG2_PORTSC1_OCA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_OCA) >> BP_USBC_UOG2_PORTSC1_OCA)


/* --- Register HW_USBC_UOG2_PORTSC1, field OCC[5] (RW)
 *
 * Over-current Change-R/WC. Default=0. This bit is set '1b' by hardware when there is a change to
 * Over-current Active. Software can clear this bit by writing a one to this bit position.
 */

#define BP_USBC_UOG2_PORTSC1_OCC      (5)      //!< Bit position for USBC_UOG2_PORTSC1_OCC.
#define BM_USBC_UOG2_PORTSC1_OCC      (0x00000020)  //!< Bit mask for USBC_UOG2_PORTSC1_OCC.

//! @brief Get value of USBC_UOG2_PORTSC1_OCC from a register value.
#define BG_USBC_UOG2_PORTSC1_OCC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_OCC) >> BP_USBC_UOG2_PORTSC1_OCC)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_OCC.
#define BF_USBC_UOG2_PORTSC1_OCC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_OCC) & BM_USBC_UOG2_PORTSC1_OCC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OCC field to a new value.
#define BW_USBC_UOG2_PORTSC1_OCC(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_OCC) | BF_USBC_UOG2_PORTSC1_OCC(v)))
#endif

/* --- Register HW_USBC_UOG2_PORTSC1, field FPR[6] (RW)
 *
 * Force Port Resume -Read/Write. 1= Resume detected/driven on port. 0=No resume (K-state)
 * detected/driven on port. Default = 0. In Host Mode: Software sets this bit to one to drive resume
 * signaling. The Host Controller sets this bit to one if a J-to-K transition is detected while the
 * port is in the Suspend state. When this bit transitions to a one because a J-to-K transition is
 * detected, the Port Change Detect bit in the USBSTS register is also set to one. This bit will
 * automatically change to zero after the resume sequence is complete. This behavior is different
 * from EHCI where the host controller driver is required to set this bit to a zero after the resume
 * duration is timed in the driver. Note that when the Host controller owns the port, the resume
 * sequence follows the defined sequence documented in the USB Specification Revision 2.0. The
 * resume signaling (Full-speed 'K') is driven on the port as long as this bit remains a one. This
 * bit will remain a one until the port has switched to the high-speed idle. Writing a zero has no
 * effect because the port controller will time the resume operation clear the bit the port control
 * state switches to HS or FS idle. This field is zero if Port Power( ) is zero in host mode. This
 * bit is not-EHCI compatible. In Device mode: After the device has been in Suspend State for 5ms or
 * more, software must set this bit to one to drive resume signaling before clearing. The Device
 * Controller will set this bit to one if a J-to-K transition is detected while the port is in the
 * Suspend state. The bit will be cleared when the device returns to normal operation. Also, when
 * this bit wil be cleared because a K-to-J transition detected, the Port Change Detect bit in the
 * USBSTS register is also set to one.
 */

#define BP_USBC_UOG2_PORTSC1_FPR      (6)      //!< Bit position for USBC_UOG2_PORTSC1_FPR.
#define BM_USBC_UOG2_PORTSC1_FPR      (0x00000040)  //!< Bit mask for USBC_UOG2_PORTSC1_FPR.

//! @brief Get value of USBC_UOG2_PORTSC1_FPR from a register value.
#define BG_USBC_UOG2_PORTSC1_FPR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_FPR) >> BP_USBC_UOG2_PORTSC1_FPR)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_FPR.
#define BF_USBC_UOG2_PORTSC1_FPR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_FPR) & BM_USBC_UOG2_PORTSC1_FPR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FPR field to a new value.
#define BW_USBC_UOG2_PORTSC1_FPR(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_FPR) | BF_USBC_UOG2_PORTSC1_FPR(v)))
#endif

/* --- Register HW_USBC_UOG2_PORTSC1, field SUSP[7] (RW)
 *
 * Suspend - Read/Write or Read Only. Default = 0b. 1=Port in suspend state. 0=Port not in suspend
 * state. In Host Mode: Read/Write. Port Enabled Bit and Suspend bit of this register define the
 * port states as follows: Bits [Port Enabled, Suspend] Port State 0x Disable 10 Enable 11 Suspend
 * When in suspend state, downstream propagation of data is blocked on this port, except for port
 * reset. The blocking occurs at the end of the current transaction if a transaction was in progress
 * when this bit was written to 1. In the suspend state, the port is sensitive to resume detection.
 * Note that the bit status does not change until the port is suspended and that there may be a
 * delay in suspending a port if there is a transaction currently in progress on the The host
 * controller will unconditionally set this bit to zero when software sets the Force Port Resume bit
 * to zero. The host controller ignores a write of zero to this bit. If host software sets this bit
 * to a one when the port is not enabled (that is, Port enabled bit is a zero) the results are
 * undefined. This field is zero if Port Power( ) is zero in host mode. In Device Mode: Read Only.
 * In device mode this bit is a read only status bit.
 */

#define BP_USBC_UOG2_PORTSC1_SUSP      (7)      //!< Bit position for USBC_UOG2_PORTSC1_SUSP.
#define BM_USBC_UOG2_PORTSC1_SUSP      (0x00000080)  //!< Bit mask for USBC_UOG2_PORTSC1_SUSP.

//! @brief Get value of USBC_UOG2_PORTSC1_SUSP from a register value.
#define BG_USBC_UOG2_PORTSC1_SUSP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_SUSP) >> BP_USBC_UOG2_PORTSC1_SUSP)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_SUSP.
#define BF_USBC_UOG2_PORTSC1_SUSP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_SUSP) & BM_USBC_UOG2_PORTSC1_SUSP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SUSP field to a new value.
#define BW_USBC_UOG2_PORTSC1_SUSP(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_SUSP) | BF_USBC_UOG2_PORTSC1_SUSP(v)))
#endif

/* --- Register HW_USBC_UOG2_PORTSC1, field PR[8] (RW)
 *
 * Port Reset - Read/Write or Read Only. Default = 0b. In Host Mode: Read/Write. 1=Port is in Reset.
 * 0=Port is not in Reset. Default 0. When software writes a one to this bit the bus-reset sequence
 * as defined in the USB Specification Revision 2.0 is started. This bit will automatically change
 * to zero after the reset sequence is complete. This behavior is different from EHCI where the host
 * controller driver is required to set this bit to a zero after the reset duration is timed in the
 * driver. In Device Mode: This bit is a read only status bit. Device reset from the USB bus is also
 * indicated in the USBSTS register. This field is zero if Port Power( ) is zero.
 */

#define BP_USBC_UOG2_PORTSC1_PR      (8)      //!< Bit position for USBC_UOG2_PORTSC1_PR.
#define BM_USBC_UOG2_PORTSC1_PR      (0x00000100)  //!< Bit mask for USBC_UOG2_PORTSC1_PR.

//! @brief Get value of USBC_UOG2_PORTSC1_PR from a register value.
#define BG_USBC_UOG2_PORTSC1_PR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_PR) >> BP_USBC_UOG2_PORTSC1_PR)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_PR.
#define BF_USBC_UOG2_PORTSC1_PR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_PR) & BM_USBC_UOG2_PORTSC1_PR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PR field to a new value.
#define BW_USBC_UOG2_PORTSC1_PR(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_PR) | BF_USBC_UOG2_PORTSC1_PR(v)))
#endif

/* --- Register HW_USBC_UOG2_PORTSC1, field HSP[9] (RO)
 *
 * High-Speed Port - Read Only. Default = 0b. When the bit is one, the host/device connected to the
 * port is in high-speed mode and if set to zero, the host/device connected to the port is not in a
 * high-speed mode. HSP is redundant with PSPD(bit 27, 26) but remained for compatibility.
 */

#define BP_USBC_UOG2_PORTSC1_HSP      (9)      //!< Bit position for USBC_UOG2_PORTSC1_HSP.
#define BM_USBC_UOG2_PORTSC1_HSP      (0x00000200)  //!< Bit mask for USBC_UOG2_PORTSC1_HSP.

//! @brief Get value of USBC_UOG2_PORTSC1_HSP from a register value.
#define BG_USBC_UOG2_PORTSC1_HSP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_HSP) >> BP_USBC_UOG2_PORTSC1_HSP)

/* --- Register HW_USBC_UOG2_PORTSC1, field LS[11:10] (RW)
 *
 * Line Status-Read Only. These bits reflect the current logical levels of the D+ (bit 11) and D-
 * (bit 10) signal lines. In host mode, the use of linestate by the host controller driver is not
 * necessary (unlike EHCI), because the port controller state machine and the port routing manage
 * the connection of LS and FS. In device mode, the use of linestate by the device controller driver
 * is not necessary. The encoding of the bits are: Bits [11:10] Meaning
 *
 * Values:
 * 00 - SE0
 * 01 - K-state
 * 10 - J-state
 * 11 - Undefined
 */

#define BP_USBC_UOG2_PORTSC1_LS      (10)      //!< Bit position for USBC_UOG2_PORTSC1_LS.
#define BM_USBC_UOG2_PORTSC1_LS      (0x00000c00)  //!< Bit mask for USBC_UOG2_PORTSC1_LS.

//! @brief Get value of USBC_UOG2_PORTSC1_LS from a register value.
#define BG_USBC_UOG2_PORTSC1_LS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_LS) >> BP_USBC_UOG2_PORTSC1_LS)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_LS.
#define BF_USBC_UOG2_PORTSC1_LS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_LS) & BM_USBC_UOG2_PORTSC1_LS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LS field to a new value.
#define BW_USBC_UOG2_PORTSC1_LS(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_LS) | BF_USBC_UOG2_PORTSC1_LS(v)))
#endif


/* --- Register HW_USBC_UOG2_PORTSC1, field PP[12] (RW)
 *
 * Port Power (PP)-Read/Write or Read Only. The function of this bit depends on the value of the
 * Port Power Switching (PPC) field in the HCSPARAMS register. The behavior is as follows: PPC PP
 * Operation 0 1b Read Only - Host controller does not have port power control switches. Each port
 * is hard-wired to power. 1 1b/0b - Read/Write. Host/OTG controller requires port power control
 * switches. This bit represents the current setting of the switch (0=off, 1=on). When power is not
 * available on a port (that is, PP equals a 0), the port is non-functional and will not report
 * attaches, detaches, etc. When an over-current condition is detected on a powered port and PPC is
 * a one, the PP bit in each affected port may be transitional by the host controller driver from a
 * one to a zero (removing power from the port). This feature is implemented in all controller cores
 * (PPC = 1).
 */

#define BP_USBC_UOG2_PORTSC1_PP      (12)      //!< Bit position for USBC_UOG2_PORTSC1_PP.
#define BM_USBC_UOG2_PORTSC1_PP      (0x00001000)  //!< Bit mask for USBC_UOG2_PORTSC1_PP.

//! @brief Get value of USBC_UOG2_PORTSC1_PP from a register value.
#define BG_USBC_UOG2_PORTSC1_PP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_PP) >> BP_USBC_UOG2_PORTSC1_PP)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_PP.
#define BF_USBC_UOG2_PORTSC1_PP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_PP) & BM_USBC_UOG2_PORTSC1_PP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PP field to a new value.
#define BW_USBC_UOG2_PORTSC1_PP(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_PP) | BF_USBC_UOG2_PORTSC1_PP(v)))
#endif

/* --- Register HW_USBC_UOG2_PORTSC1, field PO[13] (RW)
 *
 * Port Owner-Read/Write. Default = 0. This bit unconditionally goes to a 0 when the configured bit
 * in the CONFIGFLAG register makes a 0 to 1 transition. This bit unconditionally goes to 1 whenever
 * the Configured bit is zero System software uses this field to release ownership of the port to a
 * selected host controller (in the event that the attached device is not a high-speed device).
 * Software writes a one to this bit when the attached device is not a high-speed device. A one in
 * this bit means that an internal companion controller owns and controls the port. Port owner
 * handoff is not supported in all controller cores, therefore this bit will always be 0.
 */

#define BP_USBC_UOG2_PORTSC1_PO      (13)      //!< Bit position for USBC_UOG2_PORTSC1_PO.
#define BM_USBC_UOG2_PORTSC1_PO      (0x00002000)  //!< Bit mask for USBC_UOG2_PORTSC1_PO.

//! @brief Get value of USBC_UOG2_PORTSC1_PO from a register value.
#define BG_USBC_UOG2_PORTSC1_PO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_PO) >> BP_USBC_UOG2_PORTSC1_PO)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_PO.
#define BF_USBC_UOG2_PORTSC1_PO(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_PO) & BM_USBC_UOG2_PORTSC1_PO)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PO field to a new value.
#define BW_USBC_UOG2_PORTSC1_PO(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_PO) | BF_USBC_UOG2_PORTSC1_PO(v)))
#endif

/* --- Register HW_USBC_UOG2_PORTSC1, field PIC[15:14] (RW)
 *
 * Port Indicator Control - Read/Write. Default = Ob. Writing to this field has no effect if the
 * P_INDICATOR bit in the HCSPARAMS register is a zero. Refer to the USB Specification Revision 2.0
 * for a description on how these bits are to be used. This field is zero if Port Power is zero. Bit
 * Value Meaning
 *
 * Values:
 * 00 - Port indicators are off
 * 01 - Amber
 * 10 - Green
 * 11 - Undefined
 */

#define BP_USBC_UOG2_PORTSC1_PIC      (14)      //!< Bit position for USBC_UOG2_PORTSC1_PIC.
#define BM_USBC_UOG2_PORTSC1_PIC      (0x0000c000)  //!< Bit mask for USBC_UOG2_PORTSC1_PIC.

//! @brief Get value of USBC_UOG2_PORTSC1_PIC from a register value.
#define BG_USBC_UOG2_PORTSC1_PIC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_PIC) >> BP_USBC_UOG2_PORTSC1_PIC)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_PIC.
#define BF_USBC_UOG2_PORTSC1_PIC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_PIC) & BM_USBC_UOG2_PORTSC1_PIC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PIC field to a new value.
#define BW_USBC_UOG2_PORTSC1_PIC(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_PIC) | BF_USBC_UOG2_PORTSC1_PIC(v)))
#endif


/* --- Register HW_USBC_UOG2_PORTSC1, field PTC[19:16] (RW)
 *
 * Port Test Control - Read/Write. Default = 0000b. Refer to for the operational model for using
 * these test modes and the USB Specification Revision 2.0, Chapter 7 for details on each test mode.
 * The FORCE_ENABLE_FS and FORCE ENABLE_LS are extensions to the test mode support specified in the
 * EHCI specification. Writing the PTC field to any of the FORCE_ENABLE_{HS/FS/LS} values will force
 * the port into the connected and enabled state at the selected speed. Writing the PTC field back
 * to TEST_MODE_DISABLE will allow the port state machines to progress normally from that point. Low
 * speed operations are not supported as a peripheral device. Any other value than zero indicates
 * that the port is operating in test mode. Value Specific Test
 *
 * Values:
 * 0000 - TEST_MODE_DISABLE
 * 0001 - J_STATE
 * 0010 - K_STATE
 * 0011 - SE0 (host) / NAK (device)
 * 0100 - Packet
 * 0101 - FORCE_ENABLE_HS
 * 0110 - FORCE_ENABLE_FS
 * 0111 - FORCE_ENABLE_LS
 * 1000-1111 - Reserved
 */

#define BP_USBC_UOG2_PORTSC1_PTC      (16)      //!< Bit position for USBC_UOG2_PORTSC1_PTC.
#define BM_USBC_UOG2_PORTSC1_PTC      (0x000f0000)  //!< Bit mask for USBC_UOG2_PORTSC1_PTC.

//! @brief Get value of USBC_UOG2_PORTSC1_PTC from a register value.
#define BG_USBC_UOG2_PORTSC1_PTC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_PTC) >> BP_USBC_UOG2_PORTSC1_PTC)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_PTC.
#define BF_USBC_UOG2_PORTSC1_PTC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_PTC) & BM_USBC_UOG2_PORTSC1_PTC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PTC field to a new value.
#define BW_USBC_UOG2_PORTSC1_PTC(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_PTC) | BF_USBC_UOG2_PORTSC1_PTC(v)))
#endif


/* --- Register HW_USBC_UOG2_PORTSC1, field WKCN[20] (RW)
 *
 * Wake on Connect Enable (WKCNNT_E) - Read/Write. Default=0b. Writing this bit to a one enables the
 * port to be sensitive to device connects as wake-up events. This field is zero if Port Power( ) is
 * zero or in device mode.
 */

#define BP_USBC_UOG2_PORTSC1_WKCN      (20)      //!< Bit position for USBC_UOG2_PORTSC1_WKCN.
#define BM_USBC_UOG2_PORTSC1_WKCN      (0x00100000)  //!< Bit mask for USBC_UOG2_PORTSC1_WKCN.

//! @brief Get value of USBC_UOG2_PORTSC1_WKCN from a register value.
#define BG_USBC_UOG2_PORTSC1_WKCN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_WKCN) >> BP_USBC_UOG2_PORTSC1_WKCN)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_WKCN.
#define BF_USBC_UOG2_PORTSC1_WKCN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_WKCN) & BM_USBC_UOG2_PORTSC1_WKCN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKCN field to a new value.
#define BW_USBC_UOG2_PORTSC1_WKCN(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_WKCN) | BF_USBC_UOG2_PORTSC1_WKCN(v)))
#endif

/* --- Register HW_USBC_UOG2_PORTSC1, field WKDC[21] (RW)
 *
 * Wake on Disconnect Enable (WKDSCNNT_E) - Read/Write. Default=0b. Writing this bit to a one
 * enables the port to be sensitive to device disconnects as wake-up events. This field is zero if
 * Port Power( ) is zero or in device mode.
 */

#define BP_USBC_UOG2_PORTSC1_WKDC      (21)      //!< Bit position for USBC_UOG2_PORTSC1_WKDC.
#define BM_USBC_UOG2_PORTSC1_WKDC      (0x00200000)  //!< Bit mask for USBC_UOG2_PORTSC1_WKDC.

//! @brief Get value of USBC_UOG2_PORTSC1_WKDC from a register value.
#define BG_USBC_UOG2_PORTSC1_WKDC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_WKDC) >> BP_USBC_UOG2_PORTSC1_WKDC)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_WKDC.
#define BF_USBC_UOG2_PORTSC1_WKDC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_WKDC) & BM_USBC_UOG2_PORTSC1_WKDC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKDC field to a new value.
#define BW_USBC_UOG2_PORTSC1_WKDC(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_WKDC) | BF_USBC_UOG2_PORTSC1_WKDC(v)))
#endif

/* --- Register HW_USBC_UOG2_PORTSC1, field WKOC[22] (RW)
 *
 * Wake on Over-current Enable (WKOC_E) - Read/Write. Default = 0b. Writing this bit to a one
 * enables the port to be sensitive to over-current conditions as wake-up events. This field is zero
 * if Port Power( ) is zero.
 */

#define BP_USBC_UOG2_PORTSC1_WKOC      (22)      //!< Bit position for USBC_UOG2_PORTSC1_WKOC.
#define BM_USBC_UOG2_PORTSC1_WKOC      (0x00400000)  //!< Bit mask for USBC_UOG2_PORTSC1_WKOC.

//! @brief Get value of USBC_UOG2_PORTSC1_WKOC from a register value.
#define BG_USBC_UOG2_PORTSC1_WKOC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_WKOC) >> BP_USBC_UOG2_PORTSC1_WKOC)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_WKOC.
#define BF_USBC_UOG2_PORTSC1_WKOC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_WKOC) & BM_USBC_UOG2_PORTSC1_WKOC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKOC field to a new value.
#define BW_USBC_UOG2_PORTSC1_WKOC(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_WKOC) | BF_USBC_UOG2_PORTSC1_WKOC(v)))
#endif

/* --- Register HW_USBC_UOG2_PORTSC1, field PHCD[23] (RW)
 *
 * PHY Low Power Suspend - Clock Disable (PLPSCD) - Read/Write. Default = 0b. When this bit is set
 * to '1b', the PHY clock is disabled. Reading this bit will indicate the status of the PHY clock.
 * The PHY clock cannot be disabled if it is being used as the system clock. In device mode, The PHY
 * can be put into Low Power Suspend when the device is not running (USBCMD Run/Stop=0b) or the host
 * has signaled suspend (PORTSC1 SUSPEND=1b). PHY Low power suspend will be cleared automatically
 * when the host initials resume. Before forcing a resume from the device, the device controller
 * driver must clear this bit. In host mode, the PHY can be put into Low Power Suspend when the
 * downstream device has been put into suspend mode or when no downstream device is connected. Low
 * power suspend is completely under the control of software.
 *
 * Values:
 * 0 - Enable PHY clock
 * 1 - Disable PHY clock
 */

#define BP_USBC_UOG2_PORTSC1_PHCD      (23)      //!< Bit position for USBC_UOG2_PORTSC1_PHCD.
#define BM_USBC_UOG2_PORTSC1_PHCD      (0x00800000)  //!< Bit mask for USBC_UOG2_PORTSC1_PHCD.

//! @brief Get value of USBC_UOG2_PORTSC1_PHCD from a register value.
#define BG_USBC_UOG2_PORTSC1_PHCD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_PHCD) >> BP_USBC_UOG2_PORTSC1_PHCD)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_PHCD.
#define BF_USBC_UOG2_PORTSC1_PHCD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_PHCD) & BM_USBC_UOG2_PORTSC1_PHCD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHCD field to a new value.
#define BW_USBC_UOG2_PORTSC1_PHCD(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_PHCD) | BF_USBC_UOG2_PORTSC1_PHCD(v)))
#endif


/* --- Register HW_USBC_UOG2_PORTSC1, field PFSC[24] (RW)
 *
 * Port Force Full Speed Connect - Read/Write. Default = 0b. When this bit is set to '1b', the port
 * will be forced to only connect at Full Speed, It disables the chirp sequence that allows the port
 * to identify itself as High Speed.
 *
 * Values:
 * 0 - Normal operation
 * 1 - Forced to full speed
 */

#define BP_USBC_UOG2_PORTSC1_PFSC      (24)      //!< Bit position for USBC_UOG2_PORTSC1_PFSC.
#define BM_USBC_UOG2_PORTSC1_PFSC      (0x01000000)  //!< Bit mask for USBC_UOG2_PORTSC1_PFSC.

//! @brief Get value of USBC_UOG2_PORTSC1_PFSC from a register value.
#define BG_USBC_UOG2_PORTSC1_PFSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_PFSC) >> BP_USBC_UOG2_PORTSC1_PFSC)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_PFSC.
#define BF_USBC_UOG2_PORTSC1_PFSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_PFSC) & BM_USBC_UOG2_PORTSC1_PFSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PFSC field to a new value.
#define BW_USBC_UOG2_PORTSC1_PFSC(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_PFSC) | BF_USBC_UOG2_PORTSC1_PFSC(v)))
#endif


/* --- Register HW_USBC_UOG2_PORTSC1, field PTS[25] (RW)
 *
 * See description at bits 31-30
 */

#define BP_USBC_UOG2_PORTSC1_PTS      (25)      //!< Bit position for USBC_UOG2_PORTSC1_PTS.
#define BM_USBC_UOG2_PORTSC1_PTS      (0x02000000)  //!< Bit mask for USBC_UOG2_PORTSC1_PTS.

//! @brief Get value of USBC_UOG2_PORTSC1_PTS from a register value.
#define BG_USBC_UOG2_PORTSC1_PTS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_PTS) >> BP_USBC_UOG2_PORTSC1_PTS)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_PTS.
#define BF_USBC_UOG2_PORTSC1_PTS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_PTS) & BM_USBC_UOG2_PORTSC1_PTS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PTS field to a new value.
#define BW_USBC_UOG2_PORTSC1_PTS(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_PTS) | BF_USBC_UOG2_PORTSC1_PTS(v)))
#endif

/* --- Register HW_USBC_UOG2_PORTSC1, field PSPD[27:26] (RW)
 *
 * Port Speed - Read Only. This register field indicates the speed at which the port is operating.
 *
 * Values:
 * 00 - Full Speed
 * 01 - Low Speed
 * 10 - High Speed
 * 11 - Undefined
 */

#define BP_USBC_UOG2_PORTSC1_PSPD      (26)      //!< Bit position for USBC_UOG2_PORTSC1_PSPD.
#define BM_USBC_UOG2_PORTSC1_PSPD      (0x0c000000)  //!< Bit mask for USBC_UOG2_PORTSC1_PSPD.

//! @brief Get value of USBC_UOG2_PORTSC1_PSPD from a register value.
#define BG_USBC_UOG2_PORTSC1_PSPD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_PSPD) >> BP_USBC_UOG2_PORTSC1_PSPD)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_PSPD.
#define BF_USBC_UOG2_PORTSC1_PSPD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_PSPD) & BM_USBC_UOG2_PORTSC1_PSPD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PSPD field to a new value.
#define BW_USBC_UOG2_PORTSC1_PSPD(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_PSPD) | BF_USBC_UOG2_PORTSC1_PSPD(v)))
#endif


/* --- Register HW_USBC_UOG2_PORTSC1, field PTW[28] (RW)
 *
 * Parallel Transceiver Width This bit has no effect if serial interface engine is used. For
 * OTG1/OTG2/Host1 core, it is Read-Only. Reset value is '1b'.
 *
 * Values:
 * 0 - Select the 8-bit UTMI interface [60MHz]
 * 1 - Select the 16-bit UTMI interface [30MHz]
 */

#define BP_USBC_UOG2_PORTSC1_PTW      (28)      //!< Bit position for USBC_UOG2_PORTSC1_PTW.
#define BM_USBC_UOG2_PORTSC1_PTW      (0x10000000)  //!< Bit mask for USBC_UOG2_PORTSC1_PTW.

//! @brief Get value of USBC_UOG2_PORTSC1_PTW from a register value.
#define BG_USBC_UOG2_PORTSC1_PTW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_PTW) >> BP_USBC_UOG2_PORTSC1_PTW)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_PTW.
#define BF_USBC_UOG2_PORTSC1_PTW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_PTW) & BM_USBC_UOG2_PORTSC1_PTW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PTW field to a new value.
#define BW_USBC_UOG2_PORTSC1_PTW(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_PTW) | BF_USBC_UOG2_PORTSC1_PTW(v)))
#endif


/* --- Register HW_USBC_UOG2_PORTSC1, field STS[29] (RW)
 *
 * Serial Transceiver Select - Read Only Serial Transceiver Select 1 Serial Interface Engine is
 * selected 0 Parallel Interface signals is selected Serial Interface Engine can be used in
 * combination with UTMI+/ULPI physical interface to provide FS/LS signaling instead of the parallel
 * interface signals. When this bit is set '1b', serial interface engine will be used instead of
 * parallel interface signals. This bit has no effect unless PTS bits is set to select UTMI+/ULPI
 * interface. The Serial/USB1.1 PHY/IC-USB will use the serial interface engine for FS/LS signaling
 * regardless of this bit value.
 */

#define BP_USBC_UOG2_PORTSC1_STS      (29)      //!< Bit position for USBC_UOG2_PORTSC1_STS.
#define BM_USBC_UOG2_PORTSC1_STS      (0x20000000)  //!< Bit mask for USBC_UOG2_PORTSC1_STS.

//! @brief Get value of USBC_UOG2_PORTSC1_STS from a register value.
#define BG_USBC_UOG2_PORTSC1_STS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_STS) >> BP_USBC_UOG2_PORTSC1_STS)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_STS.
#define BF_USBC_UOG2_PORTSC1_STS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_STS) & BM_USBC_UOG2_PORTSC1_STS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the STS field to a new value.
#define BW_USBC_UOG2_PORTSC1_STS(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_STS) | BF_USBC_UOG2_PORTSC1_STS(v)))
#endif

/* --- Register HW_USBC_UOG2_PORTSC1, field PTS1[31:30] (RW)
 *
 * Bit field {bit25, bit31, bit30}: "000b" UTMI/UTMI+ "001b" Reserved "010b" ULPI "011b" Serial/USB
 * 1.1 PHY/IC-USB (FS Only) "100b" HSIC All USB port interface modes are listed in this field
 * description, but not all are supported. For detail feature of each controller core, please see .
 * The behaviour is unknown when unsupported interface mode is selected.
 */

#define BP_USBC_UOG2_PORTSC1_PTS1      (30)      //!< Bit position for USBC_UOG2_PORTSC1_PTS1.
#define BM_USBC_UOG2_PORTSC1_PTS1      (0xc0000000)  //!< Bit mask for USBC_UOG2_PORTSC1_PTS1.

//! @brief Get value of USBC_UOG2_PORTSC1_PTS1 from a register value.
#define BG_USBC_UOG2_PORTSC1_PTS1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_PORTSC1_PTS1) >> BP_USBC_UOG2_PORTSC1_PTS1)

//! @brief Format value for bitfield USBC_UOG2_PORTSC1_PTS1.
#define BF_USBC_UOG2_PORTSC1_PTS1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_PORTSC1_PTS1) & BM_USBC_UOG2_PORTSC1_PTS1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PTS1 field to a new value.
#define BW_USBC_UOG2_PORTSC1_PTS1(v)   (HW_USBC_UOG2_PORTSC1_WR((HW_USBC_UOG2_PORTSC1_RD() & ~BM_USBC_UOG2_PORTSC1_PTS1) | BF_USBC_UOG2_PORTSC1_PTS1(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_OTGSC - On-The-Go Status & control
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_OTGSC - On-The-Go Status & control (RW)
 *
 * Reset value: 0x00000120
 *
 * This register is availabe only in OTG controller core. It has four sections:   OTG Interrupt
 * enables (Read/Write)  OTG Interrupt status (Read/Write to Clear)  OTG Status inputs (Read Only)
 * OTG Controls (Read/Write)   The status inputs are debounced using a 1 ms time constant. Values on
 * the status inputs that do not persist for more than 1 ms does not cause an update of the status
 * input register, or cause an OTG interrupt.  See also register.
 */
typedef union _hw_usbc_uog2_otgsc
{
    reg32_t U;
    struct _hw_usbc_uog2_otgsc_bitfields
    {
        unsigned VD : 1; //!< [0] VBUS_Discharge - Read/Write.
        unsigned VC : 1; //!< [1] VBUS Charge - Read/Write.
        unsigned RESERVED0 : 1; //!< [2] Reserved
        unsigned OT : 1; //!< [3] OTG Termination - Read/Write.
        unsigned DP : 1; //!< [4] Data Pulsing - Read/Write.
        unsigned IDPU : 1; //!< [5] ID Pullup - Read/Write This bit provide control over the ID pull-up resister; 0 = off, 1 = on [default].
        unsigned RESERVED1 : 2; //!< [7:6] Reserved
        unsigned ID : 1; //!< [8] USB ID - Read Only.
        unsigned AVV : 1; //!< [9] A VBus Valid - Read Only.
        unsigned ASV : 1; //!< [10] A Session Valid - Read Only.
        unsigned BSV : 1; //!< [11] B Session Valid - Read Only.
        unsigned BSE : 1; //!< [12] B Session End - Read Only.
        unsigned _1MST : 1; //!< [13] 1 millisecond timer toggle - Read Only.
        unsigned DPS : 1; //!< [14] Data Bus Pulsing Status - Read Only.
        unsigned RESERVED2 : 1; //!< [15] Reserved
        unsigned IDIS : 1; //!< [16] USB ID Interrupt Status - Read/Write.
        unsigned AVVIS : 1; //!< [17] A VBus Valid Interrupt Status - Read/Write to Clear.
        unsigned ASVIS : 1; //!< [18] A Session Valid Interrupt Status - Read/Write to Clear.
        unsigned BSVIS : 1; //!< [19] B Session Valid Interrupt Status - Read/Write to Clear.
        unsigned BSEIS : 1; //!< [20] B Session End Interrupt Status - Read/Write to Clear.
        unsigned _1MSS : 1; //!< [21] 1 millisecond timer Interrupt Status - Read/Write to Clear.
        unsigned DPIS : 1; //!< [22] Data Pulse Interrupt Status - Read/Write to Clear.
        unsigned RESERVED3 : 1; //!< [23] Reserved
        unsigned IDIE : 1; //!< [24] USB ID Interrupt Enable - Read/Write.
        unsigned AVVIE : 1; //!< [25] A VBus Valid Interrupt Enable - Read/Write.
        unsigned ASVIE : 1; //!< [26] A Session Valid Interrupt Enable - Read/Write.
        unsigned BSVIE : 1; //!< [27] B Session Valid Interrupt Enable - Read/Write.
        unsigned BSEIE : 1; //!< [28] B Session End Interrupt Enable - Read/Write.
        unsigned _1MSE : 1; //!< [29] 1 millisecond timer Interrupt Enable - Read/Write
        unsigned DPIE : 1; //!< [30] Data Pulse Interrupt Enable
        unsigned RESERVED4 : 1; //!< [31] Reserved
    } B;
} hw_usbc_uog2_otgsc_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_OTGSC register
 */
#define HW_USBC_UOG2_OTGSC_ADDR      (REGS_USBC_BASE + 0x3a4)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_OTGSC           (*(volatile hw_usbc_uog2_otgsc_t *) HW_USBC_UOG2_OTGSC_ADDR)
#define HW_USBC_UOG2_OTGSC_RD()      (HW_USBC_UOG2_OTGSC.U)
#define HW_USBC_UOG2_OTGSC_WR(v)     (HW_USBC_UOG2_OTGSC.U = (v))
#define HW_USBC_UOG2_OTGSC_SET(v)    (HW_USBC_UOG2_OTGSC_WR(HW_USBC_UOG2_OTGSC_RD() |  (v)))
#define HW_USBC_UOG2_OTGSC_CLR(v)    (HW_USBC_UOG2_OTGSC_WR(HW_USBC_UOG2_OTGSC_RD() & ~(v)))
#define HW_USBC_UOG2_OTGSC_TOG(v)    (HW_USBC_UOG2_OTGSC_WR(HW_USBC_UOG2_OTGSC_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_OTGSC bitfields
 */

/* --- Register HW_USBC_UOG2_OTGSC, field VD[0] (RW)
 *
 * VBUS_Discharge - Read/Write. Setting this bit causes VBus to discharge through a resistor.
 */

#define BP_USBC_UOG2_OTGSC_VD      (0)      //!< Bit position for USBC_UOG2_OTGSC_VD.
#define BM_USBC_UOG2_OTGSC_VD      (0x00000001)  //!< Bit mask for USBC_UOG2_OTGSC_VD.

//! @brief Get value of USBC_UOG2_OTGSC_VD from a register value.
#define BG_USBC_UOG2_OTGSC_VD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_VD) >> BP_USBC_UOG2_OTGSC_VD)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_VD.
#define BF_USBC_UOG2_OTGSC_VD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_VD) & BM_USBC_UOG2_OTGSC_VD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the VD field to a new value.
#define BW_USBC_UOG2_OTGSC_VD(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_VD) | BF_USBC_UOG2_OTGSC_VD(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field VC[1] (RW)
 *
 * VBUS Charge - Read/Write. Setting this bit causes the VBus line to be charged. This is used for
 * VBus pulsing during SRP.
 */

#define BP_USBC_UOG2_OTGSC_VC      (1)      //!< Bit position for USBC_UOG2_OTGSC_VC.
#define BM_USBC_UOG2_OTGSC_VC      (0x00000002)  //!< Bit mask for USBC_UOG2_OTGSC_VC.

//! @brief Get value of USBC_UOG2_OTGSC_VC from a register value.
#define BG_USBC_UOG2_OTGSC_VC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_VC) >> BP_USBC_UOG2_OTGSC_VC)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_VC.
#define BF_USBC_UOG2_OTGSC_VC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_VC) & BM_USBC_UOG2_OTGSC_VC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the VC field to a new value.
#define BW_USBC_UOG2_OTGSC_VC(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_VC) | BF_USBC_UOG2_OTGSC_VC(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field OT[3] (RW)
 *
 * OTG Termination - Read/Write. This bit must be set when the OTG device is in device mode, this
 * controls the pulldown on DM.
 */

#define BP_USBC_UOG2_OTGSC_OT      (3)      //!< Bit position for USBC_UOG2_OTGSC_OT.
#define BM_USBC_UOG2_OTGSC_OT      (0x00000008)  //!< Bit mask for USBC_UOG2_OTGSC_OT.

//! @brief Get value of USBC_UOG2_OTGSC_OT from a register value.
#define BG_USBC_UOG2_OTGSC_OT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_OT) >> BP_USBC_UOG2_OTGSC_OT)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_OT.
#define BF_USBC_UOG2_OTGSC_OT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_OT) & BM_USBC_UOG2_OTGSC_OT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OT field to a new value.
#define BW_USBC_UOG2_OTGSC_OT(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_OT) | BF_USBC_UOG2_OTGSC_OT(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field DP[4] (RW)
 *
 * Data Pulsing - Read/Write. Setting this bit causes the pullup on DP to be asserted for data
 * pulsing during SRP.
 */

#define BP_USBC_UOG2_OTGSC_DP      (4)      //!< Bit position for USBC_UOG2_OTGSC_DP.
#define BM_USBC_UOG2_OTGSC_DP      (0x00000010)  //!< Bit mask for USBC_UOG2_OTGSC_DP.

//! @brief Get value of USBC_UOG2_OTGSC_DP from a register value.
#define BG_USBC_UOG2_OTGSC_DP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_DP) >> BP_USBC_UOG2_OTGSC_DP)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_DP.
#define BF_USBC_UOG2_OTGSC_DP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_DP) & BM_USBC_UOG2_OTGSC_DP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DP field to a new value.
#define BW_USBC_UOG2_OTGSC_DP(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_DP) | BF_USBC_UOG2_OTGSC_DP(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field IDPU[5] (RW)
 *
 * ID Pullup - Read/Write This bit provide control over the ID pull-up resister; 0 = off, 1 = on
 * [default]. When this bit is 0, the ID input will not be sampled.
 */

#define BP_USBC_UOG2_OTGSC_IDPU      (5)      //!< Bit position for USBC_UOG2_OTGSC_IDPU.
#define BM_USBC_UOG2_OTGSC_IDPU      (0x00000020)  //!< Bit mask for USBC_UOG2_OTGSC_IDPU.

//! @brief Get value of USBC_UOG2_OTGSC_IDPU from a register value.
#define BG_USBC_UOG2_OTGSC_IDPU(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_IDPU) >> BP_USBC_UOG2_OTGSC_IDPU)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_IDPU.
#define BF_USBC_UOG2_OTGSC_IDPU(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_IDPU) & BM_USBC_UOG2_OTGSC_IDPU)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IDPU field to a new value.
#define BW_USBC_UOG2_OTGSC_IDPU(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_IDPU) | BF_USBC_UOG2_OTGSC_IDPU(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field ID[8] (RO)
 *
 * USB ID - Read Only. 0 = A device, 1 = B device
 */

#define BP_USBC_UOG2_OTGSC_ID      (8)      //!< Bit position for USBC_UOG2_OTGSC_ID.
#define BM_USBC_UOG2_OTGSC_ID      (0x00000100)  //!< Bit mask for USBC_UOG2_OTGSC_ID.

//! @brief Get value of USBC_UOG2_OTGSC_ID from a register value.
#define BG_USBC_UOG2_OTGSC_ID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_ID) >> BP_USBC_UOG2_OTGSC_ID)

/* --- Register HW_USBC_UOG2_OTGSC, field AVV[9] (RO)
 *
 * A VBus Valid - Read Only. Indicates VBus is above the A VBus valid threshold.
 */

#define BP_USBC_UOG2_OTGSC_AVV      (9)      //!< Bit position for USBC_UOG2_OTGSC_AVV.
#define BM_USBC_UOG2_OTGSC_AVV      (0x00000200)  //!< Bit mask for USBC_UOG2_OTGSC_AVV.

//! @brief Get value of USBC_UOG2_OTGSC_AVV from a register value.
#define BG_USBC_UOG2_OTGSC_AVV(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_AVV) >> BP_USBC_UOG2_OTGSC_AVV)

/* --- Register HW_USBC_UOG2_OTGSC, field ASV[10] (RO)
 *
 * A Session Valid - Read Only. Indicates VBus is above the A session valid threshold.
 */

#define BP_USBC_UOG2_OTGSC_ASV      (10)      //!< Bit position for USBC_UOG2_OTGSC_ASV.
#define BM_USBC_UOG2_OTGSC_ASV      (0x00000400)  //!< Bit mask for USBC_UOG2_OTGSC_ASV.

//! @brief Get value of USBC_UOG2_OTGSC_ASV from a register value.
#define BG_USBC_UOG2_OTGSC_ASV(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_ASV) >> BP_USBC_UOG2_OTGSC_ASV)

/* --- Register HW_USBC_UOG2_OTGSC, field BSV[11] (RO)
 *
 * B Session Valid - Read Only. Indicates VBus is above the B session valid threshold.
 */

#define BP_USBC_UOG2_OTGSC_BSV      (11)      //!< Bit position for USBC_UOG2_OTGSC_BSV.
#define BM_USBC_UOG2_OTGSC_BSV      (0x00000800)  //!< Bit mask for USBC_UOG2_OTGSC_BSV.

//! @brief Get value of USBC_UOG2_OTGSC_BSV from a register value.
#define BG_USBC_UOG2_OTGSC_BSV(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_BSV) >> BP_USBC_UOG2_OTGSC_BSV)

/* --- Register HW_USBC_UOG2_OTGSC, field BSE[12] (RO)
 *
 * B Session End - Read Only. Indicates VBus is below the B session end threshold.
 */

#define BP_USBC_UOG2_OTGSC_BSE      (12)      //!< Bit position for USBC_UOG2_OTGSC_BSE.
#define BM_USBC_UOG2_OTGSC_BSE      (0x00001000)  //!< Bit mask for USBC_UOG2_OTGSC_BSE.

//! @brief Get value of USBC_UOG2_OTGSC_BSE from a register value.
#define BG_USBC_UOG2_OTGSC_BSE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_BSE) >> BP_USBC_UOG2_OTGSC_BSE)

/* --- Register HW_USBC_UOG2_OTGSC, field _1MST[13] (RO)
 *
 * 1 millisecond timer toggle - Read Only. This bit toggles once per millisecond.
 */

#define BP_USBC_UOG2_OTGSC__1MST      (13)      //!< Bit position for USBC_UOG2_OTGSC__1MST.
#define BM_USBC_UOG2_OTGSC__1MST      (0x00002000)  //!< Bit mask for USBC_UOG2_OTGSC__1MST.

//! @brief Get value of USBC_UOG2_OTGSC__1MST from a register value.
#define BG_USBC_UOG2_OTGSC__1MST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC__1MST) >> BP_USBC_UOG2_OTGSC__1MST)

/* --- Register HW_USBC_UOG2_OTGSC, field DPS[14] (RO)
 *
 * Data Bus Pulsing Status - Read Only. A '1' indicates data bus pulsing is being detected on the
 * port.
 */

#define BP_USBC_UOG2_OTGSC_DPS      (14)      //!< Bit position for USBC_UOG2_OTGSC_DPS.
#define BM_USBC_UOG2_OTGSC_DPS      (0x00004000)  //!< Bit mask for USBC_UOG2_OTGSC_DPS.

//! @brief Get value of USBC_UOG2_OTGSC_DPS from a register value.
#define BG_USBC_UOG2_OTGSC_DPS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_DPS) >> BP_USBC_UOG2_OTGSC_DPS)

/* --- Register HW_USBC_UOG2_OTGSC, field IDIS[16] (RW)
 *
 * USB ID Interrupt Status - Read/Write. This bit is set when a change on the ID input has been
 * detected. Software must write a one to clear this bit.
 */

#define BP_USBC_UOG2_OTGSC_IDIS      (16)      //!< Bit position for USBC_UOG2_OTGSC_IDIS.
#define BM_USBC_UOG2_OTGSC_IDIS      (0x00010000)  //!< Bit mask for USBC_UOG2_OTGSC_IDIS.

//! @brief Get value of USBC_UOG2_OTGSC_IDIS from a register value.
#define BG_USBC_UOG2_OTGSC_IDIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_IDIS) >> BP_USBC_UOG2_OTGSC_IDIS)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_IDIS.
#define BF_USBC_UOG2_OTGSC_IDIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_IDIS) & BM_USBC_UOG2_OTGSC_IDIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IDIS field to a new value.
#define BW_USBC_UOG2_OTGSC_IDIS(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_IDIS) | BF_USBC_UOG2_OTGSC_IDIS(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field AVVIS[17] (RW)
 *
 * A VBus Valid Interrupt Status - Read/Write to Clear. This bit is set when VBus has either risen
 * above or fallen below the VBus valid threshold (4.4 VDC) on an A device. Software must write a
 * one to clear this bit.
 */

#define BP_USBC_UOG2_OTGSC_AVVIS      (17)      //!< Bit position for USBC_UOG2_OTGSC_AVVIS.
#define BM_USBC_UOG2_OTGSC_AVVIS      (0x00020000)  //!< Bit mask for USBC_UOG2_OTGSC_AVVIS.

//! @brief Get value of USBC_UOG2_OTGSC_AVVIS from a register value.
#define BG_USBC_UOG2_OTGSC_AVVIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_AVVIS) >> BP_USBC_UOG2_OTGSC_AVVIS)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_AVVIS.
#define BF_USBC_UOG2_OTGSC_AVVIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_AVVIS) & BM_USBC_UOG2_OTGSC_AVVIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AVVIS field to a new value.
#define BW_USBC_UOG2_OTGSC_AVVIS(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_AVVIS) | BF_USBC_UOG2_OTGSC_AVVIS(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field ASVIS[18] (RW)
 *
 * A Session Valid Interrupt Status - Read/Write to Clear. This bit is set when VBus has either
 * risen above or fallen below the A session valid threshold (0.8 VDC). Software must write a one to
 * clear this bit.
 */

#define BP_USBC_UOG2_OTGSC_ASVIS      (18)      //!< Bit position for USBC_UOG2_OTGSC_ASVIS.
#define BM_USBC_UOG2_OTGSC_ASVIS      (0x00040000)  //!< Bit mask for USBC_UOG2_OTGSC_ASVIS.

//! @brief Get value of USBC_UOG2_OTGSC_ASVIS from a register value.
#define BG_USBC_UOG2_OTGSC_ASVIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_ASVIS) >> BP_USBC_UOG2_OTGSC_ASVIS)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_ASVIS.
#define BF_USBC_UOG2_OTGSC_ASVIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_ASVIS) & BM_USBC_UOG2_OTGSC_ASVIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASVIS field to a new value.
#define BW_USBC_UOG2_OTGSC_ASVIS(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_ASVIS) | BF_USBC_UOG2_OTGSC_ASVIS(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field BSVIS[19] (RW)
 *
 * B Session Valid Interrupt Status - Read/Write to Clear. This bit is set when VBus has either
 * risen above or fallen below the B session valid threshold (0.8 VDC). Software must write a one to
 * clear this bit.
 */

#define BP_USBC_UOG2_OTGSC_BSVIS      (19)      //!< Bit position for USBC_UOG2_OTGSC_BSVIS.
#define BM_USBC_UOG2_OTGSC_BSVIS      (0x00080000)  //!< Bit mask for USBC_UOG2_OTGSC_BSVIS.

//! @brief Get value of USBC_UOG2_OTGSC_BSVIS from a register value.
#define BG_USBC_UOG2_OTGSC_BSVIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_BSVIS) >> BP_USBC_UOG2_OTGSC_BSVIS)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_BSVIS.
#define BF_USBC_UOG2_OTGSC_BSVIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_BSVIS) & BM_USBC_UOG2_OTGSC_BSVIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BSVIS field to a new value.
#define BW_USBC_UOG2_OTGSC_BSVIS(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_BSVIS) | BF_USBC_UOG2_OTGSC_BSVIS(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field BSEIS[20] (RW)
 *
 * B Session End Interrupt Status - Read/Write to Clear. This bit is set when VBus has fallen below
 * the B session end threshold. Software must write a one to clear this bit
 */

#define BP_USBC_UOG2_OTGSC_BSEIS      (20)      //!< Bit position for USBC_UOG2_OTGSC_BSEIS.
#define BM_USBC_UOG2_OTGSC_BSEIS      (0x00100000)  //!< Bit mask for USBC_UOG2_OTGSC_BSEIS.

//! @brief Get value of USBC_UOG2_OTGSC_BSEIS from a register value.
#define BG_USBC_UOG2_OTGSC_BSEIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_BSEIS) >> BP_USBC_UOG2_OTGSC_BSEIS)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_BSEIS.
#define BF_USBC_UOG2_OTGSC_BSEIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_BSEIS) & BM_USBC_UOG2_OTGSC_BSEIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BSEIS field to a new value.
#define BW_USBC_UOG2_OTGSC_BSEIS(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_BSEIS) | BF_USBC_UOG2_OTGSC_BSEIS(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field _1MSS[21] (RW)
 *
 * 1 millisecond timer Interrupt Status - Read/Write to Clear. This bit is set once every
 * millisecond. Software must write a one to clear this bit.
 */

#define BP_USBC_UOG2_OTGSC__1MSS      (21)      //!< Bit position for USBC_UOG2_OTGSC__1MSS.
#define BM_USBC_UOG2_OTGSC__1MSS      (0x00200000)  //!< Bit mask for USBC_UOG2_OTGSC__1MSS.

//! @brief Get value of USBC_UOG2_OTGSC__1MSS from a register value.
#define BG_USBC_UOG2_OTGSC__1MSS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC__1MSS) >> BP_USBC_UOG2_OTGSC__1MSS)

//! @brief Format value for bitfield USBC_UOG2_OTGSC__1MSS.
#define BF_USBC_UOG2_OTGSC__1MSS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC__1MSS) & BM_USBC_UOG2_OTGSC__1MSS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the _1MSS field to a new value.
#define BW_USBC_UOG2_OTGSC__1MSS(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC__1MSS) | BF_USBC_UOG2_OTGSC__1MSS(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field DPIS[22] (RW)
 *
 * Data Pulse Interrupt Status - Read/Write to Clear. This bit is set when data bus pulsing occurs
 * on DP or DM. Data bus pulsing is only detected when USBMODE.CM = Host (11) and PORTSC1(0)[PP] =
 * 0. Software must write a one to clear this bit.
 */

#define BP_USBC_UOG2_OTGSC_DPIS      (22)      //!< Bit position for USBC_UOG2_OTGSC_DPIS.
#define BM_USBC_UOG2_OTGSC_DPIS      (0x00400000)  //!< Bit mask for USBC_UOG2_OTGSC_DPIS.

//! @brief Get value of USBC_UOG2_OTGSC_DPIS from a register value.
#define BG_USBC_UOG2_OTGSC_DPIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_DPIS) >> BP_USBC_UOG2_OTGSC_DPIS)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_DPIS.
#define BF_USBC_UOG2_OTGSC_DPIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_DPIS) & BM_USBC_UOG2_OTGSC_DPIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPIS field to a new value.
#define BW_USBC_UOG2_OTGSC_DPIS(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_DPIS) | BF_USBC_UOG2_OTGSC_DPIS(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field IDIE[24] (RW)
 *
 * USB ID Interrupt Enable - Read/Write. Setting this bit enables the USB ID interrupt.
 */

#define BP_USBC_UOG2_OTGSC_IDIE      (24)      //!< Bit position for USBC_UOG2_OTGSC_IDIE.
#define BM_USBC_UOG2_OTGSC_IDIE      (0x01000000)  //!< Bit mask for USBC_UOG2_OTGSC_IDIE.

//! @brief Get value of USBC_UOG2_OTGSC_IDIE from a register value.
#define BG_USBC_UOG2_OTGSC_IDIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_IDIE) >> BP_USBC_UOG2_OTGSC_IDIE)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_IDIE.
#define BF_USBC_UOG2_OTGSC_IDIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_IDIE) & BM_USBC_UOG2_OTGSC_IDIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IDIE field to a new value.
#define BW_USBC_UOG2_OTGSC_IDIE(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_IDIE) | BF_USBC_UOG2_OTGSC_IDIE(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field AVVIE[25] (RW)
 *
 * A VBus Valid Interrupt Enable - Read/Write. Setting this bit enables the A VBus valid interrupt.
 */

#define BP_USBC_UOG2_OTGSC_AVVIE      (25)      //!< Bit position for USBC_UOG2_OTGSC_AVVIE.
#define BM_USBC_UOG2_OTGSC_AVVIE      (0x02000000)  //!< Bit mask for USBC_UOG2_OTGSC_AVVIE.

//! @brief Get value of USBC_UOG2_OTGSC_AVVIE from a register value.
#define BG_USBC_UOG2_OTGSC_AVVIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_AVVIE) >> BP_USBC_UOG2_OTGSC_AVVIE)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_AVVIE.
#define BF_USBC_UOG2_OTGSC_AVVIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_AVVIE) & BM_USBC_UOG2_OTGSC_AVVIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AVVIE field to a new value.
#define BW_USBC_UOG2_OTGSC_AVVIE(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_AVVIE) | BF_USBC_UOG2_OTGSC_AVVIE(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field ASVIE[26] (RW)
 *
 * A Session Valid Interrupt Enable - Read/Write. Setting this bit enables the A session valid
 * interrupt.
 */

#define BP_USBC_UOG2_OTGSC_ASVIE      (26)      //!< Bit position for USBC_UOG2_OTGSC_ASVIE.
#define BM_USBC_UOG2_OTGSC_ASVIE      (0x04000000)  //!< Bit mask for USBC_UOG2_OTGSC_ASVIE.

//! @brief Get value of USBC_UOG2_OTGSC_ASVIE from a register value.
#define BG_USBC_UOG2_OTGSC_ASVIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_ASVIE) >> BP_USBC_UOG2_OTGSC_ASVIE)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_ASVIE.
#define BF_USBC_UOG2_OTGSC_ASVIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_ASVIE) & BM_USBC_UOG2_OTGSC_ASVIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASVIE field to a new value.
#define BW_USBC_UOG2_OTGSC_ASVIE(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_ASVIE) | BF_USBC_UOG2_OTGSC_ASVIE(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field BSVIE[27] (RW)
 *
 * B Session Valid Interrupt Enable - Read/Write. Setting this bit enables the B session valid
 * interrupt.
 */

#define BP_USBC_UOG2_OTGSC_BSVIE      (27)      //!< Bit position for USBC_UOG2_OTGSC_BSVIE.
#define BM_USBC_UOG2_OTGSC_BSVIE      (0x08000000)  //!< Bit mask for USBC_UOG2_OTGSC_BSVIE.

//! @brief Get value of USBC_UOG2_OTGSC_BSVIE from a register value.
#define BG_USBC_UOG2_OTGSC_BSVIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_BSVIE) >> BP_USBC_UOG2_OTGSC_BSVIE)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_BSVIE.
#define BF_USBC_UOG2_OTGSC_BSVIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_BSVIE) & BM_USBC_UOG2_OTGSC_BSVIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BSVIE field to a new value.
#define BW_USBC_UOG2_OTGSC_BSVIE(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_BSVIE) | BF_USBC_UOG2_OTGSC_BSVIE(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field BSEIE[28] (RW)
 *
 * B Session End Interrupt Enable - Read/Write. Setting this bit enables the B session end
 * interrupt.
 */

#define BP_USBC_UOG2_OTGSC_BSEIE      (28)      //!< Bit position for USBC_UOG2_OTGSC_BSEIE.
#define BM_USBC_UOG2_OTGSC_BSEIE      (0x10000000)  //!< Bit mask for USBC_UOG2_OTGSC_BSEIE.

//! @brief Get value of USBC_UOG2_OTGSC_BSEIE from a register value.
#define BG_USBC_UOG2_OTGSC_BSEIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_BSEIE) >> BP_USBC_UOG2_OTGSC_BSEIE)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_BSEIE.
#define BF_USBC_UOG2_OTGSC_BSEIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_BSEIE) & BM_USBC_UOG2_OTGSC_BSEIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BSEIE field to a new value.
#define BW_USBC_UOG2_OTGSC_BSEIE(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_BSEIE) | BF_USBC_UOG2_OTGSC_BSEIE(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field _1MSE[29] (RW)
 *
 * 1 millisecond timer Interrupt Enable - Read/Write
 */

#define BP_USBC_UOG2_OTGSC__1MSE      (29)      //!< Bit position for USBC_UOG2_OTGSC__1MSE.
#define BM_USBC_UOG2_OTGSC__1MSE      (0x20000000)  //!< Bit mask for USBC_UOG2_OTGSC__1MSE.

//! @brief Get value of USBC_UOG2_OTGSC__1MSE from a register value.
#define BG_USBC_UOG2_OTGSC__1MSE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC__1MSE) >> BP_USBC_UOG2_OTGSC__1MSE)

//! @brief Format value for bitfield USBC_UOG2_OTGSC__1MSE.
#define BF_USBC_UOG2_OTGSC__1MSE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC__1MSE) & BM_USBC_UOG2_OTGSC__1MSE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the _1MSE field to a new value.
#define BW_USBC_UOG2_OTGSC__1MSE(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC__1MSE) | BF_USBC_UOG2_OTGSC__1MSE(v)))
#endif

/* --- Register HW_USBC_UOG2_OTGSC, field DPIE[30] (RW)
 *
 * Data Pulse Interrupt Enable
 */

#define BP_USBC_UOG2_OTGSC_DPIE      (30)      //!< Bit position for USBC_UOG2_OTGSC_DPIE.
#define BM_USBC_UOG2_OTGSC_DPIE      (0x40000000)  //!< Bit mask for USBC_UOG2_OTGSC_DPIE.

//! @brief Get value of USBC_UOG2_OTGSC_DPIE from a register value.
#define BG_USBC_UOG2_OTGSC_DPIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_OTGSC_DPIE) >> BP_USBC_UOG2_OTGSC_DPIE)

//! @brief Format value for bitfield USBC_UOG2_OTGSC_DPIE.
#define BF_USBC_UOG2_OTGSC_DPIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_OTGSC_DPIE) & BM_USBC_UOG2_OTGSC_DPIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the DPIE field to a new value.
#define BW_USBC_UOG2_OTGSC_DPIE(v)   (HW_USBC_UOG2_OTGSC_WR((HW_USBC_UOG2_OTGSC_RD() & ~BM_USBC_UOG2_OTGSC_DPIE) | BF_USBC_UOG2_OTGSC_DPIE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_USBMODE - USB Device Mode
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_USBMODE - USB Device Mode (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_usbc_uog2_usbmode
{
    reg32_t U;
    struct _hw_usbc_uog2_usbmode_bitfields
    {
        unsigned CM : 2; //!< [1:0] Controller Mode - R/WO.
        unsigned ES : 1; //!< [2] Endian Select - Read/Write.
        unsigned SLOM : 1; //!< [3] Setup Lockout Mode.
        unsigned SDIS : 1; //!< [4] Stream Disable Mode.
        unsigned RESERVED0 : 11; //!< [15:5] Reserved.
        unsigned RESERVED1 : 16; //!< [31:16] Reserved
    } B;
} hw_usbc_uog2_usbmode_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_USBMODE register
 */
#define HW_USBC_UOG2_USBMODE_ADDR      (REGS_USBC_BASE + 0x3a8)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_USBMODE           (*(volatile hw_usbc_uog2_usbmode_t *) HW_USBC_UOG2_USBMODE_ADDR)
#define HW_USBC_UOG2_USBMODE_RD()      (HW_USBC_UOG2_USBMODE.U)
#define HW_USBC_UOG2_USBMODE_WR(v)     (HW_USBC_UOG2_USBMODE.U = (v))
#define HW_USBC_UOG2_USBMODE_SET(v)    (HW_USBC_UOG2_USBMODE_WR(HW_USBC_UOG2_USBMODE_RD() |  (v)))
#define HW_USBC_UOG2_USBMODE_CLR(v)    (HW_USBC_UOG2_USBMODE_WR(HW_USBC_UOG2_USBMODE_RD() & ~(v)))
#define HW_USBC_UOG2_USBMODE_TOG(v)    (HW_USBC_UOG2_USBMODE_WR(HW_USBC_UOG2_USBMODE_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_USBMODE bitfields
 */

/* --- Register HW_USBC_UOG2_USBMODE, field CM[1:0] (RW)
 *
 * Controller Mode - R/WO. Controller mode is defaulted to the proper mode for host only and device
 * only implementations. For those designs that contain both host & device capability, the
 * controller defaults to an idle state and needs to be initialized to the desired operating mode
 * after reset. For combination host/device controllers, this register can only be written once
 * after reset. If it is necessary to switch modes, software must reset the controller by writing to
 * the RESET bit in the USBCMD register before reprogramming this register. For OTG controller core,
 * reset value is '00b'. For Host-only controller core, reset value is '11b'.
 *
 * Values:
 * 00 - Idle [Default for combination host/device]
 * 01 - Reserved
 * 10 - Device Controller [Default for device only controller]
 * 11 - Host Controller [Default for host only controller]
 */

#define BP_USBC_UOG2_USBMODE_CM      (0)      //!< Bit position for USBC_UOG2_USBMODE_CM.
#define BM_USBC_UOG2_USBMODE_CM      (0x00000003)  //!< Bit mask for USBC_UOG2_USBMODE_CM.

//! @brief Get value of USBC_UOG2_USBMODE_CM from a register value.
#define BG_USBC_UOG2_USBMODE_CM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBMODE_CM) >> BP_USBC_UOG2_USBMODE_CM)

//! @brief Format value for bitfield USBC_UOG2_USBMODE_CM.
#define BF_USBC_UOG2_USBMODE_CM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBMODE_CM) & BM_USBC_UOG2_USBMODE_CM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CM field to a new value.
#define BW_USBC_UOG2_USBMODE_CM(v)   (HW_USBC_UOG2_USBMODE_WR((HW_USBC_UOG2_USBMODE_RD() & ~BM_USBC_UOG2_USBMODE_CM) | BF_USBC_UOG2_USBMODE_CM(v)))
#endif


/* --- Register HW_USBC_UOG2_USBMODE, field ES[2] (RW)
 *
 * Endian Select - Read/Write. This bit can change the byte alignment of the transfer buffers to
 * match the host microprocessor. The bit fields in the microprocessor interface and the data
 * structures are unaffected by the value of this bit because they are based upon the 32-bit word.
 * Bit Meaning
 *
 * Values:
 * 0 - Little Endian [Default]
 * 1 - Big Endian
 */

#define BP_USBC_UOG2_USBMODE_ES      (2)      //!< Bit position for USBC_UOG2_USBMODE_ES.
#define BM_USBC_UOG2_USBMODE_ES      (0x00000004)  //!< Bit mask for USBC_UOG2_USBMODE_ES.

//! @brief Get value of USBC_UOG2_USBMODE_ES from a register value.
#define BG_USBC_UOG2_USBMODE_ES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBMODE_ES) >> BP_USBC_UOG2_USBMODE_ES)

//! @brief Format value for bitfield USBC_UOG2_USBMODE_ES.
#define BF_USBC_UOG2_USBMODE_ES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBMODE_ES) & BM_USBC_UOG2_USBMODE_ES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ES field to a new value.
#define BW_USBC_UOG2_USBMODE_ES(v)   (HW_USBC_UOG2_USBMODE_WR((HW_USBC_UOG2_USBMODE_RD() & ~BM_USBC_UOG2_USBMODE_ES) | BF_USBC_UOG2_USBMODE_ES(v)))
#endif


/* --- Register HW_USBC_UOG2_USBMODE, field SLOM[3] (RW)
 *
 * Setup Lockout Mode. In device mode, this bit controls behavior of the setup lock mechanism. See .
 *
 * Values:
 * 0 - Setup Lockouts On (default);
 * 1 - Setup Lockouts Off (DCD requires use of Setup Data Buffer Tripwire in .
 */

#define BP_USBC_UOG2_USBMODE_SLOM      (3)      //!< Bit position for USBC_UOG2_USBMODE_SLOM.
#define BM_USBC_UOG2_USBMODE_SLOM      (0x00000008)  //!< Bit mask for USBC_UOG2_USBMODE_SLOM.

//! @brief Get value of USBC_UOG2_USBMODE_SLOM from a register value.
#define BG_USBC_UOG2_USBMODE_SLOM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBMODE_SLOM) >> BP_USBC_UOG2_USBMODE_SLOM)

//! @brief Format value for bitfield USBC_UOG2_USBMODE_SLOM.
#define BF_USBC_UOG2_USBMODE_SLOM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBMODE_SLOM) & BM_USBC_UOG2_USBMODE_SLOM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SLOM field to a new value.
#define BW_USBC_UOG2_USBMODE_SLOM(v)   (HW_USBC_UOG2_USBMODE_WR((HW_USBC_UOG2_USBMODE_RD() & ~BM_USBC_UOG2_USBMODE_SLOM) | BF_USBC_UOG2_USBMODE_SLOM(v)))
#endif


/* --- Register HW_USBC_UOG2_USBMODE, field SDIS[4] (RW)
 *
 * Stream Disable Mode. (0 - Inactive [default]; 1 - Active) Device Mode: Setting to a '1' disables
 * double priming on both RX and TX for low bandwidth systems. This mode ensures that when the RX
 * and TX buffers are sufficient to contain an entire packet that the standard double buffering
 * scheme is disabled to prevent overruns/underruns in bandwidth limited systems. Note: In High
 * Speed Mode, all packets received are responded to with a NYET handshake when stream disable is
 * active. Host Mode: Setting to a '1' ensures that overruns/underruns of the latency FIFO are
 * eliminated for low bandwidth systems where the RX and TX buffers are sufficient to contain the
 * entire packet. Enabling stream disable also has the effect of ensuring the TX latency is filled
 * to capacity before the packet is launched onto the USB. Time duration to pre-fill the FIFO
 * becomes significant when stream disable is active. See and TXTTFILLTUNING [MPH Only] to
 * characterize the adjustments needed for the scheduler when using this feature. The use of this
 * feature substantially limits of the overall USB performance that can be achieved.
 */

#define BP_USBC_UOG2_USBMODE_SDIS      (4)      //!< Bit position for USBC_UOG2_USBMODE_SDIS.
#define BM_USBC_UOG2_USBMODE_SDIS      (0x00000010)  //!< Bit mask for USBC_UOG2_USBMODE_SDIS.

//! @brief Get value of USBC_UOG2_USBMODE_SDIS from a register value.
#define BG_USBC_UOG2_USBMODE_SDIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_USBMODE_SDIS) >> BP_USBC_UOG2_USBMODE_SDIS)

//! @brief Format value for bitfield USBC_UOG2_USBMODE_SDIS.
#define BF_USBC_UOG2_USBMODE_SDIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_USBMODE_SDIS) & BM_USBC_UOG2_USBMODE_SDIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SDIS field to a new value.
#define BW_USBC_UOG2_USBMODE_SDIS(v)   (HW_USBC_UOG2_USBMODE_WR((HW_USBC_UOG2_USBMODE_RD() & ~BM_USBC_UOG2_USBMODE_SDIS) | BF_USBC_UOG2_USBMODE_SDIS(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ENDPTSETUPSTAT - Endpoint Setup Status
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ENDPTSETUPSTAT - Endpoint Setup Status (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_usbc_uog2_endptsetupstat
{
    reg32_t U;
    struct _hw_usbc_uog2_endptsetupstat_bitfields
    {
        unsigned ENDPTSETUPSTAT : 16; //!< [15:0] Setup Endpoint Status.
        unsigned RESERVED0 : 16; //!< [31:16] Reserved
    } B;
} hw_usbc_uog2_endptsetupstat_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ENDPTSETUPSTAT register
 */
#define HW_USBC_UOG2_ENDPTSETUPSTAT_ADDR      (REGS_USBC_BASE + 0x3ac)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ENDPTSETUPSTAT           (*(volatile hw_usbc_uog2_endptsetupstat_t *) HW_USBC_UOG2_ENDPTSETUPSTAT_ADDR)
#define HW_USBC_UOG2_ENDPTSETUPSTAT_RD()      (HW_USBC_UOG2_ENDPTSETUPSTAT.U)
#define HW_USBC_UOG2_ENDPTSETUPSTAT_WR(v)     (HW_USBC_UOG2_ENDPTSETUPSTAT.U = (v))
#define HW_USBC_UOG2_ENDPTSETUPSTAT_SET(v)    (HW_USBC_UOG2_ENDPTSETUPSTAT_WR(HW_USBC_UOG2_ENDPTSETUPSTAT_RD() |  (v)))
#define HW_USBC_UOG2_ENDPTSETUPSTAT_CLR(v)    (HW_USBC_UOG2_ENDPTSETUPSTAT_WR(HW_USBC_UOG2_ENDPTSETUPSTAT_RD() & ~(v)))
#define HW_USBC_UOG2_ENDPTSETUPSTAT_TOG(v)    (HW_USBC_UOG2_ENDPTSETUPSTAT_WR(HW_USBC_UOG2_ENDPTSETUPSTAT_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_ENDPTSETUPSTAT bitfields
 */

/* --- Register HW_USBC_UOG2_ENDPTSETUPSTAT, field ENDPTSETUPSTAT[15:0] (RW)
 *
 * Setup Endpoint Status. For every setup transaction that is received, a corresponding bit in this
 * register is set to one. Software must clear or acknowledge the setup transfer by writing a one to
 * a respective bit after it has read the setup data from Queue head. The response to a setup packet
 * as in the order of operations and total response time is crucial to limit bus time outs while the
 * setup lock our mechanism is engaged. See in the Device Operational Model. This register is only
 * used in device mode.
 */

#define BP_USBC_UOG2_ENDPTSETUPSTAT_ENDPTSETUPSTAT      (0)      //!< Bit position for USBC_UOG2_ENDPTSETUPSTAT_ENDPTSETUPSTAT.
#define BM_USBC_UOG2_ENDPTSETUPSTAT_ENDPTSETUPSTAT      (0x0000ffff)  //!< Bit mask for USBC_UOG2_ENDPTSETUPSTAT_ENDPTSETUPSTAT.

//! @brief Get value of USBC_UOG2_ENDPTSETUPSTAT_ENDPTSETUPSTAT from a register value.
#define BG_USBC_UOG2_ENDPTSETUPSTAT_ENDPTSETUPSTAT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTSETUPSTAT_ENDPTSETUPSTAT) >> BP_USBC_UOG2_ENDPTSETUPSTAT_ENDPTSETUPSTAT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTSETUPSTAT_ENDPTSETUPSTAT.
#define BF_USBC_UOG2_ENDPTSETUPSTAT_ENDPTSETUPSTAT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTSETUPSTAT_ENDPTSETUPSTAT) & BM_USBC_UOG2_ENDPTSETUPSTAT_ENDPTSETUPSTAT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ENDPTSETUPSTAT field to a new value.
#define BW_USBC_UOG2_ENDPTSETUPSTAT_ENDPTSETUPSTAT(v)   (HW_USBC_UOG2_ENDPTSETUPSTAT_WR((HW_USBC_UOG2_ENDPTSETUPSTAT_RD() & ~BM_USBC_UOG2_ENDPTSETUPSTAT_ENDPTSETUPSTAT) | BF_USBC_UOG2_ENDPTSETUPSTAT_ENDPTSETUPSTAT(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ENDPTPRIME - Endpoint Prime
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ENDPTPRIME - Endpoint Prime (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is only used in device mode.  When software sets the prime bit for a given
 * endpoint, the device controller loads the transfer descriptor, pointed to by the queue head, such
 * that the endpoint is ready to transmit or receive when the host sends a request (IN/OUT token).
 * The endpoint will NAK all requests from the host until the endpoint is primed. The controller
 * will automatically re-prime the endpoint with a new transfer descriptor when one is found via the
 * next_dtd pointer of the current transfer descriptor. Hence, the prime bit must only be set by
 * software when a descriptor is added to the queue head.
 */
typedef union _hw_usbc_uog2_endptprime
{
    reg32_t U;
    struct _hw_usbc_uog2_endptprime_bitfields
    {
        unsigned PERB : 8; //!< [7:0] Prime Endpoint Receive Buffer - R/WS.
        unsigned RESERVED0 : 8; //!< [15:8] Reserved
        unsigned PETB : 8; //!< [23:16] Prime Endpoint Transmit Buffer - R/WS.
        unsigned RESERVED1 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_endptprime_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ENDPTPRIME register
 */
#define HW_USBC_UOG2_ENDPTPRIME_ADDR      (REGS_USBC_BASE + 0x3b0)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ENDPTPRIME           (*(volatile hw_usbc_uog2_endptprime_t *) HW_USBC_UOG2_ENDPTPRIME_ADDR)
#define HW_USBC_UOG2_ENDPTPRIME_RD()      (HW_USBC_UOG2_ENDPTPRIME.U)
#define HW_USBC_UOG2_ENDPTPRIME_WR(v)     (HW_USBC_UOG2_ENDPTPRIME.U = (v))
#define HW_USBC_UOG2_ENDPTPRIME_SET(v)    (HW_USBC_UOG2_ENDPTPRIME_WR(HW_USBC_UOG2_ENDPTPRIME_RD() |  (v)))
#define HW_USBC_UOG2_ENDPTPRIME_CLR(v)    (HW_USBC_UOG2_ENDPTPRIME_WR(HW_USBC_UOG2_ENDPTPRIME_RD() & ~(v)))
#define HW_USBC_UOG2_ENDPTPRIME_TOG(v)    (HW_USBC_UOG2_ENDPTPRIME_WR(HW_USBC_UOG2_ENDPTPRIME_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_ENDPTPRIME bitfields
 */

/* --- Register HW_USBC_UOG2_ENDPTPRIME, field PERB[7:0] (RW)
 *
 * Prime Endpoint Receive Buffer - R/WS. For each endpoint, a corresponding bit is used to request a
 * buffer prepare for a receive operation for when a USB host initiates a USB OUT transaction.
 * Software should write a one to the corresponding bit whenever posting a new transfer descriptor
 * to an endpoint queue head. Hardware automatically uses this bit to begin parsing for a new
 * transfer descriptor from the queue head and prepare a receive buffer. Hardware clears this bit
 * when the associated endpoint(s) is (are) successfully primed. These bits are momentarily set by
 * hardware during hardware re-priming operations when a dTD is retired, and the dQH is updated.
 * PERB[N] - Endpoint #N, N is in 0..7
 */

#define BP_USBC_UOG2_ENDPTPRIME_PERB      (0)      //!< Bit position for USBC_UOG2_ENDPTPRIME_PERB.
#define BM_USBC_UOG2_ENDPTPRIME_PERB      (0x000000ff)  //!< Bit mask for USBC_UOG2_ENDPTPRIME_PERB.

//! @brief Get value of USBC_UOG2_ENDPTPRIME_PERB from a register value.
#define BG_USBC_UOG2_ENDPTPRIME_PERB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTPRIME_PERB) >> BP_USBC_UOG2_ENDPTPRIME_PERB)

//! @brief Format value for bitfield USBC_UOG2_ENDPTPRIME_PERB.
#define BF_USBC_UOG2_ENDPTPRIME_PERB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTPRIME_PERB) & BM_USBC_UOG2_ENDPTPRIME_PERB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PERB field to a new value.
#define BW_USBC_UOG2_ENDPTPRIME_PERB(v)   (HW_USBC_UOG2_ENDPTPRIME_WR((HW_USBC_UOG2_ENDPTPRIME_RD() & ~BM_USBC_UOG2_ENDPTPRIME_PERB) | BF_USBC_UOG2_ENDPTPRIME_PERB(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTPRIME, field PETB[23:16] (RW)
 *
 * Prime Endpoint Transmit Buffer - R/WS. For each endpoint a corresponding bit is used to request
 * that a buffer is prepared for a transmit operation in order to respond to a USB IN/INTERRUPT
 * transaction. Software should write a one to the corresponding bit when posting a new transfer
 * descriptor to an endpoint queue head. Hardware automatically uses this bit to begin parsing for a
 * new transfer descriptor from the queue head and prepare a transmit buffer. Hardware clears this
 * bit when the associated endpoint(s) is (are) successfully primed. These bits are momentarily set
 * by hardware during hardware re-priming operations when a dTD is retired, and the dQH is updated.
 * PETB[N] - Endpoint #N, N is in 0..7
 */

#define BP_USBC_UOG2_ENDPTPRIME_PETB      (16)      //!< Bit position for USBC_UOG2_ENDPTPRIME_PETB.
#define BM_USBC_UOG2_ENDPTPRIME_PETB      (0x00ff0000)  //!< Bit mask for USBC_UOG2_ENDPTPRIME_PETB.

//! @brief Get value of USBC_UOG2_ENDPTPRIME_PETB from a register value.
#define BG_USBC_UOG2_ENDPTPRIME_PETB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTPRIME_PETB) >> BP_USBC_UOG2_ENDPTPRIME_PETB)

//! @brief Format value for bitfield USBC_UOG2_ENDPTPRIME_PETB.
#define BF_USBC_UOG2_ENDPTPRIME_PETB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTPRIME_PETB) & BM_USBC_UOG2_ENDPTPRIME_PETB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PETB field to a new value.
#define BW_USBC_UOG2_ENDPTPRIME_PETB(v)   (HW_USBC_UOG2_ENDPTPRIME_WR((HW_USBC_UOG2_ENDPTPRIME_RD() & ~BM_USBC_UOG2_ENDPTPRIME_PETB) | BF_USBC_UOG2_ENDPTPRIME_PETB(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ENDPTFLUSH - Endpoint Flush
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ENDPTFLUSH - Endpoint Flush (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is only used in device mode.
 */
typedef union _hw_usbc_uog2_endptflush
{
    reg32_t U;
    struct _hw_usbc_uog2_endptflush_bitfields
    {
        unsigned FERB : 8; //!< [7:0] Flush Endpoint Receive Buffer - R/WS.
        unsigned RESERVED0 : 8; //!< [15:8] Reserved
        unsigned FETB : 8; //!< [23:16] Flush Endpoint Transmit Buffer - R/WS.
        unsigned RESERVED1 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_endptflush_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ENDPTFLUSH register
 */
#define HW_USBC_UOG2_ENDPTFLUSH_ADDR      (REGS_USBC_BASE + 0x3b4)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ENDPTFLUSH           (*(volatile hw_usbc_uog2_endptflush_t *) HW_USBC_UOG2_ENDPTFLUSH_ADDR)
#define HW_USBC_UOG2_ENDPTFLUSH_RD()      (HW_USBC_UOG2_ENDPTFLUSH.U)
#define HW_USBC_UOG2_ENDPTFLUSH_WR(v)     (HW_USBC_UOG2_ENDPTFLUSH.U = (v))
#define HW_USBC_UOG2_ENDPTFLUSH_SET(v)    (HW_USBC_UOG2_ENDPTFLUSH_WR(HW_USBC_UOG2_ENDPTFLUSH_RD() |  (v)))
#define HW_USBC_UOG2_ENDPTFLUSH_CLR(v)    (HW_USBC_UOG2_ENDPTFLUSH_WR(HW_USBC_UOG2_ENDPTFLUSH_RD() & ~(v)))
#define HW_USBC_UOG2_ENDPTFLUSH_TOG(v)    (HW_USBC_UOG2_ENDPTFLUSH_WR(HW_USBC_UOG2_ENDPTFLUSH_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_ENDPTFLUSH bitfields
 */

/* --- Register HW_USBC_UOG2_ENDPTFLUSH, field FERB[7:0] (RW)
 *
 * Flush Endpoint Receive Buffer - R/WS. Writing one to a bit(s) causes the assocUOGiated
 * endpoint(s) to clear any primed buffers. If a packet is in progress for one of the associated
 * endpoints, then that transfer continues until completion. Hardware clears this register after the
 * endpoint flush operation is successful. FERB[N] - Endpoint #N, N is in 0..7
 */

#define BP_USBC_UOG2_ENDPTFLUSH_FERB      (0)      //!< Bit position for USBC_UOG2_ENDPTFLUSH_FERB.
#define BM_USBC_UOG2_ENDPTFLUSH_FERB      (0x000000ff)  //!< Bit mask for USBC_UOG2_ENDPTFLUSH_FERB.

//! @brief Get value of USBC_UOG2_ENDPTFLUSH_FERB from a register value.
#define BG_USBC_UOG2_ENDPTFLUSH_FERB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTFLUSH_FERB) >> BP_USBC_UOG2_ENDPTFLUSH_FERB)

//! @brief Format value for bitfield USBC_UOG2_ENDPTFLUSH_FERB.
#define BF_USBC_UOG2_ENDPTFLUSH_FERB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTFLUSH_FERB) & BM_USBC_UOG2_ENDPTFLUSH_FERB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FERB field to a new value.
#define BW_USBC_UOG2_ENDPTFLUSH_FERB(v)   (HW_USBC_UOG2_ENDPTFLUSH_WR((HW_USBC_UOG2_ENDPTFLUSH_RD() & ~BM_USBC_UOG2_ENDPTFLUSH_FERB) | BF_USBC_UOG2_ENDPTFLUSH_FERB(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTFLUSH, field FETB[23:16] (RW)
 *
 * Flush Endpoint Transmit Buffer - R/WS. Writing one to a bit(s) in this register causes the
 * associated endpoint(s) to clear any primed buffers. If a packet is in progress for one of the
 * associated endpoints, then that transfer continues until completion. Hardware clears this
 * register after the endpoint flush operation is successful. FETB[N] - Endpoint #N, N is in 0..7
 */

#define BP_USBC_UOG2_ENDPTFLUSH_FETB      (16)      //!< Bit position for USBC_UOG2_ENDPTFLUSH_FETB.
#define BM_USBC_UOG2_ENDPTFLUSH_FETB      (0x00ff0000)  //!< Bit mask for USBC_UOG2_ENDPTFLUSH_FETB.

//! @brief Get value of USBC_UOG2_ENDPTFLUSH_FETB from a register value.
#define BG_USBC_UOG2_ENDPTFLUSH_FETB(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTFLUSH_FETB) >> BP_USBC_UOG2_ENDPTFLUSH_FETB)

//! @brief Format value for bitfield USBC_UOG2_ENDPTFLUSH_FETB.
#define BF_USBC_UOG2_ENDPTFLUSH_FETB(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTFLUSH_FETB) & BM_USBC_UOG2_ENDPTFLUSH_FETB)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FETB field to a new value.
#define BW_USBC_UOG2_ENDPTFLUSH_FETB(v)   (HW_USBC_UOG2_ENDPTFLUSH_WR((HW_USBC_UOG2_ENDPTFLUSH_RD() & ~BM_USBC_UOG2_ENDPTFLUSH_FETB) | BF_USBC_UOG2_ENDPTFLUSH_FETB(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ENDPTSTAT - Endpoint Status
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ENDPTSTAT - Endpoint Status (RO)
 *
 * Reset value: 0x00000000
 *
 * This register is only used in device mode.
 */
typedef union _hw_usbc_uog2_endptstat
{
    reg32_t U;
    struct _hw_usbc_uog2_endptstat_bitfields
    {
        unsigned ERBR : 8; //!< [7:0] Endpoint Receive Buffer Ready -- Read Only.
        unsigned RESERVED0 : 8; //!< [15:8] Reserved
        unsigned ETBR : 8; //!< [23:16] Endpoint Transmit Buffer Ready -- Read Only.
        unsigned RESERVED1 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_endptstat_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ENDPTSTAT register
 */
#define HW_USBC_UOG2_ENDPTSTAT_ADDR      (REGS_USBC_BASE + 0x3b8)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ENDPTSTAT           (*(volatile hw_usbc_uog2_endptstat_t *) HW_USBC_UOG2_ENDPTSTAT_ADDR)
#define HW_USBC_UOG2_ENDPTSTAT_RD()      (HW_USBC_UOG2_ENDPTSTAT.U)
#endif

/*
 * constants & macros for individual USBC_UOG2_ENDPTSTAT bitfields
 */

/* --- Register HW_USBC_UOG2_ENDPTSTAT, field ERBR[7:0] (RO)
 *
 * Endpoint Receive Buffer Ready -- Read Only. One bit for each endpoint indicates status of the
 * respective endpoint buffer. This bit is set to a one by the hardware as a response to receiving a
 * command from a corresponding bit in the ENDPRIME register. There is always a delay between
 * setting a bit in the ENDPRIME register and endpoint indicating ready. This delay time varies
 * based upon the current USB traffic and the number of bits set in the ENDPRIME register. Buffer
 * ready is cleared by USB reset, by the USB DMA system, or through the ENDPTFLUSH register. These
 * bits are momentarily cleared by hardware during hardware endpoint re-priming operations when a
 * dTD is retired, and the dQH is updated. ERBR[N] - Endpoint #N, N is in 0..7
 */

#define BP_USBC_UOG2_ENDPTSTAT_ERBR      (0)      //!< Bit position for USBC_UOG2_ENDPTSTAT_ERBR.
#define BM_USBC_UOG2_ENDPTSTAT_ERBR      (0x000000ff)  //!< Bit mask for USBC_UOG2_ENDPTSTAT_ERBR.

//! @brief Get value of USBC_UOG2_ENDPTSTAT_ERBR from a register value.
#define BG_USBC_UOG2_ENDPTSTAT_ERBR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTSTAT_ERBR) >> BP_USBC_UOG2_ENDPTSTAT_ERBR)

/* --- Register HW_USBC_UOG2_ENDPTSTAT, field ETBR[23:16] (RO)
 *
 * Endpoint Transmit Buffer Ready -- Read Only. One bit for each endpoint indicates status of the
 * respective endpoint buffer. This bit is set to one by the hardware as a response to receiving a
 * command from a corresponding bit in the ENDPTPRIME register. There is always a delay between
 * setting a bit in the ENDPTPRIME register and endpoint indicating ready. This delay time varies
 * based upon the current USB traffic and the number of bits set in the ENDPRIME register. Buffer
 * ready is cleared by USB reset, by the USB DMA system, or through the ENDPTFLUSH register. These
 * bits are momentarily cleared by hardware during hardware endpoint re-priming operations when a
 * dTD is retired, and the dQH is updated. ETBR[N] - Endpoint #N, N is in 0..7
 */

#define BP_USBC_UOG2_ENDPTSTAT_ETBR      (16)      //!< Bit position for USBC_UOG2_ENDPTSTAT_ETBR.
#define BM_USBC_UOG2_ENDPTSTAT_ETBR      (0x00ff0000)  //!< Bit mask for USBC_UOG2_ENDPTSTAT_ETBR.

//! @brief Get value of USBC_UOG2_ENDPTSTAT_ETBR from a register value.
#define BG_USBC_UOG2_ENDPTSTAT_ETBR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTSTAT_ETBR) >> BP_USBC_UOG2_ENDPTSTAT_ETBR)

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ENDPTCOMPLETE - Endpoint Complete
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ENDPTCOMPLETE - Endpoint Complete (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is only used in device mode.
 */
typedef union _hw_usbc_uog2_endptcomplete
{
    reg32_t U;
    struct _hw_usbc_uog2_endptcomplete_bitfields
    {
        unsigned ERCE : 8; //!< [7:0] Endpoint Receive Complete Event - RW/C.
        unsigned RESERVED0 : 8; //!< [15:8] Reserved
        unsigned ETCE : 8; //!< [23:16] Endpoint Transmit Complete Event - R/WC.
        unsigned RESERVED1 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_endptcomplete_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ENDPTCOMPLETE register
 */
#define HW_USBC_UOG2_ENDPTCOMPLETE_ADDR      (REGS_USBC_BASE + 0x3bc)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ENDPTCOMPLETE           (*(volatile hw_usbc_uog2_endptcomplete_t *) HW_USBC_UOG2_ENDPTCOMPLETE_ADDR)
#define HW_USBC_UOG2_ENDPTCOMPLETE_RD()      (HW_USBC_UOG2_ENDPTCOMPLETE.U)
#define HW_USBC_UOG2_ENDPTCOMPLETE_WR(v)     (HW_USBC_UOG2_ENDPTCOMPLETE.U = (v))
#define HW_USBC_UOG2_ENDPTCOMPLETE_SET(v)    (HW_USBC_UOG2_ENDPTCOMPLETE_WR(HW_USBC_UOG2_ENDPTCOMPLETE_RD() |  (v)))
#define HW_USBC_UOG2_ENDPTCOMPLETE_CLR(v)    (HW_USBC_UOG2_ENDPTCOMPLETE_WR(HW_USBC_UOG2_ENDPTCOMPLETE_RD() & ~(v)))
#define HW_USBC_UOG2_ENDPTCOMPLETE_TOG(v)    (HW_USBC_UOG2_ENDPTCOMPLETE_WR(HW_USBC_UOG2_ENDPTCOMPLETE_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_ENDPTCOMPLETE bitfields
 */

/* --- Register HW_USBC_UOG2_ENDPTCOMPLETE, field ERCE[7:0] (RW)
 *
 * Endpoint Receive Complete Event - RW/C. Each bit indicates a received event (OUT/SETUP) occurred
 * and software should read the corresponding endpoint queue to determine the transfer status. If
 * the corresponding IOC bit is set in the Transfer Descriptor, then this bit is set simultaneously
 * with the USBINT . Writing one clears the corresponding bit in this register. ERCE[N] - Endpoint
 * #N, N is in 0..7
 */

#define BP_USBC_UOG2_ENDPTCOMPLETE_ERCE      (0)      //!< Bit position for USBC_UOG2_ENDPTCOMPLETE_ERCE.
#define BM_USBC_UOG2_ENDPTCOMPLETE_ERCE      (0x000000ff)  //!< Bit mask for USBC_UOG2_ENDPTCOMPLETE_ERCE.

//! @brief Get value of USBC_UOG2_ENDPTCOMPLETE_ERCE from a register value.
#define BG_USBC_UOG2_ENDPTCOMPLETE_ERCE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCOMPLETE_ERCE) >> BP_USBC_UOG2_ENDPTCOMPLETE_ERCE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCOMPLETE_ERCE.
#define BF_USBC_UOG2_ENDPTCOMPLETE_ERCE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCOMPLETE_ERCE) & BM_USBC_UOG2_ENDPTCOMPLETE_ERCE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ERCE field to a new value.
#define BW_USBC_UOG2_ENDPTCOMPLETE_ERCE(v)   (HW_USBC_UOG2_ENDPTCOMPLETE_WR((HW_USBC_UOG2_ENDPTCOMPLETE_RD() & ~BM_USBC_UOG2_ENDPTCOMPLETE_ERCE) | BF_USBC_UOG2_ENDPTCOMPLETE_ERCE(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCOMPLETE, field ETCE[23:16] (RW)
 *
 * Endpoint Transmit Complete Event - R/WC. Each bit indicates a transmit event (IN/INTERRUPT)
 * occurred and software should read the corresponding endpoint queue to determine the endpoint
 * status. If the corresponding IOC bit is set in the Transfer Descriptor, then this bit is set
 * simultaneously with the USBINT . Writing one clears the corresponding bit in this register.
 * ETCE[N] - Endpoint #N, N is in 0..7
 */

#define BP_USBC_UOG2_ENDPTCOMPLETE_ETCE      (16)      //!< Bit position for USBC_UOG2_ENDPTCOMPLETE_ETCE.
#define BM_USBC_UOG2_ENDPTCOMPLETE_ETCE      (0x00ff0000)  //!< Bit mask for USBC_UOG2_ENDPTCOMPLETE_ETCE.

//! @brief Get value of USBC_UOG2_ENDPTCOMPLETE_ETCE from a register value.
#define BG_USBC_UOG2_ENDPTCOMPLETE_ETCE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCOMPLETE_ETCE) >> BP_USBC_UOG2_ENDPTCOMPLETE_ETCE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCOMPLETE_ETCE.
#define BF_USBC_UOG2_ENDPTCOMPLETE_ETCE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCOMPLETE_ETCE) & BM_USBC_UOG2_ENDPTCOMPLETE_ETCE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ETCE field to a new value.
#define BW_USBC_UOG2_ENDPTCOMPLETE_ETCE(v)   (HW_USBC_UOG2_ENDPTCOMPLETE_WR((HW_USBC_UOG2_ENDPTCOMPLETE_RD() & ~BM_USBC_UOG2_ENDPTCOMPLETE_ETCE) | BF_USBC_UOG2_ENDPTCOMPLETE_ETCE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ENDPTCTRL0 - Endpoint Control0
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ENDPTCTRL0 - Endpoint Control0 (RW)
 *
 * Reset value: 0x00800080
 *
 * Every Device implements Endpoint 0 as a control endpoint.
 */
typedef union _hw_usbc_uog2_endptctrl0
{
    reg32_t U;
    struct _hw_usbc_uog2_endptctrl0_bitfields
    {
        unsigned RXS : 1; //!< [0] RX Endpoint Stall - Read/Write 0 End Point OK.
        unsigned RESERVED0 : 1; //!< [1] Reserved
        unsigned RXT : 2; //!< [3:2] RX Endpoint Type - Read/Write 00 Control Endpoint0 is fixed as a Control End Point.
        unsigned RESERVED1 : 3; //!< [6:4] Reserved
        unsigned RXE : 1; //!< [7] RX Endpoint Enable 1 Enabled Endpoint0 is always enabled.
        unsigned RESERVED2 : 8; //!< [15:8] Reserved
        unsigned TXS : 1; //!< [16] TX Endpoint Stall - Read/Write 0 End Point OK [Default] 1 End Point Stalled Software can write a one to this bit to force the endpoint to return a STALL handshake to the Host.
        unsigned RESERVED3 : 1; //!< [17] Reserved
        unsigned TXT : 2; //!< [19:18] TX Endpoint Type - Read/Write 00 - Control Endpoint0 is fixed as a Control End Point.
        unsigned RESERVED4 : 3; //!< [22:20] Reserved
        unsigned TXE : 1; //!< [23] TX Endpoint Enable 1 Enabled Endpoint0 is always enabled.
        unsigned RESERVED5 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_endptctrl0_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ENDPTCTRL0 register
 */
#define HW_USBC_UOG2_ENDPTCTRL0_ADDR      (REGS_USBC_BASE + 0x3c0)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ENDPTCTRL0           (*(volatile hw_usbc_uog2_endptctrl0_t *) HW_USBC_UOG2_ENDPTCTRL0_ADDR)
#define HW_USBC_UOG2_ENDPTCTRL0_RD()      (HW_USBC_UOG2_ENDPTCTRL0.U)
#define HW_USBC_UOG2_ENDPTCTRL0_WR(v)     (HW_USBC_UOG2_ENDPTCTRL0.U = (v))
#define HW_USBC_UOG2_ENDPTCTRL0_SET(v)    (HW_USBC_UOG2_ENDPTCTRL0_WR(HW_USBC_UOG2_ENDPTCTRL0_RD() |  (v)))
#define HW_USBC_UOG2_ENDPTCTRL0_CLR(v)    (HW_USBC_UOG2_ENDPTCTRL0_WR(HW_USBC_UOG2_ENDPTCTRL0_RD() & ~(v)))
#define HW_USBC_UOG2_ENDPTCTRL0_TOG(v)    (HW_USBC_UOG2_ENDPTCTRL0_WR(HW_USBC_UOG2_ENDPTCTRL0_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_ENDPTCTRL0 bitfields
 */

/* --- Register HW_USBC_UOG2_ENDPTCTRL0, field RXS[0] (RW)
 *
 * RX Endpoint Stall - Read/Write 0 End Point OK. [Default] 1 End Point Stalled Software can write a
 * one to this bit to force the endpoint to return a STALL handshake to the Host. It continues
 * returning STALL until the bit is cleared by software or it is automatically cleared upon receipt
 * of a new SETUP request.
 */

#define BP_USBC_UOG2_ENDPTCTRL0_RXS      (0)      //!< Bit position for USBC_UOG2_ENDPTCTRL0_RXS.
#define BM_USBC_UOG2_ENDPTCTRL0_RXS      (0x00000001)  //!< Bit mask for USBC_UOG2_ENDPTCTRL0_RXS.

//! @brief Get value of USBC_UOG2_ENDPTCTRL0_RXS from a register value.
#define BG_USBC_UOG2_ENDPTCTRL0_RXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL0_RXS) >> BP_USBC_UOG2_ENDPTCTRL0_RXS)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL0_RXS.
#define BF_USBC_UOG2_ENDPTCTRL0_RXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL0_RXS) & BM_USBC_UOG2_ENDPTCTRL0_RXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXS field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL0_RXS(v)   (HW_USBC_UOG2_ENDPTCTRL0_WR((HW_USBC_UOG2_ENDPTCTRL0_RD() & ~BM_USBC_UOG2_ENDPTCTRL0_RXS) | BF_USBC_UOG2_ENDPTCTRL0_RXS(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL0, field RXT[3:2] (RW)
 *
 * RX Endpoint Type - Read/Write 00 Control Endpoint0 is fixed as a Control End Point.
 */

#define BP_USBC_UOG2_ENDPTCTRL0_RXT      (2)      //!< Bit position for USBC_UOG2_ENDPTCTRL0_RXT.
#define BM_USBC_UOG2_ENDPTCTRL0_RXT      (0x0000000c)  //!< Bit mask for USBC_UOG2_ENDPTCTRL0_RXT.

//! @brief Get value of USBC_UOG2_ENDPTCTRL0_RXT from a register value.
#define BG_USBC_UOG2_ENDPTCTRL0_RXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL0_RXT) >> BP_USBC_UOG2_ENDPTCTRL0_RXT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL0_RXT.
#define BF_USBC_UOG2_ENDPTCTRL0_RXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL0_RXT) & BM_USBC_UOG2_ENDPTCTRL0_RXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXT field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL0_RXT(v)   (HW_USBC_UOG2_ENDPTCTRL0_WR((HW_USBC_UOG2_ENDPTCTRL0_RD() & ~BM_USBC_UOG2_ENDPTCTRL0_RXT) | BF_USBC_UOG2_ENDPTCTRL0_RXT(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL0, field RXE[7] (RW)
 *
 * RX Endpoint Enable 1 Enabled Endpoint0 is always enabled.
 */

#define BP_USBC_UOG2_ENDPTCTRL0_RXE      (7)      //!< Bit position for USBC_UOG2_ENDPTCTRL0_RXE.
#define BM_USBC_UOG2_ENDPTCTRL0_RXE      (0x00000080)  //!< Bit mask for USBC_UOG2_ENDPTCTRL0_RXE.

//! @brief Get value of USBC_UOG2_ENDPTCTRL0_RXE from a register value.
#define BG_USBC_UOG2_ENDPTCTRL0_RXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL0_RXE) >> BP_USBC_UOG2_ENDPTCTRL0_RXE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL0_RXE.
#define BF_USBC_UOG2_ENDPTCTRL0_RXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL0_RXE) & BM_USBC_UOG2_ENDPTCTRL0_RXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXE field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL0_RXE(v)   (HW_USBC_UOG2_ENDPTCTRL0_WR((HW_USBC_UOG2_ENDPTCTRL0_RD() & ~BM_USBC_UOG2_ENDPTCTRL0_RXE) | BF_USBC_UOG2_ENDPTCTRL0_RXE(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL0, field TXS[16] (RW)
 *
 * TX Endpoint Stall - Read/Write 0 End Point OK [Default] 1 End Point Stalled Software can write a
 * one to this bit to force the endpoint to return a STALL handshake to the Host. It continues
 * returning STALL until the bit is cleared by software or it is automatically cleared upon receipt
 * of a new SETUP request.
 */

#define BP_USBC_UOG2_ENDPTCTRL0_TXS      (16)      //!< Bit position for USBC_UOG2_ENDPTCTRL0_TXS.
#define BM_USBC_UOG2_ENDPTCTRL0_TXS      (0x00010000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL0_TXS.

//! @brief Get value of USBC_UOG2_ENDPTCTRL0_TXS from a register value.
#define BG_USBC_UOG2_ENDPTCTRL0_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL0_TXS) >> BP_USBC_UOG2_ENDPTCTRL0_TXS)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL0_TXS.
#define BF_USBC_UOG2_ENDPTCTRL0_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL0_TXS) & BM_USBC_UOG2_ENDPTCTRL0_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL0_TXS(v)   (HW_USBC_UOG2_ENDPTCTRL0_WR((HW_USBC_UOG2_ENDPTCTRL0_RD() & ~BM_USBC_UOG2_ENDPTCTRL0_TXS) | BF_USBC_UOG2_ENDPTCTRL0_TXS(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL0, field TXT[19:18] (RW)
 *
 * TX Endpoint Type - Read/Write 00 - Control Endpoint0 is fixed as a Control End Point.
 */

#define BP_USBC_UOG2_ENDPTCTRL0_TXT      (18)      //!< Bit position for USBC_UOG2_ENDPTCTRL0_TXT.
#define BM_USBC_UOG2_ENDPTCTRL0_TXT      (0x000c0000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL0_TXT.

//! @brief Get value of USBC_UOG2_ENDPTCTRL0_TXT from a register value.
#define BG_USBC_UOG2_ENDPTCTRL0_TXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL0_TXT) >> BP_USBC_UOG2_ENDPTCTRL0_TXT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL0_TXT.
#define BF_USBC_UOG2_ENDPTCTRL0_TXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL0_TXT) & BM_USBC_UOG2_ENDPTCTRL0_TXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXT field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL0_TXT(v)   (HW_USBC_UOG2_ENDPTCTRL0_WR((HW_USBC_UOG2_ENDPTCTRL0_RD() & ~BM_USBC_UOG2_ENDPTCTRL0_TXT) | BF_USBC_UOG2_ENDPTCTRL0_TXT(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL0, field TXE[23] (RW)
 *
 * TX Endpoint Enable 1 Enabled Endpoint0 is always enabled.
 */

#define BP_USBC_UOG2_ENDPTCTRL0_TXE      (23)      //!< Bit position for USBC_UOG2_ENDPTCTRL0_TXE.
#define BM_USBC_UOG2_ENDPTCTRL0_TXE      (0x00800000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL0_TXE.

//! @brief Get value of USBC_UOG2_ENDPTCTRL0_TXE from a register value.
#define BG_USBC_UOG2_ENDPTCTRL0_TXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL0_TXE) >> BP_USBC_UOG2_ENDPTCTRL0_TXE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL0_TXE.
#define BF_USBC_UOG2_ENDPTCTRL0_TXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL0_TXE) & BM_USBC_UOG2_ENDPTCTRL0_TXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXE field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL0_TXE(v)   (HW_USBC_UOG2_ENDPTCTRL0_WR((HW_USBC_UOG2_ENDPTCTRL0_RD() & ~BM_USBC_UOG2_ENDPTCTRL0_TXE) | BF_USBC_UOG2_ENDPTCTRL0_TXE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ENDPTCTRL1 - Endpoint Control 1
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ENDPTCTRL1 - Endpoint Control 1 (RW)
 *
 * Reset value: 0x00000000
 *
 * This is endpoint control register for endpoint 1 in device operation mode.  If one endpoint
 * direction is enabled and the paired endpoint of opposite direction is disabled then the unused
 * direction type must be changed from the default control-type to any other type (that is Bulk-
 * type). leaving an unconfigured endpoint control causes undefined behavior for the data pid
 * tracking on the active endpoint/direction.
 */
typedef union _hw_usbc_uog2_endptctrl1
{
    reg32_t U;
    struct _hw_usbc_uog2_endptctrl1_bitfields
    {
        unsigned RXS : 1; //!< [0] RX Endpoint Stall - Read/Write 0 End Point OK.
        unsigned RXD : 1; //!< [1] RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should always be written as zero.
        unsigned RXT : 2; //!< [3:2] RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
        unsigned RESERVED0 : 1; //!< [4] Reserved.
        unsigned RXI : 1; //!< [5] RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should always be written as zero.
        unsigned RXR : 1; //!< [6] RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the host and device.
        unsigned RXE : 1; //!< [7] RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED1 : 8; //!< [15:8] Reserved
        unsigned TXS : 1; //!< [16] TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint.
        unsigned TXD : 1; //!< [17] TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always be written as 0.
        unsigned TXT : 2; //!< [19:18] TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
        unsigned RESERVED2 : 1; //!< [20] Reserved
        unsigned TXI : 1; //!< [21] TX Data Toggle Inhibit 0 PID Sequencing Enabled.
        unsigned TXR : 1; //!< [22] TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the Host and device.
        unsigned TXE : 1; //!< [23] TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_endptctrl1_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ENDPTCTRL1 register
 */
#define HW_USBC_UOG2_ENDPTCTRL1_ADDR      (REGS_USBC_BASE + 0x3c4)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ENDPTCTRL1           (*(volatile hw_usbc_uog2_endptctrl1_t *) HW_USBC_UOG2_ENDPTCTRL1_ADDR)
#define HW_USBC_UOG2_ENDPTCTRL1_RD()      (HW_USBC_UOG2_ENDPTCTRL1.U)
#define HW_USBC_UOG2_ENDPTCTRL1_WR(v)     (HW_USBC_UOG2_ENDPTCTRL1.U = (v))
#define HW_USBC_UOG2_ENDPTCTRL1_SET(v)    (HW_USBC_UOG2_ENDPTCTRL1_WR(HW_USBC_UOG2_ENDPTCTRL1_RD() |  (v)))
#define HW_USBC_UOG2_ENDPTCTRL1_CLR(v)    (HW_USBC_UOG2_ENDPTCTRL1_WR(HW_USBC_UOG2_ENDPTCTRL1_RD() & ~(v)))
#define HW_USBC_UOG2_ENDPTCTRL1_TOG(v)    (HW_USBC_UOG2_ENDPTCTRL1_WR(HW_USBC_UOG2_ENDPTCTRL1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_ENDPTCTRL1 bitfields
 */

/* --- Register HW_USBC_UOG2_ENDPTCTRL1, field RXS[0] (RW)
 *
 * RX Endpoint Stall - Read/Write 0 End Point OK. [Default] 1 End Point Stalled This bit is set
 * automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control
 * Endpoint. It is cleared automatically upon receipt a SETUP request if this Endpoint is configured
 * as a Control Endpoint, Software can write a one to this bit to force the endpoint to return a
 * STALL handshake to the Host. It continues to returning STALL until this bit is either cleared by
 * software or automatically cleared as above.
 */

#define BP_USBC_UOG2_ENDPTCTRL1_RXS      (0)      //!< Bit position for USBC_UOG2_ENDPTCTRL1_RXS.
#define BM_USBC_UOG2_ENDPTCTRL1_RXS      (0x00000001)  //!< Bit mask for USBC_UOG2_ENDPTCTRL1_RXS.

//! @brief Get value of USBC_UOG2_ENDPTCTRL1_RXS from a register value.
#define BG_USBC_UOG2_ENDPTCTRL1_RXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL1_RXS) >> BP_USBC_UOG2_ENDPTCTRL1_RXS)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL1_RXS.
#define BF_USBC_UOG2_ENDPTCTRL1_RXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL1_RXS) & BM_USBC_UOG2_ENDPTCTRL1_RXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXS field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL1_RXS(v)   (HW_USBC_UOG2_ENDPTCTRL1_WR((HW_USBC_UOG2_ENDPTCTRL1_RD() & ~BM_USBC_UOG2_ENDPTCTRL1_RXS) | BF_USBC_UOG2_ENDPTCTRL1_RXS(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL1, field RXD[1] (RW)
 *
 * RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should
 * always be written as zero.
 */

#define BP_USBC_UOG2_ENDPTCTRL1_RXD      (1)      //!< Bit position for USBC_UOG2_ENDPTCTRL1_RXD.
#define BM_USBC_UOG2_ENDPTCTRL1_RXD      (0x00000002)  //!< Bit mask for USBC_UOG2_ENDPTCTRL1_RXD.

//! @brief Get value of USBC_UOG2_ENDPTCTRL1_RXD from a register value.
#define BG_USBC_UOG2_ENDPTCTRL1_RXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL1_RXD) >> BP_USBC_UOG2_ENDPTCTRL1_RXD)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL1_RXD.
#define BF_USBC_UOG2_ENDPTCTRL1_RXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL1_RXD) & BM_USBC_UOG2_ENDPTCTRL1_RXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXD field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL1_RXD(v)   (HW_USBC_UOG2_ENDPTCTRL1_WR((HW_USBC_UOG2_ENDPTCTRL1_RD() & ~BM_USBC_UOG2_ENDPTCTRL1_RXD) | BF_USBC_UOG2_ENDPTCTRL1_RXD(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL1, field RXT[3:2] (RW)
 *
 * RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
 */

#define BP_USBC_UOG2_ENDPTCTRL1_RXT      (2)      //!< Bit position for USBC_UOG2_ENDPTCTRL1_RXT.
#define BM_USBC_UOG2_ENDPTCTRL1_RXT      (0x0000000c)  //!< Bit mask for USBC_UOG2_ENDPTCTRL1_RXT.

//! @brief Get value of USBC_UOG2_ENDPTCTRL1_RXT from a register value.
#define BG_USBC_UOG2_ENDPTCTRL1_RXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL1_RXT) >> BP_USBC_UOG2_ENDPTCTRL1_RXT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL1_RXT.
#define BF_USBC_UOG2_ENDPTCTRL1_RXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL1_RXT) & BM_USBC_UOG2_ENDPTCTRL1_RXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXT field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL1_RXT(v)   (HW_USBC_UOG2_ENDPTCTRL1_WR((HW_USBC_UOG2_ENDPTCTRL1_RD() & ~BM_USBC_UOG2_ENDPTCTRL1_RXT) | BF_USBC_UOG2_ENDPTCTRL1_RXT(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL1, field RXI[5] (RW)
 *
 * RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should
 * always be written as zero. Writing a one to this bit causes this endpoint to ignore the data
 * toggle sequence and always accept data packet regardless of their data PID.
 */

#define BP_USBC_UOG2_ENDPTCTRL1_RXI      (5)      //!< Bit position for USBC_UOG2_ENDPTCTRL1_RXI.
#define BM_USBC_UOG2_ENDPTCTRL1_RXI      (0x00000020)  //!< Bit mask for USBC_UOG2_ENDPTCTRL1_RXI.

//! @brief Get value of USBC_UOG2_ENDPTCTRL1_RXI from a register value.
#define BG_USBC_UOG2_ENDPTCTRL1_RXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL1_RXI) >> BP_USBC_UOG2_ENDPTCTRL1_RXI)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL1_RXI.
#define BF_USBC_UOG2_ENDPTCTRL1_RXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL1_RXI) & BM_USBC_UOG2_ENDPTCTRL1_RXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXI field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL1_RXI(v)   (HW_USBC_UOG2_ENDPTCTRL1_WR((HW_USBC_UOG2_ENDPTCTRL1_RD() & ~BM_USBC_UOG2_ENDPTCTRL1_RXI) | BF_USBC_UOG2_ENDPTCTRL1_RXI(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL1, field RXR[6] (RW)
 *
 * RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the host and device.
 */

#define BP_USBC_UOG2_ENDPTCTRL1_RXR      (6)      //!< Bit position for USBC_UOG2_ENDPTCTRL1_RXR.
#define BM_USBC_UOG2_ENDPTCTRL1_RXR      (0x00000040)  //!< Bit mask for USBC_UOG2_ENDPTCTRL1_RXR.

//! @brief Get value of USBC_UOG2_ENDPTCTRL1_RXR from a register value.
#define BG_USBC_UOG2_ENDPTCTRL1_RXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL1_RXR) >> BP_USBC_UOG2_ENDPTCTRL1_RXR)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL1_RXR.
#define BF_USBC_UOG2_ENDPTCTRL1_RXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL1_RXR) & BM_USBC_UOG2_ENDPTCTRL1_RXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXR field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL1_RXR(v)   (HW_USBC_UOG2_ENDPTCTRL1_WR((HW_USBC_UOG2_ENDPTCTRL1_RD() & ~BM_USBC_UOG2_ENDPTCTRL1_RXR) | BF_USBC_UOG2_ENDPTCTRL1_RXR(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL1, field RXE[7] (RW)
 *
 * RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG2_ENDPTCTRL1_RXE      (7)      //!< Bit position for USBC_UOG2_ENDPTCTRL1_RXE.
#define BM_USBC_UOG2_ENDPTCTRL1_RXE      (0x00000080)  //!< Bit mask for USBC_UOG2_ENDPTCTRL1_RXE.

//! @brief Get value of USBC_UOG2_ENDPTCTRL1_RXE from a register value.
#define BG_USBC_UOG2_ENDPTCTRL1_RXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL1_RXE) >> BP_USBC_UOG2_ENDPTCTRL1_RXE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL1_RXE.
#define BF_USBC_UOG2_ENDPTCTRL1_RXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL1_RXE) & BM_USBC_UOG2_ENDPTCTRL1_RXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXE field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL1_RXE(v)   (HW_USBC_UOG2_ENDPTCTRL1_WR((HW_USBC_UOG2_ENDPTCTRL1_RD() & ~BM_USBC_UOG2_ENDPTCTRL1_RXE) | BF_USBC_UOG2_ENDPTCTRL1_RXE(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL1, field TXS[16] (RW)
 *
 * TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically
 * upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint. It is
 * cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control
 * Endpoint. Software can write a one to this bit to force the endpoint to return a STALL handshake
 * to the Host. It continues to returning STALL until this bit is either cleared by software or
 * automatically cleared as above. For CONTROL type endpoint, there is a slight delay (50 clocks
 * max) between the ENDPTSETUPSTAT begin cleared and hardware continuing to clear this bit. In most
 * systems, it is unlikely the DCD software will observe this delay. Take care that the STALL bit is
 * not set immediately after writing a '1' to it. Please follow this procedure: continually write
 * this STALL bit until it is set or until a new setup has ben received by checking the associated
 * ENDPTSETUPSTAT bit.
 */

#define BP_USBC_UOG2_ENDPTCTRL1_TXS      (16)      //!< Bit position for USBC_UOG2_ENDPTCTRL1_TXS.
#define BM_USBC_UOG2_ENDPTCTRL1_TXS      (0x00010000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL1_TXS.

//! @brief Get value of USBC_UOG2_ENDPTCTRL1_TXS from a register value.
#define BG_USBC_UOG2_ENDPTCTRL1_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL1_TXS) >> BP_USBC_UOG2_ENDPTCTRL1_TXS)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL1_TXS.
#define BF_USBC_UOG2_ENDPTCTRL1_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL1_TXS) & BM_USBC_UOG2_ENDPTCTRL1_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL1_TXS(v)   (HW_USBC_UOG2_ENDPTCTRL1_WR((HW_USBC_UOG2_ENDPTCTRL1_RD() & ~BM_USBC_UOG2_ENDPTCTRL1_TXS) | BF_USBC_UOG2_ENDPTCTRL1_TXS(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL1, field TXD[17] (RW)
 *
 * TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always
 * be written as 0.
 */

#define BP_USBC_UOG2_ENDPTCTRL1_TXD      (17)      //!< Bit position for USBC_UOG2_ENDPTCTRL1_TXD.
#define BM_USBC_UOG2_ENDPTCTRL1_TXD      (0x00020000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL1_TXD.

//! @brief Get value of USBC_UOG2_ENDPTCTRL1_TXD from a register value.
#define BG_USBC_UOG2_ENDPTCTRL1_TXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL1_TXD) >> BP_USBC_UOG2_ENDPTCTRL1_TXD)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL1_TXD.
#define BF_USBC_UOG2_ENDPTCTRL1_TXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL1_TXD) & BM_USBC_UOG2_ENDPTCTRL1_TXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXD field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL1_TXD(v)   (HW_USBC_UOG2_ENDPTCTRL1_WR((HW_USBC_UOG2_ENDPTCTRL1_RD() & ~BM_USBC_UOG2_ENDPTCTRL1_TXD) | BF_USBC_UOG2_ENDPTCTRL1_TXD(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL1, field TXT[19:18] (RW)
 *
 * TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 */

#define BP_USBC_UOG2_ENDPTCTRL1_TXT      (18)      //!< Bit position for USBC_UOG2_ENDPTCTRL1_TXT.
#define BM_USBC_UOG2_ENDPTCTRL1_TXT      (0x000c0000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL1_TXT.

//! @brief Get value of USBC_UOG2_ENDPTCTRL1_TXT from a register value.
#define BG_USBC_UOG2_ENDPTCTRL1_TXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL1_TXT) >> BP_USBC_UOG2_ENDPTCTRL1_TXT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL1_TXT.
#define BF_USBC_UOG2_ENDPTCTRL1_TXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL1_TXT) & BM_USBC_UOG2_ENDPTCTRL1_TXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXT field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL1_TXT(v)   (HW_USBC_UOG2_ENDPTCTRL1_WR((HW_USBC_UOG2_ENDPTCTRL1_RD() & ~BM_USBC_UOG2_ENDPTCTRL1_TXT) | BF_USBC_UOG2_ENDPTCTRL1_TXT(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL1, field TXI[21] (RW)
 *
 * TX Data Toggle Inhibit 0 PID Sequencing Enabled. [Default] 1 PID Sequencing Disabled. This bit is
 * only used for test and should always be written as zero. Writing a one to this bit causes this
 * endpoint to ignore the data toggle sequence and always transmit DATA0 for a data packet.
 */

#define BP_USBC_UOG2_ENDPTCTRL1_TXI      (21)      //!< Bit position for USBC_UOG2_ENDPTCTRL1_TXI.
#define BM_USBC_UOG2_ENDPTCTRL1_TXI      (0x00200000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL1_TXI.

//! @brief Get value of USBC_UOG2_ENDPTCTRL1_TXI from a register value.
#define BG_USBC_UOG2_ENDPTCTRL1_TXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL1_TXI) >> BP_USBC_UOG2_ENDPTCTRL1_TXI)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL1_TXI.
#define BF_USBC_UOG2_ENDPTCTRL1_TXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL1_TXI) & BM_USBC_UOG2_ENDPTCTRL1_TXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXI field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL1_TXI(v)   (HW_USBC_UOG2_ENDPTCTRL1_WR((HW_USBC_UOG2_ENDPTCTRL1_RD() & ~BM_USBC_UOG2_ENDPTCTRL1_TXI) | BF_USBC_UOG2_ENDPTCTRL1_TXI(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL1, field TXR[22] (RW)
 *
 * TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the Host and device.
 */

#define BP_USBC_UOG2_ENDPTCTRL1_TXR      (22)      //!< Bit position for USBC_UOG2_ENDPTCTRL1_TXR.
#define BM_USBC_UOG2_ENDPTCTRL1_TXR      (0x00400000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL1_TXR.

//! @brief Get value of USBC_UOG2_ENDPTCTRL1_TXR from a register value.
#define BG_USBC_UOG2_ENDPTCTRL1_TXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL1_TXR) >> BP_USBC_UOG2_ENDPTCTRL1_TXR)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL1_TXR.
#define BF_USBC_UOG2_ENDPTCTRL1_TXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL1_TXR) & BM_USBC_UOG2_ENDPTCTRL1_TXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXR field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL1_TXR(v)   (HW_USBC_UOG2_ENDPTCTRL1_WR((HW_USBC_UOG2_ENDPTCTRL1_RD() & ~BM_USBC_UOG2_ENDPTCTRL1_TXR) | BF_USBC_UOG2_ENDPTCTRL1_TXR(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL1, field TXE[23] (RW)
 *
 * TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG2_ENDPTCTRL1_TXE      (23)      //!< Bit position for USBC_UOG2_ENDPTCTRL1_TXE.
#define BM_USBC_UOG2_ENDPTCTRL1_TXE      (0x00800000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL1_TXE.

//! @brief Get value of USBC_UOG2_ENDPTCTRL1_TXE from a register value.
#define BG_USBC_UOG2_ENDPTCTRL1_TXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL1_TXE) >> BP_USBC_UOG2_ENDPTCTRL1_TXE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL1_TXE.
#define BF_USBC_UOG2_ENDPTCTRL1_TXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL1_TXE) & BM_USBC_UOG2_ENDPTCTRL1_TXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXE field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL1_TXE(v)   (HW_USBC_UOG2_ENDPTCTRL1_WR((HW_USBC_UOG2_ENDPTCTRL1_RD() & ~BM_USBC_UOG2_ENDPTCTRL1_TXE) | BF_USBC_UOG2_ENDPTCTRL1_TXE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ENDPTCTRL2 - Endpoint Control 2
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ENDPTCTRL2 - Endpoint Control 2 (RW)
 *
 * Reset value: 0x00000000
 *
 * This is endpoint control register for endpoint 2 in device operation mode.  If one endpoint
 * direction is enabled and the paired endpoint of opposite direction is disabled then the unused
 * direction type must be changed from the default control-type to any other type (that is Bulk-
 * type). leaving an unconfigured endpoint control causes undefined behavior for the data pid
 * tracking on the active endpoint/direction.
 */
typedef union _hw_usbc_uog2_endptctrl2
{
    reg32_t U;
    struct _hw_usbc_uog2_endptctrl2_bitfields
    {
        unsigned RXS : 1; //!< [0] RX Endpoint Stall - Read/Write 0 End Point OK.
        unsigned RXD : 1; //!< [1] RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should always be written as zero.
        unsigned RXT : 2; //!< [3:2] RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
        unsigned RESERVED0 : 1; //!< [4] Reserved.
        unsigned RXI : 1; //!< [5] RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should always be written as zero.
        unsigned RXR : 1; //!< [6] RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the host and device.
        unsigned RXE : 1; //!< [7] RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED1 : 8; //!< [15:8] Reserved
        unsigned TXS : 1; //!< [16] TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint.
        unsigned TXD : 1; //!< [17] TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always be written as 0.
        unsigned TXT : 2; //!< [19:18] TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
        unsigned RESERVED2 : 1; //!< [20] Reserved
        unsigned TXI : 1; //!< [21] TX Data Toggle Inhibit 0 PID Sequencing Enabled.
        unsigned TXR : 1; //!< [22] TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the Host and device.
        unsigned TXE : 1; //!< [23] TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_endptctrl2_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ENDPTCTRL2 register
 */
#define HW_USBC_UOG2_ENDPTCTRL2_ADDR      (REGS_USBC_BASE + 0x3c8)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ENDPTCTRL2           (*(volatile hw_usbc_uog2_endptctrl2_t *) HW_USBC_UOG2_ENDPTCTRL2_ADDR)
#define HW_USBC_UOG2_ENDPTCTRL2_RD()      (HW_USBC_UOG2_ENDPTCTRL2.U)
#define HW_USBC_UOG2_ENDPTCTRL2_WR(v)     (HW_USBC_UOG2_ENDPTCTRL2.U = (v))
#define HW_USBC_UOG2_ENDPTCTRL2_SET(v)    (HW_USBC_UOG2_ENDPTCTRL2_WR(HW_USBC_UOG2_ENDPTCTRL2_RD() |  (v)))
#define HW_USBC_UOG2_ENDPTCTRL2_CLR(v)    (HW_USBC_UOG2_ENDPTCTRL2_WR(HW_USBC_UOG2_ENDPTCTRL2_RD() & ~(v)))
#define HW_USBC_UOG2_ENDPTCTRL2_TOG(v)    (HW_USBC_UOG2_ENDPTCTRL2_WR(HW_USBC_UOG2_ENDPTCTRL2_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_ENDPTCTRL2 bitfields
 */

/* --- Register HW_USBC_UOG2_ENDPTCTRL2, field RXS[0] (RW)
 *
 * RX Endpoint Stall - Read/Write 0 End Point OK. [Default] 1 End Point Stalled This bit is set
 * automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control
 * Endpoint. It is cleared automatically upon receipt a SETUP request if this Endpoint is configured
 * as a Control Endpoint, Software can write a one to this bit to force the endpoint to return a
 * STALL handshake to the Host. It continues to returning STALL until this bit is either cleared by
 * software or automatically cleared as above.
 */

#define BP_USBC_UOG2_ENDPTCTRL2_RXS      (0)      //!< Bit position for USBC_UOG2_ENDPTCTRL2_RXS.
#define BM_USBC_UOG2_ENDPTCTRL2_RXS      (0x00000001)  //!< Bit mask for USBC_UOG2_ENDPTCTRL2_RXS.

//! @brief Get value of USBC_UOG2_ENDPTCTRL2_RXS from a register value.
#define BG_USBC_UOG2_ENDPTCTRL2_RXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL2_RXS) >> BP_USBC_UOG2_ENDPTCTRL2_RXS)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL2_RXS.
#define BF_USBC_UOG2_ENDPTCTRL2_RXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL2_RXS) & BM_USBC_UOG2_ENDPTCTRL2_RXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXS field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL2_RXS(v)   (HW_USBC_UOG2_ENDPTCTRL2_WR((HW_USBC_UOG2_ENDPTCTRL2_RD() & ~BM_USBC_UOG2_ENDPTCTRL2_RXS) | BF_USBC_UOG2_ENDPTCTRL2_RXS(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL2, field RXD[1] (RW)
 *
 * RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should
 * always be written as zero.
 */

#define BP_USBC_UOG2_ENDPTCTRL2_RXD      (1)      //!< Bit position for USBC_UOG2_ENDPTCTRL2_RXD.
#define BM_USBC_UOG2_ENDPTCTRL2_RXD      (0x00000002)  //!< Bit mask for USBC_UOG2_ENDPTCTRL2_RXD.

//! @brief Get value of USBC_UOG2_ENDPTCTRL2_RXD from a register value.
#define BG_USBC_UOG2_ENDPTCTRL2_RXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL2_RXD) >> BP_USBC_UOG2_ENDPTCTRL2_RXD)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL2_RXD.
#define BF_USBC_UOG2_ENDPTCTRL2_RXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL2_RXD) & BM_USBC_UOG2_ENDPTCTRL2_RXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXD field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL2_RXD(v)   (HW_USBC_UOG2_ENDPTCTRL2_WR((HW_USBC_UOG2_ENDPTCTRL2_RD() & ~BM_USBC_UOG2_ENDPTCTRL2_RXD) | BF_USBC_UOG2_ENDPTCTRL2_RXD(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL2, field RXT[3:2] (RW)
 *
 * RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
 */

#define BP_USBC_UOG2_ENDPTCTRL2_RXT      (2)      //!< Bit position for USBC_UOG2_ENDPTCTRL2_RXT.
#define BM_USBC_UOG2_ENDPTCTRL2_RXT      (0x0000000c)  //!< Bit mask for USBC_UOG2_ENDPTCTRL2_RXT.

//! @brief Get value of USBC_UOG2_ENDPTCTRL2_RXT from a register value.
#define BG_USBC_UOG2_ENDPTCTRL2_RXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL2_RXT) >> BP_USBC_UOG2_ENDPTCTRL2_RXT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL2_RXT.
#define BF_USBC_UOG2_ENDPTCTRL2_RXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL2_RXT) & BM_USBC_UOG2_ENDPTCTRL2_RXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXT field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL2_RXT(v)   (HW_USBC_UOG2_ENDPTCTRL2_WR((HW_USBC_UOG2_ENDPTCTRL2_RD() & ~BM_USBC_UOG2_ENDPTCTRL2_RXT) | BF_USBC_UOG2_ENDPTCTRL2_RXT(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL2, field RXI[5] (RW)
 *
 * RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should
 * always be written as zero. Writing a one to this bit causes this endpoint to ignore the data
 * toggle sequence and always accept data packet regardless of their data PID.
 */

#define BP_USBC_UOG2_ENDPTCTRL2_RXI      (5)      //!< Bit position for USBC_UOG2_ENDPTCTRL2_RXI.
#define BM_USBC_UOG2_ENDPTCTRL2_RXI      (0x00000020)  //!< Bit mask for USBC_UOG2_ENDPTCTRL2_RXI.

//! @brief Get value of USBC_UOG2_ENDPTCTRL2_RXI from a register value.
#define BG_USBC_UOG2_ENDPTCTRL2_RXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL2_RXI) >> BP_USBC_UOG2_ENDPTCTRL2_RXI)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL2_RXI.
#define BF_USBC_UOG2_ENDPTCTRL2_RXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL2_RXI) & BM_USBC_UOG2_ENDPTCTRL2_RXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXI field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL2_RXI(v)   (HW_USBC_UOG2_ENDPTCTRL2_WR((HW_USBC_UOG2_ENDPTCTRL2_RD() & ~BM_USBC_UOG2_ENDPTCTRL2_RXI) | BF_USBC_UOG2_ENDPTCTRL2_RXI(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL2, field RXR[6] (RW)
 *
 * RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the host and device.
 */

#define BP_USBC_UOG2_ENDPTCTRL2_RXR      (6)      //!< Bit position for USBC_UOG2_ENDPTCTRL2_RXR.
#define BM_USBC_UOG2_ENDPTCTRL2_RXR      (0x00000040)  //!< Bit mask for USBC_UOG2_ENDPTCTRL2_RXR.

//! @brief Get value of USBC_UOG2_ENDPTCTRL2_RXR from a register value.
#define BG_USBC_UOG2_ENDPTCTRL2_RXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL2_RXR) >> BP_USBC_UOG2_ENDPTCTRL2_RXR)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL2_RXR.
#define BF_USBC_UOG2_ENDPTCTRL2_RXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL2_RXR) & BM_USBC_UOG2_ENDPTCTRL2_RXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXR field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL2_RXR(v)   (HW_USBC_UOG2_ENDPTCTRL2_WR((HW_USBC_UOG2_ENDPTCTRL2_RD() & ~BM_USBC_UOG2_ENDPTCTRL2_RXR) | BF_USBC_UOG2_ENDPTCTRL2_RXR(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL2, field RXE[7] (RW)
 *
 * RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG2_ENDPTCTRL2_RXE      (7)      //!< Bit position for USBC_UOG2_ENDPTCTRL2_RXE.
#define BM_USBC_UOG2_ENDPTCTRL2_RXE      (0x00000080)  //!< Bit mask for USBC_UOG2_ENDPTCTRL2_RXE.

//! @brief Get value of USBC_UOG2_ENDPTCTRL2_RXE from a register value.
#define BG_USBC_UOG2_ENDPTCTRL2_RXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL2_RXE) >> BP_USBC_UOG2_ENDPTCTRL2_RXE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL2_RXE.
#define BF_USBC_UOG2_ENDPTCTRL2_RXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL2_RXE) & BM_USBC_UOG2_ENDPTCTRL2_RXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXE field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL2_RXE(v)   (HW_USBC_UOG2_ENDPTCTRL2_WR((HW_USBC_UOG2_ENDPTCTRL2_RD() & ~BM_USBC_UOG2_ENDPTCTRL2_RXE) | BF_USBC_UOG2_ENDPTCTRL2_RXE(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL2, field TXS[16] (RW)
 *
 * TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically
 * upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint. It is
 * cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control
 * Endpoint. Software can write a one to this bit to force the endpoint to return a STALL handshake
 * to the Host. It continues to returning STALL until this bit is either cleared by software or
 * automatically cleared as above. For CONTROL type endpoint, there is a slight delay (50 clocks
 * max) between the ENDPTSETUPSTAT begin cleared and hardware continuing to clear this bit. In most
 * systems, it is unlikely the DCD software will observe this delay. Take care that the STALL bit is
 * not set immediately after writing a '1' to it. Please follow this procedure: continually write
 * this STALL bit until it is set or until a new setup has ben received by checking the associated
 * ENDPTSETUPSTAT bit.
 */

#define BP_USBC_UOG2_ENDPTCTRL2_TXS      (16)      //!< Bit position for USBC_UOG2_ENDPTCTRL2_TXS.
#define BM_USBC_UOG2_ENDPTCTRL2_TXS      (0x00010000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL2_TXS.

//! @brief Get value of USBC_UOG2_ENDPTCTRL2_TXS from a register value.
#define BG_USBC_UOG2_ENDPTCTRL2_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL2_TXS) >> BP_USBC_UOG2_ENDPTCTRL2_TXS)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL2_TXS.
#define BF_USBC_UOG2_ENDPTCTRL2_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL2_TXS) & BM_USBC_UOG2_ENDPTCTRL2_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL2_TXS(v)   (HW_USBC_UOG2_ENDPTCTRL2_WR((HW_USBC_UOG2_ENDPTCTRL2_RD() & ~BM_USBC_UOG2_ENDPTCTRL2_TXS) | BF_USBC_UOG2_ENDPTCTRL2_TXS(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL2, field TXD[17] (RW)
 *
 * TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always
 * be written as 0.
 */

#define BP_USBC_UOG2_ENDPTCTRL2_TXD      (17)      //!< Bit position for USBC_UOG2_ENDPTCTRL2_TXD.
#define BM_USBC_UOG2_ENDPTCTRL2_TXD      (0x00020000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL2_TXD.

//! @brief Get value of USBC_UOG2_ENDPTCTRL2_TXD from a register value.
#define BG_USBC_UOG2_ENDPTCTRL2_TXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL2_TXD) >> BP_USBC_UOG2_ENDPTCTRL2_TXD)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL2_TXD.
#define BF_USBC_UOG2_ENDPTCTRL2_TXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL2_TXD) & BM_USBC_UOG2_ENDPTCTRL2_TXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXD field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL2_TXD(v)   (HW_USBC_UOG2_ENDPTCTRL2_WR((HW_USBC_UOG2_ENDPTCTRL2_RD() & ~BM_USBC_UOG2_ENDPTCTRL2_TXD) | BF_USBC_UOG2_ENDPTCTRL2_TXD(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL2, field TXT[19:18] (RW)
 *
 * TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 */

#define BP_USBC_UOG2_ENDPTCTRL2_TXT      (18)      //!< Bit position for USBC_UOG2_ENDPTCTRL2_TXT.
#define BM_USBC_UOG2_ENDPTCTRL2_TXT      (0x000c0000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL2_TXT.

//! @brief Get value of USBC_UOG2_ENDPTCTRL2_TXT from a register value.
#define BG_USBC_UOG2_ENDPTCTRL2_TXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL2_TXT) >> BP_USBC_UOG2_ENDPTCTRL2_TXT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL2_TXT.
#define BF_USBC_UOG2_ENDPTCTRL2_TXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL2_TXT) & BM_USBC_UOG2_ENDPTCTRL2_TXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXT field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL2_TXT(v)   (HW_USBC_UOG2_ENDPTCTRL2_WR((HW_USBC_UOG2_ENDPTCTRL2_RD() & ~BM_USBC_UOG2_ENDPTCTRL2_TXT) | BF_USBC_UOG2_ENDPTCTRL2_TXT(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL2, field TXI[21] (RW)
 *
 * TX Data Toggle Inhibit 0 PID Sequencing Enabled. [Default] 1 PID Sequencing Disabled. This bit is
 * only used for test and should always be written as zero. Writing a one to this bit causes this
 * endpoint to ignore the data toggle sequence and always transmit DATA0 for a data packet.
 */

#define BP_USBC_UOG2_ENDPTCTRL2_TXI      (21)      //!< Bit position for USBC_UOG2_ENDPTCTRL2_TXI.
#define BM_USBC_UOG2_ENDPTCTRL2_TXI      (0x00200000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL2_TXI.

//! @brief Get value of USBC_UOG2_ENDPTCTRL2_TXI from a register value.
#define BG_USBC_UOG2_ENDPTCTRL2_TXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL2_TXI) >> BP_USBC_UOG2_ENDPTCTRL2_TXI)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL2_TXI.
#define BF_USBC_UOG2_ENDPTCTRL2_TXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL2_TXI) & BM_USBC_UOG2_ENDPTCTRL2_TXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXI field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL2_TXI(v)   (HW_USBC_UOG2_ENDPTCTRL2_WR((HW_USBC_UOG2_ENDPTCTRL2_RD() & ~BM_USBC_UOG2_ENDPTCTRL2_TXI) | BF_USBC_UOG2_ENDPTCTRL2_TXI(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL2, field TXR[22] (RW)
 *
 * TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the Host and device.
 */

#define BP_USBC_UOG2_ENDPTCTRL2_TXR      (22)      //!< Bit position for USBC_UOG2_ENDPTCTRL2_TXR.
#define BM_USBC_UOG2_ENDPTCTRL2_TXR      (0x00400000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL2_TXR.

//! @brief Get value of USBC_UOG2_ENDPTCTRL2_TXR from a register value.
#define BG_USBC_UOG2_ENDPTCTRL2_TXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL2_TXR) >> BP_USBC_UOG2_ENDPTCTRL2_TXR)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL2_TXR.
#define BF_USBC_UOG2_ENDPTCTRL2_TXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL2_TXR) & BM_USBC_UOG2_ENDPTCTRL2_TXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXR field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL2_TXR(v)   (HW_USBC_UOG2_ENDPTCTRL2_WR((HW_USBC_UOG2_ENDPTCTRL2_RD() & ~BM_USBC_UOG2_ENDPTCTRL2_TXR) | BF_USBC_UOG2_ENDPTCTRL2_TXR(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL2, field TXE[23] (RW)
 *
 * TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG2_ENDPTCTRL2_TXE      (23)      //!< Bit position for USBC_UOG2_ENDPTCTRL2_TXE.
#define BM_USBC_UOG2_ENDPTCTRL2_TXE      (0x00800000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL2_TXE.

//! @brief Get value of USBC_UOG2_ENDPTCTRL2_TXE from a register value.
#define BG_USBC_UOG2_ENDPTCTRL2_TXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL2_TXE) >> BP_USBC_UOG2_ENDPTCTRL2_TXE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL2_TXE.
#define BF_USBC_UOG2_ENDPTCTRL2_TXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL2_TXE) & BM_USBC_UOG2_ENDPTCTRL2_TXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXE field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL2_TXE(v)   (HW_USBC_UOG2_ENDPTCTRL2_WR((HW_USBC_UOG2_ENDPTCTRL2_RD() & ~BM_USBC_UOG2_ENDPTCTRL2_TXE) | BF_USBC_UOG2_ENDPTCTRL2_TXE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ENDPTCTRL3 - Endpoint Control 3
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ENDPTCTRL3 - Endpoint Control 3 (RW)
 *
 * Reset value: 0x00000000
 *
 * This is endpoint control register for endpoint 3 in device operation mode.  If one endpoint
 * direction is enabled and the paired endpoint of opposite direction is disabled then the unused
 * direction type must be changed from the default control-type to any other type (that is Bulk-
 * type). leaving an unconfigured endpoint control causes undefined behavior for the data pid
 * tracking on the active endpoint/direction.
 */
typedef union _hw_usbc_uog2_endptctrl3
{
    reg32_t U;
    struct _hw_usbc_uog2_endptctrl3_bitfields
    {
        unsigned RXS : 1; //!< [0] RX Endpoint Stall - Read/Write 0 End Point OK.
        unsigned RXD : 1; //!< [1] RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should always be written as zero.
        unsigned RXT : 2; //!< [3:2] RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
        unsigned RESERVED0 : 1; //!< [4] Reserved.
        unsigned RXI : 1; //!< [5] RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should always be written as zero.
        unsigned RXR : 1; //!< [6] RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the host and device.
        unsigned RXE : 1; //!< [7] RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED1 : 8; //!< [15:8] Reserved
        unsigned TXS : 1; //!< [16] TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint.
        unsigned TXD : 1; //!< [17] TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always be written as 0.
        unsigned TXT : 2; //!< [19:18] TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
        unsigned RESERVED2 : 1; //!< [20] Reserved
        unsigned TXI : 1; //!< [21] TX Data Toggle Inhibit 0 PID Sequencing Enabled.
        unsigned TXR : 1; //!< [22] TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the Host and device.
        unsigned TXE : 1; //!< [23] TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_endptctrl3_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ENDPTCTRL3 register
 */
#define HW_USBC_UOG2_ENDPTCTRL3_ADDR      (REGS_USBC_BASE + 0x3cc)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ENDPTCTRL3           (*(volatile hw_usbc_uog2_endptctrl3_t *) HW_USBC_UOG2_ENDPTCTRL3_ADDR)
#define HW_USBC_UOG2_ENDPTCTRL3_RD()      (HW_USBC_UOG2_ENDPTCTRL3.U)
#define HW_USBC_UOG2_ENDPTCTRL3_WR(v)     (HW_USBC_UOG2_ENDPTCTRL3.U = (v))
#define HW_USBC_UOG2_ENDPTCTRL3_SET(v)    (HW_USBC_UOG2_ENDPTCTRL3_WR(HW_USBC_UOG2_ENDPTCTRL3_RD() |  (v)))
#define HW_USBC_UOG2_ENDPTCTRL3_CLR(v)    (HW_USBC_UOG2_ENDPTCTRL3_WR(HW_USBC_UOG2_ENDPTCTRL3_RD() & ~(v)))
#define HW_USBC_UOG2_ENDPTCTRL3_TOG(v)    (HW_USBC_UOG2_ENDPTCTRL3_WR(HW_USBC_UOG2_ENDPTCTRL3_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_ENDPTCTRL3 bitfields
 */

/* --- Register HW_USBC_UOG2_ENDPTCTRL3, field RXS[0] (RW)
 *
 * RX Endpoint Stall - Read/Write 0 End Point OK. [Default] 1 End Point Stalled This bit is set
 * automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control
 * Endpoint. It is cleared automatically upon receipt a SETUP request if this Endpoint is configured
 * as a Control Endpoint, Software can write a one to this bit to force the endpoint to return a
 * STALL handshake to the Host. It continues to returning STALL until this bit is either cleared by
 * software or automatically cleared as above.
 */

#define BP_USBC_UOG2_ENDPTCTRL3_RXS      (0)      //!< Bit position for USBC_UOG2_ENDPTCTRL3_RXS.
#define BM_USBC_UOG2_ENDPTCTRL3_RXS      (0x00000001)  //!< Bit mask for USBC_UOG2_ENDPTCTRL3_RXS.

//! @brief Get value of USBC_UOG2_ENDPTCTRL3_RXS from a register value.
#define BG_USBC_UOG2_ENDPTCTRL3_RXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL3_RXS) >> BP_USBC_UOG2_ENDPTCTRL3_RXS)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL3_RXS.
#define BF_USBC_UOG2_ENDPTCTRL3_RXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL3_RXS) & BM_USBC_UOG2_ENDPTCTRL3_RXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXS field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL3_RXS(v)   (HW_USBC_UOG2_ENDPTCTRL3_WR((HW_USBC_UOG2_ENDPTCTRL3_RD() & ~BM_USBC_UOG2_ENDPTCTRL3_RXS) | BF_USBC_UOG2_ENDPTCTRL3_RXS(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL3, field RXD[1] (RW)
 *
 * RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should
 * always be written as zero.
 */

#define BP_USBC_UOG2_ENDPTCTRL3_RXD      (1)      //!< Bit position for USBC_UOG2_ENDPTCTRL3_RXD.
#define BM_USBC_UOG2_ENDPTCTRL3_RXD      (0x00000002)  //!< Bit mask for USBC_UOG2_ENDPTCTRL3_RXD.

//! @brief Get value of USBC_UOG2_ENDPTCTRL3_RXD from a register value.
#define BG_USBC_UOG2_ENDPTCTRL3_RXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL3_RXD) >> BP_USBC_UOG2_ENDPTCTRL3_RXD)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL3_RXD.
#define BF_USBC_UOG2_ENDPTCTRL3_RXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL3_RXD) & BM_USBC_UOG2_ENDPTCTRL3_RXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXD field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL3_RXD(v)   (HW_USBC_UOG2_ENDPTCTRL3_WR((HW_USBC_UOG2_ENDPTCTRL3_RD() & ~BM_USBC_UOG2_ENDPTCTRL3_RXD) | BF_USBC_UOG2_ENDPTCTRL3_RXD(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL3, field RXT[3:2] (RW)
 *
 * RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
 */

#define BP_USBC_UOG2_ENDPTCTRL3_RXT      (2)      //!< Bit position for USBC_UOG2_ENDPTCTRL3_RXT.
#define BM_USBC_UOG2_ENDPTCTRL3_RXT      (0x0000000c)  //!< Bit mask for USBC_UOG2_ENDPTCTRL3_RXT.

//! @brief Get value of USBC_UOG2_ENDPTCTRL3_RXT from a register value.
#define BG_USBC_UOG2_ENDPTCTRL3_RXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL3_RXT) >> BP_USBC_UOG2_ENDPTCTRL3_RXT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL3_RXT.
#define BF_USBC_UOG2_ENDPTCTRL3_RXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL3_RXT) & BM_USBC_UOG2_ENDPTCTRL3_RXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXT field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL3_RXT(v)   (HW_USBC_UOG2_ENDPTCTRL3_WR((HW_USBC_UOG2_ENDPTCTRL3_RD() & ~BM_USBC_UOG2_ENDPTCTRL3_RXT) | BF_USBC_UOG2_ENDPTCTRL3_RXT(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL3, field RXI[5] (RW)
 *
 * RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should
 * always be written as zero. Writing a one to this bit causes this endpoint to ignore the data
 * toggle sequence and always accept data packet regardless of their data PID.
 */

#define BP_USBC_UOG2_ENDPTCTRL3_RXI      (5)      //!< Bit position for USBC_UOG2_ENDPTCTRL3_RXI.
#define BM_USBC_UOG2_ENDPTCTRL3_RXI      (0x00000020)  //!< Bit mask for USBC_UOG2_ENDPTCTRL3_RXI.

//! @brief Get value of USBC_UOG2_ENDPTCTRL3_RXI from a register value.
#define BG_USBC_UOG2_ENDPTCTRL3_RXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL3_RXI) >> BP_USBC_UOG2_ENDPTCTRL3_RXI)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL3_RXI.
#define BF_USBC_UOG2_ENDPTCTRL3_RXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL3_RXI) & BM_USBC_UOG2_ENDPTCTRL3_RXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXI field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL3_RXI(v)   (HW_USBC_UOG2_ENDPTCTRL3_WR((HW_USBC_UOG2_ENDPTCTRL3_RD() & ~BM_USBC_UOG2_ENDPTCTRL3_RXI) | BF_USBC_UOG2_ENDPTCTRL3_RXI(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL3, field RXR[6] (RW)
 *
 * RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the host and device.
 */

#define BP_USBC_UOG2_ENDPTCTRL3_RXR      (6)      //!< Bit position for USBC_UOG2_ENDPTCTRL3_RXR.
#define BM_USBC_UOG2_ENDPTCTRL3_RXR      (0x00000040)  //!< Bit mask for USBC_UOG2_ENDPTCTRL3_RXR.

//! @brief Get value of USBC_UOG2_ENDPTCTRL3_RXR from a register value.
#define BG_USBC_UOG2_ENDPTCTRL3_RXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL3_RXR) >> BP_USBC_UOG2_ENDPTCTRL3_RXR)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL3_RXR.
#define BF_USBC_UOG2_ENDPTCTRL3_RXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL3_RXR) & BM_USBC_UOG2_ENDPTCTRL3_RXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXR field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL3_RXR(v)   (HW_USBC_UOG2_ENDPTCTRL3_WR((HW_USBC_UOG2_ENDPTCTRL3_RD() & ~BM_USBC_UOG2_ENDPTCTRL3_RXR) | BF_USBC_UOG2_ENDPTCTRL3_RXR(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL3, field RXE[7] (RW)
 *
 * RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG2_ENDPTCTRL3_RXE      (7)      //!< Bit position for USBC_UOG2_ENDPTCTRL3_RXE.
#define BM_USBC_UOG2_ENDPTCTRL3_RXE      (0x00000080)  //!< Bit mask for USBC_UOG2_ENDPTCTRL3_RXE.

//! @brief Get value of USBC_UOG2_ENDPTCTRL3_RXE from a register value.
#define BG_USBC_UOG2_ENDPTCTRL3_RXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL3_RXE) >> BP_USBC_UOG2_ENDPTCTRL3_RXE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL3_RXE.
#define BF_USBC_UOG2_ENDPTCTRL3_RXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL3_RXE) & BM_USBC_UOG2_ENDPTCTRL3_RXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXE field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL3_RXE(v)   (HW_USBC_UOG2_ENDPTCTRL3_WR((HW_USBC_UOG2_ENDPTCTRL3_RD() & ~BM_USBC_UOG2_ENDPTCTRL3_RXE) | BF_USBC_UOG2_ENDPTCTRL3_RXE(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL3, field TXS[16] (RW)
 *
 * TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically
 * upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint. It is
 * cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control
 * Endpoint. Software can write a one to this bit to force the endpoint to return a STALL handshake
 * to the Host. It continues to returning STALL until this bit is either cleared by software or
 * automatically cleared as above. For CONTROL type endpoint, there is a slight delay (50 clocks
 * max) between the ENDPTSETUPSTAT begin cleared and hardware continuing to clear this bit. In most
 * systems, it is unlikely the DCD software will observe this delay. Take care that the STALL bit is
 * not set immediately after writing a '1' to it. Please follow this procedure: continually write
 * this STALL bit until it is set or until a new setup has ben received by checking the associated
 * ENDPTSETUPSTAT bit.
 */

#define BP_USBC_UOG2_ENDPTCTRL3_TXS      (16)      //!< Bit position for USBC_UOG2_ENDPTCTRL3_TXS.
#define BM_USBC_UOG2_ENDPTCTRL3_TXS      (0x00010000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL3_TXS.

//! @brief Get value of USBC_UOG2_ENDPTCTRL3_TXS from a register value.
#define BG_USBC_UOG2_ENDPTCTRL3_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL3_TXS) >> BP_USBC_UOG2_ENDPTCTRL3_TXS)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL3_TXS.
#define BF_USBC_UOG2_ENDPTCTRL3_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL3_TXS) & BM_USBC_UOG2_ENDPTCTRL3_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL3_TXS(v)   (HW_USBC_UOG2_ENDPTCTRL3_WR((HW_USBC_UOG2_ENDPTCTRL3_RD() & ~BM_USBC_UOG2_ENDPTCTRL3_TXS) | BF_USBC_UOG2_ENDPTCTRL3_TXS(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL3, field TXD[17] (RW)
 *
 * TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always
 * be written as 0.
 */

#define BP_USBC_UOG2_ENDPTCTRL3_TXD      (17)      //!< Bit position for USBC_UOG2_ENDPTCTRL3_TXD.
#define BM_USBC_UOG2_ENDPTCTRL3_TXD      (0x00020000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL3_TXD.

//! @brief Get value of USBC_UOG2_ENDPTCTRL3_TXD from a register value.
#define BG_USBC_UOG2_ENDPTCTRL3_TXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL3_TXD) >> BP_USBC_UOG2_ENDPTCTRL3_TXD)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL3_TXD.
#define BF_USBC_UOG2_ENDPTCTRL3_TXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL3_TXD) & BM_USBC_UOG2_ENDPTCTRL3_TXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXD field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL3_TXD(v)   (HW_USBC_UOG2_ENDPTCTRL3_WR((HW_USBC_UOG2_ENDPTCTRL3_RD() & ~BM_USBC_UOG2_ENDPTCTRL3_TXD) | BF_USBC_UOG2_ENDPTCTRL3_TXD(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL3, field TXT[19:18] (RW)
 *
 * TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 */

#define BP_USBC_UOG2_ENDPTCTRL3_TXT      (18)      //!< Bit position for USBC_UOG2_ENDPTCTRL3_TXT.
#define BM_USBC_UOG2_ENDPTCTRL3_TXT      (0x000c0000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL3_TXT.

//! @brief Get value of USBC_UOG2_ENDPTCTRL3_TXT from a register value.
#define BG_USBC_UOG2_ENDPTCTRL3_TXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL3_TXT) >> BP_USBC_UOG2_ENDPTCTRL3_TXT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL3_TXT.
#define BF_USBC_UOG2_ENDPTCTRL3_TXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL3_TXT) & BM_USBC_UOG2_ENDPTCTRL3_TXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXT field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL3_TXT(v)   (HW_USBC_UOG2_ENDPTCTRL3_WR((HW_USBC_UOG2_ENDPTCTRL3_RD() & ~BM_USBC_UOG2_ENDPTCTRL3_TXT) | BF_USBC_UOG2_ENDPTCTRL3_TXT(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL3, field TXI[21] (RW)
 *
 * TX Data Toggle Inhibit 0 PID Sequencing Enabled. [Default] 1 PID Sequencing Disabled. This bit is
 * only used for test and should always be written as zero. Writing a one to this bit causes this
 * endpoint to ignore the data toggle sequence and always transmit DATA0 for a data packet.
 */

#define BP_USBC_UOG2_ENDPTCTRL3_TXI      (21)      //!< Bit position for USBC_UOG2_ENDPTCTRL3_TXI.
#define BM_USBC_UOG2_ENDPTCTRL3_TXI      (0x00200000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL3_TXI.

//! @brief Get value of USBC_UOG2_ENDPTCTRL3_TXI from a register value.
#define BG_USBC_UOG2_ENDPTCTRL3_TXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL3_TXI) >> BP_USBC_UOG2_ENDPTCTRL3_TXI)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL3_TXI.
#define BF_USBC_UOG2_ENDPTCTRL3_TXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL3_TXI) & BM_USBC_UOG2_ENDPTCTRL3_TXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXI field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL3_TXI(v)   (HW_USBC_UOG2_ENDPTCTRL3_WR((HW_USBC_UOG2_ENDPTCTRL3_RD() & ~BM_USBC_UOG2_ENDPTCTRL3_TXI) | BF_USBC_UOG2_ENDPTCTRL3_TXI(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL3, field TXR[22] (RW)
 *
 * TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the Host and device.
 */

#define BP_USBC_UOG2_ENDPTCTRL3_TXR      (22)      //!< Bit position for USBC_UOG2_ENDPTCTRL3_TXR.
#define BM_USBC_UOG2_ENDPTCTRL3_TXR      (0x00400000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL3_TXR.

//! @brief Get value of USBC_UOG2_ENDPTCTRL3_TXR from a register value.
#define BG_USBC_UOG2_ENDPTCTRL3_TXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL3_TXR) >> BP_USBC_UOG2_ENDPTCTRL3_TXR)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL3_TXR.
#define BF_USBC_UOG2_ENDPTCTRL3_TXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL3_TXR) & BM_USBC_UOG2_ENDPTCTRL3_TXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXR field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL3_TXR(v)   (HW_USBC_UOG2_ENDPTCTRL3_WR((HW_USBC_UOG2_ENDPTCTRL3_RD() & ~BM_USBC_UOG2_ENDPTCTRL3_TXR) | BF_USBC_UOG2_ENDPTCTRL3_TXR(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL3, field TXE[23] (RW)
 *
 * TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG2_ENDPTCTRL3_TXE      (23)      //!< Bit position for USBC_UOG2_ENDPTCTRL3_TXE.
#define BM_USBC_UOG2_ENDPTCTRL3_TXE      (0x00800000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL3_TXE.

//! @brief Get value of USBC_UOG2_ENDPTCTRL3_TXE from a register value.
#define BG_USBC_UOG2_ENDPTCTRL3_TXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL3_TXE) >> BP_USBC_UOG2_ENDPTCTRL3_TXE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL3_TXE.
#define BF_USBC_UOG2_ENDPTCTRL3_TXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL3_TXE) & BM_USBC_UOG2_ENDPTCTRL3_TXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXE field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL3_TXE(v)   (HW_USBC_UOG2_ENDPTCTRL3_WR((HW_USBC_UOG2_ENDPTCTRL3_RD() & ~BM_USBC_UOG2_ENDPTCTRL3_TXE) | BF_USBC_UOG2_ENDPTCTRL3_TXE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ENDPTCTRL4 - Endpoint Control 4
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ENDPTCTRL4 - Endpoint Control 4 (RW)
 *
 * Reset value: 0x00000000
 *
 * This is endpoint control register for endpoint 4 in device operation mode.  If one endpoint
 * direction is enabled and the paired endpoint of opposite direction is disabled then the unused
 * direction type must be changed from the default control-type to any other type (that is Bulk-
 * type). leaving an unconfigured endpoint control causes undefined behavior for the data pid
 * tracking on the active endpoint/direction.
 */
typedef union _hw_usbc_uog2_endptctrl4
{
    reg32_t U;
    struct _hw_usbc_uog2_endptctrl4_bitfields
    {
        unsigned RXS : 1; //!< [0] RX Endpoint Stall - Read/Write 0 End Point OK.
        unsigned RXD : 1; //!< [1] RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should always be written as zero.
        unsigned RXT : 2; //!< [3:2] RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
        unsigned RESERVED0 : 1; //!< [4] Reserved.
        unsigned RXI : 1; //!< [5] RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should always be written as zero.
        unsigned RXR : 1; //!< [6] RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the host and device.
        unsigned RXE : 1; //!< [7] RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED1 : 8; //!< [15:8] Reserved
        unsigned TXS : 1; //!< [16] TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint.
        unsigned TXD : 1; //!< [17] TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always be written as 0.
        unsigned TXT : 2; //!< [19:18] TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
        unsigned RESERVED2 : 1; //!< [20] Reserved
        unsigned TXI : 1; //!< [21] TX Data Toggle Inhibit 0 PID Sequencing Enabled.
        unsigned TXR : 1; //!< [22] TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the Host and device.
        unsigned TXE : 1; //!< [23] TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_endptctrl4_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ENDPTCTRL4 register
 */
#define HW_USBC_UOG2_ENDPTCTRL4_ADDR      (REGS_USBC_BASE + 0x3d0)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ENDPTCTRL4           (*(volatile hw_usbc_uog2_endptctrl4_t *) HW_USBC_UOG2_ENDPTCTRL4_ADDR)
#define HW_USBC_UOG2_ENDPTCTRL4_RD()      (HW_USBC_UOG2_ENDPTCTRL4.U)
#define HW_USBC_UOG2_ENDPTCTRL4_WR(v)     (HW_USBC_UOG2_ENDPTCTRL4.U = (v))
#define HW_USBC_UOG2_ENDPTCTRL4_SET(v)    (HW_USBC_UOG2_ENDPTCTRL4_WR(HW_USBC_UOG2_ENDPTCTRL4_RD() |  (v)))
#define HW_USBC_UOG2_ENDPTCTRL4_CLR(v)    (HW_USBC_UOG2_ENDPTCTRL4_WR(HW_USBC_UOG2_ENDPTCTRL4_RD() & ~(v)))
#define HW_USBC_UOG2_ENDPTCTRL4_TOG(v)    (HW_USBC_UOG2_ENDPTCTRL4_WR(HW_USBC_UOG2_ENDPTCTRL4_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_ENDPTCTRL4 bitfields
 */

/* --- Register HW_USBC_UOG2_ENDPTCTRL4, field RXS[0] (RW)
 *
 * RX Endpoint Stall - Read/Write 0 End Point OK. [Default] 1 End Point Stalled This bit is set
 * automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control
 * Endpoint. It is cleared automatically upon receipt a SETUP request if this Endpoint is configured
 * as a Control Endpoint, Software can write a one to this bit to force the endpoint to return a
 * STALL handshake to the Host. It continues to returning STALL until this bit is either cleared by
 * software or automatically cleared as above.
 */

#define BP_USBC_UOG2_ENDPTCTRL4_RXS      (0)      //!< Bit position for USBC_UOG2_ENDPTCTRL4_RXS.
#define BM_USBC_UOG2_ENDPTCTRL4_RXS      (0x00000001)  //!< Bit mask for USBC_UOG2_ENDPTCTRL4_RXS.

//! @brief Get value of USBC_UOG2_ENDPTCTRL4_RXS from a register value.
#define BG_USBC_UOG2_ENDPTCTRL4_RXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL4_RXS) >> BP_USBC_UOG2_ENDPTCTRL4_RXS)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL4_RXS.
#define BF_USBC_UOG2_ENDPTCTRL4_RXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL4_RXS) & BM_USBC_UOG2_ENDPTCTRL4_RXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXS field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL4_RXS(v)   (HW_USBC_UOG2_ENDPTCTRL4_WR((HW_USBC_UOG2_ENDPTCTRL4_RD() & ~BM_USBC_UOG2_ENDPTCTRL4_RXS) | BF_USBC_UOG2_ENDPTCTRL4_RXS(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL4, field RXD[1] (RW)
 *
 * RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should
 * always be written as zero.
 */

#define BP_USBC_UOG2_ENDPTCTRL4_RXD      (1)      //!< Bit position for USBC_UOG2_ENDPTCTRL4_RXD.
#define BM_USBC_UOG2_ENDPTCTRL4_RXD      (0x00000002)  //!< Bit mask for USBC_UOG2_ENDPTCTRL4_RXD.

//! @brief Get value of USBC_UOG2_ENDPTCTRL4_RXD from a register value.
#define BG_USBC_UOG2_ENDPTCTRL4_RXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL4_RXD) >> BP_USBC_UOG2_ENDPTCTRL4_RXD)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL4_RXD.
#define BF_USBC_UOG2_ENDPTCTRL4_RXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL4_RXD) & BM_USBC_UOG2_ENDPTCTRL4_RXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXD field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL4_RXD(v)   (HW_USBC_UOG2_ENDPTCTRL4_WR((HW_USBC_UOG2_ENDPTCTRL4_RD() & ~BM_USBC_UOG2_ENDPTCTRL4_RXD) | BF_USBC_UOG2_ENDPTCTRL4_RXD(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL4, field RXT[3:2] (RW)
 *
 * RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
 */

#define BP_USBC_UOG2_ENDPTCTRL4_RXT      (2)      //!< Bit position for USBC_UOG2_ENDPTCTRL4_RXT.
#define BM_USBC_UOG2_ENDPTCTRL4_RXT      (0x0000000c)  //!< Bit mask for USBC_UOG2_ENDPTCTRL4_RXT.

//! @brief Get value of USBC_UOG2_ENDPTCTRL4_RXT from a register value.
#define BG_USBC_UOG2_ENDPTCTRL4_RXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL4_RXT) >> BP_USBC_UOG2_ENDPTCTRL4_RXT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL4_RXT.
#define BF_USBC_UOG2_ENDPTCTRL4_RXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL4_RXT) & BM_USBC_UOG2_ENDPTCTRL4_RXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXT field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL4_RXT(v)   (HW_USBC_UOG2_ENDPTCTRL4_WR((HW_USBC_UOG2_ENDPTCTRL4_RD() & ~BM_USBC_UOG2_ENDPTCTRL4_RXT) | BF_USBC_UOG2_ENDPTCTRL4_RXT(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL4, field RXI[5] (RW)
 *
 * RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should
 * always be written as zero. Writing a one to this bit causes this endpoint to ignore the data
 * toggle sequence and always accept data packet regardless of their data PID.
 */

#define BP_USBC_UOG2_ENDPTCTRL4_RXI      (5)      //!< Bit position for USBC_UOG2_ENDPTCTRL4_RXI.
#define BM_USBC_UOG2_ENDPTCTRL4_RXI      (0x00000020)  //!< Bit mask for USBC_UOG2_ENDPTCTRL4_RXI.

//! @brief Get value of USBC_UOG2_ENDPTCTRL4_RXI from a register value.
#define BG_USBC_UOG2_ENDPTCTRL4_RXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL4_RXI) >> BP_USBC_UOG2_ENDPTCTRL4_RXI)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL4_RXI.
#define BF_USBC_UOG2_ENDPTCTRL4_RXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL4_RXI) & BM_USBC_UOG2_ENDPTCTRL4_RXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXI field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL4_RXI(v)   (HW_USBC_UOG2_ENDPTCTRL4_WR((HW_USBC_UOG2_ENDPTCTRL4_RD() & ~BM_USBC_UOG2_ENDPTCTRL4_RXI) | BF_USBC_UOG2_ENDPTCTRL4_RXI(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL4, field RXR[6] (RW)
 *
 * RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the host and device.
 */

#define BP_USBC_UOG2_ENDPTCTRL4_RXR      (6)      //!< Bit position for USBC_UOG2_ENDPTCTRL4_RXR.
#define BM_USBC_UOG2_ENDPTCTRL4_RXR      (0x00000040)  //!< Bit mask for USBC_UOG2_ENDPTCTRL4_RXR.

//! @brief Get value of USBC_UOG2_ENDPTCTRL4_RXR from a register value.
#define BG_USBC_UOG2_ENDPTCTRL4_RXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL4_RXR) >> BP_USBC_UOG2_ENDPTCTRL4_RXR)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL4_RXR.
#define BF_USBC_UOG2_ENDPTCTRL4_RXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL4_RXR) & BM_USBC_UOG2_ENDPTCTRL4_RXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXR field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL4_RXR(v)   (HW_USBC_UOG2_ENDPTCTRL4_WR((HW_USBC_UOG2_ENDPTCTRL4_RD() & ~BM_USBC_UOG2_ENDPTCTRL4_RXR) | BF_USBC_UOG2_ENDPTCTRL4_RXR(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL4, field RXE[7] (RW)
 *
 * RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG2_ENDPTCTRL4_RXE      (7)      //!< Bit position for USBC_UOG2_ENDPTCTRL4_RXE.
#define BM_USBC_UOG2_ENDPTCTRL4_RXE      (0x00000080)  //!< Bit mask for USBC_UOG2_ENDPTCTRL4_RXE.

//! @brief Get value of USBC_UOG2_ENDPTCTRL4_RXE from a register value.
#define BG_USBC_UOG2_ENDPTCTRL4_RXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL4_RXE) >> BP_USBC_UOG2_ENDPTCTRL4_RXE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL4_RXE.
#define BF_USBC_UOG2_ENDPTCTRL4_RXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL4_RXE) & BM_USBC_UOG2_ENDPTCTRL4_RXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXE field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL4_RXE(v)   (HW_USBC_UOG2_ENDPTCTRL4_WR((HW_USBC_UOG2_ENDPTCTRL4_RD() & ~BM_USBC_UOG2_ENDPTCTRL4_RXE) | BF_USBC_UOG2_ENDPTCTRL4_RXE(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL4, field TXS[16] (RW)
 *
 * TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically
 * upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint. It is
 * cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control
 * Endpoint. Software can write a one to this bit to force the endpoint to return a STALL handshake
 * to the Host. It continues to returning STALL until this bit is either cleared by software or
 * automatically cleared as above. For CONTROL type endpoint, there is a slight delay (50 clocks
 * max) between the ENDPTSETUPSTAT begin cleared and hardware continuing to clear this bit. In most
 * systems, it is unlikely the DCD software will observe this delay. Take care that the STALL bit is
 * not set immediately after writing a '1' to it. Please follow this procedure: continually write
 * this STALL bit until it is set or until a new setup has ben received by checking the associated
 * ENDPTSETUPSTAT bit.
 */

#define BP_USBC_UOG2_ENDPTCTRL4_TXS      (16)      //!< Bit position for USBC_UOG2_ENDPTCTRL4_TXS.
#define BM_USBC_UOG2_ENDPTCTRL4_TXS      (0x00010000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL4_TXS.

//! @brief Get value of USBC_UOG2_ENDPTCTRL4_TXS from a register value.
#define BG_USBC_UOG2_ENDPTCTRL4_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL4_TXS) >> BP_USBC_UOG2_ENDPTCTRL4_TXS)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL4_TXS.
#define BF_USBC_UOG2_ENDPTCTRL4_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL4_TXS) & BM_USBC_UOG2_ENDPTCTRL4_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL4_TXS(v)   (HW_USBC_UOG2_ENDPTCTRL4_WR((HW_USBC_UOG2_ENDPTCTRL4_RD() & ~BM_USBC_UOG2_ENDPTCTRL4_TXS) | BF_USBC_UOG2_ENDPTCTRL4_TXS(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL4, field TXD[17] (RW)
 *
 * TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always
 * be written as 0.
 */

#define BP_USBC_UOG2_ENDPTCTRL4_TXD      (17)      //!< Bit position for USBC_UOG2_ENDPTCTRL4_TXD.
#define BM_USBC_UOG2_ENDPTCTRL4_TXD      (0x00020000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL4_TXD.

//! @brief Get value of USBC_UOG2_ENDPTCTRL4_TXD from a register value.
#define BG_USBC_UOG2_ENDPTCTRL4_TXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL4_TXD) >> BP_USBC_UOG2_ENDPTCTRL4_TXD)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL4_TXD.
#define BF_USBC_UOG2_ENDPTCTRL4_TXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL4_TXD) & BM_USBC_UOG2_ENDPTCTRL4_TXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXD field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL4_TXD(v)   (HW_USBC_UOG2_ENDPTCTRL4_WR((HW_USBC_UOG2_ENDPTCTRL4_RD() & ~BM_USBC_UOG2_ENDPTCTRL4_TXD) | BF_USBC_UOG2_ENDPTCTRL4_TXD(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL4, field TXT[19:18] (RW)
 *
 * TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 */

#define BP_USBC_UOG2_ENDPTCTRL4_TXT      (18)      //!< Bit position for USBC_UOG2_ENDPTCTRL4_TXT.
#define BM_USBC_UOG2_ENDPTCTRL4_TXT      (0x000c0000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL4_TXT.

//! @brief Get value of USBC_UOG2_ENDPTCTRL4_TXT from a register value.
#define BG_USBC_UOG2_ENDPTCTRL4_TXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL4_TXT) >> BP_USBC_UOG2_ENDPTCTRL4_TXT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL4_TXT.
#define BF_USBC_UOG2_ENDPTCTRL4_TXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL4_TXT) & BM_USBC_UOG2_ENDPTCTRL4_TXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXT field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL4_TXT(v)   (HW_USBC_UOG2_ENDPTCTRL4_WR((HW_USBC_UOG2_ENDPTCTRL4_RD() & ~BM_USBC_UOG2_ENDPTCTRL4_TXT) | BF_USBC_UOG2_ENDPTCTRL4_TXT(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL4, field TXI[21] (RW)
 *
 * TX Data Toggle Inhibit 0 PID Sequencing Enabled. [Default] 1 PID Sequencing Disabled. This bit is
 * only used for test and should always be written as zero. Writing a one to this bit causes this
 * endpoint to ignore the data toggle sequence and always transmit DATA0 for a data packet.
 */

#define BP_USBC_UOG2_ENDPTCTRL4_TXI      (21)      //!< Bit position for USBC_UOG2_ENDPTCTRL4_TXI.
#define BM_USBC_UOG2_ENDPTCTRL4_TXI      (0x00200000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL4_TXI.

//! @brief Get value of USBC_UOG2_ENDPTCTRL4_TXI from a register value.
#define BG_USBC_UOG2_ENDPTCTRL4_TXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL4_TXI) >> BP_USBC_UOG2_ENDPTCTRL4_TXI)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL4_TXI.
#define BF_USBC_UOG2_ENDPTCTRL4_TXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL4_TXI) & BM_USBC_UOG2_ENDPTCTRL4_TXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXI field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL4_TXI(v)   (HW_USBC_UOG2_ENDPTCTRL4_WR((HW_USBC_UOG2_ENDPTCTRL4_RD() & ~BM_USBC_UOG2_ENDPTCTRL4_TXI) | BF_USBC_UOG2_ENDPTCTRL4_TXI(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL4, field TXR[22] (RW)
 *
 * TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the Host and device.
 */

#define BP_USBC_UOG2_ENDPTCTRL4_TXR      (22)      //!< Bit position for USBC_UOG2_ENDPTCTRL4_TXR.
#define BM_USBC_UOG2_ENDPTCTRL4_TXR      (0x00400000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL4_TXR.

//! @brief Get value of USBC_UOG2_ENDPTCTRL4_TXR from a register value.
#define BG_USBC_UOG2_ENDPTCTRL4_TXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL4_TXR) >> BP_USBC_UOG2_ENDPTCTRL4_TXR)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL4_TXR.
#define BF_USBC_UOG2_ENDPTCTRL4_TXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL4_TXR) & BM_USBC_UOG2_ENDPTCTRL4_TXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXR field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL4_TXR(v)   (HW_USBC_UOG2_ENDPTCTRL4_WR((HW_USBC_UOG2_ENDPTCTRL4_RD() & ~BM_USBC_UOG2_ENDPTCTRL4_TXR) | BF_USBC_UOG2_ENDPTCTRL4_TXR(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL4, field TXE[23] (RW)
 *
 * TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG2_ENDPTCTRL4_TXE      (23)      //!< Bit position for USBC_UOG2_ENDPTCTRL4_TXE.
#define BM_USBC_UOG2_ENDPTCTRL4_TXE      (0x00800000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL4_TXE.

//! @brief Get value of USBC_UOG2_ENDPTCTRL4_TXE from a register value.
#define BG_USBC_UOG2_ENDPTCTRL4_TXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL4_TXE) >> BP_USBC_UOG2_ENDPTCTRL4_TXE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL4_TXE.
#define BF_USBC_UOG2_ENDPTCTRL4_TXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL4_TXE) & BM_USBC_UOG2_ENDPTCTRL4_TXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXE field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL4_TXE(v)   (HW_USBC_UOG2_ENDPTCTRL4_WR((HW_USBC_UOG2_ENDPTCTRL4_RD() & ~BM_USBC_UOG2_ENDPTCTRL4_TXE) | BF_USBC_UOG2_ENDPTCTRL4_TXE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ENDPTCTRL5 - Endpoint Control 5
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ENDPTCTRL5 - Endpoint Control 5 (RW)
 *
 * Reset value: 0x00000000
 *
 * This is endpoint control register for endpoint 5 in device operation mode.  If one endpoint
 * direction is enabled and the paired endpoint of opposite direction is disabled then the unused
 * direction type must be changed from the default control-type to any other type (that is Bulk-
 * type). leaving an unconfigured endpoint control causes undefined behavior for the data pid
 * tracking on the active endpoint/direction.
 */
typedef union _hw_usbc_uog2_endptctrl5
{
    reg32_t U;
    struct _hw_usbc_uog2_endptctrl5_bitfields
    {
        unsigned RXS : 1; //!< [0] RX Endpoint Stall - Read/Write 0 End Point OK.
        unsigned RXD : 1; //!< [1] RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should always be written as zero.
        unsigned RXT : 2; //!< [3:2] RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
        unsigned RESERVED0 : 1; //!< [4] Reserved.
        unsigned RXI : 1; //!< [5] RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should always be written as zero.
        unsigned RXR : 1; //!< [6] RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the host and device.
        unsigned RXE : 1; //!< [7] RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED1 : 8; //!< [15:8] Reserved
        unsigned TXS : 1; //!< [16] TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint.
        unsigned TXD : 1; //!< [17] TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always be written as 0.
        unsigned TXT : 2; //!< [19:18] TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
        unsigned RESERVED2 : 1; //!< [20] Reserved
        unsigned TXI : 1; //!< [21] TX Data Toggle Inhibit 0 PID Sequencing Enabled.
        unsigned TXR : 1; //!< [22] TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the Host and device.
        unsigned TXE : 1; //!< [23] TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_endptctrl5_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ENDPTCTRL5 register
 */
#define HW_USBC_UOG2_ENDPTCTRL5_ADDR      (REGS_USBC_BASE + 0x3d4)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ENDPTCTRL5           (*(volatile hw_usbc_uog2_endptctrl5_t *) HW_USBC_UOG2_ENDPTCTRL5_ADDR)
#define HW_USBC_UOG2_ENDPTCTRL5_RD()      (HW_USBC_UOG2_ENDPTCTRL5.U)
#define HW_USBC_UOG2_ENDPTCTRL5_WR(v)     (HW_USBC_UOG2_ENDPTCTRL5.U = (v))
#define HW_USBC_UOG2_ENDPTCTRL5_SET(v)    (HW_USBC_UOG2_ENDPTCTRL5_WR(HW_USBC_UOG2_ENDPTCTRL5_RD() |  (v)))
#define HW_USBC_UOG2_ENDPTCTRL5_CLR(v)    (HW_USBC_UOG2_ENDPTCTRL5_WR(HW_USBC_UOG2_ENDPTCTRL5_RD() & ~(v)))
#define HW_USBC_UOG2_ENDPTCTRL5_TOG(v)    (HW_USBC_UOG2_ENDPTCTRL5_WR(HW_USBC_UOG2_ENDPTCTRL5_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_ENDPTCTRL5 bitfields
 */

/* --- Register HW_USBC_UOG2_ENDPTCTRL5, field RXS[0] (RW)
 *
 * RX Endpoint Stall - Read/Write 0 End Point OK. [Default] 1 End Point Stalled This bit is set
 * automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control
 * Endpoint. It is cleared automatically upon receipt a SETUP request if this Endpoint is configured
 * as a Control Endpoint, Software can write a one to this bit to force the endpoint to return a
 * STALL handshake to the Host. It continues to returning STALL until this bit is either cleared by
 * software or automatically cleared as above.
 */

#define BP_USBC_UOG2_ENDPTCTRL5_RXS      (0)      //!< Bit position for USBC_UOG2_ENDPTCTRL5_RXS.
#define BM_USBC_UOG2_ENDPTCTRL5_RXS      (0x00000001)  //!< Bit mask for USBC_UOG2_ENDPTCTRL5_RXS.

//! @brief Get value of USBC_UOG2_ENDPTCTRL5_RXS from a register value.
#define BG_USBC_UOG2_ENDPTCTRL5_RXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL5_RXS) >> BP_USBC_UOG2_ENDPTCTRL5_RXS)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL5_RXS.
#define BF_USBC_UOG2_ENDPTCTRL5_RXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL5_RXS) & BM_USBC_UOG2_ENDPTCTRL5_RXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXS field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL5_RXS(v)   (HW_USBC_UOG2_ENDPTCTRL5_WR((HW_USBC_UOG2_ENDPTCTRL5_RD() & ~BM_USBC_UOG2_ENDPTCTRL5_RXS) | BF_USBC_UOG2_ENDPTCTRL5_RXS(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL5, field RXD[1] (RW)
 *
 * RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should
 * always be written as zero.
 */

#define BP_USBC_UOG2_ENDPTCTRL5_RXD      (1)      //!< Bit position for USBC_UOG2_ENDPTCTRL5_RXD.
#define BM_USBC_UOG2_ENDPTCTRL5_RXD      (0x00000002)  //!< Bit mask for USBC_UOG2_ENDPTCTRL5_RXD.

//! @brief Get value of USBC_UOG2_ENDPTCTRL5_RXD from a register value.
#define BG_USBC_UOG2_ENDPTCTRL5_RXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL5_RXD) >> BP_USBC_UOG2_ENDPTCTRL5_RXD)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL5_RXD.
#define BF_USBC_UOG2_ENDPTCTRL5_RXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL5_RXD) & BM_USBC_UOG2_ENDPTCTRL5_RXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXD field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL5_RXD(v)   (HW_USBC_UOG2_ENDPTCTRL5_WR((HW_USBC_UOG2_ENDPTCTRL5_RD() & ~BM_USBC_UOG2_ENDPTCTRL5_RXD) | BF_USBC_UOG2_ENDPTCTRL5_RXD(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL5, field RXT[3:2] (RW)
 *
 * RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
 */

#define BP_USBC_UOG2_ENDPTCTRL5_RXT      (2)      //!< Bit position for USBC_UOG2_ENDPTCTRL5_RXT.
#define BM_USBC_UOG2_ENDPTCTRL5_RXT      (0x0000000c)  //!< Bit mask for USBC_UOG2_ENDPTCTRL5_RXT.

//! @brief Get value of USBC_UOG2_ENDPTCTRL5_RXT from a register value.
#define BG_USBC_UOG2_ENDPTCTRL5_RXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL5_RXT) >> BP_USBC_UOG2_ENDPTCTRL5_RXT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL5_RXT.
#define BF_USBC_UOG2_ENDPTCTRL5_RXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL5_RXT) & BM_USBC_UOG2_ENDPTCTRL5_RXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXT field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL5_RXT(v)   (HW_USBC_UOG2_ENDPTCTRL5_WR((HW_USBC_UOG2_ENDPTCTRL5_RD() & ~BM_USBC_UOG2_ENDPTCTRL5_RXT) | BF_USBC_UOG2_ENDPTCTRL5_RXT(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL5, field RXI[5] (RW)
 *
 * RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should
 * always be written as zero. Writing a one to this bit causes this endpoint to ignore the data
 * toggle sequence and always accept data packet regardless of their data PID.
 */

#define BP_USBC_UOG2_ENDPTCTRL5_RXI      (5)      //!< Bit position for USBC_UOG2_ENDPTCTRL5_RXI.
#define BM_USBC_UOG2_ENDPTCTRL5_RXI      (0x00000020)  //!< Bit mask for USBC_UOG2_ENDPTCTRL5_RXI.

//! @brief Get value of USBC_UOG2_ENDPTCTRL5_RXI from a register value.
#define BG_USBC_UOG2_ENDPTCTRL5_RXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL5_RXI) >> BP_USBC_UOG2_ENDPTCTRL5_RXI)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL5_RXI.
#define BF_USBC_UOG2_ENDPTCTRL5_RXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL5_RXI) & BM_USBC_UOG2_ENDPTCTRL5_RXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXI field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL5_RXI(v)   (HW_USBC_UOG2_ENDPTCTRL5_WR((HW_USBC_UOG2_ENDPTCTRL5_RD() & ~BM_USBC_UOG2_ENDPTCTRL5_RXI) | BF_USBC_UOG2_ENDPTCTRL5_RXI(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL5, field RXR[6] (RW)
 *
 * RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the host and device.
 */

#define BP_USBC_UOG2_ENDPTCTRL5_RXR      (6)      //!< Bit position for USBC_UOG2_ENDPTCTRL5_RXR.
#define BM_USBC_UOG2_ENDPTCTRL5_RXR      (0x00000040)  //!< Bit mask for USBC_UOG2_ENDPTCTRL5_RXR.

//! @brief Get value of USBC_UOG2_ENDPTCTRL5_RXR from a register value.
#define BG_USBC_UOG2_ENDPTCTRL5_RXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL5_RXR) >> BP_USBC_UOG2_ENDPTCTRL5_RXR)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL5_RXR.
#define BF_USBC_UOG2_ENDPTCTRL5_RXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL5_RXR) & BM_USBC_UOG2_ENDPTCTRL5_RXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXR field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL5_RXR(v)   (HW_USBC_UOG2_ENDPTCTRL5_WR((HW_USBC_UOG2_ENDPTCTRL5_RD() & ~BM_USBC_UOG2_ENDPTCTRL5_RXR) | BF_USBC_UOG2_ENDPTCTRL5_RXR(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL5, field RXE[7] (RW)
 *
 * RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG2_ENDPTCTRL5_RXE      (7)      //!< Bit position for USBC_UOG2_ENDPTCTRL5_RXE.
#define BM_USBC_UOG2_ENDPTCTRL5_RXE      (0x00000080)  //!< Bit mask for USBC_UOG2_ENDPTCTRL5_RXE.

//! @brief Get value of USBC_UOG2_ENDPTCTRL5_RXE from a register value.
#define BG_USBC_UOG2_ENDPTCTRL5_RXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL5_RXE) >> BP_USBC_UOG2_ENDPTCTRL5_RXE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL5_RXE.
#define BF_USBC_UOG2_ENDPTCTRL5_RXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL5_RXE) & BM_USBC_UOG2_ENDPTCTRL5_RXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXE field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL5_RXE(v)   (HW_USBC_UOG2_ENDPTCTRL5_WR((HW_USBC_UOG2_ENDPTCTRL5_RD() & ~BM_USBC_UOG2_ENDPTCTRL5_RXE) | BF_USBC_UOG2_ENDPTCTRL5_RXE(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL5, field TXS[16] (RW)
 *
 * TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically
 * upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint. It is
 * cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control
 * Endpoint. Software can write a one to this bit to force the endpoint to return a STALL handshake
 * to the Host. It continues to returning STALL until this bit is either cleared by software or
 * automatically cleared as above. For CONTROL type endpoint, there is a slight delay (50 clocks
 * max) between the ENDPTSETUPSTAT begin cleared and hardware continuing to clear this bit. In most
 * systems, it is unlikely the DCD software will observe this delay. Take care that the STALL bit is
 * not set immediately after writing a '1' to it. Please follow this procedure: continually write
 * this STALL bit until it is set or until a new setup has ben received by checking the associated
 * ENDPTSETUPSTAT bit.
 */

#define BP_USBC_UOG2_ENDPTCTRL5_TXS      (16)      //!< Bit position for USBC_UOG2_ENDPTCTRL5_TXS.
#define BM_USBC_UOG2_ENDPTCTRL5_TXS      (0x00010000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL5_TXS.

//! @brief Get value of USBC_UOG2_ENDPTCTRL5_TXS from a register value.
#define BG_USBC_UOG2_ENDPTCTRL5_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL5_TXS) >> BP_USBC_UOG2_ENDPTCTRL5_TXS)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL5_TXS.
#define BF_USBC_UOG2_ENDPTCTRL5_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL5_TXS) & BM_USBC_UOG2_ENDPTCTRL5_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL5_TXS(v)   (HW_USBC_UOG2_ENDPTCTRL5_WR((HW_USBC_UOG2_ENDPTCTRL5_RD() & ~BM_USBC_UOG2_ENDPTCTRL5_TXS) | BF_USBC_UOG2_ENDPTCTRL5_TXS(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL5, field TXD[17] (RW)
 *
 * TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always
 * be written as 0.
 */

#define BP_USBC_UOG2_ENDPTCTRL5_TXD      (17)      //!< Bit position for USBC_UOG2_ENDPTCTRL5_TXD.
#define BM_USBC_UOG2_ENDPTCTRL5_TXD      (0x00020000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL5_TXD.

//! @brief Get value of USBC_UOG2_ENDPTCTRL5_TXD from a register value.
#define BG_USBC_UOG2_ENDPTCTRL5_TXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL5_TXD) >> BP_USBC_UOG2_ENDPTCTRL5_TXD)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL5_TXD.
#define BF_USBC_UOG2_ENDPTCTRL5_TXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL5_TXD) & BM_USBC_UOG2_ENDPTCTRL5_TXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXD field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL5_TXD(v)   (HW_USBC_UOG2_ENDPTCTRL5_WR((HW_USBC_UOG2_ENDPTCTRL5_RD() & ~BM_USBC_UOG2_ENDPTCTRL5_TXD) | BF_USBC_UOG2_ENDPTCTRL5_TXD(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL5, field TXT[19:18] (RW)
 *
 * TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 */

#define BP_USBC_UOG2_ENDPTCTRL5_TXT      (18)      //!< Bit position for USBC_UOG2_ENDPTCTRL5_TXT.
#define BM_USBC_UOG2_ENDPTCTRL5_TXT      (0x000c0000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL5_TXT.

//! @brief Get value of USBC_UOG2_ENDPTCTRL5_TXT from a register value.
#define BG_USBC_UOG2_ENDPTCTRL5_TXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL5_TXT) >> BP_USBC_UOG2_ENDPTCTRL5_TXT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL5_TXT.
#define BF_USBC_UOG2_ENDPTCTRL5_TXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL5_TXT) & BM_USBC_UOG2_ENDPTCTRL5_TXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXT field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL5_TXT(v)   (HW_USBC_UOG2_ENDPTCTRL5_WR((HW_USBC_UOG2_ENDPTCTRL5_RD() & ~BM_USBC_UOG2_ENDPTCTRL5_TXT) | BF_USBC_UOG2_ENDPTCTRL5_TXT(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL5, field TXI[21] (RW)
 *
 * TX Data Toggle Inhibit 0 PID Sequencing Enabled. [Default] 1 PID Sequencing Disabled. This bit is
 * only used for test and should always be written as zero. Writing a one to this bit causes this
 * endpoint to ignore the data toggle sequence and always transmit DATA0 for a data packet.
 */

#define BP_USBC_UOG2_ENDPTCTRL5_TXI      (21)      //!< Bit position for USBC_UOG2_ENDPTCTRL5_TXI.
#define BM_USBC_UOG2_ENDPTCTRL5_TXI      (0x00200000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL5_TXI.

//! @brief Get value of USBC_UOG2_ENDPTCTRL5_TXI from a register value.
#define BG_USBC_UOG2_ENDPTCTRL5_TXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL5_TXI) >> BP_USBC_UOG2_ENDPTCTRL5_TXI)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL5_TXI.
#define BF_USBC_UOG2_ENDPTCTRL5_TXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL5_TXI) & BM_USBC_UOG2_ENDPTCTRL5_TXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXI field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL5_TXI(v)   (HW_USBC_UOG2_ENDPTCTRL5_WR((HW_USBC_UOG2_ENDPTCTRL5_RD() & ~BM_USBC_UOG2_ENDPTCTRL5_TXI) | BF_USBC_UOG2_ENDPTCTRL5_TXI(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL5, field TXR[22] (RW)
 *
 * TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the Host and device.
 */

#define BP_USBC_UOG2_ENDPTCTRL5_TXR      (22)      //!< Bit position for USBC_UOG2_ENDPTCTRL5_TXR.
#define BM_USBC_UOG2_ENDPTCTRL5_TXR      (0x00400000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL5_TXR.

//! @brief Get value of USBC_UOG2_ENDPTCTRL5_TXR from a register value.
#define BG_USBC_UOG2_ENDPTCTRL5_TXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL5_TXR) >> BP_USBC_UOG2_ENDPTCTRL5_TXR)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL5_TXR.
#define BF_USBC_UOG2_ENDPTCTRL5_TXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL5_TXR) & BM_USBC_UOG2_ENDPTCTRL5_TXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXR field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL5_TXR(v)   (HW_USBC_UOG2_ENDPTCTRL5_WR((HW_USBC_UOG2_ENDPTCTRL5_RD() & ~BM_USBC_UOG2_ENDPTCTRL5_TXR) | BF_USBC_UOG2_ENDPTCTRL5_TXR(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL5, field TXE[23] (RW)
 *
 * TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG2_ENDPTCTRL5_TXE      (23)      //!< Bit position for USBC_UOG2_ENDPTCTRL5_TXE.
#define BM_USBC_UOG2_ENDPTCTRL5_TXE      (0x00800000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL5_TXE.

//! @brief Get value of USBC_UOG2_ENDPTCTRL5_TXE from a register value.
#define BG_USBC_UOG2_ENDPTCTRL5_TXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL5_TXE) >> BP_USBC_UOG2_ENDPTCTRL5_TXE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL5_TXE.
#define BF_USBC_UOG2_ENDPTCTRL5_TXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL5_TXE) & BM_USBC_UOG2_ENDPTCTRL5_TXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXE field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL5_TXE(v)   (HW_USBC_UOG2_ENDPTCTRL5_WR((HW_USBC_UOG2_ENDPTCTRL5_RD() & ~BM_USBC_UOG2_ENDPTCTRL5_TXE) | BF_USBC_UOG2_ENDPTCTRL5_TXE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ENDPTCTRL6 - Endpoint Control 6
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ENDPTCTRL6 - Endpoint Control 6 (RW)
 *
 * Reset value: 0x00000000
 *
 * This is endpoint control register for endpoint 6 in device operation mode.  If one endpoint
 * direction is enabled and the paired endpoint of opposite direction is disabled then the unused
 * direction type must be changed from the default control-type to any other type (that is Bulk-
 * type). leaving an unconfigured endpoint control causes undefined behavior for the data pid
 * tracking on the active endpoint/direction.
 */
typedef union _hw_usbc_uog2_endptctrl6
{
    reg32_t U;
    struct _hw_usbc_uog2_endptctrl6_bitfields
    {
        unsigned RXS : 1; //!< [0] RX Endpoint Stall - Read/Write 0 End Point OK.
        unsigned RXD : 1; //!< [1] RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should always be written as zero.
        unsigned RXT : 2; //!< [3:2] RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
        unsigned RESERVED0 : 1; //!< [4] Reserved.
        unsigned RXI : 1; //!< [5] RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should always be written as zero.
        unsigned RXR : 1; //!< [6] RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the host and device.
        unsigned RXE : 1; //!< [7] RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED1 : 8; //!< [15:8] Reserved
        unsigned TXS : 1; //!< [16] TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint.
        unsigned TXD : 1; //!< [17] TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always be written as 0.
        unsigned TXT : 2; //!< [19:18] TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
        unsigned RESERVED2 : 1; //!< [20] Reserved
        unsigned TXI : 1; //!< [21] TX Data Toggle Inhibit 0 PID Sequencing Enabled.
        unsigned TXR : 1; //!< [22] TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the Host and device.
        unsigned TXE : 1; //!< [23] TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_endptctrl6_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ENDPTCTRL6 register
 */
#define HW_USBC_UOG2_ENDPTCTRL6_ADDR      (REGS_USBC_BASE + 0x3d8)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ENDPTCTRL6           (*(volatile hw_usbc_uog2_endptctrl6_t *) HW_USBC_UOG2_ENDPTCTRL6_ADDR)
#define HW_USBC_UOG2_ENDPTCTRL6_RD()      (HW_USBC_UOG2_ENDPTCTRL6.U)
#define HW_USBC_UOG2_ENDPTCTRL6_WR(v)     (HW_USBC_UOG2_ENDPTCTRL6.U = (v))
#define HW_USBC_UOG2_ENDPTCTRL6_SET(v)    (HW_USBC_UOG2_ENDPTCTRL6_WR(HW_USBC_UOG2_ENDPTCTRL6_RD() |  (v)))
#define HW_USBC_UOG2_ENDPTCTRL6_CLR(v)    (HW_USBC_UOG2_ENDPTCTRL6_WR(HW_USBC_UOG2_ENDPTCTRL6_RD() & ~(v)))
#define HW_USBC_UOG2_ENDPTCTRL6_TOG(v)    (HW_USBC_UOG2_ENDPTCTRL6_WR(HW_USBC_UOG2_ENDPTCTRL6_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_ENDPTCTRL6 bitfields
 */

/* --- Register HW_USBC_UOG2_ENDPTCTRL6, field RXS[0] (RW)
 *
 * RX Endpoint Stall - Read/Write 0 End Point OK. [Default] 1 End Point Stalled This bit is set
 * automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control
 * Endpoint. It is cleared automatically upon receipt a SETUP request if this Endpoint is configured
 * as a Control Endpoint, Software can write a one to this bit to force the endpoint to return a
 * STALL handshake to the Host. It continues to returning STALL until this bit is either cleared by
 * software or automatically cleared as above.
 */

#define BP_USBC_UOG2_ENDPTCTRL6_RXS      (0)      //!< Bit position for USBC_UOG2_ENDPTCTRL6_RXS.
#define BM_USBC_UOG2_ENDPTCTRL6_RXS      (0x00000001)  //!< Bit mask for USBC_UOG2_ENDPTCTRL6_RXS.

//! @brief Get value of USBC_UOG2_ENDPTCTRL6_RXS from a register value.
#define BG_USBC_UOG2_ENDPTCTRL6_RXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL6_RXS) >> BP_USBC_UOG2_ENDPTCTRL6_RXS)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL6_RXS.
#define BF_USBC_UOG2_ENDPTCTRL6_RXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL6_RXS) & BM_USBC_UOG2_ENDPTCTRL6_RXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXS field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL6_RXS(v)   (HW_USBC_UOG2_ENDPTCTRL6_WR((HW_USBC_UOG2_ENDPTCTRL6_RD() & ~BM_USBC_UOG2_ENDPTCTRL6_RXS) | BF_USBC_UOG2_ENDPTCTRL6_RXS(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL6, field RXD[1] (RW)
 *
 * RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should
 * always be written as zero.
 */

#define BP_USBC_UOG2_ENDPTCTRL6_RXD      (1)      //!< Bit position for USBC_UOG2_ENDPTCTRL6_RXD.
#define BM_USBC_UOG2_ENDPTCTRL6_RXD      (0x00000002)  //!< Bit mask for USBC_UOG2_ENDPTCTRL6_RXD.

//! @brief Get value of USBC_UOG2_ENDPTCTRL6_RXD from a register value.
#define BG_USBC_UOG2_ENDPTCTRL6_RXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL6_RXD) >> BP_USBC_UOG2_ENDPTCTRL6_RXD)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL6_RXD.
#define BF_USBC_UOG2_ENDPTCTRL6_RXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL6_RXD) & BM_USBC_UOG2_ENDPTCTRL6_RXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXD field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL6_RXD(v)   (HW_USBC_UOG2_ENDPTCTRL6_WR((HW_USBC_UOG2_ENDPTCTRL6_RD() & ~BM_USBC_UOG2_ENDPTCTRL6_RXD) | BF_USBC_UOG2_ENDPTCTRL6_RXD(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL6, field RXT[3:2] (RW)
 *
 * RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
 */

#define BP_USBC_UOG2_ENDPTCTRL6_RXT      (2)      //!< Bit position for USBC_UOG2_ENDPTCTRL6_RXT.
#define BM_USBC_UOG2_ENDPTCTRL6_RXT      (0x0000000c)  //!< Bit mask for USBC_UOG2_ENDPTCTRL6_RXT.

//! @brief Get value of USBC_UOG2_ENDPTCTRL6_RXT from a register value.
#define BG_USBC_UOG2_ENDPTCTRL6_RXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL6_RXT) >> BP_USBC_UOG2_ENDPTCTRL6_RXT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL6_RXT.
#define BF_USBC_UOG2_ENDPTCTRL6_RXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL6_RXT) & BM_USBC_UOG2_ENDPTCTRL6_RXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXT field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL6_RXT(v)   (HW_USBC_UOG2_ENDPTCTRL6_WR((HW_USBC_UOG2_ENDPTCTRL6_RD() & ~BM_USBC_UOG2_ENDPTCTRL6_RXT) | BF_USBC_UOG2_ENDPTCTRL6_RXT(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL6, field RXI[5] (RW)
 *
 * RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should
 * always be written as zero. Writing a one to this bit causes this endpoint to ignore the data
 * toggle sequence and always accept data packet regardless of their data PID.
 */

#define BP_USBC_UOG2_ENDPTCTRL6_RXI      (5)      //!< Bit position for USBC_UOG2_ENDPTCTRL6_RXI.
#define BM_USBC_UOG2_ENDPTCTRL6_RXI      (0x00000020)  //!< Bit mask for USBC_UOG2_ENDPTCTRL6_RXI.

//! @brief Get value of USBC_UOG2_ENDPTCTRL6_RXI from a register value.
#define BG_USBC_UOG2_ENDPTCTRL6_RXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL6_RXI) >> BP_USBC_UOG2_ENDPTCTRL6_RXI)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL6_RXI.
#define BF_USBC_UOG2_ENDPTCTRL6_RXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL6_RXI) & BM_USBC_UOG2_ENDPTCTRL6_RXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXI field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL6_RXI(v)   (HW_USBC_UOG2_ENDPTCTRL6_WR((HW_USBC_UOG2_ENDPTCTRL6_RD() & ~BM_USBC_UOG2_ENDPTCTRL6_RXI) | BF_USBC_UOG2_ENDPTCTRL6_RXI(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL6, field RXR[6] (RW)
 *
 * RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the host and device.
 */

#define BP_USBC_UOG2_ENDPTCTRL6_RXR      (6)      //!< Bit position for USBC_UOG2_ENDPTCTRL6_RXR.
#define BM_USBC_UOG2_ENDPTCTRL6_RXR      (0x00000040)  //!< Bit mask for USBC_UOG2_ENDPTCTRL6_RXR.

//! @brief Get value of USBC_UOG2_ENDPTCTRL6_RXR from a register value.
#define BG_USBC_UOG2_ENDPTCTRL6_RXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL6_RXR) >> BP_USBC_UOG2_ENDPTCTRL6_RXR)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL6_RXR.
#define BF_USBC_UOG2_ENDPTCTRL6_RXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL6_RXR) & BM_USBC_UOG2_ENDPTCTRL6_RXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXR field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL6_RXR(v)   (HW_USBC_UOG2_ENDPTCTRL6_WR((HW_USBC_UOG2_ENDPTCTRL6_RD() & ~BM_USBC_UOG2_ENDPTCTRL6_RXR) | BF_USBC_UOG2_ENDPTCTRL6_RXR(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL6, field RXE[7] (RW)
 *
 * RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG2_ENDPTCTRL6_RXE      (7)      //!< Bit position for USBC_UOG2_ENDPTCTRL6_RXE.
#define BM_USBC_UOG2_ENDPTCTRL6_RXE      (0x00000080)  //!< Bit mask for USBC_UOG2_ENDPTCTRL6_RXE.

//! @brief Get value of USBC_UOG2_ENDPTCTRL6_RXE from a register value.
#define BG_USBC_UOG2_ENDPTCTRL6_RXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL6_RXE) >> BP_USBC_UOG2_ENDPTCTRL6_RXE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL6_RXE.
#define BF_USBC_UOG2_ENDPTCTRL6_RXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL6_RXE) & BM_USBC_UOG2_ENDPTCTRL6_RXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXE field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL6_RXE(v)   (HW_USBC_UOG2_ENDPTCTRL6_WR((HW_USBC_UOG2_ENDPTCTRL6_RD() & ~BM_USBC_UOG2_ENDPTCTRL6_RXE) | BF_USBC_UOG2_ENDPTCTRL6_RXE(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL6, field TXS[16] (RW)
 *
 * TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically
 * upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint. It is
 * cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control
 * Endpoint. Software can write a one to this bit to force the endpoint to return a STALL handshake
 * to the Host. It continues to returning STALL until this bit is either cleared by software or
 * automatically cleared as above. For CONTROL type endpoint, there is a slight delay (50 clocks
 * max) between the ENDPTSETUPSTAT begin cleared and hardware continuing to clear this bit. In most
 * systems, it is unlikely the DCD software will observe this delay. Take care that the STALL bit is
 * not set immediately after writing a '1' to it. Please follow this procedure: continually write
 * this STALL bit until it is set or until a new setup has ben received by checking the associated
 * ENDPTSETUPSTAT bit.
 */

#define BP_USBC_UOG2_ENDPTCTRL6_TXS      (16)      //!< Bit position for USBC_UOG2_ENDPTCTRL6_TXS.
#define BM_USBC_UOG2_ENDPTCTRL6_TXS      (0x00010000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL6_TXS.

//! @brief Get value of USBC_UOG2_ENDPTCTRL6_TXS from a register value.
#define BG_USBC_UOG2_ENDPTCTRL6_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL6_TXS) >> BP_USBC_UOG2_ENDPTCTRL6_TXS)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL6_TXS.
#define BF_USBC_UOG2_ENDPTCTRL6_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL6_TXS) & BM_USBC_UOG2_ENDPTCTRL6_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL6_TXS(v)   (HW_USBC_UOG2_ENDPTCTRL6_WR((HW_USBC_UOG2_ENDPTCTRL6_RD() & ~BM_USBC_UOG2_ENDPTCTRL6_TXS) | BF_USBC_UOG2_ENDPTCTRL6_TXS(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL6, field TXD[17] (RW)
 *
 * TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always
 * be written as 0.
 */

#define BP_USBC_UOG2_ENDPTCTRL6_TXD      (17)      //!< Bit position for USBC_UOG2_ENDPTCTRL6_TXD.
#define BM_USBC_UOG2_ENDPTCTRL6_TXD      (0x00020000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL6_TXD.

//! @brief Get value of USBC_UOG2_ENDPTCTRL6_TXD from a register value.
#define BG_USBC_UOG2_ENDPTCTRL6_TXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL6_TXD) >> BP_USBC_UOG2_ENDPTCTRL6_TXD)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL6_TXD.
#define BF_USBC_UOG2_ENDPTCTRL6_TXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL6_TXD) & BM_USBC_UOG2_ENDPTCTRL6_TXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXD field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL6_TXD(v)   (HW_USBC_UOG2_ENDPTCTRL6_WR((HW_USBC_UOG2_ENDPTCTRL6_RD() & ~BM_USBC_UOG2_ENDPTCTRL6_TXD) | BF_USBC_UOG2_ENDPTCTRL6_TXD(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL6, field TXT[19:18] (RW)
 *
 * TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 */

#define BP_USBC_UOG2_ENDPTCTRL6_TXT      (18)      //!< Bit position for USBC_UOG2_ENDPTCTRL6_TXT.
#define BM_USBC_UOG2_ENDPTCTRL6_TXT      (0x000c0000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL6_TXT.

//! @brief Get value of USBC_UOG2_ENDPTCTRL6_TXT from a register value.
#define BG_USBC_UOG2_ENDPTCTRL6_TXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL6_TXT) >> BP_USBC_UOG2_ENDPTCTRL6_TXT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL6_TXT.
#define BF_USBC_UOG2_ENDPTCTRL6_TXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL6_TXT) & BM_USBC_UOG2_ENDPTCTRL6_TXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXT field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL6_TXT(v)   (HW_USBC_UOG2_ENDPTCTRL6_WR((HW_USBC_UOG2_ENDPTCTRL6_RD() & ~BM_USBC_UOG2_ENDPTCTRL6_TXT) | BF_USBC_UOG2_ENDPTCTRL6_TXT(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL6, field TXI[21] (RW)
 *
 * TX Data Toggle Inhibit 0 PID Sequencing Enabled. [Default] 1 PID Sequencing Disabled. This bit is
 * only used for test and should always be written as zero. Writing a one to this bit causes this
 * endpoint to ignore the data toggle sequence and always transmit DATA0 for a data packet.
 */

#define BP_USBC_UOG2_ENDPTCTRL6_TXI      (21)      //!< Bit position for USBC_UOG2_ENDPTCTRL6_TXI.
#define BM_USBC_UOG2_ENDPTCTRL6_TXI      (0x00200000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL6_TXI.

//! @brief Get value of USBC_UOG2_ENDPTCTRL6_TXI from a register value.
#define BG_USBC_UOG2_ENDPTCTRL6_TXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL6_TXI) >> BP_USBC_UOG2_ENDPTCTRL6_TXI)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL6_TXI.
#define BF_USBC_UOG2_ENDPTCTRL6_TXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL6_TXI) & BM_USBC_UOG2_ENDPTCTRL6_TXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXI field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL6_TXI(v)   (HW_USBC_UOG2_ENDPTCTRL6_WR((HW_USBC_UOG2_ENDPTCTRL6_RD() & ~BM_USBC_UOG2_ENDPTCTRL6_TXI) | BF_USBC_UOG2_ENDPTCTRL6_TXI(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL6, field TXR[22] (RW)
 *
 * TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the Host and device.
 */

#define BP_USBC_UOG2_ENDPTCTRL6_TXR      (22)      //!< Bit position for USBC_UOG2_ENDPTCTRL6_TXR.
#define BM_USBC_UOG2_ENDPTCTRL6_TXR      (0x00400000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL6_TXR.

//! @brief Get value of USBC_UOG2_ENDPTCTRL6_TXR from a register value.
#define BG_USBC_UOG2_ENDPTCTRL6_TXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL6_TXR) >> BP_USBC_UOG2_ENDPTCTRL6_TXR)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL6_TXR.
#define BF_USBC_UOG2_ENDPTCTRL6_TXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL6_TXR) & BM_USBC_UOG2_ENDPTCTRL6_TXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXR field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL6_TXR(v)   (HW_USBC_UOG2_ENDPTCTRL6_WR((HW_USBC_UOG2_ENDPTCTRL6_RD() & ~BM_USBC_UOG2_ENDPTCTRL6_TXR) | BF_USBC_UOG2_ENDPTCTRL6_TXR(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL6, field TXE[23] (RW)
 *
 * TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG2_ENDPTCTRL6_TXE      (23)      //!< Bit position for USBC_UOG2_ENDPTCTRL6_TXE.
#define BM_USBC_UOG2_ENDPTCTRL6_TXE      (0x00800000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL6_TXE.

//! @brief Get value of USBC_UOG2_ENDPTCTRL6_TXE from a register value.
#define BG_USBC_UOG2_ENDPTCTRL6_TXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL6_TXE) >> BP_USBC_UOG2_ENDPTCTRL6_TXE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL6_TXE.
#define BF_USBC_UOG2_ENDPTCTRL6_TXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL6_TXE) & BM_USBC_UOG2_ENDPTCTRL6_TXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXE field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL6_TXE(v)   (HW_USBC_UOG2_ENDPTCTRL6_WR((HW_USBC_UOG2_ENDPTCTRL6_RD() & ~BM_USBC_UOG2_ENDPTCTRL6_TXE) | BF_USBC_UOG2_ENDPTCTRL6_TXE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UOG2_ENDPTCTRL7 - Endpoint Control 7
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UOG2_ENDPTCTRL7 - Endpoint Control 7 (RW)
 *
 * Reset value: 0x00000000
 *
 * This is endpoint control register for endpoint 7 in device operation mode.  If one endpoint
 * direction is enabled and the paired endpoint of opposite direction is disabled then the unused
 * direction type must be changed from the default control-type to any other type (that is Bulk-
 * type). leaving an unconfigured endpoint control causes undefined behavior for the data pid
 * tracking on the active endpoint/direction.
 */
typedef union _hw_usbc_uog2_endptctrl7
{
    reg32_t U;
    struct _hw_usbc_uog2_endptctrl7_bitfields
    {
        unsigned RXS : 1; //!< [0] RX Endpoint Stall - Read/Write 0 End Point OK.
        unsigned RXD : 1; //!< [1] RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should always be written as zero.
        unsigned RXT : 2; //!< [3:2] RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
        unsigned RESERVED0 : 1; //!< [4] Reserved.
        unsigned RXI : 1; //!< [5] RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should always be written as zero.
        unsigned RXR : 1; //!< [6] RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the host and device.
        unsigned RXE : 1; //!< [7] RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED1 : 8; //!< [15:8] Reserved
        unsigned TXS : 1; //!< [16] TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint.
        unsigned TXD : 1; //!< [17] TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always be written as 0.
        unsigned TXT : 2; //!< [19:18] TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
        unsigned RESERVED2 : 1; //!< [20] Reserved
        unsigned TXI : 1; //!< [21] TX Data Toggle Inhibit 0 PID Sequencing Enabled.
        unsigned TXR : 1; //!< [22] TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received for this Endpoint, software must write a one to this bit in order to synchronize the data PID's between the Host and device.
        unsigned TXE : 1; //!< [23] TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has been configured.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uog2_endptctrl7_t;
#endif

/*
 * constants & macros for entire USBC_UOG2_ENDPTCTRL7 register
 */
#define HW_USBC_UOG2_ENDPTCTRL7_ADDR      (REGS_USBC_BASE + 0x3dc)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UOG2_ENDPTCTRL7           (*(volatile hw_usbc_uog2_endptctrl7_t *) HW_USBC_UOG2_ENDPTCTRL7_ADDR)
#define HW_USBC_UOG2_ENDPTCTRL7_RD()      (HW_USBC_UOG2_ENDPTCTRL7.U)
#define HW_USBC_UOG2_ENDPTCTRL7_WR(v)     (HW_USBC_UOG2_ENDPTCTRL7.U = (v))
#define HW_USBC_UOG2_ENDPTCTRL7_SET(v)    (HW_USBC_UOG2_ENDPTCTRL7_WR(HW_USBC_UOG2_ENDPTCTRL7_RD() |  (v)))
#define HW_USBC_UOG2_ENDPTCTRL7_CLR(v)    (HW_USBC_UOG2_ENDPTCTRL7_WR(HW_USBC_UOG2_ENDPTCTRL7_RD() & ~(v)))
#define HW_USBC_UOG2_ENDPTCTRL7_TOG(v)    (HW_USBC_UOG2_ENDPTCTRL7_WR(HW_USBC_UOG2_ENDPTCTRL7_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UOG2_ENDPTCTRL7 bitfields
 */

/* --- Register HW_USBC_UOG2_ENDPTCTRL7, field RXS[0] (RW)
 *
 * RX Endpoint Stall - Read/Write 0 End Point OK. [Default] 1 End Point Stalled This bit is set
 * automatically upon receipt of a SETUP request if this Endpoint is not configured as a Control
 * Endpoint. It is cleared automatically upon receipt a SETUP request if this Endpoint is configured
 * as a Control Endpoint, Software can write a one to this bit to force the endpoint to return a
 * STALL handshake to the Host. It continues to returning STALL until this bit is either cleared by
 * software or automatically cleared as above.
 */

#define BP_USBC_UOG2_ENDPTCTRL7_RXS      (0)      //!< Bit position for USBC_UOG2_ENDPTCTRL7_RXS.
#define BM_USBC_UOG2_ENDPTCTRL7_RXS      (0x00000001)  //!< Bit mask for USBC_UOG2_ENDPTCTRL7_RXS.

//! @brief Get value of USBC_UOG2_ENDPTCTRL7_RXS from a register value.
#define BG_USBC_UOG2_ENDPTCTRL7_RXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL7_RXS) >> BP_USBC_UOG2_ENDPTCTRL7_RXS)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL7_RXS.
#define BF_USBC_UOG2_ENDPTCTRL7_RXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL7_RXS) & BM_USBC_UOG2_ENDPTCTRL7_RXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXS field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL7_RXS(v)   (HW_USBC_UOG2_ENDPTCTRL7_WR((HW_USBC_UOG2_ENDPTCTRL7_RD() & ~BM_USBC_UOG2_ENDPTCTRL7_RXS) | BF_USBC_UOG2_ENDPTCTRL7_RXS(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL7, field RXD[1] (RW)
 *
 * RX Endpoint Data Sink - Read/Write - TBD 0 Dual Port Memory Buffer/DMA Engine [Default] Should
 * always be written as zero.
 */

#define BP_USBC_UOG2_ENDPTCTRL7_RXD      (1)      //!< Bit position for USBC_UOG2_ENDPTCTRL7_RXD.
#define BM_USBC_UOG2_ENDPTCTRL7_RXD      (0x00000002)  //!< Bit mask for USBC_UOG2_ENDPTCTRL7_RXD.

//! @brief Get value of USBC_UOG2_ENDPTCTRL7_RXD from a register value.
#define BG_USBC_UOG2_ENDPTCTRL7_RXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL7_RXD) >> BP_USBC_UOG2_ENDPTCTRL7_RXD)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL7_RXD.
#define BF_USBC_UOG2_ENDPTCTRL7_RXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL7_RXD) & BM_USBC_UOG2_ENDPTCTRL7_RXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXD field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL7_RXD(v)   (HW_USBC_UOG2_ENDPTCTRL7_WR((HW_USBC_UOG2_ENDPTCTRL7_RD() & ~BM_USBC_UOG2_ENDPTCTRL7_RXD) | BF_USBC_UOG2_ENDPTCTRL7_RXD(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL7, field RXT[3:2] (RW)
 *
 * RX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Reserved
 */

#define BP_USBC_UOG2_ENDPTCTRL7_RXT      (2)      //!< Bit position for USBC_UOG2_ENDPTCTRL7_RXT.
#define BM_USBC_UOG2_ENDPTCTRL7_RXT      (0x0000000c)  //!< Bit mask for USBC_UOG2_ENDPTCTRL7_RXT.

//! @brief Get value of USBC_UOG2_ENDPTCTRL7_RXT from a register value.
#define BG_USBC_UOG2_ENDPTCTRL7_RXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL7_RXT) >> BP_USBC_UOG2_ENDPTCTRL7_RXT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL7_RXT.
#define BF_USBC_UOG2_ENDPTCTRL7_RXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL7_RXT) & BM_USBC_UOG2_ENDPTCTRL7_RXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXT field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL7_RXT(v)   (HW_USBC_UOG2_ENDPTCTRL7_WR((HW_USBC_UOG2_ENDPTCTRL7_RD() & ~BM_USBC_UOG2_ENDPTCTRL7_RXT) | BF_USBC_UOG2_ENDPTCTRL7_RXT(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL7, field RXI[5] (RW)
 *
 * RX Data Toggle Inhibit 0 Disabled [Default] 1 Enabled This bit is only used for test and should
 * always be written as zero. Writing a one to this bit causes this endpoint to ignore the data
 * toggle sequence and always accept data packet regardless of their data PID.
 */

#define BP_USBC_UOG2_ENDPTCTRL7_RXI      (5)      //!< Bit position for USBC_UOG2_ENDPTCTRL7_RXI.
#define BM_USBC_UOG2_ENDPTCTRL7_RXI      (0x00000020)  //!< Bit mask for USBC_UOG2_ENDPTCTRL7_RXI.

//! @brief Get value of USBC_UOG2_ENDPTCTRL7_RXI from a register value.
#define BG_USBC_UOG2_ENDPTCTRL7_RXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL7_RXI) >> BP_USBC_UOG2_ENDPTCTRL7_RXI)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL7_RXI.
#define BF_USBC_UOG2_ENDPTCTRL7_RXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL7_RXI) & BM_USBC_UOG2_ENDPTCTRL7_RXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXI field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL7_RXI(v)   (HW_USBC_UOG2_ENDPTCTRL7_WR((HW_USBC_UOG2_ENDPTCTRL7_RD() & ~BM_USBC_UOG2_ENDPTCTRL7_RXI) | BF_USBC_UOG2_ENDPTCTRL7_RXI(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL7, field RXR[6] (RW)
 *
 * RX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the host and device.
 */

#define BP_USBC_UOG2_ENDPTCTRL7_RXR      (6)      //!< Bit position for USBC_UOG2_ENDPTCTRL7_RXR.
#define BM_USBC_UOG2_ENDPTCTRL7_RXR      (0x00000040)  //!< Bit mask for USBC_UOG2_ENDPTCTRL7_RXR.

//! @brief Get value of USBC_UOG2_ENDPTCTRL7_RXR from a register value.
#define BG_USBC_UOG2_ENDPTCTRL7_RXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL7_RXR) >> BP_USBC_UOG2_ENDPTCTRL7_RXR)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL7_RXR.
#define BF_USBC_UOG2_ENDPTCTRL7_RXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL7_RXR) & BM_USBC_UOG2_ENDPTCTRL7_RXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXR field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL7_RXR(v)   (HW_USBC_UOG2_ENDPTCTRL7_WR((HW_USBC_UOG2_ENDPTCTRL7_RD() & ~BM_USBC_UOG2_ENDPTCTRL7_RXR) | BF_USBC_UOG2_ENDPTCTRL7_RXR(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL7, field RXE[7] (RW)
 *
 * RX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG2_ENDPTCTRL7_RXE      (7)      //!< Bit position for USBC_UOG2_ENDPTCTRL7_RXE.
#define BM_USBC_UOG2_ENDPTCTRL7_RXE      (0x00000080)  //!< Bit mask for USBC_UOG2_ENDPTCTRL7_RXE.

//! @brief Get value of USBC_UOG2_ENDPTCTRL7_RXE from a register value.
#define BG_USBC_UOG2_ENDPTCTRL7_RXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL7_RXE) >> BP_USBC_UOG2_ENDPTCTRL7_RXE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL7_RXE.
#define BF_USBC_UOG2_ENDPTCTRL7_RXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL7_RXE) & BM_USBC_UOG2_ENDPTCTRL7_RXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXE field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL7_RXE(v)   (HW_USBC_UOG2_ENDPTCTRL7_WR((HW_USBC_UOG2_ENDPTCTRL7_RD() & ~BM_USBC_UOG2_ENDPTCTRL7_RXE) | BF_USBC_UOG2_ENDPTCTRL7_RXE(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL7, field TXS[16] (RW)
 *
 * TX Endpoint Stall - Read/Write 0 End Point OK 1 End Point Stalled This bit is set automatically
 * upon receipt of a SETUP request if this Endpoint is not configured as a Control Endpoint. It is
 * cleared automatically upon receipt of a SETUP request if this Endpoint is configured as a Control
 * Endpoint. Software can write a one to this bit to force the endpoint to return a STALL handshake
 * to the Host. It continues to returning STALL until this bit is either cleared by software or
 * automatically cleared as above. For CONTROL type endpoint, there is a slight delay (50 clocks
 * max) between the ENDPTSETUPSTAT begin cleared and hardware continuing to clear this bit. In most
 * systems, it is unlikely the DCD software will observe this delay. Take care that the STALL bit is
 * not set immediately after writing a '1' to it. Please follow this procedure: continually write
 * this STALL bit until it is set or until a new setup has ben received by checking the associated
 * ENDPTSETUPSTAT bit.
 */

#define BP_USBC_UOG2_ENDPTCTRL7_TXS      (16)      //!< Bit position for USBC_UOG2_ENDPTCTRL7_TXS.
#define BM_USBC_UOG2_ENDPTCTRL7_TXS      (0x00010000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL7_TXS.

//! @brief Get value of USBC_UOG2_ENDPTCTRL7_TXS from a register value.
#define BG_USBC_UOG2_ENDPTCTRL7_TXS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL7_TXS) >> BP_USBC_UOG2_ENDPTCTRL7_TXS)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL7_TXS.
#define BF_USBC_UOG2_ENDPTCTRL7_TXS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL7_TXS) & BM_USBC_UOG2_ENDPTCTRL7_TXS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXS field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL7_TXS(v)   (HW_USBC_UOG2_ENDPTCTRL7_WR((HW_USBC_UOG2_ENDPTCTRL7_RD() & ~BM_USBC_UOG2_ENDPTCTRL7_TXS) | BF_USBC_UOG2_ENDPTCTRL7_TXS(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL7, field TXD[17] (RW)
 *
 * TX Endpoint Data Source - Read/Write 0 Dual Port Memory Buffer/DMA Engine [DEFAULT] Should always
 * be written as 0.
 */

#define BP_USBC_UOG2_ENDPTCTRL7_TXD      (17)      //!< Bit position for USBC_UOG2_ENDPTCTRL7_TXD.
#define BM_USBC_UOG2_ENDPTCTRL7_TXD      (0x00020000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL7_TXD.

//! @brief Get value of USBC_UOG2_ENDPTCTRL7_TXD from a register value.
#define BG_USBC_UOG2_ENDPTCTRL7_TXD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL7_TXD) >> BP_USBC_UOG2_ENDPTCTRL7_TXD)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL7_TXD.
#define BF_USBC_UOG2_ENDPTCTRL7_TXD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL7_TXD) & BM_USBC_UOG2_ENDPTCTRL7_TXD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXD field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL7_TXD(v)   (HW_USBC_UOG2_ENDPTCTRL7_WR((HW_USBC_UOG2_ENDPTCTRL7_RD() & ~BM_USBC_UOG2_ENDPTCTRL7_TXD) | BF_USBC_UOG2_ENDPTCTRL7_TXD(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL7, field TXT[19:18] (RW)
 *
 * TX Endpoint Type - Read/Write 00 Control 01 Isochronous 10 Bulk 11 Interrupt
 */

#define BP_USBC_UOG2_ENDPTCTRL7_TXT      (18)      //!< Bit position for USBC_UOG2_ENDPTCTRL7_TXT.
#define BM_USBC_UOG2_ENDPTCTRL7_TXT      (0x000c0000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL7_TXT.

//! @brief Get value of USBC_UOG2_ENDPTCTRL7_TXT from a register value.
#define BG_USBC_UOG2_ENDPTCTRL7_TXT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL7_TXT) >> BP_USBC_UOG2_ENDPTCTRL7_TXT)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL7_TXT.
#define BF_USBC_UOG2_ENDPTCTRL7_TXT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL7_TXT) & BM_USBC_UOG2_ENDPTCTRL7_TXT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXT field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL7_TXT(v)   (HW_USBC_UOG2_ENDPTCTRL7_WR((HW_USBC_UOG2_ENDPTCTRL7_RD() & ~BM_USBC_UOG2_ENDPTCTRL7_TXT) | BF_USBC_UOG2_ENDPTCTRL7_TXT(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL7, field TXI[21] (RW)
 *
 * TX Data Toggle Inhibit 0 PID Sequencing Enabled. [Default] 1 PID Sequencing Disabled. This bit is
 * only used for test and should always be written as zero. Writing a one to this bit causes this
 * endpoint to ignore the data toggle sequence and always transmit DATA0 for a data packet.
 */

#define BP_USBC_UOG2_ENDPTCTRL7_TXI      (21)      //!< Bit position for USBC_UOG2_ENDPTCTRL7_TXI.
#define BM_USBC_UOG2_ENDPTCTRL7_TXI      (0x00200000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL7_TXI.

//! @brief Get value of USBC_UOG2_ENDPTCTRL7_TXI from a register value.
#define BG_USBC_UOG2_ENDPTCTRL7_TXI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL7_TXI) >> BP_USBC_UOG2_ENDPTCTRL7_TXI)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL7_TXI.
#define BF_USBC_UOG2_ENDPTCTRL7_TXI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL7_TXI) & BM_USBC_UOG2_ENDPTCTRL7_TXI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXI field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL7_TXI(v)   (HW_USBC_UOG2_ENDPTCTRL7_WR((HW_USBC_UOG2_ENDPTCTRL7_RD() & ~BM_USBC_UOG2_ENDPTCTRL7_TXI) | BF_USBC_UOG2_ENDPTCTRL7_TXI(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL7, field TXR[22] (RW)
 *
 * TX Data Toggle Reset (WS) Write 1 - Reset PID Sequence Whenever a configuration event is received
 * for this Endpoint, software must write a one to this bit in order to synchronize the data PID's
 * between the Host and device.
 */

#define BP_USBC_UOG2_ENDPTCTRL7_TXR      (22)      //!< Bit position for USBC_UOG2_ENDPTCTRL7_TXR.
#define BM_USBC_UOG2_ENDPTCTRL7_TXR      (0x00400000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL7_TXR.

//! @brief Get value of USBC_UOG2_ENDPTCTRL7_TXR from a register value.
#define BG_USBC_UOG2_ENDPTCTRL7_TXR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL7_TXR) >> BP_USBC_UOG2_ENDPTCTRL7_TXR)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL7_TXR.
#define BF_USBC_UOG2_ENDPTCTRL7_TXR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL7_TXR) & BM_USBC_UOG2_ENDPTCTRL7_TXR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXR field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL7_TXR(v)   (HW_USBC_UOG2_ENDPTCTRL7_WR((HW_USBC_UOG2_ENDPTCTRL7_RD() & ~BM_USBC_UOG2_ENDPTCTRL7_TXR) | BF_USBC_UOG2_ENDPTCTRL7_TXR(v)))
#endif

/* --- Register HW_USBC_UOG2_ENDPTCTRL7, field TXE[23] (RW)
 *
 * TX Endpoint Enable 0 Disabled [Default] 1 Enabled An Endpoint should be enabled only after it has
 * been configured.
 */

#define BP_USBC_UOG2_ENDPTCTRL7_TXE      (23)      //!< Bit position for USBC_UOG2_ENDPTCTRL7_TXE.
#define BM_USBC_UOG2_ENDPTCTRL7_TXE      (0x00800000)  //!< Bit mask for USBC_UOG2_ENDPTCTRL7_TXE.

//! @brief Get value of USBC_UOG2_ENDPTCTRL7_TXE from a register value.
#define BG_USBC_UOG2_ENDPTCTRL7_TXE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UOG2_ENDPTCTRL7_TXE) >> BP_USBC_UOG2_ENDPTCTRL7_TXE)

//! @brief Format value for bitfield USBC_UOG2_ENDPTCTRL7_TXE.
#define BF_USBC_UOG2_ENDPTCTRL7_TXE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UOG2_ENDPTCTRL7_TXE) & BM_USBC_UOG2_ENDPTCTRL7_TXE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXE field to a new value.
#define BW_USBC_UOG2_ENDPTCTRL7_TXE(v)   (HW_USBC_UOG2_ENDPTCTRL7_WR((HW_USBC_UOG2_ENDPTCTRL7_RD() & ~BM_USBC_UOG2_ENDPTCTRL7_TXE) | BF_USBC_UOG2_ENDPTCTRL7_TXE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_ID - Identification register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_ID - Identification register (RO)
 *
 * Reset value: 0xe401fa05
 *
 * The ID register identifies the USB 2.0 High-Speed core and its revision.
 */
typedef union _hw_usbc_uh1_id
{
    reg32_t U;
    struct _hw_usbc_uh1_id_bitfields
    {
        unsigned ID : 6; //!< [5:0] Configuration number.
        unsigned RESERVED0 : 2; //!< [7:6] Reserved
        unsigned NID : 6; //!< [13:8] Complement version of ID
        unsigned RESERVED1 : 2; //!< [15:14] Reserved
        unsigned REVISION : 8; //!< [23:16] Revision number of the controller core.
        unsigned RESERVED2 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uh1_id_t;
#endif

/*
 * constants & macros for entire USBC_UH1_ID register
 */
#define HW_USBC_UH1_ID_ADDR      (REGS_USBC_BASE + 0x400)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_ID           (*(volatile hw_usbc_uh1_id_t *) HW_USBC_UH1_ID_ADDR)
#define HW_USBC_UH1_ID_RD()      (HW_USBC_UH1_ID.U)
#endif

/*
 * constants & macros for individual USBC_UH1_ID bitfields
 */

/* --- Register HW_USBC_UH1_ID, field ID[5:0] (RO)
 *
 * Configuration number. This number is set to 0x05 and indicates that the peripheral is USB 2.0
 * High-Speed core.
 */

#define BP_USBC_UH1_ID_ID      (0)      //!< Bit position for USBC_UH1_ID_ID.
#define BM_USBC_UH1_ID_ID      (0x0000003f)  //!< Bit mask for USBC_UH1_ID_ID.

//! @brief Get value of USBC_UH1_ID_ID from a register value.
#define BG_USBC_UH1_ID_ID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_ID_ID) >> BP_USBC_UH1_ID_ID)

/* --- Register HW_USBC_UH1_ID, field NID[13:8] (RO)
 *
 * Complement version of ID
 */

#define BP_USBC_UH1_ID_NID      (8)      //!< Bit position for USBC_UH1_ID_NID.
#define BM_USBC_UH1_ID_NID      (0x00003f00)  //!< Bit mask for USBC_UH1_ID_NID.

//! @brief Get value of USBC_UH1_ID_NID from a register value.
#define BG_USBC_UH1_ID_NID(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_ID_NID) >> BP_USBC_UH1_ID_NID)

/* --- Register HW_USBC_UH1_ID, field REVISION[23:16] (RO)
 *
 * Revision number of the controller core.
 */

#define BP_USBC_UH1_ID_REVISION      (16)      //!< Bit position for USBC_UH1_ID_REVISION.
#define BM_USBC_UH1_ID_REVISION      (0x00ff0000)  //!< Bit mask for USBC_UH1_ID_REVISION.

//! @brief Get value of USBC_UH1_ID_REVISION from a register value.
#define BG_USBC_UH1_ID_REVISION(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_ID_REVISION) >> BP_USBC_UH1_ID_REVISION)

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_HWGENERAL - Hardware General
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_HWGENERAL - Hardware General (RO)
 *
 * Reset value: 0x00000015
 *
 * General hardware parameters as defined in System Level Issues and Core Configuration.  The reset
 * value could vary from instance to instance. Please see the detail in bit field description and
 * ignore reset value in summary table in this case!
 */
typedef union _hw_usbc_uh1_hwgeneral
{
    reg32_t U;
    struct _hw_usbc_uh1_hwgeneral_bitfields
    {
        unsigned RESERVED0 : 4; //!< [3:0] Reserved
        unsigned PHYW : 2; //!< [5:4] Data width of the transciever connected to the controller core.
        unsigned PHYM : 3; //!< [8:6] Transciever type PHYM bit reset value: '0000b' for OTG controller core, '0100b' for Host-only controller core.
        unsigned SM : 2; //!< [10:9] Serial interface mode capability SM bit reset value is '00b'
        unsigned RESERVED1 : 21; //!< [31:11] Reserved
    } B;
} hw_usbc_uh1_hwgeneral_t;
#endif

/*
 * constants & macros for entire USBC_UH1_HWGENERAL register
 */
#define HW_USBC_UH1_HWGENERAL_ADDR      (REGS_USBC_BASE + 0x404)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_HWGENERAL           (*(volatile hw_usbc_uh1_hwgeneral_t *) HW_USBC_UH1_HWGENERAL_ADDR)
#define HW_USBC_UH1_HWGENERAL_RD()      (HW_USBC_UH1_HWGENERAL.U)
#endif

/*
 * constants & macros for individual USBC_UH1_HWGENERAL bitfields
 */

/* --- Register HW_USBC_UH1_HWGENERAL, field PHYW[5:4] (RO)
 *
 * Data width of the transciever connected to the controller core. PHYW bit reset value is '01b'.
 *
 * Values:
 * 00 -  8 bit wide data bus  Software non-programmable
 * 01 -  16 bit wide data bus  Software non-programmable
 * 10 -  Reset to 8 bit wide data bus  Software programmable
 * 11 -  Reset to 16 bit wide data bus  Software programmable
 */

#define BP_USBC_UH1_HWGENERAL_PHYW      (4)      //!< Bit position for USBC_UH1_HWGENERAL_PHYW.
#define BM_USBC_UH1_HWGENERAL_PHYW      (0x00000030)  //!< Bit mask for USBC_UH1_HWGENERAL_PHYW.

//! @brief Get value of USBC_UH1_HWGENERAL_PHYW from a register value.
#define BG_USBC_UH1_HWGENERAL_PHYW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HWGENERAL_PHYW) >> BP_USBC_UH1_HWGENERAL_PHYW)


/* --- Register HW_USBC_UH1_HWGENERAL, field PHYM[8:6] (RO)
 *
 * Transciever type PHYM bit reset value: '0000b' for OTG controller core, '0100b' for Host-only
 * controller core.
 *
 * Values:
 * 000 - UTMI/UMTI+
 * 001 - ULPI DDR
 * 010 - ULPI
 * 011 - Serial Only
 * 100 - Software programmable - reset to UTMI/UTMI+
 * 101 - Software programmable - reset to ULPI DDR
 * 110 - Software programmable - reset to ULPI
 * 111 - Software programmable - reset to Serial
 * 1000 - IC-USB
 * 1001 - Software programmable - reset to IC-USB
 * 1010 - HSIC
 * 1011 - Software programmable - reset to HSIC
 */

#define BP_USBC_UH1_HWGENERAL_PHYM      (6)      //!< Bit position for USBC_UH1_HWGENERAL_PHYM.
#define BM_USBC_UH1_HWGENERAL_PHYM      (0x000001c0)  //!< Bit mask for USBC_UH1_HWGENERAL_PHYM.

//! @brief Get value of USBC_UH1_HWGENERAL_PHYM from a register value.
#define BG_USBC_UH1_HWGENERAL_PHYM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HWGENERAL_PHYM) >> BP_USBC_UH1_HWGENERAL_PHYM)


/* --- Register HW_USBC_UH1_HWGENERAL, field SM[10:9] (RO)
 *
 * Serial interface mode capability SM bit reset value is '00b'
 *
 * Values:
 * 00 - No Serial Engine, always use parallel signalling.
 * 01 - Serial Engine present, always use serial signalling for FS/LS.
 * 10 - Software programmable - Reset to use parallel signalling for FS/LS
 * 11 - Software programmable - Reset to use serial signalling for FS/LS
 */

#define BP_USBC_UH1_HWGENERAL_SM      (9)      //!< Bit position for USBC_UH1_HWGENERAL_SM.
#define BM_USBC_UH1_HWGENERAL_SM      (0x00000600)  //!< Bit mask for USBC_UH1_HWGENERAL_SM.

//! @brief Get value of USBC_UH1_HWGENERAL_SM from a register value.
#define BG_USBC_UH1_HWGENERAL_SM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HWGENERAL_SM) >> BP_USBC_UH1_HWGENERAL_SM)


//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_HWHOST - Host Hardware Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_HWHOST - Host Hardware Parameters (RO)
 *
 * Reset value: 0x10020001
 *

 */
typedef union _hw_usbc_uh1_hwhost
{
    reg32_t U;
    struct _hw_usbc_uh1_hwhost_bitfields
    {
        unsigned HC : 1; //!< [0] Host Capable.
        unsigned NPORT : 3; //!< [3:1] The Nmber of downstream ports supported by the host controller is (NPORT+1).
        unsigned RESERVED0 : 28; //!< [31:4] Reserved
    } B;
} hw_usbc_uh1_hwhost_t;
#endif

/*
 * constants & macros for entire USBC_UH1_HWHOST register
 */
#define HW_USBC_UH1_HWHOST_ADDR      (REGS_USBC_BASE + 0x408)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_HWHOST           (*(volatile hw_usbc_uh1_hwhost_t *) HW_USBC_UH1_HWHOST_ADDR)
#define HW_USBC_UH1_HWHOST_RD()      (HW_USBC_UH1_HWHOST.U)
#endif

/*
 * constants & macros for individual USBC_UH1_HWHOST bitfields
 */

/* --- Register HW_USBC_UH1_HWHOST, field HC[0] (RO)
 *
 * Host Capable. Indicating whether host operation mode is supported or not.
 *
 * Values:
 * 0 - Not supported
 * 1 - Supported
 */

#define BP_USBC_UH1_HWHOST_HC      (0)      //!< Bit position for USBC_UH1_HWHOST_HC.
#define BM_USBC_UH1_HWHOST_HC      (0x00000001)  //!< Bit mask for USBC_UH1_HWHOST_HC.

//! @brief Get value of USBC_UH1_HWHOST_HC from a register value.
#define BG_USBC_UH1_HWHOST_HC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HWHOST_HC) >> BP_USBC_UH1_HWHOST_HC)


/* --- Register HW_USBC_UH1_HWHOST, field NPORT[3:1] (RO)
 *
 * The Nmber of downstream ports supported by the host controller is (NPORT+1). When these bits
 * value is '000', it indicates a single-port host controller.
 */

#define BP_USBC_UH1_HWHOST_NPORT      (1)      //!< Bit position for USBC_UH1_HWHOST_NPORT.
#define BM_USBC_UH1_HWHOST_NPORT      (0x0000000e)  //!< Bit mask for USBC_UH1_HWHOST_NPORT.

//! @brief Get value of USBC_UH1_HWHOST_NPORT from a register value.
#define BG_USBC_UH1_HWHOST_NPORT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HWHOST_NPORT) >> BP_USBC_UH1_HWHOST_NPORT)

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_HWTXBUF - TX Buffer Hardware Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_HWTXBUF - TX Buffer Hardware Parameters (RO)
 *
 * Reset value: 0x80080b08
 *

 */
typedef union _hw_usbc_uh1_hwtxbuf
{
    reg32_t U;
    struct _hw_usbc_uh1_hwtxbuf_bitfields
    {
        unsigned TXBURST : 8; //!< [7:0] Default burst size for memory to TX buffer transfer.
        unsigned RESERVED0 : 8; //!< [15:8] Reserved
        unsigned TXCHANADD : 8; //!< [23:16] TX FIFO Buffer size is: (2^TXCHANADD) * 4 Bytes.
        unsigned RESERVED1 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uh1_hwtxbuf_t;
#endif

/*
 * constants & macros for entire USBC_UH1_HWTXBUF register
 */
#define HW_USBC_UH1_HWTXBUF_ADDR      (REGS_USBC_BASE + 0x410)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_HWTXBUF           (*(volatile hw_usbc_uh1_hwtxbuf_t *) HW_USBC_UH1_HWTXBUF_ADDR)
#define HW_USBC_UH1_HWTXBUF_RD()      (HW_USBC_UH1_HWTXBUF.U)
#endif

/*
 * constants & macros for individual USBC_UH1_HWTXBUF bitfields
 */

/* --- Register HW_USBC_UH1_HWTXBUF, field TXBURST[7:0] (RO)
 *
 * Default burst size for memory to TX buffer transfer. This is reset value of TXPBURST bits in USB
 * core regsiter USB_n_BURSTSIZE. Please see .
 */

#define BP_USBC_UH1_HWTXBUF_TXBURST      (0)      //!< Bit position for USBC_UH1_HWTXBUF_TXBURST.
#define BM_USBC_UH1_HWTXBUF_TXBURST      (0x000000ff)  //!< Bit mask for USBC_UH1_HWTXBUF_TXBURST.

//! @brief Get value of USBC_UH1_HWTXBUF_TXBURST from a register value.
#define BG_USBC_UH1_HWTXBUF_TXBURST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HWTXBUF_TXBURST) >> BP_USBC_UH1_HWTXBUF_TXBURST)

/* --- Register HW_USBC_UH1_HWTXBUF, field TXCHANADD[23:16] (RO)
 *
 * TX FIFO Buffer size is: (2^TXCHANADD) * 4 Bytes. These bits are set to '08h', so buffer size is
 * 256*4 Bytes. For the OTG controller operating in device mode, this is the FIFO buffer size per
 * endpoint. As the OTG controller has 8 TX endpoint, there are 8 of these buffers. For the OTG
 * controller operating in host mode, or for Host-only controller, the entire buffer memory is used
 * as a single TX buffer. Therefore, there is only 1 of this buffer
 */

#define BP_USBC_UH1_HWTXBUF_TXCHANADD      (16)      //!< Bit position for USBC_UH1_HWTXBUF_TXCHANADD.
#define BM_USBC_UH1_HWTXBUF_TXCHANADD      (0x00ff0000)  //!< Bit mask for USBC_UH1_HWTXBUF_TXCHANADD.

//! @brief Get value of USBC_UH1_HWTXBUF_TXCHANADD from a register value.
#define BG_USBC_UH1_HWTXBUF_TXCHANADD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HWTXBUF_TXCHANADD) >> BP_USBC_UH1_HWTXBUF_TXCHANADD)

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_HWRXBUF - RX Buffer Hardware Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_HWRXBUF - RX Buffer Hardware Parameters (RO)
 *
 * Reset value: 0x00000808
 *

 */
typedef union _hw_usbc_uh1_hwrxbuf
{
    reg32_t U;
    struct _hw_usbc_uh1_hwrxbuf_bitfields
    {
        unsigned RXBURST : 8; //!< [7:0] Default burst size for memory to RX buffer transfer.
        unsigned RXADD : 8; //!< [15:8] Buffer total size for all receive endpoints is (2^RXADD).
        unsigned RESERVED0 : 16; //!< [31:16] Reserved
    } B;
} hw_usbc_uh1_hwrxbuf_t;
#endif

/*
 * constants & macros for entire USBC_UH1_HWRXBUF register
 */
#define HW_USBC_UH1_HWRXBUF_ADDR      (REGS_USBC_BASE + 0x414)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_HWRXBUF           (*(volatile hw_usbc_uh1_hwrxbuf_t *) HW_USBC_UH1_HWRXBUF_ADDR)
#define HW_USBC_UH1_HWRXBUF_RD()      (HW_USBC_UH1_HWRXBUF.U)
#endif

/*
 * constants & macros for individual USBC_UH1_HWRXBUF bitfields
 */

/* --- Register HW_USBC_UH1_HWRXBUF, field RXBURST[7:0] (RO)
 *
 * Default burst size for memory to RX buffer transfer. This is reset value of RXPBURST bits in USB
 * core regsiter USB_n_BURSTSIZE. Please see .
 */

#define BP_USBC_UH1_HWRXBUF_RXBURST      (0)      //!< Bit position for USBC_UH1_HWRXBUF_RXBURST.
#define BM_USBC_UH1_HWRXBUF_RXBURST      (0x000000ff)  //!< Bit mask for USBC_UH1_HWRXBUF_RXBURST.

//! @brief Get value of USBC_UH1_HWRXBUF_RXBURST from a register value.
#define BG_USBC_UH1_HWRXBUF_RXBURST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HWRXBUF_RXBURST) >> BP_USBC_UH1_HWRXBUF_RXBURST)

/* --- Register HW_USBC_UH1_HWRXBUF, field RXADD[15:8] (RO)
 *
 * Buffer total size for all receive endpoints is (2^RXADD). RX Buffer size is: (2^RXADD) * 4 Bytes.
 * These bits are set to '08h', so buffer size is 256*4 Bytes. There is a single Receive FIFO buffer
 * in the USB controller. The buffer is shared for all endpoints for the OTG controller in device
 * mode.
 */

#define BP_USBC_UH1_HWRXBUF_RXADD      (8)      //!< Bit position for USBC_UH1_HWRXBUF_RXADD.
#define BM_USBC_UH1_HWRXBUF_RXADD      (0x0000ff00)  //!< Bit mask for USBC_UH1_HWRXBUF_RXADD.

//! @brief Get value of USBC_UH1_HWRXBUF_RXADD from a register value.
#define BG_USBC_UH1_HWRXBUF_RXADD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HWRXBUF_RXADD) >> BP_USBC_UH1_HWRXBUF_RXADD)

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_GPTIMER0LD - General Purpose Timer #0 Load
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_GPTIMER0LD - General Purpose Timer #0 Load (RW)
 *
 * Reset value: 0x00000000
 *
 * This register controls load value of the count timer in register n_GPTIMER0CTRL. Please see .
 */
typedef union _hw_usbc_uh1_gptimer0ld
{
    reg32_t U;
    struct _hw_usbc_uh1_gptimer0ld_bitfields
    {
        unsigned GPTLD : 24; //!< [23:0] General Purpose Timer Load Value These bit fields are loaded to GPTCNT bits when GPTRST bit is set '1b'.
        unsigned RESERVED0 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uh1_gptimer0ld_t;
#endif

/*
 * constants & macros for entire USBC_UH1_GPTIMER0LD register
 */
#define HW_USBC_UH1_GPTIMER0LD_ADDR      (REGS_USBC_BASE + 0x480)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_GPTIMER0LD           (*(volatile hw_usbc_uh1_gptimer0ld_t *) HW_USBC_UH1_GPTIMER0LD_ADDR)
#define HW_USBC_UH1_GPTIMER0LD_RD()      (HW_USBC_UH1_GPTIMER0LD.U)
#define HW_USBC_UH1_GPTIMER0LD_WR(v)     (HW_USBC_UH1_GPTIMER0LD.U = (v))
#define HW_USBC_UH1_GPTIMER0LD_SET(v)    (HW_USBC_UH1_GPTIMER0LD_WR(HW_USBC_UH1_GPTIMER0LD_RD() |  (v)))
#define HW_USBC_UH1_GPTIMER0LD_CLR(v)    (HW_USBC_UH1_GPTIMER0LD_WR(HW_USBC_UH1_GPTIMER0LD_RD() & ~(v)))
#define HW_USBC_UH1_GPTIMER0LD_TOG(v)    (HW_USBC_UH1_GPTIMER0LD_WR(HW_USBC_UH1_GPTIMER0LD_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UH1_GPTIMER0LD bitfields
 */

/* --- Register HW_USBC_UH1_GPTIMER0LD, field GPTLD[23:0] (RW)
 *
 * General Purpose Timer Load Value These bit fields are loaded to GPTCNT bits when GPTRST bit is
 * set '1b'. This value represents the time in microseconds minus 1 for the timer duration. Example:
 * for a one millisecond timer, load 1000-1=999 or 0x0003E7. Max value is 0xFFFFFF or 16.777215
 * seconds.
 */

#define BP_USBC_UH1_GPTIMER0LD_GPTLD      (0)      //!< Bit position for USBC_UH1_GPTIMER0LD_GPTLD.
#define BM_USBC_UH1_GPTIMER0LD_GPTLD      (0x00ffffff)  //!< Bit mask for USBC_UH1_GPTIMER0LD_GPTLD.

//! @brief Get value of USBC_UH1_GPTIMER0LD_GPTLD from a register value.
#define BG_USBC_UH1_GPTIMER0LD_GPTLD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_GPTIMER0LD_GPTLD) >> BP_USBC_UH1_GPTIMER0LD_GPTLD)

//! @brief Format value for bitfield USBC_UH1_GPTIMER0LD_GPTLD.
#define BF_USBC_UH1_GPTIMER0LD_GPTLD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_GPTIMER0LD_GPTLD) & BM_USBC_UH1_GPTIMER0LD_GPTLD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTLD field to a new value.
#define BW_USBC_UH1_GPTIMER0LD_GPTLD(v)   (HW_USBC_UH1_GPTIMER0LD_WR((HW_USBC_UH1_GPTIMER0LD_RD() & ~BM_USBC_UH1_GPTIMER0LD_GPTLD) | BF_USBC_UH1_GPTIMER0LD_GPTLD(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_GPTIMER0CTRL - General Purpose Timer #0 Controller
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_GPTIMER0CTRL - General Purpose Timer #0 Controller (RW)
 *
 * Reset value: 0x00000000
 *
 * This register contains the control for this countdown timer and a data field can be queried to
 * determine the running count value. This timer has granularity on 1 us and can be programmed to a
 * little over 16 seconds. There are two counter modes which are described in the register table
 * below. When the timer counter value transitions to zero, an interrupt could be generated if
 * enable.  Interrupt status bit is TI0 bit in n_USBSTS register (See ), interrupt enable bit is
 * TIE0 bit in n_USBINTR register. (See .)
 */
typedef union _hw_usbc_uh1_gptimer0ctrl
{
    reg32_t U;
    struct _hw_usbc_uh1_gptimer0ctrl_bitfields
    {
        unsigned GPTCNT : 24; //!< [23:0] General Purpose Timer Counter.
        unsigned GPTMODE : 1; //!< [24] General Purpose Timer Mode In one shot mode, the timer will count down to zero, generate an interrupt, and stop until the counter is reset by software; In repeat mode, the timer will count down to zero, generate an interrupt and automatically reload the counter value from GPTLD bits to start again.
        unsigned RESERVED0 : 5; //!< [29:25] Reserved
        unsigned GPTRST : 1; //!< [30] General Purpose Timer Reset
        unsigned GPTRUN : 1; //!< [31] General Purpose Timer Run GPTCNT bits are not effected when setting or clearing this bit.
    } B;
} hw_usbc_uh1_gptimer0ctrl_t;
#endif

/*
 * constants & macros for entire USBC_UH1_GPTIMER0CTRL register
 */
#define HW_USBC_UH1_GPTIMER0CTRL_ADDR      (REGS_USBC_BASE + 0x484)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_GPTIMER0CTRL           (*(volatile hw_usbc_uh1_gptimer0ctrl_t *) HW_USBC_UH1_GPTIMER0CTRL_ADDR)
#define HW_USBC_UH1_GPTIMER0CTRL_RD()      (HW_USBC_UH1_GPTIMER0CTRL.U)
#define HW_USBC_UH1_GPTIMER0CTRL_WR(v)     (HW_USBC_UH1_GPTIMER0CTRL.U = (v))
#define HW_USBC_UH1_GPTIMER0CTRL_SET(v)    (HW_USBC_UH1_GPTIMER0CTRL_WR(HW_USBC_UH1_GPTIMER0CTRL_RD() |  (v)))
#define HW_USBC_UH1_GPTIMER0CTRL_CLR(v)    (HW_USBC_UH1_GPTIMER0CTRL_WR(HW_USBC_UH1_GPTIMER0CTRL_RD() & ~(v)))
#define HW_USBC_UH1_GPTIMER0CTRL_TOG(v)    (HW_USBC_UH1_GPTIMER0CTRL_WR(HW_USBC_UH1_GPTIMER0CTRL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UH1_GPTIMER0CTRL bitfields
 */

/* --- Register HW_USBC_UH1_GPTIMER0CTRL, field GPTCNT[23:0] (RW)
 *
 * General Purpose Timer Counter. This field is the count value of the countdown timer.
 */

#define BP_USBC_UH1_GPTIMER0CTRL_GPTCNT      (0)      //!< Bit position for USBC_UH1_GPTIMER0CTRL_GPTCNT.
#define BM_USBC_UH1_GPTIMER0CTRL_GPTCNT      (0x00ffffff)  //!< Bit mask for USBC_UH1_GPTIMER0CTRL_GPTCNT.

//! @brief Get value of USBC_UH1_GPTIMER0CTRL_GPTCNT from a register value.
#define BG_USBC_UH1_GPTIMER0CTRL_GPTCNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_GPTIMER0CTRL_GPTCNT) >> BP_USBC_UH1_GPTIMER0CTRL_GPTCNT)

//! @brief Format value for bitfield USBC_UH1_GPTIMER0CTRL_GPTCNT.
#define BF_USBC_UH1_GPTIMER0CTRL_GPTCNT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_GPTIMER0CTRL_GPTCNT) & BM_USBC_UH1_GPTIMER0CTRL_GPTCNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTCNT field to a new value.
#define BW_USBC_UH1_GPTIMER0CTRL_GPTCNT(v)   (HW_USBC_UH1_GPTIMER0CTRL_WR((HW_USBC_UH1_GPTIMER0CTRL_RD() & ~BM_USBC_UH1_GPTIMER0CTRL_GPTCNT) | BF_USBC_UH1_GPTIMER0CTRL_GPTCNT(v)))
#endif

/* --- Register HW_USBC_UH1_GPTIMER0CTRL, field GPTMODE[24] (RW)
 *
 * General Purpose Timer Mode In one shot mode, the timer will count down to zero, generate an
 * interrupt, and stop until the counter is reset by software; In repeat mode, the timer will count
 * down to zero, generate an interrupt and automatically reload the counter value from GPTLD bits to
 * start again.
 *
 * Values:
 * 0 - One Shot Mode
 * 1 - Repeat Mode
 */

#define BP_USBC_UH1_GPTIMER0CTRL_GPTMODE      (24)      //!< Bit position for USBC_UH1_GPTIMER0CTRL_GPTMODE.
#define BM_USBC_UH1_GPTIMER0CTRL_GPTMODE      (0x01000000)  //!< Bit mask for USBC_UH1_GPTIMER0CTRL_GPTMODE.

//! @brief Get value of USBC_UH1_GPTIMER0CTRL_GPTMODE from a register value.
#define BG_USBC_UH1_GPTIMER0CTRL_GPTMODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_GPTIMER0CTRL_GPTMODE) >> BP_USBC_UH1_GPTIMER0CTRL_GPTMODE)

//! @brief Format value for bitfield USBC_UH1_GPTIMER0CTRL_GPTMODE.
#define BF_USBC_UH1_GPTIMER0CTRL_GPTMODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_GPTIMER0CTRL_GPTMODE) & BM_USBC_UH1_GPTIMER0CTRL_GPTMODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTMODE field to a new value.
#define BW_USBC_UH1_GPTIMER0CTRL_GPTMODE(v)   (HW_USBC_UH1_GPTIMER0CTRL_WR((HW_USBC_UH1_GPTIMER0CTRL_RD() & ~BM_USBC_UH1_GPTIMER0CTRL_GPTMODE) | BF_USBC_UH1_GPTIMER0CTRL_GPTMODE(v)))
#endif


/* --- Register HW_USBC_UH1_GPTIMER0CTRL, field GPTRST[30] (RW)
 *
 * General Purpose Timer Reset
 *
 * Values:
 * 0 - No action
 * 1 - Load counter value from GPTLD bits in n_GPTIMER0LD
 */

#define BP_USBC_UH1_GPTIMER0CTRL_GPTRST      (30)      //!< Bit position for USBC_UH1_GPTIMER0CTRL_GPTRST.
#define BM_USBC_UH1_GPTIMER0CTRL_GPTRST      (0x40000000)  //!< Bit mask for USBC_UH1_GPTIMER0CTRL_GPTRST.

//! @brief Get value of USBC_UH1_GPTIMER0CTRL_GPTRST from a register value.
#define BG_USBC_UH1_GPTIMER0CTRL_GPTRST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_GPTIMER0CTRL_GPTRST) >> BP_USBC_UH1_GPTIMER0CTRL_GPTRST)

//! @brief Format value for bitfield USBC_UH1_GPTIMER0CTRL_GPTRST.
#define BF_USBC_UH1_GPTIMER0CTRL_GPTRST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_GPTIMER0CTRL_GPTRST) & BM_USBC_UH1_GPTIMER0CTRL_GPTRST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTRST field to a new value.
#define BW_USBC_UH1_GPTIMER0CTRL_GPTRST(v)   (HW_USBC_UH1_GPTIMER0CTRL_WR((HW_USBC_UH1_GPTIMER0CTRL_RD() & ~BM_USBC_UH1_GPTIMER0CTRL_GPTRST) | BF_USBC_UH1_GPTIMER0CTRL_GPTRST(v)))
#endif


/* --- Register HW_USBC_UH1_GPTIMER0CTRL, field GPTRUN[31] (RW)
 *
 * General Purpose Timer Run GPTCNT bits are not effected when setting or clearing this bit.
 *
 * Values:
 * 0 - Stop counting
 * 1 - Run
 */

#define BP_USBC_UH1_GPTIMER0CTRL_GPTRUN      (31)      //!< Bit position for USBC_UH1_GPTIMER0CTRL_GPTRUN.
#define BM_USBC_UH1_GPTIMER0CTRL_GPTRUN      (0x80000000)  //!< Bit mask for USBC_UH1_GPTIMER0CTRL_GPTRUN.

//! @brief Get value of USBC_UH1_GPTIMER0CTRL_GPTRUN from a register value.
#define BG_USBC_UH1_GPTIMER0CTRL_GPTRUN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_GPTIMER0CTRL_GPTRUN) >> BP_USBC_UH1_GPTIMER0CTRL_GPTRUN)

//! @brief Format value for bitfield USBC_UH1_GPTIMER0CTRL_GPTRUN.
#define BF_USBC_UH1_GPTIMER0CTRL_GPTRUN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_GPTIMER0CTRL_GPTRUN) & BM_USBC_UH1_GPTIMER0CTRL_GPTRUN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTRUN field to a new value.
#define BW_USBC_UH1_GPTIMER0CTRL_GPTRUN(v)   (HW_USBC_UH1_GPTIMER0CTRL_WR((HW_USBC_UH1_GPTIMER0CTRL_RD() & ~BM_USBC_UH1_GPTIMER0CTRL_GPTRUN) | BF_USBC_UH1_GPTIMER0CTRL_GPTRUN(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_GPTIMER1LD - General Purpose Timer #1 Load
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_GPTIMER1LD - General Purpose Timer #1 Load (RW)
 *
 * Reset value: 0x00000000
 *
 * This register controls load value of the count timer in register n_GPTIMER1CTRL. Please see .
 */
typedef union _hw_usbc_uh1_gptimer1ld
{
    reg32_t U;
    struct _hw_usbc_uh1_gptimer1ld_bitfields
    {
        unsigned GPTLD : 24; //!< [23:0] General Purpose Timer Load Value These bit fields are loaded to GPTCNT bits when GPTRST bit is set '1b'.
        unsigned RESERVED0 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uh1_gptimer1ld_t;
#endif

/*
 * constants & macros for entire USBC_UH1_GPTIMER1LD register
 */
#define HW_USBC_UH1_GPTIMER1LD_ADDR      (REGS_USBC_BASE + 0x488)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_GPTIMER1LD           (*(volatile hw_usbc_uh1_gptimer1ld_t *) HW_USBC_UH1_GPTIMER1LD_ADDR)
#define HW_USBC_UH1_GPTIMER1LD_RD()      (HW_USBC_UH1_GPTIMER1LD.U)
#define HW_USBC_UH1_GPTIMER1LD_WR(v)     (HW_USBC_UH1_GPTIMER1LD.U = (v))
#define HW_USBC_UH1_GPTIMER1LD_SET(v)    (HW_USBC_UH1_GPTIMER1LD_WR(HW_USBC_UH1_GPTIMER1LD_RD() |  (v)))
#define HW_USBC_UH1_GPTIMER1LD_CLR(v)    (HW_USBC_UH1_GPTIMER1LD_WR(HW_USBC_UH1_GPTIMER1LD_RD() & ~(v)))
#define HW_USBC_UH1_GPTIMER1LD_TOG(v)    (HW_USBC_UH1_GPTIMER1LD_WR(HW_USBC_UH1_GPTIMER1LD_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UH1_GPTIMER1LD bitfields
 */

/* --- Register HW_USBC_UH1_GPTIMER1LD, field GPTLD[23:0] (RW)
 *
 * General Purpose Timer Load Value These bit fields are loaded to GPTCNT bits when GPTRST bit is
 * set '1b'. This value represents the time in microseconds minus 1 for the timer duration. Example:
 * for a one millisecond timer, load 1000-1=999 or 0x0003E7. Max value is 0xFFFFFF or 16.777215
 * seconds.
 */

#define BP_USBC_UH1_GPTIMER1LD_GPTLD      (0)      //!< Bit position for USBC_UH1_GPTIMER1LD_GPTLD.
#define BM_USBC_UH1_GPTIMER1LD_GPTLD      (0x00ffffff)  //!< Bit mask for USBC_UH1_GPTIMER1LD_GPTLD.

//! @brief Get value of USBC_UH1_GPTIMER1LD_GPTLD from a register value.
#define BG_USBC_UH1_GPTIMER1LD_GPTLD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_GPTIMER1LD_GPTLD) >> BP_USBC_UH1_GPTIMER1LD_GPTLD)

//! @brief Format value for bitfield USBC_UH1_GPTIMER1LD_GPTLD.
#define BF_USBC_UH1_GPTIMER1LD_GPTLD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_GPTIMER1LD_GPTLD) & BM_USBC_UH1_GPTIMER1LD_GPTLD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTLD field to a new value.
#define BW_USBC_UH1_GPTIMER1LD_GPTLD(v)   (HW_USBC_UH1_GPTIMER1LD_WR((HW_USBC_UH1_GPTIMER1LD_RD() & ~BM_USBC_UH1_GPTIMER1LD_GPTLD) | BF_USBC_UH1_GPTIMER1LD_GPTLD(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_GPTIMER1CTRL - General Purpose Timer #1 Controller
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_GPTIMER1CTRL - General Purpose Timer #1 Controller (RW)
 *
 * Reset value: 0x00000000
 *
 * This register contains the control for this countdown timer and a data field can be queried to
 * determine the running count value. This timer has granularity on 1 us and can be programmed to a
 * little over 16 seconds. There are two counter modes which are described in the register table
 * below. When the timer counter value transitions to zero, an interrupt could be generated if
 * enable.  Interrupt status bit is TI1 bit in USB_n_USBSTS register (See ), interrupt enable bit is
 * TIE1 bit in n_USBINTR register (See ).
 */
typedef union _hw_usbc_uh1_gptimer1ctrl
{
    reg32_t U;
    struct _hw_usbc_uh1_gptimer1ctrl_bitfields
    {
        unsigned GPTCNT : 24; //!< [23:0] General Purpose Timer Counter.
        unsigned GPTMODE : 1; //!< [24] General Purpose Timer Mode In one shot mode, the timer will count down to zero, generate an interrupt, and stop until the counter is reset by software.
        unsigned RESERVED0 : 5; //!< [29:25] Reserved
        unsigned GPTRST : 1; //!< [30] General Purpose Timer Reset
        unsigned GPTRUN : 1; //!< [31] General Purpose Timer Run GPTCNT bits are not effected when setting or clearing this bit.
    } B;
} hw_usbc_uh1_gptimer1ctrl_t;
#endif

/*
 * constants & macros for entire USBC_UH1_GPTIMER1CTRL register
 */
#define HW_USBC_UH1_GPTIMER1CTRL_ADDR      (REGS_USBC_BASE + 0x48c)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_GPTIMER1CTRL           (*(volatile hw_usbc_uh1_gptimer1ctrl_t *) HW_USBC_UH1_GPTIMER1CTRL_ADDR)
#define HW_USBC_UH1_GPTIMER1CTRL_RD()      (HW_USBC_UH1_GPTIMER1CTRL.U)
#define HW_USBC_UH1_GPTIMER1CTRL_WR(v)     (HW_USBC_UH1_GPTIMER1CTRL.U = (v))
#define HW_USBC_UH1_GPTIMER1CTRL_SET(v)    (HW_USBC_UH1_GPTIMER1CTRL_WR(HW_USBC_UH1_GPTIMER1CTRL_RD() |  (v)))
#define HW_USBC_UH1_GPTIMER1CTRL_CLR(v)    (HW_USBC_UH1_GPTIMER1CTRL_WR(HW_USBC_UH1_GPTIMER1CTRL_RD() & ~(v)))
#define HW_USBC_UH1_GPTIMER1CTRL_TOG(v)    (HW_USBC_UH1_GPTIMER1CTRL_WR(HW_USBC_UH1_GPTIMER1CTRL_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UH1_GPTIMER1CTRL bitfields
 */

/* --- Register HW_USBC_UH1_GPTIMER1CTRL, field GPTCNT[23:0] (RW)
 *
 * General Purpose Timer Counter. This field is the count value of the countdown timer.
 */

#define BP_USBC_UH1_GPTIMER1CTRL_GPTCNT      (0)      //!< Bit position for USBC_UH1_GPTIMER1CTRL_GPTCNT.
#define BM_USBC_UH1_GPTIMER1CTRL_GPTCNT      (0x00ffffff)  //!< Bit mask for USBC_UH1_GPTIMER1CTRL_GPTCNT.

//! @brief Get value of USBC_UH1_GPTIMER1CTRL_GPTCNT from a register value.
#define BG_USBC_UH1_GPTIMER1CTRL_GPTCNT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_GPTIMER1CTRL_GPTCNT) >> BP_USBC_UH1_GPTIMER1CTRL_GPTCNT)

//! @brief Format value for bitfield USBC_UH1_GPTIMER1CTRL_GPTCNT.
#define BF_USBC_UH1_GPTIMER1CTRL_GPTCNT(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_GPTIMER1CTRL_GPTCNT) & BM_USBC_UH1_GPTIMER1CTRL_GPTCNT)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTCNT field to a new value.
#define BW_USBC_UH1_GPTIMER1CTRL_GPTCNT(v)   (HW_USBC_UH1_GPTIMER1CTRL_WR((HW_USBC_UH1_GPTIMER1CTRL_RD() & ~BM_USBC_UH1_GPTIMER1CTRL_GPTCNT) | BF_USBC_UH1_GPTIMER1CTRL_GPTCNT(v)))
#endif

/* --- Register HW_USBC_UH1_GPTIMER1CTRL, field GPTMODE[24] (RW)
 *
 * General Purpose Timer Mode In one shot mode, the timer will count down to zero, generate an
 * interrupt, and stop until the counter is reset by software. In repeat mode, the timer will count
 * down to zero, generate an interrupt and automatically reload the counter value from GPTLD bits to
 * start again.
 *
 * Values:
 * 0 - One Shot Mode
 * 1 - Repeat Mode
 */

#define BP_USBC_UH1_GPTIMER1CTRL_GPTMODE      (24)      //!< Bit position for USBC_UH1_GPTIMER1CTRL_GPTMODE.
#define BM_USBC_UH1_GPTIMER1CTRL_GPTMODE      (0x01000000)  //!< Bit mask for USBC_UH1_GPTIMER1CTRL_GPTMODE.

//! @brief Get value of USBC_UH1_GPTIMER1CTRL_GPTMODE from a register value.
#define BG_USBC_UH1_GPTIMER1CTRL_GPTMODE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_GPTIMER1CTRL_GPTMODE) >> BP_USBC_UH1_GPTIMER1CTRL_GPTMODE)

//! @brief Format value for bitfield USBC_UH1_GPTIMER1CTRL_GPTMODE.
#define BF_USBC_UH1_GPTIMER1CTRL_GPTMODE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_GPTIMER1CTRL_GPTMODE) & BM_USBC_UH1_GPTIMER1CTRL_GPTMODE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTMODE field to a new value.
#define BW_USBC_UH1_GPTIMER1CTRL_GPTMODE(v)   (HW_USBC_UH1_GPTIMER1CTRL_WR((HW_USBC_UH1_GPTIMER1CTRL_RD() & ~BM_USBC_UH1_GPTIMER1CTRL_GPTMODE) | BF_USBC_UH1_GPTIMER1CTRL_GPTMODE(v)))
#endif


/* --- Register HW_USBC_UH1_GPTIMER1CTRL, field GPTRST[30] (RW)
 *
 * General Purpose Timer Reset
 *
 * Values:
 * 0 - No action
 * 1 - Load counter value from GPTLD bits in USB_n_GPTIMER0LD
 */

#define BP_USBC_UH1_GPTIMER1CTRL_GPTRST      (30)      //!< Bit position for USBC_UH1_GPTIMER1CTRL_GPTRST.
#define BM_USBC_UH1_GPTIMER1CTRL_GPTRST      (0x40000000)  //!< Bit mask for USBC_UH1_GPTIMER1CTRL_GPTRST.

//! @brief Get value of USBC_UH1_GPTIMER1CTRL_GPTRST from a register value.
#define BG_USBC_UH1_GPTIMER1CTRL_GPTRST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_GPTIMER1CTRL_GPTRST) >> BP_USBC_UH1_GPTIMER1CTRL_GPTRST)

//! @brief Format value for bitfield USBC_UH1_GPTIMER1CTRL_GPTRST.
#define BF_USBC_UH1_GPTIMER1CTRL_GPTRST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_GPTIMER1CTRL_GPTRST) & BM_USBC_UH1_GPTIMER1CTRL_GPTRST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTRST field to a new value.
#define BW_USBC_UH1_GPTIMER1CTRL_GPTRST(v)   (HW_USBC_UH1_GPTIMER1CTRL_WR((HW_USBC_UH1_GPTIMER1CTRL_RD() & ~BM_USBC_UH1_GPTIMER1CTRL_GPTRST) | BF_USBC_UH1_GPTIMER1CTRL_GPTRST(v)))
#endif


/* --- Register HW_USBC_UH1_GPTIMER1CTRL, field GPTRUN[31] (RW)
 *
 * General Purpose Timer Run GPTCNT bits are not effected when setting or clearing this bit.
 *
 * Values:
 * 0 - Stop counting
 * 1 - Run
 */

#define BP_USBC_UH1_GPTIMER1CTRL_GPTRUN      (31)      //!< Bit position for USBC_UH1_GPTIMER1CTRL_GPTRUN.
#define BM_USBC_UH1_GPTIMER1CTRL_GPTRUN      (0x80000000)  //!< Bit mask for USBC_UH1_GPTIMER1CTRL_GPTRUN.

//! @brief Get value of USBC_UH1_GPTIMER1CTRL_GPTRUN from a register value.
#define BG_USBC_UH1_GPTIMER1CTRL_GPTRUN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_GPTIMER1CTRL_GPTRUN) >> BP_USBC_UH1_GPTIMER1CTRL_GPTRUN)

//! @brief Format value for bitfield USBC_UH1_GPTIMER1CTRL_GPTRUN.
#define BF_USBC_UH1_GPTIMER1CTRL_GPTRUN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_GPTIMER1CTRL_GPTRUN) & BM_USBC_UH1_GPTIMER1CTRL_GPTRUN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the GPTRUN field to a new value.
#define BW_USBC_UH1_GPTIMER1CTRL_GPTRUN(v)   (HW_USBC_UH1_GPTIMER1CTRL_WR((HW_USBC_UH1_GPTIMER1CTRL_RD() & ~BM_USBC_UH1_GPTIMER1CTRL_GPTRUN) | BF_USBC_UH1_GPTIMER1CTRL_GPTRUN(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_SBUSCFG - System Bus Config
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_SBUSCFG - System Bus Config (RW)
 *
 * Reset value: 0x00000002
 *

 */
typedef union _hw_usbc_uh1_sbuscfg
{
    reg32_t U;
    struct _hw_usbc_uh1_sbuscfg_bitfields
    {
        unsigned AHBBRST : 3; //!< [2:0] AHB master interface Burst configuration These bits control AHB master transfer type sequence (or priority).
        unsigned RESERVED0 : 29; //!< [31:3] Reserved
    } B;
} hw_usbc_uh1_sbuscfg_t;
#endif

/*
 * constants & macros for entire USBC_UH1_SBUSCFG register
 */
#define HW_USBC_UH1_SBUSCFG_ADDR      (REGS_USBC_BASE + 0x490)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_SBUSCFG           (*(volatile hw_usbc_uh1_sbuscfg_t *) HW_USBC_UH1_SBUSCFG_ADDR)
#define HW_USBC_UH1_SBUSCFG_RD()      (HW_USBC_UH1_SBUSCFG.U)
#define HW_USBC_UH1_SBUSCFG_WR(v)     (HW_USBC_UH1_SBUSCFG.U = (v))
#define HW_USBC_UH1_SBUSCFG_SET(v)    (HW_USBC_UH1_SBUSCFG_WR(HW_USBC_UH1_SBUSCFG_RD() |  (v)))
#define HW_USBC_UH1_SBUSCFG_CLR(v)    (HW_USBC_UH1_SBUSCFG_WR(HW_USBC_UH1_SBUSCFG_RD() & ~(v)))
#define HW_USBC_UH1_SBUSCFG_TOG(v)    (HW_USBC_UH1_SBUSCFG_WR(HW_USBC_UH1_SBUSCFG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UH1_SBUSCFG bitfields
 */

/* --- Register HW_USBC_UH1_SBUSCFG, field AHBBRST[2:0] (RW)
 *
 * AHB master interface Burst configuration These bits control AHB master transfer type sequence (or
 * priority). This register overrides n_BURSTSIZE register when its value is not zero.
 *
 * Values:
 * 000 - Incremental burst of unspecified length only
 * 001 - INCR4 burst, then single transfer
 * 010 - INCR8 burst, INCR4 burst, then single transfer
 * 011 - INCR16 burst, INCR8 burst, INCR4 burst, then single transfer
 * 100 - Reserved, don't use
 * 101 - INCR4 burst, then incremental burst of unspecified length
 * 110 - INCR8 burst, INCR4 burst, then incremental burst of unspecified length
 * 111 - INCR16 burst, INCR8 burst, INCR4 burst, then incremental burst of unspecified length
 */

#define BP_USBC_UH1_SBUSCFG_AHBBRST      (0)      //!< Bit position for USBC_UH1_SBUSCFG_AHBBRST.
#define BM_USBC_UH1_SBUSCFG_AHBBRST      (0x00000007)  //!< Bit mask for USBC_UH1_SBUSCFG_AHBBRST.

//! @brief Get value of USBC_UH1_SBUSCFG_AHBBRST from a register value.
#define BG_USBC_UH1_SBUSCFG_AHBBRST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_SBUSCFG_AHBBRST) >> BP_USBC_UH1_SBUSCFG_AHBBRST)

//! @brief Format value for bitfield USBC_UH1_SBUSCFG_AHBBRST.
#define BF_USBC_UH1_SBUSCFG_AHBBRST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_SBUSCFG_AHBBRST) & BM_USBC_UH1_SBUSCFG_AHBBRST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AHBBRST field to a new value.
#define BW_USBC_UH1_SBUSCFG_AHBBRST(v)   (HW_USBC_UH1_SBUSCFG_WR((HW_USBC_UH1_SBUSCFG_RD() & ~BM_USBC_UH1_SBUSCFG_AHBBRST) | BF_USBC_UH1_SBUSCFG_AHBBRST(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_CAPLENGTH - Capability Registers Length
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_CAPLENGTH - Capability Registers Length (RO)
 *
 * Reset value: 0x00000040
 *
 * The Capability Registers Length register contains the address offset to the Operational registers
 * relative to the CAPLENGTH register.
 */
typedef union _hw_usbc_uh1_caplength
{
    reg8_t U;
    struct _hw_usbc_uh1_caplength_bitfields
    {
        unsigned char CAPLENGTH : 8; //!< [7:0] These bits are used as an offset to add to register base to find the beginning of the Operational Register.
    } B;
} hw_usbc_uh1_caplength_t;
#endif

/*
 * constants & macros for entire USBC_UH1_CAPLENGTH register
 */
#define HW_USBC_UH1_CAPLENGTH_ADDR      (REGS_USBC_BASE + 0x500)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_CAPLENGTH           (*(volatile hw_usbc_uh1_caplength_t *) HW_USBC_UH1_CAPLENGTH_ADDR)
#define HW_USBC_UH1_CAPLENGTH_RD()      (HW_USBC_UH1_CAPLENGTH.U)
#endif

/*
 * constants & macros for individual USBC_UH1_CAPLENGTH bitfields
 */

/* --- Register HW_USBC_UH1_CAPLENGTH, field CAPLENGTH[7:0] (RO)
 *
 * These bits are used as an offset to add to register base to find the beginning of the Operational
 * Register. Default value is '40h'.
 */

#define BP_USBC_UH1_CAPLENGTH_CAPLENGTH      (0)      //!< Bit position for USBC_UH1_CAPLENGTH_CAPLENGTH.
#define BM_USBC_UH1_CAPLENGTH_CAPLENGTH      (0x000000ff)  //!< Bit mask for USBC_UH1_CAPLENGTH_CAPLENGTH.

//! @brief Get value of USBC_UH1_CAPLENGTH_CAPLENGTH from a register value.
#define BG_USBC_UH1_CAPLENGTH_CAPLENGTH(r)   ((__REG_VALUE_TYPE((r), reg8_t) & BM_USBC_UH1_CAPLENGTH_CAPLENGTH) >> BP_USBC_UH1_CAPLENGTH_CAPLENGTH)

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_HCIVERSION - Host Controller Interface Version
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_HCIVERSION - Host Controller Interface Version (RO)
 *
 * Reset value: 0x00000100
 *
 * This is a 2-byte register containing a BCD encoding of the EHCI revision number supported by this
 * host controller. The most significant byte of this register represents a major revision and the
 * least significant byte is the minor revision.
 */
typedef union _hw_usbc_uh1_hciversion
{
    reg16_t U;
    struct _hw_usbc_uh1_hciversion_bitfields
    {
        unsigned short HCIVERSION : 16; //!< [15:0] Host Controller Interface Version Number Default value is '10h', which means EHCI rev1.0.
    } B;
} hw_usbc_uh1_hciversion_t;
#endif

/*
 * constants & macros for entire USBC_UH1_HCIVERSION register
 */
#define HW_USBC_UH1_HCIVERSION_ADDR      (REGS_USBC_BASE + 0x502)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_HCIVERSION           (*(volatile hw_usbc_uh1_hciversion_t *) HW_USBC_UH1_HCIVERSION_ADDR)
#define HW_USBC_UH1_HCIVERSION_RD()      (HW_USBC_UH1_HCIVERSION.U)
#endif

/*
 * constants & macros for individual USBC_UH1_HCIVERSION bitfields
 */

/* --- Register HW_USBC_UH1_HCIVERSION, field HCIVERSION[15:0] (RO)
 *
 * Host Controller Interface Version Number Default value is '10h', which means EHCI rev1.0.
 */

#define BP_USBC_UH1_HCIVERSION_HCIVERSION      (0)      //!< Bit position for USBC_UH1_HCIVERSION_HCIVERSION.
#define BM_USBC_UH1_HCIVERSION_HCIVERSION      (0x0000ffff)  //!< Bit mask for USBC_UH1_HCIVERSION_HCIVERSION.

//! @brief Get value of USBC_UH1_HCIVERSION_HCIVERSION from a register value.
#define BG_USBC_UH1_HCIVERSION_HCIVERSION(r)   ((__REG_VALUE_TYPE((r), reg16_t) & BM_USBC_UH1_HCIVERSION_HCIVERSION) >> BP_USBC_UH1_HCIVERSION_HCIVERSION)

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_HCSPARAMS - Host Controller Structural Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_HCSPARAMS - Host Controller Structural Parameters (RO)
 *
 * Reset value: 0x00010011
 *
 * The following figure shows the port steering logic capabilities of Host Control Structural
 * Parameters (n_HCSPARAMS).
 */
typedef union _hw_usbc_uh1_hcsparams
{
    reg32_t U;
    struct _hw_usbc_uh1_hcsparams_bitfields
    {
        unsigned N_PORTS : 4; //!< [3:0] Number of downstream ports.
        unsigned PPC : 1; //!< [4] Port Power Control This field indicates whether the host controller implementation includes port power control.
        unsigned RESERVED0 : 3; //!< [7:5] Reserved
        unsigned N_PCC : 4; //!< [11:8] Number of Ports per Companion Controller This field indicates the number of ports supported per internal Companion Controller.
        unsigned N_CC : 4; //!< [15:12] Number of Companion Controller (N_CC).
        unsigned PI : 1; //!< [16] Port Indicators (P INDICATOR) This bit indicates whether the ports support port indicator control.
        unsigned RESERVED1 : 3; //!< [19:17] Reserved
        unsigned N_PTT : 4; //!< [23:20] Number of Ports per Transaction Translator (N_PTT).
        unsigned N_TT : 4; //!< [27:24] Number of Transaction Translators (N_TT).
        unsigned RESERVED2 : 4; //!< [31:28] Reserved
    } B;
} hw_usbc_uh1_hcsparams_t;
#endif

/*
 * constants & macros for entire USBC_UH1_HCSPARAMS register
 */
#define HW_USBC_UH1_HCSPARAMS_ADDR      (REGS_USBC_BASE + 0x504)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_HCSPARAMS           (*(volatile hw_usbc_uh1_hcsparams_t *) HW_USBC_UH1_HCSPARAMS_ADDR)
#define HW_USBC_UH1_HCSPARAMS_RD()      (HW_USBC_UH1_HCSPARAMS.U)
#endif

/*
 * constants & macros for individual USBC_UH1_HCSPARAMS bitfields
 */

/* --- Register HW_USBC_UH1_HCSPARAMS, field N_PORTS[3:0] (RO)
 *
 * Number of downstream ports. This field specifies the number of physical downstream ports
 * implemented on this host controller. The value of this field determines how many port registers
 * are addressable in the Operational Register. Valid values are in the range of 1h to Fh. A zero in
 * this field is undefined. These bits are always set to '0001b' because all controller cores are
 * Single-Port Host.
 */

#define BP_USBC_UH1_HCSPARAMS_N_PORTS      (0)      //!< Bit position for USBC_UH1_HCSPARAMS_N_PORTS.
#define BM_USBC_UH1_HCSPARAMS_N_PORTS      (0x0000000f)  //!< Bit mask for USBC_UH1_HCSPARAMS_N_PORTS.

//! @brief Get value of USBC_UH1_HCSPARAMS_N_PORTS from a register value.
#define BG_USBC_UH1_HCSPARAMS_N_PORTS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HCSPARAMS_N_PORTS) >> BP_USBC_UH1_HCSPARAMS_N_PORTS)

/* --- Register HW_USBC_UH1_HCSPARAMS, field PPC[4] (RO)
 *
 * Port Power Control This field indicates whether the host controller implementation includes port
 * power control. A one indicates the ports have port power switches. A zero indicates the ports do
 * not have port power switches. The value of this field affects the functionality of the Port Power
 * field in each port status and control register
 */

#define BP_USBC_UH1_HCSPARAMS_PPC      (4)      //!< Bit position for USBC_UH1_HCSPARAMS_PPC.
#define BM_USBC_UH1_HCSPARAMS_PPC      (0x00000010)  //!< Bit mask for USBC_UH1_HCSPARAMS_PPC.

//! @brief Get value of USBC_UH1_HCSPARAMS_PPC from a register value.
#define BG_USBC_UH1_HCSPARAMS_PPC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HCSPARAMS_PPC) >> BP_USBC_UH1_HCSPARAMS_PPC)

/* --- Register HW_USBC_UH1_HCSPARAMS, field N_PCC[11:8] (RO)
 *
 * Number of Ports per Companion Controller This field indicates the number of ports supported per
 * internal Companion Controller. It is used to indicate the port routing configuration to the
 * system software. For example, if N_PORTS has a value of 6 and N_CC has a value of 2 then N_PCC
 * could have a value of 3. The convention is that the first N_PCC ports are assumed to be routed to
 * companion controller 1, the next N_PCC ports to companion controller 2, etc. In the previous
 * example, the N_PCC could have been 4, where the first 4 are routed to companion controller 1 and
 * the last two are routed to companion controller 2. The number in this field must be consistent
 * with N_PORTS and N_CC. These bits are '0000b' in all controller core.
 */

#define BP_USBC_UH1_HCSPARAMS_N_PCC      (8)      //!< Bit position for USBC_UH1_HCSPARAMS_N_PCC.
#define BM_USBC_UH1_HCSPARAMS_N_PCC      (0x00000f00)  //!< Bit mask for USBC_UH1_HCSPARAMS_N_PCC.

//! @brief Get value of USBC_UH1_HCSPARAMS_N_PCC from a register value.
#define BG_USBC_UH1_HCSPARAMS_N_PCC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HCSPARAMS_N_PCC) >> BP_USBC_UH1_HCSPARAMS_N_PCC)

/* --- Register HW_USBC_UH1_HCSPARAMS, field N_CC[15:12] (RO)
 *
 * Number of Companion Controller (N_CC). This field indicates the number of companion controllers
 * associated with this USB2.0 host controller. These bits are '0000b' in all controller core.
 *
 * Values:
 * 0 - There is no internal Companion Controller and port-ownership hand-off is not supported.
 * 1 - There are internal companion controller(s) and port-ownership hand-offs is supported.
 */

#define BP_USBC_UH1_HCSPARAMS_N_CC      (12)      //!< Bit position for USBC_UH1_HCSPARAMS_N_CC.
#define BM_USBC_UH1_HCSPARAMS_N_CC      (0x0000f000)  //!< Bit mask for USBC_UH1_HCSPARAMS_N_CC.

//! @brief Get value of USBC_UH1_HCSPARAMS_N_CC from a register value.
#define BG_USBC_UH1_HCSPARAMS_N_CC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HCSPARAMS_N_CC) >> BP_USBC_UH1_HCSPARAMS_N_CC)


/* --- Register HW_USBC_UH1_HCSPARAMS, field PI[16] (RO)
 *
 * Port Indicators (P INDICATOR) This bit indicates whether the ports support port indicator
 * control. When set to one, the port status and control registers include a read/writeable field
 * for controlling the state of the port indicator This bit is "1b" in all controller core.
 */

#define BP_USBC_UH1_HCSPARAMS_PI      (16)      //!< Bit position for USBC_UH1_HCSPARAMS_PI.
#define BM_USBC_UH1_HCSPARAMS_PI      (0x00010000)  //!< Bit mask for USBC_UH1_HCSPARAMS_PI.

//! @brief Get value of USBC_UH1_HCSPARAMS_PI from a register value.
#define BG_USBC_UH1_HCSPARAMS_PI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HCSPARAMS_PI) >> BP_USBC_UH1_HCSPARAMS_PI)

/* --- Register HW_USBC_UH1_HCSPARAMS, field N_PTT[23:20] (RO)
 *
 * Number of Ports per Transaction Translator (N_PTT). Default value '0000b' This field indicates
 * the number of ports assigned to each transaction translator within the USB2.0 host controller.
 * These bits would be set to equal N_PORTS for Multi-Port Host, and '0000b' for Single-Port Host.
 */

#define BP_USBC_UH1_HCSPARAMS_N_PTT      (20)      //!< Bit position for USBC_UH1_HCSPARAMS_N_PTT.
#define BM_USBC_UH1_HCSPARAMS_N_PTT      (0x00f00000)  //!< Bit mask for USBC_UH1_HCSPARAMS_N_PTT.

//! @brief Get value of USBC_UH1_HCSPARAMS_N_PTT from a register value.
#define BG_USBC_UH1_HCSPARAMS_N_PTT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HCSPARAMS_N_PTT) >> BP_USBC_UH1_HCSPARAMS_N_PTT)

/* --- Register HW_USBC_UH1_HCSPARAMS, field N_TT[27:24] (RO)
 *
 * Number of Transaction Translators (N_TT). Default value '0000b' This field indicates the number
 * of embedded transaction translators associated with the USB2.0 host controller. These bits would
 * be set to '0001b' for Multi-Port Host, and '0000b' for Single-Port Host.
 */

#define BP_USBC_UH1_HCSPARAMS_N_TT      (24)      //!< Bit position for USBC_UH1_HCSPARAMS_N_TT.
#define BM_USBC_UH1_HCSPARAMS_N_TT      (0x0f000000)  //!< Bit mask for USBC_UH1_HCSPARAMS_N_TT.

//! @brief Get value of USBC_UH1_HCSPARAMS_N_TT from a register value.
#define BG_USBC_UH1_HCSPARAMS_N_TT(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HCSPARAMS_N_TT) >> BP_USBC_UH1_HCSPARAMS_N_TT)

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_HCCPARAMS - Host Controller Capability Parameters
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_HCCPARAMS - Host Controller Capability Parameters (RO)
 *
 * Reset value: 0x00000006
 *
 * This register identifies multiple mode control (time-base bit functionality), addressing
 * capability.
 */
typedef union _hw_usbc_uh1_hccparams
{
    reg32_t U;
    struct _hw_usbc_uh1_hccparams_bitfields
    {
        unsigned ADC : 1; //!< [0] 64-bit Addressing Capability This bit is set '0b' in all controller core, no 64-bit addressing capability is supported.
        unsigned PFL : 1; //!< [1] Programmable Frame List Flag If this bit is set to zero, then the system software must use a frame list length of 1024 elements with this host controller.
        unsigned ASP : 1; //!< [2] Asynchronous Schedule Park Capability If this bit is set to a one, then the host controller supports the park feature for high-speed queue heads in the Asynchronous Schedule.
        unsigned RESERVED0 : 1; //!< [3] Reserved
        unsigned IST : 4; //!< [7:4] Isochronous Scheduling Threshold.
        unsigned EECP : 8; //!< [15:8] EHCI Extended Capabilities Pointer.
        unsigned RESERVED1 : 16; //!< [31:16] Reserved
    } B;
} hw_usbc_uh1_hccparams_t;
#endif

/*
 * constants & macros for entire USBC_UH1_HCCPARAMS register
 */
#define HW_USBC_UH1_HCCPARAMS_ADDR      (REGS_USBC_BASE + 0x508)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_HCCPARAMS           (*(volatile hw_usbc_uh1_hccparams_t *) HW_USBC_UH1_HCCPARAMS_ADDR)
#define HW_USBC_UH1_HCCPARAMS_RD()      (HW_USBC_UH1_HCCPARAMS.U)
#endif

/*
 * constants & macros for individual USBC_UH1_HCCPARAMS bitfields
 */

/* --- Register HW_USBC_UH1_HCCPARAMS, field ADC[0] (RO)
 *
 * 64-bit Addressing Capability This bit is set '0b' in all controller core, no 64-bit addressing
 * capability is supported.
 */

#define BP_USBC_UH1_HCCPARAMS_ADC      (0)      //!< Bit position for USBC_UH1_HCCPARAMS_ADC.
#define BM_USBC_UH1_HCCPARAMS_ADC      (0x00000001)  //!< Bit mask for USBC_UH1_HCCPARAMS_ADC.

//! @brief Get value of USBC_UH1_HCCPARAMS_ADC from a register value.
#define BG_USBC_UH1_HCCPARAMS_ADC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HCCPARAMS_ADC) >> BP_USBC_UH1_HCCPARAMS_ADC)

/* --- Register HW_USBC_UH1_HCCPARAMS, field PFL[1] (RO)
 *
 * Programmable Frame List Flag If this bit is set to zero, then the system software must use a
 * frame list length of 1024 elements with this host controller. The USBCMD register Frame List Size
 * field is a read-only register and must be set to zero. If set to a one, then the system software
 * can specify and use a smaller frame list and configure the host controller via the USBCMD
 * register Frame List Size field. The frame list must always be aligned on a 4K-page boundary. This
 * requirement ensures that the frame list is always physically contiguous. This bit is set '1b' in
 * all controller core.
 */

#define BP_USBC_UH1_HCCPARAMS_PFL      (1)      //!< Bit position for USBC_UH1_HCCPARAMS_PFL.
#define BM_USBC_UH1_HCCPARAMS_PFL      (0x00000002)  //!< Bit mask for USBC_UH1_HCCPARAMS_PFL.

//! @brief Get value of USBC_UH1_HCCPARAMS_PFL from a register value.
#define BG_USBC_UH1_HCCPARAMS_PFL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HCCPARAMS_PFL) >> BP_USBC_UH1_HCCPARAMS_PFL)

/* --- Register HW_USBC_UH1_HCCPARAMS, field ASP[2] (RO)
 *
 * Asynchronous Schedule Park Capability If this bit is set to a one, then the host controller
 * supports the park feature for high-speed queue heads in the Asynchronous Schedule. The feature
 * can be disabled or enabled and set to a specific level by using the Asynchronous Schedule Park
 * Mode Enable and Asynchronous Schedule Park Mode Count fields in the USBCMD register. ASP bit
 * reset value: '00b' for OTG controller core, '11b' for Host-only controller core.
 */

#define BP_USBC_UH1_HCCPARAMS_ASP      (2)      //!< Bit position for USBC_UH1_HCCPARAMS_ASP.
#define BM_USBC_UH1_HCCPARAMS_ASP      (0x00000004)  //!< Bit mask for USBC_UH1_HCCPARAMS_ASP.

//! @brief Get value of USBC_UH1_HCCPARAMS_ASP from a register value.
#define BG_USBC_UH1_HCCPARAMS_ASP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HCCPARAMS_ASP) >> BP_USBC_UH1_HCCPARAMS_ASP)

/* --- Register HW_USBC_UH1_HCCPARAMS, field IST[7:4] (RO)
 *
 * Isochronous Scheduling Threshold. This field indicates, relative to the current position of the
 * executing host controller, where software can reliably update the isochronous schedule. When bit
 * [7] is zero, the value of the least significant 3 bits indicates the number of micro-frames a
 * host controller can hold a set of isochronous data structures (one or more) before flushing the
 * state. When bit [7] is a one, then host software assumes the host controller may cache an
 * isochronous data structure for an entire frame. These bits are set '00h' in all controller core.
 */

#define BP_USBC_UH1_HCCPARAMS_IST      (4)      //!< Bit position for USBC_UH1_HCCPARAMS_IST.
#define BM_USBC_UH1_HCCPARAMS_IST      (0x000000f0)  //!< Bit mask for USBC_UH1_HCCPARAMS_IST.

//! @brief Get value of USBC_UH1_HCCPARAMS_IST from a register value.
#define BG_USBC_UH1_HCCPARAMS_IST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HCCPARAMS_IST) >> BP_USBC_UH1_HCCPARAMS_IST)

/* --- Register HW_USBC_UH1_HCCPARAMS, field EECP[15:8] (RO)
 *
 * EHCI Extended Capabilities Pointer. This field indicates the existence of a capabilities list. A
 * value of 00h indicates no extended capabilities are implemented. A non-zero value in this
 * register indicates the offset in PCI configuration space of the first EHCI extended capability.
 * The pointer value must be 40h or greater if implemented to maintain the consistency of the PCI
 * header defined for this class of device. These bits are set '00h' in all controller core.
 */

#define BP_USBC_UH1_HCCPARAMS_EECP      (8)      //!< Bit position for USBC_UH1_HCCPARAMS_EECP.
#define BM_USBC_UH1_HCCPARAMS_EECP      (0x0000ff00)  //!< Bit mask for USBC_UH1_HCCPARAMS_EECP.

//! @brief Get value of USBC_UH1_HCCPARAMS_EECP from a register value.
#define BG_USBC_UH1_HCCPARAMS_EECP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_HCCPARAMS_EECP) >> BP_USBC_UH1_HCCPARAMS_EECP)

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_USBCMD - USB Command Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_USBCMD - USB Command Register (RW)
 *
 * Reset value: 0x00080000
 *
 * The Command Register indicates the command to be executed by the serial bus host/device
 * controller. Writing to the register causes a command to be executed.
 */
typedef union _hw_usbc_uh1_usbcmd
{
    reg32_t U;
    struct _hw_usbc_uh1_usbcmd_bitfields
    {
        unsigned RS : 1; //!< [0] Run/Stop (RS) - Read/Write.
        unsigned RST : 1; //!< [1] Controller Reset (RESET) - Read/Write.
        unsigned FS : 2; //!< [3:2] See description at bit 15
        unsigned PSE : 1; //!< [4] Periodic Schedule Enable- Read/Write.
        unsigned ASE : 1; //!< [5] Asynchronous Schedule Enable - Read/Write.
        unsigned IAA : 1; //!< [6] Interrupt on Async Advance Doorbell - Read/Write.
        unsigned RESERVED0 : 1; //!< [7] Reserved
        unsigned ASP : 2; //!< [9:8] Asynchronous Schedule Park Mode Count - Read/Write.
        unsigned RESERVED1 : 1; //!< [10] Reserved
        unsigned ASPE : 1; //!< [11] Asynchronous Schedule Park Mode Enable - Read/Write.
        unsigned RESERVED2 : 1; //!< [12] Reserved
        unsigned SUTW : 1; //!< [13] Setup TripWire - Read/Write.
        unsigned ATDTW : 1; //!< [14] Add dTD TripWire - Read/Write.
        unsigned FS1 : 1; //!< [15] See also bits 3-2 Frame List Size - (Read/Write or Read Only).
        unsigned ITC : 8; //!< [23:16] Interrupt Threshold Control -Read/Write.
        unsigned RESERVED3 : 8; //!< [31:24] Reserved
    } B;
} hw_usbc_uh1_usbcmd_t;
#endif

/*
 * constants & macros for entire USBC_UH1_USBCMD register
 */
#define HW_USBC_UH1_USBCMD_ADDR      (REGS_USBC_BASE + 0x540)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_USBCMD           (*(volatile hw_usbc_uh1_usbcmd_t *) HW_USBC_UH1_USBCMD_ADDR)
#define HW_USBC_UH1_USBCMD_RD()      (HW_USBC_UH1_USBCMD.U)
#define HW_USBC_UH1_USBCMD_WR(v)     (HW_USBC_UH1_USBCMD.U = (v))
#define HW_USBC_UH1_USBCMD_SET(v)    (HW_USBC_UH1_USBCMD_WR(HW_USBC_UH1_USBCMD_RD() |  (v)))
#define HW_USBC_UH1_USBCMD_CLR(v)    (HW_USBC_UH1_USBCMD_WR(HW_USBC_UH1_USBCMD_RD() & ~(v)))
#define HW_USBC_UH1_USBCMD_TOG(v)    (HW_USBC_UH1_USBCMD_WR(HW_USBC_UH1_USBCMD_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UH1_USBCMD bitfields
 */

/* --- Register HW_USBC_UH1_USBCMD, field RS[0] (RW)
 *
 * Run/Stop (RS) - Read/Write. Default 0b. 1=Run. 0=Stop. Host operation mode: When set to '1b', the
 * Controller proceeds with the execution of the schedule. The Controller continues execution as
 * long as this bit is set to a one. When this bit is set to 0, the Host Controller completes the
 * current transaction on the USB and then halts. The HC Halted bit in the status register indicates
 * when the Controller has finished the transaction and has entered the stopped state. Software
 * should not write a one to this field unless the controller is in the Halted state (that is,
 * HCHalted in the USBSTS register is a one). Device operation mode: Writing a one to this bit will
 * cause the controller to enable a pull-up on D+ and initiate an attach event. This control bit is
 * not directly connected to the pull-up enable, as the pull-up will become disabled upon
 * transitioning into high-speed mode. Software should use this bit to prevent an attach event
 * before the controller has been properly initialized. Writing a 0 to this will cause a detach
 * event.
 */

#define BP_USBC_UH1_USBCMD_RS      (0)      //!< Bit position for USBC_UH1_USBCMD_RS.
#define BM_USBC_UH1_USBCMD_RS      (0x00000001)  //!< Bit mask for USBC_UH1_USBCMD_RS.

//! @brief Get value of USBC_UH1_USBCMD_RS from a register value.
#define BG_USBC_UH1_USBCMD_RS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBCMD_RS) >> BP_USBC_UH1_USBCMD_RS)

//! @brief Format value for bitfield USBC_UH1_USBCMD_RS.
#define BF_USBC_UH1_USBCMD_RS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBCMD_RS) & BM_USBC_UH1_USBCMD_RS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RS field to a new value.
#define BW_USBC_UH1_USBCMD_RS(v)   (HW_USBC_UH1_USBCMD_WR((HW_USBC_UH1_USBCMD_RD() & ~BM_USBC_UH1_USBCMD_RS) | BF_USBC_UH1_USBCMD_RS(v)))
#endif

/* --- Register HW_USBC_UH1_USBCMD, field RST[1] (RW)
 *
 * Controller Reset (RESET) - Read/Write. Software uses this bit to reset the controller. This bit
 * is set to zero by the Host/Device Controller when the reset process is complete. Software cannot
 * terminate the reset process early by writing a zero to this register. Host operation mode: When
 * software writes a one to this bit, the Controller resets its internal pipelines, timers,
 * counters, state machines etc. to their initial value. Any transaction currently in progress on
 * USB is immediately terminated. A USB reset is not driven on downstream ports. Software should not
 * set this bit to a one when the HCHalted bit in the USBSTS register is a zero. Attempting to reset
 * an actively running host controller will result in undefined behavior. Device operation mode:
 * When software writes a one to this bit, the Controller resets its internal pipelines, timers,
 * counters, state machines etc. to their initial value. Writing a one to this bit when the device
 * is in the attached state is not recommended, because the effect on an attached host is undefined.
 * In order to ensure that the device is not in an attached state before initiating a device
 * controller reset, all primed endpoints should be flushed and the USBCMD Run/Stop bit should be
 * set to 0.
 */

#define BP_USBC_UH1_USBCMD_RST      (1)      //!< Bit position for USBC_UH1_USBCMD_RST.
#define BM_USBC_UH1_USBCMD_RST      (0x00000002)  //!< Bit mask for USBC_UH1_USBCMD_RST.

//! @brief Get value of USBC_UH1_USBCMD_RST from a register value.
#define BG_USBC_UH1_USBCMD_RST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBCMD_RST) >> BP_USBC_UH1_USBCMD_RST)

//! @brief Format value for bitfield USBC_UH1_USBCMD_RST.
#define BF_USBC_UH1_USBCMD_RST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBCMD_RST) & BM_USBC_UH1_USBCMD_RST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RST field to a new value.
#define BW_USBC_UH1_USBCMD_RST(v)   (HW_USBC_UH1_USBCMD_WR((HW_USBC_UH1_USBCMD_RD() & ~BM_USBC_UH1_USBCMD_RST) | BF_USBC_UH1_USBCMD_RST(v)))
#endif

/* --- Register HW_USBC_UH1_USBCMD, field FS[3:2] (RW)
 *
 * See description at bit 15
 */

#define BP_USBC_UH1_USBCMD_FS      (2)      //!< Bit position for USBC_UH1_USBCMD_FS.
#define BM_USBC_UH1_USBCMD_FS      (0x0000000c)  //!< Bit mask for USBC_UH1_USBCMD_FS.

//! @brief Get value of USBC_UH1_USBCMD_FS from a register value.
#define BG_USBC_UH1_USBCMD_FS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBCMD_FS) >> BP_USBC_UH1_USBCMD_FS)

//! @brief Format value for bitfield USBC_UH1_USBCMD_FS.
#define BF_USBC_UH1_USBCMD_FS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBCMD_FS) & BM_USBC_UH1_USBCMD_FS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FS field to a new value.
#define BW_USBC_UH1_USBCMD_FS(v)   (HW_USBC_UH1_USBCMD_WR((HW_USBC_UH1_USBCMD_RD() & ~BM_USBC_UH1_USBCMD_FS) | BF_USBC_UH1_USBCMD_FS(v)))
#endif

/* --- Register HW_USBC_UH1_USBCMD, field PSE[4] (RW)
 *
 * Periodic Schedule Enable- Read/Write. Default 0b. This bit controls whether the host controller
 * skips processing the Periodic Schedule. Only the host controller uses this bit. Values Meaning
 *
 * Values:
 * 0 - Do not process the Periodic Schedule
 * 1 - Use the PERIODICLISTBASE register to access the Periodic Schedule.
 */

#define BP_USBC_UH1_USBCMD_PSE      (4)      //!< Bit position for USBC_UH1_USBCMD_PSE.
#define BM_USBC_UH1_USBCMD_PSE      (0x00000010)  //!< Bit mask for USBC_UH1_USBCMD_PSE.

//! @brief Get value of USBC_UH1_USBCMD_PSE from a register value.
#define BG_USBC_UH1_USBCMD_PSE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBCMD_PSE) >> BP_USBC_UH1_USBCMD_PSE)

//! @brief Format value for bitfield USBC_UH1_USBCMD_PSE.
#define BF_USBC_UH1_USBCMD_PSE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBCMD_PSE) & BM_USBC_UH1_USBCMD_PSE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PSE field to a new value.
#define BW_USBC_UH1_USBCMD_PSE(v)   (HW_USBC_UH1_USBCMD_WR((HW_USBC_UH1_USBCMD_RD() & ~BM_USBC_UH1_USBCMD_PSE) | BF_USBC_UH1_USBCMD_PSE(v)))
#endif


/* --- Register HW_USBC_UH1_USBCMD, field ASE[5] (RW)
 *
 * Asynchronous Schedule Enable - Read/Write. Default 0b. This bit controls whether the host
 * controller skips processing the Asynchronous Schedule. Only the host controller uses this bit.
 * Values Meaning
 *
 * Values:
 * 0 - Do not process the Asynchronous Schedule.
 * 1 - Use the ASYNCLISTADDR register to access the Asynchronous Schedule.
 */

#define BP_USBC_UH1_USBCMD_ASE      (5)      //!< Bit position for USBC_UH1_USBCMD_ASE.
#define BM_USBC_UH1_USBCMD_ASE      (0x00000020)  //!< Bit mask for USBC_UH1_USBCMD_ASE.

//! @brief Get value of USBC_UH1_USBCMD_ASE from a register value.
#define BG_USBC_UH1_USBCMD_ASE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBCMD_ASE) >> BP_USBC_UH1_USBCMD_ASE)

//! @brief Format value for bitfield USBC_UH1_USBCMD_ASE.
#define BF_USBC_UH1_USBCMD_ASE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBCMD_ASE) & BM_USBC_UH1_USBCMD_ASE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASE field to a new value.
#define BW_USBC_UH1_USBCMD_ASE(v)   (HW_USBC_UH1_USBCMD_WR((HW_USBC_UH1_USBCMD_RD() & ~BM_USBC_UH1_USBCMD_ASE) | BF_USBC_UH1_USBCMD_ASE(v)))
#endif


/* --- Register HW_USBC_UH1_USBCMD, field IAA[6] (RW)
 *
 * Interrupt on Async Advance Doorbell - Read/Write. This bit is used as a doorbell by software to
 * tell the host controller to issue an interrupt the next time it advances asynchronous schedule.
 * Software must write a 1 to this bit to ring the doorbell. When the host controller has evicted
 * all appropriate cached schedule states, it sets the Interrupt on Async Advance status bit in the
 * USBSTS register. If the Interrupt on Sync Advance Enable bit in the USBINTR register is one, then
 * the host controller will assert an interrupt at the next interrupt threshold. The host controller
 * sets this bit to zero after it has set the Interrupt on Sync Advance status bit in the USBSTS
 * register to one. Software should not write a one to this bit when the asynchronous schedule is
 * inactive. Doing so will yield undefined results. This bit is only used in host mode. Writing a
 * one to this bit when device mode is selected will have undefined results.
 */

#define BP_USBC_UH1_USBCMD_IAA      (6)      //!< Bit position for USBC_UH1_USBCMD_IAA.
#define BM_USBC_UH1_USBCMD_IAA      (0x00000040)  //!< Bit mask for USBC_UH1_USBCMD_IAA.

//! @brief Get value of USBC_UH1_USBCMD_IAA from a register value.
#define BG_USBC_UH1_USBCMD_IAA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBCMD_IAA) >> BP_USBC_UH1_USBCMD_IAA)

//! @brief Format value for bitfield USBC_UH1_USBCMD_IAA.
#define BF_USBC_UH1_USBCMD_IAA(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBCMD_IAA) & BM_USBC_UH1_USBCMD_IAA)

#ifndef __LANGUAGE_ASM__
//! @brief Set the IAA field to a new value.
#define BW_USBC_UH1_USBCMD_IAA(v)   (HW_USBC_UH1_USBCMD_WR((HW_USBC_UH1_USBCMD_RD() & ~BM_USBC_UH1_USBCMD_IAA) | BF_USBC_UH1_USBCMD_IAA(v)))
#endif

/* --- Register HW_USBC_UH1_USBCMD, field ASP[9:8] (RW)
 *
 * Asynchronous Schedule Park Mode Count - Read/Write. If the Asynchronous Park Capability bit in
 * the HCCPARAMS register is a one, then this field defaults to 3h and is R/W. Otherwise it defaults
 * to zero and is Read-Only. It contains a count of the number of successive transactions the host
 * controller is allowed to execute from a high-speed queue head on the Asynchronous schedule before
 * continuing traversal of the Asynchronous schedule. Valid values are 1h to 3h. Software must not
 * write a zero to this bit when Park Mode Enable is a one as this will result in undefined
 * behavior. This field is set to 3h in all controller core.
 */

#define BP_USBC_UH1_USBCMD_ASP      (8)      //!< Bit position for USBC_UH1_USBCMD_ASP.
#define BM_USBC_UH1_USBCMD_ASP      (0x00000300)  //!< Bit mask for USBC_UH1_USBCMD_ASP.

//! @brief Get value of USBC_UH1_USBCMD_ASP from a register value.
#define BG_USBC_UH1_USBCMD_ASP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBCMD_ASP) >> BP_USBC_UH1_USBCMD_ASP)

//! @brief Format value for bitfield USBC_UH1_USBCMD_ASP.
#define BF_USBC_UH1_USBCMD_ASP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBCMD_ASP) & BM_USBC_UH1_USBCMD_ASP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASP field to a new value.
#define BW_USBC_UH1_USBCMD_ASP(v)   (HW_USBC_UH1_USBCMD_WR((HW_USBC_UH1_USBCMD_RD() & ~BM_USBC_UH1_USBCMD_ASP) | BF_USBC_UH1_USBCMD_ASP(v)))
#endif

/* --- Register HW_USBC_UH1_USBCMD, field ASPE[11] (RW)
 *
 * Asynchronous Schedule Park Mode Enable - Read/Write. If the Asynchronous Park Capability bit in
 * the HCCPARAMS register is a one, then this bit defaults to a 1h and is R/W. Otherwise the bit
 * must be a zero and is RO. Software uses this bit to enable or disable Park mode. When this bit is
 * one, Park mode is enabled. When this bit is a zero, Park mode is disabled. ASPE bit reset value:
 * '0b' for OTG controller core, '1b' for Host-only controller core.
 */

#define BP_USBC_UH1_USBCMD_ASPE      (11)      //!< Bit position for USBC_UH1_USBCMD_ASPE.
#define BM_USBC_UH1_USBCMD_ASPE      (0x00000800)  //!< Bit mask for USBC_UH1_USBCMD_ASPE.

//! @brief Get value of USBC_UH1_USBCMD_ASPE from a register value.
#define BG_USBC_UH1_USBCMD_ASPE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBCMD_ASPE) >> BP_USBC_UH1_USBCMD_ASPE)

//! @brief Format value for bitfield USBC_UH1_USBCMD_ASPE.
#define BF_USBC_UH1_USBCMD_ASPE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBCMD_ASPE) & BM_USBC_UH1_USBCMD_ASPE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASPE field to a new value.
#define BW_USBC_UH1_USBCMD_ASPE(v)   (HW_USBC_UH1_USBCMD_WR((HW_USBC_UH1_USBCMD_RD() & ~BM_USBC_UH1_USBCMD_ASPE) | BF_USBC_UH1_USBCMD_ASPE(v)))
#endif

/* --- Register HW_USBC_UH1_USBCMD, field SUTW[13] (RW)
 *
 * Setup TripWire - Read/Write. [device mode only] This bit is used as a semaphore to ensure that
 * the setup data payload of 8 bytes is extracted from a QH by the DCD without being corrupted. If
 * the setup lockout mode is off (SLOM bit in USB core register n_USBMODE, see ) then there is a
 * hazard when new setup data arrives while the DCD is copying the setup data payload from the QH
 * for a previous setup packet. This bit is set and cleared by software. This bit would also be
 * cleared by hardware when a hazard detected.
 */

#define BP_USBC_UH1_USBCMD_SUTW      (13)      //!< Bit position for USBC_UH1_USBCMD_SUTW.
#define BM_USBC_UH1_USBCMD_SUTW      (0x00002000)  //!< Bit mask for USBC_UH1_USBCMD_SUTW.

//! @brief Get value of USBC_UH1_USBCMD_SUTW from a register value.
#define BG_USBC_UH1_USBCMD_SUTW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBCMD_SUTW) >> BP_USBC_UH1_USBCMD_SUTW)

//! @brief Format value for bitfield USBC_UH1_USBCMD_SUTW.
#define BF_USBC_UH1_USBCMD_SUTW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBCMD_SUTW) & BM_USBC_UH1_USBCMD_SUTW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SUTW field to a new value.
#define BW_USBC_UH1_USBCMD_SUTW(v)   (HW_USBC_UH1_USBCMD_WR((HW_USBC_UH1_USBCMD_RD() & ~BM_USBC_UH1_USBCMD_SUTW) | BF_USBC_UH1_USBCMD_SUTW(v)))
#endif

/* --- Register HW_USBC_UH1_USBCMD, field ATDTW[14] (RW)
 *
 * Add dTD TripWire - Read/Write. [device mode only] This bit is used as a semaphore to ensure
 * proper addition of a new dTD to an active (primed) endpoint's linked list. This bit is set and
 * cleared by software. This bit would also be cleared by hardware when state machine is hazard
 * region for which adding a dTD to a primed endpoint may go unrecognized.
 */

#define BP_USBC_UH1_USBCMD_ATDTW      (14)      //!< Bit position for USBC_UH1_USBCMD_ATDTW.
#define BM_USBC_UH1_USBCMD_ATDTW      (0x00004000)  //!< Bit mask for USBC_UH1_USBCMD_ATDTW.

//! @brief Get value of USBC_UH1_USBCMD_ATDTW from a register value.
#define BG_USBC_UH1_USBCMD_ATDTW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBCMD_ATDTW) >> BP_USBC_UH1_USBCMD_ATDTW)

//! @brief Format value for bitfield USBC_UH1_USBCMD_ATDTW.
#define BF_USBC_UH1_USBCMD_ATDTW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBCMD_ATDTW) & BM_USBC_UH1_USBCMD_ATDTW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ATDTW field to a new value.
#define BW_USBC_UH1_USBCMD_ATDTW(v)   (HW_USBC_UH1_USBCMD_WR((HW_USBC_UH1_USBCMD_RD() & ~BM_USBC_UH1_USBCMD_ATDTW) | BF_USBC_UH1_USBCMD_ATDTW(v)))
#endif

/* --- Register HW_USBC_UH1_USBCMD, field FS1[15] (RW)
 *
 * See also bits 3-2 Frame List Size - (Read/Write or Read Only). [host mode only] This field is
 * Read/Write only if Programmable Frame List Flag in the HCCPARAMS registers is set to one. This
 * field specifies the size of the frame list that controls which bits in the Frame Index Register
 * should be used for the Frame List Current index. This field is made up from USBCMD bits 15, 3 and
 * 2. Value Meaning
 *
 * Values:
 * 000 - 1024 elements (4096 bytes) Default value
 * 001 - 512 elements (2048 bytes)
 * 010 - 256 elements (1024 bytes)
 * 011 - 128 elements (512 bytes)
 * 100 - 64 elements (256 bytes)
 * 101 - 32 elements (128 bytes)
 * 110 - 16 elements (64 bytes)
 * 111 - 8 elements (32 bytes)
 */

#define BP_USBC_UH1_USBCMD_FS1      (15)      //!< Bit position for USBC_UH1_USBCMD_FS1.
#define BM_USBC_UH1_USBCMD_FS1      (0x00008000)  //!< Bit mask for USBC_UH1_USBCMD_FS1.

//! @brief Get value of USBC_UH1_USBCMD_FS1 from a register value.
#define BG_USBC_UH1_USBCMD_FS1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBCMD_FS1) >> BP_USBC_UH1_USBCMD_FS1)

//! @brief Format value for bitfield USBC_UH1_USBCMD_FS1.
#define BF_USBC_UH1_USBCMD_FS1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBCMD_FS1) & BM_USBC_UH1_USBCMD_FS1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FS1 field to a new value.
#define BW_USBC_UH1_USBCMD_FS1(v)   (HW_USBC_UH1_USBCMD_WR((HW_USBC_UH1_USBCMD_RD() & ~BM_USBC_UH1_USBCMD_FS1) | BF_USBC_UH1_USBCMD_FS1(v)))
#endif


/* --- Register HW_USBC_UH1_USBCMD, field ITC[23:16] (RW)
 *
 * Interrupt Threshold Control -Read/Write. The system software uses this field to set the maximum
 * rate at which the host/device controller will issue interrupts. ITC contains the maximum
 * interrupt interval measured in micro-frames. Valid values are shown below. Value Maximum
 * Interrupt Interval
 *
 * Values:
 * 0x00 - Immediate (no threshold)
 * 0x01 - 1 micro-frame
 * 0x02 - 2 micro-frames
 * 0x04 - 4 micro-frames
 * 0x08 - 8 micro-frames
 * 0x10 - 16 micro-frames
 * 0x20 - 32 micro-frames
 * 0x40 - 64 micro-frames
 */

#define BP_USBC_UH1_USBCMD_ITC      (16)      //!< Bit position for USBC_UH1_USBCMD_ITC.
#define BM_USBC_UH1_USBCMD_ITC      (0x00ff0000)  //!< Bit mask for USBC_UH1_USBCMD_ITC.

//! @brief Get value of USBC_UH1_USBCMD_ITC from a register value.
#define BG_USBC_UH1_USBCMD_ITC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBCMD_ITC) >> BP_USBC_UH1_USBCMD_ITC)

//! @brief Format value for bitfield USBC_UH1_USBCMD_ITC.
#define BF_USBC_UH1_USBCMD_ITC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBCMD_ITC) & BM_USBC_UH1_USBCMD_ITC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ITC field to a new value.
#define BW_USBC_UH1_USBCMD_ITC(v)   (HW_USBC_UH1_USBCMD_WR((HW_USBC_UH1_USBCMD_RD() & ~BM_USBC_UH1_USBCMD_ITC) | BF_USBC_UH1_USBCMD_ITC(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_USBSTS - USB Status Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_USBSTS - USB Status Register (RW)
 *
 * Reset value: 0x00000000
 *
 * This register indicates various states of the Host/Device Controller and any pending interrupts.
 * This register does not indicate status resulting from a transaction on the serial bus.
 */
typedef union _hw_usbc_uh1_usbsts
{
    reg32_t U;
    struct _hw_usbc_uh1_usbsts_bitfields
    {
        unsigned UI : 1; //!< [0] USB Interrupt (USBINT) - R/WC.
        unsigned UEI : 1; //!< [1] USB Error Interrupt (USBERRINT) - R/WC.
        unsigned PCI : 1; //!< [2] Port Change Detect - R/WC.
        unsigned FRI : 1; //!< [3] Frame List Rollover - R/WC.
        unsigned SEI : 1; //!< [4] System Error- R/WC.
        unsigned AAI : 1; //!< [5] Interrupt on Async Advance - R/WC.
        unsigned URI : 1; //!< [6] USB Reset Received - R/WC.
        unsigned SRI : 1; //!< [7] SOF Received - R/WC.
        unsigned SLI : 1; //!< [8] DCSuspend - R/WC.
        unsigned RESERVED0 : 1; //!< [9] Reserved
        unsigned ULPII : 1; //!< [10] ULPI Interrupt - R/WC.
        unsigned RESERVED1 : 1; //!< [11] Reserved
        unsigned HCH : 1; //!< [12] HCHaIted - Read Only.
        unsigned RCL : 1; //!< [13] Reclamation - Read Only.
        unsigned PS : 1; //!< [14] Periodic Schedule Status - Read Only.
        unsigned AS : 1; //!< [15] Asynchronous Schedule Status - Read Only.
        unsigned NAKI : 1; //!< [16] NAK Interrupt Bit--RO.
        unsigned RESERVED2 : 7; //!< [23:17] Reserved
        unsigned TI0 : 1; //!< [24] General Purpose Timer Interrupt 0(GPTINT0)--R/WC.
        unsigned TI1 : 1; //!< [25] General Purpose Timer Interrupt 1(GPTINT1)--R/WC.
        unsigned RESERVED3 : 6; //!< [31:26] Reserved
    } B;
} hw_usbc_uh1_usbsts_t;
#endif

/*
 * constants & macros for entire USBC_UH1_USBSTS register
 */
#define HW_USBC_UH1_USBSTS_ADDR      (REGS_USBC_BASE + 0x544)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_USBSTS           (*(volatile hw_usbc_uh1_usbsts_t *) HW_USBC_UH1_USBSTS_ADDR)
#define HW_USBC_UH1_USBSTS_RD()      (HW_USBC_UH1_USBSTS.U)
#define HW_USBC_UH1_USBSTS_WR(v)     (HW_USBC_UH1_USBSTS.U = (v))
#define HW_USBC_UH1_USBSTS_SET(v)    (HW_USBC_UH1_USBSTS_WR(HW_USBC_UH1_USBSTS_RD() |  (v)))
#define HW_USBC_UH1_USBSTS_CLR(v)    (HW_USBC_UH1_USBSTS_WR(HW_USBC_UH1_USBSTS_RD() & ~(v)))
#define HW_USBC_UH1_USBSTS_TOG(v)    (HW_USBC_UH1_USBSTS_WR(HW_USBC_UH1_USBSTS_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UH1_USBSTS bitfields
 */

/* --- Register HW_USBC_UH1_USBSTS, field UI[0] (RW)
 *
 * USB Interrupt (USBINT) - R/WC. This bit is set by the Host/Device Controller when the cause of an
 * interrupt is a completion of a USB transaction where the Transfer Descriptor (TD) has an
 * interrupt on complete (IOC) bit set. This bit is also set by the Host/Device Controller when a
 * short packet is detected. A short packet is when the actual number of bytes received was less
 * than the expected number of bytes.
 */

#define BP_USBC_UH1_USBSTS_UI      (0)      //!< Bit position for USBC_UH1_USBSTS_UI.
#define BM_USBC_UH1_USBSTS_UI      (0x00000001)  //!< Bit mask for USBC_UH1_USBSTS_UI.

//! @brief Get value of USBC_UH1_USBSTS_UI from a register value.
#define BG_USBC_UH1_USBSTS_UI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_UI) >> BP_USBC_UH1_USBSTS_UI)

//! @brief Format value for bitfield USBC_UH1_USBSTS_UI.
#define BF_USBC_UH1_USBSTS_UI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBSTS_UI) & BM_USBC_UH1_USBSTS_UI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UI field to a new value.
#define BW_USBC_UH1_USBSTS_UI(v)   (HW_USBC_UH1_USBSTS_WR((HW_USBC_UH1_USBSTS_RD() & ~BM_USBC_UH1_USBSTS_UI) | BF_USBC_UH1_USBSTS_UI(v)))
#endif

/* --- Register HW_USBC_UH1_USBSTS, field UEI[1] (RW)
 *
 * USB Error Interrupt (USBERRINT) - R/WC. When completion of a USB transaction results in an error
 * condition, this bit is set by the Host/Device Controller. This bit is set along with the USBINT
 * bit, if the TD on which the error interrupt occurred also had its interrupt on complete (IOC) bit
 * set The device controller detects resume signaling only.
 */

#define BP_USBC_UH1_USBSTS_UEI      (1)      //!< Bit position for USBC_UH1_USBSTS_UEI.
#define BM_USBC_UH1_USBSTS_UEI      (0x00000002)  //!< Bit mask for USBC_UH1_USBSTS_UEI.

//! @brief Get value of USBC_UH1_USBSTS_UEI from a register value.
#define BG_USBC_UH1_USBSTS_UEI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_UEI) >> BP_USBC_UH1_USBSTS_UEI)

//! @brief Format value for bitfield USBC_UH1_USBSTS_UEI.
#define BF_USBC_UH1_USBSTS_UEI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBSTS_UEI) & BM_USBC_UH1_USBSTS_UEI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UEI field to a new value.
#define BW_USBC_UH1_USBSTS_UEI(v)   (HW_USBC_UH1_USBSTS_WR((HW_USBC_UH1_USBSTS_RD() & ~BM_USBC_UH1_USBSTS_UEI) | BF_USBC_UH1_USBSTS_UEI(v)))
#endif

/* --- Register HW_USBC_UH1_USBSTS, field PCI[2] (RW)
 *
 * Port Change Detect - R/WC. The Host Controller sets this bit to a one when on any port a Connect
 * Status occurs, a Port Enable/Disable Change occurs, or the Force Port Resume bit is set as the
 * result of a J-K transition on the suspended port. The Device Controller sets this bit to a one
 * when the port controller enters the full or high-speed operational state. When the port
 * controller exits the full or high-speed operation states due to Reset or Suspend events, the
 * notification mechanisms are the USB Reset Received bit and the DCSuspend bits respectively.
 */

#define BP_USBC_UH1_USBSTS_PCI      (2)      //!< Bit position for USBC_UH1_USBSTS_PCI.
#define BM_USBC_UH1_USBSTS_PCI      (0x00000004)  //!< Bit mask for USBC_UH1_USBSTS_PCI.

//! @brief Get value of USBC_UH1_USBSTS_PCI from a register value.
#define BG_USBC_UH1_USBSTS_PCI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_PCI) >> BP_USBC_UH1_USBSTS_PCI)

//! @brief Format value for bitfield USBC_UH1_USBSTS_PCI.
#define BF_USBC_UH1_USBSTS_PCI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBSTS_PCI) & BM_USBC_UH1_USBSTS_PCI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PCI field to a new value.
#define BW_USBC_UH1_USBSTS_PCI(v)   (HW_USBC_UH1_USBSTS_WR((HW_USBC_UH1_USBSTS_RD() & ~BM_USBC_UH1_USBSTS_PCI) | BF_USBC_UH1_USBSTS_PCI(v)))
#endif

/* --- Register HW_USBC_UH1_USBSTS, field FRI[3] (RW)
 *
 * Frame List Rollover - R/WC. The Host Controller sets this bit to a one when the Frame List Index
 * rolls over from its maximum value to zero. The exact value at which the rollover occurs depends
 * on the frame list size. For example. If the frame list size (as programmed in the Frame List Size
 * field of the USB_n_USBCMD register) is 1024, the Frame Index Register rolls over every time
 * FRINDEX [13] toggles. Similarly, if the size is 512, the Host Controller sets this bit to a one
 * every time FHINDEX [12] toggles. Only used in host operation mode.
 */

#define BP_USBC_UH1_USBSTS_FRI      (3)      //!< Bit position for USBC_UH1_USBSTS_FRI.
#define BM_USBC_UH1_USBSTS_FRI      (0x00000008)  //!< Bit mask for USBC_UH1_USBSTS_FRI.

//! @brief Get value of USBC_UH1_USBSTS_FRI from a register value.
#define BG_USBC_UH1_USBSTS_FRI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_FRI) >> BP_USBC_UH1_USBSTS_FRI)

//! @brief Format value for bitfield USBC_UH1_USBSTS_FRI.
#define BF_USBC_UH1_USBSTS_FRI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBSTS_FRI) & BM_USBC_UH1_USBSTS_FRI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FRI field to a new value.
#define BW_USBC_UH1_USBSTS_FRI(v)   (HW_USBC_UH1_USBSTS_WR((HW_USBC_UH1_USBSTS_RD() & ~BM_USBC_UH1_USBSTS_FRI) | BF_USBC_UH1_USBSTS_FRI(v)))
#endif

/* --- Register HW_USBC_UH1_USBSTS, field SEI[4] (RW)
 *
 * System Error- R/WC. This bit is will be set to '1b' when an Error response is seen to a read on
 * the system interface.
 */

#define BP_USBC_UH1_USBSTS_SEI      (4)      //!< Bit position for USBC_UH1_USBSTS_SEI.
#define BM_USBC_UH1_USBSTS_SEI      (0x00000010)  //!< Bit mask for USBC_UH1_USBSTS_SEI.

//! @brief Get value of USBC_UH1_USBSTS_SEI from a register value.
#define BG_USBC_UH1_USBSTS_SEI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_SEI) >> BP_USBC_UH1_USBSTS_SEI)

//! @brief Format value for bitfield USBC_UH1_USBSTS_SEI.
#define BF_USBC_UH1_USBSTS_SEI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBSTS_SEI) & BM_USBC_UH1_USBSTS_SEI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SEI field to a new value.
#define BW_USBC_UH1_USBSTS_SEI(v)   (HW_USBC_UH1_USBSTS_WR((HW_USBC_UH1_USBSTS_RD() & ~BM_USBC_UH1_USBSTS_SEI) | BF_USBC_UH1_USBSTS_SEI(v)))
#endif

/* --- Register HW_USBC_UH1_USBSTS, field AAI[5] (RW)
 *
 * Interrupt on Async Advance - R/WC. System software can force the host controller to issue an
 * interrupt the next time the host controller advances the asynchronous schedule by writing a one
 * to the Interrupt on Async Advance Doorbell bit in the n_USBCMD register. This status bit
 * indicates the assertion of that interrupt source. Only used in host operation mode.
 */

#define BP_USBC_UH1_USBSTS_AAI      (5)      //!< Bit position for USBC_UH1_USBSTS_AAI.
#define BM_USBC_UH1_USBSTS_AAI      (0x00000020)  //!< Bit mask for USBC_UH1_USBSTS_AAI.

//! @brief Get value of USBC_UH1_USBSTS_AAI from a register value.
#define BG_USBC_UH1_USBSTS_AAI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_AAI) >> BP_USBC_UH1_USBSTS_AAI)

//! @brief Format value for bitfield USBC_UH1_USBSTS_AAI.
#define BF_USBC_UH1_USBSTS_AAI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBSTS_AAI) & BM_USBC_UH1_USBSTS_AAI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AAI field to a new value.
#define BW_USBC_UH1_USBSTS_AAI(v)   (HW_USBC_UH1_USBSTS_WR((HW_USBC_UH1_USBSTS_RD() & ~BM_USBC_UH1_USBSTS_AAI) | BF_USBC_UH1_USBSTS_AAI(v)))
#endif

/* --- Register HW_USBC_UH1_USBSTS, field URI[6] (RW)
 *
 * USB Reset Received - R/WC. When the device controller detects a USB Reset and enters the default
 * state, this bit will be set to a one. Software can write a 1 to this bit to clear the USB Reset
 * Received status bit. Only used in device operation mode.
 */

#define BP_USBC_UH1_USBSTS_URI      (6)      //!< Bit position for USBC_UH1_USBSTS_URI.
#define BM_USBC_UH1_USBSTS_URI      (0x00000040)  //!< Bit mask for USBC_UH1_USBSTS_URI.

//! @brief Get value of USBC_UH1_USBSTS_URI from a register value.
#define BG_USBC_UH1_USBSTS_URI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_URI) >> BP_USBC_UH1_USBSTS_URI)

//! @brief Format value for bitfield USBC_UH1_USBSTS_URI.
#define BF_USBC_UH1_USBSTS_URI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBSTS_URI) & BM_USBC_UH1_USBSTS_URI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the URI field to a new value.
#define BW_USBC_UH1_USBSTS_URI(v)   (HW_USBC_UH1_USBSTS_WR((HW_USBC_UH1_USBSTS_RD() & ~BM_USBC_UH1_USBSTS_URI) | BF_USBC_UH1_USBSTS_URI(v)))
#endif

/* --- Register HW_USBC_UH1_USBSTS, field SRI[7] (RW)
 *
 * SOF Received - R/WC. When the device controller detects a Start Of (micro) Frame, this bit will
 * be set to a one. When a SOF is extremely late, the device controller will automatically set this
 * bit to indicate that an SOF was expected. Therefore, this bit will be set roughly every 1ms in
 * device FS mode and every 125ms in HS mode and will be synchronized to the actual SOF that is
 * received. Because the device controller is initialized to FS before connect, this bit will be set
 * at an interval of 1ms during the prelude to connect and chirp. In host mode, this bit will be set
 * every 125us and can be used by host controller driver as a time base. Software writes a 1 to this
 * bit to clear it.
 */

#define BP_USBC_UH1_USBSTS_SRI      (7)      //!< Bit position for USBC_UH1_USBSTS_SRI.
#define BM_USBC_UH1_USBSTS_SRI      (0x00000080)  //!< Bit mask for USBC_UH1_USBSTS_SRI.

//! @brief Get value of USBC_UH1_USBSTS_SRI from a register value.
#define BG_USBC_UH1_USBSTS_SRI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_SRI) >> BP_USBC_UH1_USBSTS_SRI)

//! @brief Format value for bitfield USBC_UH1_USBSTS_SRI.
#define BF_USBC_UH1_USBSTS_SRI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBSTS_SRI) & BM_USBC_UH1_USBSTS_SRI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SRI field to a new value.
#define BW_USBC_UH1_USBSTS_SRI(v)   (HW_USBC_UH1_USBSTS_WR((HW_USBC_UH1_USBSTS_RD() & ~BM_USBC_UH1_USBSTS_SRI) | BF_USBC_UH1_USBSTS_SRI(v)))
#endif

/* --- Register HW_USBC_UH1_USBSTS, field SLI[8] (RW)
 *
 * DCSuspend - R/WC. When a controller enters a suspend state from an active state, this bit will be
 * set to a one. The device controller clears the bit upon exiting from a suspend state. Only used
 * in device operation mode.
 */

#define BP_USBC_UH1_USBSTS_SLI      (8)      //!< Bit position for USBC_UH1_USBSTS_SLI.
#define BM_USBC_UH1_USBSTS_SLI      (0x00000100)  //!< Bit mask for USBC_UH1_USBSTS_SLI.

//! @brief Get value of USBC_UH1_USBSTS_SLI from a register value.
#define BG_USBC_UH1_USBSTS_SLI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_SLI) >> BP_USBC_UH1_USBSTS_SLI)

//! @brief Format value for bitfield USBC_UH1_USBSTS_SLI.
#define BF_USBC_UH1_USBSTS_SLI(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBSTS_SLI) & BM_USBC_UH1_USBSTS_SLI)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SLI field to a new value.
#define BW_USBC_UH1_USBSTS_SLI(v)   (HW_USBC_UH1_USBSTS_WR((HW_USBC_UH1_USBSTS_RD() & ~BM_USBC_UH1_USBSTS_SLI) | BF_USBC_UH1_USBSTS_SLI(v)))
#endif

/* --- Register HW_USBC_UH1_USBSTS, field ULPII[10] (RW)
 *
 * ULPI Interrupt - R/WC. This bit will be set '1b' by hardware when there is an event completion in
 * ULPI viewport. This bit is usable only if the controller support UPLI interface mode.
 */

#define BP_USBC_UH1_USBSTS_ULPII      (10)      //!< Bit position for USBC_UH1_USBSTS_ULPII.
#define BM_USBC_UH1_USBSTS_ULPII      (0x00000400)  //!< Bit mask for USBC_UH1_USBSTS_ULPII.

//! @brief Get value of USBC_UH1_USBSTS_ULPII from a register value.
#define BG_USBC_UH1_USBSTS_ULPII(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_ULPII) >> BP_USBC_UH1_USBSTS_ULPII)

//! @brief Format value for bitfield USBC_UH1_USBSTS_ULPII.
#define BF_USBC_UH1_USBSTS_ULPII(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBSTS_ULPII) & BM_USBC_UH1_USBSTS_ULPII)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ULPII field to a new value.
#define BW_USBC_UH1_USBSTS_ULPII(v)   (HW_USBC_UH1_USBSTS_WR((HW_USBC_UH1_USBSTS_RD() & ~BM_USBC_UH1_USBSTS_ULPII) | BF_USBC_UH1_USBSTS_ULPII(v)))
#endif

/* --- Register HW_USBC_UH1_USBSTS, field HCH[12] (RW)
 *
 * HCHaIted - Read Only. This bit is a zero whenever the Run/Stop bit is a one. The Controller sets
 * this bit to one after it has stopped executing because of the Run/Stop bit being set to 0, either
 * by software or by the Controller hardware (for example, an internal error). Only used in the host
 * operation mode. Default value is '0b' for OTG core, and '1b' for Host1/Host2/Host3 core. This is
 * because OTG core is not operating as host in default. Please see CM bit in USB_n_USBMODE
 * register. HCH bit reset value: '0b' for OTG controller core, '1b' for Host-only controller core.
 */

#define BP_USBC_UH1_USBSTS_HCH      (12)      //!< Bit position for USBC_UH1_USBSTS_HCH.
#define BM_USBC_UH1_USBSTS_HCH      (0x00001000)  //!< Bit mask for USBC_UH1_USBSTS_HCH.

//! @brief Get value of USBC_UH1_USBSTS_HCH from a register value.
#define BG_USBC_UH1_USBSTS_HCH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_HCH) >> BP_USBC_UH1_USBSTS_HCH)

//! @brief Format value for bitfield USBC_UH1_USBSTS_HCH.
#define BF_USBC_UH1_USBSTS_HCH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBSTS_HCH) & BM_USBC_UH1_USBSTS_HCH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the HCH field to a new value.
#define BW_USBC_UH1_USBSTS_HCH(v)   (HW_USBC_UH1_USBSTS_WR((HW_USBC_UH1_USBSTS_RD() & ~BM_USBC_UH1_USBSTS_HCH) | BF_USBC_UH1_USBSTS_HCH(v)))
#endif

/* --- Register HW_USBC_UH1_USBSTS, field RCL[13] (RW)
 *
 * Reclamation - Read Only. This is a read-only status bit used to detect an empty asynchronous
 * schedule. Only used in the host operation mode.
 */

#define BP_USBC_UH1_USBSTS_RCL      (13)      //!< Bit position for USBC_UH1_USBSTS_RCL.
#define BM_USBC_UH1_USBSTS_RCL      (0x00002000)  //!< Bit mask for USBC_UH1_USBSTS_RCL.

//! @brief Get value of USBC_UH1_USBSTS_RCL from a register value.
#define BG_USBC_UH1_USBSTS_RCL(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_RCL) >> BP_USBC_UH1_USBSTS_RCL)

//! @brief Format value for bitfield USBC_UH1_USBSTS_RCL.
#define BF_USBC_UH1_USBSTS_RCL(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBSTS_RCL) & BM_USBC_UH1_USBSTS_RCL)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RCL field to a new value.
#define BW_USBC_UH1_USBSTS_RCL(v)   (HW_USBC_UH1_USBSTS_WR((HW_USBC_UH1_USBSTS_RD() & ~BM_USBC_UH1_USBSTS_RCL) | BF_USBC_UH1_USBSTS_RCL(v)))
#endif

/* --- Register HW_USBC_UH1_USBSTS, field PS[14] (RW)
 *
 * Periodic Schedule Status - Read Only. This bit reports the current real status of the Periodic
 * Schedule. When set to zero the periodic schedule is disabled, and if set to one the status is
 * enabled. The Host Controller is not required to immediately disable or enable the Periodic
 * Schedule when software transitions the Periodic Schedule Enable bit in the USBCMD register. When
 * this bit and the Periodic Schedule Enable bit are the same value, the Periodic Schedule is either
 * enabled (1) or disabled (0). Only used in the host operation mode.
 */

#define BP_USBC_UH1_USBSTS_PS      (14)      //!< Bit position for USBC_UH1_USBSTS_PS.
#define BM_USBC_UH1_USBSTS_PS      (0x00004000)  //!< Bit mask for USBC_UH1_USBSTS_PS.

//! @brief Get value of USBC_UH1_USBSTS_PS from a register value.
#define BG_USBC_UH1_USBSTS_PS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_PS) >> BP_USBC_UH1_USBSTS_PS)

//! @brief Format value for bitfield USBC_UH1_USBSTS_PS.
#define BF_USBC_UH1_USBSTS_PS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBSTS_PS) & BM_USBC_UH1_USBSTS_PS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PS field to a new value.
#define BW_USBC_UH1_USBSTS_PS(v)   (HW_USBC_UH1_USBSTS_WR((HW_USBC_UH1_USBSTS_RD() & ~BM_USBC_UH1_USBSTS_PS) | BF_USBC_UH1_USBSTS_PS(v)))
#endif

/* --- Register HW_USBC_UH1_USBSTS, field AS[15] (RW)
 *
 * Asynchronous Schedule Status - Read Only. This bit reports the current real status of the
 * Asynchronous Schedule. When set to zero the asynchronous schedule status is disabled and if set
 * to one the status is enabled. The Host Controller is not required to immediately disable or
 * enable the Asynchronous Schedule when software transitions the Asynchronous Schedule Enable bit
 * in the USBCMD register. When this bit and the Asynchronous Schedule Enable bit are the same
 * value, the Asynchronous Schedule is either enabled (1) or disabled (0). Only used in the host
 * operation mode.
 */

#define BP_USBC_UH1_USBSTS_AS      (15)      //!< Bit position for USBC_UH1_USBSTS_AS.
#define BM_USBC_UH1_USBSTS_AS      (0x00008000)  //!< Bit mask for USBC_UH1_USBSTS_AS.

//! @brief Get value of USBC_UH1_USBSTS_AS from a register value.
#define BG_USBC_UH1_USBSTS_AS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_AS) >> BP_USBC_UH1_USBSTS_AS)

//! @brief Format value for bitfield USBC_UH1_USBSTS_AS.
#define BF_USBC_UH1_USBSTS_AS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBSTS_AS) & BM_USBC_UH1_USBSTS_AS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AS field to a new value.
#define BW_USBC_UH1_USBSTS_AS(v)   (HW_USBC_UH1_USBSTS_WR((HW_USBC_UH1_USBSTS_RD() & ~BM_USBC_UH1_USBSTS_AS) | BF_USBC_UH1_USBSTS_AS(v)))
#endif

/* --- Register HW_USBC_UH1_USBSTS, field NAKI[16] (RO)
 *
 * NAK Interrupt Bit--RO. This bit is set by hardware when for a particular endpoint both the TX/RX
 * Endpoint NAK bit and corresponding TX/RX Endpoint NAK Enable bit are set. This bit is
 * automatically cleared by hardware when all Enabled TX/RX Endpoint NAK bits are cleared.
 */

#define BP_USBC_UH1_USBSTS_NAKI      (16)      //!< Bit position for USBC_UH1_USBSTS_NAKI.
#define BM_USBC_UH1_USBSTS_NAKI      (0x00010000)  //!< Bit mask for USBC_UH1_USBSTS_NAKI.

//! @brief Get value of USBC_UH1_USBSTS_NAKI from a register value.
#define BG_USBC_UH1_USBSTS_NAKI(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_NAKI) >> BP_USBC_UH1_USBSTS_NAKI)

/* --- Register HW_USBC_UH1_USBSTS, field TI0[24] (RW)
 *
 * General Purpose Timer Interrupt 0(GPTINT0)--R/WC. This bit is set when the counter in the
 * GPTIMER0CTRL register transitions to zero, writing a one to this bit clears it.
 */

#define BP_USBC_UH1_USBSTS_TI0      (24)      //!< Bit position for USBC_UH1_USBSTS_TI0.
#define BM_USBC_UH1_USBSTS_TI0      (0x01000000)  //!< Bit mask for USBC_UH1_USBSTS_TI0.

//! @brief Get value of USBC_UH1_USBSTS_TI0 from a register value.
#define BG_USBC_UH1_USBSTS_TI0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_TI0) >> BP_USBC_UH1_USBSTS_TI0)

//! @brief Format value for bitfield USBC_UH1_USBSTS_TI0.
#define BF_USBC_UH1_USBSTS_TI0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBSTS_TI0) & BM_USBC_UH1_USBSTS_TI0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TI0 field to a new value.
#define BW_USBC_UH1_USBSTS_TI0(v)   (HW_USBC_UH1_USBSTS_WR((HW_USBC_UH1_USBSTS_RD() & ~BM_USBC_UH1_USBSTS_TI0) | BF_USBC_UH1_USBSTS_TI0(v)))
#endif

/* --- Register HW_USBC_UH1_USBSTS, field TI1[25] (RW)
 *
 * General Purpose Timer Interrupt 1(GPTINT1)--R/WC. This bit is set when the counter in the
 * GPTIMER1CTRL register transitions to zero, writing a one to this bit will clear it.
 */

#define BP_USBC_UH1_USBSTS_TI1      (25)      //!< Bit position for USBC_UH1_USBSTS_TI1.
#define BM_USBC_UH1_USBSTS_TI1      (0x02000000)  //!< Bit mask for USBC_UH1_USBSTS_TI1.

//! @brief Get value of USBC_UH1_USBSTS_TI1 from a register value.
#define BG_USBC_UH1_USBSTS_TI1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBSTS_TI1) >> BP_USBC_UH1_USBSTS_TI1)

//! @brief Format value for bitfield USBC_UH1_USBSTS_TI1.
#define BF_USBC_UH1_USBSTS_TI1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBSTS_TI1) & BM_USBC_UH1_USBSTS_TI1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TI1 field to a new value.
#define BW_USBC_UH1_USBSTS_TI1(v)   (HW_USBC_UH1_USBSTS_WR((HW_USBC_UH1_USBSTS_RD() & ~BM_USBC_UH1_USBSTS_TI1) | BF_USBC_UH1_USBSTS_TI1(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_USBINTR - Interrupt Enable Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_USBINTR - Interrupt Enable Register (RW)
 *
 * Reset value: 0x00000000
 *
 * The interrupts to software are enabled with this register. An interrupt is generated when a bit
 * is set and the corresponding interrupt source is active. The USB Status register (n_USBSTS) still
 * shows interrupt sources even if they are disabled by the n_USBINTR register, allowing polling of
 * interrupt events by the software.
 */
typedef union _hw_usbc_uh1_usbintr
{
    reg32_t U;
    struct _hw_usbc_uh1_usbintr_bitfields
    {
        unsigned UE : 1; //!< [0] USB Interrupt Enalbe When this bit is one and the UI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned UEE : 1; //!< [1] USB Error Interrupt Enable When this bit is one and the UEI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned PCE : 1; //!< [2] Port Change Detect Interrupt Enable When this bit is one and the PCI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned FRE : 1; //!< [3] Frame List Rollover Interrupt Enable When this bit is one and the FRI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned SEE : 1; //!< [4] System Error Interrupt Enable When this bit is one and the SEI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned AAE : 1; //!< [5] Async Advance Interrupt Enable When this bit is one and the AAI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned URE : 1; //!< [6] USB Reset Interrupt Enable When this bit is one and the URI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned SRE : 1; //!< [7] SOF Received Interrupt Enable When this bit is one and the SRI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned SLE : 1; //!< [8] Sleep Interrupt Enable When this bit is one and the SLI bit in n_n_USBSTS register is a one the controller will issue an interrupt.
        unsigned RESERVED0 : 1; //!< [9] Reserved
        unsigned ULPIE : 1; //!< [10] ULPI Interrupt Enable When this bit is one and the UPLII bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned RESERVED1 : 5; //!< [15:11] These bits are reserved and should be set to zero.
        unsigned NAKE : 1; //!< [16] NAK Interrupt Enable When this bit is one and the NAKI bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned RESERVED2 : 1; //!< [17] Reserved
        unsigned UAIE : 1; //!< [18] USB Host Asynchronous Interrupt Enable When this bit is one, and the UAI bit in the n_USBSTS register is one, host controller will issue an interrupt at the next interrupt threshold.
        unsigned UPIE : 1; //!< [19] USB Host Periodic Interrupt Enable When this bit is one, and the UPI bit in the n_USBSTS register is one, host controller will issue an interrupt at the next interrupt threshold.
        unsigned RESERVED3 : 4; //!< [23:20] Reserved
        unsigned TIE0 : 1; //!< [24] General Purpose Timer #0 Interrupt Enable When this bit is one and the TI0 bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned TIE1 : 1; //!< [25] General Purpose Timer #1 Interrupt Enable When this bit is one and the TI1 bit in n_USBSTS register is a one the controller will issue an interrupt.
        unsigned RESERVED4 : 6; //!< [31:26] Reserved
    } B;
} hw_usbc_uh1_usbintr_t;
#endif

/*
 * constants & macros for entire USBC_UH1_USBINTR register
 */
#define HW_USBC_UH1_USBINTR_ADDR      (REGS_USBC_BASE + 0x548)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_USBINTR           (*(volatile hw_usbc_uh1_usbintr_t *) HW_USBC_UH1_USBINTR_ADDR)
#define HW_USBC_UH1_USBINTR_RD()      (HW_USBC_UH1_USBINTR.U)
#define HW_USBC_UH1_USBINTR_WR(v)     (HW_USBC_UH1_USBINTR.U = (v))
#define HW_USBC_UH1_USBINTR_SET(v)    (HW_USBC_UH1_USBINTR_WR(HW_USBC_UH1_USBINTR_RD() |  (v)))
#define HW_USBC_UH1_USBINTR_CLR(v)    (HW_USBC_UH1_USBINTR_WR(HW_USBC_UH1_USBINTR_RD() & ~(v)))
#define HW_USBC_UH1_USBINTR_TOG(v)    (HW_USBC_UH1_USBINTR_WR(HW_USBC_UH1_USBINTR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UH1_USBINTR bitfields
 */

/* --- Register HW_USBC_UH1_USBINTR, field UE[0] (RW)
 *
 * USB Interrupt Enalbe When this bit is one and the UI bit in n_USBSTS register is a one the
 * controller will issue an interrupt.
 */

#define BP_USBC_UH1_USBINTR_UE      (0)      //!< Bit position for USBC_UH1_USBINTR_UE.
#define BM_USBC_UH1_USBINTR_UE      (0x00000001)  //!< Bit mask for USBC_UH1_USBINTR_UE.

//! @brief Get value of USBC_UH1_USBINTR_UE from a register value.
#define BG_USBC_UH1_USBINTR_UE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBINTR_UE) >> BP_USBC_UH1_USBINTR_UE)

//! @brief Format value for bitfield USBC_UH1_USBINTR_UE.
#define BF_USBC_UH1_USBINTR_UE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBINTR_UE) & BM_USBC_UH1_USBINTR_UE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UE field to a new value.
#define BW_USBC_UH1_USBINTR_UE(v)   (HW_USBC_UH1_USBINTR_WR((HW_USBC_UH1_USBINTR_RD() & ~BM_USBC_UH1_USBINTR_UE) | BF_USBC_UH1_USBINTR_UE(v)))
#endif

/* --- Register HW_USBC_UH1_USBINTR, field UEE[1] (RW)
 *
 * USB Error Interrupt Enable When this bit is one and the UEI bit in n_USBSTS register is a one the
 * controller will issue an interrupt.
 */

#define BP_USBC_UH1_USBINTR_UEE      (1)      //!< Bit position for USBC_UH1_USBINTR_UEE.
#define BM_USBC_UH1_USBINTR_UEE      (0x00000002)  //!< Bit mask for USBC_UH1_USBINTR_UEE.

//! @brief Get value of USBC_UH1_USBINTR_UEE from a register value.
#define BG_USBC_UH1_USBINTR_UEE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBINTR_UEE) >> BP_USBC_UH1_USBINTR_UEE)

//! @brief Format value for bitfield USBC_UH1_USBINTR_UEE.
#define BF_USBC_UH1_USBINTR_UEE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBINTR_UEE) & BM_USBC_UH1_USBINTR_UEE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UEE field to a new value.
#define BW_USBC_UH1_USBINTR_UEE(v)   (HW_USBC_UH1_USBINTR_WR((HW_USBC_UH1_USBINTR_RD() & ~BM_USBC_UH1_USBINTR_UEE) | BF_USBC_UH1_USBINTR_UEE(v)))
#endif

/* --- Register HW_USBC_UH1_USBINTR, field PCE[2] (RW)
 *
 * Port Change Detect Interrupt Enable When this bit is one and the PCI bit in n_USBSTS register is
 * a one the controller will issue an interrupt.
 */

#define BP_USBC_UH1_USBINTR_PCE      (2)      //!< Bit position for USBC_UH1_USBINTR_PCE.
#define BM_USBC_UH1_USBINTR_PCE      (0x00000004)  //!< Bit mask for USBC_UH1_USBINTR_PCE.

//! @brief Get value of USBC_UH1_USBINTR_PCE from a register value.
#define BG_USBC_UH1_USBINTR_PCE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBINTR_PCE) >> BP_USBC_UH1_USBINTR_PCE)

//! @brief Format value for bitfield USBC_UH1_USBINTR_PCE.
#define BF_USBC_UH1_USBINTR_PCE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBINTR_PCE) & BM_USBC_UH1_USBINTR_PCE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PCE field to a new value.
#define BW_USBC_UH1_USBINTR_PCE(v)   (HW_USBC_UH1_USBINTR_WR((HW_USBC_UH1_USBINTR_RD() & ~BM_USBC_UH1_USBINTR_PCE) | BF_USBC_UH1_USBINTR_PCE(v)))
#endif

/* --- Register HW_USBC_UH1_USBINTR, field FRE[3] (RW)
 *
 * Frame List Rollover Interrupt Enable When this bit is one and the FRI bit in n_USBSTS register is
 * a one the controller will issue an interrupt. Only used in host operation mode.
 */

#define BP_USBC_UH1_USBINTR_FRE      (3)      //!< Bit position for USBC_UH1_USBINTR_FRE.
#define BM_USBC_UH1_USBINTR_FRE      (0x00000008)  //!< Bit mask for USBC_UH1_USBINTR_FRE.

//! @brief Get value of USBC_UH1_USBINTR_FRE from a register value.
#define BG_USBC_UH1_USBINTR_FRE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBINTR_FRE) >> BP_USBC_UH1_USBINTR_FRE)

//! @brief Format value for bitfield USBC_UH1_USBINTR_FRE.
#define BF_USBC_UH1_USBINTR_FRE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBINTR_FRE) & BM_USBC_UH1_USBINTR_FRE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FRE field to a new value.
#define BW_USBC_UH1_USBINTR_FRE(v)   (HW_USBC_UH1_USBINTR_WR((HW_USBC_UH1_USBINTR_RD() & ~BM_USBC_UH1_USBINTR_FRE) | BF_USBC_UH1_USBINTR_FRE(v)))
#endif

/* --- Register HW_USBC_UH1_USBINTR, field SEE[4] (RW)
 *
 * System Error Interrupt Enable When this bit is one and the SEI bit in n_USBSTS register is a one
 * the controller will issue an interrupt. Only used in host operation mode.
 */

#define BP_USBC_UH1_USBINTR_SEE      (4)      //!< Bit position for USBC_UH1_USBINTR_SEE.
#define BM_USBC_UH1_USBINTR_SEE      (0x00000010)  //!< Bit mask for USBC_UH1_USBINTR_SEE.

//! @brief Get value of USBC_UH1_USBINTR_SEE from a register value.
#define BG_USBC_UH1_USBINTR_SEE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBINTR_SEE) >> BP_USBC_UH1_USBINTR_SEE)

//! @brief Format value for bitfield USBC_UH1_USBINTR_SEE.
#define BF_USBC_UH1_USBINTR_SEE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBINTR_SEE) & BM_USBC_UH1_USBINTR_SEE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SEE field to a new value.
#define BW_USBC_UH1_USBINTR_SEE(v)   (HW_USBC_UH1_USBINTR_WR((HW_USBC_UH1_USBINTR_RD() & ~BM_USBC_UH1_USBINTR_SEE) | BF_USBC_UH1_USBINTR_SEE(v)))
#endif

/* --- Register HW_USBC_UH1_USBINTR, field AAE[5] (RW)
 *
 * Async Advance Interrupt Enable When this bit is one and the AAI bit in n_USBSTS register is a one
 * the controller will issue an interrupt. Only used in host operation mode.
 */

#define BP_USBC_UH1_USBINTR_AAE      (5)      //!< Bit position for USBC_UH1_USBINTR_AAE.
#define BM_USBC_UH1_USBINTR_AAE      (0x00000020)  //!< Bit mask for USBC_UH1_USBINTR_AAE.

//! @brief Get value of USBC_UH1_USBINTR_AAE from a register value.
#define BG_USBC_UH1_USBINTR_AAE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBINTR_AAE) >> BP_USBC_UH1_USBINTR_AAE)

//! @brief Format value for bitfield USBC_UH1_USBINTR_AAE.
#define BF_USBC_UH1_USBINTR_AAE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBINTR_AAE) & BM_USBC_UH1_USBINTR_AAE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the AAE field to a new value.
#define BW_USBC_UH1_USBINTR_AAE(v)   (HW_USBC_UH1_USBINTR_WR((HW_USBC_UH1_USBINTR_RD() & ~BM_USBC_UH1_USBINTR_AAE) | BF_USBC_UH1_USBINTR_AAE(v)))
#endif

/* --- Register HW_USBC_UH1_USBINTR, field URE[6] (RW)
 *
 * USB Reset Interrupt Enable When this bit is one and the URI bit in n_USBSTS register is a one the
 * controller will issue an interrupt. Only used in device operation mode.
 */

#define BP_USBC_UH1_USBINTR_URE      (6)      //!< Bit position for USBC_UH1_USBINTR_URE.
#define BM_USBC_UH1_USBINTR_URE      (0x00000040)  //!< Bit mask for USBC_UH1_USBINTR_URE.

//! @brief Get value of USBC_UH1_USBINTR_URE from a register value.
#define BG_USBC_UH1_USBINTR_URE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBINTR_URE) >> BP_USBC_UH1_USBINTR_URE)

//! @brief Format value for bitfield USBC_UH1_USBINTR_URE.
#define BF_USBC_UH1_USBINTR_URE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBINTR_URE) & BM_USBC_UH1_USBINTR_URE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the URE field to a new value.
#define BW_USBC_UH1_USBINTR_URE(v)   (HW_USBC_UH1_USBINTR_WR((HW_USBC_UH1_USBINTR_RD() & ~BM_USBC_UH1_USBINTR_URE) | BF_USBC_UH1_USBINTR_URE(v)))
#endif

/* --- Register HW_USBC_UH1_USBINTR, field SRE[7] (RW)
 *
 * SOF Received Interrupt Enable When this bit is one and the SRI bit in n_USBSTS register is a one
 * the controller will issue an interrupt.
 */

#define BP_USBC_UH1_USBINTR_SRE      (7)      //!< Bit position for USBC_UH1_USBINTR_SRE.
#define BM_USBC_UH1_USBINTR_SRE      (0x00000080)  //!< Bit mask for USBC_UH1_USBINTR_SRE.

//! @brief Get value of USBC_UH1_USBINTR_SRE from a register value.
#define BG_USBC_UH1_USBINTR_SRE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBINTR_SRE) >> BP_USBC_UH1_USBINTR_SRE)

//! @brief Format value for bitfield USBC_UH1_USBINTR_SRE.
#define BF_USBC_UH1_USBINTR_SRE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBINTR_SRE) & BM_USBC_UH1_USBINTR_SRE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SRE field to a new value.
#define BW_USBC_UH1_USBINTR_SRE(v)   (HW_USBC_UH1_USBINTR_WR((HW_USBC_UH1_USBINTR_RD() & ~BM_USBC_UH1_USBINTR_SRE) | BF_USBC_UH1_USBINTR_SRE(v)))
#endif

/* --- Register HW_USBC_UH1_USBINTR, field SLE[8] (RW)
 *
 * Sleep Interrupt Enable When this bit is one and the SLI bit in n_n_USBSTS register is a one the
 * controller will issue an interrupt. Only used in device operation mode.
 */

#define BP_USBC_UH1_USBINTR_SLE      (8)      //!< Bit position for USBC_UH1_USBINTR_SLE.
#define BM_USBC_UH1_USBINTR_SLE      (0x00000100)  //!< Bit mask for USBC_UH1_USBINTR_SLE.

//! @brief Get value of USBC_UH1_USBINTR_SLE from a register value.
#define BG_USBC_UH1_USBINTR_SLE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBINTR_SLE) >> BP_USBC_UH1_USBINTR_SLE)

//! @brief Format value for bitfield USBC_UH1_USBINTR_SLE.
#define BF_USBC_UH1_USBINTR_SLE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBINTR_SLE) & BM_USBC_UH1_USBINTR_SLE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SLE field to a new value.
#define BW_USBC_UH1_USBINTR_SLE(v)   (HW_USBC_UH1_USBINTR_WR((HW_USBC_UH1_USBINTR_RD() & ~BM_USBC_UH1_USBINTR_SLE) | BF_USBC_UH1_USBINTR_SLE(v)))
#endif

/* --- Register HW_USBC_UH1_USBINTR, field ULPIE[10] (RW)
 *
 * ULPI Interrupt Enable When this bit is one and the UPLII bit in n_USBSTS register is a one the
 * controller will issue an interrupt. This bit is usable only if the controller support UPLI
 * interface mode.
 */

#define BP_USBC_UH1_USBINTR_ULPIE      (10)      //!< Bit position for USBC_UH1_USBINTR_ULPIE.
#define BM_USBC_UH1_USBINTR_ULPIE      (0x00000400)  //!< Bit mask for USBC_UH1_USBINTR_ULPIE.

//! @brief Get value of USBC_UH1_USBINTR_ULPIE from a register value.
#define BG_USBC_UH1_USBINTR_ULPIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBINTR_ULPIE) >> BP_USBC_UH1_USBINTR_ULPIE)

//! @brief Format value for bitfield USBC_UH1_USBINTR_ULPIE.
#define BF_USBC_UH1_USBINTR_ULPIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBINTR_ULPIE) & BM_USBC_UH1_USBINTR_ULPIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ULPIE field to a new value.
#define BW_USBC_UH1_USBINTR_ULPIE(v)   (HW_USBC_UH1_USBINTR_WR((HW_USBC_UH1_USBINTR_RD() & ~BM_USBC_UH1_USBINTR_ULPIE) | BF_USBC_UH1_USBINTR_ULPIE(v)))
#endif

/* --- Register HW_USBC_UH1_USBINTR, field NAKE[16] (RW)
 *
 * NAK Interrupt Enable When this bit is one and the NAKI bit in n_USBSTS register is a one the
 * controller will issue an interrupt.
 */

#define BP_USBC_UH1_USBINTR_NAKE      (16)      //!< Bit position for USBC_UH1_USBINTR_NAKE.
#define BM_USBC_UH1_USBINTR_NAKE      (0x00010000)  //!< Bit mask for USBC_UH1_USBINTR_NAKE.

//! @brief Get value of USBC_UH1_USBINTR_NAKE from a register value.
#define BG_USBC_UH1_USBINTR_NAKE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBINTR_NAKE) >> BP_USBC_UH1_USBINTR_NAKE)

//! @brief Format value for bitfield USBC_UH1_USBINTR_NAKE.
#define BF_USBC_UH1_USBINTR_NAKE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBINTR_NAKE) & BM_USBC_UH1_USBINTR_NAKE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the NAKE field to a new value.
#define BW_USBC_UH1_USBINTR_NAKE(v)   (HW_USBC_UH1_USBINTR_WR((HW_USBC_UH1_USBINTR_RD() & ~BM_USBC_UH1_USBINTR_NAKE) | BF_USBC_UH1_USBINTR_NAKE(v)))
#endif

/* --- Register HW_USBC_UH1_USBINTR, field UAIE[18] (RW)
 *
 * USB Host Asynchronous Interrupt Enable When this bit is one, and the UAI bit in the n_USBSTS
 * register is one, host controller will issue an interrupt at the next interrupt threshold.
 */

#define BP_USBC_UH1_USBINTR_UAIE      (18)      //!< Bit position for USBC_UH1_USBINTR_UAIE.
#define BM_USBC_UH1_USBINTR_UAIE      (0x00040000)  //!< Bit mask for USBC_UH1_USBINTR_UAIE.

//! @brief Get value of USBC_UH1_USBINTR_UAIE from a register value.
#define BG_USBC_UH1_USBINTR_UAIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBINTR_UAIE) >> BP_USBC_UH1_USBINTR_UAIE)

//! @brief Format value for bitfield USBC_UH1_USBINTR_UAIE.
#define BF_USBC_UH1_USBINTR_UAIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBINTR_UAIE) & BM_USBC_UH1_USBINTR_UAIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UAIE field to a new value.
#define BW_USBC_UH1_USBINTR_UAIE(v)   (HW_USBC_UH1_USBINTR_WR((HW_USBC_UH1_USBINTR_RD() & ~BM_USBC_UH1_USBINTR_UAIE) | BF_USBC_UH1_USBINTR_UAIE(v)))
#endif

/* --- Register HW_USBC_UH1_USBINTR, field UPIE[19] (RW)
 *
 * USB Host Periodic Interrupt Enable When this bit is one, and the UPI bit in the n_USBSTS register
 * is one, host controller will issue an interrupt at the next interrupt threshold.
 */

#define BP_USBC_UH1_USBINTR_UPIE      (19)      //!< Bit position for USBC_UH1_USBINTR_UPIE.
#define BM_USBC_UH1_USBINTR_UPIE      (0x00080000)  //!< Bit mask for USBC_UH1_USBINTR_UPIE.

//! @brief Get value of USBC_UH1_USBINTR_UPIE from a register value.
#define BG_USBC_UH1_USBINTR_UPIE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBINTR_UPIE) >> BP_USBC_UH1_USBINTR_UPIE)

//! @brief Format value for bitfield USBC_UH1_USBINTR_UPIE.
#define BF_USBC_UH1_USBINTR_UPIE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBINTR_UPIE) & BM_USBC_UH1_USBINTR_UPIE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the UPIE field to a new value.
#define BW_USBC_UH1_USBINTR_UPIE(v)   (HW_USBC_UH1_USBINTR_WR((HW_USBC_UH1_USBINTR_RD() & ~BM_USBC_UH1_USBINTR_UPIE) | BF_USBC_UH1_USBINTR_UPIE(v)))
#endif

/* --- Register HW_USBC_UH1_USBINTR, field TIE0[24] (RW)
 *
 * General Purpose Timer #0 Interrupt Enable When this bit is one and the TI0 bit in n_USBSTS
 * register is a one the controller will issue an interrupt.
 */

#define BP_USBC_UH1_USBINTR_TIE0      (24)      //!< Bit position for USBC_UH1_USBINTR_TIE0.
#define BM_USBC_UH1_USBINTR_TIE0      (0x01000000)  //!< Bit mask for USBC_UH1_USBINTR_TIE0.

//! @brief Get value of USBC_UH1_USBINTR_TIE0 from a register value.
#define BG_USBC_UH1_USBINTR_TIE0(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBINTR_TIE0) >> BP_USBC_UH1_USBINTR_TIE0)

//! @brief Format value for bitfield USBC_UH1_USBINTR_TIE0.
#define BF_USBC_UH1_USBINTR_TIE0(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBINTR_TIE0) & BM_USBC_UH1_USBINTR_TIE0)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TIE0 field to a new value.
#define BW_USBC_UH1_USBINTR_TIE0(v)   (HW_USBC_UH1_USBINTR_WR((HW_USBC_UH1_USBINTR_RD() & ~BM_USBC_UH1_USBINTR_TIE0) | BF_USBC_UH1_USBINTR_TIE0(v)))
#endif

/* --- Register HW_USBC_UH1_USBINTR, field TIE1[25] (RW)
 *
 * General Purpose Timer #1 Interrupt Enable When this bit is one and the TI1 bit in n_USBSTS
 * register is a one the controller will issue an interrupt.
 */

#define BP_USBC_UH1_USBINTR_TIE1      (25)      //!< Bit position for USBC_UH1_USBINTR_TIE1.
#define BM_USBC_UH1_USBINTR_TIE1      (0x02000000)  //!< Bit mask for USBC_UH1_USBINTR_TIE1.

//! @brief Get value of USBC_UH1_USBINTR_TIE1 from a register value.
#define BG_USBC_UH1_USBINTR_TIE1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBINTR_TIE1) >> BP_USBC_UH1_USBINTR_TIE1)

//! @brief Format value for bitfield USBC_UH1_USBINTR_TIE1.
#define BF_USBC_UH1_USBINTR_TIE1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBINTR_TIE1) & BM_USBC_UH1_USBINTR_TIE1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TIE1 field to a new value.
#define BW_USBC_UH1_USBINTR_TIE1(v)   (HW_USBC_UH1_USBINTR_WR((HW_USBC_UH1_USBINTR_RD() & ~BM_USBC_UH1_USBINTR_TIE1) | BF_USBC_UH1_USBINTR_TIE1(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_FRINDEX - USB Frame Index
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_FRINDEX - USB Frame Index (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is used by the host controller to index the periodic frame list. The register
 * updates every 125 microseconds (once each micro-frame). Bits [N: 3] are used to select a
 * particular entry in the Periodic Frame List during periodic schedule execution. The number of
 * bits used for the index depends on the size of the frame list as set by system software in the
 * Frame List Size field in the n_USBCMD register.  This register must be written as a DWord. Byte
 * writes produce-undefined results. This register cannot be written unless the Host Controller is
 * in the 'Halted' state as indicated by the HCHalted bit. A write to this register while the
 * Run/Stop hit is set to a one produces undefined results. Writes to this register also affect the
 * SOF value.  In device mode this register is read only and, the device controller updates the
 * FRINDEX [13:3] register from the frame number indicated by the SOF marker. Whenever a SOF is
 * received by the USB bus, FRINDEX [13:3] will be checked against the SOF marker. If FRINDEX [13:3]
 * is different from the SOF marker, FRINDEX [13:3] will be set to the SOF value and FRINDEX [2:0]
 * will be set to zero (that is, SOF for 1 ms frame). If FRINDEX [13:3] is equal to the SOF value,
 * FRINDEX [2:0] will be increment (that is, SOF for 125 us micro-frame.).
 */
typedef union _hw_usbc_uh1_frindex
{
    reg32_t U;
    struct _hw_usbc_uh1_frindex_bitfields
    {
        unsigned FRINDEX : 14; //!< [13:0] Frame Index.
        unsigned RESERVED0 : 18; //!< [31:14] Reserved
    } B;
} hw_usbc_uh1_frindex_t;
#endif

/*
 * constants & macros for entire USBC_UH1_FRINDEX register
 */
#define HW_USBC_UH1_FRINDEX_ADDR      (REGS_USBC_BASE + 0x54c)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_FRINDEX           (*(volatile hw_usbc_uh1_frindex_t *) HW_USBC_UH1_FRINDEX_ADDR)
#define HW_USBC_UH1_FRINDEX_RD()      (HW_USBC_UH1_FRINDEX.U)
#define HW_USBC_UH1_FRINDEX_WR(v)     (HW_USBC_UH1_FRINDEX.U = (v))
#define HW_USBC_UH1_FRINDEX_SET(v)    (HW_USBC_UH1_FRINDEX_WR(HW_USBC_UH1_FRINDEX_RD() |  (v)))
#define HW_USBC_UH1_FRINDEX_CLR(v)    (HW_USBC_UH1_FRINDEX_WR(HW_USBC_UH1_FRINDEX_RD() & ~(v)))
#define HW_USBC_UH1_FRINDEX_TOG(v)    (HW_USBC_UH1_FRINDEX_WR(HW_USBC_UH1_FRINDEX_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UH1_FRINDEX bitfields
 */

/* --- Register HW_USBC_UH1_FRINDEX, field FRINDEX[13:0] (RW)
 *
 * Frame Index. The value, in this register, increments at the end of each time frame (micro-frame).
 * Bits [N: 3] are used for the Frame List current index. This means that each location of the frame
 * list is accessed 8 times (frames or micro-frames) before moving to the next index. The following
 * illustrates values of N based on the value of the Frame List Size field in the USBCMD register,
 * when used in host mode. USBCMD [Frame List Size] Number Elements N In device mode the value is
 * the current frame number of the last frame transmitted. It is not used as an index. In either
 * mode bits 2:0 indicate the current microframe.
 *
 * Values:
 * 000 - (1024) 12
 * 001 - (512) 11
 * 010 - (256) 10
 * 011 - (128) 9
 * 100 - (64) 8
 * 101 - (32) 7
 * 110 - (16) 6
 * 111 - (8) 5
 */

#define BP_USBC_UH1_FRINDEX_FRINDEX      (0)      //!< Bit position for USBC_UH1_FRINDEX_FRINDEX.
#define BM_USBC_UH1_FRINDEX_FRINDEX      (0x00003fff)  //!< Bit mask for USBC_UH1_FRINDEX_FRINDEX.

//! @brief Get value of USBC_UH1_FRINDEX_FRINDEX from a register value.
#define BG_USBC_UH1_FRINDEX_FRINDEX(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_FRINDEX_FRINDEX) >> BP_USBC_UH1_FRINDEX_FRINDEX)

//! @brief Format value for bitfield USBC_UH1_FRINDEX_FRINDEX.
#define BF_USBC_UH1_FRINDEX_FRINDEX(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_FRINDEX_FRINDEX) & BM_USBC_UH1_FRINDEX_FRINDEX)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FRINDEX field to a new value.
#define BW_USBC_UH1_FRINDEX_FRINDEX(v)   (HW_USBC_UH1_FRINDEX_WR((HW_USBC_UH1_FRINDEX_RD() & ~BM_USBC_UH1_FRINDEX_FRINDEX) | BF_USBC_UH1_FRINDEX_FRINDEX(v)))
#endif


//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_PERIODICLISTBASE - Frame List Base Address
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_PERIODICLISTBASE - Frame List Base Address (RW)
 *
 * Reset value: 0x00000000
 *
 * Host Controller only  This 32-bit register contains the beginning address of the Periodic Frame
 * List in the system memory. HCD loads this register prior to starting the schedule execution by
 * the Host Controller. The memory structure referenced by this physical memory pointer is assumed
 * to be 4-Kbyte aligned. The contents of this register are combined with the Frame Index Register
 * (USB_n_FRINDEX) to enable the Host Controller to step through the Periodic Frame List in
 * sequence.
 */
typedef union _hw_usbc_uh1_periodiclistbase
{
    reg32_t U;
    struct _hw_usbc_uh1_periodiclistbase_bitfields
    {
        unsigned RESERVED0 : 12; //!< [11:0] Reserved
        unsigned BASEADR : 20; //!< [31:12] Base Address (Low).
    } B;
} hw_usbc_uh1_periodiclistbase_t;
#endif

/*
 * constants & macros for entire USBC_UH1_PERIODICLISTBASE register
 */
#define HW_USBC_UH1_PERIODICLISTBASE_ADDR      (REGS_USBC_BASE + 0x554)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_PERIODICLISTBASE           (*(volatile hw_usbc_uh1_periodiclistbase_t *) HW_USBC_UH1_PERIODICLISTBASE_ADDR)
#define HW_USBC_UH1_PERIODICLISTBASE_RD()      (HW_USBC_UH1_PERIODICLISTBASE.U)
#define HW_USBC_UH1_PERIODICLISTBASE_WR(v)     (HW_USBC_UH1_PERIODICLISTBASE.U = (v))
#define HW_USBC_UH1_PERIODICLISTBASE_SET(v)    (HW_USBC_UH1_PERIODICLISTBASE_WR(HW_USBC_UH1_PERIODICLISTBASE_RD() |  (v)))
#define HW_USBC_UH1_PERIODICLISTBASE_CLR(v)    (HW_USBC_UH1_PERIODICLISTBASE_WR(HW_USBC_UH1_PERIODICLISTBASE_RD() & ~(v)))
#define HW_USBC_UH1_PERIODICLISTBASE_TOG(v)    (HW_USBC_UH1_PERIODICLISTBASE_WR(HW_USBC_UH1_PERIODICLISTBASE_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UH1_PERIODICLISTBASE bitfields
 */

/* --- Register HW_USBC_UH1_PERIODICLISTBASE, field BASEADR[31:12] (RW)
 *
 * Base Address (Low). These bits correspond to memory address signals [31:12], respectively. Only
 * used by the host controller.
 */

#define BP_USBC_UH1_PERIODICLISTBASE_BASEADR      (12)      //!< Bit position for USBC_UH1_PERIODICLISTBASE_BASEADR.
#define BM_USBC_UH1_PERIODICLISTBASE_BASEADR      (0xfffff000)  //!< Bit mask for USBC_UH1_PERIODICLISTBASE_BASEADR.

//! @brief Get value of USBC_UH1_PERIODICLISTBASE_BASEADR from a register value.
#define BG_USBC_UH1_PERIODICLISTBASE_BASEADR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PERIODICLISTBASE_BASEADR) >> BP_USBC_UH1_PERIODICLISTBASE_BASEADR)

//! @brief Format value for bitfield USBC_UH1_PERIODICLISTBASE_BASEADR.
#define BF_USBC_UH1_PERIODICLISTBASE_BASEADR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PERIODICLISTBASE_BASEADR) & BM_USBC_UH1_PERIODICLISTBASE_BASEADR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the BASEADR field to a new value.
#define BW_USBC_UH1_PERIODICLISTBASE_BASEADR(v)   (HW_USBC_UH1_PERIODICLISTBASE_WR((HW_USBC_UH1_PERIODICLISTBASE_RD() & ~BM_USBC_UH1_PERIODICLISTBASE_BASEADR) | BF_USBC_UH1_PERIODICLISTBASE_BASEADR(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_ASYNCLISTADDR - Next Asynch. Address
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_ASYNCLISTADDR - Next Asynch. Address (RW)
 *
 * Reset value: 0x00000000
 *
 * Host Controller only  This 32-bit register contains the address of the next asynchronous queue
 * head to be executed by the host. Bits [4:0] of this register cannot be modified by the system
 * software and will always return a zero when read.
 */
typedef union _hw_usbc_uh1_asynclistaddr
{
    reg32_t U;
    struct _hw_usbc_uh1_asynclistaddr_bitfields
    {
        unsigned RESERVED0 : 5; //!< [4:0] Reserved
        unsigned ASYBASE : 27; //!< [31:5] Link Pointer Low (LPL).
    } B;
} hw_usbc_uh1_asynclistaddr_t;
#endif

/*
 * constants & macros for entire USBC_UH1_ASYNCLISTADDR register
 */
#define HW_USBC_UH1_ASYNCLISTADDR_ADDR      (REGS_USBC_BASE + 0x558)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_ASYNCLISTADDR           (*(volatile hw_usbc_uh1_asynclistaddr_t *) HW_USBC_UH1_ASYNCLISTADDR_ADDR)
#define HW_USBC_UH1_ASYNCLISTADDR_RD()      (HW_USBC_UH1_ASYNCLISTADDR.U)
#define HW_USBC_UH1_ASYNCLISTADDR_WR(v)     (HW_USBC_UH1_ASYNCLISTADDR.U = (v))
#define HW_USBC_UH1_ASYNCLISTADDR_SET(v)    (HW_USBC_UH1_ASYNCLISTADDR_WR(HW_USBC_UH1_ASYNCLISTADDR_RD() |  (v)))
#define HW_USBC_UH1_ASYNCLISTADDR_CLR(v)    (HW_USBC_UH1_ASYNCLISTADDR_WR(HW_USBC_UH1_ASYNCLISTADDR_RD() & ~(v)))
#define HW_USBC_UH1_ASYNCLISTADDR_TOG(v)    (HW_USBC_UH1_ASYNCLISTADDR_WR(HW_USBC_UH1_ASYNCLISTADDR_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UH1_ASYNCLISTADDR bitfields
 */

/* --- Register HW_USBC_UH1_ASYNCLISTADDR, field ASYBASE[31:5] (RW)
 *
 * Link Pointer Low (LPL). These bits correspond to memory address signals [31:5], respectively.
 * This field may only reference a Queue Head (QH). Only used by the host controller.
 */

#define BP_USBC_UH1_ASYNCLISTADDR_ASYBASE      (5)      //!< Bit position for USBC_UH1_ASYNCLISTADDR_ASYBASE.
#define BM_USBC_UH1_ASYNCLISTADDR_ASYBASE      (0xffffffe0)  //!< Bit mask for USBC_UH1_ASYNCLISTADDR_ASYBASE.

//! @brief Get value of USBC_UH1_ASYNCLISTADDR_ASYBASE from a register value.
#define BG_USBC_UH1_ASYNCLISTADDR_ASYBASE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_ASYNCLISTADDR_ASYBASE) >> BP_USBC_UH1_ASYNCLISTADDR_ASYBASE)

//! @brief Format value for bitfield USBC_UH1_ASYNCLISTADDR_ASYBASE.
#define BF_USBC_UH1_ASYNCLISTADDR_ASYBASE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_ASYNCLISTADDR_ASYBASE) & BM_USBC_UH1_ASYNCLISTADDR_ASYBASE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ASYBASE field to a new value.
#define BW_USBC_UH1_ASYNCLISTADDR_ASYBASE(v)   (HW_USBC_UH1_ASYNCLISTADDR_WR((HW_USBC_UH1_ASYNCLISTADDR_RD() & ~BM_USBC_UH1_ASYNCLISTADDR_ASYBASE) | BF_USBC_UH1_ASYNCLISTADDR_ASYBASE(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_BURSTSIZE - Programmable Burst Size
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_BURSTSIZE - Programmable Burst Size (RW)
 *
 * Reset value: 0x00000000
 *
 * This register is used to control the burst size used during data movement on the AHB master
 * interface. This register is ignored if AHBBRST bits in SBUSCFG register is non-zero value.
 */
typedef union _hw_usbc_uh1_burstsize
{
    reg32_t U;
    struct _hw_usbc_uh1_burstsize_bitfields
    {
        unsigned RXPBURST : 8; //!< [7:0] Programmable RX Burst Size.
        unsigned TXPBURST : 9; //!< [16:8] Programmable TX Burst Size.
        unsigned RESERVED0 : 15; //!< [31:17] Reserved
    } B;
} hw_usbc_uh1_burstsize_t;
#endif

/*
 * constants & macros for entire USBC_UH1_BURSTSIZE register
 */
#define HW_USBC_UH1_BURSTSIZE_ADDR      (REGS_USBC_BASE + 0x560)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_BURSTSIZE           (*(volatile hw_usbc_uh1_burstsize_t *) HW_USBC_UH1_BURSTSIZE_ADDR)
#define HW_USBC_UH1_BURSTSIZE_RD()      (HW_USBC_UH1_BURSTSIZE.U)
#define HW_USBC_UH1_BURSTSIZE_WR(v)     (HW_USBC_UH1_BURSTSIZE.U = (v))
#define HW_USBC_UH1_BURSTSIZE_SET(v)    (HW_USBC_UH1_BURSTSIZE_WR(HW_USBC_UH1_BURSTSIZE_RD() |  (v)))
#define HW_USBC_UH1_BURSTSIZE_CLR(v)    (HW_USBC_UH1_BURSTSIZE_WR(HW_USBC_UH1_BURSTSIZE_RD() & ~(v)))
#define HW_USBC_UH1_BURSTSIZE_TOG(v)    (HW_USBC_UH1_BURSTSIZE_WR(HW_USBC_UH1_BURSTSIZE_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UH1_BURSTSIZE bitfields
 */

/* --- Register HW_USBC_UH1_BURSTSIZE, field RXPBURST[7:0] (RW)
 *
 * Programmable RX Burst Size. Default value is determined by TXBURST bits in n_HWRXBUF. This
 * register represents the maximum length of a the burst in 32-bit words while moving data from the
 * USB bus to system memory.
 */

#define BP_USBC_UH1_BURSTSIZE_RXPBURST      (0)      //!< Bit position for USBC_UH1_BURSTSIZE_RXPBURST.
#define BM_USBC_UH1_BURSTSIZE_RXPBURST      (0x000000ff)  //!< Bit mask for USBC_UH1_BURSTSIZE_RXPBURST.

//! @brief Get value of USBC_UH1_BURSTSIZE_RXPBURST from a register value.
#define BG_USBC_UH1_BURSTSIZE_RXPBURST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_BURSTSIZE_RXPBURST) >> BP_USBC_UH1_BURSTSIZE_RXPBURST)

//! @brief Format value for bitfield USBC_UH1_BURSTSIZE_RXPBURST.
#define BF_USBC_UH1_BURSTSIZE_RXPBURST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_BURSTSIZE_RXPBURST) & BM_USBC_UH1_BURSTSIZE_RXPBURST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the RXPBURST field to a new value.
#define BW_USBC_UH1_BURSTSIZE_RXPBURST(v)   (HW_USBC_UH1_BURSTSIZE_WR((HW_USBC_UH1_BURSTSIZE_RD() & ~BM_USBC_UH1_BURSTSIZE_RXPBURST) | BF_USBC_UH1_BURSTSIZE_RXPBURST(v)))
#endif

/* --- Register HW_USBC_UH1_BURSTSIZE, field TXPBURST[16:8] (RW)
 *
 * Programmable TX Burst Size. Default value is determined by TXBURST bits in n_HWTXBUF. This
 * register represents the maximum length of a the burst in 32-bit words while moving data from
 * system memory to the USB bus.
 */

#define BP_USBC_UH1_BURSTSIZE_TXPBURST      (8)      //!< Bit position for USBC_UH1_BURSTSIZE_TXPBURST.
#define BM_USBC_UH1_BURSTSIZE_TXPBURST      (0x0001ff00)  //!< Bit mask for USBC_UH1_BURSTSIZE_TXPBURST.

//! @brief Get value of USBC_UH1_BURSTSIZE_TXPBURST from a register value.
#define BG_USBC_UH1_BURSTSIZE_TXPBURST(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_BURSTSIZE_TXPBURST) >> BP_USBC_UH1_BURSTSIZE_TXPBURST)

//! @brief Format value for bitfield USBC_UH1_BURSTSIZE_TXPBURST.
#define BF_USBC_UH1_BURSTSIZE_TXPBURST(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_BURSTSIZE_TXPBURST) & BM_USBC_UH1_BURSTSIZE_TXPBURST)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXPBURST field to a new value.
#define BW_USBC_UH1_BURSTSIZE_TXPBURST(v)   (HW_USBC_UH1_BURSTSIZE_WR((HW_USBC_UH1_BURSTSIZE_RD() & ~BM_USBC_UH1_BURSTSIZE_TXPBURST) | BF_USBC_UH1_BURSTSIZE_TXPBURST(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_TXFILLTUNING - TX FIFO Fill Tuning
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_TXFILLTUNING - TX FIFO Fill Tuning (RW)
 *
 * Reset value: 0x00000808
 *
 * The fields in this register control performance tuning associated with how the host controller
 * posts data to the TX latency FIFO before moving the data onto the USB bus. The specific areas of
 * performance include the how much data to post into the FIFO and an estimate for how long that
 * operation should take in the target system.  Definitions:  T 0 = Standard packet overhead  T 1 =
 * Time to send data payload  T ff = Time to fetch packet into TX FIFO up to specified level.  T s =
 * Total Packet Flight Time (send-only) packet  T s = T 0 + T 1   T p = Total Packet Time (fetch and
 * send) packet  T p = T ff + T 0 + T 1   Upon discovery of a transmit (OUT/SETUP) packet in the
 * data structures, host controller checks to ensure T  p  remains before the end of the
 * [micro]frame. If so it proceeds to pre-fill the TX FIFO. If at anytime during the pre-fill
 * operation the time remaining the [micro]frame is < T  s  then the packet attempt ceases and the
 * packet is tried at a later time. Although this is not an error condition and the host controller
 * will eventually recover, a mark will be made the scheduler health counter to note the occurrence
 * of a "back-off" event. When a back-off event is detected, the partial packet fetched may need to
 * be discarded from the latency buffer to make room for periodic traffic that will begin after the
 * next SOF. Too many back-off events can waste bandwidth and power on the system bus and thus
 * should be minimized (not necessarily eliminated). Back-offs can be minimized with use of the
 * n_TSCHHEALTH ( T  ff ) described below.  The reset value could vary from instance to instance.
 * Please see the detail in bit field description and ignore reset value in summary table in this
 * case!
 */
typedef union _hw_usbc_uh1_txfilltuning
{
    reg32_t U;
    struct _hw_usbc_uh1_txfilltuning_bitfields
    {
        unsigned TXSCHOH : 8; //!< [7:0] Scheduler Overhead.
        unsigned TXSCHHEALTH : 5; //!< [12:8] Scheduler Health Counter.
        unsigned RESERVED0 : 3; //!< [15:13] Reserved
        unsigned TXFIFOTHRES : 6; //!< [21:16] FIFO Burst Threshold.
        unsigned RESERVED1 : 10; //!< [31:22] Reserved
    } B;
} hw_usbc_uh1_txfilltuning_t;
#endif

/*
 * constants & macros for entire USBC_UH1_TXFILLTUNING register
 */
#define HW_USBC_UH1_TXFILLTUNING_ADDR      (REGS_USBC_BASE + 0x564)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_TXFILLTUNING           (*(volatile hw_usbc_uh1_txfilltuning_t *) HW_USBC_UH1_TXFILLTUNING_ADDR)
#define HW_USBC_UH1_TXFILLTUNING_RD()      (HW_USBC_UH1_TXFILLTUNING.U)
#define HW_USBC_UH1_TXFILLTUNING_WR(v)     (HW_USBC_UH1_TXFILLTUNING.U = (v))
#define HW_USBC_UH1_TXFILLTUNING_SET(v)    (HW_USBC_UH1_TXFILLTUNING_WR(HW_USBC_UH1_TXFILLTUNING_RD() |  (v)))
#define HW_USBC_UH1_TXFILLTUNING_CLR(v)    (HW_USBC_UH1_TXFILLTUNING_WR(HW_USBC_UH1_TXFILLTUNING_RD() & ~(v)))
#define HW_USBC_UH1_TXFILLTUNING_TOG(v)    (HW_USBC_UH1_TXFILLTUNING_WR(HW_USBC_UH1_TXFILLTUNING_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UH1_TXFILLTUNING bitfields
 */

/* --- Register HW_USBC_UH1_TXFILLTUNING, field TXSCHOH[7:0] (RW)
 *
 * Scheduler Overhead. (Read/Write) [Default = 0] This register adds an additional fixed offset to
 * the schedule time estimator described above as Tff. As an approximation, the value chosen for
 * this register should limit the number of back-off events captured in the TXSCHHEALTH to less than
 * 10 per second in a highly utilized bus. Choosing a value that is too high for this register is
 * not desired as it can needlessly reduce USB utilization. The time unit represented in this
 * register is 1.267us when a device is connected in High-Speed Mode. The time unit represented in
 * this register is 6.333us when a device is connected in Low/Full Speed Mode. Default value is
 * '08h' for OTG controller core, and '00h' for Host-only controller core.
 */

#define BP_USBC_UH1_TXFILLTUNING_TXSCHOH      (0)      //!< Bit position for USBC_UH1_TXFILLTUNING_TXSCHOH.
#define BM_USBC_UH1_TXFILLTUNING_TXSCHOH      (0x000000ff)  //!< Bit mask for USBC_UH1_TXFILLTUNING_TXSCHOH.

//! @brief Get value of USBC_UH1_TXFILLTUNING_TXSCHOH from a register value.
#define BG_USBC_UH1_TXFILLTUNING_TXSCHOH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_TXFILLTUNING_TXSCHOH) >> BP_USBC_UH1_TXFILLTUNING_TXSCHOH)

//! @brief Format value for bitfield USBC_UH1_TXFILLTUNING_TXSCHOH.
#define BF_USBC_UH1_TXFILLTUNING_TXSCHOH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_TXFILLTUNING_TXSCHOH) & BM_USBC_UH1_TXFILLTUNING_TXSCHOH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXSCHOH field to a new value.
#define BW_USBC_UH1_TXFILLTUNING_TXSCHOH(v)   (HW_USBC_UH1_TXFILLTUNING_WR((HW_USBC_UH1_TXFILLTUNING_RD() & ~BM_USBC_UH1_TXFILLTUNING_TXSCHOH) | BF_USBC_UH1_TXFILLTUNING_TXSCHOH(v)))
#endif

/* --- Register HW_USBC_UH1_TXFILLTUNING, field TXSCHHEALTH[12:8] (RW)
 *
 * Scheduler Health Counter. (Read/Write To Clear) This register increments when the host controller
 * fails to fill the TX latency FIFO to the level programmed by TXFIFOTHRES before running out of
 * time to send the packet before the next Start-Of-Frame. This health counter measures the number
 * of times this occurs to provide feedback to selecting a proper TXSCHOH. Writing to this register
 * will clear the counter and this counter will max. at 31. Default value is '08h' for OTG
 * controller core, and '00h' for Host-only controller core.
 */

#define BP_USBC_UH1_TXFILLTUNING_TXSCHHEALTH      (8)      //!< Bit position for USBC_UH1_TXFILLTUNING_TXSCHHEALTH.
#define BM_USBC_UH1_TXFILLTUNING_TXSCHHEALTH      (0x00001f00)  //!< Bit mask for USBC_UH1_TXFILLTUNING_TXSCHHEALTH.

//! @brief Get value of USBC_UH1_TXFILLTUNING_TXSCHHEALTH from a register value.
#define BG_USBC_UH1_TXFILLTUNING_TXSCHHEALTH(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_TXFILLTUNING_TXSCHHEALTH) >> BP_USBC_UH1_TXFILLTUNING_TXSCHHEALTH)

//! @brief Format value for bitfield USBC_UH1_TXFILLTUNING_TXSCHHEALTH.
#define BF_USBC_UH1_TXFILLTUNING_TXSCHHEALTH(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_TXFILLTUNING_TXSCHHEALTH) & BM_USBC_UH1_TXFILLTUNING_TXSCHHEALTH)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXSCHHEALTH field to a new value.
#define BW_USBC_UH1_TXFILLTUNING_TXSCHHEALTH(v)   (HW_USBC_UH1_TXFILLTUNING_WR((HW_USBC_UH1_TXFILLTUNING_RD() & ~BM_USBC_UH1_TXFILLTUNING_TXSCHHEALTH) | BF_USBC_UH1_TXFILLTUNING_TXSCHHEALTH(v)))
#endif

/* --- Register HW_USBC_UH1_TXFILLTUNING, field TXFIFOTHRES[21:16] (RW)
 *
 * FIFO Burst Threshold. (Read/Write) This register controls the number of data bursts that are
 * posted to the TX latency FIFO in host mode before the packet begins on to the bus. The minimum
 * value is 2 and this value should be a low as possible to maximize USB performance. A higher value
 * can be used in systems with unpredictable latency and/or insufficient bandwidth where the FIFO
 * may underrun because the data transferred from the latency FIFO to USB occurs before it can be
 * replenished from system memory. This value is ignored if the Stream Disable bit in USB_n_USBMODE
 * register is set. Default value is '00h' for OTG controller core, and '02h' for Host-only
 * controller core.
 */

#define BP_USBC_UH1_TXFILLTUNING_TXFIFOTHRES      (16)      //!< Bit position for USBC_UH1_TXFILLTUNING_TXFIFOTHRES.
#define BM_USBC_UH1_TXFILLTUNING_TXFIFOTHRES      (0x003f0000)  //!< Bit mask for USBC_UH1_TXFILLTUNING_TXFIFOTHRES.

//! @brief Get value of USBC_UH1_TXFILLTUNING_TXFIFOTHRES from a register value.
#define BG_USBC_UH1_TXFILLTUNING_TXFIFOTHRES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_TXFILLTUNING_TXFIFOTHRES) >> BP_USBC_UH1_TXFILLTUNING_TXFIFOTHRES)

//! @brief Format value for bitfield USBC_UH1_TXFILLTUNING_TXFIFOTHRES.
#define BF_USBC_UH1_TXFILLTUNING_TXFIFOTHRES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_TXFILLTUNING_TXFIFOTHRES) & BM_USBC_UH1_TXFILLTUNING_TXFIFOTHRES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the TXFIFOTHRES field to a new value.
#define BW_USBC_UH1_TXFILLTUNING_TXFIFOTHRES(v)   (HW_USBC_UH1_TXFILLTUNING_WR((HW_USBC_UH1_TXFILLTUNING_RD() & ~BM_USBC_UH1_TXFILLTUNING_TXFIFOTHRES) | BF_USBC_UH1_TXFILLTUNING_TXFIFOTHRES(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_CONFIGFLAG - Configure Flag Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_CONFIGFLAG - Configure Flag Register (RW)
 *
 * Reset value: 0x00000001
 *

 */
typedef union _hw_usbc_uh1_configflag
{
    reg32_t U;
    struct _hw_usbc_uh1_configflag_bitfields
    {
        unsigned CF : 1; //!< [0] Configure Flag Host software sets this bit as the last action in its process of configuring the Host Controller.
        unsigned RESERVED0 : 31; //!< [31:1] Reserved
    } B;
} hw_usbc_uh1_configflag_t;
#endif

/*
 * constants & macros for entire USBC_UH1_CONFIGFLAG register
 */
#define HW_USBC_UH1_CONFIGFLAG_ADDR      (REGS_USBC_BASE + 0x580)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_CONFIGFLAG           (*(volatile hw_usbc_uh1_configflag_t *) HW_USBC_UH1_CONFIGFLAG_ADDR)
#define HW_USBC_UH1_CONFIGFLAG_RD()      (HW_USBC_UH1_CONFIGFLAG.U)
#define HW_USBC_UH1_CONFIGFLAG_WR(v)     (HW_USBC_UH1_CONFIGFLAG.U = (v))
#define HW_USBC_UH1_CONFIGFLAG_SET(v)    (HW_USBC_UH1_CONFIGFLAG_WR(HW_USBC_UH1_CONFIGFLAG_RD() |  (v)))
#define HW_USBC_UH1_CONFIGFLAG_CLR(v)    (HW_USBC_UH1_CONFIGFLAG_WR(HW_USBC_UH1_CONFIGFLAG_RD() & ~(v)))
#define HW_USBC_UH1_CONFIGFLAG_TOG(v)    (HW_USBC_UH1_CONFIGFLAG_WR(HW_USBC_UH1_CONFIGFLAG_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UH1_CONFIGFLAG bitfields
 */

/* --- Register HW_USBC_UH1_CONFIGFLAG, field CF[0] (RO)
 *
 * Configure Flag Host software sets this bit as the last action in its process of configuring the
 * Host Controller. This bit controls the default port-routing control logic.
 *
 * Values:
 * 0 - Port routing control logic default-routes each port to an implementation dependent classic host
 *     controller.
 * 1 - Port routing control logic default-routes all ports to this host controller.
 */

#define BP_USBC_UH1_CONFIGFLAG_CF      (0)      //!< Bit position for USBC_UH1_CONFIGFLAG_CF.
#define BM_USBC_UH1_CONFIGFLAG_CF      (0x00000001)  //!< Bit mask for USBC_UH1_CONFIGFLAG_CF.

//! @brief Get value of USBC_UH1_CONFIGFLAG_CF from a register value.
#define BG_USBC_UH1_CONFIGFLAG_CF(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_CONFIGFLAG_CF) >> BP_USBC_UH1_CONFIGFLAG_CF)


//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_PORTSC1 - Port Status & Control
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_PORTSC1 - Port Status & Control (RW)
 *
 * Reset value: 0x10000000
 *
 * Host Controller  A host controller could implement one to eight port status and control
 * registers. The number is determined by N_PORTs bits in HWSPARAMs register (please see ). Software
 * could read this parameter register to determine how many ports need service.  All controller
 * cores are Single-Port Host, so there is only one port status and control register for each
 * controller core.  This register is only reset by power on reset or controller core reset. The
 * initial conditions of a port are:   No device connected  Port disabled   If the port supports
 * power control, this state remains until port power is supplied (by software).  Device Controller
 * A device controller has only port register one (PORTSC1) and it does not support power control.
 * Port control in device mode is only used for status port reset, suspend, and current connect
 * status. It is also used to initiate test mode or force signaling and allows software to put the
 * PHY into low power suspend mode and disable the PHY clock.
 */
typedef union _hw_usbc_uh1_portsc1
{
    reg32_t U;
    struct _hw_usbc_uh1_portsc1_bitfields
    {
        unsigned CCS : 1; //!< [0] Current Connect Status-Read Only.
        unsigned CSC : 1; //!< [1] Connect Status Change-R/WC.
        unsigned PE : 1; //!< [2] Port Enabled/Disabled-Read/Write.
        unsigned PEC : 1; //!< [3] Port Enable/Disable Change-R/WC.
        unsigned OCA : 1; //!< [4] Over-current Active-Read Only.
        unsigned OCC : 1; //!< [5] Over-current Change-R/WC.
        unsigned FPR : 1; //!< [6] Force Port Resume -Read/Write.
        unsigned SUSP : 1; //!< [7] Suspend - Read/Write or Read Only.
        unsigned PR : 1; //!< [8] Port Reset - Read/Write or Read Only.
        unsigned HSP : 1; //!< [9] High-Speed Port - Read Only.
        unsigned LS : 2; //!< [11:10] Line Status-Read Only.
        unsigned PP : 1; //!< [12] Port Power (PP)-Read/Write or Read Only.
        unsigned PO : 1; //!< [13] Port Owner-Read/Write.
        unsigned PIC : 2; //!< [15:14] Port Indicator Control - Read/Write.
        unsigned PTC : 4; //!< [19:16] Port Test Control - Read/Write.
        unsigned WKCN : 1; //!< [20] Wake on Connect Enable (WKCNNT_E) - Read/Write.
        unsigned WKDC : 1; //!< [21] Wake on Disconnect Enable (WKDSCNNT_E) - Read/Write.
        unsigned WKOC : 1; //!< [22] Wake on Over-current Enable (WKOC_E) - Read/Write.
        unsigned PHCD : 1; //!< [23] PHY Low Power Suspend - Clock Disable (PLPSCD) - Read/Write.
        unsigned PFSC : 1; //!< [24] Port Force Full Speed Connect - Read/Write.
        unsigned PTS : 1; //!< [25] See description at bits 31-30
        unsigned PSPD : 2; //!< [27:26] Port Speed - Read Only.
        unsigned PTW : 1; //!< [28] Parallel Transceiver Width This bit has no effect if serial interface engine is used.
        unsigned STS : 1; //!< [29] Serial Transceiver Select - Read Only Serial Transceiver Select 1 Serial Interface Engine is selected 0 Parallel Interface signals is selected Serial Interface Engine can be used in combination with UTMI+/ULPI physical interface to provide FS/LS signaling instead of the parallel interface signals.
        unsigned PTS1 : 2; //!< [31:30] Bit field {bit25, bit31, bit30}: "000b" UTMI/UTMI+ "001b" Reserved "010b" ULPI "011b" Serial/USB 1.1 PHY/IC-USB (FS Only) "100b" HSIC All USB port interface modes are listed in this field description, but not all are supported.
    } B;
} hw_usbc_uh1_portsc1_t;
#endif

/*
 * constants & macros for entire USBC_UH1_PORTSC1 register
 */
#define HW_USBC_UH1_PORTSC1_ADDR      (REGS_USBC_BASE + 0x584)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_PORTSC1           (*(volatile hw_usbc_uh1_portsc1_t *) HW_USBC_UH1_PORTSC1_ADDR)
#define HW_USBC_UH1_PORTSC1_RD()      (HW_USBC_UH1_PORTSC1.U)
#define HW_USBC_UH1_PORTSC1_WR(v)     (HW_USBC_UH1_PORTSC1.U = (v))
#define HW_USBC_UH1_PORTSC1_SET(v)    (HW_USBC_UH1_PORTSC1_WR(HW_USBC_UH1_PORTSC1_RD() |  (v)))
#define HW_USBC_UH1_PORTSC1_CLR(v)    (HW_USBC_UH1_PORTSC1_WR(HW_USBC_UH1_PORTSC1_RD() & ~(v)))
#define HW_USBC_UH1_PORTSC1_TOG(v)    (HW_USBC_UH1_PORTSC1_WR(HW_USBC_UH1_PORTSC1_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UH1_PORTSC1 bitfields
 */

/* --- Register HW_USBC_UH1_PORTSC1, field CCS[0] (RO)
 *
 * Current Connect Status-Read Only. In Host Mode: 1=Device is present on port. 0=No device is
 * present. Default = 0. This value reflects the current state of the port, and may not correspond
 * directly to the event that caused the Connect Status Change bit (Bit 1) to be set. This field is
 * zero if Port Power( ) is zero in host mode. In Device Mode: 1=Attached. 0=Not Attached.
 * Default=0. A one indicates that the device successfully attached and is operating in either high
 * speed or full speed as indicated by the High Speed Port bit in this register. A zero indicates
 * that the device did not attach successfully or was forcibly disconnected by the software writing
 * a zero to the Run bit in the USBCMD register. It does not state the device being disconnected or
 * suspended.
 */

#define BP_USBC_UH1_PORTSC1_CCS      (0)      //!< Bit position for USBC_UH1_PORTSC1_CCS.
#define BM_USBC_UH1_PORTSC1_CCS      (0x00000001)  //!< Bit mask for USBC_UH1_PORTSC1_CCS.

//! @brief Get value of USBC_UH1_PORTSC1_CCS from a register value.
#define BG_USBC_UH1_PORTSC1_CCS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_CCS) >> BP_USBC_UH1_PORTSC1_CCS)

/* --- Register HW_USBC_UH1_PORTSC1, field CSC[1] (RW)
 *
 * Connect Status Change-R/WC. 1 =Change in Current Connect Status. 0=No change. Default 0. In Host
 * Mode: Indicates a change has occurred in the port's Current Connect Status. The host/device
 * controller sets this bit for all changes to the port device connect status, even if system
 * software has not cleared an existing connect status change. For example, the insertion status
 * changes twice before system software has cleared the changed condition, hub hardware will be
 * 'setting' an already-set bit (that is, the bit will remain set). Software clears this bit by
 * writing a one to it. This field is zero if Port Power( ) is zero in host mode. In Device Mode:
 * This bit is undefined in device controller mode.
 */

#define BP_USBC_UH1_PORTSC1_CSC      (1)      //!< Bit position for USBC_UH1_PORTSC1_CSC.
#define BM_USBC_UH1_PORTSC1_CSC      (0x00000002)  //!< Bit mask for USBC_UH1_PORTSC1_CSC.

//! @brief Get value of USBC_UH1_PORTSC1_CSC from a register value.
#define BG_USBC_UH1_PORTSC1_CSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_CSC) >> BP_USBC_UH1_PORTSC1_CSC)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_CSC.
#define BF_USBC_UH1_PORTSC1_CSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_CSC) & BM_USBC_UH1_PORTSC1_CSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CSC field to a new value.
#define BW_USBC_UH1_PORTSC1_CSC(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_CSC) | BF_USBC_UH1_PORTSC1_CSC(v)))
#endif

/* --- Register HW_USBC_UH1_PORTSC1, field PE[2] (RW)
 *
 * Port Enabled/Disabled-Read/Write. 1=Enable. 0=Disable. Default 0. In Host Mode: Ports can only be
 * enabled by the host controller as a part of the reset and enable. Software cannot enable a port
 * by writing a one to this field. Ports can be disabled by either a fault condition (disconnect
 * event or other fault condition) or by the host software. Note that the bit status does not change
 * until the port state actually changes. There may be a delay in disabling or enabling a port due
 * to other host controller and bus events. When the port is disabled, (0b) downstream propagation
 * of data is blocked except for reset. This field is zero if Port Power( ) is zero in host mode. In
 * Device Mode: The device port is always enabled, so this bit is always '1b'.
 */

#define BP_USBC_UH1_PORTSC1_PE      (2)      //!< Bit position for USBC_UH1_PORTSC1_PE.
#define BM_USBC_UH1_PORTSC1_PE      (0x00000004)  //!< Bit mask for USBC_UH1_PORTSC1_PE.

//! @brief Get value of USBC_UH1_PORTSC1_PE from a register value.
#define BG_USBC_UH1_PORTSC1_PE(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_PE) >> BP_USBC_UH1_PORTSC1_PE)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_PE.
#define BF_USBC_UH1_PORTSC1_PE(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_PE) & BM_USBC_UH1_PORTSC1_PE)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PE field to a new value.
#define BW_USBC_UH1_PORTSC1_PE(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_PE) | BF_USBC_UH1_PORTSC1_PE(v)))
#endif

/* --- Register HW_USBC_UH1_PORTSC1, field PEC[3] (RW)
 *
 * Port Enable/Disable Change-R/WC. 1=Port enabled/disabled status has changed. 0=No change. Default
 * = 0. In Host Mode: For the root hub, this bit is set to a one only when a port is disabled due to
 * disconnect on the port or due to the appropriate conditions existing at the EOF2 point (See
 * Chapter 11 of the USB Specification). Software clears this by writing a one to it. This field is
 * zero if Port Power( ) is zero. In Device mode: The device port is always enabled, so this bit is
 * always '0b'.
 */

#define BP_USBC_UH1_PORTSC1_PEC      (3)      //!< Bit position for USBC_UH1_PORTSC1_PEC.
#define BM_USBC_UH1_PORTSC1_PEC      (0x00000008)  //!< Bit mask for USBC_UH1_PORTSC1_PEC.

//! @brief Get value of USBC_UH1_PORTSC1_PEC from a register value.
#define BG_USBC_UH1_PORTSC1_PEC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_PEC) >> BP_USBC_UH1_PORTSC1_PEC)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_PEC.
#define BF_USBC_UH1_PORTSC1_PEC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_PEC) & BM_USBC_UH1_PORTSC1_PEC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PEC field to a new value.
#define BW_USBC_UH1_PORTSC1_PEC(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_PEC) | BF_USBC_UH1_PORTSC1_PEC(v)))
#endif

/* --- Register HW_USBC_UH1_PORTSC1, field OCA[4] (RO)
 *
 * Over-current Active-Read Only. Default 0. This bit will automatically transition from one to zero
 * when the over current condition is removed.
 *
 * Values:
 * 0 - This port does not have an over-current condition.
 * 1 - This port currently has an over-current condition
 */

#define BP_USBC_UH1_PORTSC1_OCA      (4)      //!< Bit position for USBC_UH1_PORTSC1_OCA.
#define BM_USBC_UH1_PORTSC1_OCA      (0x00000010)  //!< Bit mask for USBC_UH1_PORTSC1_OCA.

//! @brief Get value of USBC_UH1_PORTSC1_OCA from a register value.
#define BG_USBC_UH1_PORTSC1_OCA(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_OCA) >> BP_USBC_UH1_PORTSC1_OCA)


/* --- Register HW_USBC_UH1_PORTSC1, field OCC[5] (RW)
 *
 * Over-current Change-R/WC. Default=0. This bit is set '1b' by hardware when there is a change to
 * Over-current Active. Software can clear this bit by writing a one to this bit position.
 */

#define BP_USBC_UH1_PORTSC1_OCC      (5)      //!< Bit position for USBC_UH1_PORTSC1_OCC.
#define BM_USBC_UH1_PORTSC1_OCC      (0x00000020)  //!< Bit mask for USBC_UH1_PORTSC1_OCC.

//! @brief Get value of USBC_UH1_PORTSC1_OCC from a register value.
#define BG_USBC_UH1_PORTSC1_OCC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_OCC) >> BP_USBC_UH1_PORTSC1_OCC)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_OCC.
#define BF_USBC_UH1_PORTSC1_OCC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_OCC) & BM_USBC_UH1_PORTSC1_OCC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the OCC field to a new value.
#define BW_USBC_UH1_PORTSC1_OCC(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_OCC) | BF_USBC_UH1_PORTSC1_OCC(v)))
#endif

/* --- Register HW_USBC_UH1_PORTSC1, field FPR[6] (RW)
 *
 * Force Port Resume -Read/Write. 1= Resume detected/driven on port. 0=No resume (K-state)
 * detected/driven on port. Default = 0. In Host Mode: Software sets this bit to one to drive resume
 * signaling. The Host Controller sets this bit to one if a J-to-K transition is detected while the
 * port is in the Suspend state. When this bit transitions to a one because a J-to-K transition is
 * detected, the Port Change Detect bit in the USBSTS register is also set to one. This bit will
 * automatically change to zero after the resume sequence is complete. This behavior is different
 * from EHCI where the host controller driver is required to set this bit to a zero after the resume
 * duration is timed in the driver. Note that when the Host controller owns the port, the resume
 * sequence follows the defined sequence documented in the USB Specification Revision 2.0. The
 * resume signaling (Full-speed 'K') is driven on the port as long as this bit remains a one. This
 * bit will remain a one until the port has switched to the high-speed idle. Writing a zero has no
 * effect because the port controller will time the resume operation clear the bit the port control
 * state switches to HS or FS idle. This field is zero if Port Power( ) is zero in host mode. This
 * bit is not-EHCI compatible. In Device mode: After the device has been in Suspend State for 5ms or
 * more, software must set this bit to one to drive resume signaling before clearing. The Device
 * Controller will set this bit to one if a J-to-K transition is detected while the port is in the
 * Suspend state. The bit will be cleared when the device returns to normal operation. Also, when
 * this bit wil be cleared because a K-to-J transition detected, the Port Change Detect bit in the
 * USBSTS register is also set to one.
 */

#define BP_USBC_UH1_PORTSC1_FPR      (6)      //!< Bit position for USBC_UH1_PORTSC1_FPR.
#define BM_USBC_UH1_PORTSC1_FPR      (0x00000040)  //!< Bit mask for USBC_UH1_PORTSC1_FPR.

//! @brief Get value of USBC_UH1_PORTSC1_FPR from a register value.
#define BG_USBC_UH1_PORTSC1_FPR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_FPR) >> BP_USBC_UH1_PORTSC1_FPR)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_FPR.
#define BF_USBC_UH1_PORTSC1_FPR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_FPR) & BM_USBC_UH1_PORTSC1_FPR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the FPR field to a new value.
#define BW_USBC_UH1_PORTSC1_FPR(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_FPR) | BF_USBC_UH1_PORTSC1_FPR(v)))
#endif

/* --- Register HW_USBC_UH1_PORTSC1, field SUSP[7] (RW)
 *
 * Suspend - Read/Write or Read Only. Default = 0b. 1=Port in suspend state. 0=Port not in suspend
 * state. In Host Mode: Read/Write. Port Enabled Bit and Suspend bit of this register define the
 * port states as follows: Bits [Port Enabled, Suspend] Port State 0x Disable 10 Enable 11 Suspend
 * When in suspend state, downstream propagation of data is blocked on this port, except for port
 * reset. The blocking occurs at the end of the current transaction if a transaction was in progress
 * when this bit was written to 1. In the suspend state, the port is sensitive to resume detection.
 * Note that the bit status does not change until the port is suspended and that there may be a
 * delay in suspending a port if there is a transaction currently in progress on the The host
 * controller will unconditionally set this bit to zero when software sets the Force Port Resume bit
 * to zero. The host controller ignores a write of zero to this bit. If host software sets this bit
 * to a one when the port is not enabled (that is, Port enabled bit is a zero) the results are
 * undefined. This field is zero if Port Power( ) is zero in host mode. In Device Mode: Read Only.
 * In device mode this bit is a read only status bit.
 */

#define BP_USBC_UH1_PORTSC1_SUSP      (7)      //!< Bit position for USBC_UH1_PORTSC1_SUSP.
#define BM_USBC_UH1_PORTSC1_SUSP      (0x00000080)  //!< Bit mask for USBC_UH1_PORTSC1_SUSP.

//! @brief Get value of USBC_UH1_PORTSC1_SUSP from a register value.
#define BG_USBC_UH1_PORTSC1_SUSP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_SUSP) >> BP_USBC_UH1_PORTSC1_SUSP)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_SUSP.
#define BF_USBC_UH1_PORTSC1_SUSP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_SUSP) & BM_USBC_UH1_PORTSC1_SUSP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SUSP field to a new value.
#define BW_USBC_UH1_PORTSC1_SUSP(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_SUSP) | BF_USBC_UH1_PORTSC1_SUSP(v)))
#endif

/* --- Register HW_USBC_UH1_PORTSC1, field PR[8] (RW)
 *
 * Port Reset - Read/Write or Read Only. Default = 0b. In Host Mode: Read/Write. 1=Port is in Reset.
 * 0=Port is not in Reset. Default 0. When software writes a one to this bit the bus-reset sequence
 * as defined in the USB Specification Revision 2.0 is started. This bit will automatically change
 * to zero after the reset sequence is complete. This behavior is different from EHCI where the host
 * controller driver is required to set this bit to a zero after the reset duration is timed in the
 * driver. In Device Mode: This bit is a read only status bit. Device reset from the USB bus is also
 * indicated in the USBSTS register. This field is zero if Port Power( ) is zero.
 */

#define BP_USBC_UH1_PORTSC1_PR      (8)      //!< Bit position for USBC_UH1_PORTSC1_PR.
#define BM_USBC_UH1_PORTSC1_PR      (0x00000100)  //!< Bit mask for USBC_UH1_PORTSC1_PR.

//! @brief Get value of USBC_UH1_PORTSC1_PR from a register value.
#define BG_USBC_UH1_PORTSC1_PR(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_PR) >> BP_USBC_UH1_PORTSC1_PR)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_PR.
#define BF_USBC_UH1_PORTSC1_PR(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_PR) & BM_USBC_UH1_PORTSC1_PR)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PR field to a new value.
#define BW_USBC_UH1_PORTSC1_PR(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_PR) | BF_USBC_UH1_PORTSC1_PR(v)))
#endif

/* --- Register HW_USBC_UH1_PORTSC1, field HSP[9] (RO)
 *
 * High-Speed Port - Read Only. Default = 0b. When the bit is one, the host/device connected to the
 * port is in high-speed mode and if set to zero, the host/device connected to the port is not in a
 * high-speed mode. HSP is redundant with PSPD(bit 27, 26) but remained for compatibility.
 */

#define BP_USBC_UH1_PORTSC1_HSP      (9)      //!< Bit position for USBC_UH1_PORTSC1_HSP.
#define BM_USBC_UH1_PORTSC1_HSP      (0x00000200)  //!< Bit mask for USBC_UH1_PORTSC1_HSP.

//! @brief Get value of USBC_UH1_PORTSC1_HSP from a register value.
#define BG_USBC_UH1_PORTSC1_HSP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_HSP) >> BP_USBC_UH1_PORTSC1_HSP)

/* --- Register HW_USBC_UH1_PORTSC1, field LS[11:10] (RW)
 *
 * Line Status-Read Only. These bits reflect the current logical levels of the D+ (bit 11) and D-
 * (bit 10) signal lines. In host mode, the use of linestate by the host controller driver is not
 * necessary (unlike EHCI), because the port controller state machine and the port routing manage
 * the connection of LS and FS. In device mode, the use of linestate by the device controller driver
 * is not necessary. The encoding of the bits are: Bits [11:10] Meaning
 *
 * Values:
 * 00 - SE0
 * 01 - K-state
 * 10 - J-state
 * 11 - Undefined
 */

#define BP_USBC_UH1_PORTSC1_LS      (10)      //!< Bit position for USBC_UH1_PORTSC1_LS.
#define BM_USBC_UH1_PORTSC1_LS      (0x00000c00)  //!< Bit mask for USBC_UH1_PORTSC1_LS.

//! @brief Get value of USBC_UH1_PORTSC1_LS from a register value.
#define BG_USBC_UH1_PORTSC1_LS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_LS) >> BP_USBC_UH1_PORTSC1_LS)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_LS.
#define BF_USBC_UH1_PORTSC1_LS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_LS) & BM_USBC_UH1_PORTSC1_LS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the LS field to a new value.
#define BW_USBC_UH1_PORTSC1_LS(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_LS) | BF_USBC_UH1_PORTSC1_LS(v)))
#endif


/* --- Register HW_USBC_UH1_PORTSC1, field PP[12] (RW)
 *
 * Port Power (PP)-Read/Write or Read Only. The function of this bit depends on the value of the
 * Port Power Switching (PPC) field in the HCSPARAMS register. The behavior is as follows: PPC PP
 * Operation 0 1b Read Only - Host controller does not have port power control switches. Each port
 * is hard-wired to power. 1 1b/0b - Read/Write. Host/OTG controller requires port power control
 * switches. This bit represents the current setting of the switch (0=off, 1=on). When power is not
 * available on a port (that is, PP equals a 0), the port is non-functional and will not report
 * attaches, detaches, etc. When an over-current condition is detected on a powered port and PPC is
 * a one, the PP bit in each affected port may be transitional by the host controller driver from a
 * one to a zero (removing power from the port). This feature is implemented in all controller cores
 * (PPC = 1).
 */

#define BP_USBC_UH1_PORTSC1_PP      (12)      //!< Bit position for USBC_UH1_PORTSC1_PP.
#define BM_USBC_UH1_PORTSC1_PP      (0x00001000)  //!< Bit mask for USBC_UH1_PORTSC1_PP.

//! @brief Get value of USBC_UH1_PORTSC1_PP from a register value.
#define BG_USBC_UH1_PORTSC1_PP(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_PP) >> BP_USBC_UH1_PORTSC1_PP)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_PP.
#define BF_USBC_UH1_PORTSC1_PP(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_PP) & BM_USBC_UH1_PORTSC1_PP)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PP field to a new value.
#define BW_USBC_UH1_PORTSC1_PP(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_PP) | BF_USBC_UH1_PORTSC1_PP(v)))
#endif

/* --- Register HW_USBC_UH1_PORTSC1, field PO[13] (RW)
 *
 * Port Owner-Read/Write. Default = 0. This bit unconditionally goes to a 0 when the configured bit
 * in the CONFIGFLAG register makes a 0 to 1 transition. This bit unconditionally goes to 1 whenever
 * the Configured bit is zero System software uses this field to release ownership of the port to a
 * selected host controller (in the event that the attached device is not a high-speed device).
 * Software writes a one to this bit when the attached device is not a high-speed device. A one in
 * this bit means that an internal companion controller owns and controls the port. Port owner
 * handoff is not supported in all controller cores, therefore this bit will always be 0.
 */

#define BP_USBC_UH1_PORTSC1_PO      (13)      //!< Bit position for USBC_UH1_PORTSC1_PO.
#define BM_USBC_UH1_PORTSC1_PO      (0x00002000)  //!< Bit mask for USBC_UH1_PORTSC1_PO.

//! @brief Get value of USBC_UH1_PORTSC1_PO from a register value.
#define BG_USBC_UH1_PORTSC1_PO(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_PO) >> BP_USBC_UH1_PORTSC1_PO)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_PO.
#define BF_USBC_UH1_PORTSC1_PO(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_PO) & BM_USBC_UH1_PORTSC1_PO)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PO field to a new value.
#define BW_USBC_UH1_PORTSC1_PO(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_PO) | BF_USBC_UH1_PORTSC1_PO(v)))
#endif

/* --- Register HW_USBC_UH1_PORTSC1, field PIC[15:14] (RW)
 *
 * Port Indicator Control - Read/Write. Default = Ob. Writing to this field has no effect if the
 * P_INDICATOR bit in the HCSPARAMS register is a zero. Refer to the USB Specification Revision 2.0
 * for a description on how these bits are to be used. This field is zero if Port Power is zero. Bit
 * Value Meaning
 *
 * Values:
 * 00 - Port indicators are off
 * 01 - Amber
 * 10 - Green
 * 11 - Undefined
 */

#define BP_USBC_UH1_PORTSC1_PIC      (14)      //!< Bit position for USBC_UH1_PORTSC1_PIC.
#define BM_USBC_UH1_PORTSC1_PIC      (0x0000c000)  //!< Bit mask for USBC_UH1_PORTSC1_PIC.

//! @brief Get value of USBC_UH1_PORTSC1_PIC from a register value.
#define BG_USBC_UH1_PORTSC1_PIC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_PIC) >> BP_USBC_UH1_PORTSC1_PIC)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_PIC.
#define BF_USBC_UH1_PORTSC1_PIC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_PIC) & BM_USBC_UH1_PORTSC1_PIC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PIC field to a new value.
#define BW_USBC_UH1_PORTSC1_PIC(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_PIC) | BF_USBC_UH1_PORTSC1_PIC(v)))
#endif


/* --- Register HW_USBC_UH1_PORTSC1, field PTC[19:16] (RW)
 *
 * Port Test Control - Read/Write. Default = 0000b. Refer to for the operational model for using
 * these test modes and the USB Specification Revision 2.0, Chapter 7 for details on each test mode.
 * The FORCE_ENABLE_FS and FORCE ENABLE_LS are extensions to the test mode support specified in the
 * EHCI specification. Writing the PTC field to any of the FORCE_ENABLE_{HS/FS/LS} values will force
 * the port into the connected and enabled state at the selected speed. Writing the PTC field back
 * to TEST_MODE_DISABLE will allow the port state machines to progress normally from that point. Low
 * speed operations are not supported as a peripheral device. Any other value than zero indicates
 * that the port is operating in test mode. Value Specific Test
 *
 * Values:
 * 0000 - TEST_MODE_DISABLE
 * 0001 - J_STATE
 * 0010 - K_STATE
 * 0011 - SE0 (host) / NAK (device)
 * 0100 - Packet
 * 0101 - FORCE_ENABLE_HS
 * 0110 - FORCE_ENABLE_FS
 * 0111 - FORCE_ENABLE_LS
 * 1000-1111 - Reserved
 */

#define BP_USBC_UH1_PORTSC1_PTC      (16)      //!< Bit position for USBC_UH1_PORTSC1_PTC.
#define BM_USBC_UH1_PORTSC1_PTC      (0x000f0000)  //!< Bit mask for USBC_UH1_PORTSC1_PTC.

//! @brief Get value of USBC_UH1_PORTSC1_PTC from a register value.
#define BG_USBC_UH1_PORTSC1_PTC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_PTC) >> BP_USBC_UH1_PORTSC1_PTC)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_PTC.
#define BF_USBC_UH1_PORTSC1_PTC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_PTC) & BM_USBC_UH1_PORTSC1_PTC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PTC field to a new value.
#define BW_USBC_UH1_PORTSC1_PTC(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_PTC) | BF_USBC_UH1_PORTSC1_PTC(v)))
#endif


/* --- Register HW_USBC_UH1_PORTSC1, field WKCN[20] (RW)
 *
 * Wake on Connect Enable (WKCNNT_E) - Read/Write. Default=0b. Writing this bit to a one enables the
 * port to be sensitive to device connects as wake-up events. This field is zero if Port Power( ) is
 * zero or in device mode.
 */

#define BP_USBC_UH1_PORTSC1_WKCN      (20)      //!< Bit position for USBC_UH1_PORTSC1_WKCN.
#define BM_USBC_UH1_PORTSC1_WKCN      (0x00100000)  //!< Bit mask for USBC_UH1_PORTSC1_WKCN.

//! @brief Get value of USBC_UH1_PORTSC1_WKCN from a register value.
#define BG_USBC_UH1_PORTSC1_WKCN(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_WKCN) >> BP_USBC_UH1_PORTSC1_WKCN)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_WKCN.
#define BF_USBC_UH1_PORTSC1_WKCN(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_WKCN) & BM_USBC_UH1_PORTSC1_WKCN)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKCN field to a new value.
#define BW_USBC_UH1_PORTSC1_WKCN(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_WKCN) | BF_USBC_UH1_PORTSC1_WKCN(v)))
#endif

/* --- Register HW_USBC_UH1_PORTSC1, field WKDC[21] (RW)
 *
 * Wake on Disconnect Enable (WKDSCNNT_E) - Read/Write. Default=0b. Writing this bit to a one
 * enables the port to be sensitive to device disconnects as wake-up events. This field is zero if
 * Port Power( ) is zero or in device mode.
 */

#define BP_USBC_UH1_PORTSC1_WKDC      (21)      //!< Bit position for USBC_UH1_PORTSC1_WKDC.
#define BM_USBC_UH1_PORTSC1_WKDC      (0x00200000)  //!< Bit mask for USBC_UH1_PORTSC1_WKDC.

//! @brief Get value of USBC_UH1_PORTSC1_WKDC from a register value.
#define BG_USBC_UH1_PORTSC1_WKDC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_WKDC) >> BP_USBC_UH1_PORTSC1_WKDC)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_WKDC.
#define BF_USBC_UH1_PORTSC1_WKDC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_WKDC) & BM_USBC_UH1_PORTSC1_WKDC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKDC field to a new value.
#define BW_USBC_UH1_PORTSC1_WKDC(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_WKDC) | BF_USBC_UH1_PORTSC1_WKDC(v)))
#endif

/* --- Register HW_USBC_UH1_PORTSC1, field WKOC[22] (RW)
 *
 * Wake on Over-current Enable (WKOC_E) - Read/Write. Default = 0b. Writing this bit to a one
 * enables the port to be sensitive to over-current conditions as wake-up events. This field is zero
 * if Port Power( ) is zero.
 */

#define BP_USBC_UH1_PORTSC1_WKOC      (22)      //!< Bit position for USBC_UH1_PORTSC1_WKOC.
#define BM_USBC_UH1_PORTSC1_WKOC      (0x00400000)  //!< Bit mask for USBC_UH1_PORTSC1_WKOC.

//! @brief Get value of USBC_UH1_PORTSC1_WKOC from a register value.
#define BG_USBC_UH1_PORTSC1_WKOC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_WKOC) >> BP_USBC_UH1_PORTSC1_WKOC)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_WKOC.
#define BF_USBC_UH1_PORTSC1_WKOC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_WKOC) & BM_USBC_UH1_PORTSC1_WKOC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the WKOC field to a new value.
#define BW_USBC_UH1_PORTSC1_WKOC(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_WKOC) | BF_USBC_UH1_PORTSC1_WKOC(v)))
#endif

/* --- Register HW_USBC_UH1_PORTSC1, field PHCD[23] (RW)
 *
 * PHY Low Power Suspend - Clock Disable (PLPSCD) - Read/Write. Default = 0b. When this bit is set
 * to '1b', the PHY clock is disabled. Reading this bit will indicate the status of the PHY clock.
 * The PHY clock cannot be disabled if it is being used as the system clock. In device mode, The PHY
 * can be put into Low Power Suspend when the device is not running (USBCMD Run/Stop=0b) or the host
 * has signaled suspend (PORTSC1 SUSPEND=1b). PHY Low power suspend will be cleared automatically
 * when the host initials resume. Before forcing a resume from the device, the device controller
 * driver must clear this bit. In host mode, the PHY can be put into Low Power Suspend when the
 * downstream device has been put into suspend mode or when no downstream device is connected. Low
 * power suspend is completely under the control of software.
 *
 * Values:
 * 0 - Enable PHY clock
 * 1 - Disable PHY clock
 */

#define BP_USBC_UH1_PORTSC1_PHCD      (23)      //!< Bit position for USBC_UH1_PORTSC1_PHCD.
#define BM_USBC_UH1_PORTSC1_PHCD      (0x00800000)  //!< Bit mask for USBC_UH1_PORTSC1_PHCD.

//! @brief Get value of USBC_UH1_PORTSC1_PHCD from a register value.
#define BG_USBC_UH1_PORTSC1_PHCD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_PHCD) >> BP_USBC_UH1_PORTSC1_PHCD)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_PHCD.
#define BF_USBC_UH1_PORTSC1_PHCD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_PHCD) & BM_USBC_UH1_PORTSC1_PHCD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PHCD field to a new value.
#define BW_USBC_UH1_PORTSC1_PHCD(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_PHCD) | BF_USBC_UH1_PORTSC1_PHCD(v)))
#endif


/* --- Register HW_USBC_UH1_PORTSC1, field PFSC[24] (RW)
 *
 * Port Force Full Speed Connect - Read/Write. Default = 0b. When this bit is set to '1b', the port
 * will be forced to only connect at Full Speed, It disables the chirp sequence that allows the port
 * to identify itself as High Speed.
 *
 * Values:
 * 0 - Normal operation
 * 1 - Forced to full speed
 */

#define BP_USBC_UH1_PORTSC1_PFSC      (24)      //!< Bit position for USBC_UH1_PORTSC1_PFSC.
#define BM_USBC_UH1_PORTSC1_PFSC      (0x01000000)  //!< Bit mask for USBC_UH1_PORTSC1_PFSC.

//! @brief Get value of USBC_UH1_PORTSC1_PFSC from a register value.
#define BG_USBC_UH1_PORTSC1_PFSC(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_PFSC) >> BP_USBC_UH1_PORTSC1_PFSC)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_PFSC.
#define BF_USBC_UH1_PORTSC1_PFSC(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_PFSC) & BM_USBC_UH1_PORTSC1_PFSC)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PFSC field to a new value.
#define BW_USBC_UH1_PORTSC1_PFSC(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_PFSC) | BF_USBC_UH1_PORTSC1_PFSC(v)))
#endif


/* --- Register HW_USBC_UH1_PORTSC1, field PTS[25] (RW)
 *
 * See description at bits 31-30
 */

#define BP_USBC_UH1_PORTSC1_PTS      (25)      //!< Bit position for USBC_UH1_PORTSC1_PTS.
#define BM_USBC_UH1_PORTSC1_PTS      (0x02000000)  //!< Bit mask for USBC_UH1_PORTSC1_PTS.

//! @brief Get value of USBC_UH1_PORTSC1_PTS from a register value.
#define BG_USBC_UH1_PORTSC1_PTS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_PTS) >> BP_USBC_UH1_PORTSC1_PTS)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_PTS.
#define BF_USBC_UH1_PORTSC1_PTS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_PTS) & BM_USBC_UH1_PORTSC1_PTS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PTS field to a new value.
#define BW_USBC_UH1_PORTSC1_PTS(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_PTS) | BF_USBC_UH1_PORTSC1_PTS(v)))
#endif

/* --- Register HW_USBC_UH1_PORTSC1, field PSPD[27:26] (RW)
 *
 * Port Speed - Read Only. This register field indicates the speed at which the port is operating.
 *
 * Values:
 * 00 - Full Speed
 * 01 - Low Speed
 * 10 - High Speed
 * 11 - Undefined
 */

#define BP_USBC_UH1_PORTSC1_PSPD      (26)      //!< Bit position for USBC_UH1_PORTSC1_PSPD.
#define BM_USBC_UH1_PORTSC1_PSPD      (0x0c000000)  //!< Bit mask for USBC_UH1_PORTSC1_PSPD.

//! @brief Get value of USBC_UH1_PORTSC1_PSPD from a register value.
#define BG_USBC_UH1_PORTSC1_PSPD(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_PSPD) >> BP_USBC_UH1_PORTSC1_PSPD)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_PSPD.
#define BF_USBC_UH1_PORTSC1_PSPD(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_PSPD) & BM_USBC_UH1_PORTSC1_PSPD)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PSPD field to a new value.
#define BW_USBC_UH1_PORTSC1_PSPD(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_PSPD) | BF_USBC_UH1_PORTSC1_PSPD(v)))
#endif


/* --- Register HW_USBC_UH1_PORTSC1, field PTW[28] (RW)
 *
 * Parallel Transceiver Width This bit has no effect if serial interface engine is used. For
 * OTG1/OTG2/Host1 core, it is Read-Only. Reset value is '1b'.
 *
 * Values:
 * 0 - Select the 8-bit UTMI interface [60MHz]
 * 1 - Select the 16-bit UTMI interface [30MHz]
 */

#define BP_USBC_UH1_PORTSC1_PTW      (28)      //!< Bit position for USBC_UH1_PORTSC1_PTW.
#define BM_USBC_UH1_PORTSC1_PTW      (0x10000000)  //!< Bit mask for USBC_UH1_PORTSC1_PTW.

//! @brief Get value of USBC_UH1_PORTSC1_PTW from a register value.
#define BG_USBC_UH1_PORTSC1_PTW(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_PTW) >> BP_USBC_UH1_PORTSC1_PTW)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_PTW.
#define BF_USBC_UH1_PORTSC1_PTW(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_PTW) & BM_USBC_UH1_PORTSC1_PTW)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PTW field to a new value.
#define BW_USBC_UH1_PORTSC1_PTW(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_PTW) | BF_USBC_UH1_PORTSC1_PTW(v)))
#endif


/* --- Register HW_USBC_UH1_PORTSC1, field STS[29] (RW)
 *
 * Serial Transceiver Select - Read Only Serial Transceiver Select 1 Serial Interface Engine is
 * selected 0 Parallel Interface signals is selected Serial Interface Engine can be used in
 * combination with UTMI+/ULPI physical interface to provide FS/LS signaling instead of the parallel
 * interface signals. When this bit is set '1b', serial interface engine will be used instead of
 * parallel interface signals. This bit has no effect unless PTS bits is set to select UTMI+/ULPI
 * interface. The Serial/USB1.1 PHY/IC-USB will use the serial interface engine for FS/LS signaling
 * regardless of this bit value.
 */

#define BP_USBC_UH1_PORTSC1_STS      (29)      //!< Bit position for USBC_UH1_PORTSC1_STS.
#define BM_USBC_UH1_PORTSC1_STS      (0x20000000)  //!< Bit mask for USBC_UH1_PORTSC1_STS.

//! @brief Get value of USBC_UH1_PORTSC1_STS from a register value.
#define BG_USBC_UH1_PORTSC1_STS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_STS) >> BP_USBC_UH1_PORTSC1_STS)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_STS.
#define BF_USBC_UH1_PORTSC1_STS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_STS) & BM_USBC_UH1_PORTSC1_STS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the STS field to a new value.
#define BW_USBC_UH1_PORTSC1_STS(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_STS) | BF_USBC_UH1_PORTSC1_STS(v)))
#endif

/* --- Register HW_USBC_UH1_PORTSC1, field PTS1[31:30] (RW)
 *
 * Bit field {bit25, bit31, bit30}: "000b" UTMI/UTMI+ "001b" Reserved "010b" ULPI "011b" Serial/USB
 * 1.1 PHY/IC-USB (FS Only) "100b" HSIC All USB port interface modes are listed in this field
 * description, but not all are supported. For detail feature of each controller core, please see .
 * The behaviour is unknown when unsupported interface mode is selected.
 */

#define BP_USBC_UH1_PORTSC1_PTS1      (30)      //!< Bit position for USBC_UH1_PORTSC1_PTS1.
#define BM_USBC_UH1_PORTSC1_PTS1      (0xc0000000)  //!< Bit mask for USBC_UH1_PORTSC1_PTS1.

//! @brief Get value of USBC_UH1_PORTSC1_PTS1 from a register value.
#define BG_USBC_UH1_PORTSC1_PTS1(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_PORTSC1_PTS1) >> BP_USBC_UH1_PORTSC1_PTS1)

//! @brief Format value for bitfield USBC_UH1_PORTSC1_PTS1.
#define BF_USBC_UH1_PORTSC1_PTS1(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_PORTSC1_PTS1) & BM_USBC_UH1_PORTSC1_PTS1)

#ifndef __LANGUAGE_ASM__
//! @brief Set the PTS1 field to a new value.
#define BW_USBC_UH1_PORTSC1_PTS1(v)   (HW_USBC_UH1_PORTSC1_WR((HW_USBC_UH1_PORTSC1_RD() & ~BM_USBC_UH1_PORTSC1_PTS1) | BF_USBC_UH1_PORTSC1_PTS1(v)))
#endif

//-------------------------------------------------------------------------------------------
// HW_USBC_UH1_USBMODE - USB Device Mode
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_USBC_UH1_USBMODE - USB Device Mode (RW)
 *
 * Reset value: 0x00000000
 *

 */
typedef union _hw_usbc_uh1_usbmode
{
    reg32_t U;
    struct _hw_usbc_uh1_usbmode_bitfields
    {
        unsigned CM : 2; //!< [1:0] Controller Mode - R/WO.
        unsigned ES : 1; //!< [2] Endian Select - Read/Write.
        unsigned SLOM : 1; //!< [3] Setup Lockout Mode.
        unsigned SDIS : 1; //!< [4] Stream Disable Mode.
        unsigned RESERVED0 : 11; //!< [15:5] Reserved.
        unsigned RESERVED1 : 16; //!< [31:16] Reserved
    } B;
} hw_usbc_uh1_usbmode_t;
#endif

/*
 * constants & macros for entire USBC_UH1_USBMODE register
 */
#define HW_USBC_UH1_USBMODE_ADDR      (REGS_USBC_BASE + 0x5a8)

#ifndef __LANGUAGE_ASM__
#define HW_USBC_UH1_USBMODE           (*(volatile hw_usbc_uh1_usbmode_t *) HW_USBC_UH1_USBMODE_ADDR)
#define HW_USBC_UH1_USBMODE_RD()      (HW_USBC_UH1_USBMODE.U)
#define HW_USBC_UH1_USBMODE_WR(v)     (HW_USBC_UH1_USBMODE.U = (v))
#define HW_USBC_UH1_USBMODE_SET(v)    (HW_USBC_UH1_USBMODE_WR(HW_USBC_UH1_USBMODE_RD() |  (v)))
#define HW_USBC_UH1_USBMODE_CLR(v)    (HW_USBC_UH1_USBMODE_WR(HW_USBC_UH1_USBMODE_RD() & ~(v)))
#define HW_USBC_UH1_USBMODE_TOG(v)    (HW_USBC_UH1_USBMODE_WR(HW_USBC_UH1_USBMODE_RD() ^  (v)))
#endif

/*
 * constants & macros for individual USBC_UH1_USBMODE bitfields
 */

/* --- Register HW_USBC_UH1_USBMODE, field CM[1:0] (RW)
 *
 * Controller Mode - R/WO. Controller mode is defaulted to the proper mode for host only and device
 * only implementations. For those designs that contain both host & device capability, the
 * controller defaults to an idle state and needs to be initialized to the desired operating mode
 * after reset. For combination host/device controllers, this register can only be written once
 * after reset. If it is necessary to switch modes, software must reset the controller by writing to
 * the RESET bit in the USBCMD register before reprogramming this register. For OTG controller core,
 * reset value is '00b'. For Host-only controller core, reset value is '11b'.
 *
 * Values:
 * 00 - Idle [Default for combination host/device]
 * 01 - Reserved
 * 10 - Device Controller [Default for device only controller]
 * 11 - Host Controller [Default for host only controller]
 */

#define BP_USBC_UH1_USBMODE_CM      (0)      //!< Bit position for USBC_UH1_USBMODE_CM.
#define BM_USBC_UH1_USBMODE_CM      (0x00000003)  //!< Bit mask for USBC_UH1_USBMODE_CM.

//! @brief Get value of USBC_UH1_USBMODE_CM from a register value.
#define BG_USBC_UH1_USBMODE_CM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBMODE_CM) >> BP_USBC_UH1_USBMODE_CM)

//! @brief Format value for bitfield USBC_UH1_USBMODE_CM.
#define BF_USBC_UH1_USBMODE_CM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBMODE_CM) & BM_USBC_UH1_USBMODE_CM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the CM field to a new value.
#define BW_USBC_UH1_USBMODE_CM(v)   (HW_USBC_UH1_USBMODE_WR((HW_USBC_UH1_USBMODE_RD() & ~BM_USBC_UH1_USBMODE_CM) | BF_USBC_UH1_USBMODE_CM(v)))
#endif


/* --- Register HW_USBC_UH1_USBMODE, field ES[2] (RW)
 *
 * Endian Select - Read/Write. This bit can change the byte alignment of the transfer buffers to
 * match the host microprocessor. The bit fields in the microprocessor interface and the data
 * structures are unaffected by the value of this bit because they are based upon the 32-bit word.
 * Bit Meaning
 *
 * Values:
 * 0 - Little Endian [Default]
 * 1 - Big Endian
 */

#define BP_USBC_UH1_USBMODE_ES      (2)      //!< Bit position for USBC_UH1_USBMODE_ES.
#define BM_USBC_UH1_USBMODE_ES      (0x00000004)  //!< Bit mask for USBC_UH1_USBMODE_ES.

//! @brief Get value of USBC_UH1_USBMODE_ES from a register value.
#define BG_USBC_UH1_USBMODE_ES(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBMODE_ES) >> BP_USBC_UH1_USBMODE_ES)

//! @brief Format value for bitfield USBC_UH1_USBMODE_ES.
#define BF_USBC_UH1_USBMODE_ES(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBMODE_ES) & BM_USBC_UH1_USBMODE_ES)

#ifndef __LANGUAGE_ASM__
//! @brief Set the ES field to a new value.
#define BW_USBC_UH1_USBMODE_ES(v)   (HW_USBC_UH1_USBMODE_WR((HW_USBC_UH1_USBMODE_RD() & ~BM_USBC_UH1_USBMODE_ES) | BF_USBC_UH1_USBMODE_ES(v)))
#endif


/* --- Register HW_USBC_UH1_USBMODE, field SLOM[3] (RW)
 *
 * Setup Lockout Mode. In device mode, this bit controls behavior of the setup lock mechanism. See .
 *
 * Values:
 * 0 - Setup Lockouts On (default);
 * 1 - Setup Lockouts Off (DCD requires use of Setup Data Buffer Tripwire in .
 */

#define BP_USBC_UH1_USBMODE_SLOM      (3)      //!< Bit position for USBC_UH1_USBMODE_SLOM.
#define BM_USBC_UH1_USBMODE_SLOM      (0x00000008)  //!< Bit mask for USBC_UH1_USBMODE_SLOM.

//! @brief Get value of USBC_UH1_USBMODE_SLOM from a register value.
#define BG_USBC_UH1_USBMODE_SLOM(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBMODE_SLOM) >> BP_USBC_UH1_USBMODE_SLOM)

//! @brief Format value for bitfield USBC_UH1_USBMODE_SLOM.
#define BF_USBC_UH1_USBMODE_SLOM(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBMODE_SLOM) & BM_USBC_UH1_USBMODE_SLOM)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SLOM field to a new value.
#define BW_USBC_UH1_USBMODE_SLOM(v)   (HW_USBC_UH1_USBMODE_WR((HW_USBC_UH1_USBMODE_RD() & ~BM_USBC_UH1_USBMODE_SLOM) | BF_USBC_UH1_USBMODE_SLOM(v)))
#endif


/* --- Register HW_USBC_UH1_USBMODE, field SDIS[4] (RW)
 *
 * Stream Disable Mode. (0 - Inactive [default]; 1 - Active) Device Mode: Setting to a '1' disables
 * double priming on both RX and TX for low bandwidth systems. This mode ensures that when the RX
 * and TX buffers are sufficient to contain an entire packet that the standard double buffering
 * scheme is disabled to prevent overruns/underruns in bandwidth limited systems. Note: In High
 * Speed Mode, all packets received are responded to with a NYET handshake when stream disable is
 * active. Host Mode: Setting to a '1' ensures that overruns/underruns of the latency FIFO are
 * eliminated for low bandwidth systems where the RX and TX buffers are sufficient to contain the
 * entire packet. Enabling stream disable also has the effect of ensuring the TX latency is filled
 * to capacity before the packet is launched onto the USB. Time duration to pre-fill the FIFO
 * becomes significant when stream disable is active. See and TXTTFILLTUNING [MPH Only] to
 * characterize the adjustments needed for the scheduler when using this feature. The use of this
 * feature substantially limits of the overall USB performance that can be achieved.
 */

#define BP_USBC_UH1_USBMODE_SDIS      (4)      //!< Bit position for USBC_UH1_USBMODE_SDIS.
#define BM_USBC_UH1_USBMODE_SDIS      (0x00000010)  //!< Bit mask for USBC_UH1_USBMODE_SDIS.

//! @brief Get value of USBC_UH1_USBMODE_SDIS from a register value.
#define BG_USBC_UH1_USBMODE_SDIS(r)   ((__REG_VALUE_TYPE((r), reg32_t) & BM_USBC_UH1_USBMODE_SDIS) >> BP_USBC_UH1_USBMODE_SDIS)

//! @brief Format value for bitfield USBC_UH1_USBMODE_SDIS.
#define BF_USBC_UH1_USBMODE_SDIS(v)   ((__REG_VALUE_TYPE((v), reg32_t) << BP_USBC_UH1_USBMODE_SDIS) & BM_USBC_UH1_USBMODE_SDIS)

#ifndef __LANGUAGE_ASM__
//! @brief Set the SDIS field to a new value.
#define BW_USBC_UH1_USBMODE_SDIS(v)   (HW_USBC_UH1_USBMODE_WR((HW_USBC_UH1_USBMODE_RD() & ~BM_USBC_UH1_USBMODE_SDIS) | BF_USBC_UH1_USBMODE_SDIS(v)))
#endif


/*!
 * @brief All USBC module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_usbc
{
    volatile hw_usbc_uog1_id_t UOG1_ID; //!< Identification register
    volatile hw_usbc_uog1_hwgeneral_t UOG1_HWGENERAL; //!< Hardware General
    volatile hw_usbc_uog1_hwhost_t UOG1_HWHOST; //!< Host Hardware Parameters
    volatile hw_usbc_uog1_hwdevice_t UOG1_HWDEVICE; //!< Device Hardware Parameters
    volatile hw_usbc_uog1_hwtxbuf_t UOG1_HWTXBUF; //!< TX Buffer Hardware Parameters
    volatile hw_usbc_uog1_hwrxbuf_t UOG1_HWRXBUF; //!< RX Buffer Hardware Parameters
    reg32_t _reserved0[26];
    volatile hw_usbc_uog1_gptimer0ld_t UOG1_GPTIMER0LD; //!< General Purpose Timer #0 Load
    volatile hw_usbc_uog1_gptimer0ctrl_t UOG1_GPTIMER0CTRL; //!< General Purpose Timer #0 Controller
    volatile hw_usbc_uog1_gptimer1ld_t UOG1_GPTIMER1LD; //!< General Purpose Timer #1 Load
    volatile hw_usbc_uog1_gptimer1ctrl_t UOG1_GPTIMER1CTRL; //!< General Purpose Timer #1 Controller
    volatile hw_usbc_uog1_sbuscfg_t UOG1_SBUSCFG; //!< System Bus Config
    reg32_t _reserved1[27];
    volatile hw_usbc_uog1_caplength_t UOG1_CAPLENGTH; //!< Capability Registers Length
    reg8_t _reserved2;
    volatile hw_usbc_uog1_hciversion_t UOG1_HCIVERSION; //!< Host Controller Interface Version
    volatile hw_usbc_uog1_hcsparams_t UOG1_HCSPARAMS; //!< Host Controller Structural Parameters
    volatile hw_usbc_uog1_hccparams_t UOG1_HCCPARAMS; //!< Host Controller Capability Parameters
    reg32_t _reserved3[5];
    volatile hw_usbc_uog1_dciversion_t UOG1_DCIVERSION; //!< Device Controller Interface Version
    reg16_t _reserved4;
    volatile hw_usbc_uog1_dccparams_t UOG1_DCCPARAMS; //!< Device Controller Capability Parameters
    reg32_t _reserved5[6];
    volatile hw_usbc_uog1_usbcmd_t UOG1_USBCMD; //!< USB Command Register
    volatile hw_usbc_uog1_usbsts_t UOG1_USBSTS; //!< USB Status Register
    volatile hw_usbc_uog1_usbintr_t UOG1_USBINTR; //!< Interrupt Enable Register
    volatile hw_usbc_uog1_frindex_t UOG1_FRINDEX; //!< USB Frame Index
    reg32_t _reserved6;
    volatile hw_usbc_uog1_periodiclistbase_t UOG1_PERIODICLISTBASE; //!< Frame List Base Address
    volatile hw_usbc_uog1_asynclistaddr_t UOG1_ASYNCLISTADDR; //!< Next Asynch. Address
    reg32_t _reserved7;
    volatile hw_usbc_uog1_burstsize_t UOG1_BURSTSIZE; //!< Programmable Burst Size
    volatile hw_usbc_uog1_txfilltuning_t UOG1_TXFILLTUNING; //!< TX FIFO Fill Tuning
    reg32_t _reserved8[4];
    volatile hw_usbc_uog1_endptnak_t UOG1_ENDPTNAK; //!< Endpoint NAK
    volatile hw_usbc_uog1_endptnaken_t UOG1_ENDPTNAKEN; //!< Endpoint NAK Enable
    volatile hw_usbc_uog1_configflag_t UOG1_CONFIGFLAG; //!< Configure Flag Register
    volatile hw_usbc_uog1_portsc1_t UOG1_PORTSC1; //!< Port Status & Control
    reg32_t _reserved9[7];
    volatile hw_usbc_uog1_otgsc_t UOG1_OTGSC; //!< On-The-Go Status & control
    volatile hw_usbc_uog1_usbmode_t UOG1_USBMODE; //!< USB Device Mode
    volatile hw_usbc_uog1_endptsetupstat_t UOG1_ENDPTSETUPSTAT; //!< Endpoint Setup Status
    volatile hw_usbc_uog1_endptprime_t UOG1_ENDPTPRIME; //!< Endpoint Prime
    volatile hw_usbc_uog1_endptflush_t UOG1_ENDPTFLUSH; //!< Endpoint Flush
    volatile hw_usbc_uog1_endptstat_t UOG1_ENDPTSTAT; //!< Endpoint Status
    volatile hw_usbc_uog1_endptcomplete_t UOG1_ENDPTCOMPLETE; //!< Endpoint Complete
    volatile hw_usbc_uog1_endptctrl0_t UOG1_ENDPTCTRL0; //!< Endpoint Control0
    volatile hw_usbc_uog1_endptctrl1_t UOG1_ENDPTCTRL1; //!< Endpoint Control 1
    volatile hw_usbc_uog1_endptctrl2_t UOG1_ENDPTCTRL2; //!< Endpoint Control 2
    volatile hw_usbc_uog1_endptctrl3_t UOG1_ENDPTCTRL3; //!< Endpoint Control 3
    volatile hw_usbc_uog1_endptctrl4_t UOG1_ENDPTCTRL4; //!< Endpoint Control 4
    volatile hw_usbc_uog1_endptctrl5_t UOG1_ENDPTCTRL5; //!< Endpoint Control 5
    volatile hw_usbc_uog1_endptctrl6_t UOG1_ENDPTCTRL6; //!< Endpoint Control 6
    volatile hw_usbc_uog1_endptctrl7_t UOG1_ENDPTCTRL7; //!< Endpoint Control 7
    reg32_t _reserved10[8];
    volatile hw_usbc_uog2_id_t UOG2_ID; //!< Identification register
    volatile hw_usbc_uog2_hwgeneral_t UOG2_HWGENERAL; //!< Hardware General
    volatile hw_usbc_uog2_hwhost_t UOG2_HWHOST; //!< Host Hardware Parameters
    volatile hw_usbc_uog2_hwdevice_t UOG2_HWDEVICE; //!< Device Hardware Parameters
    volatile hw_usbc_uog2_hwtxbuf_t UOG2_HWTXBUF; //!< TX Buffer Hardware Parameters
    volatile hw_usbc_uog2_hwrxbuf_t UOG2_HWRXBUF; //!< RX Buffer Hardware Parameters
    reg32_t _reserved11[26];
    volatile hw_usbc_uog2_gptimer0ld_t UOG2_GPTIMER0LD; //!< General Purpose Timer #0 Load
    volatile hw_usbc_uog2_gptimer0ctrl_t UOG2_GPTIMER0CTRL; //!< General Purpose Timer #0 Controller
    volatile hw_usbc_uog2_gptimer1ld_t UOG2_GPTIMER1LD; //!< General Purpose Timer #1 Load
    volatile hw_usbc_uog2_gptimer1ctrl_t UOG2_GPTIMER1CTRL; //!< General Purpose Timer #1 Controller
    volatile hw_usbc_uog2_sbuscfg_t UOG2_SBUSCFG; //!< System Bus Config
    reg32_t _reserved12[27];
    volatile hw_usbc_uog2_caplength_t UOG2_CAPLENGTH; //!< Capability Registers Length
    reg8_t _reserved13;
    volatile hw_usbc_uog2_hciversion_t UOG2_HCIVERSION; //!< Host Controller Interface Version
    volatile hw_usbc_uog2_hcsparams_t UOG2_HCSPARAMS; //!< Host Controller Structural Parameters
    volatile hw_usbc_uog2_hccparams_t UOG2_HCCPARAMS; //!< Host Controller Capability Parameters
    reg32_t _reserved14[5];
    volatile hw_usbc_uog2_dciversion_t UOG2_DCIVERSION; //!< Device Controller Interface Version
    reg16_t _reserved15;
    volatile hw_usbc_uog2_dccparams_t UOG2_DCCPARAMS; //!< Device Controller Capability Parameters
    reg32_t _reserved16[6];
    volatile hw_usbc_uog2_usbcmd_t UOG2_USBCMD; //!< USB Command Register
    volatile hw_usbc_uog2_usbsts_t UOG2_USBSTS; //!< USB Status Register
    volatile hw_usbc_uog2_usbintr_t UOG2_USBINTR; //!< Interrupt Enable Register
    volatile hw_usbc_uog2_frindex_t UOG2_FRINDEX; //!< USB Frame Index
    reg32_t _reserved17;
    volatile hw_usbc_uog2_periodiclistbase_t UOG2_PERIODICLISTBASE; //!< Frame List Base Address
    volatile hw_usbc_uog2_asynclistaddr_t UOG2_ASYNCLISTADDR; //!< Next Asynch. Address
    reg32_t _reserved18;
    volatile hw_usbc_uog2_burstsize_t UOG2_BURSTSIZE; //!< Programmable Burst Size
    volatile hw_usbc_uog2_txfilltuning_t UOG2_TXFILLTUNING; //!< TX FIFO Fill Tuning
    reg32_t _reserved19[4];
    volatile hw_usbc_uog2_endptnak_t UOG2_ENDPTNAK; //!< Endpoint NAK
    volatile hw_usbc_uog2_endptnaken_t UOG2_ENDPTNAKEN; //!< Endpoint NAK Enable
    volatile hw_usbc_uog2_configflag_t UOG2_CONFIGFLAG; //!< Configure Flag Register
    volatile hw_usbc_uog2_portsc1_t UOG2_PORTSC1; //!< Port Status & Control
    reg32_t _reserved20[7];
    volatile hw_usbc_uog2_otgsc_t UOG2_OTGSC; //!< On-The-Go Status & control
    volatile hw_usbc_uog2_usbmode_t UOG2_USBMODE; //!< USB Device Mode
    volatile hw_usbc_uog2_endptsetupstat_t UOG2_ENDPTSETUPSTAT; //!< Endpoint Setup Status
    volatile hw_usbc_uog2_endptprime_t UOG2_ENDPTPRIME; //!< Endpoint Prime
    volatile hw_usbc_uog2_endptflush_t UOG2_ENDPTFLUSH; //!< Endpoint Flush
    volatile hw_usbc_uog2_endptstat_t UOG2_ENDPTSTAT; //!< Endpoint Status
    volatile hw_usbc_uog2_endptcomplete_t UOG2_ENDPTCOMPLETE; //!< Endpoint Complete
    volatile hw_usbc_uog2_endptctrl0_t UOG2_ENDPTCTRL0; //!< Endpoint Control0
    volatile hw_usbc_uog2_endptctrl1_t UOG2_ENDPTCTRL1; //!< Endpoint Control 1
    volatile hw_usbc_uog2_endptctrl2_t UOG2_ENDPTCTRL2; //!< Endpoint Control 2
    volatile hw_usbc_uog2_endptctrl3_t UOG2_ENDPTCTRL3; //!< Endpoint Control 3
    volatile hw_usbc_uog2_endptctrl4_t UOG2_ENDPTCTRL4; //!< Endpoint Control 4
    volatile hw_usbc_uog2_endptctrl5_t UOG2_ENDPTCTRL5; //!< Endpoint Control 5
    volatile hw_usbc_uog2_endptctrl6_t UOG2_ENDPTCTRL6; //!< Endpoint Control 6
    volatile hw_usbc_uog2_endptctrl7_t UOG2_ENDPTCTRL7; //!< Endpoint Control 7
    reg32_t _reserved21[8];
    volatile hw_usbc_uh1_id_t UH1_ID; //!< Identification register
    volatile hw_usbc_uh1_hwgeneral_t UH1_HWGENERAL; //!< Hardware General
    volatile hw_usbc_uh1_hwhost_t UH1_HWHOST; //!< Host Hardware Parameters
    reg32_t _reserved22;
    volatile hw_usbc_uh1_hwtxbuf_t UH1_HWTXBUF; //!< TX Buffer Hardware Parameters
    volatile hw_usbc_uh1_hwrxbuf_t UH1_HWRXBUF; //!< RX Buffer Hardware Parameters
    reg32_t _reserved23[26];
    volatile hw_usbc_uh1_gptimer0ld_t UH1_GPTIMER0LD; //!< General Purpose Timer #0 Load
    volatile hw_usbc_uh1_gptimer0ctrl_t UH1_GPTIMER0CTRL; //!< General Purpose Timer #0 Controller
    volatile hw_usbc_uh1_gptimer1ld_t UH1_GPTIMER1LD; //!< General Purpose Timer #1 Load
    volatile hw_usbc_uh1_gptimer1ctrl_t UH1_GPTIMER1CTRL; //!< General Purpose Timer #1 Controller
    volatile hw_usbc_uh1_sbuscfg_t UH1_SBUSCFG; //!< System Bus Config
    reg32_t _reserved24[27];
    volatile hw_usbc_uh1_caplength_t UH1_CAPLENGTH; //!< Capability Registers Length
    reg8_t _reserved25;
    volatile hw_usbc_uh1_hciversion_t UH1_HCIVERSION; //!< Host Controller Interface Version
    volatile hw_usbc_uh1_hcsparams_t UH1_HCSPARAMS; //!< Host Controller Structural Parameters
    volatile hw_usbc_uh1_hccparams_t UH1_HCCPARAMS; //!< Host Controller Capability Parameters
    reg32_t _reserved26[13];
    volatile hw_usbc_uh1_usbcmd_t UH1_USBCMD; //!< USB Command Register
    volatile hw_usbc_uh1_usbsts_t UH1_USBSTS; //!< USB Status Register
    volatile hw_usbc_uh1_usbintr_t UH1_USBINTR; //!< Interrupt Enable Register
    volatile hw_usbc_uh1_frindex_t UH1_FRINDEX; //!< USB Frame Index
    reg32_t _reserved27;
    volatile hw_usbc_uh1_periodiclistbase_t UH1_PERIODICLISTBASE; //!< Frame List Base Address
    volatile hw_usbc_uh1_asynclistaddr_t UH1_ASYNCLISTADDR; //!< Next Asynch. Address
    reg32_t _reserved28;
    volatile hw_usbc_uh1_burstsize_t UH1_BURSTSIZE; //!< Programmable Burst Size
    volatile hw_usbc_uh1_txfilltuning_t UH1_TXFILLTUNING; //!< TX FIFO Fill Tuning
    reg32_t _reserved29[6];
    volatile hw_usbc_uh1_configflag_t UH1_CONFIGFLAG; //!< Configure Flag Register
    volatile hw_usbc_uh1_portsc1_t UH1_PORTSC1; //!< Port Status & Control
    reg32_t _reserved30[8];
    volatile hw_usbc_uh1_usbmode_t UH1_USBMODE; //!< USB Device Mode
} hw_usbc_t;
#pragma pack()

//! @brief Macro to access all USBC registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_USBC(0)</code>.
#define HW_USBC     (*(volatile hw_usbc_t *) REGS_USBC_BASE)

#endif


#endif // __HW_USBC_REGISTERS_H__
