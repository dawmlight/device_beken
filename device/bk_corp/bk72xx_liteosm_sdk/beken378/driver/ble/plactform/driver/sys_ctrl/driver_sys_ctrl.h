/*************************************************************
 * @file        driver_sys_ctrl.h
 * @brief       Header file of driver_sys_ctrl.c
 * @author      GuWenFu
 * @version     V1.0
 * @date        2016-09-29
 * @par         
 * @attention   
 *
 * @history     2016-09-29 gwf    create this file
 */

#ifndef __DRIVER_SYS_CTRL_H__

#define __DRIVER_SYS_CTRL_H__


#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */





#define REG_SYS_CTRL_BASE_ADDR              (0x00800000UL)


#define REG_SYS_CTRL_CHIP_ID_ADDR           (REG_SYS_CTRL_BASE_ADDR + 0x00 * 4)
#define REG_SYS_CTRL_CHIP_ID_MASK           0xFFFFFFFFUL
#define REG_SYS_CTRL_CHIP_ID                (*((volatile unsigned long *) REG_SYS_CTRL_CHIP_ID_ADDR))


#define REG_SYS_CTRL_DEVICE_ID_ADDR         (REG_SYS_CTRL_BASE_ADDR + 0x01 * 4)
#define REG_SYS_CTRL_DEVICE_ID_MASK         0xFFFFFFFFUL
#define REG_SYS_CTRL_DEVICE_ID              (*((volatile unsigned long *) REG_SYS_CTRL_DEVICE_ID_ADDR))


#define REG_SYS_CTRL_CLK_SET_ADDR           (REG_SYS_CTRL_BASE_ADDR + 0x02 * 4)
#define REG_SYS_CTRL_CLK_SET_MASK           0x00003FF3UL
#define REG_SYS_CTRL_CLK_SET                (*((volatile unsigned long *) REG_SYS_CTRL_CLK_SET_ADDR))

#define SYS_CTRL_CLK_SET_MCLK_POSI          0
#define SYS_CTRL_CLK_SET_MCLK_MASK          (0x03UL << SYS_CTRL_CLK_SET_MCLK_POSI)
#define SYS_CTRL_CLK_SET_MCLK_DCO           (0x00UL << SYS_CTRL_CLK_SET_MCLK_POSI)
#define SYS_CTRL_CLK_SET_MCLK_XTAL_26M      (0x01UL << SYS_CTRL_CLK_SET_MCLK_POSI)
#define SYS_CTRL_CLK_SET_MCLK_DPLL          (0x02UL << SYS_CTRL_CLK_SET_MCLK_POSI)
#define SYS_CTRL_CLK_SET_MCLK_LPO           (0x03UL << SYS_CTRL_CLK_SET_MCLK_POSI)

#define SYS_CTRL_CLK_SET_MCLK_DIV_POSI      4
#define SYS_CTRL_CLK_SET_MCLK_DIV_MASK      (0x0FUL << SYS_CTRL_CLK_SET_MCLK_DIV_POSI)

#define SYS_CTRL_CLK_SET_FLASH_26M_POSI     8
#define SYS_CTRL_CLK_SET_FLASH_26M_MASK     (0x01UL << SYS_CTRL_CLK_SET_FLASH_26M_POSI)

#define SYS_CTRL_CLK_SET_AHB_CLK_DIV_POSI   9
#define SYS_CTRL_CLK_SET_AHB_CLK_DIV_MASK   (0x01UL << SYS_CTRL_CLK_SET_AHB_CLK_DIV_POSI)

#define SYS_CTRL_CLK_SET_MODEM_PWD_POSI     10
#define SYS_CTRL_CLK_SET_MODEM_PWD_MASK     (0x01UL << SYS_CTRL_CLK_SET_MODEM_PWD_POSI)

#define SYS_CTRL_CLK_SET_MAC_PWD_POSI       11
#define SYS_CTRL_CLK_SET_MAC_PWD_MASK       (0x01UL << SYS_CTRL_CLK_SET_MAC_PWD_POSI)

#define SYS_CTRL_CLK_SET_MPIF_CLK_POSI      12
#define SYS_CTRL_CLK_SET_MPIF_CLK_MASK      (0x01UL << SYS_CTRL_CLK_SET_MPIF_CLK_POSI)

