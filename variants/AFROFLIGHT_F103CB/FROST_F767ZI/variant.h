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

#define PA0  A0 // Digital pin 0
#define PA1  A1 // Digital pin 1
#define PA2  A2 // Digital pin 2
#define PA3  A3 // Digital pin 3
#define PA4  A4 // Digital pin 4
#define PA5  A5 // Digital pin 5
#define PA6  A6 // Digital pin 6
#define PA7  A7 // Digital pin 7
#define PA8  8 // Digital pin 8
#define PA9  9 // Digital pin 9
#define PA10 10 // Digital pin 10
#define PA11 11 // Digital pin 11
#define PA12 12 // Digital pin 12
#define PA13 13 // Digital pin 13
#define PA14 14 // Digital pin 14
#define PA15 15 // Digital pin 15 

#define PB0  A8 // Digital pin 16
#define PB1  A9 // Digital pin 17
#define PB2  18 // Digital pin 18
#define PB3  19 // Digital pin 19
#define PB4  20 // Digital pin 20
#define PB5  21 // Digital pin 21
#define PB6  22 // Digital pin 22
#define PB7  23 // Digital pin 23
#define PB8  24 // Digital pin 24
#define PB9  25 // Digital pin 25
#define PB10 26 // Digital pin 26
#define PB12 27 // Digital pin 27
#define PB13 28 // Digital pin 28
#define PB14 29 // Digital pin 29
#define PB15 30 // Digital pin 30

#define PC0  A10 // Digital pin 31
#define PC1  A11 // Digital pin 32
#define PC2  A12 // Digital pin 33
#define PC3  A13 // Digital pin 34
#define PC4  A14 // Digital pin 35
#define PC5  A15 // Digital pin 36
#define PC6  37 // Digital pin 37
#define PC7  38 // Digital pin 38
#define PC8  39 // Digital pin 39
#define PC9  40 // Digital pin 40
#define PC10 41 // Digital pin 41
#define PC11 42 // Digital pin 42
#define PC12 43 // Digital pin 43
#define PC13 44 // Digital pin 44
#define PC14 45 // Digital pin 45
#define PC15 46 // Digital pin 46 

#define PD0  47 // Digital pin 47
#define PD1  48 // Digital pin 48
#define PD2  49 // Digital pin 49
#define PD3  50 // Digital pin 50
#define PD4  51 // Digital pin 51
#define PD5  52 // Digital pin 52
#define PD6  53 // Digital pin 53
#define PD7  54 // Digital pin 54
#define PD8  55 // Digital pin 55
#define PD9  56 // Digital pin 56
#define PD10 57 // Digital pin 57
#define PD11 58 // Digital pin 58
#define PD12 59 // Digital pin 59
#define PD13 60 // Digital pin 60
#define PD14 61 // Digital pin 61
#define PD15 62 // Digital pin 62

#define PE0  63 // Digital pin 63
#define PE1  64 // Digital pin 64
#define PE2  65 // Digital pin 65
#define PE3  66 // Digital pin 66
#define PE4  67 // Digital pin 67
#define PE5  68 // Digital pin 68
#define PE6  69 // Digital pin 69
#define PE7  70 // Digital pin 70
#define PE8  71 // Digital pin 71
#define PE9  72 // Digital pin 72
#define PE10 73 // Digital pin 73
#define PE11 74 // Digital pin 74
#define PE12 75 // Digital pin 75
#define PE13 76 // Digital pin 76
#define PE14 77 // Digital pin 77
#define PE15 78 // Digital pin 78 #define 

#define PF0  79 // Digital pin 63
#define PF1  80 // Digital pin 64
#define PF2  81 // Digital pin 65
#define PF3  82 // Digital pin 66
#define PF4  83 // Digital pin 67
#define PF5  84 // Digital pin 68
#define PF6  85 // Digital pin 69
#define PF7  86 // Digital pin 70
#define PF8  87 // Digital pin 71
#define PF9  88 // Digital pin 72
#define PF10 89 // Digital pin 73
#define PF11 90 // Digital pin 74
#define PF12 91 // Digital pin 75
#define PF13 92 // Digital pin 76
#define PF14 93 // Digital pin 77
#define PF15 94 // Digital pin 78 #define 

#define PG0  95 // Digital pin 63
#define PG1  96 // Digital pin 64
#define PG2  97 // Digital pin 65
#define PG3  98 // Digital pin 66
#define PG4  99 // Digital pin 67
#define PG5  100 // Digital pin 68
#define PG6  101 // Digital pin 69
#define PG7  102 // Digital pin 70
#define PG8  103 // Digital pin 71
#define PG9  104 // Digital pin 72
#define PG10 105 // Digital pin 73
#define PG11 106 // Digital pin 74
#define PG12 107 // Digital pin 75
#define PG13 108 // Digital pin 76
#define PG14 109 // Digital pin 77
#define PG15 110 // Digital pin 78 #define 

#define PH0  111 // Digital pin 79, used by the external oscillator
#define PH1  112 // Digital pin 80, used by the external oscillator

// This must be a literal
#define NUM_DIGITAL_PINS 110
#define NUM_ANALOG_INPUTS 16

// Below SPI and I2C definitions already done in the core
// Could be redefined here if differs from the default one
// SPI Definitions
#define PIN_SPI_SS              PB12 // Default for Arduino connector compatibility
#define PIN_SPI_MOSI            PB15 // Default for Arduino connector compatibility
#define PIN_SPI_MISO            PB14 // Default for Arduino connector compatibility
#define PIN_SPI_SCK             PB13 // Default for Arduino connector compatibility

// I2C Definitions
#define PIN_WIRE_SDA            PD13 // Default for Arduino connector compatibility
#define PIN_WIRE_SCL            PD12 // Default for Arduino connector compatibility

// Timer Definitions (optional)
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#define TIMER_TONE              TIM6
#define TIMER_SERVO             TIM7

// UART Definitions
// Define here Serial instance number to map on Serial generic name
#define SERIAL_UART_INSTANCE    2 //ex: 2 for Serial2 (USART2)

// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#define PIN_SERIAL_RX           PC12
#define PIN_SERIAL_TX           PC11



// SD card slot Definitions
// SD detect signal can be defined if required
#define SD_DETECT_PIN           PD5

// USB Vbus sensing. Require to have Vbus pin connected to Vbus signal.
// Warning, pin is different depending on FullSpeed or High Speed mode used
// See AN4879 https://www.st.com/content/st_com/en/search.html#q=AN4879-t=resources-page=1
//#define USBD_VBUS_DETECTION_ENABLE
// #define USBD_FIXED_PULLUP

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
