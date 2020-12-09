/*
 *******************************************************************************
 * Copyright (c) 2019, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/
// USART
#define PA10 0  // RX
#define PA9  1  // TX

// SWD
#define PA14 2  // SWCLK
#define PA13 3  // SWDIO

// EXT3
#define PE5  4  // EXT_D1
#define PE4  5  // EXT_D2
#define PE3  6  // EXT_D3
#define PE2  7  // EXT_D4
#define PE1  8  // EXT_D5

// SPI
#define PB2  9  // SS_SDLCD
#define PC4  10 // SS_E
#define PA7  11 // MOSI
#define PA6  12 // MISO
#define PA5  13 // SCK
#define PB1  14 // SS_X
#define PB0  15 // SS_Y
#define PC5  16 // SS_Z

// I2C
#define PB6  17 // SCL
#define PB7  18 // SDA

// USB
#define PA12 19 // DD+
#define PA11 20 // DD//

// LED
#define PD0  21 // STATUS_LED

// PWM
// TIM2
#define PA15 22 // X_STEP
#define PB3  23 // Y_STEP
#define PB10 24 // Z_STEP
#define PB11 25 // E_STEP
// TIM3
#define PB5  26 // PWM_EXT1
#define PB4  27 // PWM_EXT2
#define PC8  28 // PWM_EXT3
#define PC9  29 // PWM_EXT4
// TIM5
#define PA0  30 // PWM_FAN1
#define PA1  31 // PWM_BED
#define PA2  32 // PWM_FAN2
#define PA3  33 // PWM_HEAT

// Stepper
#define PC12 34 // X_EN
#define PC10 35 // X_DIR
#define PC11 36 // X_DIAG
#define PD4  37 // Y_EN
#define PD6  38 // Y_DIR
#define PD5  39 // Y_DIAG
#define PE15 40 // Z_EN
#define PE13 41 // Z_DIR
#define PE14 42 // Z_DIAG
#define PE11 43 // E_EN
#define PE10 44 // E_DIR
#define PE12 45 // E_DIAG

// EXT3
#define PC6  46 // LCD_BEEPER
#define PC7  47 // BTN_ENC
#define PD14 48 // LCD_EN
#define PD15 49 // LCD_RS
#define PD13 50 // LCD_D4
#define PD12 51 // LCD_D5
#define PD11 52 // LCD_D6
#define PD10 53 // LCD_D7

// EXT2
#define PC14 54 // BTN_EN1
#define PC15 55 // BTN_EN2
#define PC13 56 // SD_CARD_DET

// SD Card Reader
#define PE7  57 // SS_SD

// Endstops
#define PB12 58 // X_MIN
#define PB13 59 // X_MAX
#define PB14 60 // Y_MIN
#define PB15 61 // Y_MAX
#define PD8  62 // Z_MIN
#define PD9  63 // Z_MAX

// ADC
#define PC0  64 // THERM_1
#define PC1  65 // THERM_2
#define PC2  66 // THERM_3
#define PA4  67 // FAN_SPEED1
#define PC3  68 // FAN_SPEED2
#define PE6  69

// PIN definition
#define NUM_DIGITAL_PINS 70
#define NUM_ANALOG_INPUTS 5
#define NUM_ANALOG_FIRST 64

// Below SPI and I2C definitions already done in the core
// Could be redefined here if differs from the default one
// SPI Definitions
#define PIN_SPI_SS              PE3 // Default for Arduino connector compatibility
#define PIN_SPI_MOSI            PE6 // Default for Arduino connector compatibility
#define PIN_SPI_MISO            PE5 // Default for Arduino connector compatibility
#define PIN_SPI_SCK             PE2 // Default for Arduino connector compatibility

// I2C Definitions
#define PIN_WIRE_SDA            PD13 // Default for Arduino connector compatibility
#define PIN_WIRE_SCL            PD12 // Default for Arduino connector compatibility

// Timer Definitions (optional)
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#define TIMER_TONE              TIM6
#define TIMER_SERVO             TIM7

// UART Definitions
// Define here Serial instance number to map on Serial generic name
#define SERIAL_UART_INSTANCE    1 //ex: 2 for Serial2 (USART2)
// DEBUG_UART could be redefined to print on another instance than 'Serial'
//#define DEBUG_UART              ((USART_TypeDef *) U(S)ARTX) // ex: USART3
// DEBUG_UART baudrate, default: 9600 if not defined
//#define DEBUG_UART_BAUDRATE     x
// DEBUG_UART Tx pin name, default: the first one found in PinMap_UART_TX for DEBUG_UART
//#define DEBUG_PINNAME_TX        PX_n // PinName used for TX

// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#define PIN_SERIAL_RX           PA10
#define PIN_SERIAL_TX           PA9

// Optional PIN_SERIALn_RX and PIN_SERIALn_TX where 'n' is the U(S)ART number
// Used when user instanciate a hardware Serial using its peripheral name.
// Example: HardwareSerial mySerial(USART3);
// will use PIN_SERIAL3_RX and PIN_SERIAL3_TX if defined.
//#define PIN_SERIALn_RX          x // For U(S)ARTn RX
//#define PIN_SERIALn_TX          x // For U(S)ARTn TX
//#define PIN_SERIALLP1_RX        x // For LPUART1 RX
//#define PIN_SERIALLP1_TX        x // For LPUART1 TX

// SD card slot Definitions
// SD detect signal can be defined if required
#define SD_DETECT_PIN           PD9


/* HAL configuration */
#define HSE_VALUE               25000000U

// Last Flash sector used for EEPROM emulation, address/sector depends on single/dual bank configuration.
// By default 2MB single bank
#define FLASH_BASE_ADDRESS  0x081C0000
#define FLASH_DATA_SECTOR   11
// USB Vbus sensing. Require to have Vbus pin connected to Vbus signal.
// Warning, pin is different depending on FullSpeed or High Speed mode used
// See AN4879 https://www.st.com/content/st_com/en/search.html#q=AN4879-t=resources-page=1
//#define USBD_VBUS_DETECTION_ENABLE
#define USBD_FIXED_PULLUP

// #define HAL_SD_MODULE_ENABLED
#define HAL_LTDC_MODULE_ENABLED

#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
  // These serial port names are intended to allow libraries and architecture-neutral
  // sketches to automatically default to the correct port name for a particular type
  // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #define SERIAL_PORT_MONITOR     Serial
  #define SERIAL_PORT_HARDWARE    Serial
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
