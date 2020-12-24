/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "QUICKF7"

#define USBD_PRODUCT_STRING "QUICKFLYF765"

#define LED0_PIN   PD11
#define LED1_PIN   PD10

// #define USE_BEEPER
// #define BEEPER_PIN PB2 // Unused pin, can be mapped to elsewhere
// #define BEEPER_INVERTED

#define GYRO_1_CS_PIN         PE3
#define GYRO_1_SPI_INSTANCE   SPI4

#define USE_ACC
#define USE_ACC_SPI_MPU6500

#define USE_GYRO
#define USE_GYRO_SPI_MPU6500
//#define GYRO_1_ALIGN       CW270_DEG

// MPU6000 interrupts
#define USE_MPU_DATA_READY_SIGNAL
#define USE_EXTI
#define USE_GYRO_EXTI
#define GYRO_1_EXTI_PIN       PE4
#define USE_EXTI

#define USE_MAG
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define MAG_I2C_INSTANCE           (I2CDEV_3)
#define I2C3_SCL                PA8
#define I2C3_SDA                PC9

//#define MAG_HMC5883_ALIGN CW270_DEG_FLIP
//#define MAG_HMC5883_ALIGN CW90_DEG

#define USE_BARO
#define USE_BARO_MS5611
#define USE_BARO_BMP280
#define BARO_SPI_INSTANCE      SPI3
#define BARO_CS_PIN            PD6

#define FLASH_CS_PIN         PD5
#define FLASH_SPI_INSTANCE   SPI3

#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT
#define USE_FLASHFS
#define USE_FLASH_TOOLS
#define USE_FLASH_M25P16
#define USE_FLASH_W25N01G
#define USE_FLASH_W25M02G
#define USE_FLASH_W25M

#define USABLE_TIMER_CHANNEL_COUNT 16

#define USE_VCP
// #define USE_USB_DETECT
// #define USB_DETECT_PIN   PA8

#define USE_UART1
#define UART1_RX_PIN PB15
#define UART1_TX_PIN PB14

#define USE_UART2
#define UART2_RX_PIN PA3
#define UART2_TX_PIN PA2

#define USE_UART4
#define UART4_RX_PIN PD0
#define UART4_TX_PIN PD1

#define USE_UART5
#define UART5_RX_PIN PD2
#define UART5_TX_PIN PC12

#define USE_UART6
#define UART6_RX_PIN PC7
#define UART6_TX_PIN PC6

#define USE_UART7
#define UART7_RX_PIN PE7
#define UART7_TX_PIN PE8

#define USE_UART8
#define UART8_RX_PIN PE0
#define UART8_TX_PIN PE1

#define USE_SOFTSERIAL1
#define USE_SOFTSERIAL2

#define SERIAL_PORT_COUNT 10 //VCP, USART1, USART2, UART4, UART5, USART6, USART7, USART8, SOFTSERIAL x 2

// #define USE_ESCSERIAL
// #define ESCSERIAL_TIMER_TX_PIN  PB14 // (Hardware=0, PPM)

#define USE_SPI
#define USE_SPI_DEVICE_1
#define USE_SPI_DEVICE_2
#define USE_SPI_DEVICE_3
#define USE_SPI_DEVICE_4

//#define SPI1_NSS_PIN            PA4
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PD7

#define SPI2_SCK_PIN            PA9
#define SPI2_MISO_PIN           PC2
#define SPI2_MOSI_PIN           PC1

//#define SPI3_NSS_PIN            PD2
#define SPI3_SCK_PIN            PC10
#define SPI3_MISO_PIN           PC11
#define SPI3_MOSI_PIN           PB2

#define SPI4_NSS_PIN            PC13
#define SPI4_SCK_PIN            PE2
#define SPI4_MISO_PIN           PE5
#define SPI4_MOSI_PIN           PE6

#define USE_MAX7456
#define MAX7456_SPI_INSTANCE    SPI1
#define MAX7456_SPI_CS_PIN      PC4

// #define USE_SDCARD
// #define USE_SDCARD_SPI
// #define SDCARD_DETECT_INVERTED
// #define SDCARD_DETECT_PIN                   PD3
// #define SDCARD_SPI_INSTANCE                 SPI4
// #define SDCARD_SPI_CS_PIN                   SPI4_NSS_PIN
// #define SPI4_TX_DMA_OPT                     0     // DMA 2 Stream 1 Channel 4

#define USE_I2C
#define USE_I2C_DEVICE_1  // External I2C
#define USE_I2C_DEVICE_2  // External I2C
#define USE_I2C_DEVICE_3  // Onboard I2C
#define I2C_DEVICE                  (I2CDEV_3)

#define USE_ADC
#define VBAT_ADC_PIN                PA0
// #define CURRENT_METER_ADC_PIN       PC1
// #define RSSI_ADC_PIN                PC2

//#define ENABLE_BLACKBOX_LOGGING_ON_SDCARD_BY_DEFAULT

#define DEFAULT_RX_FEATURE      FEATURE_RX_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_SBUS

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
#define TARGET_IO_PORTE 0xffff

#define USED_TIMERS  ( TIM_N(1) | TIM_N(3) | TIM_N(4))
