/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

//betaflight/src/config/configs/STM32F411BLACKPILL/

#pragma once

#define FC_TARGET_MCU     STM32F411

#define BOARD_NAME        PAWSFPV_blackpill
#define MANUFACTURER_ID   STMI

#define USE_I2C_DEVICE_1

#define USE_ACC
#define USE_GYRO

#define USE_I2C_GYRO
#define USE_SPI_GYRO

#define USE_ACC_MPU6500
#define USE_GYRO_MPU6500
#define USE_ACC_SPI_MPU6000
#define USE_GYRO_SPI_MPU6000
#define USE_ACC_SPI_MPU6500
#define USE_GYRO_SPI_MPU6500
#define USE_GYRO_SPI_ICM42605
#define USE_GYRO_SPI_ICM42688P
#define USE_ACC_SPI_ICM42605
#define USE_ACC_SPI_ICM42688P
#define USE_ACC_MPU6050
#define USE_GYRO_MPU6050
#define USE_ACCGYRO_BMI160


#define GYRO_1_SPI_INSTANCE SPI1

//set gyro_1_bustype = I2C
//set gyro_1_i2cBus = 1


#define USE_SDCARD

#define BEEPER_PIN PA14
#define MOTOR1_PIN PB7
#define MOTOR2_PIN PB6
#define MOTOR3_PIN PB5
#define MOTOR4_PIN PB4
#define MOTOR5_PIN PB3
#define MOTOR6_PIN PA15
#define RX_PPM_PIN PA8
#define LED_STRIP_PIN PA0
#define UART1_TX_PIN  PA9
#define UART2_TX_PIN PA2
#define UART1_RX_PIN PA10
#define UART2_RX_PIN PA3
#define I2C1_SCL_PIN PB8
#define I2C1_SDA_PIN PB9
#define LED1_PIN PC13

#define SPI1_SCK_PIN PA5
#define SPI2_SCK_PIN PB13
#define SPI1_SDI_PIN PA6
#define SPI2_SDI_PIN PB14
#define SPI1_SDO_PIN PA7
#define SPI2_SDO_PIN PB15
#define ADC_VBAT_PIN  PB0
#define GYRO_1_CS_PIN PA4
#define GYRO_2_CS_PIN PA4
#define SDCARD_SPI_CS_PIN PB12

#define TIMER_PIN_MAPPING \
 TIMER_PIN_MAP(0, PB4, 1, 0) \
 TIMER_PIN_MAP(1, PB5, 1, 0) \
 TIMER_PIN_MAP(2, PB6, 1, 0) \
 TIMER_PIN_MAP(3, PB7, 1, 0) \
 TIMER_PIN_MAP(4, PB3, 1, 0) \
 TIMER_PIN_MAP(5, PA15, 1, 0) \
 TIMER_PIN_MAP(6, PA0, 1, 0) \
 TIMER_PIN_MAP(7, PA8, 1, 0) \
 TIMER_PIN_MAP(8, PB1, 1, 0) 


#define ADC1_DMA_OPT        1


//#define USE_SERIALRX
//#define USE_SOFTSERIAL
//#define USE_GPS

#define DEFAULT_DSHOT_BURST DSHOT_DMAR_AUTO
#define DEFAULT_DSHOT_BITBANG DSHOT_BITBANG_OFF
#define MAG_I2C_INSTANCE (I2CDEV_1)
#define USE_BARO
#define BARO_I2C_INSTANCE (I2CDEV_1)
#define DEFAULT_BARO_DEVICE BARO_NONE
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define BEEPER_INVERTED
#define SYSTEM_HSE_MHZ 25