#define SYS_CTRL_CLK_SET_SDIO_CLK_POSI      13
#define SYS_CTRL_CLK_SET_SDIO_CLK_MASK      (0x01UL << SYS_CTRL_CLK_SET_SDIO_CLK_POSI)


#define REG_SYS_CTRL_RESET_ADDR             (REG_SYS_CTRL_BASE_ADDR + 0x04 * 4)
#define REG_SYS_CTRL_RESET_MASK             0x000000FFUL
#define REG_SYS_CTRL_RESET                  (*((volatile unsigned long *) REG_SYS_CTRL_RESET_ADDR))

#define SYS_CTRL_MODEM_SUBCHIP_RESET_POSI   0
#define SYS_CTRL_MODEM_SUBCHIP_RESET_MASK   (0x01UL << SYS_CTRL_MODEM_SUBCHIP_RESET_POSI)

#define SYS_CTRL_DSP_SUBSYS_RESET_POSI      1
#define SYS_CTRL_DSP_SUBSYS_RESET_MASK      (0x01UL << SYS_CTRL_DSP_SUBSYS_RESET_POSI)

#define SYS_CTRL_MAC_SUBSYS_RESET_POSI      2
#define SYS_CTRL_MAC_SUBSYS_RESET_MASK      (0x01UL << SYS_CTRL_MAC_SUBSYS_RESET_POSI)

#define SYS_CTRL_TL410_BOOT_POSI            3
#define SYS_CTRL_TL410_BOOT_MASK            (0x01UL << SYS_CTRL_TL410_BOOT_POSI)
#define SYS_CTRL_TL410_BOOT_CLEAR           (0x00UL << SYS_CTRL_TL410_BOOT_POSI)
#define SYS_CTRL_TL410_BOOT_SET             (0x01UL << SYS_CTRL_TL410_BOOT_POSI)

#define SYS_CTRL_USB_SUBSYS_RESET_POSI      4
#define SYS_CTRL_USB_SUBSYS_RESET_MASK      (0x01UL << SYS_CTRL_USB_SUBSYS_RESET_POSI)

#define SYS_CTRL_TL410_EXT_WAIT_POSI        5
#define SYS_CTRL_TL410_EXT_WAIT_MASK        (0x01UL << SYS_CTRL_TL410_EXT_WAIT_POSI)
#define SYS_CTRL_TL410_EXT_WAIT_CLEAR       (0x00UL << SYS_CTRL_TL410_EXT_WAIT_POSI)
#define SYS_CTRL_TL410_EXT_WAIT_SET         (0x01UL << SYS_CTRL_TL410_EXT_WAIT_POSI)

#define SYS_CTRL_MODEM_CORE_RESET_POSI      6
#define SYS_CTRL_MODEM_CORE_RESET_MASK      (0x01UL << SYS_CTRL_MODEM_CORE_RESET_POSI)

#define SYS_CTRL_MAC_WAKEUP_ARM_POSI        7
#define SYS_CTRL_MAC_WAKEUP_ARM_MASK        (0x01UL << SYS_CTRL_MAC_WAKEUP_ARM_POSI)
#define SYS_CTRL_MAC_WAKEUP_ARM_CLEAR       (0x00UL << SYS_CTRL_MAC_WAKEUP_ARM_POSI)
#define SYS_CTRL_MAC_WAKEUP_ARM_SET         (0x01UL << SYS_CTRL_MAC_WAKEUP_ARM_POSI)


#define REG_SYS_CTRL_DSP_SUBSYS_RESET_REQ_ADDR  (REG_SYS_CTRL_BASE_ADDR + 0x0B * 4)
#define REG_SYS_CTRL_DSP_SUBSYS_RESET_REQ_MASK  0xFFFFFFFFUL
#define REG_SYS_CTRL_DSP_SUBSYS_RESET_REQ       (*((volatile unsigned long *) REG_SYS_CTRL_DSP_SUBSYS_RESET_REQ_ADDR))

