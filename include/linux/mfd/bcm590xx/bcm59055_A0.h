/*****************************************************************************
*  Copyright 2001 - 2008 Broadcom Corporation.  All rights reserved.
*
*  Unless you and Broadcom execute a separate written software license
*  agreement governing use of this software, this software is licensed to you
*  under the terms of the GNU General Public License version 2, available at
*  http://www.gnu.org/licenses/old-license/gpl-2.0.html (the "GPL").
*
*  Notwithstanding the above, under no circumstances may you combine this
*  software in any way with any other Broadcom software provided under a
*  license other than the GPL, without Broadcom's express prior written
*  consent.
*
*****************************************************************************/

#ifndef __LINUX_MFD_BCM59055_A0_H
#define __LINUX_MFD_BCM59055_A0_H

#include <linux/mfd/bcm590xx/pmic.h>

/* HOSTCTRL registers */
#define BCM59055_REG_HOSTCTRL1		\
	BCM590XX_REG_ENCODE(0x01, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_HOSTCTRL2		\
	BCM590XX_REG_ENCODE(0x02, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_HOSTCTRL3		\
	BCM590XX_REG_ENCODE(0x03, BCM590XX_SLAVE1_I2C_ADDRESS)


/* PONKEY Registers */
#define BCM59055_REG_PONKEYCTRL1		\
	BCM590XX_REG_ENCODE(0x0C, BCM590XX_SLAVE1_I2C_ADDRESS)
/* Interrupt register addresses. */
#define BCM59055_REG_INT1			\
	BCM590XX_REG_ENCODE(0x30, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT2			\
	BCM590XX_REG_ENCODE(0x31, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT3			\
	BCM590XX_REG_ENCODE(0x32, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT4			\
	BCM590XX_REG_ENCODE(0x33, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT5			\
	BCM590XX_REG_ENCODE(0x34, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT6			\
	BCM590XX_REG_ENCODE(0x35, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT7			\
	BCM590XX_REG_ENCODE(0x36, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT8			\
	BCM590XX_REG_ENCODE(0x37, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT9			\
	BCM590XX_REG_ENCODE(0x38, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT10			\
	BCM590XX_REG_ENCODE(0x39, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT11			\
	BCM590XX_REG_ENCODE(0x3A, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT12			\
	BCM590XX_REG_ENCODE(0x3B, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT13			\
	BCM590XX_REG_ENCODE(0x3C, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT14			\
	BCM590XX_REG_ENCODE(0x3D, BCM590XX_SLAVE1_I2C_ADDRESS)

/* Interrupt mask register addresses. */
#define BCM59055_REG_INT1MSK			\
	BCM590XX_REG_ENCODE(0x40, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT2MSK			\
	BCM590XX_REG_ENCODE(0x41, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT3MSK			\
	BCM590XX_REG_ENCODE(0x42, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT4MSK			\
	BCM590XX_REG_ENCODE(0x43, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT5MSK			\
	BCM590XX_REG_ENCODE(0x44, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT6MSK			\
	BCM590XX_REG_ENCODE(0x45, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT7MSK			\
	BCM590XX_REG_ENCODE(0x46, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT8MSK			\
	BCM590XX_REG_ENCODE(0x47, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT9MSK			\
	BCM590XX_REG_ENCODE(0x48, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT10MSK			\
	BCM590XX_REG_ENCODE(0x49, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT11MSK			\
	BCM590XX_REG_ENCODE(0x4A, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT12MSK			\
	BCM590XX_REG_ENCODE(0x4B, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT13MSK			\
	BCM590XX_REG_ENCODE(0x4C, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_INT14MSK			\
	BCM590XX_REG_ENCODE(0x4D, BCM590XX_SLAVE1_I2C_ADDRESS)

/* MBCCTRL register addresses */
#define BCM59055_REG_MBCCTRL1			\
	BCM590XX_REG_ENCODE(0x50, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_MBCCTRL2			\
	BCM590XX_REG_ENCODE(0x51, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_MBCCTRL3			\
	BCM590XX_REG_ENCODE(0x52, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_MBCCTRL4			\
	BCM590XX_REG_ENCODE(0x53, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_MBCCTRL5			\
	BCM590XX_REG_ENCODE(0x54, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_MBCCTRL6			\
	BCM590XX_REG_ENCODE(0x55, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_MBCCTRL7			\
	BCM590XX_REG_ENCODE(0x56, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_MBCCTRL8			\
	BCM590XX_REG_ENCODE(0x57, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_MBCCTRL9			\
	BCM590XX_REG_ENCODE(0x58, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_MBCCTRL10			\
	BCM590XX_REG_ENCODE(0x59, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_MBCCTRL11			\
	BCM590XX_REG_ENCODE(0x5A, BCM590XX_SLAVE1_I2C_ADDRESS)

/* OTGCTRL register addresses */
#define BCM59055_REG_OTGCTRL1			\
	BCM590XX_REG_ENCODE(0x70, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_OTGCTRL2			\
	BCM590XX_REG_ENCODE(0x71, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_OTGCTRL11			\
	BCM590XX_REG_ENCODE(0x7A, BCM590XX_SLAVE1_I2C_ADDRESS)
/* OTG ADP STATUS register */
#define BCM59055_REG_OTGSTS1			\
	BCM590XX_REG_ENCODE(0x70, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_OTGSTS2			\
	BCM590XX_REG_ENCODE(0x71, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_OTGSTS3			\
	BCM590XX_REG_ENCODE(0x72, BCM590XX_SLAVE2_I2C_ADDRESS)

/* Register addresses */
#define BCM59055_REG_RFOPMODCTRL		\
	BCM590XX_REG_ENCODE(0xA0, BCM590XX_SLAVE1_I2C_ADDRESS)    /* R/W  RFLDO */
#define BCM59055_REG_CAMOPMODCTRL		\
	BCM590XX_REG_ENCODE(0xA1, BCM590XX_SLAVE1_I2C_ADDRESS)    /* R/W  CAMLDO */
#define BCM59055_REG_HV1OPMODCTRL		\
	BCM590XX_REG_ENCODE(0xA2, BCM590XX_SLAVE1_I2C_ADDRESS)    /* R/W  HV1LDO */
#define BCM59055_REG_HV2OPMODCTRL		\
	BCM590XX_REG_ENCODE(0xA3, BCM590XX_SLAVE1_I2C_ADDRESS)    /* R/W  HV2LDO */
#define BCM59055_REG_HV3OPMODCTRL		\
	BCM590XX_REG_ENCODE(0xA4, BCM590XX_SLAVE1_I2C_ADDRESS)    /* R/W  HV3LDO */
#define BCM59055_REG_HV4OPMODCTRL		\
	BCM590XX_REG_ENCODE(0xA5, BCM590XX_SLAVE1_I2C_ADDRESS)    /* R/W  HV4LDO */
#define BCM59055_REG_HV5OPMODCTRL		\
	BCM590XX_REG_ENCODE(0xA6, BCM590XX_SLAVE1_I2C_ADDRESS)    /* R/W  HV5LDO */
#define BCM59055_REG_HV6OPMODCTRL		\
	BCM590XX_REG_ENCODE(0xA7, BCM590XX_SLAVE1_I2C_ADDRESS)    /* R/W  HV6LDO */
#define BCM59055_REG_HV7OPMODCTRL		\
	BCM590XX_REG_ENCODE(0xA8, BCM590XX_SLAVE1_I2C_ADDRESS)    /* R/W  HV7LDO */
#define BCM59055_REG_SIMOPMODCTRL		\
	BCM590XX_REG_ENCODE(0xA9, BCM590XX_SLAVE1_I2C_ADDRESS)    /* R/W  SIMLDO */
#define BCM59055_REG_CSROPMODCTRL		\
	BCM590XX_REG_ENCODE(0xAA, BCM590XX_SLAVE1_I2C_ADDRESS)    /* R/W  CSRLDO */
#define BCM59055_REG_IOSROPMODCTRL		\
	BCM590XX_REG_ENCODE(0xAB, BCM590XX_SLAVE1_I2C_ADDRESS)    /* R/W  IOSRLDO */
#define BCM59055_REG_SDSROPMODCTRL		\
	BCM590XX_REG_ENCODE(0xAC, BCM590XX_SLAVE1_I2C_ADDRESS)    /* R/W  SDSRLDO */

#define BCM59055_REG_RFLDOCTRL			\
	BCM590XX_REG_ENCODE(0xB0, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_CAMLDOCTRL			\
	BCM590XX_REG_ENCODE(0xB1, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_HVLDO1CTRL			\
	BCM590XX_REG_ENCODE(0xB2, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_HVLDO2CTRL			\
	BCM590XX_REG_ENCODE(0xB3, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_HVLDO3CTRL			\
	BCM590XX_REG_ENCODE(0xB4, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_HVLDO4CTRL			\
	BCM590XX_REG_ENCODE(0xB5, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_HVLDO5CTRL			\
	BCM590XX_REG_ENCODE(0xB6, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_HVLDO6CTRL			\
	BCM590XX_REG_ENCODE(0xB7, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_HVLDO7CTRL			\
	BCM590XX_REG_ENCODE(0xB8, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_SIMLDOCTRL			\
	BCM590XX_REG_ENCODE(0xB9, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_CSRCTRL1			\
	BCM590XX_REG_ENCODE(0xC0, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_CSRCTRL2			\
	BCM590XX_REG_ENCODE(0xC1, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_CSRCTRL3			\
	BCM590XX_REG_ENCODE(0xC3, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_IOSRCTRL1			\
	BCM590XX_REG_ENCODE(0xC8, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_SDSRCTRL1			\
	BCM590XX_REG_ENCODE(0xD0, BCM590XX_SLAVE1_I2C_ADDRESS)

#define BCM59055_REG_PMUID			\
	BCM590XX_REG_ENCODE(0x04, BCM590XX_SLAVE1_I2C_ADDRESS)    // 0x00    /* R    revision/id */

#define BCM59055_REG_PMUID2			\
	BCM590XX_REG_ENCODE(0xF7, BCM590XX_SLAVE2_I2C_ADDRESS)


/* Audio Registers */
#define BCM59055_REG_PLLCTRL		\
	BCM590XX_REG_ENCODE(0x0B, BCM590XX_SLAVE1_I2C_ADDRESS)

#define BCM59055_REG_IHFTOP			\
	BCM590XX_REG_ENCODE(0x80, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFBIASCLK		\
	BCM590XX_REG_ENCODE(0x81, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFLDO			\
	BCM590XX_REG_ENCODE(0x82, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFPOP			\
	BCM590XX_REG_ENCODE(0x83, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFRCCALI		\
	BCM590XX_REG_ENCODE(0x84, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFADC			\
	BCM590XX_REG_ENCODE(0x85, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFSSP			\
	BCM590XX_REG_ENCODE(0x86, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFHS_AUDTEST	\
	BCM590XX_REG_ENCODE(0x87, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFANARAMP		\
	BCM590XX_REG_ENCODE(0x88, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFPGA1		\
	BCM590XX_REG_ENCODE(0x89, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFPGA2		\
	BCM590XX_REG_ENCODE(0x8A, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFLOOPFILTER	\
	BCM590XX_REG_ENCODE(0x8B, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFCOMPPDSCD	\
	BCM590XX_REG_ENCODE(0x8C, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFDRIVER		\
	BCM590XX_REG_ENCODE(0x8D, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFFBAMP		\
	BCM590XX_REG_ENCODE(0x8E, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFSTIN		\
	BCM590XX_REG_ENCODE(0x8F, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFSTO			\
	BCM590XX_REG_ENCODE(0x90, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFSCDADCO		\
	BCM590XX_REG_ENCODE(0x91, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFRCCALO		\
	BCM590XX_REG_ENCODE(0x92, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFRCCALRAW1O	\
	BCM590XX_REG_ENCODE(0x93, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFRCCALRAW2O	\
	BCM590XX_REG_ENCODE(0x94, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHF_MISC_REG	\
	BCM590XX_REG_ENCODE(0x95, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFHS_UNUSED1	\
	BCM590XX_REG_ENCODE(0x96, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_IHFHS_UNUSED2	\
	BCM590XX_REG_ENCODE(0x97, BCM590XX_SLAVE2_I2C_ADDRESS)

#define BCM59055_REG_HSCP1			\
	BCM590XX_REG_ENCODE(0x98, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSCP2			\
	BCM590XX_REG_ENCODE(0x99, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSCP3			\
	BCM590XX_REG_ENCODE(0x9A, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSDRV			\
	BCM590XX_REG_ENCODE(0x9B, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSLDO			\
	BCM590XX_REG_ENCODE(0x9C, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSLF			\
	BCM590XX_REG_ENCODE(0x9D, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSPGA1			\
	BCM590XX_REG_ENCODE(0x9E, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSPGA2			\
	BCM590XX_REG_ENCODE(0x9F, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSPGA3			\
	BCM590XX_REG_ENCODE(0xA0, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSRC			\
	BCM590XX_REG_ENCODE(0xA1, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSPUP1			\
	BCM590XX_REG_ENCODE(0xA2, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSPUP2			\
	BCM590XX_REG_ENCODE(0xA3, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSIST			\
	BCM590XX_REG_ENCODE(0xA4, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSOC1			\
	BCM590XX_REG_ENCODE(0xA5, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSOC2			\
	BCM590XX_REG_ENCODE(0xA6, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSOC3			\
	BCM590XX_REG_ENCODE(0xA7, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSOC4			\
	BCM590XX_REG_ENCODE(0xA8, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSOUT1			\
	BCM590XX_REG_ENCODE(0xA9, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSOUT2			\
	BCM590XX_REG_ENCODE(0xAA, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSOUT3			\
	BCM590XX_REG_ENCODE(0xAB, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSOUT4			\
	BCM590XX_REG_ENCODE(0xAC, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSOUT5			\
	BCM590XX_REG_ENCODE(0xAD, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSOUT6			\
	BCM590XX_REG_ENCODE(0xAE, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_HSOUT7			\
	BCM590XX_REG_ENCODE(0xAF, BCM590XX_SLAVE2_I2C_ADDRESS)


/* SAR ADC Registers */
#define BCM59055_REG_ADCCTRL1		\
	BCM590XX_REG_ENCODE(0x80, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL2		\
	BCM590XX_REG_ENCODE(0x81, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL3		\
	BCM590XX_REG_ENCODE(0x82, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL4		\
	BCM590XX_REG_ENCODE(0x83, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL5		\
	BCM590XX_REG_ENCODE(0x84, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL6		\
	BCM590XX_REG_ENCODE(0x85, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL7		\
	BCM590XX_REG_ENCODE(0x86, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL8		\
	BCM590XX_REG_ENCODE(0x87, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL9		\
	BCM590XX_REG_ENCODE(0x88, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL10		\
	BCM590XX_REG_ENCODE(0x89, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL11		\
	BCM590XX_REG_ENCODE(0x8A, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL12		\
	BCM590XX_REG_ENCODE(0x8B, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL13		\
	BCM590XX_REG_ENCODE(0x8C, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL14		\
	BCM590XX_REG_ENCODE(0x8D, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL15		\
	BCM590XX_REG_ENCODE(0x8E, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL16		\
	BCM590XX_REG_ENCODE(0x8F, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL17		\
	BCM590XX_REG_ENCODE(0x90, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL18		\
	BCM590XX_REG_ENCODE(0x91, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL19		\
	BCM590XX_REG_ENCODE(0x92, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL20		\
	BCM590XX_REG_ENCODE(0x93, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL21		\
	BCM590XX_REG_ENCODE(0x94, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL22		\
	BCM590XX_REG_ENCODE(0x95, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL23		\
	BCM590XX_REG_ENCODE(0x96, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL24		\
	BCM590XX_REG_ENCODE(0x97, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL25		\
	BCM590XX_REG_ENCODE(0x98, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL26		\
	BCM590XX_REG_ENCODE(0x99, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ADCCTRL27		\
	BCM590XX_REG_ENCODE(0x9A, BCM590XX_SLAVE1_I2C_ADDRESS)

/* Comparator */
#define BCM59055_REG_CMPCTRL12		\
	BCM590XX_REG_ENCODE(0x1B, BCM590XX_SLAVE1_I2C_ADDRESS)

/* Fuel Gauge Registers */
#define BCM59055_REG_FGCTRL1		\
	BCM590XX_REG_ENCODE(0xC0, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGCTRL2		\
	BCM590XX_REG_ENCODE(0xC1, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGOPMODCTRL	\
	BCM590XX_REG_ENCODE(0xC2, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGOCICCTRL1	\
	BCM590XX_REG_ENCODE(0xC3, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGOFFSET_TRIM	\
	BCM590XX_REG_ENCODE(0xC4, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGGAIN_TRIM	\
	BCM590XX_REG_ENCODE(0xC5, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGACCM1		\
	BCM590XX_REG_ENCODE(0xC6, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGACCM2		\
	BCM590XX_REG_ENCODE(0xC7, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGACCM3		\
	BCM590XX_REG_ENCODE(0xC8, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGACCM4		\
	BCM590XX_REG_ENCODE(0xC9, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGCNT1		\
	BCM590XX_REG_ENCODE(0xCA, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGCNT2		\
	BCM590XX_REG_ENCODE(0xCB, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGSLEEPCNT1 \
	BCM590XX_REG_ENCODE(0xCC, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGSLEEPCNT2		\
	BCM590XX_REG_ENCODE(0xCD, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGSMPL1		\
	BCM590XX_REG_ENCODE(0xCE, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGSMPL2		\
	BCM590XX_REG_ENCODE(0xCF, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGSMPL3		\
	BCM590XX_REG_ENCODE(0xD0, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGSMPL4		\
	BCM590XX_REG_ENCODE(0xD1, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGSMPL5		\
	BCM590XX_REG_ENCODE(0xD2, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGSMPL6		\
	BCM590XX_REG_ENCODE(0xD3, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGOFFSET1		\
	BCM590XX_REG_ENCODE(0xD4, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGOFFSET2		\
	BCM590XX_REG_ENCODE(0xD5, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGBATCAL1		\
	BCM590XX_REG_ENCODE(0xD6, BCM590XX_SLAVE2_I2C_ADDRESS)
#define BCM59055_REG_FGBATCAL2		\
	BCM590XX_REG_ENCODE(0xD7, BCM590XX_SLAVE2_I2C_ADDRESS)

/* ENV registers */
#define BCM59055_REG_ENV1		\
	BCM590XX_REG_ENCODE(0xE0, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ENV2		\
	BCM590XX_REG_ENCODE(0xE1, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ENV3		\
	BCM590XX_REG_ENCODE(0xE2, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ENV4		\
	BCM590XX_REG_ENCODE(0xE3, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ENV5		\
	BCM590XX_REG_ENCODE(0xE4, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ENV6		\
	BCM590XX_REG_ENCODE(0xE5, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ENV7		\
	BCM590XX_REG_ENCODE(0xE6, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ENV8		\
	BCM590XX_REG_ENCODE(0xE7, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_ENV9		\
	BCM590XX_REG_ENCODE(0xE8, BCM590XX_SLAVE1_I2C_ADDRESS)


/* Bit definition of Audio */
/* HSCTRL */
#define BCM59055_HSCTRL1_SYS_WDT_EN_OFF			0x0
#define BCM59055_HSCTRL1_SYS_WDT_EN			0x1
#define BCM59055_HSCTRL1_SYS_WDT_CLR			0x2

#define BCM59055_HSCTRL2_SYS_WDT_TIME_MASK	0x7F

/* PLLCTRL*/
#define BCM59055_PLLCTRL_PLLCLKSEL	0x01
#define BCM59055_PLLCTRL_PLLEN		0x02
#define BCM59055_PLLCTRL_PLLENCLK26M	0x04
#define BCM59055_PLLCTRL_PLLCLKEN1M	0x08
#define BCM59055_PLLCTRL_PLLCLKEN8M	0x10
#define BCM59055_PLLCTRL_AUDIO_EN	0x20
/* IHFTOP */
#define BCM59055_IHFTOP_IDDQ		0x01
#define BCM59055_IHFTOP_SCD_PUP		0x02
#define BCM59055_IHFTOP_BYPASSPUP	0x20
#define BCM59055_IHFTOP_BYPASS		0x40
/* IHFLDO */
#define BCM59055_IHFLDO_PUP		0x01

/* IHFPOP */
#define BCM59055_IHFPOP_EN		0x04
#define BCM59055_IHFPOP_PUP		0x08
#define BCM59055_IHFPOP_FAST		0x10
#define BCM59055_IHFPOP_BYPASS		0x20
#define BCM59055_IHFPOP_AUTOSEQ		0x40
/* IHFPGA2*/
#define BCM59055_IHFPGA2_CTL_MASK	0x3F

/* IHFSTIN */
#define  PMU_IHFSTIN_MASK_I_IHFSELFTEST_EN	0x03
#define  PMU_IHFSTIN_OFFSET_I_IHFSELFTEST_EN	0
#define  PMU_IHFSTIN_MASK_I_IHFSTI		0x0C
#define  PMU_IHFSTIN_OFFSET_I_IHFSTI		2
#define  PMU_IHFSTIN_MASK_I_IHFSTO  		0x30
#define  PMU_IHFSTIN_OFFSET_I_IHFSTO		4

/* IHFSTO */
#define  PMU_IHFSTO_MASK_O_IHFSTI	 0x03
#define  PMU_IHFSTO_OFFSET_O_IHFSTI	 0

/* HSIST */
#define  PMU_HSIST_MASK_I_HS_ENST	 0x03
#define  PMU_HSIST_OFFSET_I_HS_ENST	 0
#define  PMU_HSIST_MASK_I_HS_IST	 0x04
#define  PMU_HSIST_OFFSET_I_HS_IST	 2

/* HSOUT1 */
#define PMU_HSOUT1_OFFSET_O_HS_IST	4

/* HSCP3 */
#define BCM59055_HSCP3_CG_SEL		0x04
#define BCM59055_HSCP3_CG_I2C		0x08
/* HSPUP1 */
#define BCM59055_HSPUP1_PSEQ_BYPS	0x80
#define BCM59055_HSPUP1_OCSJ_PWRUP	0x40
#define BCM59055_HSPUP1_OCIN_PWRUP	0x20
#define BCM59055_HSPUP1_IDDQ_PWRDN	0x10
#define BCM59055_HSPUP1_CP_PWRUP	0x08
#define BCM59055_HSPUP1_LDO_PWRUP	0x04
#define BCM59055_HSPUP1_RC_PWRUP	0x02
#define BCM59055_HSPUP1_FE_PWRUP	0x01
/* HSPUP2 */
#define BCM59055_HSPUP2_DRV1_PWRUP	0x80
#define BCM59055_HSPUP2_HS_PWRUP	0x40
#define BCM59055_HSPUP2_LF_RESET	0x20
/* HSDRV */
#define BCM59055_HSDRV_DRV_DISSC	0x10
#define BCM59055_HSDRV_DRV_SCCTL_MASK	0x3
/* HSPGA1 */
#define BCM59055_HSPGA1_PGA_GAINR	0x80
#define BCM59055_HSPGA1_PGA_GAINL	0x40
#define BCM59055_PGA_CTL_MASK		0x3F
/* HSPGA2 */
#define BCM59055_PGA_CPCTL_BIT		6
#define BCM59055_PGA_CPCTL_MASK		0x3

/* HSPGA3 */
#define BCM59055_HSPGA3_PGA_INSHORT	0x40
#define BCM59055_HSPGA3_PGA_ACINADJ	0x20
#define BCM59055_HSPGA3_PGA_ENACCPL	0x04
#define BCM59055_HSPGA3_PGA_PULLDNSJ	0x02
#define BCM59055_HSPGA3_PGA_CMCTL	0x01

/* ENV */
#define BCM59055_ENV2_P_CGPD_ENV		(0x1)
#define BCM59055_ENV2_P_UBPD_ENV		(0x1 << 1)
#define BCM59055_ENV2_P_UBPD_USBDET		(0x1 << 2)
#define BCM59055_ENV2_P_UBPD_INT		(0x1 << 3)
#define BCM59055_ENV2_P_CGPD_PRI		(0x1 << 4)
#define BCM59055_ENV2_P_UBPD_PRI		(0x1 << 5)
#define BCM59055_ENV2_WAC_VALID			(0x1 << 6)
#define BCM59055_ENV2_USB_VALID			(0x1 << 7)

#define BCM59055_ENV3_USB_PORT_DIS		(0x1 << 7)

#define BCM59055_ENV4_P_VBUS_VALID		(0x1)
#define BCM59055_ENV4_P_OTG_SESS_VALID		(0x1 << 1)
#define BCM59055_ENV4_P_VB_SESS_END		(0x1 << 2)
#define BCM59055_ENV4_OTGID			(0x1 << 6)
#define BCM59055_ENV4_RID_SHIFT			0x3
#define BCM59055_ENV4_RID_MASK			0x7


/* MBCCTRL5 */
#define MBCCTRL5_BC11_EN			(0x1)
#define MBCCTRL5_BCDLDO_AON			(0x1 << 1)
#define MBCCTRL5_USB_DET_LDO_EN			(0x1 << 2)
#define MBCCTRL5_DIS_RID_FLOAT			(0x1 << 3)
#define MBCCTRL5_CHP_TYP_SHIFT		0x4
#define MBCCTRL5_CHP_TYP_MASK		0x3


/* OTG CONTROL */
#define OTGCTRL1_EN_VBUS_PULSE		0x1
#define OTGCTRL1_EN_PD_SRP			(0x1 << 1)
#define OTGCTRL1_OFFVBUSB			(0x1 << 2)

#define OTGCTRL2_VBUS_ADP_COMP_DB_MASK	0x3

#define OTGCTRL11_ADP_PRB			(0x1)
#define OTGCTRL11_ADP_SNS			(0x1 << 1)
#define OTGCTRL11_ADP_ONE_SHOT		(0x1 << 2)

#define OTGSTS1_ADP_PRB_COMP		0x1
#define OTGSTS1_ADP_SNS_COMP		(0x1 << 1)
#define OTGSTS1_ADP_DSCHG_COMP		(0x1 << 2)
#define OTGSTS1_ADP_ATTACH_DET		(0x1 << 3)
#define OTGSTS1_ADP_ATTACH_DET_SHIFT	(0x3)
#define OTGSTS1_ADP_SNS_DET			(0x1 << 4)
#define OTGSTS1_ADP_SNS_DET_SHIFT	(0x4)


/* RTC */

#define BCM59055_REG_RTCSC		\
	BCM590XX_REG_ENCODE(0x20, BCM590XX_SLAVE1_I2C_ADDRESS)

#define BCM59055_REG_RTCMN		\
	BCM590XX_REG_ENCODE(0x21, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_RTCHR		\
	BCM590XX_REG_ENCODE(0x22, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_RTCWD		\
	BCM590XX_REG_ENCODE(0x23, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_RTCDT		\
	BCM590XX_REG_ENCODE(0x24, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_RTCMT		\
	BCM590XX_REG_ENCODE(0x25, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_RTCYR		\
	BCM590XX_REG_ENCODE(0x26, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_RTCSC_A1		\
	BCM590XX_REG_ENCODE(0x27, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_RTCMN_A1		\
	BCM590XX_REG_ENCODE(0x28, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_RTCHR_A1		\
	BCM590XX_REG_ENCODE(0x29, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_RTCWD_A1		\
	BCM590XX_REG_ENCODE(0x2A, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_RTCDT_A1		\
	BCM590XX_REG_ENCODE(0x2B, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_RTCMT_A1		\
	BCM590XX_REG_ENCODE(0x2C, BCM590XX_SLAVE1_I2C_ADDRESS)
#define BCM59055_REG_RTCYR_A1		\
	BCM590XX_REG_ENCODE(0x2D, BCM590XX_SLAVE1_I2C_ADDRESS)

/* #defines to identify LDOs inside linux frameworks. */
#define BCM59055_RFLDO				0
#define BCM59055_CAMLDO				1
#define BCM59055_HV1LDO				2
#define BCM59055_HV2LDO				3
#define BCM59055_HV3LDO				4
#define BCM59055_HV4LDO				5
#define BCM59055_HV5LDO				6
#define BCM59055_HV6LDO				7
#define BCM59055_HV7LDO				8
#define BCM59055_SIMLDO				9
#define BCM59055_CSR				10
#define BCM59055_IOSR				11
#define BCM59055_SDSR				12
#define BCM59055_MAX_LDO			13

#define PC2_IS_0_PC1_IS_0			0
#define PC2_IS_0_PC1_IS_1			2
#define PC2_IS_1_PC1_IS_0			4
#define PC2_IS_1_PC1_IS_1			6

#define PM_MODE_MASK				0x3

#define BCM59055_MAX_INT_REGS			14
#define BCM59055_MAX_INTMASK_REGS		14

#define BCM59055_INT_REG_BASE			BCM59055_REG_INT1
#define BCM59055_INT_MASK_REG_BASE		BCM59055_REG_INT1MSK

#define BCM59055_INVALID_ADCVAL              	0x04
#define BCM59055_REG_ADCCTRL3_VALID_BITS     	0x03

#define BCM59055_REG_HOSTCTRL1_SHDWN_OFFSET  	2

#define BCM59055_REG_MBCCTRL3_WAC_HOSTEN     	1
#define BCM59055_REG_MBCCTRL3_USB_HOSTEN     	2
#define BCM59055_REG_MBCCTRL3_WAC_HAS_PRIORITY        1
#define BCM59055_REG_MBCCTRL3_WAC_HAS_PRIORITY_SHIFT  2

#define BCM59055_REG_MBCCTRL6_VFLOATMAX_4_2V  	0x08
#define BCM59055_REG_MBCCTRL8_ICCMAX_940MA    	0x07
#define BCM59055_REG_MBCCTRL9_SWUP_ON         	0x01

#define BCM59055_REG_PWMLEDCTRL1 		0x0

#define BCM59055_REG_PWMLEDCTRL1_HWSW_CNTRL_SW	0

#define BCM59055_REG_PWMLEDCTRL1_PWMLED_PD_DISABLE        1
#define BCM59055_REG_PWMLEDCTRL1_PWMLED_PD_DISABLE_SHIFT  1

#define BCM59055_REG_PWMLEDCTRL1_BREATHING_REPEAT       1
#define BCM59055_REG_PWMLEDCTRL1_BREATHING_REPEAT_SHIFT 2

#define BCM59055_REG_PWMLEDCTRL1_PWM_FREQ_256           2
#define BCM59055_REG_PWMLEDCTRL1_PWM_FREQ_256_SHIFT     5

#define BCM59055_REG_FGACCM_SIGNBIT 	(1<<25)
#define BCM59055_REG_FGACCM_VALMASK		0x1ffffff
#define BCM59055_REG_FGACCM_VALID		0x80000000

/* PMU Interrupts IDs  --------------------------------------------------------------- */
typedef enum {
	BCM59055_IRQID_INT1_POK_PRESSED,
	BCM59055_IRQID_INT1_POK_RELEASED,
	BCM59055_IRQID_INT1_POK_WAKEUP,
	BCM59055_IRQID_INT1_POK_BIT_VLD,
	BCM59055_IRQID_INT1_POK_SHDWN,
	BCM59055_IRQID_INT1_AUX_INS,
	BCM59055_IRQID_INT1_AUX_RM,
	BCM59055_IRQID_INT1_GBAT_PLUG_IN,

	BCM59055_IRQID_INT2_CHGINS,
	BCM59055_IRQID_INT2_CHGRM,
	BCM59055_IRQID_INT2_CHGOV_DIS,
	BCM59055_IRQID_INT2_WAC_C_REDUCE,
	BCM59055_IRQID_INT2_USBINS,
	BCM59055_IRQID_INT2_USBRM,
	BCM59055_IRQID_INT2_UBPD_CHP_DIS,
	BCM59055_IRQID_INT2_USB_CC_REDUCE,

	BCM59055_IRQID_INT3_WAC_REVERSE_POLARITY,
	BCM59055_IRQID_INT3_USB_REVERSE_POLARITY,
	BCM59055_IRQID_INT3_MBC_CV_LOOP,
	BCM59055_IRQID_INT3_CV_TMR_EXP,
	BCM59055_IRQID_INT3_CGPD_CHG_F,
	BCM59055_IRQID_INT3_UBPD_CHG_F,
	BCM59055_IRQID_INT3_CHGERRDIS,
	BCM59055_IRQID_INT3_ACP7_INT,

	BCM59055_IRQID_INT4_VBUS_VALID_F,
	BCM59055_IRQID_INT4_OTG_SESS_VALID_F,
	BCM59055_IRQID_INT4_VB_SESS_END_F,
	BCM59055_IRQID_INT4_OTG_A_DEVICE,
	BCM59055_IRQID_INT4_VBUS_VALID_R,
	BCM59055_IRQID_INT4_VA_SESS_VALID_R,
	BCM59055_IRQID_INT4_VB_SESS_END_R,
	BCM59055_IRQID_INT4_OTG_B_DEVICE,

	BCM59055_IRQID_INT5_ID_CHG,
	BCM59055_IRQID_INT5_CHGDET_LATCH,
	BCM59055_IRQID_INT5_CHGDET_TO,
	BCM59055_IRQID_INT5_RIC_C_TO_FLOAT,
	BCM59055_IRQID_INT5_ADP_CHANGE,
	BCM59055_IRQID_INT5_ADP_SNS_END,
	BCM59055_IRQID_INT5_RESUME_VBUS,
	BCM59055_IRQID_INT5_RESUME_VWALL,

	BCM59055_IRQID_INT6_BATINS,
	BCM59055_IRQID_INT6_BATRM,
	BCM59055_IRQID_INT6_MBTEMPLOW,
	BCM59055_IRQID_INT6_MBTEMPHIGH,
	BCM59055_IRQID_INT6_CHGOV,
	BCM59055_IRQID_INT6_USBOV,
	BCM59055_IRQID_INT6_MBOV_DIS,
	BCM59055_IRQID_INT6_USBOV_DIS,

	BCM59055_IRQID_INT7_CHG_SW_TMR_EXP,
	BCM59055_IRQID_INT7_CHG_HW_TMR_EXP,
	BCM59055_IRQID_INT7_VBUSLOWBND,
	BCM59055_IRQID_INT7_MBC_TF,
	BCM59055_IRQID_INT7_MBWV_R_10S_WAIT,
	BCM59055_IRQID_INT7_MBOV,
	BCM59055_IRQID_INT7_BBLOW,
	BCM59055_IRQID_INT7_FGC,

	BCM59055_IRQID_INT8_RTCA1,
	BCM59055_IRQID_INT8_RTC_SEC,
	BCM59055_IRQID_INT8_RTC_MIN,
	BCM59055_IRQID_INT8_RTCADJ,
	BCM59055_IRQID_INT8_AUD_HSAB_SHCKT,
	BCM59055_IRQID_INT8_AUD_IHFD_SHCKT,
	BCM59055_IRQID_INT8_VBOVRV,
	BCM59055_IRQID_INT8_VBOVRI,

	BCM59055_IRQID_INT9_RTM_DATA_RDY,
	BCM59055_IRQID_INT9_RTM_DURING_CON_MEAS,
	BCM59055_IRQID_INT9_RTM_UPPER_BOUND,
	BCM59055_IRQID_INT9_RTM_IGNORE,
	BCM59055_IRQID_INT9_RTM_OVERRIDDEN,
	BCM59055_IRQID_INT9_XTAL_FAILURE,
	BCM59055_IRQID_INT9_ADP_PROB,
	BCM59055_IRQID_INT9_7,

	BCM59055_TOTAL_IRQ
} BCM59038_InterruptId;

struct bcm590xx;


void bcm590xx_register_details(void **reg_info);
void bcm590xx_regulator_desc(void **info);
int bcm590xx_num_regl(void);
void* bcm590xx_get_initdata(void);
unsigned int bcm590xx_ldo_or_sr(int id);
int set_csr_volt(int nm, int lpm, int turbo, struct bcm590xx *bcm590xx);

void bcm59055_reg_init_dev_init(struct bcm590xx *bcm590xx) ;

#endif