#define DSP_SUBSYS_RESET_REQ_WORD_POSI      0
#define DSP_SUBSYS_RESET_REQ_WORD_MASK      (0xFFFFFFFFUL << DSP_SUBSYS_RESET_REQ_WORD_POSI)
#define DSP_SUBSYS_RESET_REQ_WORD           0x7111C410UL


#define REG_SYS_CTRL_ANALOG_REG0_ADDR       (REG_SYS_CTRL_BASE_ADDR + 0x16 * 4)
#define REG_SYS_CTRL_ANALOG_REG0_MASK       0xFFFFFFFFUL
#define REG_SYS_CTRL_ANALOG_REG0            (*((volatile unsigned long *) REG_SYS_CTRL_ANALOG_REG0_ADDR))


#define REG_SYS_CTRL_ANALOG_REG1_ADDR       (REG_SYS_CTRL_BASE_ADDR + 0x17 * 4)
#define REG_SYS_CTRL_ANALOG_REG1_MASK       0xFFFFFFFFUL
#define REG_SYS_CTRL_ANALOG_REG1            (*((volatile unsigned long *) REG_SYS_CTRL_ANALOG_REG1_ADDR))


#define REG_SYS_CTRL_ANALOG_REG2_ADDR       (REG_SYS_CTRL_BASE_ADDR + 0x18 * 4)
#define REG_SYS_CTRL_ANALOG_REG2_MASK       0xFFFFFFFFUL
#define REG_SYS_CTRL_ANALOG_REG2            (*((volatile unsigned long *) REG_SYS_CTRL_ANALOG_REG2_ADDR))


#define REG_SYS_CTRL_ANALOG_REG3_ADDR       (REG_SYS_CTRL_BASE_ADDR + 0x19 * 4)
#define REG_SYS_CTRL_ANALOG_REG3_MASK       0xFFFFFFFFUL
#define REG_SYS_CTRL_ANALOG_REG3            (*((volatile unsigned long *) REG_SYS_CTRL_ANALOG_REG3_ADDR))


#define REG_SYS_CTRL_ANALOG_REG4_ADDR       (REG_SYS_CTRL_BASE_ADDR + 0x1A * 4)
#define REG_SYS_CTRL_ANALOG_REG4_MASK       0xFFFFFFFFUL
#define REG_SYS_CTRL_ANALOG_REG4            (*((volatile unsigned long *) REG_SYS_CTRL_ANALOG_REG4_ADDR))

#define REG_SYS_CTRL_BLE_SUBSYS_ADDR        (REG_SYS_CTRL_BASE_ADDR + 0x20 * 4)
#define REG_SYS_CTRL_BLE_SUBSYS_MASK        0xFFFFFFFFUL
#define REG_SYS_CTRL_BLE_SUBSYS             (*((volatile unsigned long *) REG_SYS_CTRL_BLE_SUBSYS_ADDR))

#define REG_SYS_CTRL_LPO_CLK_ADDR           (REG_SYS_CTRL_BASE_ADDR + 0x40 * 4)
#define REG_SYS_CTRL_LPO_CLK_MASK           0x03UL
#define REG_SYS_CTRL_LPO_CLK                (*((volatile unsigned long *) REG_SYS_CTRL_LPO_CLK_ADDR))

#define SYS_CTRL_LPO_CLK_MUX_POSI           0
#define SYS_CTRL_LPO_CLK_MUX_MASK           (0x03UL << SYS_CTRL_LPO_CLK_MUX_POSI)
#define SYS_CTRL_LPO_CLK_MUX_ROSC_32KHz     (0x00UL << SYS_CTRL_LPO_CLK_MUX_POSI)
#define SYS_CTRL_LPO_CLK_MUX_XTAL_32KHz     (0x01UL << SYS_CTRL_LPO_CLK_MUX_POSI)
#define SYS_CTRL_LPO_CLK_MUX_DIV_32KHz      (0x02UL << SYS_CTRL_LPO_CLK_MUX_POSI)


#define REG_SYS_CTRL_SLEEP_ADDR             (REG_SYS_CTRL_BASE_ADDR + 0x41 * 4)
#define REG_SYS_CTRL_SLEEP_MASK             0x00F7FFFFUL
#define REG_SYS_CTRL_SLEEP                  (*((volatile unsigned long *) REG_SYS_CTRL_SLEEP_ADDR))

#define SYS_CTRL_SLEEP_SLEEP_MODE_POSI      0
#define SYS_CTRL_SLEEP_SLEEP_MODE_MASK      (0x0000FFFF << SYS_CTRL_SLEEP_SLEEP_MODE_POSI)
#define SYS_CTRL_SLEEP_SLEEP_MODE_NORMAL    (0x00004F89 << SYS_CTRL_SLEEP_SLEEP_MODE_POSI)
#define SYS_CTRL_SLEEP_SLEEP_MODE_LOW       (0x0000B706 << SYS_CTRL_SLEEP_SLEEP_MODE_POSI)
#define SYS_CTRL_SLEEP_SLEEP_MODE_DEEPSLEEP (0x0000ADC1 << SYS_CTRL_SLEEP_SLEEP_MODE_POSI)

#define SYS_CTRL_SLEEP_ROSC_PWD_POSI        16
#define SYS_CTRL_SLEEP_ROSC_PWD_MASK        (0x01UL << SYS_CTRL_SLEEP_ROSC_PWD_POSI)
#define SYS_CTRL_SLEEP_ROSC_PWD_SET         (0x01UL << SYS_CTRL_SLEEP_ROSC_PWD_POSI)

#define SYS_CTRL_SLEEP_FLASH_PWD_POSI       17
#define SYS_CTRL_SLEEP_FLASH_PWD_MASK       (0x01UL << SYS_CTRL_SLEEP_FLASH_PWD_POSI)
#define SYS_CTRL_SLEEP_FLASH_PWD_SET        (0x01UL << SYS_CTRL_SLEEP_FLASH_PWD_POSI)

#define SYS_CTRL_SLEEP_DCO_PWD_POSI         18
#define SYS_CTRL_SLEEP_DCO_PWD_MASK         (0x01UL << SYS_CTRL_SLEEP_DCO_PWD_POSI)
#define SYS_CTRL_SLEEP_DCO_PWD_SET          (0x01UL << SYS_CTRL_SLEEP_DCO_PWD_POSI)

#define SYS_CTRL_SLEEP_POR_CORE_DLY_POSI    20
#define SYS_CTRL_SLEEP_POR_CORE_DLY_MASK    (0x0FUL << SYS_CTRL_SLEEP_POR_CORE_DLY_POSI)
#define SYS_CTRL_SLEEP_POR_CORE_DLY_SET     (0x0FUL << SYS_CTRL_SLEEP_POR_CORE_DLY_POSI)


#define REG_WIFI_PWD_ADDR                   (REG_SYS_CTRL_BASE_ADDR + 0x43 * 4)
#define REG_DSP_PWD_ADDR                    (REG_SYS_CTRL_BASE_ADDR + 0x44 * 4)
#define REG_USB_PWD_ADDR                    (REG_SYS_CTRL_BASE_ADDR + 0x45 * 4)

#define REG_WIFI_PWD                        (*((volatile unsigned long *) REG_WIFI_PWD_ADDR))
#define REG_DSP_PWD                         (*((volatile unsigned long *) REG_DSP_PWD_ADDR))
#define REG_USB_PWD                         (*((volatile unsigned long *) REG_USB_PWD_ADDR))


#define REG_SYS_CTRL_BLOCK_EN_ADDR          (REG_SYS_CTRL_BASE_ADDR + 0x4B * 4)
#define REG_SYS_CTRL_BLOCK_EN_MASK          0xFFFFBFBFUL
#define REG_SYS_CTRL_BLOCK_EN               (*((volatile unsigned long *) REG_SYS_CTRL_BLOCK_EN_ADDR))

#define SYS_CTRL_BLOCK_EN_SW_POSI           0
#define SYS_CTRL_BLOCK_EN_SW_MASK           (0x000FBFBF << SYS_CTRL_BLOCK_EN_SW_POSI)
#define SYS_CTRL_BLOCK_EN_SW_FLASH          0x00000001
#define SYS_CTRL_BLOCK_EN_SW_DCO_26MHz      0x00000002
#define SYS_CTRL_BLOCK_EN_SW_ROSC_32KHz     0x00000004
#define SYS_CTRL_BLOCK_EN_SW_XTAL_26MHz     0x00000008
#define SYS_CTRL_BLOCK_EN_SW_XTAL_32KHz     0x00000010
#define SYS_CTRL_BLOCK_EN_SW_DPLL           0x00000020
#define SYS_CTRL_BLOCK_EN_SW_DIGITAL_LDO    0x00000080
#define SYS_CTRL_BLOCK_EN_SW_ANALOG_LDO     0x00000100
#define SYS_CTRL_BLOCK_EN_SW_IO_LDO         0x00000200
#define SYS_CTRL_BLOCK_EN_SW_XTAL_TO_RF     0x00000400
#define SYS_CTRL_BLOCK_EN_SW_XTAL_26MHz_LOW_POWER   0x00000800
#define SYS_CTRL_BLOCK_EN_SW_TEMP_SENSOR    0x00001000
#define SYS_CTRL_BLOCK_EN_SW_ADC_ENABLE     0x00002000
#define SYS_CTRL_BLOCK_EN_SW_AUDIO_L_CHNNEL 0x00008000
#define SYS_CTRL_BLOCK_EN_SW_AUDIO_R_CHNNEL 0x00010000
#define SYS_CTRL_BLOCK_EN_SW_MIC_L_CHNNEL   0x00020000
#define SYS_CTRL_BLOCK_EN_SW_MIC_R_CHNNEL   0x00040000
#define SYS_CTRL_BLOCK_EN_SW_LINE_IN        0x00080000

#define SYS_CTRL_BLOCK_EN_VALID_POSI        20
#define SYS_CTRL_BLOCK_EN_VALID_MASK        (0x0FFFUL << SYS_CTRL_BLOCK_EN_VALID_POSI)
#define SYS_CTRL_BLOCK_EN_VALID_SET         (0x0A5CUL << SYS_CTRL_BLOCK_EN_VALID_POSI)


#define REG_SYS_CTRL_BIAS_CALIB_ADDR        (REG_SYS_CTRL_BASE_ADDR + 0x4C * 4)
#define REG_SYS_CTRL_BIAS_CALIB_MASK        0x001F1F11UL
#define REG_SYS_CTRL_BIAS_CALIB             (*((volatile unsigned long *) REG_SYS_CTRL_BIAS_CALIB_ADDR))

#define SYS_CTRL_BIAS_CALIB_TRIG_POSI       0
#define SYS_CTRL_BIAS_CALIB_TRIG_MASK       (0x01UL << SYS_CTRL_BIAS_CALIB_TRIG_POSI)
#define SYS_CTRL_BIAS_CALIB_TRIG_SET        (0x01UL << SYS_CTRL_BIAS_CALIB_TRIG_POSI)

#define SYS_CTRL_BIAS_CALIB_MANUAL_POSI     4
#define SYS_CTRL_BIAS_CALIB_MANUAL_MASK     (0x01UL << SYS_CTRL_BIAS_CALIB_MANUAL_POSI)
#define SYS_CTRL_BIAS_CALIB_MANUAL_SET      (0x01UL << SYS_CTRL_BIAS_CALIB_MANUAL_POSI)

#define SYS_CTRL_BIAS_CALIB_SETTING_POSI    8
#define SYS_CTRL_BIAS_CALIB_SETTING_MASK    (0x1FUL << SYS_CTRL_BIAS_CALIB_SETTING_POSI)

#define SYS_CTRL_BIAS_CALIB_RESULT_POSI     16
#define SYS_CTRL_BIAS_CALIB_RESULT_MASK     (0x1FUL << SYS_CTRL_BIAS_CALIB_RESULT_POSI)


#define REG_SYS_CTRL_ROSC_CONFIG_ADDR       (REG_SYS_CTRL_BASE_ADDR + 0x4D * 4)
#define REG_SYS_CTRL_ROSC_CONFIG_MASK       0x7FFF0077UL
#define REG_SYS_CTRL_ROSC_CONFIG            (*((volatile unsigned long *) REG_SYS_CTRL_ROSC_CONFIG_ADDR))



#define REG_ICU_BASE_ADDR                   (0x00802000UL)


#define REG_ICU_PERI_CLK_MUX_ADDR           (REG_ICU_BASE_ADDR + 0x0 * 4)
#define REG_ICU_PERI_CLK_MUX_MASK           0x00000001UL
#define REG_ICU_PERI_CLK_MUX                (*((volatile unsigned long *) REG_ICU_PERI_CLK_MUX_ADDR))

#define ICU_PERI_CLK_MUX_SEL_POSI           0
#define ICU_PERI_CLK_MUX_SEL_MASK           (0x01UL << ICU_PERI_CLK_MUX_SEL_POSI)
#define ICU_PERI_CLK_MUX_SEL_DCO_CLK        (0x00UL << ICU_PERI_CLK_MUX_SEL_POSI)
#define ICU_PERI_CLK_MUX_SEL_XTAL_26M       (0x01UL << ICU_PERI_CLK_MUX_SEL_POSI)

#define ICU_TL410_BLE_CLK_ADDR              (REG_ICU_BASE_ADDR + 0x04 * 4)
#define ICU_TL410_BLE_CLK_MASK              0x03UL
#define ICU_TL410_BLE_CLK                   (*((volatile unsigned long *) ICU_TL410_BLE_CLK_ADDR))


#define REG_ICU_INT_ENABLE_ADDR             (REG_ICU_BASE_ADDR + 0x10 * 4)
#define REG_ICU_INT_ENABLE_MASK             0x07FF7FFFUL
#define REG_ICU_INT_ENABLE                  (*((volatile unsigned long *) REG_ICU_INT_ENABLE_ADDR))

#define REG_ICU_INT_GLOBAL_ENABLE_ADDR      (REG_ICU_BASE_ADDR + 0x11 * 4)
#define REG_ICU_INT_GLOBAL_ENABLE_MASK      0x0003UL
#define REG_ICU_INT_GLOBAL_ENABLE           (*((volatile unsigned long *) REG_ICU_INT_GLOBAL_ENABLE_ADDR))

#define ICU_INT_GLOBAL_ENABLE_IRQ_POSI      0
#define ICU_INT_GLOBAL_ENABLE_IRQ_MASK      (0x01UL << ICU_INT_GLOBAL_ENABLE_IRQ_POSI)
#define ICU_INT_GLOBAL_ENABLE_IRQ_SET       (0x01UL << ICU_INT_GLOBAL_ENABLE_IRQ_POSI)

#define ICU_INT_GLOBAL_ENABLE_FIQ_POSI      1
#define ICU_INT_GLOBAL_ENABLE_FIQ_MASK      (0x01UL << ICU_INT_GLOBAL_ENABLE_FIQ_POSI)
#define ICU_INT_GLOBAL_ENABLE_FIQ_SET       (0x01UL << ICU_INT_GLOBAL_ENABLE_FIQ_POSI)

#define REG_BLE_XVR_BASE_ADDR               (0x0080B400)

#define REG_BLE_XVR_SLOT_TIME_ADDR          (REG_BLE_XVR_BASE_ADDR + 0x2a * 4)
#define REG_BLE_XVR_SLOT_TIME_MASK          0xFFFFFFFF
#define REG_BLE_XVR_SLOT_TIME               (*((volatile unsigned long *) REG_BLE_XVR_SLOT_TIME_ADDR))

#define REG_BLE_XVR_TX_CONFIG_ADDR          (REG_BLE_XVR_BASE_ADDR + 0x30 * 4)
#define REG_BLE_XVR_TX_CONFIG_MASK          0xFFFFFFFF
#define REG_BLE_XVR_TX_CONFIG               (*((volatile unsigned long *) REG_BLE_XVR_TX_CONFIG_ADDR))

#define REG_BLE_XVR_AGC_CONFIG_ADDR          (REG_BLE_XVR_BASE_ADDR + 0x3c * 4)
#define REG_BLE_XVR_AGC_CONFIG_MASK          0xFFFFFFFF
#define REG_BLE_XVR_AGC_CONFIG               (*((volatile unsigned long *) REG_BLE_XVR_AGC_CONFIG_ADDR))

#ifdef __cplusplus
}
#endif  /* __cplusplus */


#endif      /* __DRIVER_SYS_CTRL_H__ */
